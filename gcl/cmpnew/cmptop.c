
#include "cmpinclude.h"
#include "cmptop.h"
void init_cmptop(){do_init(VV);}
/*	function definition for T1EXPR	*/

static void L1()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM1; VC1
	vs_reserve(VM1);
	bds_check;
	{VOL object V1;
	check_arg(1);
	V1=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[0],(V1));
	bds_bind(VV[1],Ct);
	frs_push(FRS_CATCH,VV[2]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;}
	else{
	if(!(type_of((V1))==t_cons)){
	goto T3;}
	{register object V2;
	object V3;
	register object V4;
	V2= car((V1));
	V3= cdr((V1));
	V4= Cnil;
	if(!(type_of((V2))==t_symbol)){
	goto T8;}
	if(!(((V2))==(VV[3]))){
	goto T11;}
	V5= (VFUN_NARGS=1,(*(LnkLI265))(VV[4]));
	frs_pop();
	base[3]= V5;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T11;
T11:;
	if((get((V2),VV[5],Cnil))==Cnil){
	goto T14;}
	if((symbol_value(VV[6]))==Cnil){
	goto T16;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[7],(V1))));
	goto T16;
T16:;
	{object V6;
	base[3]= (V2);
	vs_top=(vs_base=base+3)+1;
	Lmacro_function();
	vs_top=sup;
	V4= vs_base[0];
	if(((V4))==Cnil){
	goto T21;}
	base[3]= cdr((V1));
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	V7= vs_base[0];
	V6= (*(LnkLI267))((V4),(V2),V7);
	goto T19;
	goto T21;
T21:;
	V6= (V1);
	goto T19;
T19:;
	(void)((*(LnkLI268))(Ct,(V6)));
	V8= (*(LnkLI269))((V6));
	frs_pop();
	base[3]= V8;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T14;
T14:;
	V4= get((V2),VV[8],Cnil);
	if(((V4))==Cnil){
	goto T29;}
	if((symbol_value(VV[9]))==Cnil){
	goto T32;}
	(void)((*(LnkLI270))());
	goto T32;
T32:;
	base[3]= (V3);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V4));
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T29;
T29:;
	if((get((V2),VV[10],Cnil))==Cnil){
	goto T37;}
	if((symbol_value(VV[9]))==Cnil){
	goto T39;}
	(void)((*(LnkLI270))());
	goto T39;
T39:;
	base[3]= (*(LnkLI271))((V1));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk272)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T37;
T37:;
	if((get((V2),VV[11],Cnil))==Cnil){
	goto T44;}
	V9= (*(LnkLI273))((V1));
	frs_pop();
	base[3]= V9;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T44;
T44:;
	base[3]= (V2);
	vs_top=(vs_base=base+3)+1;
	Lmacro_function();
	vs_top=sup;
	V4= vs_base[0];
	if(((V4))==Cnil){
	goto T47;}
	{object V10;
	base[3]= cdr((V1));
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	V11= vs_base[0];
	V10= (*(LnkLI267))((V4),(V2),V11);
	base[3]= (V10);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk272)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T47;
T47:;
	V12= (*(LnkLI273))((V1));
	frs_pop();
	base[3]= V12;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T8;
T8:;
	if(!(type_of((V2))==t_cons)){
	goto T56;}
	V13= (*(LnkLI273))((V1));
	frs_pop();
	base[3]= V13;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T56;
T56:;
	V14= (VFUN_NARGS=2,(*(LnkLI265))(VV[12],(V2)));
	frs_pop();
	base[3]= V14;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T3;
T3:;
	frs_pop();
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for DECLARATION-TYPE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V15;
	check_arg(1);
	V15=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(equal((V15),VV[13]))){
	goto T59;}
	base[1]= VV[14];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T59;
T59:;
	if(!(equal((V15),VV[15]))){
	goto T62;}
	base[1]= VV[16];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T62;
T62:;
	base[1]= (V15);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function CTOP-WRITE	*/

static object LI3(V17)

object V17;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	{object V18;
	V18= Cnil;
	bds_bind(VV[17],Cnil);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[20],VV[19]);
	bds_bind(VV[21],Cnil);
	bds_bind(VV[22],small_fixnum(0));
	bds_bind(VV[23],Cnil);
	bds_bind(VV[0],Cnil);
	setq(VV[24],reverse(symbol_value(VV[24])));
	princ_str("\nvoid init_",VV[25]);
	(void)((*(LnkLI274))((V17)));
	princ_str("(){",VV[25]);
	princ_str("do_init(VV);",VV[25]);
	princ_char(125,VV[25]);
	{object V19;
	V19= symbol_value(VV[24]);
	bds_bind(VV[0],car((V19)));
	goto T77;
T77:;
	if(!(endp_prop((V19)))){
	goto T78;}
	bds_unwind1;
	goto T73;
	goto T78;
T78:;
	setq(VV[1],Ct);
	V18= get(car((VV[0]->s.s_dbind)),VV[26],Cnil);
	if(((V18))==Cnil){
	goto T84;}
	base[8]= (V18);
	{object V20;
	V20= cdr((VV[0]->s.s_dbind));
	 vs_top=base+9;
	 while(!endp(V20))
	 {vs_push(car(V20));V20=cdr(V20);}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	vs_top=sup;
	goto T84;
T84:;
	V19= cdr((V19));
	(VV[0]->s.s_dbind)= car((V19));
	goto T77;}
	goto T73;
T73:;
	{object V21;
	V21= symbol_value(VV[24]);
	bds_bind(VV[0],car((V21)));
	goto T99;
T99:;
	if(!(endp_prop((V21)))){
	goto T100;}
	bds_unwind1;
	goto T95;
	goto T100;
T100:;
	setq(VV[1],Ct);
	V18= get(car((VV[0]->s.s_dbind)),VV[27],Cnil);
	if(((V18))==Cnil){
	goto T106;}
	base[8]= (V18);
	{object V22;
	V22= cdr((VV[0]->s.s_dbind));
	 vs_top=base+9;
	 while(!endp(V22))
	 {vs_push(car(V22));V22=cdr(V22);}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	vs_top=sup;
	goto T106;
T106:;
	V21= cdr((V21));
	(VV[0]->s.s_dbind)= car((V21));
	goto T99;}
	goto T95;
T95:;
	{object V23;
	V23= Cnil;
	goto T119;
T119:;
	if(!(endp_prop(symbol_value(VV[28])))){
	goto T121;}
	goto T117;
	goto T121;
T121:;
	V23= car(symbol_value(VV[28]));
	{object V24;
	V24= car(symbol_value(VV[28]));
	setq(VV[28],cdr(symbol_value(VV[28])));}
	{object V25;
	V25= (V23);
	 vs_top=base+7;
	 while(!endp(V25))
	 {vs_push(car(V25));V25=cdr(V25);}
	vs_base=base+7;}
	(void) (*Lnk257)();
	vs_top=sup;
	goto T119;}
	goto T117;
T117:;
	{object V26;
	object V27;
	V26= symbol_value(VV[29]);
	V27= car((V26));
	goto T136;
T136:;
	if(!(endp_prop((V26)))){
	goto T137;}
	goto T132;
	goto T137;
T137:;
	{object V28;
	V28= (V27);
	 vs_top=base+8;
	 while(!endp(V28))
	 {vs_push(car(V28));V28=cdr(V28);}
	vs_base=base+8;}
	(void) (*Lnk275)();
	vs_top=sup;
	V26= cdr((V26));
	V27= car((V26));
	goto T136;}
	goto T132;
T132:;
	{object V29;
	object V30;
	V29= (VV[17]->s.s_dbind);
	V30= car((V29));
	goto T152;
T152:;
	if(!(endp_prop((V29)))){
	goto T153;}
	goto T148;
	goto T153;
T153:;
	(void)((*(LnkLI276))((V30)));
	V29= cdr((V29));
	V30= car((V29));
	goto T152;}
	goto T148;
T148:;
	{object V31;
	object V32;
	V31= symbol_value(VV[30]);
	V32= car((V31));
	goto T167;
T167:;
	if(!(endp_prop((V31)))){
	goto T168;}
	goto T163;
	goto T168;
T168:;
	princ_str("\nstatic void LC",VV[31]);
	V33= structure_ref((V32),VV[32],3);
	(void)((*(LnkLI277))(/* INLINE-ARGS */V33));
	princ_str("();",VV[31]);
	V31= cdr((V31));
	V32= car((V31));
	goto T167;}
	goto T163;
T163:;
	{object V34;
	object V35;
	V34= symbol_value(VV[33]);
	V35= car((V34));
	goto T185;
T185:;
	if(!(endp_prop((V34)))){
	goto T186;}
	goto T181;
	goto T186;
T186:;
	princ_str("\n#define VM",VV[31]);
	(void)((*(LnkLI277))(car((V35))));
	princ_char(32,VV[31]);
	(void)((*(LnkLI277))(cdr((V35))));
	V34= cdr((V34));
	V35= car((V34));
	goto T185;}
	goto T181;
T181:;
	(void)((*(LnkLI278))(Cnil));
	{object V36;
	object V37;
	base[8]= (VV[22]->s.s_dbind);
	base[9]= symbol_value(VV[34]);
	base[10]= small_fixnum(1);
	vs_top=(vs_base=base+8)+3;
	Lminus();
	vs_top=sup;
	V36= vs_base[0];
	V37= small_fixnum(0);
	goto T208;
T208:;
	if(!(number_compare((V37),(V36))>=0)){
	goto T209;}
	goto T201;
	goto T209;
T209:;
	(void)((*(LnkLI278))(Cnil));
	V37= one_plus((V37));
	goto T208;}
	goto T201;
T201:;
	princ_str("\nstatic char * VVi[",VV[31]);
	V38= number_plus(small_fixnum(1),symbol_value(VV[34]));
	(void)((*(LnkLI277))(/* INLINE-ARGS */V38));
	princ_str("]={",VV[31]);
	princ_str("\n#define Cdata VV[",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[34])));
	princ_char(93,VV[31]);
	if((VV[21]->s.s_dbind)!=Cnil){
	goto T225;}
	princ_char(10,VV[31]);
	(void)((*(LnkLI277))(small_fixnum(0)));
	goto T225;
T225:;
	{register object V39;
	V39= nreverse((VV[21]->s.s_dbind));
	goto T231;
T231:;
	if(((V39))!=Cnil){
	goto T232;}
	princ_str("\n};",VV[31]);
	goto T228;
	goto T232;
T232:;
	princ_str("\n(char *)(",VV[31]);
	(void)((*(LnkLI277))(caar((V39))));
	(void)((*(LnkLI277))(cadar((V39))));
	if((cdr((V39)))==Cnil){
	goto T244;}
	V40= VV[35];
	goto T242;
	goto T244;
T244:;
	V40= VV[36];
	goto T242;
T242:;
	(void)((*(LnkLI277))(V40));
	V39= cdr((V39));
	goto T231;}
	goto T228;
T228:;
	princ_str("\n#define VV ((object *)VVi)",VV[31]);
	vs_base=vs_top;
	(void) (*Lnk279)();
	vs_top=sup;
	{object V41;
	object V42;
	V41= (VV[17]->s.s_dbind);
	V42= car((V41));
	goto T255;
T255:;
	if(!(endp_prop((V41)))){
	goto T256;}
	{object V43 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR3(V43)}
	goto T256;
T256:;
	{register object V44;
	register object V45;
	object V46;
	register object V47;
	V44= cadr((V42));
	V45= caddr((V42));
	V46= cadddr((V42));
	V47= Cnil;
	if(!(((V45))==(VV[37]))){
	goto T266;}
	princ_str("\nstatic object *Lclptr",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_char(59,VV[31]);
	V47= VV[38];
	goto T264;
	goto T266;
T266:;
	if(((V45))==Cnil){
	goto T275;}
	V47= (*(LnkLI280))((V45));
	goto T273;
	goto T275;
T275:;
	V47= VV[39];
	goto T273;
T273:;
	goto T264;
T264:;
	if(((V45))==Cnil){
	goto T278;}
	if(((V45))==(VV[37])){
	goto T278;}
	if(((V46))!=Cnil){
	goto T277;}
	if((Ct)==((V45))){
	goto T278;}
	goto T277;
T277:;
	princ_str("\nstatic ",VV[31]);
	base[8]= (V47);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V48= vs_base[0];
	(void)((*(LnkLI277))(V48));
	princ_str(" LnkT",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_str("(object,...);",VV[31]);
	princ_str("\nstatic ",VV[31]);
	base[8]= (V47);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V49= vs_base[0];
	(void)((*(LnkLI277))(V49));
	princ_str(" (*Lnk",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_str(")() = (",VV[31]);
	base[8]= (V47);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V50= vs_base[0];
	(void)((*(LnkLI277))(V50));
	princ_str("(*)()) LnkT",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_char(59,VV[31]);
	goto T260;
	goto T278;
T278:;
	princ_str("\nstatic ",VV[31]);
	base[8]= (V47);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V51= vs_base[0];
	(void)((*(LnkLI277))(V51));
	princ_str(" LnkT",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_str("();",VV[31]);
	princ_str("\nstatic ",VV[31]);
	base[8]= (V47);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V52= vs_base[0];
	(void)((*(LnkLI277))(V52));
	princ_str(" (*Lnk",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_str(")() = LnkT",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_char(59,VV[31]);}
	goto T260;
T260:;
	V41= cdr((V41));
	V42= car((V41));
	goto T255;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAYBE-EVAL	*/

static object LI4(V55,V56)

object V55;register object V56;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if((V55)!=Cnil){
	goto T329;}
	if(type_of(car((V56)))==t_symbol){
	goto T330;}
	goto T329;
	goto T330;
T330:;
	V55= get(car((V56)),VV[40],Cnil);
	goto T329;
T329:;
	if(((V55))==Cnil){
	goto T335;}
	if((VV[41])==(symbol_value(VV[42]))){
	goto T333;}
	goto T335;
T335:;
	if(!(type_of(symbol_value(VV[42]))==t_cons)){
	goto T334;}
	{register object x= VV[43],V57= symbol_value(VV[42]);
	while(!endp(V57))
	if(eql(x,V57->c.c_car)){
	goto T341;
	}else V57=V57->c.c_cdr;
	goto T334;}
	goto T341;
T341:;
	goto T333;
T333:;
	if(((V56))==Cnil){
	goto T342;}
	base[0]= (V56);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk282)();
	vs_top=sup;
	goto T342;
T342:;
	{object V58 = Ct;
	VMR4(V58)}
	goto T334;
T334:;
	{object V59 = Cnil;
	VMR4(V59)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T1EVAL-WHEN	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	bds_check;
	{register object V60;
	check_arg(1);
	V60=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V61;
	register object V62;
	V61= Cnil;
	V62= Cnil;
	if(!(endp_prop((V60)))){
	goto T348;}
	(void)((*(LnkLI283))(VV[44],small_fixnum(1),small_fixnum(0)));
	goto T348;
T348:;
	{register object V63;
	register object V64;
	V63= car((V60));
	V64= car((V63));
	goto T355;
T355:;
	if(!(endp_prop((V63)))){
	goto T356;}
	goto T351;
	goto T356;
T356:;
	{object V65= (V64);
	if((V65!= VV[284]))goto T361;
	V61= Ct;
	goto T360;
	goto T361;
T361:;
	if((V65!= VV[43]))goto T363;
	V62= Ct;
	goto T360;
	goto T363;
T363:;
	if((V65!= VV[285]))goto T365;
	goto T360;
	goto T365;
T365:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[45],(V64))));}
	goto T360;
T360:;
	V63= cdr((V63));
	V64= car((V63));
	goto T355;}
	goto T351;
T351:;
	base[1]= car((V60));
	bds_bind(VV[42],base[1]);
	if(((V61))==Cnil){
	goto T373;}
	base[2]= (*(LnkLI286))(cdr((V60)));
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T373;
T373:;
	if(((V62))==Cnil){
	goto T376;}
	base[2]= make_cons(VV[46],cdr((V60)));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk282)();
	bds_unwind1;
	return;
	goto T376;
T376:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;}
	}
}
/*	local entry for function T1PROGN	*/

static object LI6(V67)

object V67;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	if(!(equal(car((V67)),VV[47]))){
	goto T380;}
	bds_bind(VV[48],Ct);
	{object V68 = (*(LnkLI286))(cdr((V67)));
	bds_unwind1;
	VMR6(V68)}
	goto T380;
T380:;
	{register object V69;
	register object V70;
	V69= (V67);
	V70= car((V69));
	goto T385;
T385:;
	if(!(endp_prop((V69)))){
	goto T386;}
	{object V71 = Cnil;
	VMR6(V71)}
	goto T386;
T386:;
	base[1]= (V70);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk272)();
	vs_top=sup;
	V69= cdr((V69));
	V70= car((V69));
	goto T385;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CMPFIX-ARGS	*/

static object LI7(V74,V75)

object V74;object V75;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V76;
	register object V77;
	V76= Cnil;
	base[1]= cadr((V74));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V77= vs_base[0];
	{register object V78;
	register object V79;
	V78= (V75);
	V79= car((V78));
	goto T404;
T404:;
	if(!(endp_prop((V78)))){
	goto T405;}
	goto T400;
	goto T405;
T405:;
	{register object x= car((V79)),V80= (V77);
	while(!endp(V80))
	if(eql(x,V80->c.c_car)){
	V76= V80;
	goto T410;
	}else V80=V80->c.c_cdr;
	V76= Cnil;}
	goto T410;
T410:;
	if((V76)==Cnil){
	goto T411;}
	{register object V81;
	register object V82;
	V81= (V76);
	V82= cadr((V79));
	if(type_of((V81))!=t_cons)FEwrong_type_argument(Scons,(V81));
	((V81))->c.c_car = (V82);}
	goto T411;
T411:;
	V78= cdr((V78));
	V79= car((V78));
	goto T404;}
	goto T400;
T400:;
	{register object x= VV[49],V83= (V77);
	while(!endp(V83))
	if(eql(x,V83->c.c_car)){
	V76= V83;
	goto T424;
	}else V83=V83->c.c_cdr;
	V76= Cnil;}
	goto T424;
T424:;
	if(((V76))==Cnil){
	goto T422;}
	{object V85;
	V85= append((V75),cdr((V76)));
	if(type_of(V76)!=t_cons)FEwrong_type_argument(Scons,V76);
	(V76)->c.c_cdr = (V85);
	goto T420;}
	goto T422;
T422:;
	V86= make_cons(VV[49],(V75));
	V77= append((V77),/* INLINE-ARGS */V86);
	goto T420;
T420:;
	{object V87 = listA(3,car((V74)),(V77),cddr((V74)));
	VMR7(V87)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFUN	*/

static object LI8(V89)

object V89;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	{object V90;
	V90= symbol_value(VV[50]);
	bds_bind(VV[52],Cnil);
	if(endp_prop((V89))){
	goto T430;}
	if(!(endp_prop(cdr((V89))))){
	goto T429;}
	goto T430;
T430:;
	V92 = make_fixnum((long)length((V89)));
	(void)((*(LnkLI283))(VV[51],small_fixnum(2),V92));
	goto T429;
T429:;
	if(type_of(car((V89)))==t_symbol){
	goto T434;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[53],car((V89)))));
	goto T434;
T434:;
	V93= make_cons(VV[51],(V89));
	(void)((*(LnkLI268))(Cnil,/* INLINE-ARGS */V93));
	goto T439;
T439:;
	setq(VV[6],Ct);
	setq(VV[54],Cnil);
	{register object V94;
	object V95;
	object V96;
	register object V97;{object V98;
	V98= get(car((V89)),VV[60],Cnil);
	if(V98==Cnil)goto T446;
	V95= V98;
	goto T445;
	goto T446;
T446:;}
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V95= symbol_value(VV[61]);
	goto T445;
T445:;
	V97= car((V89));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	V94= Cnil;
	bds_bind(VV[59],Cnil);
	V96= Cnil;
	V94= (VFUN_NARGS=2,(*(LnkLI287))(cdr((V89)),(V97)));
	if(!(eql((V90),symbol_value(VV[50])))){
	goto T453;}
	goto T452;
	goto T453;
T453:;
	(void)(structure_set(cadr((V94)),VV[62],4,Ct));
	goto T452;
T452:;
	V99= structure_ref(cadr((V94)),VV[62],1);
	(void)((*(LnkLI288))(/* INLINE-ARGS */V99));
	if((get((V97),VV[63],Cnil))==Cnil){
	goto T456;}
	{object V100;
	V100= make_fixnum((long)length(car(caddr((V94)))));
	(void)(sputprop((V97),VV[63],(V100)));
	base[6]= (V100);
	base[7]= VV[65];
	base[8]= Ct;
	vs_top=(vs_base=base+6)+3;
	Lmake_list();
	vs_top=sup;
	V101= vs_base[0];
	V102= list(4,VV[64],(V97),V101,Ct);
	(void)((*(LnkLI289))(/* INLINE-ARGS */V102));}
	goto T456;
T456:;
	if((get((V97),VV[66],Cnil))==Cnil){
	goto T467;}
	{object V103;
	register object V104;
	V103= caddr((V94));
	V104= Cnil;
	if((cadr((V103)))==Cnil){
	goto T472;}
	goto T467;
	goto T472;
T472:;
	if((caddr((V103)))==Cnil){
	goto T474;}
	goto T467;
	goto T474;
T474:;
	if((cadddr((V103)))==Cnil){
	goto T476;}
	goto T467;
	goto T476;
T476:;
	if(((long)length(car((V103))))<(64)){
	goto T478;}
	goto T467;
	goto T478;
T478:;
	{register object V105;
	register object V106;
	object V107;
	V105= car((V103));
	V106= get((V97),VV[67],Cnil);
	V107= Cnil;
	goto T485;
T485:;
	if(!(endp_prop((V105)))){
	goto T486;}
	if(endp_prop((V106))){
	goto T489;}
	goto T481;
	goto T489;
T489:;
	if(((V104))==Cnil){
	goto T492;}
	V89= (*(LnkLI290))((V89),(V104));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T439;
	goto T492;
T492:;
	if(((V107))==Cnil){
	goto T480;}
	goto T481;
	goto T486;
T486:;
	{register object V108;
	V108= car((V105));
	if(!(equal(car((V106)),VV[68]))){
	goto T499;}
	goto T481;
	goto T499;
T499:;
	V109= structure_ref((V108),VV[69],1);
	if((/* INLINE-ARGS */V109)==(VV[70])){
	goto T505;}
	V110= structure_ref((V108),VV[69],1);
	if(!((/* INLINE-ARGS */V110)==(VV[71]))){
	goto T504;}
	if(!((car((V106)))==(Ct))){
	goto T504;}
	goto T505;
T505:;
	if((structure_ref((V108),VV[69],3))!=Cnil){
	goto T504;}
	V111= structure_ref((V108),VV[69],4);
	if(!((/* INLINE-ARGS */V111)==(VV[72]))){
	goto T503;}
	goto T504;
T504:;
	{object V112;
	V113= structure_ref((V108),VV[69],0);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V114= vs_base[0];
	V112= list(2,/* INLINE-ARGS */V113,V114);
	V104= make_cons((V112),(V104));}
	goto T503;
T503:;
	V115= car((V106));
	V116= structure_ref((V108),VV[69],5);
	if(((*(LnkLI291))(/* INLINE-ARGS */V115,/* INLINE-ARGS */V116))==Cnil){
	goto T502;}
	{register object x= car((V106)),V117= VV[73];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T497;
	}else V117=V117->c.c_cdr;}
	V118= structure_ref((V108),VV[69],4);
	if((/* INLINE-ARGS */V118)==(VV[74])){
	goto T497;}
	if((symbol_value(VV[75]))!=Cnil){
	goto T497;}
	V120= structure_ref(cadr((V94)),VV[62],0);
	{register object x= (V108),V119= /* INLINE-ARGS */V120;
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T527;
	}else V119=V119->c.c_cdr;
	goto T497;}
	goto T527;
T527:;
	goto T502;
T502:;
	if(((V104))!=Cnil){
	goto T528;}
	V121= structure_ref((V108),VV[69],0);
	(void)((VFUN_NARGS=3,(*(LnkLI266))(VV[76],(V97),/* INLINE-ARGS */V121)));
	goto T528;
T528:;
	V107= Ct;}
	goto T497;
T497:;
	V105= cdr((V105));
	V106= cdr((V106));
	goto T485;}
	goto T481;
T481:;
	goto T467;
	goto T480;
T480:;
	if(!(type_of((V95))==t_fixnum||
type_of((V95))==t_bignum||
type_of((V95))==t_ratio||
type_of((V95))==t_shortfloat||
type_of((V95))==t_longfloat||
type_of((V95))==t_complex)){
	goto T467;}}
	{object V122;
	V123= get((V97),VV[67],Cnil);
	V124= get((V97),VV[77],Cnil);
	V125= get((V97),VV[67],Cnil);
	V122= list(5,(V97),V123,V124,small_fixnum(3),(*(LnkLI292))((V95),V125));
	setq(VV[78],make_cons((V122),symbol_value(VV[78])));
	goto T465;}
	goto T467;
T467:;
	{object V126;
	V127= get((V97),VV[77],Cnil);
	V126= ((V127)==(Ct)?Ct:Cnil);
	if(((V126))==Cnil){
	goto T465;}}
	goto T465;
T465:;
	if((cadddr((V94)))==Cnil){
	goto T545;}
	V96= cadddr((V94));
	goto T545;
T545:;
	(void)((*(LnkLI293))());
	{object V128;
	V128= list(6,VV[51],(V97),(V95),(V94),(V96),(VV[59]->s.s_dbind));
	setq(VV[24],make_cons((V128),symbol_value(VV[24])));}
	{object V129;
	V129= make_cons((V97),(V95));
	setq(VV[79],make_cons((V129),symbol_value(VV[79])));
	V130= symbol_value(VV[79]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	{object V131 = Cnil;
	bds_unwind1;
	VMR8(V131)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INLINE-STRING	*/

static object LI9(V134,V135)

object V134;object V135;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(((V135))!=Cnil){
	goto T556;}
	base[0]= Cnil;
	base[1]= VV[80];
	base[2]= (V134);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V136 = vs_base[0];
	VMR9(V136)}
	goto T556;
T556:;
	{register object V137;
	V137= (VFUN_NARGS=7,(*(LnkLI294))(small_fixnum(100),VV[81],VV[82],VV[83],small_fixnum(0),VV[84],Ct));
	base[0]= (V137);
	base[1]= VV[85];
	base[2]= (V134);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{register object V138;
	register long V139;
	V139= 0;
	V138= (V135);
	goto T569;
T569:;
	if(!(endp_prop(cdr((V138))))){
	goto T570;}
	base[0]= (V137);
	base[1]= VV[86];
	base[2]= make_fixnum(V139);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T566;
	goto T570;
T570:;
	base[0]= (V137);
	base[1]= VV[87];
	base[2]= make_fixnum(V139);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V138= cdr((V138));
	V139= (long)(V139)+1;
	goto T569;}
	goto T566;
T566:;
	{object V140 = (V137);
	VMR9(V140)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CS-PUSH	*/

static object LI10(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V141;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T585;
	else {
	V141= first;}
	--narg; goto T586;
	goto T585;
T585:;
	V141= Cnil;
	goto T586;
T586:;
	{object V142;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V142= symbol_value(VV[88]);
	{object V143;
	if(((V141))==Cnil){
	goto T593;}
	V143= make_cons((V141),(V142));
	goto T591;
	goto T593;
T593:;
	V143= (V142);
	goto T591;
T591:;
	setq(VV[18],make_cons((V143),symbol_value(VV[18])));}
	{object V144 = (V142);
	VMR10(V144)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function F-TYPE	*/

static object LI11(V146)

register object V146;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= (V146);
	base[1]= VV[69];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T596;}
	V146= structure_ref((V146),VV[69],5);
	goto T596;
T596:;
	if(((V146))==Cnil){
	goto T603;}
	base[0]= (V146);
	base[1]= VV[89];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk296)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T603;}
	{long V147 = 1;
	VMR11((object)V147)}
	goto T603;
T603:;
	{long V148 = 0;
	VMR11((object)V148)}
	base[0]=base[0];
}
/*	local entry for function PROCLAIMED-ARGD	*/

static object LI12(V151,V152)

register object V151;object V152;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register long V153;
	register long V154;
	register object V155;
	register object V156;
	V153= (long)length((V151));
	V154= 8;
	V155= make_fixnum((long)(*(LnkLI297))((V152)));
	V156= Ct;
	goto T613;
T613:;
	if(eql(small_fixnum(0),(V155))){
	goto T615;}
	V153= (long)(V153)+((long)((fix((V155))) << (V154)));
	goto T615;
T615:;
	if(((V156))==Cnil){
	goto T619;}
	V154= 10;
	V156= Cnil;
	goto T619;
T619:;
	if(((V151))!=Cnil){
	goto T625;}
	{long V157 = V153;
	VMR12((object)V157)}
	goto T625;
T625:;
	V154= (long)(V154)+(2);
	{register object V159;
	V159= car((V151));
	V151= cdr((V151));
	V158= (V159);}
	V155= make_fixnum((long)(*(LnkLI297))(V158));
	goto T613;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI13(V163,V164,V165)

register object V163;object V164;object V165;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI299))((V163))))==Cnil){
	goto T637;}
	{register object x= (V163),V166= symbol_value(VV[78]);
	while(!endp(V166))
	if(type_of(V166->c.c_car)==t_cons &&eql(x,V166->c.c_car->c.c_car)){
	goto T641;
	}else V166=V166->c.c_cdr;
	goto T640;}
	goto T641;
T641:;
	V167= list(2,VV[91],(V163));
	V168= (*(LnkLI301))(VV[92],(V164));
	V169= get((V163),VV[67],Cnil);
	V170= get((V163),VV[77],Cnil);
	V171 = make_fixnum((long)(*(LnkLI302))(V169,V170));
	V172= list(4,VV[90],/* INLINE-ARGS */V167,/* INLINE-ARGS */V168,V171);
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V172)));
	{object V173 = Ct;
	VMR13(V173)}
	goto T640;
T640:;
	{register object V174;
	register object V175;
	object V176;
	V174= make_fixnum((long)length(car(caddr((V165)))));
	V177= get((V163),VV[67],Cnil);
	V175= make_fixnum((long)length(V177));
	V179= get((V163),VV[67],Cnil);
	{register object x= VV[68],V178= V179;
	while(!endp(V178))
	if(eql(x,V178->c.c_car)){
	V176= V178;
	goto T649;
	}else V178=V178->c.c_cdr;
	V176= Cnil;}
	goto T649;
T649:;
	if(((V176))==Cnil){
	goto T652;}
	base[0]= (V174);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T654;}
	goto T645;
	goto T654;
T654:;{object V180;
	V181 = make_fixnum((long)length((V176)));
	V180= number_minus((V175),V181);
	if(V180==Cnil)goto T657;
	goto T645;
	goto T657;
T657:;}
	V182 = make_fixnum((long)length((V176)));
	V183= number_minus((V175),V182);
	(void)((VFUN_NARGS=4,(*(LnkLI266))(VV[93],(V163),/* INLINE-ARGS */V183,(V174))));
	goto T645;
	goto T652;
T652:;
	if(eql((V174),(V175))){
	goto T660;}
	(void)((VFUN_NARGS=4,(*(LnkLI266))(VV[94],(V163),(V175),(V174))));
	goto T645;
	goto T660;
T660:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[95],(V163))));}
	goto T645;
T645:;
	{object V184 = Cnil;
	VMR13(V184)}
	goto T637;
T637:;
	{object V185 = Cnil;
	VMR13(V185)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VOLATILE	*/

static object LI14(V187)

object V187;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if((structure_ref((V187),VV[62],4))==Cnil){
	goto T663;}
	{object V188 = VV[96];
	VMR14(V188)}
	goto T663;
T663:;
	{object V189 = VV[97];
	VMR14(V189)}
	return Cnil;
}
/*	local entry for function REGISTER	*/

static object LI15(V191)

object V191;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(equal(symbol_value(VV[20]),VV[98]))){
	goto T666;}
	{long V192= fix(structure_ref((V191),VV[69],6));
	if(!((/* INLINE-ARGS */V192)>=(fix(symbol_value(VV[99]))))){
	goto T666;}}
	{object V193 = VV[100];
	VMR15(V193)}
	goto T666;
T666:;
	{object V194 = VV[101];
	VMR15(V194)}
	return Cnil;
}
/*	local entry for function VARARG-P	*/

static object LI16(V196)

object V196;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	V197= get((V196),VV[77],Cnil);
	if(equal(V197,Ct)){
	goto T670;}
	{object V198 = Cnil;
	VMR16(V198)}
	goto T670;
T670:;
	{register object V199;
	V199= get((V196),VV[67],Cnil);
	goto T675;
T675:;
	if(((V199))!=Cnil){
	goto T676;}
	{object V200 = Ct;
	VMR16(V200)}
	goto T676;
T676:;
	if(!(type_of((V199))==t_cons)){
	goto T681;}
	goto T680;
	goto T681;
T681:;
	{object V201 = Cnil;
	VMR16(V201)}
	goto T680;
T680:;
	if(!((car((V199)))==(Ct))){
	goto T684;}
	goto T683;
	goto T684;
T684:;
	if(!((car((V199)))==(VV[68]))){
	goto T686;}
	goto T683;
	goto T686;
T686:;
	{object V202 = Cnil;
	VMR16(V202)}
	goto T683;
T683:;
	V199= cdr((V199));
	goto T675;}
	return Cnil;
}
/*	local entry for function MAXARGS	*/

static object LI17(V204)

register object V204;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((cadddr((V204)))!=Cnil){
	goto T691;}
	if((caddr((V204)))==Cnil){
	goto T692;}
	goto T691;
T691:;
	{object V205 = small_fixnum(64);
	VMR17(V205)}
	goto T692;
T692:;
	base[0]= make_fixnum((long)length(car((V204))));
	base[1]= make_fixnum((long)length(cadr((V204))));
	V206 = make_fixnum((long)length(car(cddddr((V204)))));
	base[2]= number_times(small_fixnum(2),V206);
	vs_top=(vs_base=base+0)+3;
	Lplus();
	vs_top=sup;
	{object V207 = vs_base[0];
	VMR17(V207)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-ADDRESS	*/

static object LI18(V210,V211)

object V210;object V211;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V212;
	V212= list(2,(V210),(V211));
	setq(VV[21],make_cons((V212),symbol_value(VV[21])));}
	{object V213;
	V213= symbol_value(VV[22]);
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	{object V214 = (V213);
	VMR18(V214)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFUN	*/

static object LI19(V220,V221,V222,V223,V224)

register object V220;register object V221;register object V222;object V223;object V224;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if((get((V220),VV[102],Cnil))==Cnil){
	goto T704;}
	{object V225 = Cnil;
	VMR19(V225)}
	goto T704;
T704:;
	if(((V223))==Cnil){
	goto T707;}
	V226= list(4,VV[103],list(2,VV[91],(V220)),(V223),VV[104]);
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V226)));
	goto T707;
T707:;
	{object V227;
	V227= (*(LnkLI303))((V220),(V221),(V222));
	if(((V227))==Cnil){
	goto T713;}
	goto T710;
	goto T713;
T713:;
	if(((*(LnkLI304))((V220)))==Cnil){
	goto T716;}
	{object V228;
	V228= cadddr(caddr((V222)));
	if(((V228))==Cnil){
	goto T720;}
	V229= list(2,VV[91],(V220));
	V230= (*(LnkLI301))(VV[106],(V221));
	V231 = make_fixnum((long)length(car(caddr((V222)))));
	V232= (*(LnkLI305))(caddr((V222)));
	V233= (*(LnkLI298))(/* INLINE-ARGS */V232,small_fixnum(8));
	V234= number_plus(V231,/* INLINE-ARGS */V233);
	base[0]= Cnil;
	base[1]= VV[107];
	base[2]= (V221);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V235= vs_base[0];
	V236= list(5,VV[105],/* INLINE-ARGS */V229,/* INLINE-ARGS */V230,/* INLINE-ARGS */V234,(*(LnkLI301))(V235,VV[108]));
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V236)));
	goto T710;
	goto T720;
T720:;
	V237= list(2,VV[91],(V220));
	V238= (*(LnkLI301))(VV[110],(V221));
	V239 = make_fixnum((long)length(car(caddr((V222)))));
	V240= (*(LnkLI305))(caddr((V222)));
	V241= (*(LnkLI298))(/* INLINE-ARGS */V240,small_fixnum(8));
	V242= list(4,VV[109],/* INLINE-ARGS */V237,/* INLINE-ARGS */V238,number_plus(V239,/* INLINE-ARGS */V241));
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V242)));
	goto T710;}
	goto T716;
T716:;
	if(!(type_of((V221))==t_fixnum||
type_of((V221))==t_bignum||
type_of((V221))==t_ratio||
type_of((V221))==t_shortfloat||
type_of((V221))==t_longfloat||
type_of((V221))==t_complex)){
	goto T727;}
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI277))((V221)));
	princ_str("();",VV[31]);
	V243= list(2,VV[91],(V220));
	V244= list(3,VV[111],/* INLINE-ARGS */V243,(*(LnkLI301))(VV[112],(V221)));
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V244)));
	goto T710;
	goto T727;
T727:;
	princ_char(10,VV[31]);
	(void)((*(LnkLI277))((V221)));
	princ_str("();",VV[31]);
	V245= list(2,VV[91],(V220));
	V246= list(3,VV[111],/* INLINE-ARGS */V245,(*(LnkLI301))(VV[113],(V221)));
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V246)));}
	goto T710;
T710:;
	if(!(number_compare(symbol_value(VV[114]),small_fixnum(2))<0)){
	goto T738;}
	{object V247 = sputprop((V220),VV[115],Ct);
	VMR19(V247)}
	goto T738;
T738:;
	{object V248 = Cnil;
	VMR19(V248)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DEBUG	*/

static object LI20(V251,V252)

object V251;object V252;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V253 = putprop((V251),(V252),VV[116]);
	VMR20(V253)}
	return Cnil;
}
/*	local entry for function T3DEFUN	*/

static object LI21(V259,V260,V261,V262,V263)

register object V259;register object V260;register object V261;object V262;object V263;
{	 VMB21 VMS21 VMV21
	bds_check;
	goto TTL;
TTL:;
	{register object V264;
	V264= Cnil;
	bds_bind(VV[0],list(2,VV[51],(V259)));
	bds_bind(VV[20],(*(LnkLI306))(cadr((V261))));
	bds_bind(VV[117],Cnil);
	{register object V265;
	register object V266;
	V265= symbol_value(VV[78]);
	V266= car((V265));
	goto T750;
T750:;
	if(!(endp_prop((V265)))){
	goto T751;}
	goto T745;
	goto T751;
T751:;{object V267;
	base[4]= cadddr((V266));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk307)();
	vs_top=sup;
	V267= vs_base[0];
	if(V267==Cnil)goto T756;
	goto T755;
	goto T756;
T756:;}
	base[4]= VV[118];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T755;
T755:;
	if((car((V266)))==((V259))){
	goto T761;}
	goto T760;
	goto T761;
T761:;
	if((cadr(cddddr((V266))))==Cnil){
	goto T763;}
	goto T760;
	goto T763;
T763:;
	V264= (V266);
	if(((V264))==Cnil){
	goto T745;}
	goto T746;
	goto T760;
T760:;
	V265= cdr((V265));
	V266= car((V265));
	goto T750;}
	goto T746;
T746:;
	if(((VFUN_NARGS=1,(*(LnkLI299))((V259))))!=Cnil){
	goto T771;}
	{object V268;
	V268= list(4,(V259),(V260),cadr((V264)),caddr((V264)));
	setq(VV[29],make_cons((V268),symbol_value(VV[29])));}
	goto T771;
T771:;
	V269= structure_ref(cadr((V261)),VV[62],1);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V269,small_fixnum(0)));
	base[3]= VV[119];
	{object V270= caddr((V264));
	if((V270!= VV[89]))goto T779;
	base[4]= VV[120];
	goto T778;
	goto T779;
T779:;
	if((V270!= VV[142]))goto T780;
	base[4]= VV[121];
	goto T778;
	goto T780;
T780:;
	if((V270!= VV[143]))goto T781;
	base[4]= VV[122];
	goto T778;
	goto T781;
T781:;
	if((V270!= VV[144]))goto T782;
	base[4]= VV[123];
	goto T778;
	goto T782;
T782:;
	base[4]= VV[124];}
	goto T778;
T778:;
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	base[9]= (V264);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	goto T743;
	goto T745;
T745:;
	if(((*(LnkLI304))((V259)))==Cnil){
	goto T789;}
	V271= structure_ref(cadr((V261)),VV[62],1);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V271,small_fixnum(0)));
	base[3]= VV[125];
	base[4]= VV[124];
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk309)();
	vs_top=sup;
	goto T743;
	goto T789;
T789:;
	V272= structure_ref(cadr((V261)),VV[62],1);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V272,small_fixnum(2)));
	base[3]= VV[126];
	base[4]= VV[127];
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk309)();
	vs_top=sup;
	goto T743;
T743:;
	(void)((*(LnkLI310))((V260)));
	{object V273 = (*(LnkLI311))((V259),(V261));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR21(V273)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T3DEFUN-AUX	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	bds_check;
	{object V274;
	object V275;
	if(vs_top-vs_base<2) too_few_arguments();
	V274=(base[0]);
	bds_bind(VV[128],base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V275=(base[2]);
	vs_top=sup;
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],small_fixnum(0));
	bds_bind(VV[133],Cnil);
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	base[16]= (V274);
	{object V276;
	V276= (V275);
	 vs_top=base+17;
	 while(!endp(V276))
	 {vs_push(car(V276));V276=cdr(V276);}
	vs_base=base+17;}
	super_funcall_no_event(base[16]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
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
/*	local entry for function T3DEFUN-LOCAL-ENTRY	*/

static object LI23(V282,V283,V284,V285,V286)

object V282;object V283;object V284;object V285;object V286;
{	 VMB23 VMS23 VMV23
	bds_check;
	goto TTL;
TTL:;
	{object V287;
	object V288;
	V287= Cnil;
	V288= caaddr((V284));
	{register object V289;
	object V290;
	V290= cadr((V286));
	V289= (V288);
	goto T816;
T816:;
	if(!(endp_prop((V289)))){
	goto T817;}
	goto T813;
	goto T817;
T817:;
	V291= structure_ref(car((V289)),VV[69],1);
	if(!((/* INLINE-ARGS */V291)==(VV[71]))){
	goto T823;}
	{object V292;
	V293= car((V289));
	V294= structure_ref(car((V289)),VV[69],4);
	V292= make_cons(/* INLINE-ARGS */V293,/* INLINE-ARGS */V294);
	V287= make_cons((V292),(V287));
	goto T821;}
	goto T823;
T823:;
	V295= car((V289));
	{object V297= car((V290));
	if((V297!= VV[89]))goto T828;
	V296= VV[89];
	goto T827;
	goto T828;
T828:;
	if((V297!= VV[142]))goto T829;
	V296= VV[142];
	goto T827;
	goto T829;
T829:;
	if((V297!= VV[143]))goto T830;
	V296= VV[143];
	goto T827;
	goto T830;
T830:;
	if((V297!= VV[144]))goto T831;
	V296= VV[144];
	goto T827;
	goto T831;
T831:;
	V296= VV[74];}
	goto T827;
T827:;
	(void)(structure_set(/* INLINE-ARGS */V295,VV[69],1,V296));
	goto T821;
T821:;
	V298= car((V289));
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V298,VV[69],4,symbol_value(VV[88])));
	V289= cdr((V289));
	V290= cdr((V290));
	goto T816;}
	goto T813;
T813:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[145],(V282))));
	princ_str("\nstatic ",VV[31]);
	base[1]= (*(LnkLI280))(caddr((V286)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V299= vs_base[0];
	(void)((*(LnkLI277))(V299));
	princ_str("LI",VV[31]);
	(void)((*(LnkLI277))((V283)));
	princ_str("();",VV[31]);
	princ_str("\nstatic ",VV[25]);
	base[1]= (*(LnkLI280))(caddr((V286)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V300= vs_base[0];
	(void)((*(LnkLI274))(V300));
	princ_str("LI",VV[25]);
	(void)((*(LnkLI274))((V283)));
	princ_char(40,VV[25]);
	(void)((*(LnkLI313))((V288),cadr((V286))));
	{object V301;
	V301= symbol_value(VV[136]);
	if((symbol_value(VV[147]))==Cnil){
	goto T859;}
	base[1]= make_cons((V282),(V288));
	goto T857;
	goto T859;
T859:;
	base[1]= Cnil;
	goto T857;
T857:;
	bds_bind(VV[146],base[1]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[25]);
	V302= structure_ref(cadr((V284)),VV[62],1);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V302,(V283),VV[148]));
	princ_str(" VMB",VV[25]);
	(void)((*(LnkLI274))((V301)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI274))((V301)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI274))((V301)));
	if(((V285))==Cnil){
	goto T871;}
	princ_str("\n	bds_check;",VV[25]);
	goto T871;
T871:;
	if((symbol_value(VV[149]))==Cnil){
	goto T875;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T875;
T875:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T879;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[25]);
	princ_str("\nTTL:;",VV[25]);
	goto T879;
T879:;
	{register object V304;
	register object V305;
	V304= (V287);
	V305= car((V304));
	goto T891;
T891:;
	if(!(endp_prop((V304)))){
	goto T892;}
	goto T887;
	goto T892;
T892:;
	princ_str("\n	bds_bind(VV[",VV[25]);
	(void)((*(LnkLI274))(cdr((V305))));
	princ_str("],V",VV[25]);
	V306= structure_ref(car((V305)),VV[69],4);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V306));
	princ_str(");",VV[25]);
	(VV[134]->s.s_dbind)= make_cons(VV[151],(VV[134]->s.s_dbind));
	(void)(structure_set(car((V305)),VV[69],1,VV[71]));
	(void)(structure_set(car((V305)),VV[69],4,cdr((V305))));
	V304= cdr((V304));
	V305= car((V304));
	goto T891;}
	goto T887;
T887:;
	base[3]= caddr(cddr((V284)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk315)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T915;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T915;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T915;}
	goto T913;
	goto T915;
T915:;
	princ_str("\n	base[0]=base[0];",VV[25]);
	goto T913;
T913:;
	V308= (*(LnkLI280))(caddr((V286)));
	if(!(equal(VV[152],/* INLINE-ARGS */V308))){
	goto T922;}
	princ_str("\n	return Cnil;",VV[25]);
	goto T922;
T922:;
	princ_str("\n}",VV[25]);
	{object V309 = (*(LnkLI316))((V301),caddr((V286)));
	bds_unwind1;
	bds_unwind1;
	VMR23(V309)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-UP-VAR-CVS	*/

static object LI24(V311)

object V311;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if((symbol_value(VV[153]))==Cnil){
	goto T929;}
	V312= (*(LnkLI317))();
	{object V313 = structure_set((V311),VV[69],2,/* INLINE-ARGS */V312);
	VMR24(V313)}
	goto T929;
T929:;
	V314= (*(LnkLI318))();
	{object V315 = structure_set((V311),VV[69],2,/* INLINE-ARGS */V314);
	VMR24(V315)}
	return Cnil;
}
/*	local entry for function T3DEFUN-VARARG	*/

static object LI25(V320,V321,V322,V323)

object V320;object V321;object V322;object V323;
{	 VMB25 VMS25 VMV25
	bds_check;
	goto TTL;
TTL:;
	{object V324;
	register object V325;
	object V326;
	object V327;
	object V328;
	object V329;
	object V330;
	object V331;
	V324= Cnil;
	bds_bind(VV[153],Cnil);
	base[1]= Cnil;
	V325= Cnil;
	V326= Ct;
	V327= Cnil;
	bds_bind(VV[154],small_fixnum(0));
	V328= Cnil;
	V329= caddr((V322));
	V330= Cnil;{object V332;
	V332= caddr((V329));
	if(V332==Cnil)goto T939;
	V331= V332;
	goto T938;
	goto T939;
T939:;}{object V333;
	V333= cadr((V329));
	if(V333==Cnil)goto T941;
	V331= V333;
	goto T938;
	goto T941;
T941:;}
	V331= cadddr((V329));
	goto T938;
T938:;
	{object V334;
	register object V335;
	V334= car((V329));
	V335= car((V334));
	goto T947;
T947:;
	if(!(endp_prop((V334)))){
	goto T948;}
	goto T943;
	goto T948;
T948:;
	{object V336;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V336= list(2,VV[155],symbol_value(VV[88]));
	V324= make_cons((V336),(V324));}
	V334= cdr((V334));
	V335= car((V334));
	goto T947;}
	goto T943;
T943:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[156],(V320))));
	{object V337;
	V337= VV[157];
	princ_str("\nstatic object LI",VV[25]);
	(void)((*(LnkLI274))((V321)));
	princ_char(40,VV[25]);
	if(((V324))==Cnil){
	goto T967;}
	{object V338;
	V338= (V324);
	goto T971;
T971:;
	if(((V338))!=Cnil){
	goto T972;}
	goto T967;
	goto T972;
T972:;
	princ_str("object ",VV[25]);
	(void)((*(LnkLI274))(car((V338))));
	V337= (VFUN_NARGS=3,(*(LnkLI319))(VV[158],(V337),VV[159]));
	if(!((cdr((V338)))==Cnil)){
	goto T982;}
	goto T981;
	goto T982;
T982:;
	princ_char(44,VV[25]);
	V337= (VFUN_NARGS=3,(*(LnkLI319))(VV[158],(V337),VV[160]));
	goto T981;
T981:;
	V338= cdr((V338));
	goto T971;}
	goto T967;
T967:;
	if(((V331))==Cnil){
	goto T990;}
	if(((V324))==Cnil){
	goto T993;}
	princ_char(44,VV[25]);
	V337= (VFUN_NARGS=3,(*(LnkLI319))(VV[158],(V337),VV[161]));
	goto T993;
T993:;
	princ_str("object first,...",VV[25]);
	V337= (VFUN_NARGS=3,(*(LnkLI319))(VV[158],(V337),VV[162]));
	goto T990;
T990:;
	princ_char(41,VV[25]);
	princ_str("\nstatic object LI",VV[31]);
	(void)((*(LnkLI277))((V321)));
	princ_char(40,VV[31]);
	(void)((*(LnkLI277))((V337)));
	princ_str(");",VV[31]);}
	{object V339;
	V339= symbol_value(VV[136]);
	if(symbol_value(VV[147])==Cnil){
	base[5]= Cnil;
	goto T1010;}
	if((caddr((V329)))==Cnil){
	goto T1011;}
	base[5]= Cnil;
	goto T1010;
	goto T1011;
T1011:;
	{object V340;
	object V341;
	V340= car((V329));
	V341= car((V340));
	goto T1018;
T1018:;
	if(!(endp_prop((V340)))){
	goto T1019;}
	goto T1013;
	goto T1019;
T1019:;
	if((structure_ref((V341),VV[69],3))==Cnil){
	goto T1023;}
	goto T1014;
	goto T1023;
T1023:;
	V340= cdr((V340));
	V341= car((V340));
	goto T1018;}
	goto T1014;
T1014:;
	base[5]= Cnil;
	goto T1010;
	goto T1013;
T1013:;
	if((cadr((V329)))==Cnil){
	goto T1031;}
	base[5]= Cnil;
	goto T1010;
	goto T1031;
T1031:;
	if((car(cddddr((V329))))==Cnil){
	goto T1033;}
	base[5]= Cnil;
	goto T1010;
	goto T1033;
T1033:;
	base[5]= make_cons((V320),car((V329)));
	goto T1010;
T1010:;
	bds_bind(VV[146],base[5]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[25]);
	if(((V331))==Cnil){
	goto T1037;}
	princ_str("\n	va_list ap;",VV[25]);
	goto T1037;
T1037:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[25]);
	V342= structure_ref(cadr((V322)),VV[62],1);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V342,(V321),VV[148]));
	princ_str(" VMB",VV[25]);
	(void)((*(LnkLI274))((V339)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI274))((V339)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI274))((V339)));
	if(((V323))==Cnil){
	goto T1051;}
	princ_str("\n	bds_check;",VV[25]);
	goto T1051;
T1051:;
	if((symbol_value(VV[149]))==Cnil){
	goto T1055;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T1055;
T1055:;
	if((V331)!=Cnil){
	goto T1059;}
	princ_str("\n	if ( narg!= ",VV[25]);
	V343 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI274))(V343));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[25]);
	V344 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI274))(V344));
	princ_str("));",VV[25]);
	goto T1059;
T1059:;
	{object V345;
	object V346;
	V345= car((V329));
	V346= car((V345));
	goto T1070;
T1070:;
	if(!(endp_prop((V345)))){
	goto T1071;}
	goto T1066;
	goto T1071;
T1071:;
	base[9]= (V346);
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	V345= cdr((V345));
	V346= car((V345));
	goto T1070;}
	goto T1066;
T1066:;
	{object V347;
	object V348;
	V347= cadr((V329));
	V348= car((V347));
	goto T1086;
T1086:;
	if(!(endp_prop((V347)))){
	goto T1087;}
	goto T1082;
	goto T1087;
T1087:;
	base[9]= car((V348));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((caddr((V348)))==Cnil){
	goto T1093;}
	base[9]= caddr((V348));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1093;
T1093:;
	V347= cdr((V347));
	V348= car((V347));
	goto T1086;}
	goto T1082;
T1082:;
	if((caddr((V329)))==Cnil){
	goto T1102;}
	base[7]= caddr((V329));
	vs_top=(vs_base=base+7)+1;
	L26(base);
	vs_top=sup;
	goto T1102;
T1102:;
	{object V349;
	object V350;
	V349= car(cddddr((V329)));
	V350= car((V349));
	goto T1109;
T1109:;
	if(!(endp_prop((V349)))){
	goto T1110;}
	goto T1065;
	goto T1110;
T1110:;
	base[9]= cadr((V350));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((cadddr((V350)))==Cnil){
	goto T1116;}
	base[9]= cadddr((V350));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1116;
T1116:;
	V349= cdr((V349));
	V350= car((V349));
	goto T1109;}
	goto T1065;
T1065:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1127;}
	goto T1125;
	goto T1127;
T1127:;
	princ_str("\n	Vcs[0]=Vcs[0];",VV[25]);
	goto T1125;
T1125:;
	if((cadr((V329)))!=Cnil){
	goto T1131;}
	if((caddr((V329)))!=Cnil){
	goto T1131;}
	if((cadddr((V329)))==Cnil){
	goto T1130;}
	goto T1131;
T1131:;
	if(((V330))!=Cnil){
	goto T1130;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1130;
T1130:;
	if((symbol_value(VV[163]))!=Cnil){
	goto T1144;}
	if((symbol_value(VV[164]))==Cnil){
	goto T1142;}
	goto T1144;
T1144:;
	if((car((V329)))==Cnil){
	goto T1142;}
	princ_str("\n	if(narg <",VV[25]);
	V351 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI274))(V351));
	princ_str(") too_few_arguments();",VV[25]);
	goto T1142;
T1142:;
	{object V352;
	object V353;
	V352= car((V329));
	V353= car((V352));
	goto T1156;
T1156:;
	if(!(endp_prop((V352)))){
	goto T1157;}
	goto T1152;
	goto T1157;
T1157:;
	(void)((*(LnkLI320))((V353)));
	V352= cdr((V352));
	V353= car((V352));
	goto T1156;}
	goto T1152;
T1152:;
	{object V354;
	object V355;
	V354= cadr((V329));
	V355= car((V354));
	goto T1171;
T1171:;
	if(!(endp_prop((V354)))){
	goto T1172;}
	goto T1167;
	goto T1172;
T1172:;
	(void)((*(LnkLI320))(car((V355))));
	V354= cdr((V354));
	V355= car((V354));
	goto T1171;}
	goto T1167;
T1167:;
	if((caddr((V329)))==Cnil){
	goto T1182;}
	(void)((*(LnkLI320))(caddr((V329))));
	goto T1182;
T1182:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1188;}
	V327= symbol_value(VV[129]);
	goto T1186;
	goto T1188;
T1188:;
	V327= symbol_value(VV[141]);
	goto T1186;
T1186:;
	{object V356;
	object V357;
	V356= car(cddddr((V329)));
	V357= car((V356));
	goto T1194;
T1194:;
	if(!(endp_prop((V356)))){
	goto T1195;}
	goto T1190;
	goto T1195;
T1195:;
	(void)((*(LnkLI320))(cadr((V357))));
	V356= cdr((V356));
	V357= car((V356));
	goto T1194;}
	goto T1190;
T1190:;
	{object V358;
	object V359;
	V358= car(cddddr((V329)));
	V359= car((V358));
	goto T1209;
T1209:;
	if(!(endp_prop((V358)))){
	goto T1210;}
	goto T1205;
	goto T1210;
T1210:;
	(void)((*(LnkLI320))(cadddr((V359))));
	V358= cdr((V358));
	V359= car((V358));
	goto T1209;}
	goto T1205;
T1205:;
	{object V360;
	object V361;
	V361= car((V329));
	V360= (V324);
	goto T1223;
T1223:;
	if(((V360))!=Cnil){
	goto T1224;}
	goto T1220;
	goto T1224;
T1224:;
	(void)((*(LnkLI321))(car((V361)),car((V360))));
	V360= cdr((V360));
	V361= cdr((V361));
	goto T1223;}
	goto T1220;
T1220:;
	if((cadr((V329)))==Cnil){
	goto T1233;}
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	princ_str("\n	narg = narg - ",VV[25]);
	V362 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI274))(V362));
	princ_char(59,VV[25]);
	{object V363;
	V363= Ct;
	{object V364;
	object V365;
	V364= cadr((V329));
	V365= car((V364));
	goto T1244;
T1244:;
	if(!(endp_prop((V364)))){
	goto T1245;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1236;
	goto T1245;
T1245:;
	{object V366;
	setq(VV[165],number_plus(symbol_value(VV[165]),small_fixnum(1)));
	V366= make_cons(symbol_value(VV[165]),Cnil);
	V325= make_cons((V366),(V325));}
	princ_str("\n	if (",VV[25]);
	if((cdr((V325)))==Cnil){
	goto T1258;}
	V367= VV[166];
	goto T1256;
	goto T1258;
T1258:;
	V367= VV[167];
	goto T1256;
T1256:;
	(void)((*(LnkLI274))(V367));
	princ_str("narg <= 0) ",VV[25]);
	if(type_of(car((V325)))!=t_cons)FEwrong_type_argument(Scons,car((V325)));
	(car((V325)))->c.c_cdr = Ct;
	(void)(car((V325)));
	princ_str("goto T",VV[25]);
	(void)((*(LnkLI274))(car(car((V325)))));
	princ_char(59,VV[25]);
	princ_str("\n	else {",VV[25]);
	if(((V330))!=Cnil){
	goto T1268;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1268;
T1268:;
	V368= car((V365));
	if(((V363))==Cnil){
	goto T1277;}
	V369= make_cons(VV[168],Cnil);
	goto T1275;
	goto T1277;
T1277:;
	V369= make_cons(VV[169],Cnil);
	goto T1275;
T1275:;
	(void)((*(LnkLI321))(/* INLINE-ARGS */V368,V369));
	V363= Cnil;
	princ_char(125,VV[25]);
	if((caddr((V365)))==Cnil){
	goto T1283;}
	(void)((*(LnkLI321))(caddr((V365)),Ct));
	goto T1283;
T1283:;
	V364= cdr((V364));
	V365= car((V364));
	goto T1244;}}
	goto T1236;
T1236:;
	V325= nreverse((V325));
	{object V370;
	setq(VV[165],number_plus(symbol_value(VV[165]),small_fixnum(1)));
	V370= make_cons(symbol_value(VV[165]),Cnil);
	princ_str("\n	--narg; ",VV[25]);
	if(type_of((V370))!=t_cons)FEwrong_type_argument(Scons,(V370));
	((V370))->c.c_cdr = Ct;
	princ_str("goto T",VV[25]);
	(void)((*(LnkLI274))(car((V370))));
	princ_char(59,VV[25]);
	{object V371;
	object V372;
	V371= cadr((V329));
	V372= car((V371));
	goto T1306;
T1306:;
	if(!(endp_prop((V371)))){
	goto T1307;}
	goto T1302;
	goto T1307;
T1307:;
	if((cdr(car((V325))))==Cnil){
	goto T1311;}
	princ_str("\n	goto T",VV[25]);
	(void)((*(LnkLI274))(car(car((V325)))));
	princ_char(59,VV[25]);
	princ_str("\nT",VV[25]);
	(void)((*(LnkLI274))(car(car((V325)))));
	princ_str(":;",VV[25]);
	goto T1311;
T1311:;
	{object V373;
	V373= car((V325));
	V325= cdr((V325));}
	(void)((*(LnkLI322))(car((V372)),cadr((V372))));
	if((caddr((V372)))==Cnil){
	goto T1326;}
	(void)((*(LnkLI321))(caddr((V372)),Cnil));
	goto T1326;
T1326:;
	V371= cdr((V371));
	V372= car((V371));
	goto T1306;}
	goto T1302;
T1302:;
	if((cdr((V370)))==Cnil){
	goto T1233;}
	princ_str("\n	goto T",VV[25]);
	(void)((*(LnkLI274))(car((V370))));
	princ_char(59,VV[25]);
	princ_str("\nT",VV[25]);
	(void)((*(LnkLI274))(car((V370))));
	princ_str(":;",VV[25]);}
	goto T1233;
T1233:;
	if((caddr((V329)))==Cnil){
	goto T1343;}
	V328= (VFUN_NARGS=0,(*(LnkLI323))());
	{object V374;
	V374= cadr((V329));
	if(((V374))==Cnil){
	goto T1351;}
	goto T1348;
	goto T1351;
T1351:;
	princ_str("\n	narg= narg - ",VV[25]);
	V375 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI274))(V375));
	princ_char(59,VV[25]);}
	goto T1348;
T1348:;
	if(((V330))!=Cnil){
	goto T1356;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1356;
T1356:;
	princ_str("\n	V",VV[25]);
	(void)((*(LnkLI274))((V328)));
	princ_str(" = ",VV[25]);
	V376= structure_ref(caddr((V329)),VV[69],5);
	if(!((/* INLINE-ARGS */V376)==(VV[171]))){
	goto T1367;}
	base[7]= Ct;
	goto T1366;
	goto T1367;
T1367:;
	base[7]= symbol_value(VV[170]);
	goto T1366;
T1366:;
	bds_bind(VV[170],base[7]);
	if((cadddr((V329)))==Cnil){
	goto T1371;}
	if(((VV[170]->s.s_dbind))==Cnil){
	goto T1374;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[25]);
	goto T1369;
	goto T1374;
T1374:;
	princ_str("make_list(narg);",VV[25]);
	goto T1369;
	goto T1371;
T1371:;
	if(((VV[170]->s.s_dbind))==Cnil){
	goto T1379;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));",VV[25]);
	goto T1369;
	goto T1379;
T1379:;
	princ_str("list_vector_new(narg,first,ap);",VV[25]);
	goto T1369;
T1369:;
	V377= caddr((V329));
	V378= list(2,VV[155],(V328));
	V379= (*(LnkLI321))(/* INLINE-ARGS */V377,/* INLINE-ARGS */V378);
	bds_unwind1;
	goto T1343;
T1343:;
	if((cadddr((V329)))==Cnil){
	goto T1383;}
	{object V380;
	V380= caddr((V329));
	if(((V380))==Cnil){
	goto T1389;}
	goto T1386;
	goto T1389;
T1389:;
	{object V381;
	V381= cadr((V329));
	if(((V381))==Cnil){
	goto T1393;}
	goto T1386;
	goto T1393;
T1393:;
	princ_str("\n	narg= narg - ",VV[25]);
	V382 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI274))(V382));
	princ_char(59,VV[25]);}}
	goto T1386;
T1386:;
	if(((V330))!=Cnil){
	goto T1398;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1398;
T1398:;
	{object V383;
	object V384= car(cddddr((V329)));
	if(endp(V384)){
	V326= Cnil;
	goto T1405;}
	base[7]=V383=MMcons(Cnil,Cnil);
	goto T1406;
T1406:;
	(V383->c.c_car)= caddr((V384->c.c_car));
	V384=MMcdr(V384);
	if(endp(V384)){
	V326= base[7];
	goto T1405;}
	V383=MMcdr(V383)=MMcons(Cnil,Cnil);
	goto T1406;}
	goto T1405;
T1405:;
	{object V385;
	object V386;
	V386= make_fixnum((long)length(car(cddddr((V329)))));
	V385= Cnil;
	{register object V387;
	object V388;
	object V389;
	V387= (V326);
	V388= car(cddddr((V329)));
	V389= car((V388));
	goto T1414;
T1414:;
	if(((V387))!=Cnil){
	goto T1415;}
	goto T1409;
	goto T1415;
T1415:;
	if(!((caar((V387)))==(VV[172]))){
	goto T1420;}
	if((caddr(car((V387))))==(Cnil)){
	goto T1419;}
	goto T1420;
T1420:;
	V385= Ct;
	goto T1419;
T1419:;
	if(!((caar((V387)))==(VV[172]))){
	goto T1426;}
	{object V390;
	V390= caddr(car((V387)));
	if(!(((V390))==(Cnil))){
	goto T1432;}
	goto T1430;
	goto T1432;
T1432:;
	if(type_of((V390))==t_cons){
	goto T1434;}
	goto T1426;
	goto T1434;
T1434:;
	{register object x= car((V390)),V391= VV[173];
	while(!endp(V391))
	if(eql(x,V391->c.c_car)){
	goto T1430;
	}else V391=V391->c.c_cdr;
	goto T1426;}}
	goto T1430;
T1430:;
	V392= structure_ref(cadddr((V389)),VV[69],1);
	if((/* INLINE-ARGS */V392)==(VV[174])){
	goto T1425;}
	goto T1426;
T1426:;
	V385= Ct;
	if(type_of(V387)!=t_cons)FEwrong_type_argument(Scons,V387);
	(V387)->c.c_car = small_fixnum(0);
	goto T1425;
T1425:;
	V387= cdr((V387));
	V388= cdr((V388));
	V389= car((V388));
	goto T1414;}
	goto T1409;
T1409:;
	if(!(((long)length((V326)))>(15))){
	goto T1447;}
	V385= Ct;
	goto T1447;
T1447:;
	princ_str("\n	{",VV[25]);
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	bds_bind(VV[25],symbol_value(VV[31]));
	if(((V385))==Cnil){
	goto T1455;}
	princ_char(10,VV[31]);
	princ_str("static object VK",VV[25]);
	(void)((*(LnkLI274))((V321)));
	princ_str("defaults[",VV[25]);
	V395 = make_fixnum((long)length((V326)));
	(void)((*(LnkLI274))(V395));
	princ_str("]={",VV[25]);
	{object V396;
	register object V397;
	V396= (V326);
	V397= Cnil;
	goto T1467;
T1467:;
	if(((V396))!=Cnil){
	goto T1468;}
	goto T1465;
	goto T1468;
T1468:;
	princ_str("(void *)",VV[25]);
	if(!(eql(car((V396)),small_fixnum(0)))){
	goto T1476;}
	princ_str("-1",VV[25]);
	goto T1474;
	goto T1476;
T1476:;
	V397= caddr(car((V396)));
	if(!(((V397))==(Cnil))){
	goto T1480;}
	princ_str("-2",VV[25]);
	goto T1474;
	goto T1480;
T1480:;
	if(!(type_of((V397))==t_cons)){
	goto T1485;}
	if(!((car((V397)))==(VV[175]))){
	goto T1485;}
	(void)((*(LnkLI274))(cadr((V397))));
	goto T1474;
	goto T1485;
T1485:;
	if(!(type_of((V397))==t_cons)){
	goto T1491;}
	if(!((car((V397)))==(VV[176]))){
	goto T1491;}
	V398= (*(LnkLI325))(caddr((V397)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V398));
	goto T1474;
	goto T1491;
T1491:;
	(void)((*(LnkLI326))());
	goto T1474;
T1474:;
	if((cdr((V396)))==Cnil){
	goto T1496;}
	princ_char(44,VV[25]);
	goto T1496;
T1496:;
	V396= cdr((V396));
	goto T1467;}
	goto T1465;
T1465:;
	princ_str("};",VV[25]);
	goto T1455;
T1455:;
	princ_char(10,VV[31]);
	princ_str("static struct { short n,allow_other_keys;",VV[25]);
	princ_str("object *defaults;",VV[25]);
	princ_str("\n	 KEYTYPE keys[",VV[25]);
	(void)((*(LnkLI274))((number_compare((V386),small_fixnum(1))>=0?((V386)):small_fixnum(1))));
	princ_str("];",VV[25]);
	princ_str("} LI",VV[25]);
	(void)((*(LnkLI274))((V321)));
	princ_str("key=",VV[25]);
	princ_char(123,VV[25]);
	V399 = make_fixnum((long)length(car(cddddr((V329)))));
	(void)((*(LnkLI274))(V399));
	princ_char(44,VV[25]);
	if((cadr(cddddr((V329))))==Cnil){
	goto T1523;}
	V400= small_fixnum(1);
	goto T1521;
	goto T1523;
T1523:;
	V400= small_fixnum(0);
	goto T1521;
T1521:;
	(void)((*(LnkLI274))(V400));
	princ_char(44,VV[25]);
	if(((V385))==Cnil){
	goto T1528;}
	princ_str("VK",VV[25]);
	(void)((*(LnkLI274))((V321)));
	princ_str("defaults",VV[25]);
	goto T1526;
	goto T1528;
T1528:;
	princ_str("Cstd_key_defaults",VV[25]);
	goto T1526;
T1526:;
	if((car(cddddr((V329))))==Cnil){
	goto T1534;}
	princ_str(",{",VV[25]);
	{object V401;
	V401= reverse(car(cddddr((V329))));
	goto T1542;
T1542:;
	if(((V401))!=Cnil){
	goto T1543;}
	goto T1539;
	goto T1543;
T1543:;
	princ_str("(void *)",VV[25]);
	V402= (*(LnkLI327))(caar((V401)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V402));
	if((cdr((V401)))==Cnil){
	goto T1551;}
	princ_char(44,VV[25]);
	goto T1551;
T1551:;
	V401= cdr((V401));
	goto T1542;}
	goto T1539;
T1539:;
	princ_char(125,VV[25]);
	goto T1534;
T1534:;
	princ_str("};",VV[25]);
	bds_unwind1;
	if((caddr((V329)))==Cnil){
	goto T1562;}
	princ_str("\n	parse_key_rest_new(",VV[25]);
	V403= list(2,VV[155],(V328));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V403));
	princ_char(44,VV[25]);
	goto T1560;
	goto T1562;
T1562:;
	princ_str("\n	parse_key_new_new(",VV[25]);
	goto T1560;
T1560:;
	if(!(eql(small_fixnum(0),symbol_value(VV[141])))){
	goto T1568;}
	setq(VV[141],small_fixnum(1));
	goto T1568;
T1568:;
	princ_str("narg,",VV[25]);
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1576;}
	V404= VV[177];
	goto T1574;
	goto T1576;
T1576:;
	V404= VV[178];
	goto T1574;
T1574:;
	(void)((*(LnkLI274))(V404));
	princ_char(43,VV[25]);
	(void)((*(LnkLI274))((V327)));
	princ_str(",(struct key *)(void *)&LI",VV[25]);
	(void)((*(LnkLI274))((V321)));
	princ_str("key,first,ap);",VV[25]);}
	goto T1383;
T1383:;
	{object V405;
	register object V406;
	V405= car(cddddr((V329)));
	V406= car((V405));
	goto T1587;
T1587:;
	if(!(endp_prop((V405)))){
	goto T1588;}
	goto T1583;
	goto T1588;
T1588:;
	{object V408;
	V408= car((V326));
	V326= cdr((V326));
	V407= (V408);}
	if(eql(small_fixnum(0),V407)){
	goto T1594;}
	(void)((*(LnkLI328))(cadr((V406))));
	goto T1592;
	goto T1594;
T1594:;
	princ_str("\n	if(",VV[25]);
	V409= structure_ref(cadr((V406)),VV[69],2);
	(void)((*(LnkLI329))(/* INLINE-ARGS */V409));
	princ_str("==0){",VV[25]);
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	V410= (*(LnkLI322))(cadr((V406)),caddr((V406)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V411= structure_ref(cadddr((V406)),VV[69],1);
	if((/* INLINE-ARGS */V411)==(VV[174])){
	goto T1606;}
	(void)((*(LnkLI321))(cadddr((V406)),Cnil));
	goto T1606;
T1606:;
	princ_str("\n	}else{",VV[25]);
	(void)((*(LnkLI328))(cadr((V406))));
	V412= structure_ref(cadddr((V406)),VV[69],1);
	if((/* INLINE-ARGS */V412)==(VV[174])){
	goto T1612;}
	(void)((*(LnkLI321))(cadddr((V406)),Ct));
	goto T1612;
T1612:;
	princ_char(125,VV[25]);
	goto T1592;
T1592:;
	V405= cdr((V405));
	V406= car((V405));
	goto T1587;}
	goto T1583;
T1583:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T1621;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[25]);
	princ_str("\nTTL:;",VV[25]);
	goto T1621;
T1621:;
	base[7]= caddr(cddr((V322)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk315)();
	vs_top=sup;
	if(((V330))==Cnil){
	goto T1631;}
	V330= Cnil;
	princ_str("\n	va_end(ap);",VV[25]);
	goto T1631;
T1631:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1639;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1639;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1639;}
	goto T1637;
	goto T1639;
T1639:;
	princ_str("\n	base[0]=base[0];",VV[25]);
	goto T1637;
T1637:;
	princ_str("\n	return Cnil;",VV[25]);
	princ_char(125,VV[25]);
	if((base[1])==Cnil){
	goto T1650;}
	princ_str("\n	}",VV[25]);
	goto T1650;
T1650:;
	(void)((*(LnkLI330))());
	V414= get((V320),VV[77],Cnil);
	{object V415 = (*(LnkLI316))((V339),V414);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR25(V415)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFUN-NORMAL	*/

static object LI27(V420,V421,V422,V423)

object V420;register object V421;object V422;object V423;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[179],(V420))));
	if(!(type_of((V421))==t_fixnum||
type_of((V421))==t_bignum||
type_of((V421))==t_ratio||
type_of((V421))==t_shortfloat||
type_of((V421))==t_longfloat||
type_of((V421))==t_complex)){
	goto T1659;}
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V421)));
	princ_str("()",VV[25]);
	goto T1657;
	goto T1659;
T1659:;
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V421)));
	princ_str("()",VV[25]);
	goto T1657;
T1657:;
	princ_str("\n{",VV[25]);
	princ_str("register object *",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[20])));
	princ_str("base=vs_base;",VV[25]);
	V424= structure_ref(cadr((V422)),VV[62],1);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V424,(V421),VV[148]));
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[20])));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[136])));
	princ_char(59,VV[25]);
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[136])));
	if((symbol_value(VV[163]))==Cnil){
	goto T1684;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[136])));
	princ_str(");",VV[25]);
	goto T1682;
	goto T1684;
T1684:;
	princ_str("\n	vs_check;",VV[25]);
	goto T1682;
T1682:;
	if(((V423))==Cnil){
	goto T1690;}
	princ_str("\n	bds_check;",VV[25]);
	goto T1690;
T1690:;
	if((symbol_value(VV[149]))==Cnil){
	goto T1694;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T1694;
T1694:;
	(void)((VFUN_NARGS=3,(*(LnkLI331))(caddr((V422)),caddr(cddr((V422))),(V420))));
	princ_str("\n}",VV[25]);
	{object V425;
	V425= make_cons(symbol_value(VV[136]),symbol_value(VV[130]));
	setq(VV[33],make_cons((V425),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[136])));
	{object V426 = (*(LnkLI332))();
	VMR26(V426)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-V*-MACROS	*/

static object LI28(V429,V430)

register object V429;object V430;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V431;
	V431= make_cons((V429),symbol_value(VV[130]));
	setq(VV[33],make_cons((V431),symbol_value(VV[33])));}
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1712;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1712;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1712;}
	princ_str("\n#define VMB",VV[31]);
	(void)((*(LnkLI277))((V429)));
	goto T1710;
	goto T1712;
T1712:;
	princ_str("\n#define VMB",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_char(32,VV[31]);
	princ_str("register object *",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[20])));
	princ_str("base=vs_top;",VV[31]);
	goto T1710;
T1710:;
	(void)((*(LnkLI332))());
	if((symbol_value(VV[138]))==Cnil){
	goto T1729;}
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_char(32,VV[31]);
	princ_str(" register object *",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[20])));
	princ_str("sup=vs_top+",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[130])));
	princ_str(";vs_top=sup;",VV[31]);
	goto T1727;
	goto T1729;
T1729:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1740;}
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI277))((V429)));
	goto T1727;
	goto T1740;
T1740:;
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(" vs_top += ",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[130])));
	princ_char(59,VV[31]);
	goto T1727;
T1727:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1751;}
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI277))((V429)));
	goto T1749;
	goto T1751;
T1751:;
	if((symbol_value(VV[163]))==Cnil){
	goto T1756;}
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(" vs_reserve(",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[130])));
	princ_str(");",VV[31]);
	goto T1749;
	goto T1756;
T1756:;
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(" vs_check;",VV[31]);
	goto T1749;
T1749:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1767;}
	princ_str("\n#define VMR",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str("(VMT",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(") return(VMT",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(");",VV[31]);
	{object V432 = Cnil;
	VMR27(V432)}
	goto T1767;
T1767:;
	princ_str("\n#define VMR",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str("(VMT",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(") vs_top=base ; return(VMT",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(");",VV[31]);
	{object V433 = Cnil;
	VMR27(V433)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-REQUIREDS	*/

static object LI29(V436,V437)

object V436;object V437;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{register object V438;
	V438= (V436);
	goto T1785;
T1785:;
	if(!(endp_prop((V438)))){
	goto T1786;}
	goto T1783;
	goto T1786;
T1786:;
	{register object V439;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V439= symbol_value(VV[88]);
	(void)(structure_set(car((V438)),VV[69],4,(V439)));
	princ_char(86,VV[25]);
	(void)((*(LnkLI274))((V439)));}
	if(endp_prop(cdr((V438)))){
	goto T1796;}
	princ_char(44,VV[25]);
	goto T1796;
T1796:;
	V438= cdr((V438));
	goto T1785;}
	goto T1783;
T1783:;
	princ_str(")\n",VV[25]);
	if(((V436))==Cnil){
	goto T1806;}
	princ_char(10,VV[25]);
	{register object V440;
	register object V441;
	register object V442;
	V440= (V436);
	V441= (V437);
	V442= Cnil;
	goto T1810;
T1810:;
	if(!(endp_prop((V440)))){
	goto T1811;}
	princ_char(59,VV[25]);
	{object V443 = Cnil;
	VMR28(V443)}
	goto T1811;
T1811:;
	if(((V442))==Cnil){
	goto T1816;}
	princ_char(59,VV[25]);
	goto T1816;
T1816:;
	(void)((*(LnkLI274))(symbol_value(VV[20])));
	V444= (*(LnkLI333))(car((V440)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V444));
	V445= (*(LnkLI280))(car((V441)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V445));
	V442= car((V441));
	princ_char(86,VV[25]);
	V446= structure_ref(car((V440)),VV[69],4);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V446));
	V440= cdr((V440));
	V441= cdr((V441));
	goto T1810;}
	goto T1806;
T1806:;
	{object V447 = Cnil;
	VMR28(V447)}
	return Cnil;
}
/*	local entry for function ADD-DEBUG-INFO	*/

static object LI30(V450,V451)

object V450;object V451;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V452;
	V452= Cnil;
	{object V453;
	V453= (number_compare(symbol_value(VV[114]),small_fixnum(2))>=0?Ct:Cnil);
	if(((V453))==Cnil){
	goto T1836;}
	{object V454 = (V453);
	VMR29(V454)}
	goto T1836;
T1836:;
	if((get((V450),VV[115],Cnil))!=Cnil){
	goto T1839;}
	{object V455 = (VFUN_NARGS=2,(*(LnkLI334))(VV[180],(V450)));
	VMR29(V455)}
	goto T1839;
T1839:;
	(void)(remprop((V450),VV[115]));
	{register object V456;
	V456= small_fixnum(0);
	{register object V457;
	register object V458;
	V457= structure_ref(cadr((V451)),VV[62],1);
	V458= car((V457));
	goto T1846;
T1846:;
	if(!(endp_prop((V457)))){
	goto T1847;}
	goto T1842;
	goto T1847;
T1847:;
	V459= structure_ref((V458),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V459)==t_cons)){
	goto T1851;}
	V460= structure_ref((V458),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V460))==t_fixnum)){
	goto T1851;}
	V461= structure_ref((V458),VV[69],2);
	{object V462= cdr(/* INLINE-ARGS */V461);
	V456= (number_compare((V456),V462)>=0?((V456)):V462);}
	goto T1851;
T1851:;
	V457= cdr((V457));
	V458= car((V457));
	goto T1846;}
	goto T1842;
T1842:;
	base[0]= one_plus((V456));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V452= vs_base[0];
	{register object V463;
	register object V464;
	V463= structure_ref(cadr((V451)),VV[62],1);
	V464= car((V463));
	goto T1869;
T1869:;
	if(!(endp_prop((V463)))){
	goto T1870;}
	goto T1865;
	goto T1870;
T1870:;
	V465= structure_ref((V464),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V465)==t_cons)){
	goto T1874;}
	V466= structure_ref((V464),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V466))==t_fixnum)){
	goto T1874;}
	{object V467;
	register object V469;
	V470= structure_ref((V464),VV[69],2);
	V467= cdr(/* INLINE-ARGS */V470);
	V469= structure_ref((V464),VV[69],0);
	if(type_of(nthcdr(fixint((V467)),V452))!=t_cons)FEwrong_type_argument(Scons,nthcdr(fixint((V467)),V452));
	(nthcdr(fixint((V467)),V452))->c.c_car = (V469);
	(void)(nthcdr(fixint((V467)),V452));}
	goto T1874;
T1874:;
	V463= cdr((V463));
	V464= car((V463));
	goto T1869;}
	goto T1865;
T1865:;
	(void)(sputprop((V450),VV[116],(V452)));
	{object V471;
	V471= get((V450),VV[116],Cnil);
	if(((V471))==Cnil){
	goto T1890;}
	if((cdr((V471)))!=Cnil){
	goto T1889;}
	if((car((V471)))==Cnil){
	goto T1890;}
	goto T1889;
T1889:;
	V472= list(2,VV[91],(V450));
	V473= list(3,VV[116],/* INLINE-ARGS */V472,list(2,VV[91],(V471)));
	{object V474 = (VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V473));
	VMR29(V474)}
	goto T1890;
T1890:;
	{object V475 = Cnil;
	VMR29(V475)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ANALYZE-REGS	*/

static object LI31(V478,V479)

object V478;object V479;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V480;
	V480= number_minus(symbol_value(VV[181]),(V479));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[182]))==0)){
	goto T1898;}
	V481= (VFUN_NARGS=1,(*(LnkLI336))((V478)));
	{long V482 = (long)(*(LnkLI335))(/* INLINE-ARGS */V481,(V480));
	VMR30((object)V482)}
	goto T1898;
T1898:;
	{register object V483;
	register object V484;
	V483= Cnil;
	V484= Cnil;
	{register object V485;
	register object V486;
	V485= (V478);
	V486= car((V485));
	goto T1904;
T1904:;
	if(!(endp_prop((V485)))){
	goto T1905;}
	goto T1900;
	goto T1905;
T1905:;
	V488= structure_ref((V486),VV[69],5);
	{register object x= /* INLINE-ARGS */V488,V487= VV[183];
	while(!endp(V487))
	if(x==(V487->c.c_car)){
	goto T1912;
	}else V487=V487->c.c_cdr;
	goto T1911;}
	goto T1912;
T1912:;{object V489;
	{register object x= (V486),V490= (V484);
	while(!endp(V490))
	if(eql(x,V490->c.c_car)){
	V489= V490;
	goto T1914;
	}else V490=V490->c.c_cdr;
	V489= Cnil;}
	goto T1914;
T1914:;
	if(V489==Cnil)goto T1913;
	goto T1909;
	goto T1913;
T1913:;}
	{register object V491;
	V491= (V486);
	V484= make_cons((V491),(V484));
	goto T1909;}
	goto T1911;
T1911:;{object V492;
	{register object x= (V486),V493= (V483);
	while(!endp(V493))
	if(x==(V493->c.c_car)){
	V492= V493;
	goto T1918;
	}else V493=V493->c.c_cdr;
	V492= Cnil;}
	goto T1918;
T1918:;
	if(V492==Cnil)goto T1917;
	goto T1909;
	goto T1917;
T1917:;}
	{register object V494;
	V494= (V486);
	V484= make_cons((V494),(V484));}
	goto T1909;
T1909:;
	V485= cdr((V485));
	V486= car((V485));
	goto T1904;}
	goto T1900;
T1900:;
	(void)((*(LnkLI335))((V483),(V480)));
	{long V495 = (long)(*(LnkLI335))((V484),symbol_value(VV[182]));
	VMR30((object)V495)}}}
	base[0]=base[0];
}
/*	local entry for function ANALYZE-REGS1	*/

static object LI32(V498,V499)

object V498;object V499;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{register long V500;
	register long V501;
	long V502;
	long V503;
	register long V504;
	V500= 0;
	V501= 3;
	V502= 100000;
	V503= fix((V499));
	V504= 0;
	V498= (VFUN_NARGS=1,(*(LnkLI336))((V498)));
	goto T1935;
T1935:;
	{register object V505;
	object V506;
	V505= (V498);
	V506= car((V505));
	goto T1941;
T1941:;
	if(!(endp_prop((V505)))){
	goto T1942;}
	goto T1937;
	goto T1942;
T1942:;
	V500= fix(structure_ref((V506),VV[69],6));
	if(!((V500)>=(V501))){
	goto T1948;}
	V504= (long)(V504)+(1);
	if(!((V500)<(V502))){
	goto T1953;}
	V502= V500;
	goto T1953;
T1953:;
	if(!((V504)>(V503))){
	goto T1948;}
	goto T1936;
	goto T1948;
T1948:;
	V505= cdr((V505));
	V506= car((V505));
	goto T1941;}
	goto T1937;
T1937:;
	if(!((V504)<(V503))){
	goto T1964;}
	V501= (long)(V501)-(1);
	goto T1964;
T1964:;
	{register object V507;
	register object V508;
	V507= (V498);
	V508= car((V507));
	goto T1972;
T1972:;
	if(!(endp_prop((V507)))){
	goto T1973;}
	goto T1968;
	goto T1973;
T1973:;
	{long V509= fix(structure_ref((V508),VV[69],6));
	if(!((/* INLINE-ARGS */V509)<(V501))){
	goto T1977;}}
	(void)(structure_set((V508),VV[69],6,small_fixnum(0)));
	goto T1977;
T1977:;
	V507= cdr((V507));
	V508= car((V507));
	goto T1972;}
	goto T1968;
T1968:;
	{long V510 = V501;
	VMR31((object)V510)}
	goto T1936;
T1936:;
	V504= 0;
	V501= (long)(V502)+(1);
	V502= 1000000;
	goto T1935;}
	base[0]=base[0];
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI33(V515,V516,V517,V518)

object V515;object V516;object V517;object V518;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if((get((V515),VV[102],Cnil))==Cnil){
	goto T1992;}
	{object V519 = Cnil;
	VMR32(V519)}
	goto T1992;
T1992:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[186],(V515))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V516)));
	princ_str("()",VV[25]);
	princ_str("\n{	register object *base=vs_base;",VV[25]);
	if((symbol_value(VV[163]))!=Cnil){
	goto T2003;}
	if((symbol_value(VV[164]))==Cnil){
	goto T2002;}
	goto T2003;
T2003:;
	princ_str("\n	check_arg(",VV[25]);
	V520 = make_fixnum((long)length((V517)));
	(void)((*(LnkLI274))(V520));
	princ_str(");",VV[25]);
	goto T2002;
T2002:;
	princ_str("\n	base[0]=",VV[25]);
	{object V522= (V518);
	if((V522!= VV[89]))goto T2014;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2016;}
	V521= VV[187];
	goto T2013;
	goto T2016;
T2016:;
	V521= VV[188];
	goto T2013;
	goto T2014;
T2014:;
	if((V522!= VV[142]))goto T2018;
	V521= VV[189];
	goto T2013;
	goto T2018;
T2018:;
	if((V522!= VV[143]))goto T2019;
	V521= VV[190];
	goto T2013;
	goto T2019;
T2019:;
	if((V522!= VV[144]))goto T2020;
	V521= VV[191];
	goto T2013;
	goto T2020;
T2020:;
	V521= VV[192];}
	goto T2013;
T2013:;
	(void)((*(LnkLI274))(V521));
	princ_str("(LI",VV[25]);
	(void)((*(LnkLI274))((V516)));
	princ_char(40,VV[25]);
	{register object V523;
	register long V524;
	V524= 0;
	V523= (V517);
	goto T2027;
T2027:;
	if(!(endp_prop((V523)))){
	goto T2028;}
	goto T2024;
	goto T2028;
T2028:;
	{object V526= car((V523));
	if((V526!= VV[89]))goto T2035;
	V525= VV[193];
	goto T2034;
	goto T2035;
T2035:;
	if((V526!= VV[142]))goto T2036;
	V525= VV[194];
	goto T2034;
	goto T2036;
T2036:;
	if((V526!= VV[143]))goto T2037;
	V525= VV[195];
	goto T2034;
	goto T2037;
T2037:;
	if((V526!= VV[144]))goto T2038;
	V525= VV[196];
	goto T2034;
	goto T2038;
T2038:;
	V525= VV[197];}
	goto T2034;
T2034:;
	(void)((*(LnkLI274))(V525));
	princ_str("(base[",VV[25]);
	V527 = make_fixnum(V524);
	(void)((*(LnkLI274))(V527));
	princ_str("])",VV[25]);
	if(endp_prop(cdr((V523)))){
	goto T2042;}
	princ_char(44,VV[25]);
	goto T2042;
T2042:;
	V523= cdr((V523));
	V524= (long)(V524)+1;
	goto T2027;}
	goto T2024;
T2024:;
	princ_str("));",VV[25]);
	princ_str("\n	vs_top=(vs_base=base)+1;",VV[25]);
	princ_str("\n}",VV[25]);
	{object V528 = Cnil;
	VMR32(V528)}
	return Cnil;
}
/*	local entry for function REP-TYPE	*/

static object LI34(V530)

object V530;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V531= (V530);
	if((V531!= VV[89]))goto T2055;
	{object V532 = VV[198];
	VMR33(V532)}
	goto T2055;
T2055:;
	if((V531!= VV[261]))goto T2056;
	{object V533 = VV[199];
	VMR33(V533)}
	goto T2056;
T2056:;
	if((V531!= VV[142]))goto T2057;
	{object V534 = VV[200];
	VMR33(V534)}
	goto T2057;
T2057:;
	if((V531!= VV[144]))goto T2058;
	{object V535 = VV[201];
	VMR33(V535)}
	goto T2058;
T2058:;
	if((V531!= VV[143]))goto T2059;
	{object V536 = VV[202];
	VMR33(V536)}
	goto T2059;
T2059:;
	{object V537 = VV[203];
	VMR33(V537)}}
	return Cnil;
}
/*	local entry for function T1DEFMACRO	*/

static object LI35(V539)

register object V539;
{	 VMB34 VMS34 VMV34
	bds_check;
	goto TTL;
TTL:;
	if(endp_prop((V539))){
	goto T2061;}
	if(!(endp_prop(cdr((V539))))){
	goto T2060;}
	goto T2061;
T2061:;
	V540 = make_fixnum((long)length((V539)));
	(void)((*(LnkLI283))(VV[204],small_fixnum(2),V540));
	goto T2060;
T2060:;
	if(type_of(car((V539)))==t_symbol){
	goto T2065;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[205],car((V539)))));
	goto T2065;
T2065:;
	V541= make_cons(VV[204],(V539));
	(void)((*(LnkLI268))(Ct,/* INLINE-ARGS */V541));
	setq(VV[6],Ct);
	{register object V542;
	object V543;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V543= symbol_value(VV[61]);
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[59],Cnil);
	V542= Cnil;
	V542= (*(LnkLI337))(car((V539)),cadr((V539)),cddr((V539)));
	(void)((*(LnkLI293))());
	{object V544;
	V544= list(7,VV[204],car((V539)),(V543),cddr((V542)),car((V542)),cadr((V542)),(VV[59]->s.s_dbind));
	setq(VV[24],make_cons((V544),symbol_value(VV[24])));
	{object V545 = symbol_value(VV[24]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR34(V545)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFMACRO	*/

static object LI36(V552,V553,V554,V555,V556,V557)

object V552;object V553;object V554;object V555;object V556;object V557;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	if(((V555))==Cnil){
	goto T2078;}
	V558= list(4,VV[103],list(2,VV[91],(V552)),(V555),VV[206]);
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V558)));
	goto T2078;
T2078:;
	if(((V556))==Cnil){
	goto T2081;}
	V559= list(2,VV[91],(V552));
	V560= list(4,VV[103],/* INLINE-ARGS */V559,list(2,VV[91],(V556)),VV[207]);
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V560)));
	goto T2081;
T2081:;
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI277))((V553)));
	princ_str("();",VV[31]);
	V561= list(2,VV[91],(V552));
	V562= list(3,VV[208],/* INLINE-ARGS */V561,(*(LnkLI301))(VV[209],(V553)));
	{object V563 = (VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V562));
	VMR35(V563)}
	return Cnil;
}
/*	local entry for function T3DEFMACRO	*/

static object LI37(V570,V571,V572,V573,V574,V575)

object V570;object V571;register object V572;object V573;object V574;object V575;
{	 VMB36 VMS36 VMV36
	bds_check;
	goto TTL;
TTL:;
	if((get((V570),VV[210],Cnil))==Cnil){
	goto T2090;}
	bds_bind(VV[20],VV[211]);
	goto T2088;
	goto T2090;
T2090:;
	bds_bind(VV[20],VV[212]);
	goto T2088;
T2088:;
	bds_bind(VV[128],VV[127]);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],small_fixnum(0));
	bds_bind(VV[133],Cnil);
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[213],(V570))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V571)));
	princ_str("()",VV[25]);
	princ_str("\n{register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base=vs_base;",VV[25]);
	V576= structure_ref(car(cddddr((V572))),VV[62],1);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V576,(V571),VV[148]));
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_char(59,VV[25]);
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[163]))==Cnil){
	goto T2116;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_str(");",VV[25]);
	goto T2114;
	goto T2116;
T2116:;
	princ_str("\n	vs_check;",VV[25]);
	goto T2114;
T2114:;
	if(((V575))==Cnil){
	goto T2122;}
	princ_str("\n	bds_check;",VV[25]);
	goto T2122;
T2122:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2126;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T2126;
T2126:;
	base[15]= car((V572));
	base[16]= cadr((V572));
	base[17]= caddr((V572));
	base[18]= cadddr((V572));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk338)();
	vs_top=sup;
	princ_str("\n}",VV[25]);
	{object V577;
	V577= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[33],make_cons((V577),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI277))((VV[136]->s.s_dbind)));
	{object V578 = (*(LnkLI332))();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR36(V578)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1ORDINARY	*/

static object LI38(V580)

register object V580;
{	 VMB37 VMS37 VMV37
	bds_check;
	goto TTL;
TTL:;
	{register object V581;
	V581= Cnil;
	setq(VV[6],Ct);
	if((symbol_value(VV[48]))==Cnil){
	goto T2147;}
	(void)((*(LnkLI268))(Cnil,(V580)));
	{object V582;
	base[0]= VV[214];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V582= vs_base[0];
	V583= listA(3,VV[64],(V582),VV[215]);
	(void)((*(LnkLI289))(/* INLINE-ARGS */V583));
	base[0]= list(5,VV[51],(V582),Cnil,(V580),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk272)();
	vs_top=sup;
	{object V584;
	V584= list(2,VV[216],make_cons((V582),Cnil));
	setq(VV[24],make_cons((V584),symbol_value(VV[24])));
	{object V585 = symbol_value(VV[24]);
	VMR37(V585)}}}
	goto T2147;
T2147:;
	{object V586;
	if(type_of((V580))==t_cons){
	goto T2158;}
	V586= Cnil;
	goto T2157;
	goto T2158;
T2158:;
	if(type_of(car((V580)))==t_symbol){
	goto T2160;}
	V586= Cnil;
	goto T2157;
	goto T2160;
T2160:;
	if(!((car((V580)))==(VV[217]))){
	goto T2164;}
	goto T2162;
	goto T2164;
T2164:;
	base[0]= car((V580));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V587= vs_base[0];
	if((V587)==Cnil){
	goto T2162;}
	V586= Cnil;
	goto T2157;
	goto T2162;
T2162:;
	{register object V588;
	register long V589;
	V588= cdr((V580));
	V589= 1;
	goto T2171;
T2171:;
	if((V589)>=(1000)){
	goto T2173;}
	if(type_of((V588))==t_cons){
	goto T2172;}
	goto T2173;
T2173:;
	V586= Cnil;
	goto T2157;
	goto T2172;
T2172:;
	if(!(type_of(car((V588)))==t_cons)){
	goto T2178;}
	if(!((caar((V588)))==(VV[64]))){
	goto T2178;}
	V581= cadr(car((V588)));
	if(!(type_of((V581))==t_cons)){
	goto T2178;}
	if(!((car((V581)))==(VV[218]))){
	goto T2178;}
	{register object V590;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V590= vs_base[0];
	base[0]= listA(3,VV[51],(V590),cdr((V581)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk272)();
	vs_top=sup;
	base[1]= (V580);
	base[2]= small_fixnum(0);
	base[3]= make_fixnum(V589);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	base[0]= vs_base[0];
	V591= list(2,VV[219],list(2,VV[91],(V590)));
	base[1]= make_cons(/* INLINE-ARGS */V591,Cnil);
	V592 = make_fixnum(V589);
	V593= number_plus(small_fixnum(1),V592);
	base[2]= nthcdr(fixint(/* INLINE-ARGS */V593),(V580));
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V580= vs_base[0];
	goto TTL;}
	goto T2178;
T2178:;
	if(type_of((V588))==t_cons){
	goto T2201;}
	V588= Cnil;
	goto T2200;
	goto T2201;
T2201:;
	V588= cdr((V588));
	goto T2200;
T2200:;
	V589= (long)(1)+(V589);
	goto T2171;}
	goto T2157;
T2157:;
	if(((V586))==Cnil){
	goto T2206;}
	{object V594 = (V586);
	VMR37(V594)}
	goto T2206;
T2206:;
	(void)((*(LnkLI268))(Cnil,(V580)));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	{object V595;
	V595= list(2,VV[216],(V580));
	setq(VV[24],make_cons((V595),symbol_value(VV[24])));}
	{object V596 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR37(V596)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2ORDINARY	*/

static object LI39(V598)

object V598;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{object V599;
	V599= (type_of((V598))!=t_cons?Ct:Cnil);
	if(((V599))==Cnil){
	goto T2214;}
	{object V600 = (V599);
	VMR38(V600)}
	goto T2214;
T2214:;
	{object V601;
	base[0]= (V598);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V601= vs_base[0];
	if(((V601))==Cnil){
	goto T2219;}
	{object V602 = (V601);
	VMR38(V602)}
	goto T2219;
T2219:;
	{object V603 = (VFUN_NARGS=1,(*(LnkLI300))((V598)));
	VMR38(V603)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-LOAD-TIME-SHARP-COMMA	*/

static object LI40()

{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{register object V604;
	register object V605;
	V604= reverse(symbol_value(VV[52]));
	V605= car((V604));
	goto T2224;
T2224:;
	if(!(endp_prop((V604)))){
	goto T2225;}
	{object V606 = Cnil;
	VMR39(V606)}
	goto T2225;
T2225:;
	if(!(type_of((V605))!=t_cons)){
	goto T2229;}
	(void)((*(LnkLI339))());
	goto T2229;
T2229:;
	{register object V607;
	V607= make_cons(VV[220],(V605));
	setq(VV[24],make_cons((V607),symbol_value(VV[24])));}
	V604= cdr((V604));
	V605= car((V604));
	goto T2224;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2SHARP-COMMA	*/

static object LI41(V610,V611)

object V610;object V611;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	V612= list(3,VV[221],(V610),(V611));
	{object V613 = (VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V612));
	VMR40(V613)}
	return Cnil;
}
/*	local entry for function T2DECLARE	*/

static object LI42(V615)

object V615;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V616 = (*(LnkLI339))();
	VMR41(V616)}
	return Cnil;
}
/*	local entry for function T1DEFINE-STRUCTURE	*/

static object LI43(V618)

object V618;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	V619= (*(LnkLI268))(Cnil,Cnil);
	V620= make_cons(((/* INLINE-ARGS */V619)==Cnil?Ct:Cnil),Cnil);
	V621= append((V618),/* INLINE-ARGS */V620);
	V622= make_cons(VV[222],/* INLINE-ARGS */V621);
	(void)((*(LnkLI268))(Ct,/* INLINE-ARGS */V622));
	V623= make_cons(VV[222],(V618));
	{object V624 = (*(LnkLI273))(/* INLINE-ARGS */V623);
	VMR42(V624)}
	return Cnil;
}
/*	local entry for function SET-DBIND	*/

static object LI44(V627,V628)

object V627;object V628;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	princ_str("\n	VV[",VV[25]);
	(void)((*(LnkLI274))((V628)));
	princ_str("]->s.s_dbind = ",VV[25]);
	(void)((*(LnkLI274))((V627)));
	princ_char(59,VV[25]);
	{object V629 = Cnil;
	VMR43(V629)}
	return Cnil;
}
/*	local entry for function T1CLINES	*/

static object LI45(V631)

object V631;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{register object V632;
	register object V633;
	V632= (V631);
	V633= car((V632));
	goto T2251;
T2251:;
	if(!(endp_prop((V632)))){
	goto T2252;}
	goto T2247;
	goto T2252;
T2252:;
	if(type_of((V633))==t_string){
	goto T2256;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[223],(V633))));
	goto T2256;
T2256:;
	V632= cdr((V632));
	V633= car((V632));
	goto T2251;}
	goto T2247;
T2247:;
	{object V634;
	V634= list(2,VV[224],(V631));
	setq(VV[24],make_cons((V634),symbol_value(VV[24])));
	{object V635 = symbol_value(VV[24]);
	VMR44(V635)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3CLINES	*/

static object LI46(V637)

object V637;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{register object V638;
	register object V639;
	V638= (V637);
	V639= car((V638));
	goto T2269;
T2269:;
	if(!(endp_prop((V638)))){
	goto T2270;}
	{object V640 = Cnil;
	VMR45(V640)}
	goto T2270;
T2270:;
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V639)));
	V638= cdr((V638));
	V639= car((V638));
	goto T2269;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFCFUN	*/

static object LI47(V642)

object V642;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{register object V643;
	V643= Cnil;
	if(endp_prop((V642))){
	goto T2284;}
	if(!(endp_prop(cdr((V642))))){
	goto T2283;}
	goto T2284;
T2284:;
	V644 = make_fixnum((long)length((V642)));
	(void)((*(LnkLI283))(VV[225],small_fixnum(2),V644));
	goto T2283;
T2283:;
	if(type_of(car((V642)))==t_string){
	goto T2288;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[226],car((V642)))));
	goto T2288;
T2288:;
	{object V645= cadr((V642));
	if(type_of(V645)==t_fixnum||
type_of(V645)==t_bignum||
type_of(V645)==t_ratio||
type_of(V645)==t_shortfloat||
type_of(V645)==t_longfloat||
type_of(V645)==t_complex){
	goto T2291;}}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[227],cadr((V642)))));
	goto T2291;
T2291:;
	{register object V646;
	register object V647;
	V646= cddr((V642));
	V647= car((V646));
	goto T2298;
T2298:;
	if(!(endp_prop((V646)))){
	goto T2299;}
	goto T2294;
	goto T2299;
T2299:;
	if(!(type_of((V647))==t_string)){
	goto T2305;}
	{register object V648;
	V648= (V647);
	V643= make_cons((V648),(V643));
	goto T2303;}
	goto T2305;
T2305:;
	if(!(type_of((V647))==t_cons)){
	goto T2310;}
	if(!(type_of(car((V647)))==t_symbol)){
	goto T2313;}
	base[2]= car((V647));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2315;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[228],car((V647)))));
	goto T2315;
T2315:;
	{register object V649;
	V650= car((V647));
	V651= (*(LnkLI340))(cdr((V647)));
	V652= make_cons(/* INLINE-ARGS */V650,/* INLINE-ARGS */V651);
	V649= make_cons(/* INLINE-ARGS */V652,Cnil);
	V643= make_cons((V649),(V643));
	goto T2303;}
	goto T2313;
T2313:;
	if(!(type_of(car((V647)))==t_cons)){
	goto T2322;}
	if(!(type_of(caar((V647)))==t_symbol)){
	goto T2322;}
	if(!((caar((V647)))==(VV[91]))){
	goto T2329;}
	if(!(endp_prop(cdar((V647))))){
	goto T2331;}
	goto T2322;
	goto T2331;
T2331:;
	if(!(((endp_prop(cddar((V647)))?Ct:Cnil))==Cnil)){
	goto T2333;}
	goto T2322;
	goto T2333;
T2333:;
	if(!(endp_prop(cdr((V647))))){
	goto T2335;}
	goto T2322;
	goto T2335;
T2335:;
	if(((endp_prop(cddr((V647)))?Ct:Cnil))==Cnil){
	goto T2322;}
	goto T2327;
	goto T2329;
T2329:;
	base[2]= caar((V647));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2322;}
	goto T2327;
T2327:;
	{register object V653;
	V654= caar((V647));
	if(!((caar((V647)))==(VV[91]))){
	goto T2341;}
	V656= (*(LnkLI325))(cadar((V647)));
	V655= make_cons(/* INLINE-ARGS */V656,Cnil);
	goto T2339;
	goto T2341;
T2341:;
	V655= (*(LnkLI340))(cdar((V647)));
	goto T2339;
T2339:;
	V657= make_cons(/* INLINE-ARGS */V654,V655);
	V658= (*(LnkLI340))(cdr((V647)));
	V653= make_cons(/* INLINE-ARGS */V657,/* INLINE-ARGS */V658);
	V643= make_cons((V653),(V643));
	goto T2303;}
	goto T2322;
T2322:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[229],(V647))));
	goto T2303;
	goto T2310;
T2310:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[230],(V647))));
	goto T2303;
T2303:;
	V646= cdr((V646));
	V647= car((V646));
	goto T2298;}
	goto T2294;
T2294:;
	{object V659;
	V660= car((V642));
	V661= cadr((V642));
	V659= list(4,VV[225],/* INLINE-ARGS */V660,/* INLINE-ARGS */V661,reverse((V643)));
	setq(VV[24],make_cons((V659),symbol_value(VV[24])));
	{object V662 = symbol_value(VV[24]);
	VMR46(V662)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFCFUN	*/

static object LI48(V666,V667,V668)

object V666;object V667;object V668;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V669;
	V669= Cnil;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[231],VV[225])));
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V666)));
	princ_str("\n{",VV[25]);
	princ_str("\nobject *vs=vs_top;",VV[25]);
	princ_str("\nobject *old_top=vs_top+",VV[25]);
	(void)((*(LnkLI274))((V667)));
	princ_char(59,VV[25]);
	if(!(number_compare((V667),small_fixnum(0))>0)){
	goto T2364;}
	princ_str("\n	vs_top=old_top;",VV[25]);
	goto T2364;
T2364:;
	princ_str("\n{",VV[25]);
	{object V670;
	register object V671;
	V670= (V668);
	V671= car((V670));
	goto T2374;
T2374:;
	if(!(endp_prop((V670)))){
	goto T2375;}
	goto T2370;
	goto T2375;
T2375:;
	if(!(type_of((V671))==t_string)){
	goto T2381;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V671)));
	goto T2379;
	goto T2381;
T2381:;
	if(!((caar((V671)))==(VV[91]))){
	goto T2386;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))(cadadr((V671))));
	{object V672= caadr((V671));
	if((V672!= VV[74]))goto T2391;
	princ_str("=VV[",VV[25]);
	(void)((*(LnkLI274))(cadar((V671))));
	princ_str("];",VV[25]);
	goto T2379;
	goto T2391;
T2391:;
	princ_str("=object_to_",VV[25]);
	base[1]= symbol_name(caadr((V671)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V673= vs_base[0];
	(void)((*(LnkLI274))(V673));
	princ_str("(VV[",VV[25]);
	(void)((*(LnkLI274))(cadar((V671))));
	princ_str("]);",VV[25]);
	goto T2379;}
	goto T2386;
T2386:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[25]);
	{register object V674;
	register object V675;
	V674= cdar((V671));
	V675= car((V674));
	goto T2408;
T2408:;
	if(!(endp_prop((V674)))){
	goto T2409;}
	goto T2404;
	goto T2409;
T2409:;
	princ_str("\nvs_push(",VV[25]);
	{object V676= car((V675));
	if((V676!= VV[74]))goto T2416;
	(void)((*(LnkLI274))(cadr((V675))));
	goto T2415;
	goto T2416;
T2416:;
	if((V676!= VV[341]))goto T2418;
	princ_str("code_char((long)",VV[25]);
	(void)((*(LnkLI274))(cadr((V675))));
	princ_char(41,VV[25]);
	goto T2415;
	goto T2418;
T2418:;
	if((V676!= VV[342]))goto T2422;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2423;}
	princ_str("CMP",VV[25]);
	goto T2423;
T2423:;
	princ_str("make_fixnum((long)",VV[25]);
	(void)((*(LnkLI274))(cadr((V675))));
	princ_char(41,VV[25]);
	goto T2415;
	goto T2422;
T2422:;
	if((V676!= VV[343]))goto T2430;
	princ_str("make_shortfloat((double)",VV[25]);
	(void)((*(LnkLI274))(cadr((V675))));
	princ_char(41,VV[25]);
	goto T2415;
	goto T2430;
T2430:;
	if((V676!= VV[344]))goto T2434;
	princ_str("make_longfloat((double)",VV[25]);
	(void)((*(LnkLI274))(cadr((V675))));
	princ_char(41,VV[25]);
	goto T2415;
	goto T2434;
T2434:;}
	goto T2415;
T2415:;
	princ_str(");",VV[25]);
	V674= cdr((V674));
	V675= car((V674));
	goto T2408;}
	goto T2404;
T2404:;
	{register object x= caar((V671)),V677= symbol_value(VV[79]);
	while(!endp(V677))
	if(type_of(V677->c.c_car)==t_cons &&eql(x,V677->c.c_car->c.c_car)){
	V669= (V677->c.c_car);
	goto T2449;
	}else V677=V677->c.c_cdr;
	V669= Cnil;}
	goto T2449;
T2449:;
	if(((V669))==Cnil){
	goto T2447;}
	if((symbol_value(VV[149]))==Cnil){
	goto T2451;}
	princ_str("\nihs_push(VV[",VV[25]);
	V678= (*(LnkLI327))(caar((V671)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V678));
	princ_str("]);",VV[25]);
	princ_str("\nL",VV[25]);
	(void)((*(LnkLI274))(cdr((V669))));
	princ_str("();",VV[25]);
	princ_str("\nihs_pop();",VV[25]);
	goto T2445;
	goto T2451;
T2451:;
	princ_str("\nL",VV[25]);
	(void)((*(LnkLI274))(cdr((V669))));
	princ_str("();",VV[25]);
	goto T2445;
	goto T2447;
T2447:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2466;}
	princ_str("\nsuper_funcall(VV[",VV[25]);
	V679= (*(LnkLI327))(caar((V671)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V679));
	princ_str("]);",VV[25]);
	goto T2445;
	goto T2466;
T2466:;
	if((symbol_value(VV[163]))==Cnil){
	goto T2472;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[25]);
	V680= (*(LnkLI327))(caar((V671)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V680));
	princ_str("]);",VV[25]);
	goto T2445;
	goto T2472;
T2472:;
	princ_str("\nCMPfuncall(VV[",VV[25]);
	V681= (*(LnkLI327))(caar((V671)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V681));
	princ_str("]->s.s_gfdef);",VV[25]);
	goto T2445;
T2445:;
	if(endp_prop(cdr((V671)))){
	goto T2480;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))(cadadr((V671))));
	{object V682= caadr((V671));
	if((V682!= VV[74]))goto T2487;
	princ_str("=vs_base[0];",VV[25]);
	goto T2486;
	goto T2487;
T2487:;
	princ_str("=object_to_",VV[25]);
	base[1]= symbol_name(caadr((V671)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V683= vs_base[0];
	(void)((*(LnkLI274))(V683));
	princ_str("(vs_base[0]);",VV[25]);}
	goto T2486;
T2486:;
	{register object V684;
	register object V685;
	V684= cddr((V671));
	V685= car((V684));
	goto T2497;
T2497:;
	if(!(endp_prop((V684)))){
	goto T2498;}
	goto T2480;
	goto T2498;
T2498:;
	princ_str("\nvs_base++;",VV[25]);
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))(cadr((V685))));
	{object V686= car((V685));
	if((V686!= VV[74]))goto T2508;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[25]);
	goto T2507;
	goto T2508;
T2508:;
	princ_str("=object_to_",VV[25]);
	base[3]= symbol_name(car((V685)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V687= vs_base[0];
	(void)((*(LnkLI274))(V687));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[25]);}
	goto T2507;
T2507:;
	V684= cdr((V684));
	V685= car((V684));
	goto T2497;}
	goto T2480;
T2480:;
	princ_str("\n}",VV[25]);
	goto T2379;
T2379:;
	V670= cdr((V670));
	V671= car((V670));
	goto T2374;}
	goto T2370;
T2370:;
	princ_str("\n}",VV[25]);
	princ_str("\nvs_top=vs;",VV[25]);
	princ_str("\n}",VV[25]);
	{object V688 = Cnil;
	VMR47(V688)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFENTRY	*/

static object LI49(V690)

register object V690;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{register object V691;
	register object V692;
	object V693;
	register object V694;
	V691= Cnil;
	V692= Cnil;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V693= symbol_value(VV[61]);
	V694= Cnil;
	if(endp_prop((V690))){
	goto T2537;}
	if(endp_prop(cdr((V690)))){
	goto T2537;}
	if(!(endp_prop(cddr((V690))))){
	goto T2536;}
	goto T2537;
T2537:;
	V695 = make_fixnum((long)length((V690)));
	(void)((*(LnkLI283))(VV[232],small_fixnum(3),V695));
	goto T2536;
T2536:;
	if(type_of(car((V690)))==t_symbol){
	goto T2543;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[233],car((V690)))));
	goto T2543;
T2543:;
	{register object V696;
	register object V697;
	V696= cadr((V690));
	V697= car((V696));
	goto T2550;
T2550:;
	if(!(endp_prop((V696)))){
	goto T2551;}
	goto T2546;
	goto T2551;
T2551:;
	{register object x= (V697),V698= VV[234];
	while(!endp(V698))
	if(eql(x,V698->c.c_car)){
	goto T2555;
	}else V698=V698->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[235],(V697))));
	goto T2555;
T2555:;
	V696= cdr((V696));
	V697= car((V696));
	goto T2550;}
	goto T2546;
T2546:;
	V694= caddr((V690));
	if(!(type_of((V694))==t_symbol)){
	goto T2567;}
	V691= VV[74];
	base[1]= symbol_name((V694));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V692= vs_base[0];
	goto T2565;
	goto T2567;
T2567:;
	if(!(type_of((V694))==t_string)){
	goto T2574;}
	V691= VV[74];
	V692= (V694);
	goto T2565;
	goto T2574;
T2574:;
	if(!(type_of((V694))==t_cons)){
	goto T2580;}
	{register object x= car((V694)),V699= VV[236];
	while(!endp(V699))
	if(eql(x,V699->c.c_car)){
	goto T2584;
	}else V699=V699->c.c_cdr;
	goto T2580;}
	goto T2584;
T2584:;
	if(!(type_of(cdr((V694)))==t_cons)){
	goto T2580;}
	if(type_of(cadr((V694)))==t_symbol){
	goto T2587;}
	if(!(type_of(cadr((V694)))==t_string)){
	goto T2580;}
	goto T2587;
T2587:;
	if(!(endp_prop(cddr((V694))))){
	goto T2580;}
	if(!(type_of(cadr((V694)))==t_symbol)){
	goto T2595;}
	base[1]= symbol_name(cadr((V694)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V692= vs_base[0];
	goto T2593;
	goto T2595;
T2595:;
	V692= cadr((V694));
	goto T2593;
T2593:;
	V691= car((V694));
	goto T2565;
	goto T2580;
T2580:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[237],(V694))));
	goto T2565;
T2565:;
	{object V700;
	V700= list(6,VV[232],car((V690)),(V693),cadr((V690)),(V691),(V692));
	setq(VV[24],make_cons((V700),symbol_value(VV[24])));}
	{object V701;
	V701= make_cons(car((V690)),(V693));
	setq(VV[79],make_cons((V701),symbol_value(VV[79])));
	{object V702 = symbol_value(VV[79]);
	VMR48(V702)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFENTRY	*/

static object LI50(V708,V709,V710,V711,V712)

object V708;object V709;object V710;object V711;object V712;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI277))((V709)));
	princ_str("();",VV[31]);
	V713= list(2,VV[91],(V708));
	V714= list(3,VV[111],/* INLINE-ARGS */V713,(*(LnkLI301))(VV[238],(V709)));
	{object V715 = (VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V714));
	VMR49(V715)}
	return Cnil;
}
/*	local entry for function T3DEFENTRY	*/

static object LI51(V721,V722,V723,V724,V725)

object V721;object V722;object V723;register object V724;object V725;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[239],(V721))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V722)));
	princ_str("()",VV[25]);
	princ_str("\n{	object *old_base=vs_base;",VV[25]);
	{object V726= (V724);
	if((V726!= VV[240]))goto T2616;
	goto T2615;
	goto T2616;
T2616:;
	if((V726!= VV[158]))goto T2617;
	princ_str("\n	char *x;",VV[25]);
	goto T2615;
	goto T2617;
T2617:;
	princ_str("\n	",VV[25]);
	base[0]= symbol_name((V724));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V727= vs_base[0];
	(void)((*(LnkLI274))(V727));
	princ_str(" x;",VV[25]);}
	goto T2615;
T2615:;
	if((symbol_value(VV[163]))==Cnil){
	goto T2624;}
	princ_str("\n	check_arg(",VV[25]);
	V728 = make_fixnum((long)length((V723)));
	(void)((*(LnkLI274))(V728));
	princ_str(");",VV[25]);
	goto T2624;
T2624:;
	if(((V724))==(VV[240])){
	goto T2630;}
	princ_str("\n	x=",VV[25]);
	goto T2630;
T2630:;
	princ_str("\n	",VV[25]);
	(void)((*(LnkLI274))((V725)));
	princ_char(40,VV[25]);
	if(endp_prop((V723))){
	goto T2638;}
	{register object V729;
	register long V730;
	V730= 0;
	V729= (V723);
	goto T2643;
T2643:;
	{object V731= car((V729));
	if((V731!= VV[74]))goto T2647;
	princ_str("\n	vs_base[",VV[25]);
	V732 = make_fixnum(V730);
	(void)((*(LnkLI274))(V732));
	princ_char(93,VV[25]);
	goto T2646;
	goto T2647;
T2647:;
	princ_str("\n	object_to_",VV[25]);
	base[0]= symbol_name(car((V729)));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V733= vs_base[0];
	(void)((*(LnkLI274))(V733));
	princ_str("(vs_base[",VV[25]);
	V734 = make_fixnum(V730);
	(void)((*(LnkLI274))(V734));
	princ_str("])",VV[25]);}
	goto T2646;
T2646:;
	if(!(endp_prop(cdr((V729))))){
	goto T2658;}
	goto T2638;
	goto T2658;
T2658:;
	princ_char(44,VV[25]);
	V729= cdr((V729));
	V730= (long)(V730)+1;
	goto T2643;}
	goto T2638;
T2638:;
	princ_str(");",VV[25]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[25]);
	princ_str("\n	vs_base[0]=",VV[25]);
	{object V735= (V724);
	if((V735!= VV[240]))goto T2674;
	princ_str("Cnil",VV[25]);
	goto T2673;
	goto T2674;
T2674:;
	if((V735!= VV[74]))goto T2676;
	princ_char(120,VV[25]);
	goto T2673;
	goto T2676;
T2676:;
	if((V735!= VV[341]))goto T2678;
	princ_str("code_char(x)",VV[25]);
	goto T2673;
	goto T2678;
T2678:;
	if((V735!= VV[342]))goto T2680;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2681;}
	princ_str("CMP",VV[25]);
	goto T2681;
T2681:;
	princ_str("make_fixnum(x)",VV[25]);
	goto T2673;
	goto T2680;
T2680:;
	if((V735!= VV[158]))goto T2686;
	princ_str("make_simple_string(x)",VV[25]);
	goto T2673;
	goto T2686;
T2686:;
	if((V735!= VV[343]))goto T2688;
	princ_str("make_shortfloat(x)",VV[25]);
	goto T2673;
	goto T2688;
T2688:;
	if((V735!= VV[344]))goto T2690;
	princ_str("make_longfloat(x)",VV[25]);
	goto T2673;
	goto T2690;
T2690:;}
	goto T2673;
T2673:;
	princ_char(59,VV[25]);
	princ_str("\n}",VV[25]);
	{object V736 = Cnil;
	VMR50(V736)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFLA	*/

static object LI52(V738)

object V738;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V739 = Cnil;
	VMR51(V739)}
	return Cnil;
}
/*	local entry for function PARSE-CVSPECS	*/

static object LI53(V741)

object V741;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{register object V742;
	V742= Cnil;
	{register object V743;
	register object V744;
	V743= (V741);
	V744= car((V743));
	goto T2699;
T2699:;
	if(!(endp_prop((V743)))){
	goto T2700;}
	{object V745 = reverse((V742));
	VMR52(V745)}
	goto T2700;
T2700:;
	if(!(type_of((V744))==t_symbol)){
	goto T2706;}
	{object V746;
	base[2]= symbol_name((V744));
	vs_top=(vs_base=base+2)+1;
	Lstring_downcase();
	vs_top=sup;
	V747= vs_base[0];
	V746= list(2,VV[74],V747);
	V742= make_cons((V746),(V742));
	goto T2704;}
	goto T2706;
T2706:;
	if(!(type_of((V744))==t_string)){
	goto T2713;}
	{object V748;
	V748= list(2,VV[74],(V744));
	V742= make_cons((V748),(V742));
	goto T2704;}
	goto T2713;
T2713:;
	if(!(type_of((V744))==t_cons)){
	goto T2718;}
	{register object x= car((V744)),V749= VV[241];
	while(!endp(V749))
	if(eql(x,V749->c.c_car)){
	goto T2721;
	}else V749=V749->c.c_cdr;
	goto T2718;}
	goto T2721;
T2721:;
	{register object V750;
	register object V751;
	V750= cdr((V744));
	V751= car((V750));
	goto T2725;
T2725:;
	if(!(endp_prop((V750)))){
	goto T2726;}
	goto T2704;
	goto T2726;
T2726:;
	{register object V752;
	V753= car((V744));
	if(!(type_of((V751))==t_symbol)){
	goto T2734;}
	base[4]= symbol_name((V751));
	vs_top=(vs_base=base+4)+1;
	Lstring_downcase();
	vs_top=sup;
	V754= vs_base[0];
	goto T2732;
	goto T2734;
T2734:;
	if(!(type_of((V751))==t_string)){
	goto T2738;}
	V754= (V751);
	goto T2732;
	goto T2738;
T2738:;
	V754= (VFUN_NARGS=2,(*(LnkLI265))(VV[242],(V751)));
	goto T2732;
T2732:;
	V752= list(2,/* INLINE-ARGS */V753,V754);
	V742= make_cons((V752),(V742));}
	V750= cdr((V750));
	V751= car((V750));
	goto T2725;}
	goto T2718;
T2718:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[243],(V744))));
	goto T2704;
T2704:;
	V743= cdr((V743));
	V744= car((V743));
	goto T2699;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-DCFUN	*/

static object LI54(V760,V761,V762,V763,V764)

object V760;object V761;object V762;register object V763;register object V764;
{	 VMB53 VMS53 VMV53
	bds_check;
	goto TTL;
TTL:;
	{object V765;
	register object V766;
	object V767;
	if(((V760))==Cnil){
	goto T2753;}
	V765= small_fixnum(0);
	goto T2751;
	goto T2753;
T2753:;
	V765= structure_ref((V763),VV[32],4);
	goto T2751;
T2751:;
	V766= Cnil;
	bds_bind(VV[20],(*(LnkLI306))(cadr((V764))));
	bds_bind(VV[117],Cnil);
	V767= caaddr((V764));
	if((structure_ref((V763),VV[32],0))==Cnil){
	goto T2761;}
	V768= structure_ref((V763),VV[32],0);
	goto T2759;
	goto T2761;
T2761:;
	V768= Cnil;
	goto T2759;
T2759:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[244],V768)));
	princ_str("\nstatic void ",VV[25]);
	if(((V760))==Cnil){
	goto T2768;}
	V769= VV[245];
	goto T2766;
	goto T2768;
T2768:;
	V769= VV[246];
	goto T2766;
T2766:;
	(void)((*(LnkLI274))(V769));
	V770= structure_ref((V763),VV[32],3);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V770));
	princ_char(40,VV[25]);
	princ_str("base0",VV[25]);
	if(((V767))==Cnil){
	goto T2777;}
	V771= VV[247];
	goto T2775;
	goto T2777;
T2777:;
	V771= VV[248];
	goto T2775;
T2775:;
	(void)((*(LnkLI274))(V771));
	V772= structure_ref(cadr((V764)),VV[62],1);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V772,small_fixnum(2)));
	(void)((*(LnkLI313))(caaddr((V764)),Cnil));
	princ_str("register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base0;",VV[25]);
	bds_bind(VV[249],(V762));
	bds_bind(VV[128],VV[124]);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],one_plus((V765)));
	bds_bind(VV[132],(V762));
	bds_bind(VV[133],(V761));
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	V766= (VV[136]->s.s_dbind);
	princ_str("\n{",VV[25]);
	V773= structure_ref(cadr((V764)),VV[62],1);
	V774= structure_ref((V763),VV[32],3);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V773,/* INLINE-ARGS */V774,VV[250]));
	princ_str("\n	VMB",VV[25]);
	(void)((*(LnkLI274))((V766)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI274))((V766)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI274))((V766)));
	if((symbol_value(VV[149]))==Cnil){
	goto T2801;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T2801;
T2801:;
	base[19]= caddr(cddr((V764)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk315)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[130]->s.s_dbind))==0)){
	goto T2809;}
	if(((VV[138]->s.s_dbind))!=Cnil){
	goto T2809;}
	if(((VV[140]->s.s_dbind))!=Cnil){
	goto T2809;}
	goto T2807;
	goto T2809;
T2809:;
	princ_str("\n	base[0]=base[0];",VV[25]);
	goto T2807;
T2807:;
	princ_str("\n}",VV[25]);
	(void)((*(LnkLI316))((V766),Ct));
	V775= structure_ref((V763),VV[32],3);
	{object V776 = (*(LnkLI310))(/* INLINE-ARGS */V775);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR53(V776)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-FUN	*/

static object LI55(V782,V783,V784,V785,V786)

object V782;object V783;object V784;object V785;object V786;
{	 VMB54 VMS54 VMV54
	bds_check;
	goto TTL;
TTL:;
	{long V787;
	if(((V782))==Cnil){
	goto T2821;}
	V787= 0;
	goto T2819;
	goto T2821;
T2821:;
	V787= fix(structure_ref((V785),VV[32],4));
	goto T2819;
T2819:;
	bds_bind(VV[20],(*(LnkLI306))(cadr((V786))));
	bds_bind(VV[117],Cnil);
	if(!(((V782))==(VV[251]))){
	goto T2824;}
	{object V788 = (*(LnkLI250))((V782),(V783),(V784),(V785),(V786));
	bds_unwind1;
	bds_unwind1;
	VMR54(V788)}
	goto T2824;
T2824:;
	if((structure_ref((V785),VV[32],0))==Cnil){
	goto T2830;}
	V789= structure_ref((V785),VV[32],0);
	goto T2828;
	goto T2830;
T2830:;
	V789= Cnil;
	goto T2828;
T2828:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[252],V789)));
	princ_str("\nstatic void ",VV[31]);
	if(((V782))==Cnil){
	goto T2837;}
	V790= VV[253];
	goto T2835;
	goto T2837;
T2837:;
	V790= VV[254];
	goto T2835;
T2835:;
	(void)((*(LnkLI277))(V790));
	V791= structure_ref((V785),VV[32],3);
	(void)((*(LnkLI277))(/* INLINE-ARGS */V791));
	princ_str("();",VV[31]);
	princ_str("\nstatic void ",VV[25]);
	if(((V782))==Cnil){
	goto T2846;}
	V792= VV[255];
	goto T2844;
	goto T2846;
T2846:;
	V792= VV[256];
	goto T2844;
T2844:;
	(void)((*(LnkLI274))(V792));
	V793= structure_ref((V785),VV[32],3);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V793));
	princ_char(40,VV[25]);
	{register object V794;
	register long V795;
	V794= make_fixnum(V787);
	V795= 0;
	goto T2854;
T2854:;
	V796 = make_fixnum(V795);
	if(!(number_compare(V796,(V794))>=0)){
	goto T2855;}
	princ_str("base",VV[25]);
	V797 = make_fixnum(V795);
	(void)((*(LnkLI274))(V797));
	princ_char(41,VV[25]);
	goto T2850;
	goto T2855;
T2855:;
	princ_str("base",VV[25]);
	V798 = make_fixnum(V795);
	(void)((*(LnkLI274))(V798));
	princ_char(44,VV[25]);
	V795= (long)(V795)+1;
	goto T2854;}
	goto T2850;
T2850:;
	princ_str("\nregister object ",VV[25]);
	{register object V799;
	register long V800;
	V799= make_fixnum(V787);
	V800= 0;
	goto T2875;
T2875:;
	V801 = make_fixnum(V800);
	if(!(number_compare(V801,(V799))>=0)){
	goto T2876;}
	princ_char(42,VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base",VV[25]);
	V802 = make_fixnum(V800);
	(void)((*(LnkLI274))(V802));
	princ_char(59,VV[25]);
	goto T2871;
	goto T2876;
T2876:;
	princ_char(42,VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base",VV[25]);
	V803 = make_fixnum(V800);
	(void)((*(LnkLI274))(V803));
	princ_char(44,VV[25]);
	V800= (long)(V800)+1;
	goto T2875;}
	goto T2871;
T2871:;
	V804= structure_ref(cadr((V786)),VV[62],1);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V804,small_fixnum(2)));
	bds_bind(VV[128],VV[127]);
	bds_bind(VV[249],(V784));
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	V805 = make_fixnum(V787);
	bds_bind(VV[131],one_plus(V805));
	bds_bind(VV[132],(V784));
	bds_bind(VV[133],(V783));
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	princ_str("\n{	register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base=vs_base;",VV[25]);
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_char(59,VV[25]);
	V806= structure_ref(cadr((V786)),VV[62],1);
	V807= structure_ref((V785),VV[32],3);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V806,/* INLINE-ARGS */V807,VV[257]));
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[163]))==Cnil){
	goto T2916;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_str(");",VV[25]);
	goto T2914;
	goto T2916;
T2916:;
	princ_str("\n	vs_check;",VV[25]);
	goto T2914;
T2914:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2922;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T2922;
T2922:;
	if(((V782))==Cnil){
	goto T2928;}
	(void)((VFUN_NARGS=2,(*(LnkLI331))(caddr((V786)),caddr(cddr((V786))))));
	goto T2926;
	goto T2928;
T2928:;
	(void)((VFUN_NARGS=3,(*(LnkLI331))(caddr((V786)),caddr(cddr((V786))),(V785))));
	goto T2926;
T2926:;
	princ_str("\n}",VV[25]);
	{object V808;
	V808= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[33],make_cons((V808),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI277))((VV[136]->s.s_dbind)));
	V809= (*(LnkLI332))();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V810= structure_ref((V785),VV[32],3);
	{object V811 = (*(LnkLI310))(/* INLINE-ARGS */V810);
	bds_unwind1;
	bds_unwind1;
	VMR54(V811)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-CVARS	*/

static object LI56()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{register object V812;
	V812= Cnil;
	{register object V813;
	register object V814;
	V813= symbol_value(VV[18]);
	V814= car((V813));
	goto T2943;
T2943:;
	if(!(endp_prop((V813)))){
	goto T2944;}
	goto T2939;
	goto T2944;
T2944:;
	{register object V815;
	if(!(type_of((V814))==t_cons)){
	goto T2951;}
	{register object V816;
	V816= car((V814));
	V814= cdr((V814));
	V815= (V816);
	goto T2949;}
	goto T2951;
T2951:;
	V815= Ct;
	goto T2949;
T2949:;
	if(!(((V812))==((V815)))){
	goto T2958;}
	base[1]= symbol_value(VV[31]);
	base[2]= VV[258];
	base[3]= (V814);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2956;
	goto T2958;
T2958:;
	if(!(((V812))==Cnil)){
	goto T2964;}
	goto T2963;
	goto T2964;
T2964:;
	base[1]= symbol_value(VV[31]);
	base[2]= VV[259];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	goto T2963;
T2963:;
	V812= (V815);
	base[1]= symbol_value(VV[31]);
	base[2]= VV[260];
	base[3]= (*(LnkLI280))((V812));
	base[4]= (V814);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	goto T2956;
T2956:;
	if(!(((V812))==(VV[261]))){
	goto T2948;}
	base[1]= symbol_value(VV[31]);
	base[2]= VV[262];
	base[3]= (V814);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
	goto T2948;
T2948:;
	V813= cdr((V813));
	V814= car((V813));
	goto T2943;}
	goto T2939;
T2939:;
	if(symbol_value(VV[18])==Cnil){
	goto T2984;}
	base[0]= symbol_value(VV[31]);
	base[1]= VV[263];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T2984;
T2984:;
	if(eql(symbol_value(VV[141]),small_fixnum(0))){
	goto T2988;}
	base[0]= symbol_value(VV[31]);
	base[1]= VV[264];
	base[2]= symbol_value(VV[141]);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V817 = vs_base[0];
	VMR55(V817)}
	goto T2988;
T2988:;
	{object V818 = Cnil;
	VMR55(V818)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function DO-DECL	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_reserve(VM56);
	{object V819;
	check_arg(1);
	V819=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V820= structure_ref((V819),VV[69],4);
	if(eql(/* INLINE-ARGS */V820,VV[72])){
	goto T2994;}
	goto T2993;
	goto T2994;
T2994:;
	(VV[153]->s.s_dbind)= Ct;
	goto T2993;
T2993:;
	{object V821;
	V821= (*(LnkLI345))((V819));
	if(((V821))==Cnil){
	goto T2999;}
	{object V822;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V822= symbol_value(VV[88]);
	(void)(structure_set((V819),VV[69],1,(V821)));
	(void)(structure_set((V819),VV[69],4,(V822)));
	princ_str("\n	",VV[25]);
	if((base0[1])!=Cnil){
	goto T3006;}
	princ_char(123,VV[25]);
	base0[1]= Ct;
	goto T3006;
T3006:;
	base[1]= (V819);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk346)();
	return;}
	goto T2999;
T2999:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static void LnkT346(){ call_or_link(VV[346],(void **)(void *)&Lnk346);} /* WT-VAR-DECL */
static object  LnkTLI345(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[345],(void **)(void *)&LnkLI345,1,first,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI250(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[250],(void **)(void *)&LnkLI250,5,first,ap);va_end(ap);return V1;} /* T3LOCAL-DCFUN */
static object  LnkTLI340(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[340],(void **)(void *)&LnkLI340,1,first,ap);va_end(ap);return V1;} /* PARSE-CVSPECS */
static object  LnkTLI339(){return call_proc0(VV[339],(void **)(void *)&LnkLI339);} /* WFS-ERROR */
static void LnkT338(){ call_or_link(VV[338],(void **)(void *)&Lnk338);} /* C2DM */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[337],(void **)(void *)&LnkLI337,3,first,ap);va_end(ap);return V1;} /* C1DM */
static object  LnkTLI336(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[336],(void **)(void *)&LnkLI336,first,ap);va_end(ap);return V1;} /* REMOVE-DUPLICATES */
static object  LnkTLI335(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[335],(void **)(void *)&LnkLI335,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS1 */
static object  LnkTLI334(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[334],(void **)(void *)&LnkLI334,first,ap);va_end(ap);return V1;} /* WARN */
static object  LnkTLI333(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[333],(void **)(void *)&LnkLI333,1,first,ap);va_end(ap);return V1;} /* REGISTER */
static object  LnkTLI332(){return call_proc0(VV[332],(void **)(void *)&LnkLI332);} /* WT-CVARS */
static object  LnkTLI331(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[331],(void **)(void *)&LnkLI331,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR */
static object  LnkTLI330(){return call_proc0(VV[330],(void **)(void *)&LnkLI330);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI329(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[329],(void **)(void *)&LnkLI329,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI328(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[328],(void **)(void *)&LnkLI328,1,first,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI327(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[327],(void **)(void *)&LnkLI327,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI326(){return call_proc0(VV[326],(void **)(void *)&LnkLI326);} /* BABOON */
static object  LnkTLI325(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[325],(void **)(void *)&LnkLI325,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static void LnkT324(){ call_or_link(VV[324],(void **)(void *)&Lnk324);} /* INC-INLINE-BLOCKS */
static object  LnkTLI323(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[323],(void **)(void *)&LnkLI323,first,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI322(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[322],(void **)(void *)&LnkLI322,2,first,ap);va_end(ap);return V1;} /* C2BIND-INIT */
static object  LnkTLI321(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[321],(void **)(void *)&LnkLI321,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI320(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[320],(void **)(void *)&LnkLI320,1,first,ap);va_end(ap);return V1;} /* SET-UP-VAR-CVS */
static object  LnkTLI319(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[319],(void **)(void *)&LnkLI319,first,ap);va_end(ap);return V1;} /* CONCATENATE */
static object  LnkTLI318(){return call_proc0(VV[318],(void **)(void *)&LnkLI318);} /* CVS-PUSH */
static object  LnkTLI317(){return call_proc0(VV[317],(void **)(void *)&LnkLI317);} /* VS-PUSH */
static object  LnkTLI316(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[316],(void **)(void *)&LnkLI316,2,first,ap);va_end(ap);return V1;} /* WT-V*-MACROS */
static void LnkT315(){ call_or_link(VV[315],(void **)(void *)&Lnk315);} /* C2EXPR */
static object  LnkTLI314(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[314],(void **)(void *)&LnkLI314,3,first,ap);va_end(ap);return V1;} /* ASSIGN-DOWN-VARS */
static object  LnkTLI313(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[313],(void **)(void *)&LnkLI313,2,first,ap);va_end(ap);return V1;} /* WT-REQUIREDS */
static object  LnkTLI312(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[312],(void **)(void *)&LnkLI312,first,ap);va_end(ap);return V1;} /* WT-COMMENT */
static object  LnkTLI311(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[311],(void **)(void *)&LnkLI311,2,first,ap);va_end(ap);return V1;} /* ADD-DEBUG-INFO */
static object  LnkTLI310(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[310],(void **)(void *)&LnkLI310,1,first,ap);va_end(ap);return V1;} /* WT-DOWNWARD-CLOSURE-MACRO */
static void LnkT309(){ call_or_link(VV[309],(void **)(void *)&Lnk309);} /* T3DEFUN-AUX */
static object  LnkTLI308(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[308],(void **)(void *)&LnkLI308,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS */
static void LnkT307(){ call_or_link(VV[307],(void **)(void *)&Lnk307);} /* FIXNUMP */
static object  LnkTLI306(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[306],(void **)(void *)&LnkLI306,1,first,ap);va_end(ap);return V1;} /* VOLATILE */
static object  LnkTLI305(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[305],(void **)(void *)&LnkLI305,1,first,ap);va_end(ap);return V1;} /* MAXARGS */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[304],(void **)(void *)&LnkLI304,1,first,ap);va_end(ap);return V1;} /* VARARG-P */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[303],(void **)(void *)&LnkLI303,3,first,ap);va_end(ap);return V1;} /* WT-IF-PROCLAIMED */
static object  LnkTLI302(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[302],(void **)(void *)&LnkLI302,258,first,ap);va_end(ap);return V1;} /* PROCLAIMED-ARGD */
static object  LnkTLI301(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[301],(void **)(void *)&LnkLI301,2,first,ap);va_end(ap);return V1;} /* ADD-ADDRESS */
static object  LnkTLI300(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[300],(void **)(void *)&LnkLI300,first,ap);va_end(ap);return V1;} /* ADD-INIT */
static object  LnkTLI299(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[299],(void **)(void *)&LnkLI299,first,ap);va_end(ap);return V1;} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI298(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[298],(void **)(void *)&LnkLI298,2,first,ap);va_end(ap);return V1;} /* SHIFT<< */
static object  LnkTLI297(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[297],(void **)(void *)&LnkLI297,257,first,ap);va_end(ap);return V1;} /* F-TYPE */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* SUBTYPEP */
static void LnkT295(){ call_or_link(VV[295],(void **)(void *)&Lnk295);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI294(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[294],(void **)(void *)&LnkLI294,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI293(){return call_proc0(VV[293],(void **)(void *)&LnkLI293);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)(void *)&LnkLI292,2,first,ap);va_end(ap);return V1;} /* MAKE-INLINE-STRING */
static object  LnkTLI291(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[291],(void **)(void *)&LnkLI291,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[290],(void **)(void *)&LnkLI290,2,first,ap);va_end(ap);return V1;} /* CMPFIX-ARGS */
static object  LnkTLI289(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[289],(void **)(void *)&LnkLI289,1,first,ap);va_end(ap);return V1;} /* PROCLAIM */
static object  LnkTLI288(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[288],(void **)(void *)&LnkLI288,1,first,ap);va_end(ap);return V1;} /* CHECK-DOWNWARD */
static object  LnkTLI287(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[287],(void **)(void *)&LnkLI287,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI286(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[286],(void **)(void *)&LnkLI286,1,first,ap);va_end(ap);return V1;} /* T1PROGN */
static object  LnkTLI283(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[283],(void **)(void *)&LnkLI283,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static void LnkT282(){ call_or_link(VV[282],(void **)(void *)&Lnk282);} /* CMP-EVAL */
static void LnkT281(){ call_or_link(VV[281],(void **)(void *)&Lnk281);} /* DECLARATION-TYPE */
static object  LnkTLI280(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[280],(void **)(void *)&LnkLI280,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static void LnkT279(){ call_or_link(VV[279],(void **)(void *)&Lnk279);} /* WT-DATA-FILE */
static object  LnkTLI278(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[278],(void **)(void *)&LnkLI278,1,first,ap);va_end(ap);return V1;} /* PUSH-DATA-INCF */
static object  LnkTLI277(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[277],(void **)(void *)&LnkLI277,1,first,ap);va_end(ap);return V1;} /* WT-H1 */
static object  LnkTLI276(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[276],(void **)(void *)&LnkLI276,1,first,ap);va_end(ap);return V1;} /* WT-FUNCTION-LINK */
static void LnkT275(){ call_or_link(VV[275],(void **)(void *)&Lnk275);} /* WT-GLOBAL-ENTRY */
static void LnkT257(){ call_or_link(VV[257],(void **)(void *)&Lnk257);} /* T3LOCAL-FUN */
static object  LnkTLI274(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[274],(void **)(void *)&LnkLI274,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI273(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[273],(void **)(void *)&LnkLI273,1,first,ap);va_end(ap);return V1;} /* T1ORDINARY */
static void LnkT272(){ call_or_link(VV[272],(void **)(void *)&Lnk272);} /* T1EXPR */
static object  LnkTLI271(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[271],(void **)(void *)&LnkLI271,1,first,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND-1 */
static object  LnkTLI270(){return call_proc0(VV[270],(void **)(void *)&LnkLI270);} /* PRINT-CURRENT-FORM */
static object  LnkTLI269(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[269],(void **)(void *)&LnkLI269,1,first,ap);va_end(ap);return V1;} /* WT-DATA-PACKAGE-OPERATION */
static object  LnkTLI268(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[268],(void **)(void *)&LnkLI268,2,first,ap);va_end(ap);return V1;} /* MAYBE-EVAL */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[267],(void **)(void *)&LnkLI267,3,first,ap);va_end(ap);return V1;} /* CMP-EXPAND-MACRO */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[266],(void **)(void *)&LnkLI266,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[265],(void **)(void *)&LnkLI265,first,ap);va_end(ap);return V1;} /* CMPERR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

