/* mpn_dc_bdiv_q -- divide-and-conquer Hensel division with precomputed
   inverse, returning quotient.

   Contributed to the GNU project by Niels M?ller and Torbj?rn Granlund.

   THE FUNCTIONS IN THIS FILE ARE INTERNAL WITH A MUTABLE INTERFACE.  IT IS
   ONLY SAFE TO REACH THEM THROUGH DOCUMENTED INTERFACES.  IN FACT, IT IS
   ALMOST GUARANTEED THAT THEY WILL CHANGE OR DISAPPEAR IN A FUTURE GMP
   RELEASE.

Copyright 2006, 2007 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#include "gmp.h"
#include "gmp-impl.h"


/* Computes Q = N / D mod B^n, destroys N. */

mp_size_t
mpn_dc_bdiv_q_n_itch (mp_size_t n)
{
  /* NOTE: Depends om mullow_n interface */
  return n;
}

void
mpn_dc_bdiv_q_n (mp_ptr qp,
		 mp_ptr np, mp_srcptr dp, mp_size_t n,
		 mp_limb_t dinv, mp_ptr tp)
{
  while (ABOVE_THRESHOLD (n, DC_BDIV_Q_THRESHOLD))
    {
      mp_limb_t l, h;
      mp_limb_t cy;

      l = n >> 1;
      h = n - l;

      cy = mpn_dc_bdiv_qr_n (qp, np, dp, l, dinv, tp);

      mpn_mullow_n (tp, qp, dp + h, l);
      mpn_sub_n (np + h, np + h, tp, l);

      if (l < h)
	{
	  cy += mpn_submul_1 (np + l, qp, l, dp[l]);
	  np[n - 1] -= cy;
	}
      qp += l;
      np += l;
      n -= l;
    }
  mpn_sb_bdiv_q (qp, np, n, dp, n, dinv);
}

void
mpn_dc_bdiv_q (mp_ptr qp,
	       mp_ptr np, mp_size_t nn,
	       mp_srcptr dp, mp_size_t dn,
	       mp_limb_t dinv)
{
  mp_size_t qn;
  mp_limb_t cy;
  mp_ptr tp;
  TMP_DECL;

  TMP_MARK;

  tp = TMP_SALLOC_LIMBS (dn);

  qn = nn;

  if (qn > dn)
    {
      /* Reduce qn mod dn in a super-efficient manner.  */
      do
	qn -= dn;
      while (qn > dn);

      /* Perform the typically smaller block first.  */
      if (BELOW_THRESHOLD (qn, DC_BDIV_QR_THRESHOLD))
	cy = mpn_sb_bdiv_qr (qp, np, 2 * qn, dp, qn, dinv);
      else
	cy = mpn_dc_bdiv_qr_n (qp, np, dp, qn, dinv, tp);

      if (qn != dn)
	{
	  if (qn > dn - qn)
	    mpn_mul (tp, qp, qn, dp + qn, dn - qn);
	  else
	    mpn_mul (tp, dp + qn, dn - qn, qp, qn);
	  mpn_incr_u (tp + qn, cy);

	  mpn_sub (np + qn, np + qn, nn - qn, tp, dn);
	  cy = 0;
	}

      np += qn;
      qp += qn;

      qn = nn - qn;
      while (qn > dn)
	{
	  mpn_sub_1 (np + dn, np + dn, qn, cy);
	  cy = mpn_dc_bdiv_qr_n (qp, np, dp, dn, dinv, tp);
	  qp += dn;
	  np += dn;
	  qn -= dn;
	}
      mpn_sub_1 (np + dn, np + dn, qn, cy);
      mpn_dc_bdiv_q_n (qp, np, dp, dn, dinv, tp);
      TMP_FREE;
      return;
    }

  if (BELOW_THRESHOLD (qn, DC_BDIV_Q_THRESHOLD))
    mpn_sb_bdiv_q (qp, np, 2 * qn, dp, qn, dinv);
  else
    mpn_dc_bdiv_q_n (qp, np, dp, qn, dinv, tp);

  TMP_FREE;
}
