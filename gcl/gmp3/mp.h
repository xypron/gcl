/* mp-h.in -- Definitions for the GNU multiple precision library  -*-mode:c-*-
   BSD mp compatible functions.

Copyright 1991, 1993, 1994, 1995, 1996, 2000, 2001 Free Software Foundation,
Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#ifndef __MP_H__


/* The following (everything under ifndef __GNU_MP__) must be identical in
   gmp.h and mp.h to allow both to be included in an application or during
   the library build.  Use the t-gmp-mp-h.pl script to check.  */
#ifndef __GNU_MP__
#define __GNU_MP__ 4

#define __need_size_t
#include <stddef.h>
#undef __need_size_t

/* The following instantiated by configure, for internal use only */
#if ! __GMP_WITHIN_CONFIGURE
/* #undef _LONG_LONG_LIMB */
#define __GMP_LIBGMP_STATIC  1
#define __GMP_LIBGMP_SHARED  1
#endif

#if  defined (__STDC__)                                 \
  || defined (__cplusplus)                              \
  || defined (_AIX)                                     \
  || defined (__DECC)                                   \
  || (defined (__mips) && defined (_SYSTYPE_SVR4))      \
  || defined (_MSC_VER)                                 \
  || defined (_WIN32)
#define __GMP_HAVE_CONST        1
#define __GMP_HAVE_PROTOTYPES   1
#define __GMP_HAVE_TOKEN_PASTE  1
#else
#define __GMP_HAVE_CONST        0
#define __GMP_HAVE_PROTOTYPES   0
#define __GMP_HAVE_TOKEN_PASTE  0
#endif


#if __GMP_HAVE_CONST
#define __gmp_const   const
#define __gmp_signed  signed
#else
#define __gmp_const
#define __gmp_signed
#endif

#if defined (__GNUC__) || defined (_MSC_VER)
#define __GMP_DECLSPEC_EXPORT  __declspec(dllexport)
#define __GMP_DECLSPEC_IMPORT  __declspec(dllimport)
#endif
#ifdef __WATCOMC__
#define __GMP_DECLSPEC_EXPORT  __export
#define __GMP_DECLSPEC_IMPORT  __import
#endif
#ifdef __IBMC__
#define __GMP_DECLSPEC_EXPORT  _Export
#define __GMP_DECLSPEC_IMPORT  _Import
#endif

#if __GMP_WITHIN_GMP
#ifdef DLL_EXPORT
#define __GMP_DECLSPEC  __GMP_DECLSPEC_EXPORT
#endif
#else
#if defined (_WIN32) && __GMP_LIBGMP_SHARED
#define __GMP_DECLSPEC  __GMP_DECLSPEC_IMPORT
#endif
#endif

#ifndef __GMP_DECLSPEC
#define __GMP_DECLSPEC
#endif

#ifdef _SHORT_LIMB
typedef unsigned int		mp_limb_t;
typedef int			mp_limb_signed_t;
#else
#ifdef _LONG_LONG_LIMB
typedef unsigned long long int	mp_limb_t;
typedef long long int		mp_limb_signed_t;
#else
typedef unsigned long int	mp_limb_t;
typedef long int		mp_limb_signed_t;
#endif
#endif

typedef mp_limb_t *		mp_ptr;
typedef __gmp_const mp_limb_t *	mp_srcptr;
#if defined (_CRAY) && ! defined (_CRAYMPP)
/* plain `int' is much faster (48 bits) */
#define __GMP_MP_SIZE_T_INT     1
typedef int			mp_size_t;
typedef int			mp_exp_t;
#else
#define __GMP_MP_SIZE_T_INT     0
typedef long int		mp_size_t;
typedef long int		mp_exp_t;
#endif

typedef struct
{
  int _mp_alloc;		/* Number of *limbs* allocated and pointed
				   to by the _mp_d field.  */
  int _mp_size;			/* abs(_mp_size) is the number of limbs the
				   last field points to.  If _mp_size is
				   negative this is a negative number.  */
  mp_limb_t *_mp_d;		/* Pointer to the limbs.  */
} __mpz_struct;

#endif /* __GNU_MP__ */

/* User-visible types.  */
typedef __mpz_struct MINT;


#ifndef _PROTO
#if __GMP_HAVE_PROTOTYPES
#define _PROTO(x) x
#else
#define _PROTO(x) ()
#endif
#endif

#if defined (__cplusplus)
extern "C" {
#endif

#define mp_set_memory_functions __gmp_set_memory_functions
__GMP_DECLSPEC void mp_set_memory_functions _PROTO ((void *(*) (size_t),
                                      void *(*) (void *, size_t, size_t),
                                      void (*) (void *, size_t)));
__GMP_DECLSPEC MINT *itom _PROTO ((signed short int));
__GMP_DECLSPEC MINT *xtom _PROTO ((const char *));
__GMP_DECLSPEC void move _PROTO ((const MINT *, MINT *));
__GMP_DECLSPEC void madd _PROTO ((const MINT *, const MINT *, MINT *));
__GMP_DECLSPEC void msub _PROTO ((const MINT *, const MINT *, MINT *));
__GMP_DECLSPEC void mult _PROTO ((const MINT *, const MINT *, MINT *));
__GMP_DECLSPEC void mdiv _PROTO ((const MINT *, const MINT *, MINT *, MINT *));
__GMP_DECLSPEC void sdiv _PROTO ((const MINT *, signed short int, MINT *, signed short int *));
__GMP_DECLSPEC void msqrt _PROTO ((const MINT *, MINT *, MINT *));
__GMP_DECLSPEC void pow _PROTO ((const MINT *, const MINT *, const MINT *, MINT *));
__GMP_DECLSPEC void rpow _PROTO ((const MINT *, signed short int, MINT *));
__GMP_DECLSPEC void gcd _PROTO ((const MINT *, const MINT *, MINT *));
__GMP_DECLSPEC int  mcmp _PROTO ((const MINT *, const MINT *));
__GMP_DECLSPEC void min _PROTO ((MINT *));
__GMP_DECLSPEC void mout _PROTO ((const MINT *));
__GMP_DECLSPEC char *mtox _PROTO ((const MINT *));
__GMP_DECLSPEC void mfree _PROTO ((MINT *));

#if defined (__cplusplus)
}
#endif

#define __MP_H__
#endif /* __MP_H__ */
