
#include "cmpinclude.h"
#include "clcs_condition_definitions.h"
void init_clcs_condition_definitions(){do_init(VV);}
/*	function definition for Defclass WARNING2194	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= VV[1];
	base[2]= VV[2];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass SERIOUS-CONDITION2243	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[3];
	base[1]= VV[1];
	base[2]= VV[4];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass ERROR2292	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[5];
	base[1]= VV[1];
	base[2]= VV[6];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for SIMPLE-CONDITION-PRINTER	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V1;
	object V2;
	V1=(base[0]);
	V2=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V2);
	base[4]= (V1);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk175)(Lclptr175);
	vs_top=sup;
	base[3]= vs_base[0];
	{object V3;
	base[4]= (V1);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk176)(Lclptr176);
	vs_top=sup;
	V3= vs_base[0];
	 vs_top=base+4;
	 while(V3!=Cnil)
	 {vs_push((V3)->c.c_car);V3=(V3)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	return;
	}
}
/*	function definition for Defclass SIMPLE-CONDITION2345	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[7];
	base[1]= VV[1];
	base[2]= VV[8];
	V4= listA(9,VV[9],VV[10],VV[11],VV[12],VV[13],Cnil,VV[14],VV[15],VV[16]);
	base[4]= VV[17];
	base[5]= (VV[177]->s.s_gfdef);
	base[6]= VV[9];
	base[7]= VV[18];
	base[8]= VV[11];
	base[9]= VV[19];
	base[10]= VV[13];
	base[11]= Cnil;
	base[12]= VV[14];
	base[13]= VV[20];
	base[14]= VV[21];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V5= vs_base[0];
	base[3]= list(2,/* INLINE-ARGS */V4,V5);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (SIMPLE-CONDITION T))	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V6;
	register object V7;
	register object V8;
	register object V9;
	V6=(base[0]);
	V7=(base[1]);
	V8=(base[2]);
	V9=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T46;}
	if(((V7))==Cnil){
	goto T49;}
	base[4]= (V7);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T53;}
	base[4]= STREF(object,(V7),0);
	base[5]= STREF(object,(V7),4);
	base[6]= STREF(object,(V7),8);
	base[7]= (V8);
	base[8]= (V9);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T53;
T53:;
	if(!(type_of((V7))==t_fixnum)){
	goto T63;}
	{object V12;
	if(type_of(V8)==t_structure){
	goto T69;}
	goto T67;
	goto T69;
T69:;
	if(!(((V8)->str.str_def)==(VV[24]))){
	goto T67;}
	V12= STREF(object,(V8),4);
	goto T65;
	goto T67;
T67:;{object V14;
	V14= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V8);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V15= vs_base[0];
	if(!((V14)==(CMPcar(V15)))){
	goto T72;}}
	V12= CMPcar(((V8))->cc.cc_turbo[12]);
	goto T65;
	goto T72;
T72:;
	V12= Cnil;
	goto T65;
T65:;
	if(((V12))==Cnil){
	goto T78;}
	base[4]= ((V12))->v.v_self[fix((V7))]= (V8);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T78;
T78:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T63;
T63:;
	{register object V17;
	V17= V7;
	base[4]= (V17);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T81;}
	{object V18;
	object V19;
	register object V20;
	V18= STREF(object,(V7),0);
	V19= list(2,(V8),(V9));
	V20= STREF(object,(V7),4);
	if(((V20))==Cnil){
	goto T89;}
	if((CMPcdr((V20)))!=Cnil){
	goto T89;}
	base[4]= (V19);
	base[5]= CMPcar((V20));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V18);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T89;
T89:;
	base[4]= (V18);
	base[5]= (V19);
	{object V21;
	V21= (V20);
	 vs_top=base+6;
	 while(V21!=Cnil)
	 {vs_push((V21)->c.c_car);V21=(V21)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T81;
T81:;
	base[4]= (V17);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T99;}
	base[4]= (V8);
	base[5]= (V9);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V7);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T99;
T99:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V7;
	base[9]= VV[31];
	base[10]= VV[32];
	base[11]= VV[33];
	base[12]= VV[34];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T49;
T49:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;
	goto T46;
T46:;
	base[4]= (V8);
	base[5]= (V9);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk181)();
	return;
	}
}
/*	function definition for Defclass SIMPLE-WARNING2585	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[36];
	base[1]= VV[1];
	base[2]= VV[37];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass SIMPLE-ERROR2634	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[38];
	base[1]= VV[1];
	base[2]= VV[39];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass STORAGE-CONDITION2683	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[40];
	base[1]= VV[1];
	base[2]= VV[41];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass STACK-OVERFLOW2732	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[42];
	base[1]= VV[1];
	base[2]= VV[43];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass STORAGE-EXHAUSTED2781	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[44];
	base[1]= VV[1];
	base[2]= VV[45];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass TYPE-ERROR2830	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[46];
	base[1]= VV[1];
	base[2]= VV[47];
	V22= listA(9,VV[9],VV[48],VV[11],VV[49],VV[13],Cnil,VV[14],VV[50],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V22,listA(9,VV[9],VV[51],VV[11],VV[52],VV[13],Cnil,VV[14],VV[53],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (TYPE-ERROR T))	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V23;
	register object V24;
	register object V25;
	register object V26;
	V23=(base[0]);
	V24=(base[1]);
	V25=(base[2]);
	V26=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T156;}
	if(((V24))==Cnil){
	goto T159;}
	base[4]= (V24);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T163;}
	base[4]= STREF(object,(V24),0);
	base[5]= STREF(object,(V24),4);
	base[6]= STREF(object,(V24),8);
	base[7]= (V25);
	base[8]= (V26);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T163;
T163:;
	if(!(type_of((V24))==t_fixnum)){
	goto T173;}
	{object V29;
	if(type_of(V25)==t_structure){
	goto T179;}
	goto T177;
	goto T179;
T179:;
	if(!(((V25)->str.str_def)==(VV[54]))){
	goto T177;}
	V29= STREF(object,(V25),4);
	goto T175;
	goto T177;
T177:;{object V31;
	V31= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V25);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V32= vs_base[0];
	if(!((V31)==(CMPcar(V32)))){
	goto T182;}}
	V29= CMPcar(((V25))->cc.cc_turbo[12]);
	goto T175;
	goto T182;
T182:;
	V29= Cnil;
	goto T175;
T175:;
	if(((V29))==Cnil){
	goto T188;}
	base[4]= ((V29))->v.v_self[fix((V24))]= (V25);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T188;
T188:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T173;
T173:;
	{register object V34;
	V34= V24;
	base[4]= (V34);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T191;}
	{object V35;
	object V36;
	register object V37;
	V35= STREF(object,(V24),0);
	V36= list(2,(V25),(V26));
	V37= STREF(object,(V24),4);
	if(((V37))==Cnil){
	goto T199;}
	if((CMPcdr((V37)))!=Cnil){
	goto T199;}
	base[4]= (V36);
	base[5]= CMPcar((V37));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V35);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T199;
T199:;
	base[4]= (V35);
	base[5]= (V36);
	{object V38;
	V38= (V37);
	 vs_top=base+6;
	 while(V38!=Cnil)
	 {vs_push((V38)->c.c_car);V38=(V38)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T191;
T191:;
	base[4]= (V34);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T209;}
	base[4]= (V25);
	base[5]= (V26);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V24);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T209;
T209:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V24;
	base[9]= VV[31];
	base[10]= VV[55];
	base[11]= VV[33];
	base[12]= VV[56];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T159;
T159:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;
	goto T156;
T156:;
	base[4]= V26;
	base[5]= VV[57];
	base[7]= V25;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk182)(Lclptr182);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V25;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk183)(Lclptr183);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	function definition for Defclass SIMPLE-TYPE-ERROR3074	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[58];
	base[1]= VV[1];
	base[2]= VV[59];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass CASE-FAILURE3123	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[28];
	base[1]= VV[1];
	base[2]= VV[60];
	V41= listA(9,VV[9],VV[61],VV[11],VV[62],VV[13],Cnil,VV[14],VV[63],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V41,listA(9,VV[9],VV[64],VV[11],VV[65],VV[13],Cnil,VV[14],VV[66],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (CASE-FAILURE T))	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V42;
	register object V43;
	register object V44;
	register object V45;
	V42=(base[0]);
	V43=(base[1]);
	V44=(base[2]);
	V45=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T246;}
	if(((V43))==Cnil){
	goto T249;}
	base[4]= (V43);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T253;}
	base[4]= STREF(object,(V43),0);
	base[5]= STREF(object,(V43),4);
	base[6]= STREF(object,(V43),8);
	base[7]= (V44);
	base[8]= (V45);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T253;
T253:;
	if(!(type_of((V43))==t_fixnum)){
	goto T263;}
	{object V48;
	if(type_of(V44)==t_structure){
	goto T269;}
	goto T267;
	goto T269;
T269:;
	if(!(((V44)->str.str_def)==(VV[67]))){
	goto T267;}
	V48= STREF(object,(V44),4);
	goto T265;
	goto T267;
T267:;{object V50;
	V50= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V44);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V51= vs_base[0];
	if(!((V50)==(CMPcar(V51)))){
	goto T272;}}
	V48= CMPcar(((V44))->cc.cc_turbo[12]);
	goto T265;
	goto T272;
T272:;
	V48= Cnil;
	goto T265;
T265:;
	if(((V48))==Cnil){
	goto T278;}
	base[4]= ((V48))->v.v_self[fix((V43))]= (V44);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T278;
T278:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T263;
T263:;
	{register object V53;
	V53= V43;
	base[4]= (V53);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T281;}
	{object V54;
	object V55;
	register object V56;
	V54= STREF(object,(V43),0);
	V55= list(2,(V44),(V45));
	V56= STREF(object,(V43),4);
	if(((V56))==Cnil){
	goto T289;}
	if((CMPcdr((V56)))!=Cnil){
	goto T289;}
	base[4]= (V55);
	base[5]= CMPcar((V56));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V54);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T289;
T289:;
	base[4]= (V54);
	base[5]= (V55);
	{object V57;
	V57= (V56);
	 vs_top=base+6;
	 while(V57!=Cnil)
	 {vs_push((V57)->c.c_car);V57=(V57)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T281;
T281:;
	base[4]= (V53);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T299;}
	base[4]= (V44);
	base[5]= (V45);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V43);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T299;
T299:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V43;
	base[9]= VV[31];
	base[10]= VV[68];
	base[11]= VV[33];
	base[12]= VV[69];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T249;
T249:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;
	goto T246;
T246:;
	base[4]= V45;
	base[5]= VV[70];
	base[7]= V44;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk182)(Lclptr182);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V44;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk184)(Lclptr184);
	vs_top=sup;
	base[7]= vs_base[0];
	base[9]= V44;
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk185)(Lclptr185);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+4)+5;
	Lformat();
	return;
	}
}
/*	function definition for Defclass PROGRAM-ERROR3367	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[71];
	base[1]= VV[1];
	base[2]= VV[72];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass CONTROL-ERROR3416	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[73];
	base[1]= VV[1];
	base[2]= VV[74];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass STREAM-ERROR3465	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[75];
	base[1]= VV[1];
	base[2]= VV[76];
	V60= listA(9,VV[9],VV[77],VV[11],VV[78],VV[13],Cnil,VV[14],VV[79],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V60,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass END-OF-FILE3515	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[80];
	base[1]= VV[1];
	base[2]= VV[81];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (END-OF-FILE T))	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V61;
	register object V62;
	register object V63;
	register object V64;
	V61=(base[0]);
	V62=(base[1]);
	V63=(base[2]);
	V64=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T350;}
	if(((V62))==Cnil){
	goto T353;}
	base[4]= (V62);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T357;}
	base[4]= STREF(object,(V62),0);
	base[5]= STREF(object,(V62),4);
	base[6]= STREF(object,(V62),8);
	base[7]= (V63);
	base[8]= (V64);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T357;
T357:;
	if(!(type_of((V62))==t_fixnum)){
	goto T367;}
	{object V67;
	if(type_of(V63)==t_structure){
	goto T373;}
	goto T371;
	goto T373;
T373:;
	if(!(((V63)->str.str_def)==(VV[82]))){
	goto T371;}
	V67= STREF(object,(V63),4);
	goto T369;
	goto T371;
T371:;{object V69;
	V69= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V63);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V70= vs_base[0];
	if(!((V69)==(CMPcar(V70)))){
	goto T376;}}
	V67= CMPcar(((V63))->cc.cc_turbo[12]);
	goto T369;
	goto T376;
T376:;
	V67= Cnil;
	goto T369;
T369:;
	if(((V67))==Cnil){
	goto T382;}
	base[4]= ((V67))->v.v_self[fix((V62))]= (V63);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T382;
T382:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T367;
T367:;
	{register object V72;
	V72= V62;
	base[4]= (V72);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T385;}
	{object V73;
	object V74;
	register object V75;
	V73= STREF(object,(V62),0);
	V74= list(2,(V63),(V64));
	V75= STREF(object,(V62),4);
	if(((V75))==Cnil){
	goto T393;}
	if((CMPcdr((V75)))!=Cnil){
	goto T393;}
	base[4]= (V74);
	base[5]= CMPcar((V75));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V73);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T393;
T393:;
	base[4]= (V73);
	base[5]= (V74);
	{object V76;
	V76= (V75);
	 vs_top=base+6;
	 while(V76!=Cnil)
	 {vs_push((V76)->c.c_car);V76=(V76)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T385;
T385:;
	base[4]= (V72);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T403;}
	base[4]= (V63);
	base[5]= (V64);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V62);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T403;
T403:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V62;
	base[9]= VV[31];
	base[10]= VV[83];
	base[11]= VV[33];
	base[12]= VV[84];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T353;
T353:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;
	goto T350;
T350:;
	base[4]= V64;
	base[5]= VV[85];
	base[7]= V63;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk186)(Lclptr186);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	function definition for Defclass FILE-ERROR3757	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[86];
	base[1]= VV[1];
	base[2]= VV[87];
	V79= listA(9,VV[9],VV[88],VV[11],VV[89],VV[13],Cnil,VV[14],VV[90],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V79,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass PACKAGE-ERROR3807	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[91];
	base[1]= VV[1];
	base[2]= VV[92];
	V80= listA(9,VV[9],VV[93],VV[11],VV[94],VV[13],Cnil,VV[14],VV[95],Cnil);
	base[3]= list(2,/* INLINE-ARGS */V80,listA(9,VV[9],VV[96],VV[11],VV[97],VV[13],Cnil,VV[14],VV[98],Cnil));
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (PACKAGE-ERROR T))	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V81;
	register object V82;
	register object V83;
	register object V84;
	V81=(base[0]);
	V82=(base[1]);
	V83=(base[2]);
	V84=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T438;}
	if(((V82))==Cnil){
	goto T441;}
	base[4]= (V82);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T445;}
	base[4]= STREF(object,(V82),0);
	base[5]= STREF(object,(V82),4);
	base[6]= STREF(object,(V82),8);
	base[7]= (V83);
	base[8]= (V84);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T445;
T445:;
	if(!(type_of((V82))==t_fixnum)){
	goto T455;}
	{object V87;
	if(type_of(V83)==t_structure){
	goto T461;}
	goto T459;
	goto T461;
T461:;
	if(!(((V83)->str.str_def)==(VV[99]))){
	goto T459;}
	V87= STREF(object,(V83),4);
	goto T457;
	goto T459;
T459:;{object V89;
	V89= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V83);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V90= vs_base[0];
	if(!((V89)==(CMPcar(V90)))){
	goto T464;}}
	V87= CMPcar(((V83))->cc.cc_turbo[12]);
	goto T457;
	goto T464;
T464:;
	V87= Cnil;
	goto T457;
T457:;
	if(((V87))==Cnil){
	goto T470;}
	base[4]= ((V87))->v.v_self[fix((V82))]= (V83);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T470;
T470:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T455;
T455:;
	{register object V92;
	V92= V82;
	base[4]= (V92);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T473;}
	{object V93;
	object V94;
	register object V95;
	V93= STREF(object,(V82),0);
	V94= list(2,(V83),(V84));
	V95= STREF(object,(V82),4);
	if(((V95))==Cnil){
	goto T481;}
	if((CMPcdr((V95)))!=Cnil){
	goto T481;}
	base[4]= (V94);
	base[5]= CMPcar((V95));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V93);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T481;
T481:;
	base[4]= (V93);
	base[5]= (V94);
	{object V96;
	V96= (V95);
	 vs_top=base+6;
	 while(V96!=Cnil)
	 {vs_push((V96)->c.c_car);V96=(V96)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T473;
T473:;
	base[4]= (V92);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T491;}
	base[4]= (V83);
	base[5]= (V84);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V82);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T491;
T491:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V82;
	base[9]= VV[31];
	base[10]= VV[100];
	base[11]= VV[33];
	base[12]= VV[101];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T441;
T441:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;
	goto T438;
T438:;
	base[4]= V84;
	base[5]= VV[102];
	base[7]= V83;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk187)(Lclptr187);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= V83;
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk188)(Lclptr188);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	}
}
/*	function definition for Defclass CELL-ERROR4051	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[103];
	base[1]= VV[1];
	base[2]= VV[104];
	V99= listA(9,VV[9],VV[61],VV[11],VV[105],VV[13],Cnil,VV[14],VV[106],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V99,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass UNBOUND-VARIABLE4101	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[107];
	base[1]= VV[1];
	base[2]= VV[108];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNBOUND-VARIABLE T))	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V100;
	register object V101;
	register object V102;
	register object V103;
	V100=(base[0]);
	V101=(base[1]);
	V102=(base[2]);
	V103=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T528;}
	if(((V101))==Cnil){
	goto T531;}
	base[4]= (V101);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T535;}
	base[4]= STREF(object,(V101),0);
	base[5]= STREF(object,(V101),4);
	base[6]= STREF(object,(V101),8);
	base[7]= (V102);
	base[8]= (V103);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T535;
T535:;
	if(!(type_of((V101))==t_fixnum)){
	goto T545;}
	{object V106;
	if(type_of(V102)==t_structure){
	goto T551;}
	goto T549;
	goto T551;
T551:;
	if(!(((V102)->str.str_def)==(VV[109]))){
	goto T549;}
	V106= STREF(object,(V102),4);
	goto T547;
	goto T549;
T549:;{object V108;
	V108= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V102);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V109= vs_base[0];
	if(!((V108)==(CMPcar(V109)))){
	goto T554;}}
	V106= CMPcar(((V102))->cc.cc_turbo[12]);
	goto T547;
	goto T554;
T554:;
	V106= Cnil;
	goto T547;
T547:;
	if(((V106))==Cnil){
	goto T560;}
	base[4]= ((V106))->v.v_self[fix((V101))]= (V102);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T560;
T560:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T545;
T545:;
	{register object V111;
	V111= V101;
	base[4]= (V111);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T563;}
	{object V112;
	object V113;
	register object V114;
	V112= STREF(object,(V101),0);
	V113= list(2,(V102),(V103));
	V114= STREF(object,(V101),4);
	if(((V114))==Cnil){
	goto T571;}
	if((CMPcdr((V114)))!=Cnil){
	goto T571;}
	base[4]= (V113);
	base[5]= CMPcar((V114));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V112);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T571;
T571:;
	base[4]= (V112);
	base[5]= (V113);
	{object V115;
	V115= (V114);
	 vs_top=base+6;
	 while(V115!=Cnil)
	 {vs_push((V115)->c.c_car);V115=(V115)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T563;
T563:;
	base[4]= (V111);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T581;}
	base[4]= (V102);
	base[5]= (V103);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V101);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T581;
T581:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V101;
	base[9]= VV[31];
	base[10]= VV[110];
	base[11]= VV[33];
	base[12]= VV[111];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T531;
T531:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;
	goto T528;
T528:;
	base[4]= V103;
	base[5]= VV[112];
	base[7]= V102;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk189)(Lclptr189);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	function definition for Defclass UNDEFINED-FUNCTION4343	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[113];
	base[1]= VV[1];
	base[2]= VV[114];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (UNDEFINED-FUNCTION T))	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V118;
	register object V119;
	register object V120;
	register object V121;
	V118=(base[0]);
	V119=(base[1]);
	V120=(base[2]);
	V121=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T610;}
	if(((V119))==Cnil){
	goto T613;}
	base[4]= (V119);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T617;}
	base[4]= STREF(object,(V119),0);
	base[5]= STREF(object,(V119),4);
	base[6]= STREF(object,(V119),8);
	base[7]= (V120);
	base[8]= (V121);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T617;
T617:;
	if(!(type_of((V119))==t_fixnum)){
	goto T627;}
	{object V124;
	if(type_of(V120)==t_structure){
	goto T633;}
	goto T631;
	goto T633;
T633:;
	if(!(((V120)->str.str_def)==(VV[115]))){
	goto T631;}
	V124= STREF(object,(V120),4);
	goto T629;
	goto T631;
T631:;{object V126;
	V126= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V120);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V127= vs_base[0];
	if(!((V126)==(CMPcar(V127)))){
	goto T636;}}
	V124= CMPcar(((V120))->cc.cc_turbo[12]);
	goto T629;
	goto T636;
T636:;
	V124= Cnil;
	goto T629;
T629:;
	if(((V124))==Cnil){
	goto T642;}
	base[4]= ((V124))->v.v_self[fix((V119))]= (V120);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T642;
T642:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T627;
T627:;
	{register object V129;
	V129= V119;
	base[4]= (V129);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T645;}
	{object V130;
	object V131;
	register object V132;
	V130= STREF(object,(V119),0);
	V131= list(2,(V120),(V121));
	V132= STREF(object,(V119),4);
	if(((V132))==Cnil){
	goto T653;}
	if((CMPcdr((V132)))!=Cnil){
	goto T653;}
	base[4]= (V131);
	base[5]= CMPcar((V132));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V130);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T653;
T653:;
	base[4]= (V130);
	base[5]= (V131);
	{object V133;
	V133= (V132);
	 vs_top=base+6;
	 while(V133!=Cnil)
	 {vs_push((V133)->c.c_car);V133=(V133)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T645;
T645:;
	base[4]= (V129);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T663;}
	base[4]= (V120);
	base[5]= (V121);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V119);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T663;
T663:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V119;
	base[9]= VV[31];
	base[10]= VV[116];
	base[11]= VV[33];
	base[12]= VV[117];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T613;
T613:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;
	goto T610;
T610:;
	base[4]= V121;
	base[5]= VV[118];
	base[7]= V120;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk189)(Lclptr189);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	function definition for Defclass ARITHMETIC-ERROR4585	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[119];
	base[1]= VV[1];
	base[2]= VV[120];
	V136= listA(9,VV[9],VV[121],VV[11],VV[122],VV[13],Cnil,VV[14],VV[123],Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V136,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass DIVISION-BY-ZERO4635	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[124];
	base[1]= VV[1];
	base[2]= VV[125];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass FLOATING-POINT-OVERFLOW4684	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[126];
	base[1]= VV[1];
	base[2]= VV[127];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass FLOATING-POINT-UNDERFLOW4733	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[128];
	base[1]= VV[1];
	base[2]= VV[129];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass ABORT-FAILURE4782	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[130];
	base[1]= VV[1];
	base[2]= VV[131];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (ABORT-FAILURE T))	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V137;
	register object V138;
	register object V139;
	register object V140;
	V137=(base[0]);
	V138=(base[1]);
	V139=(base[2]);
	V140=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T716;}
	if(((V138))==Cnil){
	goto T719;}
	base[4]= (V138);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T723;}
	base[4]= STREF(object,(V138),0);
	base[5]= STREF(object,(V138),4);
	base[6]= STREF(object,(V138),8);
	base[7]= (V139);
	base[8]= (V140);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T723;
T723:;
	if(!(type_of((V138))==t_fixnum)){
	goto T733;}
	{object V143;
	if(type_of(V139)==t_structure){
	goto T739;}
	goto T737;
	goto T739;
T739:;
	if(!(((V139)->str.str_def)==(VV[132]))){
	goto T737;}
	V143= STREF(object,(V139),4);
	goto T735;
	goto T737;
T737:;{object V145;
	V145= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V139);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V146= vs_base[0];
	if(!((V145)==(CMPcar(V146)))){
	goto T742;}}
	V143= CMPcar(((V139))->cc.cc_turbo[12]);
	goto T735;
	goto T742;
T742:;
	V143= Cnil;
	goto T735;
T735:;
	if(((V143))==Cnil){
	goto T748;}
	base[4]= ((V143))->v.v_self[fix((V138))]= (V139);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T748;
T748:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T733;
T733:;
	{register object V148;
	V148= V138;
	base[4]= (V148);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T751;}
	{object V149;
	object V150;
	register object V151;
	V149= STREF(object,(V138),0);
	V150= list(2,(V139),(V140));
	V151= STREF(object,(V138),4);
	if(((V151))==Cnil){
	goto T759;}
	if((CMPcdr((V151)))!=Cnil){
	goto T759;}
	base[4]= (V150);
	base[5]= CMPcar((V151));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V149);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T759;
T759:;
	base[4]= (V149);
	base[5]= (V150);
	{object V152;
	V152= (V151);
	 vs_top=base+6;
	 while(V152!=Cnil)
	 {vs_push((V152)->c.c_car);V152=(V152)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T751;
T751:;
	base[4]= (V148);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T769;}
	base[4]= (V139);
	base[5]= (V140);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V138);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T769;
T769:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V138;
	base[9]= VV[31];
	base[10]= VV[133];
	base[11]= VV[33];
	base[12]= VV[134];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T719;
T719:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;
	goto T716;
T716:;
	base[4]= VV[135];
	base[5]= V140;
	vs_top=(vs_base=base+4)+2;
	Lwrite_string();
	return;
	}
}
/*	function definition for Defclass INTERNAL-ERROR5028	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[136];
	base[1]= VV[1];
	base[2]= VV[137];
	base[4]= VV[17];
	base[5]= (VV[177]->s.s_gfdef);
	base[6]= VV[9];
	base[7]= VV[138];
	base[8]= VV[11];
	base[9]= VV[139];
	base[10]= VV[13];
	base[11]= Cnil;
	base[12]= VV[14];
	base[13]= VV[140];
	base[14]= VV[141];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V155= vs_base[0];
	base[3]= make_cons(V155,Cnil);
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-ERROR T))	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V156;
	register object V157;
	register object V158;
	register object V159;
	V156=(base[0]);
	V157=(base[1]);
	V158=(base[2]);
	V159=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T808;}
	if(((V157))==Cnil){
	goto T811;}
	base[4]= (V157);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T815;}
	base[4]= STREF(object,(V157),0);
	base[5]= STREF(object,(V157),4);
	base[6]= STREF(object,(V157),8);
	base[7]= (V158);
	base[8]= (V159);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T815;
T815:;
	if(!(type_of((V157))==t_fixnum)){
	goto T825;}
	{object V162;
	if(type_of(V158)==t_structure){
	goto T831;}
	goto T829;
	goto T831;
T831:;
	if(!(((V158)->str.str_def)==(VV[142]))){
	goto T829;}
	V162= STREF(object,(V158),4);
	goto T827;
	goto T829;
T829:;{object V164;
	V164= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V158);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V165= vs_base[0];
	if(!((V164)==(CMPcar(V165)))){
	goto T834;}}
	V162= CMPcar(((V158))->cc.cc_turbo[12]);
	goto T827;
	goto T834;
T834:;
	V162= Cnil;
	goto T827;
T827:;
	if(((V162))==Cnil){
	goto T840;}
	base[4]= ((V162))->v.v_self[fix((V157))]= (V158);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T840;
T840:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T825;
T825:;
	{register object V167;
	V167= V157;
	base[4]= (V167);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T843;}
	{object V168;
	object V169;
	register object V170;
	V168= STREF(object,(V157),0);
	V169= list(2,(V158),(V159));
	V170= STREF(object,(V157),4);
	if(((V170))==Cnil){
	goto T851;}
	if((CMPcdr((V170)))!=Cnil){
	goto T851;}
	base[4]= (V169);
	base[5]= CMPcar((V170));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V168);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T851;
T851:;
	base[4]= (V168);
	base[5]= (V169);
	{object V171;
	V171= (V170);
	 vs_top=base+6;
	 while(V171!=Cnil)
	 {vs_push((V171)->c.c_car);V171=(V171)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T843;
T843:;
	base[4]= (V167);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T861;}
	base[4]= (V158);
	base[5]= (V159);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V157);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T861;
T861:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V157;
	base[9]= VV[31];
	base[10]= VV[143];
	base[11]= VV[33];
	base[12]= VV[144];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T811;
T811:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;
	goto T808;
T808:;
	{register object V173;
	V173= (V159);
	base[4]= V158;
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk190)(Lclptr190);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T876;}
	base[4]= (V173);
	base[5]= VV[145];
	base[7]= V158;
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk190)(Lclptr190);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T876;
T876:;
	if(((V157))==Cnil){
	goto T885;}
	base[4]= (V157);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T889;}
	base[4]= STREF(object,(V157),0);
	base[5]= STREF(object,(V157),4);
	base[6]= STREF(object,(V157),8);
	base[7]= (V158);
	base[8]= (V173);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T889;
T889:;
	if(!(type_of((V157))==t_fixnum)){
	goto T899;}
	{object V175;
	if(type_of(V158)==t_structure){
	goto T905;}
	goto T903;
	goto T905;
T905:;
	if(!(((V158)->str.str_def)==(VV[146]))){
	goto T903;}
	V175= STREF(object,(V158),4);
	goto T901;
	goto T903;
T903:;{object V177;
	V177= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V158);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V178= vs_base[0];
	if(!((V177)==(CMPcar(V178)))){
	goto T908;}}
	V175= CMPcar(((V158))->cc.cc_turbo[12]);
	goto T901;
	goto T908;
T908:;
	V175= Cnil;
	goto T901;
T901:;
	if(((V175))==Cnil){
	goto T914;}
	base[4]= ((V175))->v.v_self[fix((V157))]= (V158);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T914;
T914:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T899;
T899:;
	{register object V180;
	V180= V157;
	base[4]= (V180);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T917;}
	{object V181;
	object V182;
	register object V183;
	V181= STREF(object,(V157),0);
	V182= list(2,(V158),(V173));
	V183= STREF(object,(V157),4);
	if(((V183))==Cnil){
	goto T925;}
	if((CMPcdr((V183)))!=Cnil){
	goto T925;}
	base[4]= (V182);
	base[5]= CMPcar((V183));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V181);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T925;
T925:;
	base[4]= (V181);
	base[5]= (V182);
	{object V184;
	V184= (V183);
	 vs_top=base+6;
	 while(V184!=Cnil)
	 {vs_push((V184)->c.c_car);V184=(V184)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T917;
T917:;
	base[4]= (V180);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T935;}
	base[4]= (V158);
	base[5]= (V173);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V157);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T935;
T935:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V157;
	base[9]= VV[31];
	base[10]= VV[147];
	base[11]= VV[33];
	base[12]= VV[148];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T885;
T885:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;}
	}
}
/*	function definition for INTERNAL-SIMPLE-ERROR-PRINTER	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{register object V185;
	object V186;
	V185=(base[0]);
	V186=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V185);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk190)(Lclptr190);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T950;}
	base[2]= (V186);
	base[3]= VV[149];
	base[5]= (V185);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk190)(Lclptr190);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	goto T950;
T950:;
	base[2]= (V186);
	base[4]= (V185);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk175)(Lclptr175);
	vs_top=sup;
	base[3]= vs_base[0];
	{object V187;
	base[4]= (V185);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk176)(Lclptr176);
	vs_top=sup;
	V187= vs_base[0];
	 vs_top=base+4;
	 while(V187!=Cnil)
	 {vs_push((V187)->c.c_car);V187=(V187)->c.c_cdr;}
	vs_base=base+2;}
	Lformat();
	return;
	}
}
/*	function definition for Defclass INTERNAL-SIMPLE-ERROR5395	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[150];
	base[1]= VV[1];
	base[2]= VV[151];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (INTERNAL-SIMPLE-ERROR T))	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{object V188;
	register object V189;
	register object V190;
	register object V191;
	V188=(base[0]);
	V189=(base[1]);
	V190=(base[2]);
	V191=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[22]->s.s_dbind))==Cnil){
	goto T973;}
	if(((V189))==Cnil){
	goto T976;}
	base[4]= (V189);
	base[5]= VV[23];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T980;}
	base[4]= STREF(object,(V189),0);
	base[5]= STREF(object,(V189),4);
	base[6]= STREF(object,(V189),8);
	base[7]= (V190);
	base[8]= (V191);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T980;
T980:;
	if(!(type_of((V189))==t_fixnum)){
	goto T990;}
	{object V194;
	if(type_of(V190)==t_structure){
	goto T996;}
	goto T994;
	goto T996;
T996:;
	if(!(((V190)->str.str_def)==(VV[152]))){
	goto T994;}
	V194= STREF(object,(V190),4);
	goto T992;
	goto T994;
T994:;{object V196;
	V196= (VV[26]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V190);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk179)();
	vs_top=sup;
	V197= vs_base[0];
	if(!((V196)==(CMPcar(V197)))){
	goto T999;}}
	V194= CMPcar(((V190))->cc.cc_turbo[12]);
	goto T992;
	goto T999;
T999:;
	V194= Cnil;
	goto T992;
T992:;
	if(((V194))==Cnil){
	goto T1005;}
	base[4]= ((V194))->v.v_self[fix((V189))]= (V190);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1005;
T1005:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T990;
T990:;
	{register object V199;
	V199= V189;
	base[4]= (V199);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1008;}
	{object V200;
	object V201;
	register object V202;
	V200= STREF(object,(V189),0);
	V201= list(2,(V190),(V191));
	V202= STREF(object,(V189),4);
	if(((V202))==Cnil){
	goto T1016;}
	if((CMPcdr((V202)))!=Cnil){
	goto T1016;}
	base[4]= (V201);
	base[5]= CMPcar((V202));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V200);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1016;
T1016:;
	base[4]= (V200);
	base[5]= (V201);
	{object V203;
	V203= (V202);
	 vs_top=base+6;
	 while(V203!=Cnil)
	 {vs_push((V203)->c.c_car);V203=(V203)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1008;
T1008:;
	base[4]= (V199);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1026;}
	base[4]= (V190);
	base[5]= (V191);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V189);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1026;
T1026:;
	base[4]= VV[28];
	base[5]= VV[9];
	base[6]= VV[29];
	base[7]= VV[30];
	base[8]= V189;
	base[9]= VV[31];
	base[10]= VV[153];
	base[11]= VV[33];
	base[12]= VV[154];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk5)();
	return;}
	goto T976;
T976:;
	base[4]= VV[35];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk180)();
	return;
	goto T973;
T973:;
	base[4]= (V190);
	base[5]= (V191);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk191)();
	return;
	}
}
/*	function definition for Defclass INTERNAL-TYPE-ERROR5633	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[155];
	base[1]= VV[1];
	base[2]= VV[156];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass INTERNAL-PACKAGE-ERROR5682	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[157];
	base[1]= VV[1];
	base[2]= VV[158];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass INTERNAL-SIMPLE-PROGRAM-ERROR5731	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[159];
	base[1]= VV[1];
	base[2]= VV[160];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass INTERNAL-SIMPLE-CONTROL-ERROR5780	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[161];
	base[1]= VV[1];
	base[2]= VV[162];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass INTERNAL-UNBOUND-VARIABLE5829	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[163];
	base[1]= VV[1];
	base[2]= VV[164];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass INTERNAL-UNDEFINED-FUNCTION5878	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[165];
	base[1]= VV[1];
	base[2]= VV[166];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass INTERNAL-END-OF-FILE5927	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[167];
	base[1]= VV[1];
	base[2]= VV[168];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass INTERNAL-SIMPLE-FILE-ERROR5976	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[169];
	base[1]= VV[1];
	base[2]= VV[170];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for Defclass INTERNAL-SIMPLE-STREAM-ERROR6025	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[171];
	base[1]= VV[1];
	base[2]= VV[172];
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[174],base+0,6);
	return;
}
/*	function definition for SIMPLE-CONDITION-CLASS-P	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	{register object V204;
	V204=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V204))==t_symbol)){
	goto T1097;}
	base[1]= (V204);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk192)();
	vs_top=sup;
	V204= vs_base[0];
	goto T1097;
T1097:;
	base[1]= (V204);
	base[2]= VV[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1102;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1102;
T1102:;{object V206;
	V206= (VV[173]->s.s_dbind);
	base[1]= (V204);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk194)(Lclptr194);
	vs_top=sup;
	V207= vs_base[0];
	{register object x= V206,V205= V207;
	while(V205!=Cnil)
	if(eql(x,V205->c.c_car)){
	base[1]= V205;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V205=V205->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
static void LnkT194(ptr) object *ptr;{ call_or_link_closure(VV[194],(void **)(void *)&Lnk194,(void **)(void *)&Lclptr194);} /* CLASS-PRECEDENCE-LIST */
static void LnkT193(){ call_or_link(VV[193],(void **)(void *)&Lnk193);} /* TYPEP */
static void LnkT192(){ call_or_link(VV[192],(void **)(void *)&Lnk192);} /* FIND-CLASS */
static void LnkT191(){ call_or_link(VV[191],(void **)(void *)&Lnk191);} /* INTERNAL-SIMPLE-ERROR-PRINTER */
static void LnkT190(ptr) object *ptr;{ call_or_link_closure(VV[190],(void **)(void *)&Lnk190,(void **)(void *)&Lclptr190);} /* INTERNAL-ERROR-FUNCTION-NAME */
static void LnkT189(ptr) object *ptr;{ call_or_link_closure(VV[189],(void **)(void *)&Lnk189,(void **)(void *)&Lclptr189);} /* CELL-ERROR-NAME */
static void LnkT188(ptr) object *ptr;{ call_or_link_closure(VV[188],(void **)(void *)&Lnk188,(void **)(void *)&Lclptr188);} /* PACKAGE-ERROR-MESSAGE */
static void LnkT187(ptr) object *ptr;{ call_or_link_closure(VV[187],(void **)(void *)&Lnk187,(void **)(void *)&Lclptr187);} /* PACKAGE-ERROR-PACKAGE */
static void LnkT186(ptr) object *ptr;{ call_or_link_closure(VV[186],(void **)(void *)&Lnk186,(void **)(void *)&Lclptr186);} /* STREAM-ERROR-STREAM */
static void LnkT185(ptr) object *ptr;{ call_or_link_closure(VV[185],(void **)(void *)&Lnk185,(void **)(void *)&Lclptr185);} /* CASE-FAILURE-POSSIBILITIES */
static void LnkT184(ptr) object *ptr;{ call_or_link_closure(VV[184],(void **)(void *)&Lnk184,(void **)(void *)&Lclptr184);} /* CASE-FAILURE-NAME */
static void LnkT183(ptr) object *ptr;{ call_or_link_closure(VV[183],(void **)(void *)&Lnk183,(void **)(void *)&Lclptr183);} /* TYPE-ERROR-EXPECTED-TYPE */
static void LnkT182(ptr) object *ptr;{ call_or_link_closure(VV[182],(void **)(void *)&Lnk182,(void **)(void *)&Lclptr182);} /* TYPE-ERROR-DATUM */
static void LnkT181(){ call_or_link(VV[181],(void **)(void *)&Lnk181);} /* SIMPLE-CONDITION-PRINTER */
static void LnkT180(){ call_or_link(VV[180],(void **)(void *)&Lnk180);} /* ERROR */
static void LnkT5(){ call_or_link(VV[5],(void **)(void *)&Lnk5);} /* ERROR */
static void LnkT179(){ call_or_link(VV[179],(void **)(void *)&Lnk179);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT178(){ call_or_link(VV[178],(void **)(void *)&Lnk178);} /* STRUCTURE-SUBTYPE-P */
static void LnkT176(ptr) object *ptr;{ call_or_link_closure(VV[176],(void **)(void *)&Lnk176,(void **)(void *)&Lclptr176);} /* SIMPLE-CONDITION-FORMAT-ARGUMENTS */
static void LnkT175(ptr) object *ptr;{ call_or_link_closure(VV[175],(void **)(void *)&Lnk175,(void **)(void *)&Lclptr175);} /* SIMPLE-CONDITION-FORMAT-STRING */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

