dnl  HP-PA 1.1 mpn_submul_1 -- Multiply a limb vector with a limb and subtract
dnl  the result from a second limb vector.

dnl  Copyright 1992, 1993, 1994, 2000, 2001 Free Software Foundation, Inc.

dnl  This file is part of the GNU MP Library.

dnl  The GNU MP Library is free software; you can redistribute it and/or modify
dnl  it under the terms of the GNU Lesser General Public License as published
dnl  by the Free Software Foundation; either version 2.1 of the License, or (at
dnl  your option) any later version.

dnl  The GNU MP Library is distributed in the hope that it will be useful, but
dnl  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
dnl  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
dnl  License for more details.

dnl  You should have received a copy of the GNU Lesser General Public License
dnl  along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
dnl  the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
dnl  MA 02111-1307, USA.

include(`../config.m4')

C INPUT PARAMETERS
C res_ptr	r26
C s1_ptr	r25
C size		r24
C s2_limb	r23

C This runs at 12 cycles/limb on a PA7000.  With the used instructions, it can
C not become faster due to data cache contention after a store.  On the PA7100
C it runs at 11 cycles/limb.

C There are some ideas described in mul_1.asm that applies to this code too.

C It seems possible to make this run as fast as mpn_addmul_1, if we use
C 	sub,>>=	%r29,%r19,%r22
C	addi	1,%r28,%r28
C but that requires reworking the hairy software pipeline...

ASM_START()
PROLOGUE(mpn_submul_1)
C	.callinfo	frame=64,no_calls

	ldo		64(%r30),%r30
	fldws,ma	4(%r25),%fr5
	stw		%r23,-16(%r30)		C move s2_limb ...
	addib,=		-1,%r24,L$just_one_limb
	 fldws		-16(%r30),%fr4		C ... into fr4
	add		%r0,%r0,%r0		C clear carry
	xmpyu		%fr4,%fr5,%fr6
	fldws,ma	4(%r25),%fr7
	fstds		%fr6,-16(%r30)
	xmpyu		%fr4,%fr7,%fr8
	ldw		-12(%r30),%r19		C least significant limb in product
	ldw		-16(%r30),%r28

	fstds		%fr8,-16(%r30)
	addib,=		-1,%r24,L$end
	 ldw		-12(%r30),%r1

C Main loop
	.label	L$loop
	ldws		0(%r26),%r29
	fldws,ma	4(%r25),%fr5
	sub		%r29,%r19,%r22
	add		%r22,%r19,%r0
	stws,ma		%r22,4(%r26)
	addc		%r28,%r1,%r19
	xmpyu		%fr4,%fr5,%fr6
	ldw		-16(%r30),%r28
	fstds		%fr6,-16(%r30)
	addc		%r0,%r28,%r28
	addib,<>	-1,%r24,L$loop
	 ldw		-12(%r30),%r1

	.label	L$end
	ldw		0(%r26),%r29
	sub		%r29,%r19,%r22
	add		%r22,%r19,%r0
	stws,ma		%r22,4(%r26)
	addc		%r28,%r1,%r19
	ldw		-16(%r30),%r28
	ldws		0(%r26),%r29
	addc		%r0,%r28,%r28
	sub		%r29,%r19,%r22
	add		%r22,%r19,%r0
	stws,ma		%r22,4(%r26)
	addc		%r0,%r28,%r28
	bv		0(%r2)
	 ldo		-64(%r30),%r30

	.label	L$just_one_limb
	xmpyu		%fr4,%fr5,%fr6
	ldw		0(%r26),%r29
	fstds		%fr6,-16(%r30)
	ldw		-12(%r30),%r1
	ldw		-16(%r30),%r28
	sub		%r29,%r1,%r22
	add		%r22,%r1,%r0
	stw		%r22,0(%r26)
	addc		%r0,%r28,%r28
	bv		0(%r2)
	 ldo		-64(%r30),%r30
EPILOGUE(mpn_submul_1)
