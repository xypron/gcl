/* h/gclincl.h.  Generated automatically by configure.  */
/* h/gclincl.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define if you have alloca, as a function or macro.  */
#define HAVE_ALLOCA 1

/* Define if you have <alloca.h> and it should be used (not on Ultrix).  */
/* #undef HAVE_ALLOCA_H */

#define DBEGIN 0x8000000 /* where data begins */

#define MAXPAGE 32*1024

/* #undef NO_GETTOD */

/* define if have struct sigcontext in one of above */
/* #undef HAVE_SIGCONTEXT */

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
/* #undef NO_PROFILE */ 

/* define if the _cleanup() function exists and should be called
   before saving */
/* #define USE_CLEANUP  */

/* define if BIG_ENDIAN or LITTLE_ENDIAN is defined by including
   the standard includes */
/* #define ENDIAN_ALREADY_DEFINED */

/* define if SV_ONSTACK is defined in signal.h */
#define HAVE_SV_ONSTACK 1 

#define CSTACK_ADDRESS -1073743432 

#define HAVE_SIGSYS 1

/* #undef HAVE_SIGEMT */

/* define if setenv  is define */
#define HAVE_SETENV 1

/* define if putenv  is define */
/* #undef HAVE_PUTENV */

#define HAVE_LONG_LONG 1

/* define if want to use GMP */
#define GMP 1

/* have a broken version of C compiler which makes bad code for -O4 */
/* #undef BROKEN_O4_OPT */ 

/*  See if gettimeofday is declared in the <sys/time.h> header file. */
/*  if not, set the GETTOD_NOT_DECLARED flag so that tclPort.h can */
/*  declare it. */

/* #undef GETTOD_NOT_DECLARED */

/* #undef HAVE_BSDGETTIMEOFDAY */

/* #undef NO_UNAME */

/*  FIONBIO vs. O_NONBLOCK for nonblocking I/O */
/* #undef USE_FIONBIO */

/* readline support */
/* #undef HAVE_READLINE */

/* Define if you have the getcwd function.  */
#define HAVE_GETCWD 1

/* Define if you have the getwd function.  */
#define HAVE_GETWD 1

/* Define if you have the <asm/sigcontext.h> header file.  */
#define HAVE_ASM_SIGCONTEXT_H 1

/* Define if you have the <asm/signal.h> header file.  */
#define HAVE_ASM_SIGNAL_H 1

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H 1
