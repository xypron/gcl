
#include "cmpinclude.h"
#include "gcl_cmplam.h"
void init_gcl_cmplam(){do_init(VV);}
/*	macro definition for CK-SPEC	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= (V1->c.c_car);}
	base[3]= list(3,VV[0],base[2],VV[1]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for CK-VL	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	vs_top=sup;
	{object V2=base[0]->c.c_cdr;
	base[2]= (V2->c.c_car);}
	base[3]= list(3,VV[0],base[2],VV[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DOWNWARD-FUNCTION	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	vs_top=sup;
	{object V3=base[0]->c.c_cdr;
	base[2]= (V3->c.c_car);}
	base[3]= list(2,VV[3],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function C1DOWNWARD-FUNCTION	*/

static object LI4(V5)

register object V5;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{register object V6;
	object V7;
	V8= list(2,VV[3],CMPcar((V5)));
	V6= (*(LnkLI89))(/* INLINE-ARGS */V8);
	V7= CMPcadr((V6));
	if(!(type_of((V5))==t_cons)){
	goto T4;}
	if(!(type_of(CMPcar((V5)))==t_cons)){
	goto T4;}
	if(!((CMPcaar((V5)))==(VV[4]))){
	goto T4;}
	if((CMPcadr(CMPcar((V5))))!=Cnil){
	goto T4;}
	{register object V9;
	register object V10;
	V9= STREF(object,(V7),4);
	V10= CMPcar((V9));
	goto T16;
T16:;
	if(!(((V9))==Cnil)){
	goto T17;}
	goto T12;
	goto T17;
T17:;
	if(!((STREF(object,(V10),4))==(VV[7]))){
	goto T21;}
	if((STREF(object,(V10),12))==Cnil){
	goto T21;}
	V11= Ct;
	STSET(object,(V10),4, VV[8]);
	(void)(VV[8]);
	goto T21;
T21:;
	V9= CMPcdr((V9));
	V10= CMPcar((V9));
	goto T16;}
	goto T12;
T12:;
	(V6)->c.c_car = VV[9];
	{object V14 = (V6);
	VMR4(V14)}
	goto T4;
T4:;
	{object V15 = (V6);
	VMR4(V15)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-MAKE-DCLOSURE	*/

static object LI5(V18,V19)

register object V18;object V19;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	princ_str("\n	(DownClose",VV[10]);
	(void)((*(LnkLI90))((V18)));
	princ_str(".t=t_dclosure,DownClose",VV[10]);
	(void)((*(LnkLI90))((V18)));
	princ_str(".dc_self=LC",VV[10]);
	(void)((*(LnkLI90))((V18)));
	princ_char(44,VV[10]);
	princ_str("DownClose",VV[10]);
	(void)((*(LnkLI90))((V18)));
	princ_str(".dc_env=base0,(object)&DownClose",VV[10]);
	(void)((*(LnkLI90))((V18)));
	princ_char(41,VV[10]);
	{object V20 = Cnil;
	VMR5(V20)}
	return Cnil;
}
/*	local entry for function WFS-ERROR	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= VV[11];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V21 = vs_base[0];
	VMR6(V21)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-DOWNWARD-CLOSURE-MACRO	*/

static object LI7(V23)

object V23;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(((VV[12]->s.s_dbind))==Cnil){
	goto T49;}
	princ_str("\n#define DCnames",VV[13]);
	(void)((*(LnkLI91))((V23)));
	princ_char(32,VV[13]);
	(VV[12]->s.s_dbind)= (VFUN_NARGS=2,(*(LnkLI92))(VV[14],(VV[12]->s.s_dbind)));
	if(((VV[12]->s.s_dbind))==Cnil){
	goto T58;}
	(void)((*(LnkLI91))(VV[15]));
	{register object V24;
	V24= (VV[12]->s.s_dbind);
	goto T63;
T63:;
	if(((V24))!=Cnil){
	goto T64;}
	goto T61;
	goto T64;
T64:;
	(void)((*(LnkLI91))(VV[16]));
	(void)((*(LnkLI91))(CMPcar((V24))));
	if((CMPcdr((V24)))==Cnil){
	goto T70;}
	(void)((*(LnkLI91))(VV[17]));
	goto T70;
T70:;
	V24= CMPcdr((V24));
	goto T63;}
	goto T61;
T61:;
	{object V25 = (*(LnkLI91))(VV[18]);
	VMR7(V25)}
	goto T58;
T58:;
	{object V26 = Cnil;
	VMR7(V26)}
	goto T49;
T49:;
	{object V27 = Cnil;
	VMR7(V27)}
	return Cnil;
}
/*	local entry for function C2DOWNWARD-FUNCTION	*/

static object LI8(V29)

object V29;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{register object V30;
	(VV[22]->s.s_dbind)= number_plus((VV[22]->s.s_dbind),small_fixnum(1));
	V30= (VFUN_NARGS=4,(*(LnkLI93))(VV[19],VV[20],VV[21],(VV[22]->s.s_dbind)));
	{object V31;
	if(((VV[24]->s.s_dbind))!=Cnil){
	goto T82;}
	V32= Cnil;
	goto T80;
	goto T82;
T82:;
	V32= make_cons(small_fixnum(0),small_fixnum(0));
	goto T80;
T80:;
	V31= list(5,VV[23],V32,(VV[25]->s.s_dbind),(V30),(V29));
	(VV[26]->s.s_dbind)= make_cons((V31),(VV[26]->s.s_dbind));}
	(VV[27]->s.s_dbind)= make_cons(V30,(VV[27]->s.s_dbind));
	{object V34;
	V34= STREF(object,(V30),12);
	(VV[12]->s.s_dbind)= make_cons((V34),(VV[12]->s.s_dbind));}
	V35= list(3,VV[29],STREF(object,(V30),12),(VV[24]->s.s_dbind));
	{object V36 = (VFUN_NARGS=1,(*(LnkLI94))(/* INLINE-ARGS */V35));
	VMR8(V36)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LAMBDA-EXPR	*/

static object LI9(object V37,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	bds_check;
	{object V38;
	object V39;
	object V40;
	va_start(ap,first);
	V38= V37;
	narg = narg - 1;
	if (narg <= 0) goto T90;
	else {
	V39= first;}
	V40= Ct;
	--narg; goto T91;
	goto T90;
T90:;
	V39= Cnil;
	V40= Cnil;
	goto T91;
T91:;
	{object V41;
	object V42;
	object V43;
	object V44;
	object V45;
	object V46;
	object V47;
	object V48;
	object V49;
	object V50;
	register object V51;
	register object V52;
	object V53;
	register object V54;
	register object V55;
	register object V56;
	object V57;
	register object V58;
	object V59;
	object V60;
	object V61;
	V41= Cnil;
	V42= Cnil;
	V43= Cnil;
	V44= Cnil;
	V45= Cnil;
	V46= Cnil;
	V47= Cnil;
	V48= Cnil;
	V49= Cnil;
	V50= Cnil;
	V51= Cnil;
	V52= Cnil;
	V53= Cnil;
	V54= Cnil;
	V55= Cnil;
	V56= Cnil;
	V57= Cnil;
	V58= Cnil;
	bds_bind(VV[30],(VV[30]->s.s_dbind));
	V59= (VFUN_NARGS=0,(*(LnkLI95))());
	V60= Cnil;
	V61= (VV[31]->s.s_dbind);
	if(!(((V38))==Cnil)){
	goto T114;}
	V62= make_cons(VV[4],(V38));
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[32],/* INLINE-ARGS */V62)));
	goto T114;
T114:;
	base[2]= CMPcdr((V38));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk97)();
	if(vs_base<vs_top){
	V53= vs_base[0];
	vs_base++;
	}else{
	V53= Cnil;}
	if(vs_base<vs_top){
	V54= vs_base[0];
	vs_base++;
	}else{
	V54= Cnil;}
	if(vs_base<vs_top){
	V56= vs_base[0];
	vs_base++;
	}else{
	V56= Cnil;}
	if(vs_base<vs_top){
	V55= vs_base[0];
	vs_base++;
	}else{
	V55= Cnil;}
	if(vs_base<vs_top){
	V57= vs_base[0];
	vs_base++;
	}else{
	V57= Cnil;}
	if(vs_base<vs_top){
	V50= vs_base[0];
	}else{
	V50= Cnil;}
	vs_top=sup;
	if(((V40))==Cnil){
	goto T121;}
	V63= listA(3,VV[33],(V39),(V53));
	V53= make_cons(/* INLINE-ARGS */V63,Cnil);
	goto T121;
T121:;
	(void)((*(LnkLI98))((V54)));
	V51= CMPcar((V38));
	goto T130;
T130:;
	if(((V51))!=Cnil){
	goto T136;}
	goto T128;
	goto T136;
T136:;
	if(type_of((V51))==t_cons){
	goto T139;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[34],(V51))));
	goto T139;
T139:;
	{object V65;
	V65= CMPcar((V51));
	V51= CMPcdr((V51));
	V52= (V65);}
	{object V64= (V52);
	if((V64!= VV[69]))goto T147;
	goto T131;
	goto T147;
T147:;
	if((V64!= VV[68]))goto T148;
	goto T132;
	goto T148;
T148:;
	if((V64!= VV[71]))goto T149;
	goto T133;
	goto T149;
T149:;
	if((V64!= VV[73]))goto T150;
	goto T134;
	goto T150;
T150:;}
	{object V66;
	V66= (*(LnkLI99))((V52),(V54),(V55),(V56));
	V58= make_cons(V52,(V58));
	(VV[30]->s.s_dbind)= make_cons(V66,(VV[30]->s.s_dbind));
	V41= make_cons(V66,(V41));}
	goto T130;
	goto T131;
T131:;
	if(((V51))!=Cnil){
	goto T158;}
	goto T128;
	goto T158;
T158:;
	if(type_of((V51))==t_cons){
	goto T161;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[34],(V51))));
	goto T161;
T161:;
	{object V71;
	V71= CMPcar((V51));
	V51= CMPcdr((V51));
	V52= (V71);}
	{object V70= (V52);
	if((V70!= VV[68]))goto T169;
	goto T132;
	goto T169;
T169:;
	if((V70!= VV[71]))goto T170;
	goto T133;
	goto T170;
T170:;
	if((V70!= VV[73]))goto T171;
	goto T134;
	goto T171;
T171:;}
	if(type_of((V52))==t_cons){
	goto T174;}
	{object V72;
	V72= (*(LnkLI99))((V52),(V54),(V55),(V56));
	V58= make_cons(V52,(V58));
	{object V74;
	V75= (*(LnkLI100))(STREF(object,(V72),20));
	V74= list(3,(V72),/* INLINE-ARGS */V75,Cnil);
	V42= make_cons((V74),(V42));}
	(VV[30]->s.s_dbind)= make_cons(V72,(VV[30]->s.s_dbind));
	goto T172;}
	goto T174;
T174:;
	if(type_of(CMPcdr((V52)))==t_cons){
	goto T184;}
	if((CMPcdr((V52)))==Cnil){
	goto T186;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[35],(V52))));
	goto T186;
T186:;
	{object V77;
	V77= (*(LnkLI99))(CMPcar((V52)),(V54),(V55),(V56));
	{object V78;
	V78= CMPcar((V52));
	V58= make_cons((V78),(V58));}
	{object V79;
	V80= (*(LnkLI100))(STREF(object,(V77),20));
	V79= list(3,(V77),/* INLINE-ARGS */V80,Cnil);
	V42= make_cons((V79),(V42));}
	(VV[30]->s.s_dbind)= make_cons(V77,(VV[30]->s.s_dbind));
	goto T172;}
	goto T184;
T184:;
	if(type_of(CMPcddr((V52)))==t_cons){
	goto T198;}
	if((CMPcddr((V52)))==Cnil){
	goto T200;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[35],(V52))));
	goto T200;
T200:;
	{object V82;
	object V83;
	V82= (*(LnkLI101))(CMPcadr((V52)),(V59));
	V83= (*(LnkLI99))(CMPcar((V52)),(V54),(V55),(V56));
	{object V84;
	V84= CMPcar((V52));
	V58= make_cons((V84),(V58));}
	{object V85;
	V86= (*(LnkLI102))(STREF(object,(V83),20),(V82),CMPcadr((V52)));
	V85= list(3,(V83),/* INLINE-ARGS */V86,Cnil);
	V42= make_cons((V85),(V42));}
	(VV[30]->s.s_dbind)= make_cons(V83,(VV[30]->s.s_dbind));
	goto T172;}
	goto T198;
T198:;
	if((CMPcdddr((V52)))==Cnil){
	goto T212;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[35],(V52))));
	goto T212;
T212:;
	{object V88;
	object V89;
	object V90;
	V88= (*(LnkLI101))(CMPcadr((V52)),(V59));
	V89= (*(LnkLI99))(CMPcar((V52)),(V54),(V55),(V56));
	V90= (*(LnkLI99))(CMPcaddr((V52)),(V54),(V55),(V56));
	{object V91;
	V91= CMPcar((V52));
	V58= make_cons((V91),(V58));}
	{object V92;
	V92= CMPcaddr((V52));
	V58= make_cons((V92),(V58));}
	{object V93;
	V94= (*(LnkLI102))(STREF(object,(V89),20),(V88),CMPcadr((V52)));
	V93= list(3,(V89),/* INLINE-ARGS */V94,(V90));
	V42= make_cons((V93),(V42));}
	(VV[30]->s.s_dbind)= make_cons(V89,(VV[30]->s.s_dbind));
	(VV[30]->s.s_dbind)= make_cons(V90,(VV[30]->s.s_dbind));}
	goto T172;
T172:;
	goto T131;
	goto T132;
T132:;
	if(type_of((V51))==t_cons){
	goto T230;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[34],(V51))));
	goto T230;
T230:;
	{object V97;
	V97= CMPcar((V51));
	V58= make_cons((V97),(V58));}
	{object V99;
	V99= CMPcar((V51));
	V51= CMPcdr((V51));
	V98= (V99);}
	V43= (*(LnkLI99))(V98,(V54),(V55),(V56));
	(VV[30]->s.s_dbind)= make_cons(V43,(VV[30]->s.s_dbind));
	if(((V51))!=Cnil){
	goto T244;}
	goto T128;
	goto T244;
T244:;
	if(type_of((V51))==t_cons){
	goto T247;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[34],(V51))));
	goto T247;
T247:;
	{object V102;
	V102= CMPcar((V51));
	V51= CMPcdr((V51));
	V52= (V102);}
	{object V101= (V52);
	if((V101!= VV[71]))goto T255;
	goto T133;
	goto T255;
T255:;
	if((V101!= VV[73]))goto T256;
	goto T134;
	goto T256;
T256:;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[36],(V52))));
	goto T133;
T133:;
	V45= Ct;
	if(((V51))!=Cnil){
	goto T259;}
	goto T128;
	goto T259;
T259:;
	if(type_of((V51))==t_cons){
	goto T262;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[34],(V51))));
	goto T262;
T262:;
	{object V104;
	V104= CMPcar((V51));
	V51= CMPcdr((V51));
	V52= (V104);}
	{object V103= (V52);
	if((V103!= VV[73]))goto T270;
	goto T134;
	goto T270;
T270:;
	if((V103!= VV[72]))goto T271;
	V47= Ct;
	if(((V51))!=Cnil){
	goto T274;}
	goto T128;
	goto T274;
T274:;
	if(type_of((V51))==t_cons){
	goto T277;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[34],(V51))));
	goto T277;
T277:;
	{object V106;
	V106= CMPcar((V51));
	V51= CMPcdr((V51));
	V52= (V106);}
	{object V105= (V52);
	if((V105!= VV[73]))goto T285;
	goto T134;
	goto T285;
T285:;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[37],(V52))));
	goto T265;
	goto T271;
T271:;}
	goto T265;
T265:;
	if(type_of((V52))==t_cons){
	goto T286;}
	V52= make_cons((V52),Cnil);
	goto T286;
T286:;
	if(!(type_of(CMPcar((V52)))==t_cons)){
	goto T292;}
	{object V107= CMPcaar((V52));
	if(!((type_of(V107)==t_symbol&&(V107)->s.s_hpack==keyword_package))){
	goto T295;}}
	if(!(type_of(CMPcdar((V52)))==t_cons)){
	goto T295;}
	if((CMPcddar((V52)))==Cnil){
	goto T294;}
	goto T295;
T295:;
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[35],(V52))));
	goto T294;
T294:;
	V52= listA(3,CMPcaar((V52)),CMPcadar((V52)),CMPcdr((V52)));
	goto T290;
	goto T292;
T292:;
	if(type_of(CMPcar((V52)))==t_symbol){
	goto T302;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[35],(V52))));
	goto T302;
T302:;
	base[2]= coerce_to_string(CMPcar((V52)));
	base[3]= VV[38];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V108= vs_base[0];
	V52= listA(3,V108,CMPcar((V52)),CMPcdr((V52)));
	goto T290;
T290:;
	if(type_of(CMPcddr((V52)))==t_cons){
	goto T311;}
	if((CMPcddr((V52)))==Cnil){
	goto T313;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[35],(V52))));
	goto T313;
T313:;
	{object V109;
	V109= (*(LnkLI99))(CMPcadr((V52)),(V54),(V55),(V56));
	{object V110;
	V110= CMPcadr((V52));
	V58= make_cons((V110),(V58));}
	{object V111;
	V112= CMPcar((V52));
	V113= (*(LnkLI100))(STREF(object,(V109),20));
	V111= list(4,/* INLINE-ARGS */V112,(V109),/* INLINE-ARGS */V113,(VFUN_NARGS=2,(*(LnkLI103))(VV[39],VV[40])));
	V44= make_cons((V111),(V44));}
	(VV[30]->s.s_dbind)= make_cons(V109,(VV[30]->s.s_dbind));
	goto T309;}
	goto T311;
T311:;
	if(type_of(CMPcdddr((V52)))==t_cons){
	goto T325;}
	if((CMPcdddr((V52)))==Cnil){
	goto T327;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[35],(V52))));
	goto T327;
T327:;
	{object V115;
	object V116;
	V115= (*(LnkLI101))(CMPcaddr((V52)),(V59));
	V116= (*(LnkLI99))(CMPcadr((V52)),(V54),(V55),(V56));
	{object V117;
	V117= CMPcadr((V52));
	V58= make_cons((V117),(V58));}
	{object V118;
	V119= CMPcar((V52));
	V120= (*(LnkLI102))(STREF(object,(V116),20),(V115),CMPcaddr((V52)));
	V118= list(4,/* INLINE-ARGS */V119,(V116),/* INLINE-ARGS */V120,(VFUN_NARGS=2,(*(LnkLI103))(VV[39],VV[40])));
	V44= make_cons((V118),(V44));}
	(VV[30]->s.s_dbind)= make_cons(V116,(VV[30]->s.s_dbind));
	goto T309;}
	goto T325;
T325:;
	if((CMPcddddr((V52)))==Cnil){
	goto T339;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[35],(V52))));
	goto T339;
T339:;
	{object V122;
	object V123;
	object V124;
	V122= (*(LnkLI101))(CMPcaddr((V52)),(V59));
	V123= (*(LnkLI99))(CMPcadr((V52)),(V54),(V55),(V56));
	V124= (*(LnkLI99))(CMPcadddr((V52)),(V54),(V55),(V56));
	{object V125;
	V125= CMPcadr((V52));
	V58= make_cons((V125),(V58));}
	{object V126;
	V126= CMPcadddr((V52));
	V58= make_cons((V126),(V58));}
	{object V127;
	V128= CMPcar((V52));
	V129= (*(LnkLI102))(STREF(object,(V123),20),(V122),CMPcaddr((V52)));
	V127= list(4,/* INLINE-ARGS */V128,(V123),/* INLINE-ARGS */V129,(V124));
	V44= make_cons((V127),(V44));}
	(VV[30]->s.s_dbind)= make_cons(V123,(VV[30]->s.s_dbind));
	(VV[30]->s.s_dbind)= make_cons(V124,(VV[30]->s.s_dbind));}
	goto T309;
T309:;
	goto T133;
	goto T134;
T134:;
	V60= (VFUN_NARGS=0,(*(LnkLI95))());
	goto T135;
T135:;
	if(((V51))!=Cnil){
	goto T358;}
	(void)((*(LnkLI104))((V59),(V60)));
	goto T128;
	goto T358;
T358:;
	if(type_of((V51))==t_cons){
	goto T362;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[34],(V51))));
	goto T362;
T362:;
	{object V132;
	V132= CMPcar((V51));
	V51= CMPcdr((V51));
	V52= (V132);}
	if(!(type_of((V52))==t_cons)){
	goto T372;}
	if(type_of(CMPcdr((V52)))==t_cons){
	goto T375;}
	if((CMPcdr((V52)))==Cnil){
	goto T377;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[35],(V52))));
	goto T377;
T377:;
	{object V133;
	V133= (*(LnkLI99))(CMPcar((V52)),(V54),(V55),(V56));
	{object V134;
	V134= CMPcar((V52));
	V58= make_cons((V134),(V58));}
	{object V135;
	V135= (*(LnkLI100))(STREF(object,(V133),20));
	V49= make_cons((V135),(V49));}
	V48= make_cons(V133,(V48));
	(VV[30]->s.s_dbind)= make_cons(V133,(VV[30]->s.s_dbind));
	goto T370;}
	goto T375;
T375:;
	if((CMPcddr((V52)))==Cnil){
	goto T390;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[35],(V52))));
	goto T390;
T390:;
	{object V138;
	object V139;
	V138= (*(LnkLI101))(CMPcadr((V52)),(V60));
	V139= (*(LnkLI99))(CMPcar((V52)),(V54),(V55),(V56));
	{object V140;
	V140= CMPcar((V52));
	V58= make_cons((V140),(V58));}
	{object V141;
	V141= (*(LnkLI102))(STREF(object,(V139),20),(V138),CMPcadr((V52)));
	V49= make_cons((V141),(V49));}
	V48= make_cons(V139,(V48));
	(VV[30]->s.s_dbind)= make_cons(V139,(VV[30]->s.s_dbind));
	goto T370;}
	goto T372;
T372:;
	{object V144;
	V144= (*(LnkLI99))((V52),(V54),(V55),(V56));
	V58= make_cons(V52,(V58));
	{object V146;
	V146= (*(LnkLI100))(STREF(object,(V144),20));
	V49= make_cons((V146),(V49));}
	V48= make_cons(V144,(V48));
	(VV[30]->s.s_dbind)= make_cons(V144,(VV[30]->s.s_dbind));}
	goto T370;
T370:;
	goto T135;
	goto T128;
T128:;
	V41= reverse((V41));
	V42= reverse((V42));
	V44= reverse((V44));
	V48= reverse((V48));
	V49= reverse((V49));
	(void)((*(LnkLI105))((V58),(V56),(V55)));
	V53= (*(LnkLI106))((V57),(V53));
	(void)((*(LnkLI104))((V59),CMPcadr((V53))));
	{object V149;
	object V150;
	V149= (V41);
	V150= CMPcar((V149));
	goto T432;
T432:;
	if(!(((V149))==Cnil)){
	goto T433;}
	goto T428;
	goto T433;
T433:;
	(void)((*(LnkLI107))((V150)));
	V149= CMPcdr((V149));
	V150= CMPcar((V149));
	goto T432;}
	goto T428;
T428:;
	{object V151;
	object V152;
	V151= (V42);
	V152= CMPcar((V151));
	goto T447;
T447:;
	if(!(((V151))==Cnil)){
	goto T448;}
	goto T443;
	goto T448;
T448:;
	(void)((*(LnkLI107))(CMPcar((V152))));
	if((CMPcaddr((V152)))==Cnil){
	goto T453;}
	(void)((*(LnkLI107))(CMPcaddr((V152))));
	goto T453;
T453:;
	V151= CMPcdr((V151));
	V152= CMPcar((V151));
	goto T447;}
	goto T443;
T443:;
	if(((V43))==Cnil){
	goto T461;}
	(void)((*(LnkLI107))((V43)));
	goto T461;
T461:;
	{object V153;
	object V154;
	V153= (V44);
	V154= CMPcar((V153));
	goto T468;
T468:;
	if(!(((V153))==Cnil)){
	goto T469;}
	goto T464;
	goto T469;
T469:;
	(void)((*(LnkLI107))(CMPcadr((V154))));
	if((CMPcadddr((V154)))==Cnil){
	goto T474;}
	(void)((*(LnkLI107))(CMPcadddr((V154))));
	goto T474;
T474:;
	V153= CMPcdr((V153));
	V154= CMPcar((V153));
	goto T468;}
	goto T464;
T464:;
	{object V155;
	object V156;
	V155= (V48);
	V156= CMPcar((V155));
	goto T486;
T486:;
	if(!(((V155))==Cnil)){
	goto T487;}
	goto T482;
	goto T487;
T487:;
	(void)((*(LnkLI107))((V156)));
	V155= CMPcdr((V155));
	V156= CMPcar((V155));
	goto T486;}
	goto T482;
T482:;
	if(((V48))==Cnil){
	goto T497;}
	(void)((*(LnkLI104))((V60),CMPcadr((V53))));
	V53= list(5,VV[41],(V60),(V48),(V49),(V53));
	if(!(eql((V61),(VV[31]->s.s_dbind)))){
	goto T503;}
	goto T497;
	goto T503;
T503:;
	V157= Ct;
	STSET(object,(V60),16, Ct);
	(void)(Ct);
	goto T497;
T497:;
	V53= (*(LnkLI108))((V41),(V53),(V39));
	V46= list(6,(V41),(V42),(V43),(V45),(V44),(V47));
	if((VV[42]->s.s_dbind)==Cnil){
	goto T509;}
	base[2]= (V46);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk109)();
	vs_top=sup;
	goto T509;
T509:;
	{object V158 = list(5,VV[4],(V59),(V46),(V50),(V53));
	bds_unwind1;
	VMR9(V158)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIX-DOWN-ARGS	*/

static object LI10(V162,V163,V164)

object V162;object V163;object V164;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V165;
	object V166;
	register object V167;
	register object V168;
	V165= Cnil;
	V166= Cnil;
	V167= Cnil;
	V168= Cnil;
	{object V169;
	object V170;
	{object V171 =((V164))->s.s_plist;
	 object ind= VV[43];
	while(V171!=Cnil){
	if(V171->c.c_car==ind){
	V169= (V171->c.c_cdr->c.c_car);
	goto T515;
	}else V171=V171->c.c_cdr->c.c_cdr;}
	V169= Cnil;}
	goto T515;
T515:;
	{object V172 =((V164))->s.s_plist;
	 object ind= VV[44];
	while(V172!=Cnil){
	if(V172->c.c_car==ind){
	V170= (V172->c.c_cdr->c.c_car);
	goto T516;
	}else V172=V172->c.c_cdr->c.c_cdr;}
	V170= Cnil;}
	goto T516;
T516:;
	{register object V173;
	register object V174;
	V173= (V162);
	V174= (V169);
	goto T519;
T519:;
	if(((V173))!=Cnil){
	goto T520;}
	goto T517;
	goto T520;
T520:;
	V168= CMPcar((V173));
	if(((V170))!=Cnil){
	goto T528;}
	if((CMPcar((V174)))==(Ct)){
	goto T528;}
	{object V175 = (V163);
	VMR10(V175)}
	goto T528;
T528:;
	if(!((STREF(object,(V168),4))==(VV[8]))){
	goto T526;}
	if(!((STREF(object,(V168),16))==(VV[45]))){
	goto T526;}
	{register object V176;
	object V177;
	V176= (*(LnkLI99))(STREF(object,(V168),0),Cnil,Cnil,Cnil);
	if((V167)!=Cnil){
	V178= (V167);
	goto T538;}
	V167= (VFUN_NARGS=0,(*(LnkLI95))());
	V178= (V167);
	goto T538;
T538:;
	V177= list(3,VV[6],V178,list(2,(V176),Cnil));
	V165= make_cons(V168,(V165));
	{register object V181;
	V181= (V176);
	(V173)->c.c_car = (V181);}
	{register object V183;
	object V184;
	V183= (V167);
	V184= make_cons(V176,STREF(object,(V183),4));
	V185= Ct;
	STSET(object,(V183),4, (V184));
	(void)((V184));}
	V166= make_cons(V177,(V166));}
	goto T526;
T526:;
	V173= CMPcdr((V173));
	V174= CMPcdr((V174));
	goto T519;}
	goto T517;
T517:;
	if(((V165))==Cnil){
	goto T554;}
	{object V187 = list(5,VV[41],(V167),(V165),(V166),(V163));
	VMR10(V187)}
	goto T554;
T554:;
	{object V188 = (V163);
	VMR10(V188)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function THE-PARAMETER	*/

static object LI11(V190)

register object V190;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	if(type_of((V190))==t_symbol){
	goto T556;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[46],(V190))));
	goto T556;
T556:;
	base[0]= (V190);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T559;}
	(void)((VFUN_NARGS=2,(*(LnkLI96))(VV[47],(V190))));
	goto T559;
T559:;
	{object V191 = (V190);
	VMR11(V191)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2LAMBDA-EXPR	*/

static object LI12(object V193,object V192,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	bds_check;
	{register object V194;
	object V195;
	object V196;
	object V197;
	va_start(ap,first);
	V194= V193;
	V195= V192;
	narg = narg - 2;
	if (narg <= 0) goto T563;
	else {
	V196= first;}
	V197= Ct;
	--narg; goto T564;
	goto T563;
T563:;
	V196= Cnil;
	V197= Cnil;
	goto T564;
T564:;
	if(((VV[49]->s.s_dbind))==Cnil){
	goto T568;}
	if(((V197))==Cnil){
	goto T568;}
	{register object V198;
	register object V199;
	V198= CMPcar((V194));
	V199= CMPcar((V198));
	goto T578;
T578:;
	if(!(((V198))==Cnil)){
	goto T579;}
	goto T574;
	goto T579;
T579:;
	if((STREF(object,(V199),12))==Cnil){
	goto T583;}
	goto T568;
	goto T583;
T583:;
	V198= CMPcdr((V198));
	V199= CMPcar((V198));
	goto T578;}
	goto T574;
T574:;
	if((CMPcadr((V194)))!=Cnil){
	goto T568;}
	if((CMPcaddr((V194)))!=Cnil){
	goto T568;}
	if((CMPcadddr((V194)))!=Cnil){
	goto T568;}
	base[0]= make_cons((V196),CMPcar((V194)));
	goto T566;
	goto T568;
T568:;
	base[0]= Cnil;
	goto T566;
T566:;
	bds_bind(VV[48],base[0]);
	if((CMPcaddr((V194)))==Cnil){
	goto T598;}
	if(!((STREF(object,CMPcaddr((V194)),20))==(VV[51]))){
	goto T598;}
	base[1]= Ct;
	goto T596;
	goto T598;
T598:;
	base[1]= (VV[50]->s.s_dbind);
	goto T596;
T596:;
	bds_bind(VV[50],base[1]);
	if((CMPcadddr((V194)))==Cnil){
	goto T603;}
	{object V200 = (*(LnkLI110))((V194),(V195));
	bds_unwind1;
	bds_unwind1;
	VMR12(V200)}
	goto T603;
T603:;
	{object V201 = (*(LnkLI111))((V194),(V195));
	bds_unwind1;
	bds_unwind1;
	VMR12(V201)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function C2LAMBDA-EXPR-WITHOUT-KEY	*/

static object LI13(V204,V205)

object V204;object V205;
{	 VMB13 VMS13 VMV13
	bds_check;
	goto TTL;
TTL:;
	{object V206;
	object V207;
	object V208;
	register object V209;
	V206= CMPcar((V204));
	V207= CMPcadr((V204));
	V208= CMPcaddr((V204));
	V209= Cnil;
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[53],(VV[53]->s.s_dbind));
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	base[7]= Cnil;
	{register object V210;
	object V211;
	V210= (V206);
	V211= CMPcar((V210));
	goto T614;
T614:;
	if(!(((V210))==Cnil)){
	goto T615;}
	goto T610;
	goto T615;
T615:;
	base[9]= (V211);
	vs_top=(vs_base=base+9)+1;
	L14(base);
	vs_top=sup;
	V210= CMPcdr((V210));
	V211= CMPcar((V210));
	goto T614;}
	goto T610;
T610:;
	{register object V212;
	object V213;
	V212= (V207);
	V213= CMPcar((V212));
	goto T630;
T630:;
	if(!(((V212))==Cnil)){
	goto T631;}
	goto T626;
	goto T631;
T631:;
	base[9]= CMPcar((V213));
	vs_top=(vs_base=base+9)+1;
	L14(base);
	vs_top=sup;
	if((CMPcaddr((V213)))==Cnil){
	goto T637;}
	base[9]= CMPcaddr((V213));
	vs_top=(vs_base=base+9)+1;
	L14(base);
	vs_top=sup;
	goto T637;
T637:;
	V212= CMPcdr((V212));
	V213= CMPcar((V212));
	goto T630;}
	goto T626;
T626:;
	if(((V208))==Cnil){
	goto T609;}
	base[8]= (V208);
	vs_top=(vs_base=base+8)+1;
	L14(base);
	vs_top=sup;
	goto T609;
T609:;
	if(((VV[55]->s.s_dbind))!=Cnil){
	goto T650;}
	if(((VV[56]->s.s_dbind))==Cnil){
	goto T649;}
	goto T650;
T650:;
	if(((V208))!=Cnil){
	goto T654;}
	if(((V207))==Cnil){
	goto T655;}
	goto T654;
T654:;
	if(((V206))==Cnil){
	goto T659;}
	princ_str("\n	if(vs_top-vs_base<",VV[10]);
	V214 = CMPmake_fixnum((long)length((V206)));
	(void)((*(LnkLI90))(V214));
	princ_str(") too_few_arguments();",VV[10]);
	goto T659;
T659:;
	if(((V208))!=Cnil){
	goto T649;}
	princ_str("\n	if(vs_top-vs_base>",VV[10]);
	V215 = CMPmake_fixnum((long)length((V206)));
	V216 = CMPmake_fixnum((long)length((V207)));
	V217= number_plus(V215,V216);
	(void)((*(LnkLI90))(/* INLINE-ARGS */V217));
	princ_str(") too_many_arguments();",VV[10]);
	goto T649;
	goto T655;
T655:;
	princ_str("\n	check_arg(",VV[10]);
	V218 = CMPmake_fixnum((long)length((V206)));
	(void)((*(LnkLI90))(V218));
	princ_str(");",VV[10]);
	goto T649;
T649:;
	{register object V219;
	object V220;
	V219= (V206);
	V220= CMPcar((V219));
	goto T677;
T677:;
	if(!(((V219))==Cnil)){
	goto T678;}
	goto T673;
	goto T678;
T678:;
	V221= (*(LnkLI112))();
	V222= Ct;
	STSET(object,(V220),8, /* INLINE-ARGS */V221);
	(void)(/* INLINE-ARGS */V221);
	V219= CMPcdr((V219));
	V220= CMPcar((V219));
	goto T677;}
	goto T673;
T673:;
	{register object V223;
	object V224;
	V223= (V207);
	V224= CMPcar((V223));
	goto T692;
T692:;
	if(!(((V223))==Cnil)){
	goto T693;}
	goto T688;
	goto T693;
T693:;
	V225= CMPcar((V224));
	V226= (*(LnkLI112))();
	V227= Ct;
	STSET(object,/* INLINE-ARGS */V225,8, /* INLINE-ARGS */V226);
	(void)(/* INLINE-ARGS */V226);
	V223= CMPcdr((V223));
	V224= CMPcar((V223));
	goto T692;}
	goto T688;
T688:;
	if(((V208))==Cnil){
	goto T703;}
	V228= (*(LnkLI112))();
	V229= Ct;
	STSET(object,(V208),8, /* INLINE-ARGS */V228);
	(void)(/* INLINE-ARGS */V228);
	goto T703;
T703:;
	{register object V230;
	object V231;
	V230= (V207);
	V231= CMPcar((V230));
	goto T710;
T710:;
	if(!(((V230))==Cnil)){
	goto T711;}
	goto T706;
	goto T711;
T711:;
	if((CMPcaddr((V231)))==Cnil){
	goto T715;}
	V232= CMPcaddr((V231));
	V233= (*(LnkLI112))();
	V234= Ct;
	STSET(object,/* INLINE-ARGS */V232,8, /* INLINE-ARGS */V233);
	(void)(/* INLINE-ARGS */V233);
	goto T715;
T715:;
	V230= CMPcdr((V230));
	V231= CMPcar((V230));
	goto T710;}
	goto T706;
T706:;
	{register object V235;
	object V236;
	V235= (V206);
	V236= CMPcar((V235));
	goto T727;
T727:;
	if(!(((V235))==Cnil)){
	goto T728;}
	goto T723;
	goto T728;
T728:;
	(void)((*(LnkLI113))((V236)));
	V235= CMPcdr((V235));
	V236= CMPcar((V235));
	goto T727;}
	goto T723;
T723:;
	if(((V207))!=Cnil){
	goto T740;}
	if(((V208))==Cnil){
	goto T738;}
	goto T740;
T740:;
	if(((V206))==Cnil){
	goto T738;}
	princ_str("\n	vs_base=vs_base+",VV[10]);
	V237 = CMPmake_fixnum((long)length((V206)));
	(void)((*(LnkLI90))(V237));
	princ_char(59,VV[10]);
	goto T738;
T738:;
	if(((V207))==Cnil){
	goto T750;}
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	if(((V208))==Cnil){
	goto T753;}
	princ_str("\n	vs_top[0]=Cnil;",VV[10]);
	princ_str("\n	{object *p=vs_top, *q=vs_base+",VV[10]);
	V238 = CMPmake_fixnum((long)length((V207)));
	(void)((*(LnkLI90))(V238));
	princ_char(59,VV[10]);
	princ_str("\n	 for(;p>q;p--)p[-1]=MMcons(p[-1],p[0]);}",VV[10]);
	goto T753;
T753:;
	{register object V239;
	V239= (V207);
	goto T765;
T765:;
	if(!(((V239))==Cnil)){
	goto T766;}
	goto T763;
	goto T766;
T766:;
	{object V240;
	(VV[57]->s.s_dbind)= number_plus((VV[57]->s.s_dbind),small_fixnum(1));
	V240= make_cons((VV[57]->s.s_dbind),Cnil);
	V209= make_cons((V240),(V209));}
	princ_str("\n	if(vs_base>=vs_top){",VV[10]);
	(void)((*(LnkLI114))());
	(CMPcar((V209)))->c.c_cdr = Ct;
	(void)(CMPcar((V209)));
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI90))(CMPcar(CMPcar((V209)))));
	princ_char(59,VV[10]);
	princ_char(125,VV[10]);
	(void)((*(LnkLI113))(CMPcaar((V239))));
	if((CMPcaddar((V239)))==Cnil){
	goto T785;}
	(void)((*(LnkLI115))(CMPcaddar((V239)),Ct));
	goto T785;
T785:;
	if((CMPcdr((V239)))==Cnil){
	goto T788;}
	princ_str("\n	vs_base++;",VV[10]);
	goto T788;
T788:;
	V239= CMPcdr((V239));
	goto T765;}
	goto T763;
T763:;
	if(((V208))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T752;}
	V241= (*(LnkLI113))((V208));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T752;
T752:;
	princ_str("\n	",VV[10]);
	(void)((*(LnkLI114))());
	{object V242;
	(VV[57]->s.s_dbind)= number_plus((VV[57]->s.s_dbind),small_fixnum(1));
	V242= make_cons((VV[57]->s.s_dbind),Cnil);
	princ_str("\n	",VV[10]);
	((V242))->c.c_cdr = Ct;
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI90))(CMPcar((V242))));
	princ_char(59,VV[10]);
	V209= reverse((V209));
	{register object V243;
	register object V244;
	V243= (V207);
	V244= CMPcar((V243));
	goto T813;
T813:;
	if(!(((V243))==Cnil)){
	goto T814;}
	goto T809;
	goto T814;
T814:;
	if((CMPcdr(CMPcar((V209))))==Cnil){
	goto T818;}
	princ_str("\n	goto T",VV[10]);
	(void)((*(LnkLI90))(CMPcar(CMPcar((V209)))));
	princ_char(59,VV[10]);
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI90))(CMPcar(CMPcar((V209)))));
	princ_str(":;",VV[10]);
	goto T818;
T818:;
	{object V245;
	V245= CMPcar((V209));
	V209= CMPcdr((V209));}
	(void)((*(LnkLI116))(CMPcar((V244)),CMPcadr((V244))));
	if((CMPcaddr((V244)))==Cnil){
	goto T833;}
	(void)((*(LnkLI115))(CMPcaddr((V244)),Cnil));
	goto T833;
T833:;
	V243= CMPcdr((V243));
	V244= CMPcar((V243));
	goto T813;}
	goto T809;
T809:;
	if(((V208))==Cnil){
	goto T841;}
	(void)((*(LnkLI115))((V208),Cnil));
	goto T841;
T841:;
	if((CMPcdr((V242)))==Cnil){
	goto T748;}
	princ_str("\n	goto T",VV[10]);
	(void)((*(LnkLI90))(CMPcar((V242))));
	princ_char(59,VV[10]);
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI90))(CMPcar((V242))));
	princ_str(":;",VV[10]);
	goto T748;}
	goto T750;
T750:;
	if(((V208))==Cnil){
	goto T854;}
	princ_str("\n	vs_top[0]=Cnil;",VV[10]);
	princ_str("\n	{object *p=vs_top;",VV[10]);
	princ_str("\n	 for(;p>vs_base;p--)p[-1]=",VV[10]);
	if(((VV[50]->s.s_dbind))==Cnil){
	goto T865;}
	V246= VV[58];
	goto T863;
	goto T865;
T865:;
	V246= VV[59];
	goto T863;
T863:;
	(void)((*(LnkLI90))(V246));
	princ_str("(p[-1],p[0]);}",VV[10]);
	(void)((*(LnkLI113))((V208)));
	princ_str("\n	",VV[10]);
	(void)((*(LnkLI114))());
	goto T748;
	goto T854;
T854:;
	princ_str("\n	",VV[10]);
	(void)((*(LnkLI114))());
	goto T748;
T748:;
	if(((VV[48]->s.s_dbind))==Cnil){
	goto T871;}
	(VV[52]->s.s_dbind)= make_cons(VV[60],(VV[52]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[10]);
	princ_str("\nTTL:;",VV[10]);
	goto T871;
T871:;
	base[8]= (V205);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk117)();
	vs_top=sup;
	if((base[7])==Cnil){
	goto T882;}
	princ_str("\n	}",VV[10]);
	{object V248 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR13(V248)}
	goto T882;
T882:;
	{object V249 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR13(V249)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2LAMBDA-EXPR-WITH-KEY	*/

static object LI15(V252,V253)

object V252;object V253;
{	 VMB14 VMS14 VMV14
	bds_check;
	goto TTL;
TTL:;
	{object V254;
	object V255;
	object V256;
	object V257;
	object V258;
	register object V259;
	V254= CMPcar((V252));
	V255= CMPcadr((V252));
	V256= CMPcaddr((V252));
	V257= CMPcar(CMPcddddr((V252)));
	V258= CMPcadr(CMPcddddr((V252)));
	V259= Cnil;
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[53],(VV[53]->s.s_dbind));
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	base[9]= Cnil;
	{register object V260;
	object V261;
	V260= (V254);
	V261= CMPcar((V260));
	goto T896;
T896:;
	if(!(((V260))==Cnil)){
	goto T897;}
	goto T892;
	goto T897;
T897:;
	base[11]= (V261);
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	V260= CMPcdr((V260));
	V261= CMPcar((V260));
	goto T896;}
	goto T892;
T892:;
	{register object V262;
	object V263;
	V262= (V255);
	V263= CMPcar((V262));
	goto T912;
T912:;
	if(!(((V262))==Cnil)){
	goto T913;}
	goto T908;
	goto T913;
T913:;
	base[11]= CMPcar((V263));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	if((CMPcaddr((V263)))==Cnil){
	goto T919;}
	base[11]= CMPcaddr((V263));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	goto T919;
T919:;
	V262= CMPcdr((V262));
	V263= CMPcar((V262));
	goto T912;}
	goto T908;
T908:;
	if(((V256))==Cnil){
	goto T928;}
	base[10]= (V256);
	vs_top=(vs_base=base+10)+1;
	L16(base);
	vs_top=sup;
	goto T928;
T928:;
	{register object V264;
	object V265;
	V264= (V257);
	V265= CMPcar((V264));
	goto T935;
T935:;
	if(!(((V264))==Cnil)){
	goto T936;}
	goto T891;
	goto T936;
T936:;
	base[11]= CMPcadr((V265));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	if((CMPcadddr((V265)))==Cnil){
	goto T942;}
	base[11]= CMPcadddr((V265));
	vs_top=(vs_base=base+11)+1;
	L16(base);
	vs_top=sup;
	goto T942;
T942:;
	V264= CMPcdr((V264));
	V265= CMPcar((V264));
	goto T935;}
	goto T891;
T891:;
	if(((VV[55]->s.s_dbind))!=Cnil){
	goto T953;}
	if(((VV[56]->s.s_dbind))==Cnil){
	goto T951;}
	goto T953;
T953:;
	if(((V254))==Cnil){
	goto T951;}
	if(((V254))==Cnil){
	goto T951;}
	princ_str("\n	if(vs_top-vs_base<",VV[10]);
	V266 = CMPmake_fixnum((long)length((V254)));
	(void)((*(LnkLI90))(V266));
	princ_str(") too_few_arguments();",VV[10]);
	goto T951;
T951:;
	{register object V267;
	object V268;
	V267= (V254);
	V268= CMPcar((V267));
	goto T967;
T967:;
	if(!(((V267))==Cnil)){
	goto T968;}
	goto T963;
	goto T968;
T968:;
	V269= (*(LnkLI112))();
	V270= Ct;
	STSET(object,(V268),8, /* INLINE-ARGS */V269);
	(void)(/* INLINE-ARGS */V269);
	V267= CMPcdr((V267));
	V268= CMPcar((V267));
	goto T967;}
	goto T963;
T963:;
	{register object V271;
	object V272;
	V271= (V255);
	V272= CMPcar((V271));
	goto T982;
T982:;
	if(!(((V271))==Cnil)){
	goto T983;}
	goto T978;
	goto T983;
T983:;
	V273= CMPcar((V272));
	V274= (*(LnkLI112))();
	V275= Ct;
	STSET(object,/* INLINE-ARGS */V273,8, /* INLINE-ARGS */V274);
	(void)(/* INLINE-ARGS */V274);
	V271= CMPcdr((V271));
	V272= CMPcar((V271));
	goto T982;}
	goto T978;
T978:;
	if(((V256))==Cnil){
	goto T993;}
	V276= (*(LnkLI112))();
	V277= Ct;
	STSET(object,(V256),8, /* INLINE-ARGS */V276);
	(void)(/* INLINE-ARGS */V276);
	goto T993;
T993:;
	{register object V278;
	object V279;
	V278= (V257);
	V279= CMPcar((V278));
	goto T1000;
T1000:;
	if(!(((V278))==Cnil)){
	goto T1001;}
	goto T996;
	goto T1001;
T1001:;
	V280= CMPcadr((V279));
	V281= (*(LnkLI112))();
	V282= Ct;
	STSET(object,/* INLINE-ARGS */V280,8, /* INLINE-ARGS */V281);
	(void)(/* INLINE-ARGS */V281);
	V278= CMPcdr((V278));
	V279= CMPcar((V278));
	goto T1000;}
	goto T996;
T996:;
	{register object V283;
	object V284;
	V283= (V257);
	V284= CMPcar((V283));
	goto T1015;
T1015:;
	if(!(((V283))==Cnil)){
	goto T1016;}
	goto T1011;
	goto T1016;
T1016:;
	V285= CMPcadddr((V284));
	V286= (*(LnkLI112))();
	V287= Ct;
	STSET(object,/* INLINE-ARGS */V285,8, /* INLINE-ARGS */V286);
	(void)(/* INLINE-ARGS */V286);
	V283= CMPcdr((V283));
	V284= CMPcar((V283));
	goto T1015;}
	goto T1011;
T1011:;
	{register object V288;
	object V289;
	V288= (V255);
	V289= CMPcar((V288));
	goto T1030;
T1030:;
	if(!(((V288))==Cnil)){
	goto T1031;}
	goto T1026;
	goto T1031;
T1031:;
	if((CMPcaddr((V289)))==Cnil){
	goto T1035;}
	V290= CMPcaddr((V289));
	V291= (*(LnkLI112))();
	V292= Ct;
	STSET(object,/* INLINE-ARGS */V290,8, /* INLINE-ARGS */V291);
	(void)(/* INLINE-ARGS */V291);
	goto T1035;
T1035:;
	V288= CMPcdr((V288));
	V289= CMPcar((V288));
	goto T1030;}
	goto T1026;
T1026:;
	princ_str("\n	parse_key(vs_base",VV[10]);
	if(((V254))!=Cnil){
	goto T1046;}
	if(((V255))==Cnil){
	goto T1045;}
	goto T1046;
T1046:;
	princ_char(43,VV[10]);
	V293 = CMPmake_fixnum((long)length((V254)));
	V294 = CMPmake_fixnum((long)length((V255)));
	V295= number_plus(V293,V294);
	(void)((*(LnkLI90))(/* INLINE-ARGS */V295));
	goto T1045;
T1045:;
	if(((V256))==Cnil){
	goto T1054;}
	princ_str(",TRUE,",VV[10]);
	goto T1052;
	goto T1054;
T1054:;
	princ_str(",FALSE,",VV[10]);
	goto T1052;
T1052:;
	if(((V258))==Cnil){
	goto T1060;}
	princ_str("TRUE,",VV[10]);
	goto T1058;
	goto T1060;
T1060:;
	princ_str("FALSE,",VV[10]);
	goto T1058;
T1058:;
	V296 = CMPmake_fixnum((long)length((V257)));
	(void)((*(LnkLI90))(V296));
	{register object V297;
	object V298;
	V297= (V257);
	V298= CMPcar((V297));
	goto T1070;
T1070:;
	if(!(((V297))==Cnil)){
	goto T1071;}
	goto T1066;
	goto T1071;
T1071:;
	princ_str(",VV[",VV[10]);
	V299= (*(LnkLI118))(CMPcar((V298)));
	(void)((*(LnkLI90))(/* INLINE-ARGS */V299));
	princ_char(93,VV[10]);
	V297= CMPcdr((V297));
	V298= CMPcar((V297));
	goto T1070;}
	goto T1066;
T1066:;
	princ_str(");",VV[10]);
	{register object V300;
	object V301;
	V300= (V254);
	V301= CMPcar((V300));
	goto T1090;
T1090:;
	if(!(((V300))==Cnil)){
	goto T1091;}
	goto T1086;
	goto T1091;
T1091:;
	(void)((*(LnkLI113))((V301)));
	V300= CMPcdr((V300));
	V301= CMPcar((V300));
	goto T1090;}
	goto T1086;
T1086:;
	if(((V255))==Cnil){
	goto T1101;}
	if(((V254))==Cnil){
	goto T1104;}
	princ_str("\n	vs_base += ",VV[10]);
	V302 = CMPmake_fixnum((long)length((V254)));
	(void)((*(LnkLI90))(V302));
	princ_char(59,VV[10]);
	goto T1104;
T1104:;
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	{register object V303;
	V303= (V255);
	goto T1112;
T1112:;
	if(!(((V303))==Cnil)){
	goto T1113;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1110;
	goto T1113;
T1113:;
	{object V304;
	(VV[57]->s.s_dbind)= number_plus((VV[57]->s.s_dbind),small_fixnum(1));
	V304= make_cons((VV[57]->s.s_dbind),Cnil);
	V259= make_cons((V304),(V259));}
	princ_str("\n	if(vs_base>=vs_top){vs_top=sup;",VV[10]);
	(CMPcar((V259)))->c.c_cdr = Ct;
	(void)(CMPcar((V259)));
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI90))(CMPcar(CMPcar((V259)))));
	princ_char(59,VV[10]);
	princ_char(125,VV[10]);
	(void)((*(LnkLI113))(CMPcaar((V303))));
	if((CMPcaddar((V303)))==Cnil){
	goto T1131;}
	(void)((*(LnkLI115))(CMPcaddar((V303)),Ct));
	goto T1131;
T1131:;
	if((CMPcdr((V303)))==Cnil){
	goto T1134;}
	princ_str("\n	vs_base++;",VV[10]);
	goto T1134;
T1134:;
	V303= CMPcdr((V303));
	goto T1112;}
	goto T1110;
T1110:;
	V259= reverse((V259));
	goto T1101;
T1101:;
	princ_str("\n	vs_top=sup;",VV[10]);
	if(((V255))==Cnil){
	goto T1144;}
	{object V305;
	(VV[57]->s.s_dbind)= number_plus((VV[57]->s.s_dbind),small_fixnum(1));
	V305= make_cons((VV[57]->s.s_dbind),Cnil);
	((V305))->c.c_cdr = Ct;
	princ_str("goto T",VV[10]);
	(void)((*(LnkLI90))(CMPcar((V305))));
	princ_char(59,VV[10]);
	{register object V306;
	register object V307;
	V306= (V255);
	V307= CMPcar((V306));
	goto T1158;
T1158:;
	if(!(((V306))==Cnil)){
	goto T1159;}
	goto T1154;
	goto T1159;
T1159:;
	if((CMPcdr(CMPcar((V259))))==Cnil){
	goto T1163;}
	princ_str("\n	goto T",VV[10]);
	(void)((*(LnkLI90))(CMPcar(CMPcar((V259)))));
	princ_char(59,VV[10]);
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI90))(CMPcar(CMPcar((V259)))));
	princ_str(":;",VV[10]);
	goto T1163;
T1163:;
	{object V308;
	V308= CMPcar((V259));
	V259= CMPcdr((V259));}
	(void)((*(LnkLI116))(CMPcar((V307)),CMPcadr((V307))));
	if((CMPcaddr((V307)))==Cnil){
	goto T1178;}
	(void)((*(LnkLI115))(CMPcaddr((V307)),Cnil));
	goto T1178;
T1178:;
	V306= CMPcdr((V306));
	V307= CMPcar((V306));
	goto T1158;}
	goto T1154;
T1154:;
	if((CMPcdr((V305)))==Cnil){
	goto T1144;}
	princ_str("\n	goto T",VV[10]);
	(void)((*(LnkLI90))(CMPcar((V305))));
	princ_char(59,VV[10]);
	princ_str("\nT",VV[10]);
	(void)((*(LnkLI90))(CMPcar((V305))));
	princ_str(":;",VV[10]);}
	goto T1144;
T1144:;
	if(((V256))==Cnil){
	goto T1195;}
	(void)((*(LnkLI113))((V256)));
	goto T1195;
T1195:;
	{register object V309;
	register object V310;
	V309= (V257);
	V310= CMPcar((V309));
	goto T1202;
T1202:;
	if(!(((V309))==Cnil)){
	goto T1203;}
	goto T1198;
	goto T1203;
T1203:;
	if(!((CMPcaaddr((V310)))==(VV[61]))){
	goto T1209;}
	if((CMPcaddr(CMPcaddr((V310))))!=Cnil){
	goto T1209;}
	(void)((*(LnkLI113))(CMPcadr((V310))));
	goto T1207;
	goto T1209;
T1209:;
	princ_str("\n	if(",VV[10]);
	(void)((*(LnkLI119))(STREF(object,CMPcadddr((V310)),8)));
	princ_str("==Cnil){",VV[10]);
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	V311= (*(LnkLI116))(CMPcadr((V310)),CMPcaddr((V310)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	princ_str("\n	}else{",VV[10]);
	(void)((*(LnkLI113))(CMPcadr((V310))));
	princ_char(125,VV[10]);
	goto T1207;
T1207:;
	if((STREF(object,CMPcadddr((V310)),4))==(VV[40])){
	goto T1223;}
	(void)((*(LnkLI113))(CMPcadddr((V310))));
	goto T1223;
T1223:;
	V309= CMPcdr((V309));
	V310= CMPcar((V309));
	goto T1202;}
	goto T1198;
T1198:;
	base[10]= (V253);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk117)();
	vs_top=sup;
	if((base[9])==Cnil){
	goto T1234;}
	princ_str("\n	}",VV[10]);
	{object V312 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR14(V312)}
	goto T1234;
T1234:;
	{object V313 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR14(V313)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NEED-TO-SET-VS-POINTERS	*/

static object LI17(V315)

object V315;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if((VV[55]->s.s_dbind)!=Cnil){
	{object V316 = (VV[55]->s.s_dbind);
	VMR15(V316)}}
	if((VV[56]->s.s_dbind)!=Cnil){
	{object V317 = (VV[56]->s.s_dbind);
	VMR15(V317)}}{object V318;
	V318= CMPcadr((V315));
	if(V318==Cnil)goto T1237;
	{object V319 = V318;
	VMR15(V319)}
	goto T1237;
T1237:;}{object V320;
	V320= CMPcaddr((V315));
	if(V320==Cnil)goto T1239;
	{object V321 = V320;
	VMR15(V321)}
	goto T1239;
T1239:;}
	{object V322 = CMPcadddr((V315));
	VMR15(V322)}
	return Cnil;
}
/*	local entry for function C1DM	*/

static object LI18(V326,V327,V328)

object V326;register object V327;register object V328;
{	 VMB16 VMS16 VMV16
	bds_check;
	goto TTL;
TTL:;
	{object V329;
	object V330;
	object V331;
	object V332;
	register object V333;
	register object V334;
	register object V335;
	object V336;
	object V337;
	bds_bind(VV[53],(VV[53]->s.s_dbind));
	V329= Cnil;
	V330= Cnil;
	V331= (VV[31]->s.s_dbind);
	bds_bind(VV[62],Cnil);
	bds_bind(VV[63],(VFUN_NARGS=0,(*(LnkLI95))()));
	bds_bind(VV[64],Cnil);
	V332= Cnil;
	V333= Cnil;
	V334= Cnil;
	V335= Cnil;
	V336= Cnil;
	V337= Cnil;
	base[4]= (V328);
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk97)();
	if(vs_base<vs_top){
	V328= vs_base[0];
	vs_base++;
	}else{
	V328= Cnil;}
	if(vs_base<vs_top){
	V333= vs_base[0];
	vs_base++;
	}else{
	V333= Cnil;}
	if(vs_base<vs_top){
	V335= vs_base[0];
	vs_base++;
	}else{
	V335= Cnil;}
	if(vs_base<vs_top){
	V334= vs_base[0];
	vs_base++;
	}else{
	V334= Cnil;}
	if(vs_base<vs_top){
	V336= vs_base[0];
	vs_base++;
	}else{
	V336= Cnil;}
	if(vs_base<vs_top){
	V332= vs_base[0];
	}else{
	V332= Cnil;}
	vs_top=sup;
	V338= listA(3,VV[33],(V326),(V328));
	V328= make_cons(/* INLINE-ARGS */V338,Cnil);
	(void)((*(LnkLI98))((V333)));
	if(!(type_of((V327))==t_cons||((V327))==Cnil)){
	goto T1258;}
	if(!((CMPcar((V327)))==(VV[65]))){
	goto T1258;}
	{object V339;
	V339= CMPcadr((V327));
	(VV[62]->s.s_dbind)= make_cons((V339),(VV[62]->s.s_dbind));}
	V329= (*(LnkLI99))(CMPcadr((V327)),(V333),(V334),(V335));
	(VV[64]->s.s_dbind)= make_cons(V329,(VV[64]->s.s_dbind));
	(VV[30]->s.s_dbind)= make_cons(V329,(VV[30]->s.s_dbind));
	V327= CMPcddr((V327));
	goto T1258;
T1258:;
	{register object V342;
	if(type_of((V327))==t_cons||((V327))==Cnil){
	goto T1275;}
	V342= Cnil;
	goto T1274;
	goto T1275;
T1275:;
	{register object V343;
	V343= (V327);
	goto T1278;
T1278:;
	if(type_of((V343))==t_cons){
	goto T1279;}
	V342= Cnil;
	goto T1274;
	goto T1279;
T1279:;
	if(!((VV[66])==(CMPcar((V343))))){
	goto T1283;}
	V342= (V343);
	goto T1274;
	goto T1283;
T1283:;
	V343= CMPcdr((V343));
	goto T1278;}
	goto T1274;
T1274:;
	if(((V342))==Cnil){
	goto T1273;}
	{object V344;
	V344= CMPcadr((V342));
	(VV[62]->s.s_dbind)= make_cons((V344),(VV[62]->s.s_dbind));}
	V330= (*(LnkLI99))(CMPcadr((V342)),(V333),(V334),(V335));
	(VV[64]->s.s_dbind)= make_cons(V330,(VV[64]->s.s_dbind));
	(VV[30]->s.s_dbind)= make_cons(V330,(VV[30]->s.s_dbind));
	base[4]= (V327);
	base[5]= (V342);
	vs_top=(vs_base=base+4)+2;
	Lldiff();
	vs_top=sup;
	V347= vs_base[0];
	V327= append(V347,CMPcddr((V342)));}
	goto T1273;
T1273:;
	base[4]= (V327);
	base[5]= (V333);
	base[6]= (V334);
	base[7]= (V335);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk120)();
	if(vs_base<vs_top){
	V327= vs_base[0];
	vs_base++;
	}else{
	V327= Cnil;}
	if(vs_base<vs_top){
	V337= vs_base[0];
	}else{
	V337= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI105))((VV[62]->s.s_dbind),(V335),(V334)));
	V328= (*(LnkLI106))((V336),(V328));{object V348;
	V348= (VV[63]->s.s_dbind);
	(void)((*(LnkLI104))(V348,CMPcadr((V328))));}
	{object V349;
	V349= (eql((V331),(VV[31]->s.s_dbind))?Ct:Cnil);
	if(((V349))==Cnil){
	goto T1317;}
	goto T1314;
	goto T1317;
T1317:;
	V350= Ct;
	STSET(object,(VV[63]->s.s_dbind),16, Ct);
	(void)(Ct);
	(void)(sputprop((V326),VV[67],Ct));}
	goto T1314;
T1314:;
	{register object V351;
	register object V352;
	V351= (VV[64]->s.s_dbind);
	V352= CMPcar((V351));
	goto T1324;
T1324:;
	if(!(((V351))==Cnil)){
	goto T1325;}
	goto T1320;
	goto T1325;
T1325:;
	(void)((*(LnkLI107))((V352)));
	V351= CMPcdr((V351));
	V352= CMPcar((V351));
	goto T1324;}
	goto T1320;
T1320:;
	{object V353 = list(7,(V332),(V337),(V329),(V330),(V327),(V328),(VV[63]->s.s_dbind));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR16(V353)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C1DM-VL	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{register object V354;
	register object V355;
	register object V356;
	register object V357;
	V354=(base[0]);
	V355=(base[1]);
	V356=(base[2]);
	V357=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V358;
	object V359;
	object V360;
	object V361;
	object V362;
	object V363;
	object V364;
	object V365;
	object V366;
	object V367;
	object V368;
	object V369;
	object V370;
	object V371;
	V358= Cnil;
	V359= Cnil;
	V360= Cnil;
	V361= Cnil;
	V362= Cnil;
	V363= Cnil;
	V364= Cnil;
	V365= Cnil;
	V366= Cnil;
	V367= Cnil;
	V368= Cnil;
	V369= Cnil;
	V370= small_fixnum(0);
	V371= Cnil;
	goto T1336;
T1336:;
	if(type_of((V354))==t_cons){
	goto T1337;}
	if(((V354))==Cnil){
	goto T1340;}
	if(((V359))==Cnil){
	goto T1343;}
	base[4]= VV[68];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	goto T1343;
T1343:;
	base[4]= (V354);
	base[5]= (V355);
	base[6]= (V356);
	base[7]= (V357);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk122)();
	vs_top=sup;
	V365= vs_base[0];
	goto T1340;
T1340:;
	V372= reverse((V363));
	V373= reverse((V364));
	V374= reverse((V367));
	base[4]= list(7,/* INLINE-ARGS */V372,/* INLINE-ARGS */V373,(V365),(V366),/* INLINE-ARGS */V374,(V369),reverse((V368)));
	base[5]= (V371);
	vs_top=(vs_base=base+4)+2;
	return;
	goto T1337;
T1337:;
	{register object V375;
	V375= CMPcar((V354));
	if(!(((V375))==(VV[69]))){
	goto T1358;}
	if(((V358))==Cnil){
	goto T1360;}
	base[4]= VV[69];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	goto T1360;
T1360:;
	V358= Ct;
	{object V376;
	V376= CMPcar((V354));
	V354= CMPcdr((V354));
	goto T1355;}
	goto T1358;
T1358:;
	if(((V375))==(VV[68])){
	goto T1369;}
	if(!(((V375))==(VV[70]))){
	goto T1370;}
	goto T1369;
T1369:;
	if(((V359))==Cnil){
	goto T1374;}
	base[4]= (V375);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	goto T1374;
T1374:;
	base[4]= CMPcadr((V354));
	base[5]= (V355);
	base[6]= (V356);
	base[7]= (V357);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk122)();
	vs_top=sup;
	V365= vs_base[0];
	V359= Ct;
	V358= Ct;
	V354= CMPcddr((V354));
	if(!(((V375))==(VV[70]))){
	goto T1355;}
	V371= (V370);
	goto T1355;
	goto T1370;
T1370:;
	if(!(((V375))==(VV[71]))){
	goto T1394;}
	if(((V360))==Cnil){
	goto T1396;}
	base[4]= VV[71];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	goto T1396;
T1396:;
	V360= Ct;
	V359= Ct;
	V358= Ct;
	V366= Ct;
	{object V377;
	V377= CMPcar((V354));
	V354= CMPcdr((V354));
	goto T1355;}
	goto T1394;
T1394:;
	if(!(((V375))==(VV[72]))){
	goto T1412;}
	if(((V360))==Cnil){
	goto T1415;}
	if(((V361))==Cnil){
	goto T1414;}
	goto T1415;
T1415:;
	base[4]= VV[72];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	goto T1414;
T1414:;
	V361= Ct;
	V369= Ct;
	{object V378;
	V378= CMPcar((V354));
	V354= CMPcdr((V354));
	goto T1355;}
	goto T1412;
T1412:;
	if(!(((V375))==(VV[73]))){
	goto T1428;}
	if(((V362))==Cnil){
	goto T1430;}
	base[4]= VV[73];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	goto T1430;
T1430:;
	V362= Ct;
	V361= Ct;
	V360= Ct;
	V359= Ct;
	V358= Ct;
	{object V379;
	V379= CMPcar((V354));
	V354= CMPcdr((V354));
	goto T1355;}
	goto T1428;
T1428:;
	if(((V362))==Cnil){
	goto T1448;}
	{object V380;
	object V381;
	V380= Cnil;
	V381= Cnil;
	if(!(type_of((V375))==t_symbol)){
	goto T1453;}
	V380= (V375);
	V381= (*(LnkLI123))();
	goto T1451;
	goto T1453;
T1453:;
	V380= CMPcar((V375));
	if(!((CMPcdr((V375)))==Cnil)){
	goto T1461;}
	V381= (*(LnkLI123))();
	goto T1451;
	goto T1461;
T1461:;
	V381= (*(LnkLI101))(CMPcadr((V375)),(VV[63]->s.s_dbind));
	goto T1451;
T1451:;
	{object V382;
	base[5]= (V380);
	base[6]= (V355);
	base[7]= (V356);
	base[8]= (V357);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk122)();
	vs_top=sup;
	V383= vs_base[0];
	V382= list(2,V383,(V381));
	V368= make_cons((V382),(V368));}}
	{object V384;
	V384= CMPcar((V354));
	V354= CMPcdr((V354));
	goto T1355;}
	goto T1448;
T1448:;
	if(((V360))==Cnil){
	goto T1476;}
	{object V385;
	object V386;
	object V387;
	object V388;
	V385= Cnil;
	V386= Cnil;
	V387= Cnil;
	V388= Cnil;
	if(!(type_of((V375))==t_symbol)){
	goto T1481;}
	V385= (V375);
	base[4]= coerce_to_string((V375));
	base[5]= VV[38];
	vs_top=(vs_base=base+4)+2;
	Lintern();
	vs_top=sup;
	V386= vs_base[0];
	V387= (*(LnkLI123))();
	goto T1479;
	goto T1481;
T1481:;
	if(!(type_of(CMPcar((V375)))==t_symbol)){
	goto T1492;}
	V385= CMPcar((V375));
	base[4]= coerce_to_string(CMPcar((V375)));
	base[5]= VV[38];
	vs_top=(vs_base=base+4)+2;
	Lintern();
	vs_top=sup;
	V386= vs_base[0];
	goto T1490;
	goto T1492;
T1492:;
	V385= CMPcadar((V375));
	V386= CMPcaar((V375));
	goto T1490;
T1490:;
	if(!((CMPcdr((V375)))==Cnil)){
	goto T1503;}
	V387= (*(LnkLI123))();
	goto T1479;
	goto T1503;
T1503:;
	V387= (*(LnkLI101))(CMPcadr((V375)),(VV[63]->s.s_dbind));
	if((CMPcddr((V375)))==Cnil){
	goto T1479;}
	V388= CMPcaddr((V375));
	goto T1479;
T1479:;
	{object V389;
	base[5]= (V385);
	base[6]= (V355);
	base[7]= (V356);
	base[8]= (V357);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk122)();
	vs_top=sup;
	V390= vs_base[0];
	if(((V388))==Cnil){
	goto T1519;}
	base[5]= (V388);
	base[6]= (V355);
	base[7]= (V356);
	base[8]= (V357);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk122)();
	vs_top=sup;
	V391= vs_base[0];
	goto T1517;
	goto T1519;
T1519:;
	V391= Cnil;
	goto T1517;
T1517:;
	V389= list(4,(V386),V390,(V387),V391);
	V367= make_cons((V389),(V367));}}
	{object V392;
	V392= CMPcar((V354));
	V354= CMPcdr((V354));
	goto T1355;}
	goto T1476;
T1476:;
	if(((V358))==Cnil){
	goto T1530;}
	{object V393;
	object V394;
	object V395;
	V393= Cnil;
	V394= Cnil;
	V395= Cnil;
	if(!(type_of((V375))==t_symbol)){
	goto T1535;}
	V393= (V375);
	V394= (*(LnkLI123))();
	goto T1533;
	goto T1535;
T1535:;
	V393= CMPcar((V375));
	if(!((CMPcdr((V375)))==Cnil)){
	goto T1543;}
	V394= (*(LnkLI123))();
	goto T1533;
	goto T1543;
T1543:;
	V394= (*(LnkLI101))(CMPcadr((V375)),(VV[63]->s.s_dbind));
	if((CMPcddr((V375)))==Cnil){
	goto T1533;}
	V395= CMPcaddr((V375));
	goto T1533;
T1533:;
	{object V396;
	base[5]= (V393);
	base[6]= (V355);
	base[7]= (V356);
	base[8]= (V357);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk122)();
	vs_top=sup;
	V397= vs_base[0];
	if(((V395))==Cnil){
	goto T1559;}
	base[5]= (V395);
	base[6]= (V355);
	base[7]= (V356);
	base[8]= (V357);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk122)();
	vs_top=sup;
	V398= vs_base[0];
	goto T1557;
	goto T1559;
T1559:;
	V398= Cnil;
	goto T1557;
T1557:;
	V396= list(3,V397,(V394),V398);
	V364= make_cons((V396),(V364));}}
	{object V399;
	V399= CMPcar((V354));
	V354= CMPcdr((V354));}
	V370= number_plus((V370),small_fixnum(1));
	goto T1355;
	goto T1530;
T1530:;
	{object V400;
	base[5]= (V375);
	base[6]= (V355);
	base[7]= (V356);
	base[8]= (V357);
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk122)();
	vs_top=sup;
	V400= vs_base[0];
	V363= make_cons((V400),(V363));}
	{object V401;
	V401= CMPcar((V354));
	V354= CMPcdr((V354));}
	V370= number_plus((V370),small_fixnum(1));}
	goto T1355;
T1355:;
	goto T1336;}
	}
}
/*	function definition for C1DM-V	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{register object V402;
	object V403;
	object V404;
	object V405;
	V402=(base[0]);
	V403=(base[1]);
	V404=(base[2]);
	V405=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V402))==t_symbol)){
	goto T1586;}
	(VV[62]->s.s_dbind)= make_cons(V402,(VV[62]->s.s_dbind));
	V402= (*(LnkLI99))((V402),(V403),(V404),(V405));
	(VV[30]->s.s_dbind)= make_cons(V402,(VV[30]->s.s_dbind));
	(VV[64]->s.s_dbind)= make_cons(V402,(VV[64]->s.s_dbind));
	base[4]= (V402);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1586;
T1586:;
	base[4]= (V402);
	base[5]= (V403);
	base[6]= (V404);
	base[7]= (V405);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk120)();
	return;
	}
}
/*	local entry for function C1DM-BAD-KEY	*/

static object LI21(V410)

object V410;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V411 = (VFUN_NARGS=2,(*(LnkLI96))(VV[74],(V410)));
	VMR19(V411)}
	return Cnil;
}
/*	macro definition for MAYBE-WT-C2DM-BIND-VL	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	vs_top=sup;
	{object V412=base[0]->c.c_cdr;
	base[2]= (V412->c.c_car);
	V412=V412->c.c_cdr;
	base[3]= (V412->c.c_car);
	V412=V412->c.c_cdr;
	base[4]= (V412->c.c_car);
	V412=V412->c.c_cdr;
	base[5]= (V412->c.c_car);}
	V413= list(3,VV[78],base[2],base[3]);
	base[6]= list(4,VV[75],VV[76],base[4],list(4,VV[75],VV[77],/* INLINE-ARGS */V413,list(4,VV[79],VV[80],VV[81],base[5])));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	function definition for C2DM	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{register object V414;
	register object V415;
	object V416;
	object V417;
	V414=(base[0]);
	V415=(base[1]);
	V416=(base[2]);
	V417=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V418;
	(VV[54]->s.s_dbind)= number_plus((VV[54]->s.s_dbind),small_fixnum(1));
	V418= (VV[54]->s.s_dbind);
	if(((VV[55]->s.s_dbind))!=Cnil){
	goto T1603;}
	if(((VV[56]->s.s_dbind))==Cnil){
	goto T1602;}
	goto T1603;
T1603:;
	princ_str("\n	check_arg(2);",VV[10]);
	goto T1602;
T1602:;
	if(((V414))==Cnil){
	goto T1610;}
	V419= (*(LnkLI112))();
	V420= Ct;
	STSET(object,(V414),8, /* INLINE-ARGS */V419);
	(void)(/* INLINE-ARGS */V419);
	goto T1608;
	goto T1610;
T1610:;
	(void)((*(LnkLI112))());
	goto T1608;
T1608:;
	if(((V415))==Cnil){
	goto T1614;}
	V421= (*(LnkLI112))();
	V422= Ct;
	STSET(object,(V415),8, /* INLINE-ARGS */V421);
	(void)(/* INLINE-ARGS */V421);
	goto T1612;
	goto T1614;
T1614:;
	(void)((*(LnkLI112))());
	goto T1612;
T1612:;
	(void)((*(LnkLI124))((V416)));
	princ_str("\n	vs_top=sup;",VV[10]);
	if(((V414))==Cnil){
	goto T1619;}
	(void)((*(LnkLI113))((V414)));
	goto T1619;
T1619:;
	if(((V415))==Cnil){
	goto T1622;}
	(void)((*(LnkLI113))((V415)));
	goto T1622;
T1622:;
	{object V423;
	base[5]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+5)+1;
	Lfile_position();
	vs_top=sup;
	V423= vs_base[0];
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI90))((V418)));
	princ_str("=base[0]->c.c_cdr;",VV[10]);
	{object V424;
	base[5]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+5)+1;
	Lfile_position();
	vs_top=sup;
	V424= vs_base[0];
	base[5]= (V416);
	base[6]= (V418);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk78)();
	vs_top=sup;
	base[5]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+5)+1;
	Lfile_position();
	vs_top=sup;
	V425= vs_base[0];
	if(!(eql((V424),V425))){
	goto T1638;}
	base[5]= (VV[10]->s.s_dbind);
	base[6]= (V423);
	vs_top=(vs_base=base+5)+2;
	Lfile_position();
	vs_top=sup;
	goto T1625;
	goto T1638;
T1638:;
	princ_char(125,VV[10]);}}
	goto T1625;
T1625:;
	base[5]= (V417);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk117)();
	return;}
	}
}
/*	local entry for function C2DM-RESERVE-VL	*/

static object LI24(V427)

object V427;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{register object V428;
	object V429;
	V428= CMPcar((V427));
	V429= CMPcar((V428));
	goto T1650;
T1650:;
	if(!(((V428))==Cnil)){
	goto T1651;}
	goto T1646;
	goto T1651;
T1651:;
	(void)((*(LnkLI125))((V429)));
	V428= CMPcdr((V428));
	V429= CMPcar((V428));
	goto T1650;}
	goto T1646;
T1646:;
	{register object V430;
	register object V431;
	V430= CMPcadr((V427));
	V431= CMPcar((V430));
	goto T1665;
T1665:;
	if(!(((V430))==Cnil)){
	goto T1666;}
	goto T1661;
	goto T1666;
T1666:;
	(void)((*(LnkLI125))(CMPcar((V431))));
	if((CMPcaddr((V431)))==Cnil){
	goto T1671;}
	(void)((*(LnkLI125))(CMPcaddr((V431))));
	goto T1671;
T1671:;
	V430= CMPcdr((V430));
	V431= CMPcar((V430));
	goto T1665;}
	goto T1661;
T1661:;
	if((CMPcaddr((V427)))==Cnil){
	goto T1679;}
	(void)((*(LnkLI125))(CMPcaddr((V427))));
	goto T1679;
T1679:;
	{register object V432;
	register object V433;
	V432= CMPcar(CMPcddddr((V427)));
	V433= CMPcar((V432));
	goto T1686;
T1686:;
	if(!(((V432))==Cnil)){
	goto T1687;}
	goto T1682;
	goto T1687;
T1687:;
	(void)((*(LnkLI125))(CMPcadr((V433))));
	if((CMPcadddr((V433)))==Cnil){
	goto T1692;}
	(void)((*(LnkLI125))(CMPcadddr((V433))));
	goto T1692;
T1692:;
	V432= CMPcdr((V432));
	V433= CMPcar((V432));
	goto T1686;}
	goto T1682;
T1682:;
	{register object V434;
	object V435;
	V434= CMPcaddr(CMPcddddr((V427)));
	V435= CMPcar((V434));
	goto T1703;
T1703:;
	if(!(((V434))==Cnil)){
	goto T1704;}
	{object V436 = Cnil;
	VMR22(V436)}
	goto T1704;
T1704:;
	(void)((*(LnkLI125))(CMPcar((V435))));
	V434= CMPcdr((V434));
	V435= CMPcar((V434));
	goto T1703;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2DM-RESERVE-V	*/

static object LI25(V438)

object V438;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	if(!(type_of((V438))==t_cons)){
	goto T1715;}
	{object V439 = (*(LnkLI124))((V438));
	VMR23(V439)}
	goto T1715;
T1715:;
	V440= (*(LnkLI112))();
	V441= Ct;
	STSET(object,(V438),8, /* INLINE-ARGS */V440);
	{object V442 = /* INLINE-ARGS */V440;
	VMR23(V442)}
	return Cnil;
}
/*	macro definition for WT-OR-REPORT-REF	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	vs_top=sup;
	{object V443=base[0]->c.c_cdr;
	base[2]= V443;}
	base[3]= list(3,VV[82],VV[83],make_cons(VV[84],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for C2DM-BIND-VL	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	bds_check;
	{object V444;
	register object V445;
	V444=(base[0]);
	V445=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V446;
	object V447;
	object V448;
	object V449;
	object V450;
	object V451;
	object V452;
	V446= CMPcar((V444));
	V447= CMPcadr((V444));
	V448= CMPcaddr((V444));
	V449= CMPcadddr((V444));
	V450= CMPcar(CMPcddddr((V444)));
	V451= CMPcadr(CMPcddddr((V444)));
	V452= CMPcaddr(CMPcddddr((V444)));
	{register object V453;
	V453= (V446);
	goto T1726;
T1726:;
	if(!(((V453))==Cnil)){
	goto T1727;}
	goto T1724;
	goto T1727;
T1727:;
	if(((VV[55]->s.s_dbind))!=Cnil){
	goto T1732;}
	if(((VV[56]->s.s_dbind))==Cnil){
	goto T1731;}
	goto T1732;
T1732:;
	princ_str("\n	if(endp(V",VV[10]);
	(void)((*(LnkLI90))((V445)));
	princ_str("))invalid_macro_call();",VV[10]);
	goto T1731;
T1731:;
	V454= CMPcar((V453));
	V455= list(2,VV[85],(V445));
	(void)((*(LnkLI126))(/* INLINE-ARGS */V454,/* INLINE-ARGS */V455));
	if((CMPcdr((V453)))!=Cnil){
	goto T1741;}
	if(((V447))!=Cnil){
	goto T1741;}
	if(((V448))!=Cnil){
	goto T1741;}
	if(((V449))!=Cnil){
	goto T1741;}
	if(((VV[55]->s.s_dbind))!=Cnil){
	goto T1741;}
	if(((VV[56]->s.s_dbind))==Cnil){
	goto T1740;}
	goto T1741;
T1741:;
	princ_str("\n	V",VV[10]);
	(void)((*(LnkLI90))((V445)));
	princ_str("=V",VV[10]);
	(void)((*(LnkLI90))((V445)));
	princ_str("->c.c_cdr;",VV[10]);
	goto T1740;
T1740:;
	V453= CMPcdr((V453));
	goto T1726;}
	goto T1724;
T1724:;
	{register object V456;
	V456= (V447);
	goto T1763;
T1763:;
	if(!(((V456))==Cnil)){
	goto T1764;}
	goto T1761;
	goto T1764;
T1764:;
	{register object V457;
	V457= CMPcar((V456));
	princ_str("\n	if(endp(V",VV[10]);
	(void)((*(LnkLI90))((V445)));
	princ_str(")){",VV[10]);
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	(void)((*(LnkLI127))(CMPcar((V457)),CMPcadr((V457))));
	if((CMPcaddr((V457)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1774;}
	V458= (*(LnkLI126))(CMPcaddr((V457)),Cnil);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1774;
T1774:;
	princ_str("\n	} else {",VV[10]);
	V459= CMPcar((V457));
	V460= list(2,VV[85],(V445));
	(void)((*(LnkLI126))(/* INLINE-ARGS */V459,/* INLINE-ARGS */V460));
	if((CMPcaddr((V457)))==Cnil){
	goto T1768;}
	(void)((*(LnkLI126))(CMPcaddr((V457)),Ct));}
	goto T1768;
T1768:;
	if((CMPcdr((V456)))!=Cnil){
	goto T1784;}
	if(((V448))!=Cnil){
	goto T1784;}
	if(((V449))!=Cnil){
	goto T1784;}
	if(((VV[55]->s.s_dbind))!=Cnil){
	goto T1784;}
	if(((VV[56]->s.s_dbind))==Cnil){
	goto T1783;}
	goto T1784;
T1784:;
	princ_str("\n	V",VV[10]);
	(void)((*(LnkLI90))((V445)));
	princ_str("=V",VV[10]);
	(void)((*(LnkLI90))((V445)));
	princ_str("->c.c_cdr;",VV[10]);
	goto T1783;
T1783:;
	princ_str("\n	}",VV[10]);
	V456= CMPcdr((V456));
	goto T1763;}
	goto T1761;
T1761:;
	if(((V448))==Cnil){
	goto T1804;}
	V461= list(2,VV[86],(V445));
	(void)((*(LnkLI126))((V448),/* INLINE-ARGS */V461));
	goto T1804;
T1804:;
	{object V462;
	register object V463;
	V462= (V450);
	V463= CMPcar((V462));
	goto T1811;
T1811:;
	if(!(((V462))==Cnil)){
	goto T1812;}
	goto T1807;
	goto T1812;
T1812:;
	{object V464;
	(VV[54]->s.s_dbind)= number_plus((VV[54]->s.s_dbind),small_fixnum(1));
	V464= (VV[54]->s.s_dbind);
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI90))((V464)));
	princ_str("=getf(V",VV[10]);
	(void)((*(LnkLI90))((V445)));
	princ_str(",VV[",VV[10]);
	V465= (*(LnkLI118))(CMPcar((V463)));
	(void)((*(LnkLI90))(/* INLINE-ARGS */V465));
	princ_str("],OBJNULL);",VV[10]);
	princ_str("\n	if(V",VV[10]);
	(void)((*(LnkLI90))((V464)));
	princ_str("==OBJNULL){",VV[10]);
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[52],(VV[52]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	(void)((*(LnkLI127))(CMPcadr((V463)),CMPcaddr((V463))));
	if((CMPcadddr((V463)))==Cnil){
	goto T1833;}
	(void)((*(LnkLI126))(CMPcadddr((V463)),Cnil));
	goto T1833;
T1833:;
	princ_str("\n	} else {",VV[10]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V466= CMPcadr((V463));
	V467= list(2,VV[86],(V464));
	(void)((*(LnkLI126))(/* INLINE-ARGS */V466,/* INLINE-ARGS */V467));
	if((CMPcadddr((V463)))==Cnil){
	goto T1838;}
	(void)((*(LnkLI126))(CMPcadddr((V463)),Ct));
	goto T1838;
T1838:;
	princ_str("\n	}}",VV[10]);}
	V462= CMPcdr((V462));
	V463= CMPcar((V462));
	goto T1811;}
	goto T1807;
T1807:;
	if(((VV[55]->s.s_dbind))!=Cnil){
	goto T1849;}
	if(((VV[56]->s.s_dbind))==Cnil){
	goto T1847;}
	goto T1849;
T1849:;
	if(((V448))!=Cnil){
	goto T1847;}
	if(((V449))!=Cnil){
	goto T1847;}
	princ_str("\n	if(!endp(V",VV[10]);
	(void)((*(LnkLI90))((V445)));
	princ_str("))invalid_macro_call();",VV[10]);
	goto T1847;
T1847:;
	if(((VV[55]->s.s_dbind))!=Cnil){
	goto T1861;}
	if(((VV[56]->s.s_dbind))==Cnil){
	goto T1859;}
	goto T1861;
T1861:;
	if(((V449))==Cnil){
	goto T1859;}
	if(((V451))!=Cnil){
	goto T1859;}
	princ_str("\n	check_other_key(V",VV[10]);
	(void)((*(LnkLI90))((V445)));
	princ_char(44,VV[10]);
	V468 = CMPmake_fixnum((long)length((V450)));
	(void)((*(LnkLI90))(V468));
	{object V469;
	object V470;
	V469= (V450);
	V470= CMPcar((V469));
	goto T1877;
T1877:;
	if(!(((V469))==Cnil)){
	goto T1878;}
	goto T1873;
	goto T1878;
T1878:;
	princ_str("\n	,VV[",VV[10]);
	V471= (*(LnkLI118))(CMPcar((V470)));
	(void)((*(LnkLI90))(/* INLINE-ARGS */V471));
	princ_char(93,VV[10]);
	V469= CMPcdr((V469));
	V470= CMPcar((V469));
	goto T1877;}
	goto T1873;
T1873:;
	princ_str("\n	);",VV[10]);
	goto T1859;
T1859:;
	{object V472;
	object V473;
	V472= (V452);
	V473= CMPcar((V472));
	goto T1895;
T1895:;
	if(!(((V472))==Cnil)){
	goto T1896;}
	base[10]= Cnil;
	vs_top=(vs_base=base+10)+1;
	return;
	goto T1896;
T1896:;
	(void)((*(LnkLI127))(CMPcar((V473)),CMPcadr((V473))));
	V472= CMPcdr((V472));
	V473= CMPcar((V472));
	goto T1895;}}
	}
}
/*	local entry for function C2DM-BIND-LOC	*/

static object LI28(V476,V477)

object V476;object V477;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	if(!(type_of((V476))==t_cons)){
	goto T1907;}
	{object V478;
	(VV[54]->s.s_dbind)= number_plus((VV[54]->s.s_dbind),small_fixnum(1));
	V478= (VV[54]->s.s_dbind);
	{object V479;
	base[0]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lfile_position();
	vs_top=sup;
	V479= vs_base[0];
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI90))((V478)));
	princ_str("= ",VV[10]);
	(void)((*(LnkLI90))((V477)));
	princ_char(59,VV[10]);
	{object V480;
	base[0]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lfile_position();
	vs_top=sup;
	V480= vs_base[0];
	base[0]= (V476);
	base[1]= (V478);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk78)();
	vs_top=sup;
	base[0]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lfile_position();
	vs_top=sup;
	V481= vs_base[0];
	if(!(eql((V480),V481))){
	goto T1925;}
	base[0]= (VV[10]->s.s_dbind);
	base[1]= (V479);
	vs_top=(vs_base=base+0)+2;
	Lfile_position();
	vs_top=sup;
	{object V482 = vs_base[0];
	VMR26(V482)}
	goto T1925;
T1925:;
	princ_char(125,VV[10]);
	{object V483 = Cnil;
	VMR26(V483)}}}}
	goto T1907;
T1907:;
	{object V484 = (*(LnkLI115))((V476),(V477));
	VMR26(V484)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2DM-BIND-INIT	*/

static object LI29(V487,V488)

object V487;object V488;
{	 VMB27 VMS27 VMV27
	bds_check;
	goto TTL;
TTL:;
	if(!(type_of((V487))==t_cons)){
	goto T1933;}
	{object V489;
	object V490;
	bds_bind(VV[53],(VV[53]->s.s_dbind));
	bds_bind(VV[87],small_fixnum(0));
	(VV[54]->s.s_dbind)= number_plus((VV[54]->s.s_dbind),small_fixnum(1));
	V489= (VV[54]->s.s_dbind);
	V491= make_cons((V488),Cnil);
	V492= (VFUN_NARGS=2,(*(LnkLI128))(/* INLINE-ARGS */V491,VV[88]));
	V490= CMPcar(/* INLINE-ARGS */V492);
	{object V493;
	base[4]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+4)+1;
	Lfile_position();
	vs_top=sup;
	V493= vs_base[0];
	princ_str("\n	{object V",VV[10]);
	(void)((*(LnkLI90))((V489)));
	princ_str("= ",VV[10]);
	(void)((*(LnkLI90))((V490)));
	princ_char(59,VV[10]);
	{object V494;
	base[4]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+4)+1;
	Lfile_position();
	vs_top=sup;
	V494= vs_base[0];
	base[4]= (V487);
	base[5]= (V489);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk78)();
	vs_top=sup;
	base[4]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+4)+1;
	Lfile_position();
	vs_top=sup;
	V495= vs_base[0];
	if(!(eql((V494),V495))){
	goto T1953;}
	base[4]= (VV[10]->s.s_dbind);
	base[5]= (V493);
	vs_top=(vs_base=base+4)+2;
	Lfile_position();
	vs_top=sup;
	goto T1938;
	goto T1953;
T1953:;
	princ_char(125,VV[10]);}}
	goto T1938;
T1938:;
	{object V496 = (*(LnkLI129))();
	bds_unwind1;
	bds_unwind1;
	VMR27(V496)}}
	goto T1933;
T1933:;
	{object V497 = (*(LnkLI116))((V487),(V488));
	VMR27(V497)}
	base[0]=base[0];
	return Cnil;
}
/*	local function DO-DECL	*/

static void L16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V498;
	V498=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V499;
	V499= (*(LnkLI130))((V498));
	if(((V499))==Cnil){
	goto T1962;}
	{object V500;
	(VV[54]->s.s_dbind)= number_plus((VV[54]->s.s_dbind),small_fixnum(1));
	V500= (VV[54]->s.s_dbind);
	V501= Ct;
	STSET(object,(V498),4, (V499));
	(void)((V499));
	V502= Ct;
	STSET(object,(V498),16, (V500));
	(void)((V500));
	princ_str("\n	",VV[10]);
	if((base0[9])!=Cnil){
	goto T1969;}
	princ_char(123,VV[10]);
	base0[9]= Ct;
	goto T1969;
T1969:;
	base[1]= (*(LnkLI131))((V498));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1962;
T1962:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function DO-DECL	*/

static void L14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V503;
	V503=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V504;
	V504= (*(LnkLI130))((V503));
	if(((V504))==Cnil){
	goto T1977;}
	{object V505;
	(VV[54]->s.s_dbind)= number_plus((VV[54]->s.s_dbind),small_fixnum(1));
	V505= (VV[54]->s.s_dbind);
	V506= Ct;
	STSET(object,(V503),4, (V504));
	(void)((V504));
	V507= Ct;
	STSET(object,(V503),16, (V505));
	(void)((V505));
	princ_str("\n	",VV[10]);
	if((base0[7])!=Cnil){
	goto T1984;}
	princ_char(123,VV[10]);
	base0[7]= Ct;
	goto T1984;
T1984:;
	base[1]= (*(LnkLI131))((V503));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1977;
T1977:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[131],(void **)(void *)&LnkLI131,1,first,ap);va_end(ap);return V1;} /* WT-VAR-DECL */
static object  LnkTLI130(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[130],(void **)(void *)&LnkLI130,1,first,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI129(){return call_proc0(VV[129],(void **)(void *)&LnkLI129);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI128(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[128],(void **)(void *)&LnkLI128,first,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[127],(void **)(void *)&LnkLI127,2,first,ap);va_end(ap);return V1;} /* C2DM-BIND-INIT */
static object  LnkTLI126(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[126],(void **)(void *)&LnkLI126,2,first,ap);va_end(ap);return V1;} /* C2DM-BIND-LOC */
static object  LnkTLI125(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[125],(void **)(void *)&LnkLI125,1,first,ap);va_end(ap);return V1;} /* C2DM-RESERVE-V */
static void LnkT78(){ call_or_link(VV[78],(void **)(void *)&Lnk78);} /* C2DM-BIND-VL */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)(void *)&LnkLI124,1,first,ap);va_end(ap);return V1;} /* C2DM-RESERVE-VL */
static object  LnkTLI123(){return call_proc0(VV[123],(void **)(void *)&LnkLI123);} /* C1NIL */
static void LnkT122(){ call_or_link(VV[122],(void **)(void *)&Lnk122);} /* C1DM-V */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* DM-BAD-KEY */
static void LnkT120(){ call_or_link(VV[120],(void **)(void *)&Lnk120);} /* C1DM-VL */
static object  LnkTLI119(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[119],(void **)(void *)&LnkLI119,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI118(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[118],(void **)(void *)&LnkLI118,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static void LnkT117(){ call_or_link(VV[117],(void **)(void *)&Lnk117);} /* C2EXPR */
static object  LnkTLI116(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[116],(void **)(void *)&LnkLI116,2,first,ap);va_end(ap);return V1;} /* C2BIND-INIT */
static object  LnkTLI115(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[115],(void **)(void *)&LnkLI115,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI114(){return call_proc0(VV[114],(void **)(void *)&LnkLI114);} /* RESET-TOP */
static object  LnkTLI113(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[113],(void **)(void *)&LnkLI113,1,first,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI112(){return call_proc0(VV[112],(void **)(void *)&LnkLI112);} /* VS-PUSH */
static object  LnkTLI111(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[111],(void **)(void *)&LnkLI111,2,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR-WITHOUT-KEY */
static object  LnkTLI110(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[110],(void **)(void *)&LnkLI110,2,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR-WITH-KEY */
static void LnkT109(){ call_or_link(VV[109],(void **)(void *)&Lnk109);} /* RECORD-ARG-INFO */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[108],(void **)(void *)&LnkLI108,3,first,ap);va_end(ap);return V1;} /* FIX-DOWN-ARGS */
static object  LnkTLI107(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[107],(void **)(void *)&LnkLI107,1,first,ap);va_end(ap);return V1;} /* CHECK-VREF */
static object  LnkTLI106(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[106],(void **)(void *)&LnkLI106,2,first,ap);va_end(ap);return V1;} /* C1DECL-BODY */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[105],(void **)(void *)&LnkLI105,3,first,ap);va_end(ap);return V1;} /* CHECK-VDECL */
static object  LnkTLI104(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[104],(void **)(void *)&LnkLI104,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[103],(void **)(void *)&LnkLI103,first,ap);va_end(ap);return V1;} /* MAKE-VAR */
static object  LnkTLI102(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[102],(void **)(void *)&LnkLI102,3,first,ap);va_end(ap);return V1;} /* AND-FORM-TYPE */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,2,first,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI100(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[100],(void **)(void *)&LnkLI100,1,first,ap);va_end(ap);return V1;} /* DEFAULT-INIT */
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[99],(void **)(void *)&LnkLI99,4,first,ap);va_end(ap);return V1;} /* C1MAKE-VAR */
static object  LnkTLI98(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[98],(void **)(void *)&LnkLI98,1,first,ap);va_end(ap);return V1;} /* C1ADD-GLOBALS */
static void LnkT97(){ call_or_link(VV[97],(void **)(void *)&Lnk97);} /* C1BODY */
static object  LnkTLI96(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[96],(void **)(void *)&LnkLI96,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI95(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[95],(void **)(void *)&LnkLI95,first,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI94(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[94],(void **)(void *)&LnkLI94,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI93(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[93],(void **)(void *)&LnkLI93,first,ap);va_end(ap);return V1;} /* MAKE-FUN */
static object  LnkTLI92(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[92],(void **)(void *)&LnkLI92,first,ap);va_end(ap);return V1;} /* DELETE */
static object  LnkTLI91(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[91],(void **)(void *)&LnkLI91,1,first,ap);va_end(ap);return V1;} /* WT-H1 */
static object  LnkTLI90(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[90],(void **)(void *)&LnkLI90,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI89(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[89],(void **)(void *)&LnkLI89,1,first,ap);va_end(ap);return V1;} /* C1EXPR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

