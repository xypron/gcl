
#include "cmpinclude.h"
#include "clcs_precom.h"
void init_clcs_precom(){do_init(VV);}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 0)2185	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= VV[17];
	base[2]= VV[4];
	base[3]= VV[5];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk18)();
	return;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 1)2185	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[6];
	base[1]= VV[19];
	base[2]= VV[4];
	base[3]= VV[8];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk18)();
	return;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 2)2185	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[9];
	base[1]= VV[20];
	base[2]= VV[4];
	base[3]= VV[11];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk18)();
	return;
}
/*	function definition for (PCL::PRECOMPILE-INITIALIZE-INSTANCE-SIMPLE CLCS 3)2185	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[12];
	base[1]= VV[21];
	base[2]= VV[4];
	base[3]= VV[16];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk18)();
	return;
}
/*	local function CLOSURE	*/

static void LC8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC9,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC9(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{register object V1;
	object V2;
	V1=(base[0]);
	V2=(base[1]);
	vs_top=sup;
	{register object V3;
	object V4;
	register object V5;
	register object V6;
	object V7;
	register object V8;
	V4= CMPcar((base0[1]->c.c_car));
	V3= (V2);
	V5= Cnil;
	V6= Cnil;
	V7= Cnil;
	V8= Cnil;
	if(type_of(V1)==t_structure){
	goto T29;}
	goto T27;
	goto T29;
T29:;
	if(!(((V1)->str.str_def)==(VV[13]))){
	goto T27;}
	V5= STREF(object,(V1),4);
	V6= STREF(object,(V1),0);
	goto T25;
	goto T27;
T27:;{object V10;
	V10= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk22)();
	vs_top=sup;
	V11= vs_base[0];
	if(!((V10)==(CMPcar(V11)))){
	goto T35;}}
	V5= CMPcar(((V1))->cc.cc_turbo[12]);
	V6= CMPcar(((V1))->cc.cc_turbo[13]);
	goto T25;
	goto T35;
T35:;
	base[2]= (V1);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk23)();
	vs_top=sup;
	V6= vs_base[0];
	goto T25;
T25:;
	V7= ((V6))->v.v_self[11];
	V3= CMPcdr((V3));
	{object V12;
	V12= CMPcar((V3));
	V3= CMPcdr((V3));
	V8= (V12);}
	(void)(((V5))->v.v_self[8]= ((V8)));
	V3= CMPcdr((V3));
	{object V13;
	V13= CMPcar((V3));
	V3= CMPcdr((V3));
	V8= (V13);}
	(void)(((V5))->v.v_self[0]= ((V8)));
	V3= CMPcdr((V3));
	{object V14;
	V14= CMPcar((V3));
	V3= CMPcdr((V3));
	V8= (V14);}
	(void)(((V5))->v.v_self[3]= ((V8)));
	V3= CMPcdr((V3));
	{object V15;
	V15= CMPcar((V3));
	V3= CMPcdr((V3));
	V8= (V15);}
	(void)(((V5))->v.v_self[4]= ((V8)));
	V3= CMPcdr((V3));
	{object V16;
	V16= CMPcar((V3));
	V3= CMPcdr((V3));
	V8= (V16);}
	(void)(((V5))->v.v_self[5]= ((V8)));
	V3= CMPcdr((V3));
	{object V17;
	V17= CMPcar((V3));
	V3= CMPcdr((V3));
	V8= (V17);}
	(void)(((V5))->v.v_self[6]= ((V8)));
	if(!((((V5))->v.v_self[1])==(VV[14]))){
	goto T95;}
	V8= Cnil;
	(void)(((V5))->v.v_self[1]= ((V8)));
	goto T95;
T95:;
	if(!((((V5))->v.v_self[2])==(VV[14]))){
	goto T100;}
	V8= Cnil;
	(void)(((V5))->v.v_self[2]= ((V8)));
	goto T100;
T100:;
	if(!((((V5))->v.v_self[7])==(VV[14]))){
	goto T105;}
	V8= ((base0[0]->c.c_car))->v.v_self[9];
	(void)(((V5))->v.v_self[7]= ((V8)));
	goto T105;
T105:;
	if(!((((V5))->v.v_self[9])==(VV[14]))){
	goto T17;}
	V8= VV[15];
	(void)(((V5))->v.v_self[9]= ((V8)));}
	goto T17;
T17:;
	base[2]= (V2);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC7(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V18;
	base[0]=MMcons(base[0],Cnil);
	V18=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC10,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC10(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{register object V19;
	object V20;
	V19=(base[0]);
	V20=(base[1]);
	vs_top=sup;
	{register object V21;
	object V22;
	register object V23;
	register object V24;
	object V25;
	register object V26;
	V22= CMPcar((base0[0]->c.c_car));
	V21= (V20);
	V23= Cnil;
	V24= Cnil;
	V25= Cnil;
	V26= Cnil;
	if(type_of(V19)==t_structure){
	goto T126;}
	goto T124;
	goto T126;
T126:;
	if(!(((V19)->str.str_def)==(VV[10]))){
	goto T124;}
	V23= STREF(object,(V19),4);
	V24= STREF(object,(V19),0);
	goto T122;
	goto T124;
T124:;{object V28;
	V28= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V19);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk22)();
	vs_top=sup;
	V29= vs_base[0];
	if(!((V28)==(CMPcar(V29)))){
	goto T132;}}
	V23= CMPcar(((V19))->cc.cc_turbo[12]);
	V24= CMPcar(((V19))->cc.cc_turbo[13]);
	goto T122;
	goto T132;
T132:;
	base[2]= (V19);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk23)();
	vs_top=sup;
	V24= vs_base[0];
	goto T122;
T122:;
	V25= ((V24))->v.v_self[11];
	V21= (V20);
	V21= CMPcdr((V21));
	{object V30;
	V30= CMPcar((V21));
	V21= CMPcdr((V21));
	V26= (V30);}
	(void)(((V23))->v.v_self[8]= ((V26)));
	V21= CMPcdr((V21));
	{object V31;
	V31= CMPcar((V21));
	V21= CMPcdr((V21));
	V26= (V31);}
	(void)(((V23))->v.v_self[0]= ((V26)));
	V21= CMPcdr((V21));
	{object V32;
	V32= CMPcar((V21));
	V21= CMPcdr((V21));
	V26= (V32);}
	(void)(((V23))->v.v_self[3]= ((V26)));
	V21= CMPcdr((V21));
	{object V33;
	V33= CMPcar((V21));
	V21= CMPcdr((V21));
	V26= (V33);}
	(void)(((V23))->v.v_self[4]= ((V26)));
	V21= CMPcdr((V21));
	{object V34;
	V34= CMPcar((V21));
	V21= CMPcdr((V21));
	V26= (V34);}
	(void)(((V23))->v.v_self[5]= ((V26)));
	V21= CMPcdr((V21));
	{object V35;
	V35= CMPcar((V21));
	V21= CMPcdr((V21));
	V26= (V35);}
	(void)(((V23))->v.v_self[6]= ((V26)));}
	base[2]= (V20);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC6(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V36;
	base[0]=MMcons(base[0],Cnil);
	V36=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC11,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC11(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{register object V37;
	object V38;
	V37=(base[0]);
	V38=(base[1]);
	vs_top=sup;
	{register object V39;
	object V40;
	register object V41;
	register object V42;
	object V43;
	register object V44;
	V40= CMPcar((base0[0]->c.c_car));
	V39= (V38);
	V41= Cnil;
	V42= Cnil;
	V43= Cnil;
	V44= Cnil;
	if(type_of(V37)==t_structure){
	goto T205;}
	goto T203;
	goto T205;
T205:;
	if(!(((V37)->str.str_def)==(VV[7]))){
	goto T203;}
	V41= STREF(object,(V37),4);
	V42= STREF(object,(V37),0);
	goto T201;
	goto T203;
T203:;{object V46;
	V46= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V37);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk22)();
	vs_top=sup;
	V47= vs_base[0];
	if(!((V46)==(CMPcar(V47)))){
	goto T211;}}
	V41= CMPcar(((V37))->cc.cc_turbo[12]);
	V42= CMPcar(((V37))->cc.cc_turbo[13]);
	goto T201;
	goto T211;
T211:;
	base[2]= (V37);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk23)();
	vs_top=sup;
	V42= vs_base[0];
	goto T201;
T201:;
	V43= ((V42))->v.v_self[11];
	V39= CMPcdr((V39));
	{object V48;
	V48= CMPcar((V39));
	V39= CMPcdr((V39));
	V44= (V48);}
	(void)(((V41))->v.v_self[1]= ((V44)));
	V39= CMPcdr((V39));
	{object V49;
	V49= CMPcar((V39));
	V39= CMPcdr((V39));
	V44= (V49);}
	(void)(((V41))->v.v_self[0]= ((V44)));}
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC5(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V50;
	base[0]=MMcons(base[0],Cnil);
	V50=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC12,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC12(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{register object V51;
	object V52;
	V51=(base[0]);
	V52=(base[1]);
	vs_top=sup;
	{register object V53;
	object V54;
	register object V55;
	register object V56;
	object V57;
	register object V58;
	V54= CMPcar((base0[0]->c.c_car));
	V53= (V52);
	V55= Cnil;
	V56= Cnil;
	V57= Cnil;
	V58= Cnil;
	if(type_of(V51)==t_structure){
	goto T250;}
	goto T248;
	goto T250;
T250:;
	if(!(((V51)->str.str_def)==(VV[1]))){
	goto T248;}
	V55= STREF(object,(V51),4);
	V56= STREF(object,(V51),0);
	goto T246;
	goto T248;
T248:;{object V60;
	V60= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V51);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk22)();
	vs_top=sup;
	V61= vs_base[0];
	if(!((V60)==(CMPcar(V61)))){
	goto T256;}}
	V55= CMPcar(((V51))->cc.cc_turbo[12]);
	V56= CMPcar(((V51))->cc.cc_turbo[13]);
	goto T246;
	goto T256;
T256:;
	base[2]= (V51);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk23)();
	vs_top=sup;
	V56= vs_base[0];
	goto T246;
T246:;
	V57= ((V56))->v.v_self[11];
	V53= (V52);
	V53= CMPcdr((V53));
	{object V62;
	V62= CMPcar((V53));
	V53= CMPcdr((V53));
	V58= (V62);}
	(void)(((V55))->v.v_self[1]= ((V58)));
	V53= CMPcdr((V53));
	{object V63;
	V63= CMPcar((V53));
	V53= CMPcdr((V53));
	V58= (V63);}
	(void)(((V55))->v.v_self[0]= ((V58)));}
	base[2]= (V52);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
static void LnkT23(){ call_or_link(VV[23],(void **)(void *)&Lnk23);} /* WRAPPER-OF */
static void LnkT22(){ call_or_link(VV[22],(void **)(void *)&Lnk22);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT18(){ call_or_link(VV[18],(void **)(void *)&Lnk18);} /* LOAD-PRECOMPILED-IIS-ENTRY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

