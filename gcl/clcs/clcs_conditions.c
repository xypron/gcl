
#include "cmpinclude.h"
#include "clcs_conditions.h"
void init_clcs_conditions(){do_init(VV);}
/*	macro definition for DEFINE-CONDITION	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[3]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[4]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[5]= V1;}
	if((base[3])!=Cnil){
	goto T1;}
	if((base[2])==(VV[0])){
	goto T1;}
	base[3]= make_cons(VV[0],Cnil);
	goto T1;
T1:;
	{register object V2;
	register object V3;
	V2= Cnil;
	V3= Cnil;
	{register object V4;
	V4= base[5];
	goto T11;
T11:;
	if(((V4))!=Cnil){
	goto T12;}
	goto T9;
	goto T12;
T12:;
	{register object V5;
	V5= CMPcar((V4));
	{object V6= CMPcar((V5));
	if((V6!= VV[39]))goto T18;
	if(!(type_of(CMPcadr((V5)))==t_string)){
	goto T21;}
	V2= list(4,VV[1],VV[2],VV[3],list(3,VV[4],CMPcadr((V5)),VV[5]));
	goto T19;
	goto T21;
T21:;
	V2= CMPcadr((V5));
	goto T19;
T19:;
	goto T16;
	goto T18;
T18:;
	if((V6!= VV[40]))goto T23;
	V3= CMPcadr((V5));
	goto T16;
	goto T23;
T23:;
	base[6]= VV[6];
	base[7]= VV[7];
	base[8]= (V5);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk41)();
	vs_top=sup;}}
	goto T16;
T16:;
	V4= CMPcdr((V4));
	goto T11;}
	goto T9;
T9:;
	V7= list(4,VV[10],base[2],base[3],base[4]);
	{object V9;
	object V10= base[4];
	if(V10==Cnil){
	V8= Cnil;
	goto T31;}
	base[6]=V9=MMcons(Cnil,Cnil);
	goto T32;
T32:;
	{object V12;
	base[8]= CMPcdr((V10->c.c_car));
	base[9]= VV[15];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V12= vs_base[0];
	if(((V12))==Cnil){
	goto T38;}{object V14;
	base[8]= CMPcdr((V10->c.c_car));
	base[9]= VV[16];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V14= vs_base[0];
	if(V14==Cnil)goto T41;
	V13= V14;
	goto T40;
	goto T41;
T41:;}
	V13= Ct;
	goto T40;
T40:;
	V15= make_cons((V12),V13);
	(V9->c.c_cdr)= make_cons(/* INLINE-ARGS */V15,Cnil);
	goto T33;
	goto T38;
T38:;
	(V9->c.c_cdr)= Cnil;}
	goto T33;
T33:;
	while(MMcdr(V9)!=Cnil)V9=MMcdr(V9);
	if((V10=MMcdr(V10))==Cnil){
	base[6]=base[6]->c.c_cdr;
	V8= base[6];
	goto T31;}
	goto T32;}
	goto T31;
T31:;
	V16= list(3,VV[13],list(2,VV[14],listA(3,base[2],base[3],V8)),VV[17]);
	V17= list(4,VV[11],VV[12],/* INLINE-ARGS */V16,list(3,VV[18],list(3,VV[19],list(2,VV[14],base[2]),VV[20]),Cnil));
	if(((V2))==Cnil){
	goto T47;}
	V19= list(2,list(2,VV[23],base[2]),VV[5]);
	V20= list(4,VV[21],VV[22],/* INLINE-ARGS */V19,list(4,VV[24],VV[25],VV[26],make_cons((V2),VV[27])));
	V18= make_cons(/* INLINE-ARGS */V20,Cnil);
	goto T45;
	goto T47;
T47:;
	V18= Cnil;
	goto T45;
T45:;
	V21= list(2,VV[14],base[2]);
	V22= make_cons(/* INLINE-ARGS */V21,Cnil);
	base[6]= listA(5,VV[8],VV[9],/* INLINE-ARGS */V7,/* INLINE-ARGS */V17,append(V18,/* INLINE-ARGS */V22));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	function definition for Defclass CONDITION2258	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= VV[28];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= Cnil;
	symlispcall(VV[42],base+0,6);
	return;
}
/*	function definition for CONDITIONP	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V23;
	V23=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V23);
	base[2]= VV[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk43)();
	return;
	}
}
/*	function definition for (PCL::FAST-METHOD PRINT-OBJECT (CONDITION T))	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V24;
	object V25;
	register object V26;
	object V27;
	V24=(base[0]);
	V25=(base[1]);
	V26=(base[2]);
	V27=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T61;}
	base[4]= (V27);
	base[5]= VV[29];
	base[8]= (V26);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk44)();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	base[6]= vs_base[0];
	base[8]= (V26);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk46)();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	return;
	goto T61;
T61:;
	base[4]= (V27);
	base[5]= VV[30];
	base[7]= (V26);
	vs_top=(vs_base=base+7)+1;
	Ltype_of();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	return;
	}
}
/*	function definition for CONDITION-CLASS-P	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{register object V29;
	V29=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V29))==t_symbol)){
	goto T74;}
	base[1]= (V29);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk47)();
	vs_top=sup;
	V29= vs_base[0];
	goto T74;
T74:;
	base[1]= (V29);
	base[2]= VV[28];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk43)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T79;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T79;
T79:;{object V31;
	V31= (VV[31]->s.s_dbind);
	base[1]= (V29);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk48)(Lclptr48);
	vs_top=sup;
	V32= vs_base[0];
	{register object x= V31,V30= V32;
	while(V30!=Cnil)
	if(eql(x,V30->c.c_car)){
	base[1]= V30;
	vs_top=(vs_base=base+1)+1;
	return;
	}else V30=V30->c.c_cdr;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
/*	function definition for MAKE-CONDITION	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{register object V33;
	object V34;
	V33=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V34=(base[1]);
	vs_top=sup;
	base[2]= (V33);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T85;}
	base[2]= VV[32];
	base[3]= VV[33];
	base[4]= (V33);
	base[5]= VV[34];
	base[6]= VV[35];
	base[7]= VV[36];
	base[8]= VV[37];
	base[9]= VV[38];
	base[10]= make_cons((V33),Cnil);
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk50)();
	vs_top=sup;
	goto T85;
T85:;
	base[2]=VV[51]->s.s_gfdef;
	base[3]= (V33);
	{object V35;
	V35= (V34);
	 vs_top=base+4;
	 while(V35!=Cnil)
	 {vs_push((V35)->c.c_car);V35=(V35)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk51)(Lclptr51);
	return;
	}
}
static void LnkT51(ptr) object *ptr;{ call_or_link_closure(VV[51],(void **)(void *)&Lnk51,(void **)(void *)&Lclptr51);} /* MAKE-INSTANCE */
static void LnkT50(){ call_or_link(VV[50],(void **)(void *)&Lnk50);} /* ERROR */
static void LnkT49(){ call_or_link(VV[49],(void **)(void *)&Lnk49);} /* CONDITION-CLASS-P */
static void LnkT48(ptr) object *ptr;{ call_or_link_closure(VV[48],(void **)(void *)&Lnk48,(void **)(void *)&Lclptr48);} /* CLASS-PRECEDENCE-LIST */
static void LnkT47(){ call_or_link(VV[47],(void **)(void *)&Lnk47);} /* FIND-CLASS */
static void LnkT46(){ call_or_link(VV[46],(void **)(void *)&Lnk46);} /* UNIQUE-ID */
static void LnkT45(ptr) object *ptr;{ call_or_link_closure(VV[45],(void **)(void *)&Lnk45,(void **)(void *)&Lclptr45);} /* CLASS-NAME */
static void LnkT44(){ call_or_link(VV[44],(void **)(void *)&Lnk44);} /* CLASS-OF */
static void LnkT43(){ call_or_link(VV[43],(void **)(void *)&Lnk43);} /* TYPEP */
static void LnkT41(){ call_or_link(VV[41],(void **)(void *)&Lnk41);} /* CERROR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

