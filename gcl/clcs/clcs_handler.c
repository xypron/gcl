
#include "cmpinclude.h"
#include "clcs_handler.h"
void init_clcs_handler(){do_init(VV);}
/*	macro definition for HANDLER-BIND	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[3]= V1;}
	base[4]= VV[66];
	base[5]= base[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk67)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1;}
	base[4]= VV[0];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk21)();
	vs_top=sup;
	goto T1;
T1:;
	{object V3;
	object V4= base[2];
	if(V4==Cnil){
	V2= Cnil;
	goto T7;}
	base[4]=V3=MMcons(Cnil,Cnil);
	goto T8;
T8:;
	(V3->c.c_car)= list(3,VV[3],list(2,VV[5],CMPcar((V4->c.c_car))),CMPcadr((V4->c.c_car)));
	if((V4=MMcdr(V4))==Cnil){
	V2= base[4];
	goto T7;}
	V3=MMcdr(V3)=MMcons(Cnil,Cnil);
	goto T8;}
	goto T7;
T7:;
	V6= list(2,VV[2],list(3,VV[3],make_cons(VV[4],V2),VV[2]));
	base[4]= listA(3,VV[1],make_cons(/* INLINE-ARGS */V6,Cnil),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for SIGNAL	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	bds_check;
	{object V7;
	object V8;
	V7=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V8=(base[1]);
	vs_top=sup;
	{register object V9;
	base[3]= (V7);
	base[4]= (V8);
	base[5]= VV[6];
	base[6]= VV[7];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk68)();
	vs_top=sup;
	V9= vs_base[0];
	bds_bind(VV[2],(VV[2]->s.s_dbind));
	base[3]= (V9);
	base[4]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk69)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T15;}
	base[3]= VV[9];
	base[4]= (V9);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	goto T15;
T15:;
	goto T24;
T24:;
	if(((VV[2]->s.s_dbind))!=Cnil){
	goto T26;}
	goto T22;
	goto T26;
T26:;
	{register object V10;
	{register object V11;
	V11= CMPcar((VV[2]->s.s_dbind));
	(VV[2]->s.s_dbind)= CMPcdr((VV[2]->s.s_dbind));
	V10= (V11);}
	{register object V12;
	register object V13;
	V12= (V10);
	V13= CMPcar((V12));
	goto T36;
T36:;
	if(!(((V12))==Cnil)){
	goto T37;}
	goto T25;
	goto T37;
T37:;
	base[4]= (V9);
	base[5]= CMPcar((V13));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk69)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T41;}
	(void)((
	V14 = CMPcdr((V13)),
	(type_of(V14) == t_sfun ?(*((V14)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V14)==t_vfun) ?
	(*((V14)->sfn.sfn_self)):
	(fcall.fun=(V14),fcalln))((V9))));
	goto T25;
	goto T41;
T41:;
	V12= CMPcdr((V12));
	V13= CMPcar((V12));
	goto T36;}}
	goto T25;
T25:;
	goto T24;
	goto T22;
T22:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for COERCE-TO-CONDITION	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{register object V15;
	register object V16;
	object V17;
	object V18;
	V15=(base[0]);
	V16=(base[1]);
	V17=(base[2]);
	V18=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V15);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk71)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T54;}
	if(((V16))==Cnil){
	goto T57;}
	base[4]= VV[10];
	base[5]= VV[11];
	base[6]= VV[12];
	base[7]= (V16);
	base[8]= VV[13];
	base[9]= VV[14];
	base[10]= VV[15];
	base[11]= VV[16];
	base[12]= VV[17];
	base[13]= list(2,(V15),(V18));
	vs_top=(vs_base=base+4)+10;
	(void) (*Lnk72)();
	vs_top=sup;
	goto T57;
T57:;
	base[4]= (V15);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T54;
T54:;
	if(type_of((V15))==t_symbol){
	goto T70;}
	base[4]= (V15);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk73)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T71;}
	goto T70;
T70:;
	base[4]=VV[74]->s.s_gfdef;
	base[5]= (V15);
	{object V19;
	V19= (V16);
	 vs_top=base+6;
	 while(V19!=Cnil)
	 {vs_push((V19)->c.c_car);V19=(V19)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk74)();
	return;
	goto T71;
T71:;
	if(!(type_of((V15))==t_string)){
	goto T79;}
	base[4]= (V17);
	base[5]= VV[15];
	base[6]= (V15);
	base[7]= VV[17];
	base[8]= (V16);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk74)();
	return;
	goto T79;
T79:;
	base[4]= VV[11];
	base[5]= VV[12];
	base[6]= (V15);
	base[7]= VV[13];
	base[8]= VV[18];
	base[9]= VV[15];
	base[10]= VV[19];
	base[11]= VV[17];
	base[12]= list(2,(V18),(V15));
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk21)();
	return;
	}
}
/*	function definition for ERROR	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V20;
	object V21;
	V20=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V21=(base[1]);
	vs_top=sup;
	{object V22;
	base[2]= (V20);
	base[3]= (V21);
	base[4]= VV[20];
	base[5]= VV[21];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk68)();
	vs_top=sup;
	V22= vs_base[0];
	base[2]= (V22);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk7)();
	vs_top=sup;
	base[2]= (V22);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk75)();
	return;}
	}
}
/*	function definition for CERROR	*/

static void L5()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM5; VC5
	vs_check;
	bds_check;
	{VOL object V23;
	base[0]=MMcons(base[0],Cnil);
	V23=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	base[2]=MMcons(base[2],base[0]);
	vs_top=sup;
	base[3]=MMcons(Cnil,base[2]);
	base[4]=alloc_frame_id();
	base[4]=MMcons(base[4],base[3]);
	frs_push(FRS_CATCH,(base[4]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[28]))goto T105;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[6]= VV[23];
	base[7]= VV[24];
	base[8]= VV[25];
	base[9]= 
	make_cclosure_new(LC11,Cnil,base[4],Cdata);
	base[10]= VV[26];
	base[11]= 
	make_cclosure_new(LC12,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk76)();
	vs_top=sup;
	V24= vs_base[0];
	V25= make_cons(V24,Cnil);
	base[5]= make_cons(/* INLINE-ARGS */V25,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[5]);
	base[6]= (V23);
	{object V26;
	V26= (base[2]->c.c_car);
	 vs_top=base+7;
	 while(V26!=Cnil)
	 {vs_push((V26)->c.c_car);V26=(V26)->c.c_cdr;}
	vs_base=base+6;}
	(void) (*Lnk21)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T103;
	goto T105;
T105:;
	{object V27;
	V27= (base[3]->c.c_car);
	base[5]= Cnil;
	base[6]= Ct;
	vs_top=(vs_base=base+5)+2;
	vs_top=sup;
	frs_pop();
	goto T103;}
	frs_pop();
	goto T103;
	goto T103;
T103:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for BREAK	*/

static void L6()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM6; VC6
	vs_check;
	bds_check;
	{VOL object V28;
	VOL object V29;
	vs_top[0]=Cnil;
	{object *p=vs_top, *q=vs_base+1;
	 for(;p>q;p--)p[-1]=MMcons(p[-1],p[0]);}
	if(vs_base>=vs_top){vs_top=sup;goto T119;}
	V28=(base[0]);
	V29=(base[1]);
	vs_top=sup;
	goto T120;
	goto T119;
T119:;
	V28= VV[29];
	V29= Cnil;
	goto T120;
T120:;
	base[2]=MMcons(Cnil,Cnil);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[31]))goto T124;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[23];
	base[6]= VV[24];
	base[7]= VV[25];
	base[8]= 
	make_cclosure_new(LC13,Cnil,base[3],Cdata);
	base[9]= VV[26];
	base[10]= 
	make_cclosure_new(LC14,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk76)();
	vs_top=sup;
	V30= vs_base[0];
	V31= make_cons(V30,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V31,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[4]);
	base[6]= VV[6];
	base[7]= VV[15];
	base[8]= (V28);
	base[9]= VV[17];
	base[10]= (V29);
	vs_top=(vs_base=base+6)+5;
	(void) (*Lnk74)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk75)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T122;
	goto T124;
T124:;
	{object V32;
	V32= (base[2]->c.c_car);
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T122;}
	frs_pop();
	goto T122;
	goto T122;
T122:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for WARN	*/

static void L7()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM7; VC7
	vs_check;
	bds_check;
	{VOL object V33;
	VOL object V34;
	V33=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V34=(base[1]);
	vs_top=sup;
	{VOL object V35;
	base[2]= (V33);
	base[3]= (V34);
	base[4]= VV[32];
	base[5]= VV[33];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk68)();
	vs_top=sup;
	V35= vs_base[0];
	goto T149;
T149:;
	base[2]= (V35);
	base[3]= VV[34];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk69)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T150;}
	goto T147;
	goto T150;
T150:;
	base[2]=MMcons(Cnil,Cnil);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[41]))goto T157;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[23];
	base[6]= VV[35];
	base[7]= VV[25];
	base[8]= 
	make_cclosure_new(LC15,Cnil,base[3],Cdata);
	base[9]= VV[26];
	base[10]= 
	make_cclosure_new(LC16,Cnil,base[3],Cdata);
	base[11]= VV[38];
	base[12]= (VV[77]->s.s_gfdef);
	vs_top=(vs_base=base+5)+8;
	(void) (*Lnk76)();
	vs_top=sup;
	V36= vs_base[0];
	V37= make_cons(V36,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V37,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[4]);
	base[5]= VV[39];
	base[6]= VV[37];
	base[7]= (V35);
	base[8]= VV[40];
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk21)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T155;
	goto T157;
T157:;
	{register object V38;
	V38= (base[2]->c.c_car);
	base[4]=((V38))->c.c_car;
	V35= base[4];
	frs_pop();
	goto T149;}
	frs_pop();
	goto T155;
	goto T155;
T155:;
	goto T147;
	goto T147;
T147:;
	if(((VV[42]->s.s_dbind))==Cnil){
	goto T175;}
	base[2]= VV[43];
	base[3]= (V35);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	goto T175;
T175:;
	base[2]=MMcons(Cnil,Cnil);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[46]))goto T182;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[23];
	base[6]= VV[44];
	base[7]= VV[25];
	base[8]= 
	make_cclosure_new(LC17,Cnil,base[3],Cdata);
	base[9]= VV[26];
	base[10]= 
	make_cclosure_new(LC18,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk76)();
	vs_top=sup;
	V39= vs_base[0];
	V40= make_cons(V39,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V40,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[4]);
	base[5]= (V35);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk7)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T180;
	goto T182;
T182:;
	{object V41;
	V41= (base[2]->c.c_car);
	frs_pop();
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	frs_pop();
	goto T180;
	goto T180;
T180:;
	base[2]= (VV[47]->s.s_dbind);
	base[3]= VV[48];
	base[4]= (V35);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	macro definition for HANDLER-CASE	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	{object V42=base[0]->c.c_cdr;
	base[2]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	base[3]= V42;}
	{object V43;
	{register object x= VV[49],V44= base[3];
	while(V44!=Cnil)
	if(eql(x,V44->c.c_car->c.c_car) &&V44->c.c_car != Cnil){
	V43= (V44->c.c_car);
	goto T197;
	}else V44=V44->c.c_cdr;
	V43= Cnil;}
	goto T197;
T197:;
	if(((V43))==Cnil){
	goto T199;}
	{object V45;
	object V46;
	base[4]= VV[50];
	vs_top=(vs_base=base+4)+1;
	Lmake_symbol();
	vs_top=sup;
	V45= vs_base[0];
	base[4]= VV[51];
	vs_top=(vs_base=base+4)+1;
	Lmake_symbol();
	vs_top=sup;
	V46= vs_base[0];
	V47= list(2,VV[54],make_cons(VV[55],CMPcdr((V43))));
	V48= list(3,VV[56],(V45),base[2]);
	base[4]= (V43);
	base[5]= base[3];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk78)();
	vs_top=sup;
	V49= vs_base[0];
	base[4]= list(3,VV[52],(V46),list(3,VV[53],/* INLINE-ARGS */V47,list(3,VV[52],(V45),list(3,VV[56],(V46),listA(3,VV[57],/* INLINE-ARGS */V48,V49)))));
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T199;
T199:;
	{object V50;
	register object V51;
	object V52;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V50= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V51= vs_base[0];
	{object V53;
	object V54= base[3];
	if(V54==Cnil){
	V52= Cnil;
	goto T210;}
	base[4]=V53=MMcons(Cnil,Cnil);
	goto T211;
T211:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V56= vs_base[0];
	(V53->c.c_car)= make_cons(V56,(V54->c.c_car));
	if((V54=MMcdr(V54))==Cnil){
	V52= base[4];
	goto T210;}
	V53=MMcdr(V53)=MMcons(Cnil,Cnil);
	goto T211;}
	goto T210;
T210:;
	V57= list(2,(V51),Cnil);
	V58= make_cons(/* INLINE-ARGS */V57,Cnil);
	{object V60;
	object V61= (V52);
	if(V61==Cnil){
	V59= Cnil;
	goto T214;}
	base[4]=V60=MMcons(Cnil,Cnil);
	goto T215;
T215:;
	V63= CMPcadr((V61->c.c_car));
	if((CMPcaddr((V61->c.c_car)))==Cnil){
	goto T219;}
	V65= list(3,VV[61],(V51),VV[62]);
	V64= make_cons(/* INLINE-ARGS */V65,Cnil);
	goto T217;
	goto T219;
T219:;
	V64= Cnil;
	goto T217;
T217:;
	V66= list(2,VV[63],CMPcar((V61->c.c_car)));
	V67= make_cons(/* INLINE-ARGS */V66,Cnil);
	(V60->c.c_car)= list(2,/* INLINE-ARGS */V63,list(2,VV[54],listA(3,VV[55],VV[60],append(V64,/* INLINE-ARGS */V67))));
	if((V61=MMcdr(V61))==Cnil){
	V59= base[4];
	goto T214;}
	V60=MMcdr(V60)=MMcons(Cnil,Cnil);
	goto T215;}
	goto T214;
T214:;
	V68= list(3,VV[59],V59,list(3,VV[56],(V50),base[2]));
	{object V70;
	object V71= (V52);
	if(V71==Cnil){
	V69= Cnil;
	goto T221;}
	base[4]=V70=MMcons(Cnil,Cnil);
	goto T222;
T222:;
	{register object V72;
	V72= (V71->c.c_car);
	V73= CMPcar((V72));
	{register object V75;
	V75= CMPcdddr((V72));
	if((CMPcaddr((V72)))==Cnil){
	goto T228;}
	V77= list(2,CMPcaaddr((V72)),(V51));
	V76= listA(3,VV[1],make_cons(/* INLINE-ARGS */V77,Cnil),(V75));
	goto T226;
	goto T228;
T228:;
	if((CMPcdr((V75)))!=Cnil){
	goto T231;}
	V76= CMPcar((V75));
	goto T226;
	goto T231;
T231:;
	V76= make_cons(VV[64],(V75));
	goto T226;
T226:;
	V74= list(3,VV[56],(V50),V76);}
	(V70->c.c_cdr)= list(2,/* INLINE-ARGS */V73,V74);}
	while(MMcdr(V70)!=Cnil)V70=MMcdr(V70);
	if((V71=MMcdr(V71))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V69= base[4];
	goto T221;}
	goto T222;}
	goto T221;
T221:;
	base[4]= list(3,VV[52],(V50),list(4,VV[1],/* INLINE-ARGS */V58,(V51),listA(3,VV[58],/* INLINE-ARGS */V68,V69)));
	vs_top=(vs_base=base+4)+1;
	return;}}
}
/*	macro definition for IGNORE-ERRORS	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	vs_top=sup;
	{object V78=base[0]->c.c_cdr;
	base[2]= V78;}
	base[3]= list(3,VV[57],make_cons(VV[64],base[2]),VV[65]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V79;
	V79=(base[0]);
	vs_top=sup;
	base[1]= VV[45];
	base[2]= (V79);
	vs_top=(vs_base=base+1)+2;
	Lwrite_string();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM11; VC11
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
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[46]);
	vs_base=vs_top;
	unwind(fr,VV[46]);}
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{register object V81;
	V81=(base[0]);
	vs_top=sup;
	base[1]= (V81);
	base[2]= VV[36];
	base[3]= VV[37];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC15(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{register object V82;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V82=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V82);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[41]);
	vs_base=vs_top;
	unwind(fr,VV[41]);}
	}
}
/*	local function CLOSURE	*/

static void LC14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V83;
	V83=(base[0]);
	vs_top=sup;
	base[1]= (V83);
	base[2]= VV[30];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC13(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V84;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V84=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V84);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[31]);
	vs_base=vs_top;
	unwind(fr,VV[31]);}
	}
}
/*	local function CLOSURE	*/

static void LC12(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V85;
	V85=(base[0]);
	vs_top=sup;
	base[1]= (V85);
	base[2]= VV[27];
	base[4]= Cnil;
	base[5]= (base0[3]->c.c_car);
	{object V86;
	V86= (base0[2]->c.c_car);
	 vs_top=base+6;
	 while(V86!=Cnil)
	 {vs_push((V86)->c.c_car);V86=(V86)->c.c_cdr;}
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

static void LC11(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V87;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V87=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V87);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[28]);
	vs_base=vs_top;
	unwind(fr,VV[28]);}
	}
}
/*	local function CLOSURE	*/

static void LC10(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V88;
	V88=(base[0]);
	vs_top=sup;
	if(type_of((V88))==t_cons||((V88))==Cnil){
	goto T254;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T254;
T254:;
	base[1]= (((long)length((V88)))==(2)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT78(){ call_or_link(VV[78],(void **)(void *)&Lnk78);} /* REMOVE */
static void LnkT76(){ call_or_link(VV[76],(void **)(void *)&Lnk76);} /* MAKE-RESTART */
static void LnkT75(){ call_or_link(VV[75],(void **)(void *)&Lnk75);} /* INVOKE-DEBUGGER */
static void LnkT7(){ call_or_link(VV[7],(void **)(void *)&Lnk7);} /* SIGNAL */
static void LnkT74(){ call_or_link(VV[74],(void **)(void *)&Lnk74);} /* MAKE-CONDITION */
static void LnkT73(){ call_or_link(VV[73],(void **)(void *)&Lnk73);} /* CONDITION-CLASS-P */
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* CERROR */
static void LnkT71(){ call_or_link(VV[71],(void **)(void *)&Lnk71);} /* CONDITIONP */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* BREAK */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* TYPEP */
static void LnkT68(){ call_or_link(VV[68],(void **)(void *)&Lnk68);} /* COERCE-TO-CONDITION */
static void LnkT21(){ call_or_link(VV[21],(void **)(void *)&Lnk21);} /* ERROR */
static void LnkT67(){ call_or_link(VV[67],(void **)(void *)&Lnk67);} /* EVERY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

