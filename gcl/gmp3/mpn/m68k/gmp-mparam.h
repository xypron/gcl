/* 68040 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2000, 2001 Free Software Foundation, Inc.

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


#define BITS_PER_MP_LIMB 32
#define BYTES_PER_MP_LIMB 4


/* Generated by tuneup.c, 2001-04-20, gcc 2.91 */

#define KARATSUBA_MUL_THRESHOLD       14
#define TOOM3_MUL_THRESHOLD          129

#define BASECASE_SQR_THRESHOLD         5
#define KARATSUBA_SQR_THRESHOLD       30
#define TOOM3_SQR_THRESHOLD          151

#define SB_PREINV_THRESHOLD        MP_SIZE_T_MAX
#define DC_THRESHOLD                  60
#define POWM_THRESHOLD                43

#define FIB_THRESHOLD                104

#define GCD_ACCEL_THRESHOLD            3
#define GCDEXT_THRESHOLD              37

#define DIVREM_1_NORM_THRESHOLD    MP_SIZE_T_MAX
#define DIVREM_1_UNNORM_THRESHOLD  MP_SIZE_T_MAX
#define MOD_1_NORM_THRESHOLD       MP_SIZE_T_MAX
#define MOD_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX
#define USE_PREINV_MOD_1               0
#define DIVREM_2_THRESHOLD         MP_SIZE_T_MAX
#define MODEXACT_1_ODD_THRESHOLD   MP_SIZE_T_MAX

#define FFT_MUL_TABLE  { 464, 928, 1664, 3584, 14336, 40960, 0 }
#define FFT_MODF_MUL_THRESHOLD       480
#define FFT_MUL_THRESHOLD           3328

#define FFT_SQR_TABLE  { 432, 928, 1920, 4608, 14336, 40960, 0 }
#define FFT_MODF_SQR_THRESHOLD       448
#define FFT_SQR_THRESHOLD           3328
