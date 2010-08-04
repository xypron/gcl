/* Dump Gcl in Mach-O format for use on Mac OS X.
   Copyright (C) 2001, 2002, 2003, 2004, 2005,
                 2006, 2007, 2008, 2009, 2010 Free Software Foundation, Inc.

This file is part of GNU Gcl.

GNU Gcl is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

GNU Gcl is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Gcl.  If not, see <http://www.gnu.org/licenses/>.  */

/* Contributed by Andrew Choi (akochoi@mac.com).  */

/* Documentation note.

   Consult the following documents/files for a description of the
   Mach-O format: the file loader.h, man pages for Mach-O and ld, old
   NEXTSTEP documents of the Mach-O format.  The tool otool dumps the
   mach header (-h option) and the load commands (-l option) in a
   Mach-O file.  The tool nm on Mac OS X displays the symbol table in
   a Mach-O file.  For examples of unexec for the Mach-O format, see
   the file unexnext.c in the GNU Gcl distribution, the file
   unexdyld.c in the Darwin port of GNU Gcl 20.7, and unexdyld.c in
   the Darwin port of XGcl 21.1.  Also the Darwin Libc source
   contains the source code for malloc_freezedry and malloc_jumpstart.
   Read that to see what they do.  This file was written completely
   from scratch, making use of information from the above sources.  */

/* The Mac OS X implementation of unexec makes use of Darwin's `zone'
   memory allocator.  All calls to malloc, realloc, and free in Gcl
   are redirected to unexec_malloc, unexec_realloc, and unexec_free in
   this file.  When tgcl is run, all memory requests are handled in
   the zone GclZone.  The Darwin memory allocator library calls
   maintain the data structures to manage this zone.  Dumping writes
   its contents to data segments of the executable file.  When gcl
   is run, the loader recreates the contents of the zone in memory.
   However since the initialization routine of the zone memory
   allocator is run again, this `zone' can no longer be used as a
   heap.  That is why gcl uses the ordinary malloc system call to
   allocate memory.  Also, when a block of memory needs to be
   reallocated and the new size is larger than the old one, a new
   block must be obtained by malloc and the old contents copied to
   it.  */

/* Peculiarity of the Mach-O files generated by ld in Mac OS X
   (possible causes of future bugs if changed).

   The file offset of the start of the __TEXT segment is zero.  Since
   the Mach header and load commands are located at the beginning of a
   Mach-O file, copying the contents of the __TEXT segment from the
   input file overwrites them in the output file.  Despite this,
   unexec works fine as written below because the segment load command
   for __TEXT appears, and is therefore processed, before all other
   load commands except the segment load command for __PAGEZERO, which
   remains unchanged.

   Although the file offset of the start of the __TEXT segment is
   zero, none of the sections it contains actually start there.  In
   fact, the earliest one starts a few hundred bytes beyond the end of
   the last load command.  The linker option -headerpad controls the
   minimum size of this padding.  Its setting can be changed in
   s/darwin.h.  A value of 0x690, e.g., leaves room for 30 additional
   load commands for the newly created __DATA segments (at 56 bytes
   each).  Unexec fails if there is not enough room for these new
   segments.

   The __TEXT segment contains the sections __text, __cstring,
   __picsymbol_stub, and __const and the __DATA segment contains the
   sections __data, __la_symbol_ptr, __nl_symbol_ptr, __dyld, __bss,
   and __common.  The other segments do not contain any sections.
   These sections are copied from the input file to the output file,
   except for __data, __bss, and __common, which are dumped from
   memory.  The types of the sections __bss and __common are changed
   from S_ZEROFILL to S_REGULAR.  Note that the number of sections and
   their relative order in the input and output files remain
   unchanged.  Otherwise all n_sect fields in the nlist records in the
   symbol table (specified by the LC_SYMTAB load command) will have to
   be changed accordingly.
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/types.h>
#include <unistd.h>
#include <crt_externs.h>
#include <mach/mach.h>
#include <mach-o/loader.h>
#include <mach-o/reloc.h>
#if defined (__ppc__)
#include <mach-o/ppc/reloc.h>
#endif
#include <mach-o/nlist.h>
#include <mach-o/getsect.h>
#undef malloc
#undef realloc
#undef free
#include <malloc/malloc.h>

#include <assert.h>

#ifdef _LP64
#define mach_header			mach_header_64
#define segment_command			segment_command_64
#undef  VM_REGION_BASIC_INFO_COUNT
#define VM_REGION_BASIC_INFO_COUNT	VM_REGION_BASIC_INFO_COUNT_64
#undef  VM_REGION_BASIC_INFO
#define VM_REGION_BASIC_INFO		VM_REGION_BASIC_INFO_64
#undef  LC_SEGMENT
#define LC_SEGMENT			LC_SEGMENT_64
#define vm_region			vm_region_64
#define section				section_64
#undef MH_MAGIC
#define MH_MAGIC			MH_MAGIC_64
#endif

#define VERBOSE 0

/* Size of buffer used to copy data from the input file to the output
   file in function unexec_copy.  */
#define UNEXEC_COPY_BUFSZ 1024

/* Regions with memory addresses above this value are assumed to be
   mapped to dynamically loaded libraries and will not be dumped.  */
#define VM_DATA_TOP (20 * 1024 * 1024)

/* Type of an element on the list of regions to be dumped.  */
struct region_t {
  vm_address_t address;
  vm_size_t size;
  vm_prot_t protection;
  vm_prot_t max_protection;

  struct region_t *next;
};

/* Head and tail of the list of regions to be dumped.  */
static struct region_t *region_list_head = 0;
static struct region_t *region_list_tail = 0;

/* Pointer to array of load commands.  */
static struct load_command **lca;

/* Number of load commands.  */
static int nlc;

/* The highest VM address of segments loaded by the input file.
   Regions with addresses beyond this are assumed to be allocated
   dynamically and thus require dumping.  */
static vm_address_t infile_lc_highest_addr = 0;

/* The lowest file offset used by the all sections in the __TEXT
   segments.  This leaves room at the beginning of the file to store
   the Mach-O header.  Check this value against header size to ensure
   the added load commands for the new __DATA segments did not
   overwrite any of the sections in the __TEXT segment.  */
static unsigned long text_seg_lowest_offset = 0x10000000;

/* Mach header.  */
static struct mach_header mh;

/* Offset at which the next load command should be written.  */
static unsigned long curr_header_offset = sizeof (struct mach_header);

/* Offset at which the next segment should be written.  */
static unsigned long curr_file_offset = 0;

static unsigned long pagesize;
#define ROUNDUP_TO_PAGE_BOUNDARY(x)	(((x) + pagesize - 1) & ~(pagesize - 1))

static int infd, outfd;

static malloc_zone_t *gcl_zone;

/* file offset of input file's data segment */
static off_t data_segment_old_fileoff = 0;

static struct segment_command *data_segment_scp;

void
reset_unexec_globals() {
  region_list_head=NULL;
  region_list_tail=NULL;
  lca=NULL;
  nlc=0;
  infile_lc_highest_addr=0;
  text_seg_lowest_offset=0x10000000;
  memset(&mh,0,sizeof(mh));
  curr_header_offset=sizeof (struct mach_header);
  curr_file_offset=0;
  pagesize=0;
  infd=0;
  outfd=0;
  gcl_zone=NULL;
  data_segment_old_fileoff=0;
  data_segment_scp=NULL;
}

#define MAX_MARKED_REGIONS 1024

vm_range_t marked_regions [MAX_MARKED_REGIONS];

unsigned num_marked_regions;

/* Size of the heap.  */
/* #define BIG_HEAP_SIZE 0x50000000 */
#define BIG_HEAP_SIZE MAXPAGE*PAGESIZE
int big_heap = BIG_HEAP_SIZE;

/* Start of the heap.  */
char *mach_mapstart = 0;

/* End of the heap.  */
char *mach_maplimit = 0;

/* Position ot the break within the heap.  */
char *mach_brkpt = 0;

/* Read N bytes from infd into memory starting at address DEST.
   Return true if successful, false otherwise.  */
static int
unexec_read (void *dest, size_t n)
{
  return n == read (infd, dest, n);
}

/* Write COUNT bytes from memory starting at address SRC to outfd
   starting at offset DEST.  Return true if successful, false
   otherwise.  */
static int
unexec_write (off_t dest, const void *src, size_t count)
{
  if (lseek (outfd, dest, SEEK_SET) != dest)
    return 0;

  return write (outfd, src, count) == count;
}

/* Write COUNT bytes of zeros to outfd starting at offset DEST.
   Return true if successful, false otherwise.  */
static int
unexec_write_zero (off_t dest, size_t count)
{
  char buf[UNEXEC_COPY_BUFSZ];
  ssize_t bytes;

  bzero (buf, UNEXEC_COPY_BUFSZ);
  if (lseek (outfd, dest, SEEK_SET) != dest)
    return 0;

  while (count > 0)
    {
      bytes = count > UNEXEC_COPY_BUFSZ ? UNEXEC_COPY_BUFSZ : count;
      if (write (outfd, buf, bytes) != bytes)
	return 0;
      count -= bytes;
    }

  return 1;
}

/* Copy COUNT bytes from starting offset SRC in infd to starting
   offset DEST in outfd.  Return true if successful, false
   otherwise.  */
static int
unexec_copy (off_t dest, off_t src, ssize_t count)
{
  ssize_t bytes_read;
  ssize_t bytes_to_read;

  char buf[UNEXEC_COPY_BUFSZ];

  if (lseek (infd, src, SEEK_SET) != src)
    return 0;

  if (lseek (outfd, dest, SEEK_SET) != dest)
    return 0;

  while (count > 0)
    {
      bytes_to_read = count > UNEXEC_COPY_BUFSZ ? UNEXEC_COPY_BUFSZ : count;
      bytes_read = read (infd, buf, bytes_to_read);
      if (bytes_read <= 0)
	return 0;
      if (write (outfd, buf, bytes_read) != bytes_read)
	return 0;
      count -= bytes_read;
    }

  return 1;
}

/* Debugging and informational messages routines.  */

static void
unexec_error (char *format, ...)
{
  va_list ap;

  va_start (ap, format);
  fprintf (stderr, "unexec: ");
  vfprintf (stderr, format, ap);
  fprintf (stderr, "\n");
  va_end (ap);
  exit (1);
}

/* More informational messages routines.  */

#if VERBOSE
static void
print_load_command_name (int lc)
{
  switch (lc)
    {
    case LC_SEGMENT:
#ifndef _LP64
      printf ("LC_SEGMENT       ");
#else
      printf ("LC_SEGMENT_64    ");
#endif
      break;
    case LC_LOAD_DYLINKER:
      printf ("LC_LOAD_DYLINKER ");
      break;
    case LC_LOAD_DYLIB:
      printf ("LC_LOAD_DYLIB    ");
      break;
    case LC_SYMTAB:
      printf ("LC_SYMTAB        ");
      break;
    case LC_DYSYMTAB:
      printf ("LC_DYSYMTAB      ");
      break;
    case LC_UNIXTHREAD:
      printf ("LC_UNIXTHREAD    ");
      break;
    case LC_PREBOUND_DYLIB:
      printf ("LC_PREBOUND_DYLIB");
      break;
    case LC_TWOLEVEL_HINTS:
      printf ("LC_TWOLEVEL_HINTS");
      break;
#ifdef LC_UUID
    case LC_UUID:
      printf ("LC_UUID          ");
      break;
#endif
#ifdef LC_DYLD_INFO
    case LC_DYLD_INFO:
      printf ("LC_DYLD_INFO     ");
      break;
    case LC_DYLD_INFO_ONLY:
      printf ("LC_DYLD_INFO_ONLY");
      break;
#endif
    default:
      printf ("unknown          ");
    }
}

static void
print_load_command (struct load_command *lc)
{
  print_load_command_name (lc->cmd);
  printf ("%8d", lc->cmdsize);

  if (lc->cmd == LC_SEGMENT)
    {
      struct segment_command *scp;
      struct section *sectp;
      int j;

      scp = (struct segment_command *) lc;
      printf (" %-16.16s %#10lx %#8lx\n",
	      scp->segname, (long) (scp->vmaddr), (long) (scp->vmsize));

      sectp = (struct section *) (scp + 1);
      for (j = 0; j < scp->nsects; j++)
	{
	  printf ("                           %-16.16s %#10lx %#8lx\n",
		  sectp->sectname, (long) (sectp->addr), (long) (sectp->size));
	  sectp++;
	}
    }
  else
    printf ("\n");
}
#endif

/* Copy a LC_SEGMENT load command other than the __DATA segment from
   the input file to the output file, adjusting the file offset of the
   segment and the file offsets of sections contained in it.  */
static void
copy_segment (struct load_command *lc)
{
  struct segment_command *scp = (struct segment_command *) lc;
  unsigned long old_fileoff = scp->fileoff;
  struct section *sectp;
  int j;

  scp->fileoff = curr_file_offset;

  sectp = (struct section *) (scp + 1);
  for (j = 0; j < scp->nsects; j++)
    {
      sectp->offset += curr_file_offset - old_fileoff;
      sectp++;
    }

#if VERBOSE
  printf ("Writing segment %-16.16s @ %#8lx (%#8lx/%#8lx @ %#10lx)\n",
	  scp->segname, (long) (scp->fileoff), (long) (scp->filesize),
	  (long) (scp->vmsize), (long) (scp->vmaddr));
#endif

  if (!unexec_copy (scp->fileoff, old_fileoff, scp->filesize))
    unexec_error ("cannot copy segment from input to output file");
  curr_file_offset += ROUNDUP_TO_PAGE_BOUNDARY (scp->filesize);

  if (!unexec_write (curr_header_offset, lc, lc->cmdsize))
    unexec_error ("cannot write load command to header");

  curr_header_offset += lc->cmdsize;
}

/* Copy a LC_SEGMENT load command for the __DATA segment in the input
   file to the output file.  We assume that only one such segment load
   command exists in the input file and it contains the sections
   __data, __bss, __common, __la_symbol_ptr, __nl_symbol_ptr, and
   __dyld.  The first three of these should be dumped from memory and
   the rest should be copied from the input file.  Note that the
   sections __bss and __common contain no data in the input file
   because their flag fields have the value S_ZEROFILL.  Dumping these
   from memory makes it necessary to adjust file offset fields in
   subsequently dumped load commands.  Then, create new __DATA segment
   load commands for regions on the region list other than the one
   corresponding to the __DATA segment in the input file.  */
static void
copy_data_segment (struct load_command *lc)
{
  struct segment_command *scp = (struct segment_command *) lc;
  struct section *sectp;
  int j;
  unsigned long header_offset, old_file_offset;

  /* The new filesize of the segment is set to its vmsize because data
     blocks for segments must start at region boundaries.  Note that
     this may leave unused locations at the end of the segment data
     block because the total of the sizes of all sections in the
     segment is generally smaller than vmsize.  */
  scp->filesize = scp->vmsize;

#if VERBOSE
  printf ("Writing segment %-16.16s @ %#8lx (%#8lx/%#8lx @ %#10lx)\n",
	  scp->segname, curr_file_offset, (long)(scp->filesize),
	  (long)(scp->vmsize), (long) (scp->vmaddr));
#endif

  /* Offsets in the output file for writing the next section structure
     and segment data block, respectively.  */
  header_offset = curr_header_offset + sizeof (struct segment_command);

  sectp = (struct section *) (scp + 1);
  for (j = 0; j < scp->nsects; j++)
    {
      old_file_offset = sectp->offset;
      sectp->offset = sectp->addr - scp->vmaddr + curr_file_offset;
      /* The __data section is dumped from memory.  The __bss and
	 __common sections are also dumped from memory but their flag
	 fields require changing (from S_ZEROFILL to S_REGULAR).  The
	 other three kinds of sections are just copied from the input
	 file.  */
      if (strncmp (sectp->sectname, SECT_DATA, 16) == 0)
	{
	  if (!unexec_write (sectp->offset, (void *) sectp->addr, sectp->size))
	    unexec_error ("cannot write section %s", SECT_DATA);
	  if (!unexec_write (header_offset, sectp, sizeof (struct section)))
	    unexec_error ("cannot write section %s's header", SECT_DATA);
	}
      else if (strncmp (sectp->sectname, SECT_COMMON, 16) == 0)
	{
	  sectp->flags = S_REGULAR;
	  if (!unexec_write (sectp->offset, (void *) sectp->addr, sectp->size))
	    unexec_error ("cannot write section %s", sectp->sectname);
	  if (!unexec_write (header_offset, sectp, sizeof (struct section)))
	    unexec_error ("cannot write section %s's header", sectp->sectname);
	}
      else if (strncmp (sectp->sectname, SECT_BSS, 16) == 0)
	{
	  /* extern char *my_endbss_static; */
	  unsigned long my_size;

	  sectp->flags = S_REGULAR;

	  /* Clear uninitialized local variables in statically linked
	     libraries.  In particular, function pointers stored by
	     libSystemStub.a, which is introduced in Mac OS X 10.4 for
	     binary compatibility with respect to long double, are
	     cleared so that they will be reinitialized when the
	     dumped binary is executed on other versions of OS.  */
	  my_size = sectp->size;/* (unsigned long)my_endbss_static - sectp->addr; */
	  /* if (!(sectp->addr <= (unsigned long)my_endbss_static */
	  /* 	&& my_size <= sectp->size)) */
	  /*   unexec_error ("my_endbss_static is not in section %s", */
	  /* 		  sectp->sectname); */
	  if (!unexec_write (sectp->offset, (void *) sectp->addr, my_size))
	    unexec_error ("cannot write section %s", sectp->sectname);
	  if (!unexec_write_zero (sectp->offset + my_size,
				  sectp->size - my_size))
	    unexec_error ("cannot write section %s", sectp->sectname);
	  if (!unexec_write (header_offset, sectp, sizeof (struct section)))
	    unexec_error ("cannot write section %s's header", sectp->sectname);
	}
      else if (strncmp (sectp->sectname, "__la_symbol_ptr", 16) == 0
	       || strncmp (sectp->sectname, "__nl_symbol_ptr", 16) == 0
	       || strncmp (sectp->sectname, "__la_sym_ptr2", 16) == 0
	       || strncmp (sectp->sectname, "__dyld", 16) == 0
	       || strncmp (sectp->sectname, "__const", 16) == 0
	       || strncmp (sectp->sectname, "__cfstring", 16) == 0
	       || strncmp (sectp->sectname, "__gcc_except_tab", 16) == 0
	       || strncmp (sectp->sectname, "__program_vars", 16) == 0
	       || strncmp (sectp->sectname, "__objc_", 7) == 0)
	{
	  if (!unexec_copy (sectp->offset, old_file_offset, sectp->size))
	    unexec_error ("cannot copy section %s", sectp->sectname);
	  if (!unexec_write (header_offset, sectp, sizeof (struct section)))
	    unexec_error ("cannot write section %s's header", sectp->sectname);
	}
      else
	unexec_error ("unrecognized section name in __DATA segment");

#if VERBOSE
      printf ("        section %-16.16s at %#8lx - %#8lx (sz: %#8lx)\n",
	      sectp->sectname, (long) (sectp->offset),
	      (long) (sectp->offset + sectp->size), (long) (sectp->size));
#endif

      header_offset += sizeof (struct section);
      sectp++;
    }

  curr_file_offset += ROUNDUP_TO_PAGE_BOUNDARY (scp->filesize);

  if (!unexec_write (curr_header_offset, scp, sizeof (struct segment_command)))
    unexec_error ("cannot write header of __DATA segment");
  curr_header_offset += lc->cmdsize;

  /* Create new __DATA segment load commands for regions on the region
     list that do not corresponding to any segment load commands in
     the input file.
  */
  /* for (j = 0; j < num_unexec_regions; j++) */
    {
      struct segment_command sc;

      sc.cmd = LC_SEGMENT;
      sc.cmdsize = sizeof (struct segment_command);
      /* strncpy (sc.segname, SEG_DATA, 16); */
      strncpy (sc.segname, "__HEAP", 16);
      sc.vmaddr = (long)mach_mapstart;
      sc.vmsize = mach_maplimit-mach_mapstart;
      sc.fileoff = curr_file_offset;
      sc.filesize = core_end-mach_mapstart;
      sc.maxprot = VM_PROT_READ | VM_PROT_WRITE | VM_PROT_EXECUTE;
      sc.initprot = VM_PROT_READ | VM_PROT_WRITE | VM_PROT_EXECUTE;
      sc.nsects = 0;
      sc.flags = 0;

#if VERBOSE
      printf ("Writing segment %-16.16s @ %#8lx (%#8lx/%#8lx @ %#10lx)\n",
	      sc.segname, (long) (sc.fileoff), (long) (sc.filesize),
	      (long) (sc.vmsize), (long) (sc.vmaddr));
#endif

      if (!unexec_write (sc.fileoff, (void *) sc.vmaddr, sc.filesize))
	unexec_error ("cannot write new __DATA segment");
      curr_file_offset += ROUNDUP_TO_PAGE_BOUNDARY (sc.filesize);

      if (!unexec_write (curr_header_offset, &sc, sc.cmdsize))
	unexec_error ("cannot write new __DATA segment's header");
      curr_header_offset += sc.cmdsize;
      mh.ncmds++;
    }
}

/* Copy a LC_SYMTAB load command from the input file to the output
   file, adjusting the file offset fields.  */
static void
copy_symtab (struct load_command *lc, long delta)
{
  struct symtab_command *stp = (struct symtab_command *) lc;

  stp->symoff += delta;
  stp->stroff += delta;

#if VERBOSE
  printf ("Writing LC_SYMTAB command\n");
#endif

  if (!unexec_write (curr_header_offset, lc, lc->cmdsize))
    unexec_error ("cannot write symtab command to header");

  curr_header_offset += lc->cmdsize;
}

/* Fix up relocation entries. */
static void
unrelocate (const char *name, off_t reloff, int nrel, vm_address_t base)
{
  int i, unreloc_count;
  struct relocation_info reloc_info;
  struct scattered_relocation_info *sc_reloc_info
    = (struct scattered_relocation_info *) &reloc_info;
  vm_address_t location;

  for (unreloc_count = 0, i = 0; i < nrel; i++)
    {
      if (lseek (infd, reloff, L_SET) != reloff)
	unexec_error ("unrelocate: %s:%d cannot seek to reloc_info", name, i);
      if (!unexec_read (&reloc_info, sizeof (reloc_info)))
	unexec_error ("unrelocate: %s:%d cannot read reloc_info", name, i);
      reloff += sizeof (reloc_info);

      if (sc_reloc_info->r_scattered == 0)
	switch (reloc_info.r_type)
	  {
	  case GENERIC_RELOC_VANILLA:
	    location = base + reloc_info.r_address;
	    if (location >= data_segment_scp->vmaddr
		&& location < (data_segment_scp->vmaddr
			       + data_segment_scp->vmsize))
	      {
		off_t src_off = data_segment_old_fileoff
		  + (location - data_segment_scp->vmaddr);
		off_t dst_off = data_segment_scp->fileoff
		  + (location - data_segment_scp->vmaddr);

		if (!unexec_copy (dst_off, src_off, 1 << reloc_info.r_length))
		  unexec_error ("unrelocate: %s:%d cannot copy original value",
				name, i);
		unreloc_count++;
	      }
	    break;
	  default:
	    unexec_error ("unrelocate: %s:%d cannot handle type = %d",
			  name, i, reloc_info.r_type);
	  }
      else
	switch (sc_reloc_info->r_type)
	  {
#if defined (__ppc__)
	  case PPC_RELOC_PB_LA_PTR:
	    /* nothing to do for prebound lazy pointer */
	    break;
#endif
	  default:
	    unexec_error ("unrelocate: %s:%d cannot handle scattered type = %d",
			  name, i, sc_reloc_info->r_type);
	  }
    }

#if VERBOSE
  if (nrel > 0)
    printf ("Fixed up %d/%d %s relocation entries in data segment.\n",
	    unreloc_count, nrel, name);
#endif

}

#if __ppc64__
/* Rebase r_address in the relocation table.  */
static void
rebase_reloc_address (off_t reloff, int nrel, long linkedit_delta, long diff)
{
  int i;
  struct relocation_info reloc_info;
  struct scattered_relocation_info *sc_reloc_info
    = (struct scattered_relocation_info *) &reloc_info;

  for (i = 0; i < nrel; i++, reloff += sizeof (reloc_info))
    {
      if (lseek (infd, reloff - linkedit_delta, L_SET)
	  != reloff - linkedit_delta)
	unexec_error ("rebase_reloc_table: cannot seek to reloc_info");
      if (!unexec_read (&reloc_info, sizeof (reloc_info)))
	unexec_error ("rebase_reloc_table: cannot read reloc_info");

      if (sc_reloc_info->r_scattered == 0
	  && reloc_info.r_type == GENERIC_RELOC_VANILLA)
	{
	  reloc_info.r_address -= diff;
	  if (!unexec_write (reloff, &reloc_info, sizeof (reloc_info)))
	    unexec_error ("rebase_reloc_table: cannot write reloc_info");
	}
    }
}
#endif

/* Copy a LC_DYSYMTAB load command from the input file to the output
   file, adjusting the file offset fields.  */
static void
copy_dysymtab (struct load_command *lc, long delta)
{
  struct dysymtab_command *dstp = (struct dysymtab_command *) lc;
  vm_address_t base;

#ifdef _LP64
#if __ppc64__
  {
    int i;

    base = 0;
    for (i = 0; i < nlc; i++)
      if (lca[i]->cmd == LC_SEGMENT)
	{
	  struct segment_command *scp = (struct segment_command *) lca[i];

	  if (scp->vmaddr + scp->vmsize > 0x100000000
	      && (scp->initprot & VM_PROT_WRITE) != 0)
	    {
	      base = data_segment_scp->vmaddr;
	      break;
	    }
	}
  }
#else
  /* First writable segment address.  */
  base = data_segment_scp->vmaddr;
#endif
#else
  /* First segment address in the file (unless MH_SPLIT_SEGS set). */
  base = 0;
#endif

  unrelocate ("local", dstp->locreloff, dstp->nlocrel, base);
  unrelocate ("external", dstp->extreloff, dstp->nextrel, base);

  if (dstp->nextrel > 0) {
    dstp->extreloff += delta;
  }

  if (dstp->nlocrel > 0) {
    dstp->locreloff += delta;
  }

  if (dstp->nindirectsyms > 0)
    dstp->indirectsymoff += delta;

#if VERBOSE
  printf ("Writing LC_DYSYMTAB command\n");
#endif

  if (!unexec_write (curr_header_offset, lc, lc->cmdsize))
    unexec_error ("cannot write symtab command to header");

  curr_header_offset += lc->cmdsize;

#if __ppc64__
  /* Check if the relocation base needs to be changed.  */
  if (base == 0)
    {
      vm_address_t newbase = 0;
      int i;

      for (i = 0; i < num_unexec_regions; i++)
	if (unexec_regions[i].range.address + unexec_regions[i].range.size
	    > 0x100000000)
	  {
	    newbase = data_segment_scp->vmaddr;
	    break;
	  }

      if (newbase)
	{
	  rebase_reloc_address (dstp->locreloff, dstp->nlocrel, delta, newbase);
	  rebase_reloc_address (dstp->extreloff, dstp->nextrel, delta, newbase);
	}
    }
#endif
}

/* Copy a LC_TWOLEVEL_HINTS load command from the input file to the output
   file, adjusting the file offset fields.  */
static void
copy_twolevelhints (struct load_command *lc, long delta)
{
  struct twolevel_hints_command *tlhp = (struct twolevel_hints_command *) lc;

  if (tlhp->nhints > 0) {
    tlhp->offset += delta;
  }

#if VERBOSE
  printf ("Writing LC_TWOLEVEL_HINTS command\n");
#endif

  if (!unexec_write (curr_header_offset, lc, lc->cmdsize))
    unexec_error ("cannot write two level hint command to header");

  curr_header_offset += lc->cmdsize;
}

#ifdef LC_DYLD_INFO
/* Copy a LC_DYLD_INFO(_ONLY) load command from the input file to the output
   file, adjusting the file offset fields.  */
static void
copy_dyld_info (struct load_command *lc, long delta)
{
  struct dyld_info_command *dip = (struct dyld_info_command *) lc;

  if (dip->rebase_off > 0)
    dip->rebase_off += delta;
  if (dip->bind_off > 0)
    dip->bind_off += delta;
  if (dip->weak_bind_off > 0)
    dip->weak_bind_off += delta;
  if (dip->lazy_bind_off > 0)
    dip->lazy_bind_off += delta;
  if (dip->export_off > 0)
    dip->export_off += delta;

#if VERBOSE
  printf ("Writing ");
  print_load_command_name (lc->cmd);
  printf (" command\n");
#endif

  if (!unexec_write (curr_header_offset, lc, lc->cmdsize))
    unexec_error ("cannot write dyld info command to header");

  curr_header_offset += lc->cmdsize;
}
#endif

/* Copy other kinds of load commands from the input file to the output
   file, ones that do not require adjustments of file offsets.  */
static void
copy_other (struct load_command *lc)
{
#if VERBOSE
  printf ("Writing ");
  print_load_command_name (lc->cmd);
  printf (" command\n");
#endif

  if (!unexec_write (curr_header_offset, lc, lc->cmdsize))
    unexec_error ("cannot write symtab command to header");

  curr_header_offset += lc->cmdsize;
}

/* Loop through all load commands and dump them.  Then write the Mach
   header.  */
static void
dump_it () {

  int i;
  long linkedit_delta = 0;
  
#if VERBOSE
  printf ("--- Load Commands written to Output File ---\n");
#endif
  
  for (i = 0; i < nlc; i++)
    switch (lca[i]->cmd) {

    case LC_SEGMENT: 
      {
	struct segment_command *scp = (struct segment_command *) lca[i];
	if (strncmp (scp->segname, SEG_DATA, 16) == 0) {
	  
	  /* save data segment file offset and segment_command for
	     unrelocate */
	  
	  if (data_segment_old_fileoff) 
	    unexec_error ("cannot handle multiple DATA segments in input file"); 
	  
	  data_segment_old_fileoff = scp->fileoff;
	  data_segment_scp = scp;
	  
	  copy_data_segment (lca[i]);

	} else {

	  if (strncmp (scp->segname, SEG_LINKEDIT, 16) == 0) {
	    if (linkedit_delta)
	      unexec_error ("cannot handle multiple LINKEDIT segments in input file");
	    linkedit_delta = curr_file_offset - scp->fileoff;
	  }
	  
	  if (strncmp (scp->segname, "__HEAP", 16) != 0) copy_segment (lca[i]); else mh.ncmds--;
	  
	}
      }
      break;
    case LC_SYMTAB:
      copy_symtab (lca[i], linkedit_delta);
      break;
    case LC_DYSYMTAB:
      copy_dysymtab (lca[i], linkedit_delta);
      break;
    case LC_TWOLEVEL_HINTS:
      copy_twolevelhints (lca[i], linkedit_delta);
      break;
#ifdef LC_DYLD_INFO
    case LC_DYLD_INFO:
    case LC_DYLD_INFO_ONLY:
      copy_dyld_info (lca[i], linkedit_delta);
      break;
#endif
    default:
      copy_other (lca[i]);
      break;
    }
  
  if (curr_header_offset > text_seg_lowest_offset)
    unexec_error ("not enough room for load commands for new __DATA segments");
  
#if VERBOSE
  printf ("%ld unused bytes follow Mach-O header\n",
		 text_seg_lowest_offset - curr_header_offset);
#endif
  
  mh.sizeofcmds = curr_header_offset - sizeof (struct mach_header);
  if (!unexec_write (0, &mh, sizeof (struct mach_header)))
    unexec_error ("cannot write final header contents");

}

/* Read header and load commands from input file.  Store the latter in
   the global array lca.  Store the total number of load commands in
   global variable nlc.  */
static void
read_load_commands_and_dump () {

  int i;

  if (!unexec_read (&mh, sizeof (struct mach_header)))
    unexec_error ("cannot read mach-o header");

  if (mh.magic != MH_MAGIC)
    unexec_error ("input file not in Mach-O format");

  if (mh.filetype != MH_EXECUTE)
    unexec_error ("input Mach-O file is not an executable object file");

#if VERBOSE
  printf ("--- Header Information ---\n");
  printf ("Magic = 0x%08x\n", mh.magic);
  printf ("CPUType = %d\n", mh.cputype);
  printf ("CPUSubType = %d\n", mh.cpusubtype);
  printf ("FileType = 0x%x\n", mh.filetype);
  printf ("NCmds = %d\n", mh.ncmds);
  printf ("SizeOfCmds = %d\n", mh.sizeofcmds);
  printf ("Flags = 0x%08x\n", mh.flags);
#endif

  nlc = mh.ncmds;
  lca=alloca(nlc*sizeof(struct load_command *));

  for (i = 0; i < nlc; i++) {

    struct load_command lc;

    /* Load commands are variable-size: so read the command type and
       size first and then read the rest.  */

    if (!unexec_read (&lc, sizeof (struct load_command)))
      unexec_error ("cannot read load command");

    lca[i]=(struct load_command *)alloca(lc.cmdsize);
    memcpy (lca[i], &lc, sizeof (struct load_command));

    if (!unexec_read (lca[i] + 1, lc.cmdsize - sizeof (struct load_command)))
      unexec_error ("cannot read content of load command");
    if (lc.cmd == LC_SEGMENT) {

      struct segment_command *scp = (struct segment_command *) lca[i];
      
      if (scp->vmaddr + scp->vmsize > infile_lc_highest_addr)
	infile_lc_highest_addr = scp->vmaddr + scp->vmsize;
      
      if (strncmp (scp->segname, SEG_TEXT, 16) == 0) {

	struct section *sectp = (struct section *) (scp + 1);
	int j;
	
	for (j = 0; j < scp->nsects; j++)
	  if (sectp->offset < text_seg_lowest_offset)
	    text_seg_lowest_offset = sectp->offset;
      }
    }
  }

#if VERBOSE
  printf ("Highest address of load commands in input file: %#8x\n",
	  infile_lc_highest_addr);

  printf ("Lowest offset of all sections in __TEXT segment: %#8lx\n",
	  text_seg_lowest_offset);

  printf ("--- List of Load Commands in Input File ---\n");
  printf ("# cmd              cmdsize name                address     size\n");

  for (i = 0; i < nlc; i++) {
    printf ("%1d ", i);
    print_load_command (lca[i]);
  }
#endif

  dump_it ();

}

/* Take a snapshot of Gcl and make a Mach-O format executable file
   from it.  The file names of the output and input files are outfile
   and infile, respectively.  The three other parameters are
   ignored.  */
void
unexec (char *outfile, char *infile, void *start_data, void *start_bss,
        void *entry_address) {

  reset_unexec_globals();
  
  pagesize = getpagesize ();
  if ((infd = open (infile, O_RDONLY, 0)) < 0)
    unexec_error ("cannot open input file `%s'", infile);

  if ((outfd = open (outfile, O_WRONLY | O_TRUNC | O_CREAT, 0755)) < 0) {
    close (infd);
    unexec_error ("cannot open output file `%s'", outfile);
  }

  read_load_commands_and_dump();

  close (outfd);

}

/* Replacement for broken sbrk(2).  */

void *my_sbrk (int incr)
{
  char               *temp, *ptr;
  kern_return_t       rtn;
  
  if (mach_brkpt == 0) {
    if ((rtn = vm_allocate (mach_task_self (), (vm_address_t *) &mach_brkpt,
                            big_heap, 1)) != KERN_SUCCESS) {
      unexec_error("my_sbrk(): vm_allocate() failed\n");
      return ((char *)-1);
    }
    if (!mach_brkpt) {
      /* Call this instead of fprintf() because no allocation is performed.  */
      unexec_error("my_sbrk(): cannot allocate heap\n");
      return ((char *)-1);        
    }
        
    mach_mapstart = mach_brkpt;
    mach_maplimit = mach_brkpt + big_heap;

  }
  if (incr == 0) {
    return (mach_brkpt);
  } else {
    ptr = mach_brkpt + incr;
    if (ptr <= mach_maplimit) {
      temp = mach_brkpt;
      mach_brkpt = ptr;
      return (temp);
    } else {
      unexec_error("my_sbrk(): no more memory\n");
      return ((char *)-1);
    }
  }
}

static size_t stub_size (malloc_zone_t *zone, const void *ptr)
{
    extern object malloc_list;
    object *p;
    
    for (p = &malloc_list ; *p && !endp(*p) ; p = &((*p)->c.c_cdr)) {
        size_t size = (*p)->c.c_car->st.st_dim;
        void *base = (*p)->c.c_car->st.st_self;  
        if (ptr >= base && ptr < base + size) {
            return (size);
        }
    }
    return (0);
}

#ifdef HAVE_MALLOC_ZONE_MEMALIGN
static void *
stub_memalign(size_t boundary, size_t size) {

  extern void *my_malloc (size_t);
  void *v=my_malloc(size+boundary-1);
  return (void *)(((unsigned long)v+boundary-1)&~(boundary-1));

}
#endif

static void *
stub_malloc(malloc_zone_t *zone, size_t size) {

  extern void *my_malloc (size_t);
  return my_malloc (size);

}

static void *
stub_calloc(malloc_zone_t *zone, size_t num_items, size_t size) {

  extern void *my_calloc (size_t, size_t);
  return my_calloc (num_items, size);

}

static void *
stub_valloc(malloc_zone_t *zone, size_t size) {

  extern void *my_valloc (size_t);
  return my_valloc (size);

}

static void *
stub_realloc(malloc_zone_t *zone, void *ptr, size_t size) {

  extern void *my_realloc (void *, size_t);
  return my_realloc (ptr, size);

}

static void stub_free (malloc_zone_t *zone, void *ptr) {

  extern void my_free (void *ptr);
  my_free (ptr);

}

void init_darwin_zone_compat () {

  extern unsigned malloc_num_zones;
  extern malloc_zone_t **malloc_zones;
  unsigned nmzc;
  malloc_zone_t *mzc[10];
  unsigned i;

  nmzc=malloc_num_zones;
  assert(nmzc<=sizeof(mzc)/sizeof(*mzc));
  memcpy(mzc,malloc_zones,nmzc*sizeof(*mzc));

  gcl_zone = malloc_create_zone (0, 0);
  malloc_set_zone_name (gcl_zone, "GclZone");

  gcl_zone->size               = (void *) stub_size;
  gcl_zone->malloc             = (void *) stub_malloc;
  gcl_zone->calloc             = (void *) stub_calloc;
  gcl_zone->valloc             = (void *) stub_valloc;
  gcl_zone->realloc            = (void *) stub_realloc;
  gcl_zone->free               = (void *) stub_free;
  gcl_zone->destroy            = (void *) stub_free;
  gcl_zone->batch_malloc       = (void *) stub_malloc;
  gcl_zone->batch_free         = (void *) stub_free;

#ifdef HAVE_MALLOC_ZONE_MEMALIGN
  gcl_zone->free_definite_size = (void *) stub_free;
  gcl_zone->memalign           = (void *) stub_memalign;
#endif

  malloc_zone_unregister(gcl_zone);
  for (i=0;i<nmzc;i++)
    malloc_zone_unregister(mzc[i]);

  /* Make our zone the default zone.  */
  malloc_zone_register (gcl_zone);
  for (i=0;i<nmzc;i++)
    malloc_zone_register (mzc[i]);

}

#ifdef UNIXSAVE
#include "save.c"
#endif

