
#include "cmpinclude.h"
#include "clcs_kcl_cond.h"
void init_clcs_kcl_cond(){do_init(VV);}
/*	local entry for function progn 'compile2183	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk42)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2195	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!((VV[0])->s.s_dbind!=OBJNULL)){
	goto T4;}
	goto T3;
	goto T4;
T4:;
	base[0]= VV[1];
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	Lmake_hash_table();
	vs_top=sup;
	(VV[0]->s.s_dbind)= vs_base[0];
	goto T3;
T3:;
	{object V2 = Cnil;
	VMR2(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2208	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	macro definition for FIND-INTERNAL-ERROR-DATA	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	vs_top=sup;
	{object V4=base[0]->c.c_cdr;
	base[2]= (V4->c.c_car);}
	base[3]= list(3,VV[3],list(2,VV[4],base[2]),VV[0]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function progn 'compile2234	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= VV[5];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk42)();
	vs_top=sup;
	{object V5 = Cnil;
	VMR5(V5)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2246	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(!((VV[5])->s.s_dbind!=OBJNULL)){
	goto T13;}
	goto T12;
	goto T13;
T13:;
	(VV[5]->s.s_dbind)= Cnil;
	goto T12;
T12:;
	{object V6 = Cnil;
	VMR6(V6)}
	return Cnil;
}
/*	local entry for function progn 'compile2259	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V7 = Cnil;
	VMR7(V7)}
	return Cnil;
}
/*	function definition for CLCS-UNIVERSAL-ERROR-HANDLER	*/

static void L8()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM8; VC8
	vs_check;
	bds_check;
	{VOL object V8;
	VOL object V9;
	VOL object V10;
	VOL object V11;
	V8=(base[0]);
	V9=(base[1]);
	V10=(base[2]);
	base[3]=MMcons(base[3],Cnil);
	V11=(base[4]);
	vs_base=vs_base+5;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	base[5]=MMcons(base[5],base[3]);
	vs_top=sup;
	{VOL object V12;
	V12= list(5,(V8),(V9),(V10),(base[3]->c.c_car),(V11));
	if(!(equal((V12),(VV[5]->s.s_dbind)))){
	goto T18;}
	base[7]= Ct;
	base[8]= VV[6];
	base[9]= (V12);
	vs_top=(vs_base=base+7)+3;
	Lformat();
	vs_top=sup;
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;
	goto T18;
T18:;
	{VOL object V13;
	bds_bind(VV[5],list(5,(V8),(V9),(V10),(base[3]->c.c_car),(V11)));
	base[9]= make_cons((V8),Cnil);
	base[10]= (VV[0]->s.s_dbind);
	vs_top=(vs_base=base+9)+2;
	Lgethash();
	vs_top=sup;
	V13= vs_base[0];
	if(((V13))==Cnil){
	goto T30;}
	{VOL object V14;
	V14= CMPcar((V13));
	if(((V9))==Cnil){
	goto T34;}
	base[9]=MMcons(Cnil,base[5]);
	base[10]=alloc_frame_id();
	base[10]=MMcons(base[10],base[9]);
	frs_push(FRS_CATCH,(base[10]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[16]))goto T37;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V15= 
	make_cclosure_new(LC26,Cnil,base[10],Cdata);
	V16= 
	make_cclosure_new(LC27,Cnil,base[10],Cdata);
	V17= (VFUN_NARGS=6,(*(LnkLI43))(VV[8],VV[9],VV[10],V15,VV[11],V16));
	V18= make_cons(/* INLINE-ARGS */V17,Cnil);
	base[11]= make_cons(/* INLINE-ARGS */V18,(VV[7]->s.s_dbind));
	bds_bind(VV[7],base[11]);
	base[12]=VV[34]->s.s_gfdef;
	base[13]= (V14);
	base[14]= VV[13];
	base[15]= (V10);
	{object V19;
	{object V20;
	{object V21;
	object V22= CMPcdr((V13));
	object V23= (base[5]->c.c_car);
	if(V22==Cnil||V23==Cnil){
	V20= Cnil;
	goto T45;}
	base[16]=V21=MMcons(Cnil,Cnil);
	goto T46;
T46:;
	(V21->c.c_cdr)= list(2,(V22->c.c_car),(V23->c.c_car));
	while(MMcdr(V21)!=Cnil)V21=MMcdr(V21);
	if((V22=MMcdr(V22))==Cnil||(V23=MMcdr(V23))==Cnil){
	base[16]=base[16]->c.c_cdr;
	V20= base[16];
	goto T45;}
	goto T46;}
	goto T45;
T45:;
	if(((*(LnkLI44))((V14)))==Cnil){
	goto T49;}
	V19= listA(5,VV[14],(V11),VV[15],(base[5]->c.c_car),(V20));
	goto T44;
	goto T49;
T49:;
	V19= (V20);}
	goto T44;
T44:;
	 vs_top=base+16;
	 while(V19!=Cnil)
	 {vs_push((V19)->c.c_car);V19=(V19)->c.c_cdr;}
	vs_base=base+13;}
	(void) (*Lnk34)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T37;
T37:;
	{object V24;
	V24= (base[9]->c.c_car);
	base[11]= Cnil;
	base[12]= Ct;
	vs_top=(vs_base=base+11)+2;
	frs_pop();
	bds_unwind1;
	return;}
	frs_pop();
	base[11]= Cnil;
	vs_top=(vs_base=base+11)+1;
	bds_unwind1;
	return;
	goto T34;
T34:;
	base[9]=VV[34]->s.s_gfdef;
	base[10]= (V14);
	base[11]= VV[13];
	base[12]= (V10);
	{object V25;
	{object V26;
	{object V27;
	object V28= CMPcdr((V13));
	object V29= (base[5]->c.c_car);
	if(V28==Cnil||V29==Cnil){
	V26= Cnil;
	goto T58;}
	base[13]=V27=MMcons(Cnil,Cnil);
	goto T59;
T59:;
	(V27->c.c_cdr)= list(2,(V28->c.c_car),(V29->c.c_car));
	while(MMcdr(V27)!=Cnil)V27=MMcdr(V27);
	if((V28=MMcdr(V28))==Cnil||(V29=MMcdr(V29))==Cnil){
	base[13]=base[13]->c.c_cdr;
	V26= base[13];
	goto T58;}
	goto T59;}
	goto T58;
T58:;
	if(((*(LnkLI44))((V14)))==Cnil){
	goto T62;}
	V25= listA(5,VV[14],(V11),VV[15],(base[5]->c.c_car),(V26));
	goto T57;
	goto T62;
T62:;
	V25= (V26);}
	goto T57;
T57:;
	 vs_top=base+13;
	 while(V25!=Cnil)
	 {vs_push((V25)->c.c_car);V25=(V25)->c.c_cdr;}
	vs_base=base+10;}
	(void) (*Lnk34)();
	bds_unwind1;
	return;}
	goto T30;
T30:;
	base[9]= VV[17];
	base[10]= VV[13];
	base[11]= (V10);
	base[12]= VV[14];
	base[13]= (V11);
	base[14]= VV[15];
	base[15]= (base[5]->c.c_car);
	vs_top=(vs_base=base+9)+7;
	(void) (*Lnk34)();
	bds_unwind1;
	return;}}
	}
}
/*	local entry for function SET-INTERNAL-ERROR	*/

static object LI9(object V32,object V31,object V30,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V33;
	object V34;
	object V35;
	object V36;
	va_start(ap,first);
	V33= V32;
	V34= V31;
	V35= V30;
	narg= narg - 3;
	V37 = list_vector_new(narg,first,ap);
	V36= V37;
	{object V38;
	object V39;
	object V40;
	V38= make_cons((V33),Cnil);
	V39= (VV[0]->s.s_dbind);
	V40= make_cons((V35),(V36));
	base[2]= (V38);
	base[3]= (V39);
	base[4]= (V40);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;
	{object V41 = vs_base[0];
	VMR9(V41)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function INITIALIZE-INTERNAL-ERROR-TABLE	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	base[0]= (VV[0]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lclrhash();
	vs_top=sup;
	{register object V42;
	register object V43;
	V42= (VV[18]->s.s_dbind);
	V43= CMPcar((V42));
	goto T82;
T82:;
	if(!(((V42))==Cnil)){
	goto T83;}
	{object V44 = Cnil;
	VMR10(V44)}
	goto T83;
T83:;
	{object V45;
	V45= CMPcdr((V43));
	 vs_top=base+1;
	 while(V45!=Cnil)
	 {vs_push((V45)->c.c_car);V45=(V45)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk45)();
	vs_top=sup;
	V42= CMPcdr((V42));
	V43= CMPcar((V42));
	goto T82;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2403	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= VV[18];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk42)();
	vs_top=sup;
	{object V46 = Cnil;
	VMR11(V46)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2415	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	(VV[18]->s.s_dbind)= VV[19];
	{object V47 = Cnil;
	VMR12(V47)}
	return Cnil;
}
/*	local entry for function progn 'compile2427	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V48 = Cnil;
	VMR13(V48)}
	return Cnil;
}
/*	local entry for function progn 'compile2529	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	(void)((*(LnkLI46))());
	{object V49 = Cnil;
	VMR14(V49)}
	return Cnil;
}
/*	local entry for function CONDITION-BACKTRACE	*/

static object LI15(V51)

object V51;
{	 VMB15 VMS15 VMV15
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[20],(VV[21]->s.s_dbind));
	bds_bind(VV[22],one_plus((VV[23]->s.s_dbind)));
	vs_base=vs_top;
	(void) (*Lnk47)();
	vs_top=sup;
	V52= vs_base[0];
	bds_bind(VV[23],one_minus(V52));
	bds_bind(VV[24],(VV[23]->s.s_dbind));{object V53;
	base[7]= (VV[26]->s.s_dbind);
	base[8]= (VV[22]->s.s_dbind);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk48)();
	vs_top=sup;
	V53= vs_base[0];
	if(V53==Cnil)goto T104;
	bds_bind(VV[25],V53);
	goto T103;
	goto T104;
T104:;}
	vs_base=vs_top;
	(void) (*Lnk49)();
	vs_top=sup;
	V54= vs_base[0];
	bds_bind(VV[25],one_plus(V54));
	goto T103;
T103:;
	vs_base=vs_top;
	(void) (*Lnk49)();
	vs_top=sup;
	bds_bind(VV[26],vs_base[0]);
	bds_bind(VV[27],Cnil);
	base[7]= (VV[21]->s.s_dbind);
	base[8]= VV[28];
	base[9]= (V51);
	vs_top=(vs_base=base+7)+3;
	Lformat();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk50)();
	vs_top=sup;
	{object V55 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR15(V55)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2557	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= VV[29];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk42)();
	vs_top=sup;
	{object V56 = Cnil;
	VMR16(V56)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2569	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(!((VV[29])->s.s_dbind!=OBJNULL)){
	goto T117;}
	goto T116;
	goto T117;
T117:;
	(VV[29]->s.s_dbind)= Cnil;
	goto T116;
T116:;
	{object V57 = Cnil;
	VMR17(V57)}
	return Cnil;
}
/*	local entry for function progn 'compile2582	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V58 = Cnil;
	VMR18(V58)}
	return Cnil;
}
/*	function definition for CLCS-ERROR-SET	*/

static void L19()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM19; VC19
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
	if(eql(nlj_tag,VV[36]))goto T122;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V59= 
	make_cclosure_new(LC28,Cnil,base[4],Cdata);
	V60= 
	make_cclosure_new(LC29,Cnil,base[4],Cdata);
	V61= (VFUN_NARGS=6,(*(LnkLI43))(VV[8],VV[30],VV[10],V59,VV[11],V60));
	V62= make_cons(/* INLINE-ARGS */V61,Cnil);
	base[5]= make_cons(/* INLINE-ARGS */V62,(VV[7]->s.s_dbind));
	bds_bind(VV[7],base[5]);
	V63= 
	make_cclosure_new(LC30,Cnil,base[4],Cdata);
	V64= make_cons(VV[34],V63);
	V65= make_cons(/* INLINE-ARGS */V64,Cnil);
	base[6]= make_cons(/* INLINE-ARGS */V65,(VV[33]->s.s_dbind));
	bds_bind(VV[33],base[6]);
	base[8]= (base[0]->c.c_car);
	vs_top=(vs_base=base+8)+1;
	Leval();
	Llist();
	vs_top=sup;
	V66= vs_base[0];
	base[7]= make_cons(Cnil,V66);
	vs_top=(vs_base=base+7)+1;
	Lvalues_list();
	frs_pop();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T122;
T122:;
	{object V67;
	V67= (base[3]->c.c_car);
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
/*	local entry for function RESET-FUNCTION	*/

static object LI20(V69)

object V69;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	base[0]= (V69);
	base[2]= (V69);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V70 = vs_base[0];
	VMR20(V70)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2674	*/

static object LI21()

{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	(void)((*(LnkLI52))(VV[30]));
	{object V71 = Cnil;
	VMR21(V71)}
	return Cnil;
}
/*	local entry for function progn 'compile2706	*/

static object LI22()

{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	(void)((*(LnkLI52))(VV[37]));
	{object V72 = Cnil;
	VMR22(V72)}
	return Cnil;
}
/*	local entry for function progn 'compile2738	*/

static object LI23()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	(void)((*(LnkLI52))(VV[38]));
	{object V73 = Cnil;
	VMR23(V73)}
	return Cnil;
}
/*	local entry for function progn 'compile2750	*/

static object LI24()

{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	(VV[39]->s.s_dbind)= Ct;
	{object V74 = Cnil;
	VMR24(V74)}
	return Cnil;
}
/*	function definition for CMP-TOPLEVEL-EVAL	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	bds_check;
	{object V75;
	V75=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk47)();
	vs_top=sup;
	V76= vs_base[0];
	bds_bind(VV[23],one_minus(V76));
	bds_bind(VV[35],(VV[39]->s.s_dbind));
	base[4]= VV[41];
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V77= vs_base[0];
	bds_bind(VV[40],make_cons(V77,(VV[40]->s.s_dbind)));
	base[4]= (V75);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk30)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC30(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V78;
	V78=(base[0]);
	vs_top=sup;
	if(((VV[35]->s.s_dbind))!=Cnil){
	goto T147;}
	if(((VV[29]->s.s_dbind))!=Cnil){
	goto T147;}
	(void)((*(LnkLI53))((V78)));
	{frame_ptr fr;
	fr=frs_sch((base0[3]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[51]);
	base[1]= (V78);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,Cnil);}
	goto T147;
T147:;
	(base0[2]->c.c_car)= (V78);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC29(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V79;
	V79=(base[0]);
	vs_top=sup;
	base[1]= (V79);
	base[2]= VV[31];
	base[3]= list(2,VV[30],list(2,VV[32],(base0[4]->c.c_car)));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V80;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V80=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V80);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[36]);
	vs_base=vs_top;
	unwind(fr,VV[36]);}
	}
}
/*	local function CLOSURE	*/

static void LC27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V81;
	V81=(base[0]);
	vs_top=sup;
	base[1]= (V81);
	base[2]= VV[12];
	base[4]= Cnil;
	base[5]= (base0[3]->c.c_car);
	{object V82;
	V82= (base0[2]->c.c_car);
	 vs_top=base+6;
	 while(V82!=Cnil)
	 {vs_push((V82)->c.c_car);V82=(V82)->c.c_cdr;}
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

static void LC26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V83;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V83=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V83);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[16]);
	vs_base=vs_top;
	unwind(fr,VV[16]);}
	}
}
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[53],(void **)(void *)&LnkLI53,1,first,ap);va_end(ap);return V1;} /* CONDITION-BACKTRACE */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* ERROR-SET */
static object  LnkTLI52(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[52],(void **)(void *)&LnkLI52,1,first,ap);va_end(ap);return V1;} /* RESET-FUNCTION */
static void LnkT50(){ call_or_link(VV[50],(void **)(void *)&Lnk50);} /* SIMPLE-BACKTRACE */
static void LnkT49(){ call_or_link(VV[49],(void **)(void *)&Lnk49);} /* FRS-TOP */
static void LnkT48(){ call_or_link(VV[48],(void **)(void *)&Lnk48);} /* SCH-FRS-BASE */
static void LnkT47(){ call_or_link(VV[47],(void **)(void *)&Lnk47);} /* IHS-TOP */
static object  LnkTLI46(){return call_proc0(VV[46],(void **)(void *)&LnkLI46);} /* INITIALIZE-INTERNAL-ERROR-TABLE */
static void LnkT45(){ call_or_link(VV[45],(void **)(void *)&Lnk45);} /* SET-INTERNAL-ERROR */
static void LnkT34(){ call_or_link(VV[34],(void **)(void *)&Lnk34);} /* ERROR */
static object  LnkTLI44(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[44],(void **)(void *)&LnkLI44,1,first,ap);va_end(ap);return V1;} /* SIMPLE-CONDITION-CLASS-P */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[43],(void **)(void *)&LnkLI43,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static void LnkT42(){ call_or_link(VV[42],(void **)(void *)&Lnk42);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

