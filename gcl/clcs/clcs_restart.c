
#include "cmpinclude.h"
#include "clcs_restart.h"
void init_clcs_restart(){do_init(VV);}
/*	function definition for UNIQUE-ID	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	V1=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V2;
	base[1]= (V1);
	base[2]= (VV[0]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V2= vs_base[0];
	if(V2==Cnil)goto T1;
	base[1]= V2;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1;
T1:;}
	{object V4;
	object V5;
	V4= (VV[0]->s.s_dbind);
	(VV[1]->s.s_dbind)= number_plus((VV[1]->s.s_dbind),small_fixnum(1));
	V5= (VV[1]->s.s_dbind);
	base[2]= V1;
	base[3]= (V4);
	base[4]= (V5);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	return;}
	}
}
/*	function definition for PARSE-KEYWORD-PAIRS	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V6;
	register object V7;
	V6=(base[0]);
	V7=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V8;
	register object V9;
	V8= (V6);
	V9= Cnil;
	goto T12;
T12:;
	if(((V8))==Cnil){
	goto T14;}
	{register object x= CMPcar((V8)),V10= (V7);
	while(V10!=Cnil)
	if(eql(x,V10->c.c_car)){
	goto T13;
	}else V10=V10->c.c_cdr;}
	goto T14;
T14:;
	base[2]= nreverse((V9));
	base[3]= (V8);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T13;
T13:;
	{object V11;
	V11= CMPcddr((V8));
	V9= listA(3,CMPcadr((V8)),CMPcar((V8)),(V9));
	V8= (V11);}
	goto T12;}
	}
}
/*	macro definition for WITH-KEYWORD-PAIRS	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	vs_top=sup;
	{object V12=base[0]->c.c_cdr;
	{object V13= (V12->c.c_car);
	base[2]= (V13->c.c_car);
	V13=V13->c.c_cdr;
	base[3]= (V13->c.c_car);
	V13=V13->c.c_cdr;
	if(endp(V13)){
	base[4]= Cnil;
	} else {
	base[4]= (V13->c.c_car);}}
	V12=V12->c.c_cdr;
	base[5]= V12;}
	{register object V14;
	{register object x= VV[2],V15= base[2];
	while(V15!=Cnil)
	if(eql(x,V15->c.c_car)){
	V14= V15;
	goto T26;
	}else V15=V15->c.c_cdr;
	V14= Cnil;}
	goto T26;
T26:;
	if(((long)length((V14)))==(2)){
	goto T27;}
	base[6]= VV[3];
	base[7]= (V14);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk63)();
	vs_top=sup;
	goto T27;
T27:;
	{object V16;
	object V17;
	object V18;
	base[6]= base[2];
	base[7]= (V14);
	vs_top=(vs_base=base+6)+2;
	Lldiff();
	vs_top=sup;
	V16= vs_base[0];
	if(base[4]!=Cnil){
	V17= base[4];
	goto T35;}
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V17= vs_base[0];
	goto T35;
T35:;
	V18= CMPcadr((V14));
	{object V19;
	{object V20;
	object V21= (V16);
	if(V21==Cnil){
	V19= Cnil;
	goto T37;}
	base[6]=V20=MMcons(Cnil,Cnil);
	goto T38;
T38:;
	base[7]= coerce_to_string((V21->c.c_car));
	base[9]= VV[4];
	vs_top=(vs_base=base+9)+1;
	Lfind_package();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+7)+2;
	Lintern();
	vs_top=sup;
	(V20->c.c_car)= vs_base[0];
	if((V21=MMcdr(V21))==Cnil){
	V19= base[6];
	goto T37;}
	V20=MMcdr(V20)=MMcons(Cnil,Cnil);
	goto T38;}
	goto T37;
T37:;
	V23= list(2,(V17),(V18));
	V24= list(3,VV[6],base[3],list(2,VV[7],(V19)));
	{object V26;
	object V27= (V16);
	object V28= (V19);
	if(V27==Cnil||V28==Cnil){
	V25= Cnil;
	goto T43;}
	base[6]=V26=MMcons(Cnil,Cnil);
	goto T44;
T44:;
	(V26->c.c_car)= list(2,(V27->c.c_car),list(3,VV[9],(V17),(V28->c.c_car)));
	if((V27=MMcdr(V27))==Cnil||(V28=MMcdr(V28))==Cnil){
	V25= base[6];
	goto T43;}
	V26=MMcdr(V26)=MMcons(Cnil,Cnil);
	goto T44;}
	goto T43;
T43:;
	base[6]= list(4,VV[5],/* INLINE-ARGS */V23,/* INLINE-ARGS */V24,listA(3,VV[8],V25,base[5]));
	vs_top=(vs_base=base+6)+1;
	return;}}}
}
/*	function definition for COMPUTE-RESTARTS	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V31;
	if(vs_base>=vs_top){vs_top=sup;goto T46;}
	V31=(base[0]);
	vs_top=sup;
	goto T47;
	goto T46;
T46:;
	V31= Cnil;
	goto T47;
T47:;
	base[2]= (VV[10]->s.s_dbind);
	{object V33;
	object V34= base[2];
	if(V34==Cnil){
	V32= Cnil;
	goto T49;}
	base[1]=V33=MMcons(Cnil,Cnil);
	goto T50;
T50:;
	base[3]= (V34->c.c_car);
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	(V33->c.c_cdr)= vs_base[0];
	while(MMcdr(V33)!=Cnil)V33=MMcdr(V33);
	if((V34=MMcdr(V34))==Cnil){
	base[1]=base[1]->c.c_cdr;
	V32= base[1];
	goto T49;}
	goto T50;}
	goto T49;
T49:;
	vs_base=vs_top;
	(void) (*Lnk64)();
	vs_top=sup;
	V35= vs_base[0];
	base[1]= nconc(V32,V35);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for RESTART-PRINT	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V36;
	object V37;
	object V38;
	V36=(base[0]);
	V37=(base[1]);
	V38=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[11]->s.s_dbind))==Cnil){
	goto T55;}
	base[3]= (V37);
	base[4]= VV[12];
	base[6]= (V36);
	vs_top=(vs_base=base+6)+1;
	Ltype_of();
	vs_top=sup;
	base[5]= vs_base[0];
	base[7]= (V36);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk65)();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+3)+4;
	Lformat();
	return;
	goto T55;
T55:;
	base[3]= (V36);
	base[4]= (V37);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk66)();
	return;
	}
}
/*	function definition for MAKE-RESTART	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V39;
	object V40;
	object V41;
	object V42;
	parse_key(vs_base,FALSE,FALSE,4,VV[14],VV[16],VV[17],VV[27]);
	vs_top=sup;
	V39=(base[0]);
	V40=(base[1]);
	V41=(base[2]);
	V42=(base[3]);
	base[8]= VV[13];
	base[9]= (V39);
	base[10]= (V40);
	base[11]= (V41);
	base[12]= (V42);
	vs_top=(vs_base=base+8)+5;
	siLmake_structure();
	return;
	}
}
/*	function definition for MAKE-KCL-TOP-RESTART	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	base[1]= VV[14];
	base[2]= VV[15];
	base[3]= VV[16];
	base[4]= 
	make_cclosure_new(LC23,Cnil,base[0],Cdata);
	base[5]= VV[17];
	base[6]= 
	make_cclosure_new(LC24,Cnil,base[0],Cdata);
	base[7]= VV[27];
	base[8]= Cnil;
	vs_top=(vs_base=base+1)+8;
	(void) (*Lnk33)();
	return;
}
/*	function definition for FIND-KCL-TOP-RESTART	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V43;
	V43=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V45;
	{register object x= (V43),V46= (VV[28]->s.s_dbind);
	while(V46!=Cnil)
	if(eql(x,V46->c.c_car->c.c_car) &&V46->c.c_car != Cnil){
	V45= (V46->c.c_car);
	goto T80;
	}else V46=V46->c.c_cdr;
	V45= Cnil;}
	goto T80;
T80:;
	if(V45==Cnil)goto T79;
	V44= V45;
	goto T78;
	goto T79;
T79:;}
	{object V48;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk67)();
	vs_top=sup;
	V49= vs_base[0];
	V48= make_cons((V43),V49);
	(VV[28]->s.s_dbind)= make_cons((V48),(VV[28]->s.s_dbind));
	V47= (VV[28]->s.s_dbind);}
	V44= CMPcar(V47);
	goto T78;
T78:;
	base[1]= CMPcdr(V44);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for KCL-TOP-RESTARTS	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V50;
	object V51;
	object V52;
	base[4]= (VV[20]->s.s_dbind);
	{object V53;
	object V54= base[4];
	if(V54==Cnil){
	V50= Cnil;
	goto T86;}
	base[3]=V53=MMcons(Cnil,Cnil);
	goto T87;
T87:;
	if((CMPcdr((V54->c.c_car)))==Cnil){
	goto T90;}
	(V53->c.c_cdr)= make_cons(CMPcdr((V54->c.c_car)),Cnil);
	goto T88;
	goto T90;
T90:;
	(V53->c.c_cdr)= Cnil;
	goto T88;
T88:;
	while(MMcdr(V53)!=Cnil)V53=MMcdr(V53);
	if((V54=MMcdr(V54))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V50= base[3];
	goto T86;}
	goto T87;}
	goto T86;
T86:;
	if(((VV[18]->s.s_dbind))==Cnil){
	goto T94;}
	V51= make_cons((VV[18]->s.s_dbind),(V50));
	goto T92;
	goto T94;
T94:;
	V51= (V50);
	goto T92;
T92:;
	{object V56;
	object V57= (V51);
	if(V57==Cnil){
	V52= Cnil;
	goto T96;}
	base[3]=V56=MMcons(Cnil,Cnil);
	goto T97;
T97:;
	base[4]= (V57->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	(V56->c.c_car)= vs_base[0];
	if((V57=MMcdr(V57))==Cnil){
	V52= base[3];
	goto T96;}
	V56=MMcdr(V56)=MMcons(Cnil,Cnil);
	goto T97;}
	goto T96;
T96:;
	{object V58;
	object V59= (V51);
	object V60= (V52);
	if(V59==Cnil||V60==Cnil){
	(VV[28]->s.s_dbind)= Cnil;
	goto T101;}
	base[3]=V58=MMcons(Cnil,Cnil);
	goto T102;
T102:;
	(V58->c.c_car)= make_cons((V59->c.c_car),(V60->c.c_car));
	if((V59=MMcdr(V59))==Cnil||(V60=MMcdr(V60))==Cnil){
	(VV[28]->s.s_dbind)= base[3];
	goto T101;}
	V58=MMcdr(V58)=MMcons(Cnil,Cnil);
	goto T102;}
	goto T101;
T101:;
	base[3]= (V52);
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	function definition for RESTART-REPORT	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V61;
	base[0]=MMcons(base[0],Cnil);
	V61=(base[1]);
	vs_top=sup;
	{object V62;
	V62= STREF(object,(base[0]->c.c_car),8);
	if(((V62))==Cnil){
	goto T107;}
	base[2]= (V62);
	goto T104;
	goto T107;
T107:;
	base[3]= STREF(object,(base[0]->c.c_car),0);
	base[3]=MMcons(base[3],base[0]);
	base[2]= 
	make_cclosure_new(LC25,Cnil,base[3],Cdata);}
	goto T104;
T104:;
	base[3]= (V61);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	macro definition for RESTART-BIND	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	vs_top=sup;
	{object V63=base[0]->c.c_cdr;
	base[2]= (V63->c.c_car);
	V63=V63->c.c_cdr;
	base[3]= V63;}
	{object V65;
	object V66= base[2];
	if(V66==Cnil){
	V64= Cnil;
	goto T111;}
	base[4]=V65=MMcons(Cnil,Cnil);
	goto T112;
T112:;
	(V65->c.c_car)= listA(6,VV[33],VV[14],list(2,VV[7],CMPcar((V66->c.c_car))),VV[16],CMPcadr((V66->c.c_car)),CMPcddr((V66->c.c_car)));
	if((V66=MMcdr(V66))==Cnil){
	V64= base[4];
	goto T111;}
	V65=MMcdr(V65)=MMcons(Cnil,Cnil);
	goto T112;}
	goto T111;
T111:;
	V68= list(2,VV[10],list(3,VV[31],make_cons(VV[32],V64),VV[10]));
	base[4]= listA(3,VV[8],make_cons(/* INLINE-ARGS */V68,Cnil),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for FIND-RESTART	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{register object V69;
	object V70;
	V69=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T114;}
	V70=(base[1]);
	vs_top=sup;
	goto T115;
	goto T114;
T114:;
	V70= Cnil;
	goto T115;
T115:;
	{register object V71;
	object V72;
	V71= (VV[10]->s.s_dbind);
	V72= CMPcar((V71));
	goto T121;
T121:;
	if(!(((V71))==Cnil)){
	goto T122;}
	goto T117;
	goto T122;
T122:;
	{register object V73;
	register object V74;
	V73= (V72);
	V74= CMPcar((V73));
	goto T130;
T130:;
	if(!(((V73))==Cnil)){
	goto T131;}
	goto T126;
	goto T131;
T131:;
	if(((V74))==((V69))){
	goto T136;}
	if(!((STREF(object,(V74),0))==((V69)))){
	goto T135;}
	goto T136;
T136:;
	base[4]= (V74);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T135;
T135:;
	V73= CMPcdr((V73));
	V74= CMPcar((V73));
	goto T130;}
	goto T126;
T126:;
	V71= CMPcdr((V71));
	V72= CMPcar((V71));
	goto T121;}
	goto T117;
T117:;
	{object V75;
	vs_base=vs_top;
	(void) (*Lnk64)();
	vs_top=sup;
	V75= vs_base[0];
	{register object V76;
	register object V77;
	V76= (V75);
	V77= CMPcar((V76));
	goto T154;
T154:;
	if(!(((V76))==Cnil)){
	goto T155;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T155;
T155:;
	if(((V77))==((V69))){
	goto T160;}
	if(!((STREF(object,(V77),0))==((V69)))){
	goto T159;}
	goto T160;
T160:;
	base[3]= (V77);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T159;
T159:;
	V76= CMPcdr((V76));
	V77= CMPcar((V76));
	goto T154;}}
	}
}
/*	function definition for INVOKE-RESTART	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V78;
	object V79;
	V78=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V79=(base[1]);
	vs_top=sup;
	{object V80;{object V81;
	base[2]= (V78);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	V81= vs_base[0];
	if(V81==Cnil)goto T170;
	V80= V81;
	goto T169;
	goto T170;
T170:;}
	base[2]= VV[34];
	base[3]= (V78);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk63)();
	vs_top=sup;
	V80= vs_base[0];
	goto T169;
T169:;
	base[2]= STREF(object,(V80),4);
	{object V82;
	V82= (V79);
	 vs_top=base+3;
	 while(V82!=Cnil)
	 {vs_push((V82)->c.c_car);V82=(V82)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	function definition for INVOKE-RESTART-INTERACTIVELY	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V83;
	V83=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V84;{object V85;
	base[1]= (V83);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	V85= vs_base[0];
	if(V85==Cnil)goto T178;
	V84= V85;
	goto T177;
	goto T178;
T178:;}
	base[1]= VV[35];
	base[2]= (V83);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk63)();
	vs_top=sup;
	V84= vs_base[0];
	goto T177;
T177:;
	base[1]= STREF(object,(V84),4);
	{object V86;
	{object V87;
	V87= STREF(object,(V84),12);
	if(((V87))==Cnil){
	goto T187;}
	vs_base=vs_top;
	{object _funobj = (V87);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V86= vs_base[0];
	goto T184;
	goto T187;
T187:;
	V86= Cnil;}
	goto T184;
T184:;
	 vs_top=base+2;
	 while(V86!=Cnil)
	 {vs_push((V86)->c.c_car);V86=(V86)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	macro definition for RESTART-CASE	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	vs_top=sup;
	{object V88=base[0]->c.c_cdr;
	base[2]= (V88->c.c_car);
	V88=V88->c.c_cdr;
	base[3]= V88;}
	{object V89;
	object V90;
	object V91;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V89= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V90= vs_base[0];
	{object V92;
	object V93= base[3];
	if(V93==Cnil){
	V91= Cnil;
	goto T191;}
	base[4]=V92=MMcons(Cnil,Cnil);
	goto T192;
T192:;
	{object V95;
	object V96;
	base[5]= CMPcddr((V93->c.c_car));
	base[6]= VV[36];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk6)();
	if(vs_base>=vs_top){vs_top=sup;goto T197;}
	V95= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T198;}
	V96= vs_base[0];
	vs_top=sup;
	goto T199;
	goto T197;
T197:;
	V95= Cnil;
	goto T198;
T198:;
	V96= Cnil;
	goto T199;
T199:;
	{object V97;
	object V98;
	base[5]= (V95);
	base[6]= VV[37];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V97= vs_base[0];
	base[5]= (V95);
	base[6]= VV[38];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V98= vs_base[0];
	V99= CMPcar((V93->c.c_car));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V100= vs_base[0];
	base[5]= VV[37];
	base[6]= (V97);
	base[7]= VV[38];
	base[8]= (V98);
	vs_top=(vs_base=base+5)+4;
	L16(base);
	vs_top=sup;
	V101= vs_base[0];
	(V92->c.c_car)= list(5,/* INLINE-ARGS */V99,V100,V101,CMPcadr((V93->c.c_car)),(V96));}}
	if((V93=MMcdr(V93))==Cnil){
	V91= base[4];
	goto T191;}
	V92=MMcdr(V92)=MMcons(Cnil,Cnil);
	goto T192;}
	goto T191;
T191:;
	V102= list(2,(V90),Cnil);
	V103= make_cons(/* INLINE-ARGS */V102,Cnil);
	{object V105;
	object V106= (V91);
	if(V106==Cnil){
	V104= Cnil;
	goto T212;}
	base[4]=V105=MMcons(Cnil,Cnil);
	goto T213;
T213:;
	{object V108;
	object V109;
	object V110;
	V108= CMPcar((V106->c.c_car));
	V109= CMPcadr((V106->c.c_car));
	V110= CMPcaddr((V106->c.c_car));
	V111= list(3,VV[45],(V90),VV[46]);
	(V105->c.c_car)= listA(3,(V108),list(2,VV[42],list(4,VV[43],VV[44],/* INLINE-ARGS */V111,list(2,VV[47],(V109)))),(V110));}
	if((V106=MMcdr(V106))==Cnil){
	V104= base[4];
	goto T212;}
	V105=MMcdr(V105)=MMcons(Cnil,Cnil);
	goto T213;}
	goto T212;
T212:;
	V112= list(3,VV[41],V104,list(3,VV[48],(V89),base[2]));
	{object V114;
	object V115= (V91);
	if(V115==Cnil){
	V113= Cnil;
	goto T218;}
	base[4]=V114=MMcons(Cnil,Cnil);
	goto T219;
T219:;
	{object V117;
	object V118;
	object V119;
	V117= CMPcadr((V115->c.c_car));
	V118= CMPcadddr((V115->c.c_car));
	V119= CMPcar(CMPcddddr((V115->c.c_car)));
	(V114->c.c_cdr)= list(2,(V117),list(3,VV[48],(V89),list(3,VV[49],list(2,VV[42],listA(3,VV[43],(V118),(V119))),(V90))));}
	while(MMcdr(V114)!=Cnil)V114=MMcdr(V114);
	if((V115=MMcdr(V115))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V113= base[4];
	goto T218;}
	goto T219;}
	goto T218;
T218:;
	base[4]= list(3,VV[39],(V89),list(3,VV[8],/* INLINE-ARGS */V103,listA(3,VV[40],/* INLINE-ARGS */V112,V113)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for WITH-SIMPLE-RESTART	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	vs_top=sup;
	{object V120=base[0]->c.c_cdr;
	{object V121= (V120->c.c_car);
	base[2]= (V121->c.c_car);
	V121=V121->c.c_cdr;
	base[3]= (V121->c.c_car);
	V121=V121->c.c_cdr;
	base[4]= V121;}
	V120=V120->c.c_cdr;
	base[5]= V120;}
	V122= make_cons(VV[54],base[5]);
	base[6]= list(3,VV[53],/* INLINE-ARGS */V122,list(5,base[2],Cnil,VV[37],list(3,VV[43],VV[55],listA(4,VV[56],VV[52],base[3],base[4])),VV[57]));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	function definition for ABORT	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[15];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk70)();
	vs_top=sup;
	base[0]= VV[58];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk63)();
	return;
}
/*	function definition for CONTINUE	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[59];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk70)();
	return;
}
/*	function definition for MUFFLE-WARNING	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[60];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk70)();
	return;
}
/*	function definition for STORE-VALUE	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V123;
	V123=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[61];
	base[2]= (V123);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	return;
	}
}
/*	function definition for USE-VALUE	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V124;
	V124=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[62];
	base[2]= (V124);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	return;
	}
}
/*	local function TRANSFORM-KEYWORDS	*/

static void L16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{register object V125;
	object V126;
	parse_key(vs_base,FALSE,FALSE,2,VV[37],VV[38]);
	vs_top=sup;
	V125=(base[0]);
	V126=(base[1]);
	{register object V127;
	V127= Cnil;
	if(((V125))==Cnil){
	goto T233;}
	if(!(type_of((V125))==t_string)){
	goto T239;}
	V128= list(2,VV[42],list(3,VV[43],VV[50],list(3,VV[51],(V125),VV[52])));
	goto T237;
	goto T239;
T239:;
	V128= list(2,VV[42],(V125));
	goto T237;
T237:;
	V127= listA(3,V128,VV[17],(V127));
	goto T233;
T233:;
	if(((V126))==Cnil){
	goto T241;}
	V127= listA(3,list(2,VV[42],(V126)),VV[27],(V127));
	goto T241;
T241:;
	base[4]= nreverse((V127));
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V129;
	V129=(base[0]);
	vs_top=sup;
	if(((base0[0]->c.c_car))==Cnil){
	goto T246;}
	base[1]= (V129);
	base[2]= VV[29];
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T246;
T246:;
	base[1]= (V129);
	base[2]= VV[30];
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V130;
	V130=(base[0]);
	vs_top=sup;
	{object V131;
	if(!(((base0[0]->c.c_car))==((VV[18]->s.s_dbind)))){
	goto T256;}
	V131= (VV[19]->s.s_dbind);
	goto T254;
	goto T256;
T256:;{object V133;
	base[1]= (base0[0]->c.c_car);
	base[2]= (VV[20]->s.s_dbind);
	base[3]= VV[21];
	base[4]= (VV[71]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk72)();
	vs_top=sup;
	V133= vs_base[0];
	if(V133==Cnil)goto T259;
	V132= V133;
	goto T258;
	goto T259;
T259:;}
	V132= VV[22];
	goto T258;
T258:;
	V131= CMPcar(V132);
	goto T254;
T254:;
	if(!(((V131))==(VV[23]))){
	goto T266;}
	base[1]= (V130);
	base[2]= VV[24];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T266;
T266:;
	if(((V131))!=Cnil){
	goto T271;}
	base[1]= (V130);
	base[2]= VV[25];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T271;
T271:;
	base[1]= (V130);
	base[2]= VV[26];
	base[3]= CMPmake_fixnum((long)length((V131)));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	vs_top=sup;
	{frame_ptr fr;
	V134= make_cons((base0[0]->c.c_car),Cnil);
	base[0]= CMPcar(/* INLINE-ARGS */V134);
	fr=frs_sch_catch(base[0]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,base[0]);
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,base[0]);}
}
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* FIND */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* INVOKE-RESTART */
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* PARSE-KEYWORD-PAIRS */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* FIND-RESTART */
static void LnkT68(){ call_or_link(VV[68],(void **)(void *)&Lnk68);} /* FIND-KCL-TOP-RESTART */
static void LnkT67(){ call_or_link(VV[67],(void **)(void *)&Lnk67);} /* MAKE-KCL-TOP-RESTART */
static void LnkT33(){ call_or_link(VV[33],(void **)(void *)&Lnk33);} /* MAKE-RESTART */
static void LnkT66(){ call_or_link(VV[66],(void **)(void *)&Lnk66);} /* RESTART-REPORT */
static void LnkT65(){ call_or_link(VV[65],(void **)(void *)&Lnk65);} /* UNIQUE-ID */
static void LnkT64(){ call_or_link(VV[64],(void **)(void *)&Lnk64);} /* KCL-TOP-RESTARTS */
static void LnkT63(){ call_or_link(VV[63],(void **)(void *)&Lnk63);} /* ERROR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

