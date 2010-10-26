#include "linux.h"

#include <asm/cachectl.h>
int cacheflush(void *,int,int);
#define CLEAR_CACHE_LINE_SIZE 32
#define CLEAR_CACHE do {void *v=memory->cfd.cfd_start,*ve=v+memory->cfd.cfd_size; \
                        v=(void *)((unsigned long)v & ~(CLEAR_CACHE_LINE_SIZE - 1));\
                        cacheflush(v,ve-v,BCACHE);\
                    } while(0)


#undef MPROTECT_ACTION_FLAGS
#define MPROTECT_ACTION_FLAGS SA_RESTART|SA_SIGINFO
#ifdef IN_GBC
#define GET_FAULT_ADDR(sig,code,scp,addr) \
  ((siginfo_t *)code )->si_addr
#endif

/* Reenable when recent mips kernel bug fixed -- SIGBUS passed on
   occasion instead of SIGSEGV with no address passed in siginfo_t*/
/* kernel bug now fixed, but likely not everywhere.  Add additional
   memprotect test in sgbc.c to ensure we have a working kernel */
#define SGC 

#if SIZEOF_LONG==4
#define RELOC_H "elf32_mips_reloc.h"
#define SPECIAL_RELOC_H "elf32_mips_reloc_special.h"
#else
#define RELOC_H "elf64_mips_reloc.h"
#define SPECIAL_RELOC_H "elf64_mips_reloc_special.h"
#endif

/*Remove when .MIPS.stubs are replaced with callable .plt entries*/
#define LD_BIND_NOW
