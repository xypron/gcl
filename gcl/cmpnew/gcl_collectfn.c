
#include "cmpinclude.h"
#include "gcl_collectfn.h"
void init_gcl_collectfn(){do_init(VV);}
/*	function definition for MAKE-FN	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	object V6;
	object V7;
	object V8;
	object V9;
	parse_key(vs_base,FALSE,FALSE,9,VV[7],VV[15],VV[84],VV[85],VV[86],VV[67],VV[68],VV[87],VV[88]);
	vs_top=sup;
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	V4=(base[3]);
	V5=(base[4]);
	V6=(base[5]);
	V7=(base[6]);
	V8=(base[7]);
	V9=(base[8]);
	base[18]= VV[0];
	base[19]= (V1);
	base[20]= (V2);
	base[21]= (V3);
	base[22]= (V4);
	base[23]= (V5);
	base[24]= (V6);
	base[25]= (V7);
	base[26]= (V8);
	base[27]= (V9);
	vs_top=(vs_base=base+18)+10;
	siLmake_structure();
	return;
	}
}
/*	function definition for ADD-CALLEE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{register object V10;
	V10=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V10))==t_cons)){
	goto T12;}
	if(!((CMPcar((V10)))==(VV[1]))){
	goto T14;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T14;
T14:;
	V10= CMPcar((V10));
	goto TTL;
	goto T12;
T12:;
	{object V11;
	V11= (((V10))==(VV[2])?Ct:Cnil);
	if(((V11))==Cnil){
	goto T20;}
	base[1]= (V11);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T20;
T20:;
	if(((V10))==Cnil){
	goto T23;}
	{object V13;
	object V14;
	vs_base=vs_top;
	(void) (*Lnk89)();
	vs_top=sup;
	V13= vs_base[0];
	base[3]= V10;
	base[4]= STREF(object,(V13),16);
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V14= vs_base[0];
	V15= Ct;
	STSET(object,(V13),16, (V14));
	base[3]= (V14);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T23;
T23:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for ADD-MACRO-CALLEE	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{register object V16;
	V16=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V17;
	{register object V18;
	register object V19;
	V18= Cnil;
	V19= (VV[3]->s.s_dbind);
	goto T32;
T32:;
	if(((V19))==Cnil){
	goto T35;}
	goto T34;
	goto T35;
T35:;
	goto T33;
	goto T34;
T34:;
	{register object V20;
	V20= CMPcar((V19));
	V18= (V20);}
	if(!(type_of((V18))==t_cons)){
	goto T40;}
	if(!((CMPcar((V18)))==((V16)))){
	goto T40;}
	V17= Ct;
	goto T30;
	goto T40;
T40:;
	V19= CMPcdr((V19));
	goto T32;
	goto T33;
T33:;
	V17= Cnil;
	goto T30;
	V17= Cnil;
	goto T30;}
	goto T30;
T30:;
	if(V17==Cnil)goto T29;
	base[1]= V17;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T29;
T29:;}
	{object V22;
	object V23;
	vs_base=vs_top;
	(void) (*Lnk89)();
	vs_top=sup;
	V22= vs_base[0];
	base[3]= V16;
	base[4]= STREF(object,(V22),32);
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V23= vs_base[0];
	V24= Ct;
	STSET(object,(V22),32, (V23));
	base[3]= (V23);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for CLEAR-CALL-TABLE	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	(VV[4]->s.s_dbind)= Cnil;
	(VV[5]->s.s_dbind)= Cnil;
	base[0]= VV[7];
	base[1]= VV[8];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk90)();
	vs_top=sup;
	(VV[6]->s.s_dbind)= vs_base[0];
	base[0]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lclrhash();
	vs_top=sup;
	{object V26;
	object V27;
	V26= (VV[9]->s.s_dbind);
	V27= (VV[6]->s.s_dbind);
	base[0]= VV[8];
	base[1]= (V26);
	base[2]= (V27);
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	return;}
}
/*	function definition for EMIT-FN	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V28;
	V28=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	(VV[10]->s.s_dbind)= (V28);
	base[1]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for TYPE-OR	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V29;
	register object V30;
	V29=(base[0]);
	V30=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V30))==(VV[11]))){
	goto T69;}
	base[2]= VV[11];
	vs_top=(vs_base=base+2)+1;
	return;
	goto T69;
T69:;
	{object V31= (V29);
	if((V31!= Cnil))goto T71;
	base[2]= (V30);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T71;
T71:;
	if((V31!= Ct)
	&& (V31!= VV[91]))goto T72;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T72;
T72:;
	if((V31!= VV[12])
	&& (V31!= VV[92])
	&& (V31!= VV[93]))goto T73;
	if(!(((V30))==(VV[12]))){
	goto T75;}
	base[2]= VV[12];
	vs_top=(vs_base=base+2)+1;
	return;
	goto T75;
T75:;
	V29= Ct;
	goto TTL;
	goto T73;
T73:;
	base[2]= VV[11];
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for CURRENT-FN	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((VV[13]->s.s_dbind))==t_cons)){
	goto T81;}
	{register object x= CMPcar((VV[13]->s.s_dbind)),V32= VV[14];
	while(V32!=Cnil)
	if(eql(x,V32->c.c_car)){
	goto T85;
	}else V32=V32->c.c_cdr;
	goto T81;}
	goto T85;
T85:;
	if(!(type_of(CMPcadr((VV[13]->s.s_dbind)))==t_symbol)){
	goto T81;}
	base[0]= CMPcadr((VV[13]->s.s_dbind));
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T81;}
	if(((VV[4]->s.s_dbind))==Cnil){
	goto T91;}
	if(!(equal(CMPcadr((VV[13]->s.s_dbind)),STREF(object,(VV[4]->s.s_dbind),0)))){
	goto T91;}
	base[0]= (VV[4]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
	goto T91;
T91:;
	base[0]= CMPcadr((VV[13]->s.s_dbind));
	base[1]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	(VV[4]->s.s_dbind)= vs_base[0];
	if(((VV[4]->s.s_dbind))!=Cnil){
	goto T95;}
	base[0]= VV[7];
	base[1]= CMPcadr((VV[13]->s.s_dbind));
	base[2]= VV[15];
	base[3]= CMPcar((VV[13]->s.s_dbind));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk90)();
	vs_top=sup;
	(VV[4]->s.s_dbind)= vs_base[0];
	{object V33;
	object V34;
	object V35;
	V33= CMPcadr((VV[13]->s.s_dbind));
	V34= (VV[9]->s.s_dbind);
	V35= (VV[4]->s.s_dbind);
	base[1]= (V33);
	base[2]= (V34);
	base[3]= (V35);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;}
	(VV[5]->s.s_dbind)= make_cons((VV[4]->s.s_dbind),(VV[5]->s.s_dbind));
	goto T95;
T95:;
	base[0]= (VV[4]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
	goto T81;
T81:;
	base[0]= (VV[6]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for WHO-CALLS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	base[1]=MMcons(Cnil,base[0]);
	base[2]=MMcons(Cnil,base[1]);
	base[3]= 
	make_cclosure_new(LC30,Cnil,base[2],Cdata);
	base[4]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lmaphash();
	vs_top=sup;
	base[3]= (base[1]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	return;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for ADD-VALUE-TYPE	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V36;
	object V37;
	V36=(base[0]);
	V37=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V38;
	vs_base=vs_top;
	(void) (*Lnk89)();
	vs_top=sup;
	V38= vs_base[0];
	if(((V37))==Cnil){
	goto T122;}
	{object V41;
	base[4]= V37;
	base[5]= STREF(object,V38,12);
	base[6]= VV[17];
	base[7]= VV[18];
	vs_top=(vs_base=base+4)+4;
	Ladjoin();
	vs_top=sup;
	V41= vs_base[0];
	V42= Ct;
	STSET(object,V38,12, (V41));
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T122;
T122:;
	base[3]= STREF(object,(V38),8);
	base[4]= (V36);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk94)();
	vs_top=sup;
	V43= vs_base[0];
	V44= Ct;
	STSET(object,(V38),8, V43);
	base[3]= V43;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	function definition for GET-VAR-TYPES	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V45;
	V45=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V46;
	register object V47;
	V46= Cnil;
	V47= (V45);
	{object V48;
	register object V49;
	register object V50;
	V48= Cnil;
	V49= Cnil;
	V50= Cnil;
	goto T133;
T133:;
	if(((V47))==Cnil){
	goto T136;}
	goto T135;
	goto T136;
T136:;
	goto T134;
	goto T135;
T135:;
	{register object V51;
	V51= CMPcar((V47));
	V46= (V51);}
	V50= STREF(object,(V46),20);
	if(((V49))==Cnil){
	goto T145;}
	{register object V52;
	register object V53;
	V52= (V49);
	V49= make_cons((V50),Cnil);
	V53= (V49);
	((V52))->c.c_cdr = (V53);
	goto T143;}
	goto T145;
T145:;
	V49= make_cons((V50),Cnil);
	V48= (V49);
	goto T143;
T143:;
	V47= CMPcdr((V47));
	goto T133;
	goto T134;
T134:;
	base[1]= (V48);
	vs_top=(vs_base=base+1)+1;
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
/*	function definition for RECORD-ARG-INFO	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V54;
	V54=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V55;
	vs_base=vs_top;
	(void) (*Lnk89)();
	vs_top=sup;
	V55= vs_base[0];
	base[2]= CMPcar((V54));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk95)();
	vs_top=sup;
	V56= vs_base[0];
	V57= Ct;
	STSET(object,(V55),24, V56);
	(void)(V56);
	{register object V58;
	register object V59;
	V59= CMPcdr((V54));
	V58= Cnil;
	{register object V60;
	register object V61;
	V60= Cnil;
	V61= VV[20];
	goto T166;
T166:;
	if(((V61))==Cnil){
	goto T169;}
	goto T168;
	goto T169;
T169:;
	goto T167;
	goto T168;
T168:;
	if(((V59))==Cnil){
	goto T172;}
	goto T171;
	goto T172;
T172:;
	goto T167;
	goto T171;
T171:;
	{register object V62;
	V62= CMPcar((V59));
	V58= (V62);}
	{register object V63;
	V63= CMPcar((V61));
	V60= (V63);}
	if(((V58))==Cnil){
	goto T180;}
	if(((V60))==Cnil){
	goto T180;}
	if((VV[11])==Cnil){
	goto T162;}
	goto T163;
	goto T180;
T180:;
	V59= CMPcdr((V59));
	V61= CMPcdr((V61));
	goto T166;
	goto T167;
T167:;
	goto T162;
	goto T162;}}
	goto T163;
T163:;
	V64= make_cons(VV[11],Cnil);
	V65= nconc(STREF(object,(V55),24),/* INLINE-ARGS */V64);
	V66= Ct;
	STSET(object,(V55),24, /* INLINE-ARGS */V65);
	base[2]= /* INLINE-ARGS */V65;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T162;
T162:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for GET-VALUE-TYPE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	bds_check;
	{object V67;
	V67=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object x= (V67),V68= (VV[21]->s.s_dbind);
	while(V68!=Cnil)
	if(x==(V68->c.c_car)){
	goto T192;
	}else V68=V68->c.c_cdr;
	goto T191;}
	goto T192;
T192:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T191;
T191:;
	{object V69;
	V69= ON_STACK_CONS((V67),(VV[21]->s.s_dbind));
	bds_bind(VV[21],(V69));
	base[2]= (V67);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk96)();
	bds_unwind1;
	return;}
	}
}
/*	function definition for GET-VALUE-TYPE1	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	bds_check;
	{object V70;
	V70=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V71;
	V71= Cnil;
	bds_bind(VV[22],CMPmake_fixnum((long)(1)+(fix((VV[22]->s.s_dbind)))));
	if(!((fix((VV[22]->s.s_dbind)))>(100))){
	goto T198;}
	base[2]= VV[11];
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T198;
T198:;
	base[2]= (V70);
	base[3]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V71= vs_base[0];
	if(((V71))==Cnil){
	goto T201;}{object V72;
	V72= STREF(object,(V71),20);
	if(V72==Cnil)goto T206;
	base[2]= V72;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T206;
T206:;}
	{register object V73;
	V73= STREF(object,(V71),8);
	{register object V74;
	register object V75;
	V75= STREF(object,(V71),12);
	V74= Cnil;
	goto T211;
T211:;
	if(((V75))==Cnil){
	goto T214;}
	goto T213;
	goto T214;
T214:;
	goto T212;
	goto T213;
T213:;
	{register object V76;
	V76= CMPcar((V75));
	V74= (V76);}
	if(!(type_of((V74))==t_symbol)){
	goto T221;}
	base[2]= (V73);
	base[4]= (V74);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk97)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk94)();
	vs_top=sup;
	V73= vs_base[0];
	goto T219;
	goto T221;
T221:;
	if(!(type_of((V74))==t_cons)){
	goto T228;}
	if(!((CMPcar((V74)))==(VV[1]))){
	goto T228;}
	base[2]= (V73);
	if(!(eql(CMPcdr((V74)),small_fixnum(1)))){
	goto T236;}
	base[3]= Ct;
	goto T234;
	goto T236;
T236:;
	base[3]= VV[11];
	goto T234;
T234:;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk94)();
	vs_top=sup;
	V73= vs_base[0];
	goto T219;
	goto T228;
T228:;
	base[2]= VV[23];
	base[3]= (V74);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	goto T219;
T219:;
	V75= CMPcdr((V75));
	goto T211;
	goto T212;
T212:;
	if((V73)!=Cnil){
	goto T242;}{object V77;
	V77= STREF(object,(V71),8);
	if(V77==Cnil)goto T243;
	goto T242;
	goto T243;
T243:;}{object V78;
	V78= STREF(object,(V71),12);
	if(V78==Cnil)goto T245;
	goto T242;
	goto T245;
T245:;}
	V73= Ct;
	goto T242;
T242:;
	V79= Ct;
	STSET(object,(V71),20, (V73));
	(void)((V73));
	base[2]= (V73);
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;}}
	goto T201;
T201:;
	{object V80;
	{object V81 =((V70))->s.s_plist;
	 object ind= VV[24];
	while(V81!=Cnil){
	if(V81->c.c_car==ind){
	V80= (V81->c.c_cdr->c.c_car);
	goto T251;
	}else V81=V81->c.c_cdr->c.c_cdr;}
	V80= Cnil;}
	goto T251;
T251:;
	if(((V80))==Cnil){
	goto T253;}
	base[2]= (V80);
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T253;
T253:;
	{object V82;
	{object V83 =((V70))->s.s_plist;
	 object ind= VV[25];
	while(V83!=Cnil){
	if(V83->c.c_car==ind){
	V82= (V83->c.c_cdr->c.c_car);
	goto T255;
	}else V83=V83->c.c_cdr->c.c_cdr;}
	V82= Cnil;}
	goto T255;
T255:;
	if(((V82))==Cnil){
	goto T257;}
	base[2]= (V82);
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T257;
T257:;
	base[2]= VV[11];
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;}}}
	}
}
/*	function definition for RESULT-TYPE-FROM-LOC	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{register object V84;
	V84=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V84))==t_cons)){
	goto T260;}
	{object V85= CMPcar((V84));
	if((V85!= VV[93])
	&& (V85!= VV[92]))goto T262;
	base[1]= VV[12];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T262;
T262:;
	if((V85!= VV[19]))goto T263;
	base[1]= STREF(object,CMPcadr((V84)),20);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T263;
T263:;
	if(!(type_of(CMPcar((V84)))==t_symbol)){
	goto T265;}
	{object V86 =(CMPcar((V84)))->s.s_plist;
	 object ind= VV[26];
	while(V86!=Cnil){
	if(V86->c.c_car==ind){
	if(((V86->c.c_cdr->c.c_car))==Cnil){
	goto T265;}
	goto T268;
	}else V86=V86->c.c_cdr->c.c_cdr;}
	goto T265;}
	goto T268;
T268:;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T265;
T265:;
	V87= list(3,VV[27],VV[11],(V84));
	(void)(print(/* INLINE-ARGS */V87,Cnil));
	base[1]= VV[11];
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T260;
T260:;
	if(((V84))==(Ct)){
	goto T270;}
	if(((V84))!=Cnil){
	goto T271;}
	goto T270;
T270:;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T271;
T271:;
	V88= list(3,VV[27],VV[28],(V84));
	(void)(print(/* INLINE-ARGS */V88,Cnil));
	base[1]= VV[11];
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for SMALL-ALL-T-P	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V89;
	object V90;
	V89=(base[0]);
	V90=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V90))==(Ct)){
	goto T276;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T276;
T276:;
	if(((long)length((V89)))<(10)){
	goto T278;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T278;
T278:;
	{register object V91;
	register object V92;
	V91= Cnil;
	V92= (V89);
	{register object V94;
	V94= Cnil;
	goto T281;
T281:;
	if(((V92))==Cnil){
	goto T284;}
	goto T283;
	goto T284;
T284:;
	goto T282;
	goto T283;
T283:;
	{register object V95;
	V95= CMPcar((V92));
	V91= (V95);}
	V94= (((V91))==(Ct)?Ct:Cnil);
	if(((V94))==Cnil){
	goto T292;}
	goto T291;
	goto T292;
T292:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T291;
T291:;
	V92= CMPcdr((V92));
	goto T281;
	goto T282;
T282:;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	function definition for NO-MAKE-PROCLAIMS-HACK	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[98];
	base[1]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lmaphash();
	vs_top=sup;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for MAKE-PROCLAIMS	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	bds_check;
	if(vs_base>=vs_top){vs_top=sup;goto T302;}
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	goto T303;
	goto T302;
T302:;
	base[0]= (VV[29]->s.s_dbind);
	base[0]=MMcons(base[0],Cnil);
	goto T303;
T303:;
	base[4]= VV[17];
	base[5]= VV[18];
	vs_top=(vs_base=base+4)+2;
	Lmake_hash_table();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],base[0]);
	bds_bind(VV[30],Cnil);
	bds_bind(VV[31],Cnil);
	base[4]= (VV[33]->s.s_dbind);
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	V96= vs_base[0];
	V97= list(2,VV[32],V96);
	(void)(print(/* INLINE-ARGS */V97,(base[0]->c.c_car)));
	base[4]=MMcons(Cnil,base[1]);
	base[5]=MMcons(Cnil,base[4]);
	base[6]= 
	make_cclosure_new(LC32,Cnil,base[5],Cdata);
	base[7]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	Lmaphash();
	vs_top=sup;
	goto T311;
	goto T311;
T311:;
	base[4]= 
	make_cclosure_new(LC33,Cnil,base[1],Cdata);
	base[5]= (base[1]->c.c_car);
	vs_top=(vs_base=base+4)+2;
	Lmaphash();
	vs_top=sup;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	return;
}
/*	function definition for SETUP-SYS-PROCLAIMS	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;{object V98;
	base[0]= VV[39];
	base[1]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V98= vs_base[0];
	if(V98==Cnil)goto T320;
	base[0]= V98;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T320;
T320:;}{object V99;
	{object V100 =(VV[39])->s.s_plist;
	 object ind= VV[40];
	while(V100!=Cnil){
	if(V100->c.c_car==ind){
	V99= (V100->c.c_cdr->c.c_car);
	goto T325;
	}else V100=V100->c.c_cdr->c.c_cdr;}
	V99= Cnil;}
	goto T325;
T325:;
	if(V99==Cnil)goto T324;
	base[0]= V99;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T324;
T324:;}{object V101;
	base[0]= (VFUN_NARGS=3,(*(LnkLI99))(VV[41],(VV[42]->s.s_dbind),VV[43]));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk100)();
	vs_top=sup;
	V101= vs_base[0];
	if(V101==Cnil)goto T326;
	base[0]= V101;
	vs_top=(vs_base=base+0)+1;
	return;
	goto T326;
T326:;}
	vs_base=vs_top;
	(void) (*Lnk101)();
	return;
}
/*	function definition for MAKE-ALL-PROCLAIMS	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V102;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V102=(base[0]);
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk102)();
	vs_top=sup;
	{register object V103;
	register object V104;
	V103= (V102);
	V104= CMPcar((V103));
	goto T334;
T334:;
	if(!(((V103))==Cnil)){
	goto T335;}
	goto T330;
	goto T335;
T335:;
	base[3]=VV[100]->s.s_gfdef;
	base[4]= (V104);
	vs_top=(vs_base=base+4)+1;
	Ldirectory();
	vs_top=sup;
	V107= vs_base[0];
	{object V105;
	object V106= V107;
	if(V106==Cnil){
	goto T339;}
	base[2]=V105=MMcons(Cnil,Cnil);
	goto T340;
T340:;
	base[4]= (V106->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk100)();
	vs_top=sup;
	(V105->c.c_car)= vs_base[0];
	if((V106=MMcdr(V106))==Cnil){
	goto T339;}
	V105=MMcdr(V105)=MMcons(Cnil,Cnil);
	goto T340;}
	goto T339;
T339:;
	V103= CMPcdr((V103));
	V104= CMPcar((V103));
	goto T334;}
	goto T330;
T330:;
	vs_base=vs_top;
	(void) (*Lnk103)();
	return;
	}
}
/*	function definition for WRITE-SYS-PROCLAIMS	*/

static void L20()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM20; VC20
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[44];
	base[2]= VV[45];
	base[3]= VV[46];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	base[0]= vs_base[0];
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk105)();
	active=FALSE;}
	base[1]=Cnil;
	while(vs_base<vs_top)
	{base[1]=MMcons(vs_top[-1],base[1]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[0])==Cnil){
	goto T356;}
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	Lclose();
	vs_top=sup;
	goto T356;
T356:;
	vs_base=vs_top=base+2;
	for(p= base[1];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	return;}}
}
/*	function definition for ADD-FN-DATA	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V108;
	V108=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V109;
	object V110;
	V109= Cnil;
	V110= Cnil;
	{register object V111;
	base[1]= (VV[47]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk106)();
	vs_top=sup;
	V110= vs_base[0];
	if(((V110))!=Cnil){
	goto T363;}
	V111= Cnil;
	goto T362;
	goto T363;
T363:;
	base[1]= (V110);
	vs_top=(vs_base=base+1)+1;
	Ltruename();
	vs_top=sup;
	V111= vs_base[0];
	goto T362;
T362:;
	{register object V112;
	register object V113;
	V112= (V108);
	V113= CMPcar((V112));
	goto T371;
T371:;
	if(!(((V112))==Cnil)){
	goto T372;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T372;
T372:;
	if(!(eql(STREF(object,(V113),0),VV[8]))){
	goto T376;}
	base[3]= (V111);
	vs_top=(vs_base=base+3)+1;
	Lnamestring();
	vs_top=sup;
	V115= vs_base[0];
	base[2]= (VFUN_NARGS=3,(*(LnkLI99))(VV[41],VV[48],V115));
	vs_top=(vs_base=base+2)+1;
	Lintern();
	vs_top=sup;
	V114= vs_base[0];
	V116= Ct;
	STSET(object,(V113),0, V114);
	(void)(V114);
	(void)(sputprop(STREF(object,(V113),0),VV[8],Ct));
	goto T376;
T376:;
	{register object V117;
	register object V118;
	register object V119;
	V117= STREF(object,(V113),0);
	V118= (VV[9]->s.s_dbind);
	V119= (V113);
	base[3]= (V117);
	base[4]= (V118);
	base[5]= (V119);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	base[2]= STREF(object,(V113),0);
	base[3]= (VV[49]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V109= vs_base[0];
	if(((V109))==Cnil){
	goto T391;}
	if(!(equal((V109),(V111)))){
	goto T397;}
	goto T391;
	goto T397;
T397:;
	base[2]= Ct;
	base[3]= VV[50];
	base[4]= STREF(object,(V113),0);
	base[5]= (V111);
	base[6]= (V109);
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	goto T391;
T391:;
	{register object V120;
	register object V121;
	register object V122;
	V120= STREF(object,(V113),0);
	V121= (VV[49]->s.s_dbind);
	V122= (V111);
	base[3]= (V120);
	base[4]= (V121);
	base[5]= (V122);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V112= CMPcdr((V112));
	V113= CMPcar((V112));
	goto T371;}}}
	}
}
/*	function definition for DUMP-FN-DATA	*/

static void L22()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM22; VC22
	vs_check;
	bds_check;
	{VOL object V123;
	if(vs_base>=vs_top){vs_top=sup;goto T416;}
	V123=(base[0]);
	vs_top=sup;
	goto T417;
	goto T416;
T416:;
	V123= VV[51];
	goto T417;
T417:;
	base[4]= VV[52];
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	bds_bind(VV[33],vs_base[0]);
	bds_bind(VV[30],Cnil);
	bds_bind(VV[31],Cnil);
	base[5]= (V123);
	base[6]= VV[45];
	base[7]= VV[46];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[4]=MMcons(base[4],Cnil);
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[6]= (base[4]->c.c_car);
	base[7]= VV[53];
	base[8]= VV[54];
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[6]= 
	make_cclosure_new(LC34,Cnil,base[4],Cdata);
	base[7]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	Lmaphash();
	vs_top=sup;
	goto T430;
	goto T430;
T430:;
	(void)(princ(VV[55],(base[4]->c.c_car)));
	base[6]= (base[4]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	Ltruename();
	active=FALSE;}
	base[5]=Cnil;
	while(vs_base<vs_top)
	{base[5]=MMcons(vs_top[-1],base[5]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if(((base[4]->c.c_car))==Cnil){
	goto T437;}
	base[6]= (base[4]->c.c_car);
	vs_top=(vs_base=base+6)+1;
	Lclose();
	vs_top=sup;
	goto T437;
T437:;
	vs_base=vs_top=base+6;
	for(p= base[5];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for RECORD-CALL-INFO	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V124;
	register object V125;
	V124=(base[0]);
	V125=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V125))==Cnil){
	goto T441;}
	if(!(type_of((V125))==t_symbol)){
	goto T441;}
	base[2]= (V125);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk107)();
	vs_top=sup;
	goto T441;
T441:;
	if(!(((V124))==(VV[56]))){
	goto T447;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T447;
T447:;
	{object V126= (VV[57]->s.s_dbind);
	if((V126!= VV[108]))goto T450;
	if(!(((V124))==(VV[58]))){
	goto T452;}
	base[2]= Cnil;
	if((V125)!=Cnil){
	base[3]= (V125);
	goto T455;}
	base[3]= VV[59];
	goto T455;
T455:;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk109)();
	return;
	goto T452;
T452:;
	base[3]= (V124);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk110)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk109)();
	return;
	goto T450;
T450:;
	if((V126!= VV[111]))goto T459;
	base[2]= VV[12];
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk109)();
	return;
	goto T459;
T459:;
	if((V126!= VV[112]))goto T462;
	base[2]= Ct;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk109)();
	return;
	goto T462;
T462:;
	if((V126!= VV[113]))goto T465;
	(VV[60]->s.s_dbind)= make_cons((V125),Cnil);
	base[2]= (VV[60]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T465;
T465:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for LIST-UNDEFINED-FUNCTIONS	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]= 
	make_cclosure_new(LC35,Cnil,base[0],Cdata);
	base[2]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lmaphash();
	vs_top=sup;
	goto T467;
	goto T467;
T467:;
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
}
/*	function definition for INIT-FN	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LIST-UNCALLED-FUNCTIONS	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V127;
	base[2]=MMcons(small_fixnum(0),Cnil);
	base[3]= 
	make_cclosure_new(LC36,Cnil,base[2],Cdata);
	base[4]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lmaphash();
	vs_top=sup;
	V127= (base[2]->c.c_car);
	goto T472;
	V127= Cnil;
	goto T472;
	V127= Cnil;
	goto T472;
T472:;
	base[2]= VV[17];
	base[3]= VV[63];
	base[4]= VV[64];
	base[5]= number_plus(small_fixnum(3),(V127));
	vs_top=(vs_base=base+2)+4;
	Lmake_hash_table();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],Cnil);
	base[2]= 
	make_cclosure_new(LC37,Cnil,base[1],Cdata);
	base[3]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lmaphash();
	vs_top=sup;
	goto T483;
	goto T483;
T483:;
	base[2]=MMcons(Cnil,base[1]);
	base[3]=MMcons(Cnil,base[2]);
	base[4]= 
	make_cclosure_new(LC38,Cnil,base[3],Cdata);
	base[5]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	Lmaphash();
	vs_top=sup;
	base[4]= (base[2]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	function definition for RECORD-FN	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V128;
	object V129;
	object V130;
	object V131;
	V128=(base[0]);
	V129=(base[1]);
	V130=(base[2]);
	V131=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V131))!=Cnil){
	goto T493;}
	V131= Ct;
	goto T493;
T493:;
	if((VV[10]->s.s_dbind)==Cnil){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	if((VV[66]->s.s_dbind)==Cnil){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	{object V132;
	base[4]= VV[7];
	base[5]= (V128);
	base[6]= VV[15];
	base[7]= (V129);
	base[8]= VV[67];
	base[9]= (V131);
	base[10]= VV[68];
	base[11]= (V130);
	vs_top=(vs_base=base+4)+8;
	(void) (*Lnk90)();
	vs_top=sup;
	V132= vs_base[0];
	(VV[5]->s.s_dbind)= make_cons(V132,(VV[5]->s.s_dbind));
	{object V135;
	V135= (VV[9]->s.s_dbind);
	base[4]= V128;
	base[5]= (V135);
	base[6]= V132;
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	return;}}
	}
}
/*	function definition for GET-PACKAGES	*/

static void L28()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM28; VC28
	vs_check;
	bds_check;
	{VOL object V137;
	if(vs_base>=vs_top){vs_top=sup;goto T512;}
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T513;}
	V137=(base[1]);
	vs_top=sup;
	goto T514;
	goto T512;
T512:;
	base[0]= VV[69];
	goto T513;
T513:;
	V137= Cnil;
	goto T514;
T514:;
	bds_bind(VV[70],Ct);
	base[3]=alloc_frame_id();
	frs_push(FRS_CATCH,base[3]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	bds_unwind1;
	return;}
	else{
	if(((V137))!=Cnil){
	goto T517;}
	base[5]= base[0];
	base[6]= VV[45];
	base[7]= VV[46];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk104)();
	vs_top=sup;
	base[4]= vs_base[0];
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[6]= base[4];
	base[7]= VV[71];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	base[6]= base[4];
	base[7]= VV[72];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	base[6]= base[4];
	base[7]= VV[73];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	base[6]= base[4];
	base[7]= VV[74];
	vs_top=(vs_base=base+6)+2;
	Lformat();
	vs_top=sup;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	unwind(frs_sch(base[3]),Cnil);
	active=FALSE;}
	base[5]=Cnil;
	while(vs_base<vs_top)
	{base[5]=MMcons(vs_top[-1],base[5]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[4])==Cnil){
	goto T538;}
	base[6]= base[4];
	vs_top=(vs_base=base+6)+1;
	Lclose();
	vs_top=sup;
	goto T538;
T538:;
	vs_base=vs_top=base+6;
	for(p= base[5];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;}}
	goto T517;
T517:;
	{object V138;
	register object V139;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V138= vs_base[0];
	V139= CMPcar((V138));
	goto T545;
T545:;
	if(!(((V138))==Cnil)){
	goto T546;}
	frs_pop();
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	return;
	goto T546;
T546:;
	base[6]= (V139);
	vs_top=(vs_base=base+6)+1;
	Lpackage_name();
	vs_top=sup;
	V141= vs_base[0];
	{register object x= V141,V140= VV[75];
	while(V140!=Cnil)
	if(equal(x,V140->c.c_car)){
	goto T550;
	}else V140=V140->c.c_cdr;}
	base[6]= base[0];
	base[7]= VV[76];
	base[9]= (V139);
	vs_top=(vs_base=base+9)+1;
	Lpackage_name();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (V137);
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
	{object V142= (V137);
	if((V142!= VV[71]))goto T561;
	bds_bind(VV[70],Ct);
	base[8]= (V139);
	vs_top=(vs_base=base+8)+1;
	Lpackage_name();
	vs_top=sup;
	V143= vs_base[0];
	base[8]= (V139);
	vs_top=(vs_base=base+8)+1;
	Lpackage_nicknames();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T567;}
	base[8]= (V139);
	vs_top=(vs_base=base+8)+1;
	Lpackage_nicknames();
	vs_top=sup;
	V145= vs_base[0];
	V144= list(2,VV[78],list(2,VV[36],V145));
	goto T565;
	goto T567;
T567:;
	V144= Cnil;
	goto T565;
T565:;
	base[7]= listA(5,VV[32],V143,VV[77],Cnil,V144);
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	bds_unwind1;
	goto T550;
	goto T561;
T561:;
	if((V142!= VV[72]))goto T572;
	bds_bind(VV[70],Ct);
	base[8]= (V139);
	vs_top=(vs_base=base+8)+1;
	Lpackage_name();
	vs_top=sup;
	V146= vs_base[0];
	base[9]= (V139);
	vs_top=(vs_base=base+9)+1;
	Lpackage_use_list();
	vs_top=sup;
	V150= vs_base[0];
	{object V148;
	object V149= V150;
	if(V149==Cnil){
	V147= Cnil;
	goto T577;}
	base[8]=V148=MMcons(Cnil,Cnil);
	goto T578;
T578:;
	base[9]= (V149->c.c_car);
	vs_top=(vs_base=base+9)+1;
	Lpackage_name();
	vs_top=sup;
	(V148->c.c_car)= vs_base[0];
	if((V149=MMcdr(V149))==Cnil){
	V147= base[8];
	goto T577;}
	V148=MMcdr(V148)=MMcons(Cnil,Cnil);
	goto T578;}
	goto T577;
T577:;
	V151= list(2,VV[36],V147);
	base[8]= (V139);
	vs_top=(vs_base=base+8)+1;
	Lpackage_nicknames();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T585;}
	base[8]= (V139);
	vs_top=(vs_base=base+8)+1;
	Lpackage_nicknames();
	vs_top=sup;
	V153= vs_base[0];
	V152= list(2,VV[78],list(2,VV[36],V153));
	goto T583;
	goto T585;
T585:;
	V152= Cnil;
	goto T583;
T583:;
	base[7]= listA(5,VV[32],V146,VV[77],/* INLINE-ARGS */V151,V152);
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	bds_unwind1;
	{object V154;
	object V155;
	V154= Cnil;
	bds_bind(VV[33],(V139));
	V155= Cnil;
	{object V156;
	register object V157;
	register object V158;
	base[7]= V139;
	vs_top=(vs_base=base+7)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T593;}
	V156= V139;
	goto T591;
	goto T593;
T593:;
	base[7]= coerce_to_string(V139);
	vs_top=(vs_base=base+7)+1;
	Lfind_package();
	vs_top=sup;
	V156= vs_base[0];
	goto T591;
T591:;
	V157= Cnil;
	V158= Cnil;
	{object V160;
	object V161;
	base[8]= (V156);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V160= vs_base[0];
	V161= small_fixnum(0);
	goto T601;
T601:;
	if(!(number_compare((V161),(V160))>=0)){
	goto T602;}
	V157= Cnil;
	goto T590;
	goto T602;
T602:;
	base[8]= (V156);
	base[9]= (V161);
	vs_top=(vs_base=base+8)+2;
	siLpackage_external();
	vs_top=sup;
	V158= vs_base[0];
	goto T609;
T609:;
	if(((V158))!=Cnil){
	goto T614;}
	goto T610;
	goto T614;
T614:;
	V157= CMPcar((V158));
	V154= make_cons(V157,(V154));
	base[8]= (V157);
	vs_top=(vs_base=base+8)+1;
	Lsymbol_package();
	vs_top=sup;
	V163= vs_base[0];
	if(!((V163)==((V139)))){
	goto T622;}
	goto T621;
	goto T622;
T622:;
	V155= make_cons(V157,(V155));
	goto T621;
T621:;
	V158= CMPcdr((V158));
	goto T609;
	goto T610;
T610:;
	goto T607;
	goto T607;
T607:;
	V161= one_plus((V161));
	goto T601;}}
	goto T590;
T590:;
	base[7]= list(2,VV[79],list(2,VV[36],(V155)));
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	base[7]= list(2,VV[72],list(2,VV[36],(V154)));
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	bds_unwind1;
	goto T550;}
	goto T572;
T572:;
	if((V142!= VV[73]))goto T635;
	bds_bind(VV[70],Ct);
	base[8]= (V139);
	vs_top=(vs_base=base+8)+1;
	Lpackage_name();
	vs_top=sup;
	V165= vs_base[0];
	base[7]= list(2,VV[32],V165);
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	bds_unwind1;
	{object V166;
	object V167;
	base[7]= VV[80];
	vs_top=(vs_base=base+7)+1;
	Lfind_package();
	vs_top=sup;
	base[6]= vs_base[0];
	V166= Cnil;
	V167= Cnil;
	bds_bind(VV[33],base[6]);
	{object V168;
	object V169;
	base[9]= (V139);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V168= vs_base[0];
	V169= CMPcar((V168));
	goto T647;
T647:;
	if(!(((V168))==Cnil)){
	goto T648;}
	goto T642;
	goto T648;
T648:;
	base[9]= (V169);
	vs_top=(vs_base=base+9)+1;
	Lsymbol_package();
	vs_top=sup;
	V170= vs_base[0];
	if(!((V170)==((V139)))){
	goto T654;}
	V166= make_cons(V169,(V166));
	goto T652;
	goto T654;
T654:;
	V167= make_cons(V169,(V167));
	goto T652;
T652:;
	V168= CMPcdr((V168));
	V169= CMPcar((V168));
	goto T647;}
	goto T642;
T642:;
	base[7]= list(2,VV[73],list(2,VV[36],(V166)));
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	base[7]= list(2,VV[81],list(2,VV[36],(V167)));
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	{object V173;
	V173= Cnil;
	{object V174;
	register object V175;
	register object V176;
	base[7]= V139;
	vs_top=(vs_base=base+7)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T672;}
	V174= V139;
	goto T670;
	goto T672;
T672:;
	base[7]= coerce_to_string(V139);
	vs_top=(vs_base=base+7)+1;
	Lfind_package();
	vs_top=sup;
	V174= vs_base[0];
	goto T670;
T670:;
	V175= Cnil;
	V176= Cnil;
	{object V178;
	register object V179;
	base[9]= (V174);
	vs_top=(vs_base=base+9)+1;
	Lpackage_use_list();
	vs_top=sup;
	V180= vs_base[0];
	V178= make_cons((V174),V180);
	V179= CMPcar((V178));
	goto T681;
T681:;
	if(!(((V178))==Cnil)){
	goto T682;}
	V175= Cnil;
	goto T669;
	goto T682;
T682:;
	{long V181;
	long V182;
	base[9]= (V179);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk115)();
	if(vs_base>=vs_top){vs_top=sup;goto T691;}
	V181= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T692;}
	V182= fix(vs_base[0]);
	vs_top=sup;
	goto T693;
	goto T691;
T691:;
	V181= fix(Cnil);
	goto T692;
T692:;
	V182= fix(Cnil);
	goto T693;
T693:;
	if(((V174))==((V179))){
	goto T694;}
	V182= 0;
	goto T694;
T694:;
	{object V183;
	register object V184;
	V185 = CMPmake_fixnum(V182);
	V186 = CMPmake_fixnum(V181);
	V183= number_plus(V185,V186);
	V184= small_fixnum(0);
	goto T701;
T701:;
	if(!(number_compare((V184),(V183))>=0)){
	goto T702;}
	goto T688;
	goto T702;
T702:;
	V187 = CMPmake_fixnum(V182);
	if(!(number_compare((V184),V187)<0)){
	goto T711;}
	base[10]= (V179);
	base[11]= (V184);
	vs_top=(vs_base=base+10)+2;
	siLpackage_internal();
	vs_top=sup;
	V176= vs_base[0];
	goto T709;
	goto T711;
T711:;
	base[10]= (V179);
	V188 = CMPmake_fixnum(V182);
	base[11]= number_minus((V184),V188);
	vs_top=(vs_base=base+10)+2;
	siLpackage_external();
	vs_top=sup;
	V176= vs_base[0];
	goto T709;
T709:;
	goto T707;
T707:;
	if(((V176))!=Cnil){
	goto T717;}
	goto T708;
	goto T717;
T717:;
	V175= CMPcar((V176));
	if(((V179))==((V174))){
	goto T723;}
	base[11]= symbol_name((V175));
	base[12]= (V174);
	vs_top=(vs_base=base+11)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+10)+1;
	Llast();
	vs_top=sup;
	V189= vs_base[0];
	if(!((VV[82])==(CMPcar(V189)))){
	goto T722;}
	goto T723;
T723:;
	base[10]= (V175);
	vs_top=(vs_base=base+10)+1;
	Lsymbol_package();
	vs_top=sup;
	V190= vs_base[0];
	if((V190)==((V139))){
	goto T732;}
	V173= make_cons(V175,(V173));
	goto T732;
T732:;
	goto T722;
T722:;
	V176= CMPcdr((V176));
	goto T707;
	goto T708;
T708:;
	goto T705;
	goto T705;
T705:;
	V184= one_plus((V184));
	goto T701;}}
	goto T688;
T688:;
	V178= CMPcdr((V178));
	V179= CMPcar((V178));
	goto T681;}}
	goto T669;
T669:;
	base[7]= list(2,VV[79],list(2,VV[36],(V173)));
	vs_top=(vs_base=base+7)+1;
	L29(base);
	vs_top=sup;
	bds_unwind1;
	goto T550;}}
	goto T635;
T635:;
	FEerror("The ECASE key value ~s is illegal.",1,V142);
	goto T550;}
	goto T550;
T550:;
	V138= CMPcdr((V138));
	V139= CMPcar((V138));
	goto T545;}
	}
	}
}
/*	local function PR	*/

static void L29(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V192;
	V192=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[0];
	base[2]= VV[83];
	base[3]= (V192);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC38(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V193;
	object V194;
	V193=(base[0]);
	V194=(base[1]);
	vs_top=sup;
	base[2]= (V193);
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T759;}
	{register object x= STREF(object,(V194),4),V195= VV[65];
	while(V195!=Cnil)
	if(x==(V195->c.c_car)){
	goto T764;
	}else V195=V195->c.c_cdr;
	goto T759;}
	goto T764;
T764:;
	if(((base0[0]->c.c_car))==Cnil){
	goto T766;}
	{object V196;
	object V197;
	V196= (base0[0]->c.c_car);
	(base0[0]->c.c_car)= make_cons((V193),Cnil);
	V197= (base0[0]->c.c_car);
	((V196))->c.c_cdr = (V197);
	base[3]= (V197);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T766;
T766:;
	(base0[0]->c.c_car)= make_cons((V193),Cnil);
	(base0[1]->c.c_car)= (base0[0]->c.c_car);
	base[2]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T759;
T759:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC37(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V198;
	object V199;
	V198=(base[0]);
	V199=(base[1]);
	vs_top=sup;
	{register object V200;
	register object V201;
	V201= STREF(object,(V199),16);
	V200= Cnil;
	goto T777;
T777:;
	if(((V201))==Cnil){
	goto T780;}
	goto T779;
	goto T780;
T780:;
	goto T778;
	goto T779;
T779:;
	{register object V202;
	V202= CMPcar((V201));
	V200= (V202);}
	{register object V203;
	register object V204;
	register object V205;
	V203= (V200);
	V204= (base0[0]->c.c_car);
	V205= Ct;
	base[2]= (V203);
	base[3]= (V204);
	base[4]= (V205);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	V201= CMPcdr((V201));
	goto T777;
	goto T778;
T778:;
	goto T774;
	goto T774;}
	goto T774;
T774:;
	{register object V206;
	register object V207;
	V207= STREF(object,(V199),32);
	V206= Cnil;
	goto T797;
T797:;
	if(((V207))==Cnil){
	goto T800;}
	goto T799;
	goto T800;
T800:;
	goto T798;
	goto T799;
T799:;
	{register object V208;
	V208= CMPcar((V207));
	V206= (V208);}
	{register object V209;
	register object V210;
	register object V211;
	V209= (V206);
	V210= (base0[0]->c.c_car);
	V211= Ct;
	base[2]= (V209);
	base[3]= (V210);
	base[4]= (V211);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	V207= CMPcdr((V207));
	goto T797;
	goto T798;
T798:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC36(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V212;
	object V213;
	V212=(base[0]);
	V213=(base[1]);
	vs_top=sup;
	(base0[0]->c.c_car)= one_plus((base0[0]->c.c_car));
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	{object V214;
	object V215;
	V214=(base[0]);
	V215=(base[1]);
	vs_top=sup;
	{register object V216;
	register object V217;
	V217= STREF(object,(V215),16);
	V216= Cnil;
	goto T822;
T822:;
	if(((V217))==Cnil){
	goto T825;}
	goto T824;
	goto T825;
T825:;
	goto T823;
	goto T824;
T824:;
	{register object V218;
	V218= CMPcar((V217));
	V216= (V218);}
	base[2]= (V216);
	vs_top=(vs_base=base+2)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T830;}
	base[2]= (V216);
	base[3]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T830;}
	{object V219 =((V216))->s.s_plist;
	 object ind= VV[61];
	while(V219!=Cnil){
	if(V219->c.c_car==ind){
	if(((V219->c.c_cdr->c.c_car))!=Cnil){
	goto T830;}
	goto T840;
	}else V219=V219->c.c_cdr->c.c_cdr;}}
	goto T840;
T840:;
	{object V220 =((V216))->s.s_plist;
	 object ind= VV[62];
	while(V220!=Cnil){
	if(V220->c.c_car==ind){
	if(((V220->c.c_cdr->c.c_car))!=Cnil){
	goto T830;}
	goto T842;
	}else V220=V220->c.c_cdr->c.c_cdr;}}
	goto T842;
T842:;
	{object V221 =((V216))->s.s_plist;
	 object ind= VV[8];
	while(V221!=Cnil){
	if(V221->c.c_car==ind){
	if(((V221->c.c_cdr->c.c_car))!=Cnil){
	goto T830;}
	goto T843;
	}else V221=V221->c.c_cdr->c.c_cdr;}}
	goto T843;
T843:;
	{register object V222;
	V222= (V216);
	base[2]= (V222);
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	(base0[0]->c.c_car)= vs_base[0];}
	goto T830;
T830:;
	V217= CMPcdr((V217));
	goto T822;
	goto T823;
T823:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V223;
	object V224;
	V223=(base[0]);
	V224=(base[1]);
	vs_top=sup;
	base[2]= print((V224),(base0[0]->c.c_car));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC33(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V225;
	object V226;
	V225=(base[0]);
	V226=(base[1]);
	vs_top=sup;
	V227= list(2,VV[35],list(2,VV[36],listA(3,VV[37],make_cons(VV[38],(V225)),(V226))));
	base[2]= print(/* INLINE-ARGS */V227,(base0[1]->c.c_car));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC32(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V228;
	object V229;
	V228=(base[0]);
	V229=(base[1]);
	vs_top=sup;
	{object V230;
	if(!(eql(small_fixnum(1),STREF(object,(V229),28)))){
	goto T856;}
	V230= Ct;
	goto T855;
	goto T856;
T856:;
	V230= ((((STREF(object,(V229),4))==(VV[34])?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T855;
T855:;
	if(((V230))==Cnil){
	goto T859;}
	base[2]= (V230);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T859;
T859:;
	base[2]= (V228);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk97)();
	vs_top=sup;
	(base0[1]->c.c_car)= vs_base[0];
	(base0[0]->c.c_car)= STREF(object,(V229),24);
	{object V232;
	object V233;
	object V234;
	V232= list(2,(base0[0]->c.c_car),(base0[1]->c.c_car));
	V233= (base0[2]->c.c_car);
	base[4]= (V232);
	base[5]= (V233);
	vs_top=(vs_base=base+4)+2;
	Lgethash();
	vs_top=sup;
	V235= vs_base[0];
	V234= make_cons(V228,V235);
	base[4]= (V232);
	base[5]= (V233);
	base[6]= (V234);
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC31(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V236;
	object V237;
	V236=(base[0]);
	V237=(base[1]);
	vs_top=sup;
	V238= Ct;
	STSET(object,(V237),28, small_fixnum(1));
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC30(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V239;
	object V240;
	V239=(base[0]);
	V240=(base[1]);
	vs_top=sup;
	{register object x= (base0[2]->c.c_car),V241= STREF(object,(V240),16);
	while(V241!=Cnil)
	if(eql(x,V241->c.c_car)){
	goto T878;
	}else V241=V241->c.c_cdr;}
	{register object x= (base0[2]->c.c_car),V242= STREF(object,(V240),32);
	while(V242!=Cnil)
	if(eql(x,V242->c.c_car)){
	goto T882;
	}else V242=V242->c.c_cdr;
	goto T879;}
	goto T882;
T882:;
	goto T878;
T878:;
	if(((base0[0]->c.c_car))==Cnil){
	goto T884;}
	{object V243;
	object V244;
	V243= (base0[0]->c.c_car);
	(base0[0]->c.c_car)= make_cons((V239),Cnil);
	V244= (base0[0]->c.c_car);
	((V243))->c.c_cdr = (V244);
	base[3]= (V244);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T884;
T884:;
	(base0[0]->c.c_car)= make_cons((V239),Cnil);
	(base0[1]->c.c_car)= (base0[0]->c.c_car);
	base[2]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T879;
T879:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
static void LnkT116(){ call_or_link(VV[116],(void **)(void *)&Lnk116);} /* PACKAGE-SHADOWING-SYMBOLS */
static void LnkT115(){ call_or_link(VV[115],(void **)(void *)&Lnk115);} /* PACKAGE-SIZE */
static void LnkT114(){ call_or_link(VV[114],(void **)(void *)&Lnk114);} /* GET-PACKAGES */
static void LnkT110(){ call_or_link(VV[110],(void **)(void *)&Lnk110);} /* RESULT-TYPE-FROM-LOC */
static void LnkT109(){ call_or_link(VV[109],(void **)(void *)&Lnk109);} /* ADD-VALUE-TYPE */
static void LnkT107(){ call_or_link(VV[107],(void **)(void *)&Lnk107);} /* ADD-CALLEE */
static void LnkT106(){ call_or_link(VV[106],(void **)(void *)&Lnk106);} /* FP-INPUT-STREAM */
static void LnkT105(){ call_or_link(VV[105],(void **)(void *)&Lnk105);} /* MAKE-PROCLAIMS */
static void LnkT104(){ call_or_link(VV[104],(void **)(void *)&Lnk104);} /* OPEN */
static void LnkT103(){ call_or_link(VV[103],(void **)(void *)&Lnk103);} /* WRITE-SYS-PROCLAIMS */
static void LnkT102(){ call_or_link(VV[102],(void **)(void *)&Lnk102);} /* SETUP-SYS-PROCLAIMS */
static void LnkT101(){ call_or_link(VV[101],(void **)(void *)&Lnk101);} /* NO-MAKE-PROCLAIMS-HACK */
static void LnkT100(){ call_or_link(VV[100],(void **)(void *)&Lnk100);} /* LOAD */
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[99],(void **)(void *)&LnkLI99,first,ap);va_end(ap);return V1;} /* CONCATENATE */
static void LnkT97(){ call_or_link(VV[97],(void **)(void *)&Lnk97);} /* GET-VALUE-TYPE */
static void LnkT96(){ call_or_link(VV[96],(void **)(void *)&Lnk96);} /* GET-VALUE-TYPE1 */
static void LnkT95(){ call_or_link(VV[95],(void **)(void *)&Lnk95);} /* GET-VAR-TYPES */
static void LnkT94(){ call_or_link(VV[94],(void **)(void *)&Lnk94);} /* TYPE-OR */
static void LnkT90(){ call_or_link(VV[90],(void **)(void *)&Lnk90);} /* MAKE-FN */
static void LnkT89(){ call_or_link(VV[89],(void **)(void *)&Lnk89);} /* CURRENT-FN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

