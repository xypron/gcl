/* h/gclincl.h.  Generated automatically by configure.  */


/* define where the heap could begin.   Normally should
be the smallest value returned by sbrk().   Underestimating
by 10-20 megabytes is not a problem. */

#define DBEGIN 0x8000000 /* where data begins */


/* the size of the page tables for gcl.  Each page is PAGESIZE which
is usually 4K or 8K bytes.  From 1 to 3 bytes per page are
preallocated in a table at compile time.  this must be a power of 2 if
SGC is enabled.  */

#define MAXPAGE 32*1024


/* check to see if getcwd exists
*/
#define HAVE_GETCWD 1


/* if we dont have USEGETCWD, we will use GETWD unless following defined
*/
#define HAVE_GETWD 1


/* no gettimeofday function */

/* #undef NO_GETTOD */

/* define if have <asm/signal.h> */
#define HAVE_ASM_SIGNAL_H 1

/* define if have <asm/sigcontext.h> */
#define HAVE_ASM_SIGCONTEXT_H 1

/* define if have struct sigcontext in one of above */
/* #undef HAVE_SIGCONTEXT */


/* define if have <sys/ioctl.h> */
#define HAVE_SYS_IOCTL_H 1

/* define if we can use the file nsocket.c   */
#define HAVE_NSOCKET 1  

#ifndef HAVE_ALLOCA
/* define this if you have alloca */
#define HAVE_ALLOCA 1 
#endif


/* define if need alloca.h */
/* #undef NEED_ALLOCA_H */

#ifdef NEED_ALLOCA_H
#include <alloca.h>
#endif


/* define LISTEN_USE_FCNTL  if we can check for input using fcntl */
#define LISTEN_USE_FCNTL 1

/* if signal.h alone contains the stuff necessary for sgc */
#define SIGNAL_H_HAS_SIGCONTEXT 1


/* define if the profil system call is not defined in libc */
#define NO_PROFILE 1 


/* define if the _cleanup() function exists and should be called
   before saving */
/* #define USE_CLEANUP  */


/* define if BIG_ENDIAN or LITTLE_ENDIAN is defined by including
   the standard includes */
/* #define ENDIAN_ALREADY_DEFINED */

/* define if SV_ONSTACK is defined in signal.h */
#define HAVE_SV_ONSTACK 1 
