
#include "cmpinclude.h"
#include "clcs_kcl_cond.h"
void init_clcs_kcl_cond(){do_init(VV);}
/*	macro definition for FIND-INTERNAL-ERROR-DATA	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= (V1->c.c_car);}
	base[3]= list(3,VV[0],list(2,VV[1],base[2]),VV[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for CLCS-UNIVERSAL-ERROR-HANDLER	*/

static void L2()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM2; VC2
	vs_check;
	bds_check;
	{VOL object V2;
	VOL object V3;
	VOL object V4;
	VOL object V5;
	V2=(base[0]);
	V3=(base[1]);
	V4=(base[2]);
	base[3]=MMcons(base[3],Cnil);
	V5=(base[4]);
	vs_base=vs_base+5;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	base[5]=MMcons(base[5],base[3]);
	vs_top=sup;
	{VOL object V6;
	base[6]= make_cons((V2),Cnil);
	base[7]= (VV[2]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	Lgethash();
	vs_top=sup;
	V6= vs_base[0];
	if(((V6))==Cnil){
	goto T5;}
	{VOL object V7;
	V7= CMPcar((V6));
	if(((V3))==Cnil){
	goto T9;}
	base[6]=MMcons(Cnil,base[5]);
	base[7]=alloc_frame_id();
	base[7]=MMcons(base[7],base[6]);
	frs_push(FRS_CATCH,(base[7]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[12]))goto T12;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[9]= VV[4];
	base[10]= VV[5];
	base[11]= VV[6];
	base[12]= 
	make_cclosure_new(LC9,Cnil,base[7],Cdata);
	base[13]= VV[7];
	base[14]= 
	make_cclosure_new(LC10,Cnil,base[7],Cdata);
	vs_top=(vs_base=base+9)+6;
	(void) (*Lnk35)();
	vs_top=sup;
	V8= vs_base[0];
	V9= make_cons(V8,Cnil);
	base[8]= make_cons(/* INLINE-ARGS */V9,(VV[3]->s.s_dbind));
	bds_bind(VV[3],base[8]);
	base[9]=VV[28]->s.s_gfdef;
	base[10]= (V7);
	base[11]= VV[9];
	base[12]= (V4);
	{object V10;
	{object V11;
	{object V12;
	object V13= CMPcdr((V6));
	object V14= (base[5]->c.c_car);
	if(V13==Cnil||V14==Cnil){
	V11= Cnil;
	goto T25;}
	base[13]=V12=MMcons(Cnil,Cnil);
	goto T26;
T26:;
	(V12->c.c_cdr)= list(2,(V13->c.c_car),(V14->c.c_car));
	while(MMcdr(V12)!=Cnil)V12=MMcdr(V12);
	if((V13=MMcdr(V13))==Cnil||(V14=MMcdr(V14))==Cnil){
	base[13]=base[13]->c.c_cdr;
	V11= base[13];
	goto T25;}
	goto T26;}
	goto T25;
T25:;
	base[13]= (V7);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk36)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T29;}
	V10= listA(5,VV[10],(V5),VV[11],(base[5]->c.c_car),(V11));
	goto T24;
	goto T29;
T29:;
	V10= (V11);}
	goto T24;
T24:;
	 vs_top=base+13;
	 while(V10!=Cnil)
	 {vs_push((V10)->c.c_car);V10=(V10)->c.c_cdr;}
	vs_base=base+10;}
	(void) (*Lnk28)();
	frs_pop();
	bds_unwind1;
	return;
	goto T12;
T12:;
	{object V15;
	V15= (base[6]->c.c_car);
	base[8]= Cnil;
	base[9]= Ct;
	vs_top=(vs_base=base+8)+2;
	frs_pop();
	return;}
	frs_pop();
	base[8]= Cnil;
	vs_top=(vs_base=base+8)+1;
	return;
	goto T9;
T9:;
	base[6]=VV[28]->s.s_gfdef;
	base[7]= (V7);
	base[8]= VV[9];
	base[9]= (V4);
	{object V16;
	{object V17;
	{object V18;
	object V19= CMPcdr((V6));
	object V20= (base[5]->c.c_car);
	if(V19==Cnil||V20==Cnil){
	V17= Cnil;
	goto T39;}
	base[10]=V18=MMcons(Cnil,Cnil);
	goto T40;
T40:;
	(V18->c.c_cdr)= list(2,(V19->c.c_car),(V20->c.c_car));
	while(MMcdr(V18)!=Cnil)V18=MMcdr(V18);
	if((V19=MMcdr(V19))==Cnil||(V20=MMcdr(V20))==Cnil){
	base[10]=base[10]->c.c_cdr;
	V17= base[10];
	goto T39;}
	goto T40;}
	goto T39;
T39:;
	base[10]= (V7);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk36)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T43;}
	V16= listA(5,VV[10],(V5),VV[11],(base[5]->c.c_car),(V17));
	goto T38;
	goto T43;
T43:;
	V16= (V17);}
	goto T38;
T38:;
	 vs_top=base+10;
	 while(V16!=Cnil)
	 {vs_push((V16)->c.c_car);V16=(V16)->c.c_cdr;}
	vs_base=base+7;}
	(void) (*Lnk28)();
	return;}
	goto T5;
T5:;
	base[6]= VV[13];
	base[7]= VV[9];
	base[8]= (V4);
	base[9]= VV[10];
	base[10]= (V5);
	base[11]= VV[11];
	base[12]= (base[5]->c.c_car);
	vs_top=(vs_base=base+6)+7;
	(void) (*Lnk28)();
	return;}
	}
}
/*	function definition for SET-INTERNAL-ERROR	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V21;
	object V22;
	object V23;
	object V24;
	V21=(base[0]);
	V22=(base[1]);
	V23=(base[2]);
	vs_base=vs_base+3;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V24=(base[3]);
	vs_top=sup;
	{object V25;
	object V26;
	object V27;
	V25= make_cons((V21),Cnil);
	V26= (VV[2]->s.s_dbind);
	V27= make_cons((V23),(V24));
	base[6]= (V25);
	base[7]= (V26);
	base[8]= (V27);
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	return;}
	}
}
/*	function definition for INITIALIZE-INTERNAL-ERROR-TABLE	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= (VV[2]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lclrhash();
	vs_top=sup;
	{register object V28;
	register object V29;
	V28= (VV[14]->s.s_dbind);
	V29= CMPcar((V28));
	goto T64;
T64:;
	if(!(((V28))==Cnil)){
	goto T65;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T65;
T65:;
	{object V30;
	V30= CMPcdr((V29));
	 vs_top=base+1;
	 while(V30!=Cnil)
	 {vs_push((V30)->c.c_car);V30=(V30)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk37)();
	vs_top=sup;
	V28= CMPcdr((V28));
	V29= CMPcar((V28));
	goto T64;}
}
/*	function definition for CONDITION-BACKTRACE	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	bds_check;
	{object V31;
	V31=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[15],(VV[16]->s.s_dbind));
	bds_bind(VV[17],one_plus((VV[18]->s.s_dbind)));
	vs_base=vs_top;
	(void) (*Lnk38)();
	vs_top=sup;
	V32= vs_base[0];
	bds_bind(VV[18],one_minus(V32));
	bds_bind(VV[19],(VV[18]->s.s_dbind));{object V33;
	base[8]= (VV[21]->s.s_dbind);
	base[9]= (VV[17]->s.s_dbind);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk39)();
	vs_top=sup;
	V33= vs_base[0];
	if(V33==Cnil)goto T80;
	bds_bind(VV[20],V33);
	goto T79;
	goto T80;
T80:;}
	vs_base=vs_top;
	(void) (*Lnk40)();
	vs_top=sup;
	V34= vs_base[0];
	bds_bind(VV[20],one_plus(V34));
	goto T79;
T79:;
	vs_base=vs_top;
	(void) (*Lnk40)();
	vs_top=sup;
	bds_bind(VV[21],vs_base[0]);
	bds_bind(VV[22],Cnil);
	base[8]= (VV[16]->s.s_dbind);
	base[9]= VV[23];
	base[10]= (V31);
	vs_top=(vs_base=base+8)+3;
	Lformat();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk41)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	function definition for CLCS-ERROR-SET	*/

static void L6()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM6; VC6
	vs_check;
	bds_check;
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[2]=MMcons(Cnil,base[1]);
	base[3]=MMcons(Cnil,base[2]);
	base[4]=alloc_frame_id();
	base[4]=MMcons(base[4],base[3]);
	frs_push(FRS_CATCH,(base[4]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[31]))goto T91;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[6]= VV[4];
	base[7]= VV[24];
	base[8]= VV[6];
	base[9]= 
	make_cclosure_new(LC11,Cnil,base[4],Cdata);
	base[10]= VV[7];
	base[11]= 
	make_cclosure_new(LC12,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk35)();
	vs_top=sup;
	V35= vs_base[0];
	V36= make_cons(V35,Cnil);
	base[5]= make_cons(/* INLINE-ARGS */V36,(VV[3]->s.s_dbind));
	bds_bind(VV[3],base[5]);
	V37= 
	make_cclosure_new(LC13,Cnil,base[4],Cdata);
	V38= make_cons(VV[28],V37);
	V39= make_cons(/* INLINE-ARGS */V38,Cnil);
	base[6]= make_cons(/* INLINE-ARGS */V39,(VV[27]->s.s_dbind));
	bds_bind(VV[27],base[6]);
	base[8]= (base[0]->c.c_car);
	vs_top=(vs_base=base+8)+1;
	Leval();
	Llist();
	vs_top=sup;
	V40= vs_base[0];
	base[7]= make_cons(Cnil,V40);
	vs_top=(vs_base=base+7)+1;
	Lvalues_list();
	frs_pop();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T91;
T91:;
	{object V41;
	V41= (base[3]->c.c_car);
	frs_pop();
	frs_pop();
	base[5]= (base[2]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	return;}
	frs_pop();
	frs_pop();
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
	}
}
/*	function definition for RESET-FUNCTION	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V42;
	V42=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V42);
	base[3]= (V42);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	siLfset();
	return;
	}
}
/*	function definition for CMP-TOPLEVEL-EVAL	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	bds_check;
	{object V43;
	V43=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk38)();
	vs_top=sup;
	V44= vs_base[0];
	bds_bind(VV[18],one_minus(V44));
	bds_bind(VV[29],(VV[32]->s.s_dbind));
	base[4]= VV[34];
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V45= vs_base[0];
	bds_bind(VV[33],make_cons(V45,(VV[33]->s.s_dbind)));
	base[4]= (V43);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk24)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC13(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V46;
	V46=(base[0]);
	vs_top=sup;
	if(((VV[29]->s.s_dbind))!=Cnil){
	goto T116;}
	if(((VV[30]->s.s_dbind))!=Cnil){
	goto T116;}
	base[1]= (V46);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk43)();
	vs_top=sup;
	{frame_ptr fr;
	fr=frs_sch((base0[3]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[42]);
	base[1]= (V46);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,Cnil);}
	goto T116;
T116:;
	(base0[2]->c.c_car)= (V46);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC12(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V47;
	V47=(base[0]);
	vs_top=sup;
	base[1]= (V47);
	base[2]= VV[25];
	base[3]= list(2,VV[24],list(2,VV[26],(base0[4]->c.c_car)));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC11(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V48;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V48=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V48);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[31]);
	vs_base=vs_top;
	unwind(fr,VV[31]);}
	}
}
/*	local function CLOSURE	*/

static void LC10(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V49;
	V49=(base[0]);
	vs_top=sup;
	base[1]= (V49);
	base[2]= VV[8];
	base[4]= Cnil;
	base[5]= (base0[3]->c.c_car);
	{object V50;
	V50= (base0[2]->c.c_car);
	 vs_top=base+6;
	 while(V50!=Cnil)
	 {vs_push((V50)->c.c_car);V50=(V50)->c.c_cdr;}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC9(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V51;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V51=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V51);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[12]);
	vs_base=vs_top;
	unwind(fr,VV[12]);}
	}
}
static void LnkT43(){ call_or_link(VV[43],(void **)(void *)&Lnk43);} /* CONDITION-BACKTRACE */
static void LnkT24(){ call_or_link(VV[24],(void **)(void *)&Lnk24);} /* ERROR-SET */
static void LnkT41(){ call_or_link(VV[41],(void **)(void *)&Lnk41);} /* SIMPLE-BACKTRACE */
static void LnkT40(){ call_or_link(VV[40],(void **)(void *)&Lnk40);} /* FRS-TOP */
static void LnkT39(){ call_or_link(VV[39],(void **)(void *)&Lnk39);} /* SCH-FRS-BASE */
static void LnkT38(){ call_or_link(VV[38],(void **)(void *)&Lnk38);} /* IHS-TOP */
static void LnkT37(){ call_or_link(VV[37],(void **)(void *)&Lnk37);} /* SET-INTERNAL-ERROR */
static void LnkT28(){ call_or_link(VV[28],(void **)(void *)&Lnk28);} /* ERROR */
static void LnkT36(){ call_or_link(VV[36],(void **)(void *)&Lnk36);} /* SIMPLE-CONDITION-CLASS-P */
static void LnkT35(){ call_or_link(VV[35],(void **)(void *)&Lnk35);} /* MAKE-RESTART */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

