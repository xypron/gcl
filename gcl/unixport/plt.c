#include <string.h>
#include <stdlib.h>

typedef struct {
  const char *n;
  unsigned long ad;
} Plt;

static int
pltcomp(const void *v1,const void *v2) {
  const Plt *p1=v1,*p2=v2;

  return strcmp(p1->n,p2->n);

}

#include <setjmp.h>
#include <stdio.h>
#include <math.h>

#define MY_PLT(a_) {#a_,(unsigned long)(void *)a_}

int
my_plt(const char *s,unsigned long *v) {

  Plt mplt[]={ 
    /* This is an attempt to capture undefined symbol addresses from
       the .plt section of the map output of the linker.  On some
       platforms, ia64, hppa, mips, and ppc64 at the time of this
       writing, the linker does not output a plt table in the map.*/
#include "plt.h" 
  },*p=mplt,*pe=p+sizeof(mplt)/sizeof(*mplt),tp,
      mplt1[]={
	/* This is an attempt to at least capture the addresses to
	   which the compiler directly refers in C code. (Some symbols
	   are not explicitly mentioned in the C source but are
	   generated by gcc, usually in a platform specific way). At
	   the time of this writing, these symbols alone are
	   sufficient for compiling maxima,acl2,and axiom on x86.
	   This table is not (currently at least) consulted in
	   actuality -- the mere mention of the symbols here (at
	   present) ensures that the symbols are assigned values by
	   the linker, which are used preferentially to these values
	   in sfasli.c.  FIXME -- this should be made synchronous with
	   compiler changes; sort the list automatically.  SORT THIS
	   LIST BY HAND FOR THE TIME BEING. */
	MY_PLT(_IO_getc),
	MY_PLT(_IO_putc),
	MY_PLT(_setjmp),
	MY_PLT(acos),
	MY_PLT(asin),
	MY_PLT(atan),
	MY_PLT(cos),
	MY_PLT(exp),
	MY_PLT(feof),
	MY_PLT(log),
	MY_PLT(setjmp),
	MY_PLT(sin),
	MY_PLT(sqrt),
	MY_PLT(tan)
      },*p1=mplt1,*pe1=p1+sizeof(mplt1)/sizeof(*mplt1);

  tp.n=s;
  if ((p=bsearch(&tp,p,pe-p,sizeof(*p),pltcomp))) {
    *v=p->ad;
    return 0;
  }
  if ((p1=bsearch(&tp,p1,pe1-p1,sizeof(*p1),pltcomp))) {
    *v=p1->ad;
    return 0;
  }
  return -1;

}
