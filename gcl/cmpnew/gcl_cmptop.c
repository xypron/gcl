
#include "cmpinclude.h"
#include "gcl_cmptop.h"
void init_gcl_cmptop(){do_init(VV);}
/*	function definition for T1EXPR	*/

static void L1()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM1; VC1
	vs_check;
	bds_check;
	{VOL object V1;
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
	V2= CMPcar((V1));
	V3= CMPcdr((V1));
	V4= Cnil;
	if(!(type_of((V2))==t_symbol)){
	goto T8;}
	if(!(((V2))==(VV[3]))){
	goto T11;}
	V5= (VFUN_NARGS=1,(*(LnkLI266))(VV[4]));
	frs_pop();
	base[3]= V5;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T11;
T11:;
	{object V6 =((V2))->s.s_plist;
	 object ind= VV[5];
	while(V6!=Cnil){
	if(V6->c.c_car==ind){
	if(((V6->c.c_cdr->c.c_car))==Cnil){
	goto T14;}
	goto T15;
	}else V6=V6->c.c_cdr->c.c_cdr;}
	goto T14;}
	goto T15;
T15:;
	if(((VV[6]->s.s_dbind))==Cnil){
	goto T16;}
	(void)((VFUN_NARGS=2,(*(LnkLI267))(VV[7],(V1))));
	goto T16;
T16:;
	{object V7;
	base[3]= (V2);
	vs_top=(vs_base=base+3)+1;
	Lmacro_function();
	vs_top=sup;
	V4= vs_base[0];
	if(((V4))==Cnil){
	goto T21;}
	base[3]= CMPcdr((V1));
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	V8= vs_base[0];
	V7= (*(LnkLI268))((V4),(V2),V8);
	goto T19;
	goto T21;
T21:;
	V7= (V1);
	goto T19;
T19:;
	(void)((*(LnkLI269))(Ct,(V7)));
	V9= (*(LnkLI270))((V7));
	frs_pop();
	base[3]= V9;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T14;
T14:;
	{object V10 =((V2))->s.s_plist;
	 object ind= VV[8];
	while(V10!=Cnil){
	if(V10->c.c_car==ind){
	V4= (V10->c.c_cdr->c.c_car);
	goto T31;
	}else V10=V10->c.c_cdr->c.c_cdr;}
	V4= Cnil;}
	goto T31;
T31:;
	if(((V4))==Cnil){
	goto T29;}
	if(((VV[9]->s.s_dbind))==Cnil){
	goto T32;}
	(void)((*(LnkLI271))());
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
	{object V11 =((V2))->s.s_plist;
	 object ind= VV[10];
	while(V11!=Cnil){
	if(V11->c.c_car==ind){
	if(((V11->c.c_cdr->c.c_car))==Cnil){
	goto T37;}
	goto T38;
	}else V11=V11->c.c_cdr->c.c_cdr;}
	goto T37;}
	goto T38;
T38:;
	if(((VV[9]->s.s_dbind))==Cnil){
	goto T39;}
	(void)((*(LnkLI271))());
	goto T39;
T39:;
	base[3]= (*(LnkLI272))((V1));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk273)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T37;
T37:;
	{object V12 =((V2))->s.s_plist;
	 object ind= VV[11];
	while(V12!=Cnil){
	if(V12->c.c_car==ind){
	if(((V12->c.c_cdr->c.c_car))==Cnil){
	goto T44;}
	goto T45;
	}else V12=V12->c.c_cdr->c.c_cdr;}
	goto T44;}
	goto T45;
T45:;
	V13= (*(LnkLI274))((V1));
	frs_pop();
	base[3]= V13;
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
	{object V14;
	base[3]= CMPcdr((V1));
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	V15= vs_base[0];
	V14= (*(LnkLI268))((V4),(V2),V15);
	base[3]= (V14);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk273)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T47;
T47:;
	V16= (*(LnkLI274))((V1));
	frs_pop();
	base[3]= V16;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T8;
T8:;
	if(!(type_of((V2))==t_cons)){
	goto T56;}
	V17= (*(LnkLI274))((V1));
	frs_pop();
	base[3]= V17;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T56;
T56:;
	V18= (VFUN_NARGS=2,(*(LnkLI266))(VV[12],(V2)));
	frs_pop();
	base[3]= V18;
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
/*	local entry for function DECLARATION-TYPE	*/

static object LI2(V20)

object V20;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!(equal((V20),VV[13]))){
	goto T59;}
	{object V21 = VV[14];
	VMR2(V21)}
	goto T59;
T59:;
	if(!(equal((V20),VV[15]))){
	goto T62;}
	{object V22 = VV[16];
	VMR2(V22)}
	goto T62;
T62:;
	{object V23 = (V20);
	VMR2(V23)}
	return Cnil;
}
/*	local entry for function CTOP-WRITE	*/

static object LI3(V25)

object V25;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	{object V26;
	V26= Cnil;
	bds_bind(VV[18],Cnil);
	bds_bind(VV[19],Cnil);
	bds_bind(VV[21],VV[20]);
	bds_bind(VV[22],Cnil);
	bds_bind(VV[23],small_fixnum(0));
	bds_bind(VV[24],Cnil);
	bds_bind(VV[0],Cnil);
	bds_bind(VV[17],Cnil);
	(VV[25]->s.s_dbind)= reverse((VV[25]->s.s_dbind));
	princ_str("\nvoid init_",VV[26]);
	(void)((*(LnkLI275))((V25)));
	princ_str("(){",VV[26]);
	princ_str("do_init(VV);",VV[26]);
	princ_char(125,VV[26]);
	{object V27;
	V27= (VV[25]->s.s_dbind);
	bds_bind(VV[0],CMPcar((V27)));
	goto T77;
T77:;
	if(!(((V27))==Cnil)){
	goto T78;}
	bds_unwind1;
	goto T73;
	goto T78;
T78:;
	(VV[1]->s.s_dbind)= Ct;
	(VV[17]->s.s_dbind)= Cnil;
	{object V28 =(CMPcar((VV[0]->s.s_dbind)))->s.s_plist;
	 object ind= VV[27];
	while(V28!=Cnil){
	if(V28->c.c_car==ind){
	V26= (V28->c.c_cdr->c.c_car);
	goto T89;
	}else V28=V28->c.c_cdr->c.c_cdr;}
	V26= Cnil;}
	goto T89;
T89:;
	if(((V26))==Cnil){
	goto T86;}
	base[9]= (V26);
	{object V29;
	V29= CMPcdr((VV[0]->s.s_dbind));
	 vs_top=base+10;
	 while(V29!=Cnil)
	 {vs_push((V29)->c.c_car);V29=(V29)->c.c_cdr;}
	vs_base=base+10;}
	super_funcall_no_event(base[9]);
	vs_top=sup;
	goto T86;
T86:;
	V27= CMPcdr((V27));
	(VV[0]->s.s_dbind)= CMPcar((V27));
	goto T77;}
	goto T73;
T73:;
	{object V30;
	V30= (VV[25]->s.s_dbind);
	bds_bind(VV[0],CMPcar((V30)));
	goto T101;
T101:;
	if(!(((V30))==Cnil)){
	goto T102;}
	bds_unwind1;
	goto T97;
	goto T102;
T102:;
	(VV[1]->s.s_dbind)= Ct;
	(VV[17]->s.s_dbind)= Cnil;
	{object V31 =(CMPcar((VV[0]->s.s_dbind)))->s.s_plist;
	 object ind= VV[28];
	while(V31!=Cnil){
	if(V31->c.c_car==ind){
	V26= (V31->c.c_cdr->c.c_car);
	goto T113;
	}else V31=V31->c.c_cdr->c.c_cdr;}
	V26= Cnil;}
	goto T113;
T113:;
	if(((V26))==Cnil){
	goto T110;}
	base[9]= (V26);
	{object V32;
	V32= CMPcdr((VV[0]->s.s_dbind));
	 vs_top=base+10;
	 while(V32!=Cnil)
	 {vs_push((V32)->c.c_car);V32=(V32)->c.c_cdr;}
	vs_base=base+10;}
	super_funcall_no_event(base[9]);
	vs_top=sup;
	goto T110;
T110:;
	V30= CMPcdr((V30));
	(VV[0]->s.s_dbind)= CMPcar((V30));
	goto T101;}
	goto T97;
T97:;
	{object V33;
	V33= Cnil;
	goto T123;
T123:;
	if(!(((VV[29]->s.s_dbind))==Cnil)){
	goto T125;}
	goto T121;
	goto T125;
T125:;
	V33= CMPcar((VV[29]->s.s_dbind));
	{object V34;
	V34= CMPcar((VV[29]->s.s_dbind));
	(VV[29]->s.s_dbind)= CMPcdr((VV[29]->s.s_dbind));}
	(VV[17]->s.s_dbind)= Cnil;
	{object V35;
	V35= (V33);
	 vs_top=base+8;
	 while(V35!=Cnil)
	 {vs_push((V35)->c.c_car);V35=(V35)->c.c_cdr;}
	vs_base=base+8;}
	(void) (*Lnk258)();
	vs_top=sup;
	goto T123;}
	goto T121;
T121:;
	{object V36;
	object V37;
	V36= (VV[30]->s.s_dbind);
	V37= CMPcar((V36));
	goto T142;
T142:;
	if(!(((V36))==Cnil)){
	goto T143;}
	goto T138;
	goto T143;
T143:;
	(VV[17]->s.s_dbind)= Cnil;
	{object V38;
	V38= (V37);
	 vs_top=base+9;
	 while(V38!=Cnil)
	 {vs_push((V38)->c.c_car);V38=(V38)->c.c_cdr;}
	vs_base=base+9;}
	(void) (*Lnk276)();
	vs_top=sup;
	V36= CMPcdr((V36));
	V37= CMPcar((V36));
	goto T142;}
	goto T138;
T138:;
	{object V39;
	object V40;
	V39= (VV[18]->s.s_dbind);
	V40= CMPcar((V39));
	goto T160;
T160:;
	if(!(((V39))==Cnil)){
	goto T161;}
	goto T156;
	goto T161;
T161:;
	(VV[17]->s.s_dbind)= Cnil;
	(void)((*(LnkLI277))((V40)));
	V39= CMPcdr((V39));
	V40= CMPcar((V39));
	goto T160;}
	goto T156;
T156:;
	{object V41;
	object V42;
	V41= (VV[31]->s.s_dbind);
	V42= CMPcar((V41));
	goto T177;
T177:;
	if(!(((V41))==Cnil)){
	goto T178;}
	goto T173;
	goto T178;
T178:;
	princ_str("\nstatic void LC",VV[32]);
	(void)((*(LnkLI278))(STREF(object,(V42),12)));
	princ_str("();",VV[32]);
	V41= CMPcdr((V41));
	V42= CMPcar((V41));
	goto T177;}
	goto T173;
T173:;
	{object V43;
	object V44;
	V43= (VV[34]->s.s_dbind);
	V44= CMPcar((V43));
	goto T195;
T195:;
	if(!(((V43))==Cnil)){
	goto T196;}
	goto T191;
	goto T196;
T196:;
	princ_str("\n#define VM",VV[32]);
	(void)((*(LnkLI278))(CMPcar((V44))));
	princ_char(32,VV[32]);
	(void)((*(LnkLI278))(CMPcdr((V44))));
	V43= CMPcdr((V43));
	V44= CMPcar((V43));
	goto T195;}
	goto T191;
T191:;
	(void)((*(LnkLI279))(Cnil));
	{object V45;
	object V46;
	base[9]= (VV[23]->s.s_dbind);
	base[10]= (VV[35]->s.s_dbind);
	base[11]= small_fixnum(1);
	vs_top=(vs_base=base+9)+3;
	Lminus();
	vs_top=sup;
	V45= vs_base[0];
	V46= small_fixnum(0);
	goto T218;
T218:;
	if(!(number_compare((V46),(V45))>=0)){
	goto T219;}
	goto T211;
	goto T219;
T219:;
	(void)((*(LnkLI279))(Cnil));
	V46= one_plus((V46));
	goto T218;}
	goto T211;
T211:;
	princ_str("\nstatic char * VVi[",VV[32]);
	V47= number_plus(small_fixnum(1),(VV[35]->s.s_dbind));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V47));
	princ_str("]={",VV[32]);
	princ_str("\n#define Cdata VV[",VV[32]);
	(void)((*(LnkLI278))((VV[35]->s.s_dbind)));
	princ_char(93,VV[32]);
	if((VV[22]->s.s_dbind)!=Cnil){
	goto T235;}
	princ_char(10,VV[32]);
	(void)((*(LnkLI278))(small_fixnum(0)));
	goto T235;
T235:;
	{register object V48;
	V48= nreverse((VV[22]->s.s_dbind));
	goto T241;
T241:;
	if(((V48))!=Cnil){
	goto T242;}
	princ_str("\n};",VV[32]);
	goto T238;
	goto T242;
T242:;
	princ_str("\n(char *)(",VV[32]);
	(void)((*(LnkLI278))(CMPcaar((V48))));
	(void)((*(LnkLI278))(CMPcadar((V48))));
	if((CMPcdr((V48)))==Cnil){
	goto T254;}
	V49= VV[36];
	goto T252;
	goto T254;
T254:;
	V49= VV[37];
	goto T252;
T252:;
	(void)((*(LnkLI278))(V49));
	V48= CMPcdr((V48));
	goto T241;}
	goto T238;
T238:;
	princ_str("\n#define VV ((object *)VVi)",VV[32]);
	vs_base=vs_top;
	(void) (*Lnk280)();
	vs_top=sup;
	{object V50;
	object V51;
	V50= (VV[18]->s.s_dbind);
	V51= CMPcar((V50));
	goto T265;
T265:;
	if(!(((V50))==Cnil)){
	goto T266;}
	{object V52 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR3(V52)}
	goto T266;
T266:;
	{register object V53;
	register object V54;
	object V55;
	register object V56;
	V53= CMPcadr((V51));
	V54= CMPcaddr((V51));
	V55= CMPcadddr((V51));
	V56= Cnil;
	if(!(((V54))==(VV[38]))){
	goto T276;}
	princ_str("\nstatic object *Lclptr",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_char(59,VV[32]);
	V56= VV[39];
	goto T274;
	goto T276;
T276:;
	if(((V54))==Cnil){
	goto T285;}
	V56= (*(LnkLI281))((V54));
	goto T283;
	goto T285;
T285:;
	V56= VV[40];
	goto T283;
T283:;
	goto T274;
T274:;
	if(((V54))==Cnil){
	goto T288;}
	if(((V54))==(VV[38])){
	goto T288;}
	if(((V55))!=Cnil){
	goto T287;}
	if((Ct)==((V54))){
	goto T288;}
	goto T287;
T287:;
	princ_str("\nstatic ",VV[32]);
	V57= (*(LnkLI282))((V56));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V57));
	princ_str(" LnkT",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_str("(object,...);",VV[32]);
	princ_str("\nstatic ",VV[32]);
	V58= (*(LnkLI282))((V56));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V58));
	princ_str(" (*Lnk",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_str(")() = (",VV[32]);
	V59= (*(LnkLI282))((V56));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V59));
	princ_str("(*)()) LnkT",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_char(59,VV[32]);
	goto T270;
	goto T288;
T288:;
	princ_str("\nstatic ",VV[32]);
	V60= (*(LnkLI282))((V56));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V60));
	princ_str(" LnkT",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_str("();",VV[32]);
	princ_str("\nstatic ",VV[32]);
	V61= (*(LnkLI282))((V56));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V61));
	princ_str(" (*Lnk",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_str(")() = LnkT",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_char(59,VV[32]);}
	goto T270;
T270:;
	V50= CMPcdr((V50));
	V51= CMPcar((V50));
	goto T265;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAYBE-EVAL	*/

static object LI4(V64,V65)

object V64;register object V65;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if((V64)!=Cnil){
	goto T329;}
	if(type_of(CMPcar((V65)))==t_symbol){
	goto T330;}
	goto T329;
	goto T330;
T330:;
	{object V66 =(CMPcar((V65)))->s.s_plist;
	 object ind= VV[41];
	while(V66!=Cnil){
	if(V66->c.c_car==ind){
	V64= (V66->c.c_cdr->c.c_car);
	goto T332;
	}else V66=V66->c.c_cdr->c.c_cdr;}
	V64= Cnil;}
	goto T332;
T332:;
	goto T329;
T329:;
	if(((V64))==Cnil){
	goto T335;}
	if((VV[42])==((VV[43]->s.s_dbind))){
	goto T333;}
	goto T335;
T335:;
	if(!(type_of((VV[43]->s.s_dbind))==t_cons)){
	goto T334;}
	{register object x= VV[44],V67= (VV[43]->s.s_dbind);
	while(V67!=Cnil)
	if(eql(x,V67->c.c_car)){
	goto T341;
	}else V67=V67->c.c_cdr;
	goto T334;}
	goto T341;
T341:;
	goto T333;
T333:;
	if(((V65))==Cnil){
	goto T342;}
	base[0]= (V65);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk283)();
	vs_top=sup;
	goto T342;
T342:;
	{object V68 = Ct;
	VMR4(V68)}
	goto T334;
T334:;
	{object V69 = Cnil;
	VMR4(V69)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T1EVAL-WHEN	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	bds_check;
	{register object V70;
	V70=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V71;
	register object V72;
	V71= Cnil;
	V72= Cnil;
	if(!(((V70))==Cnil)){
	goto T348;}
	(void)((*(LnkLI284))(VV[45],small_fixnum(1),small_fixnum(0)));
	goto T348;
T348:;
	{register object V73;
	register object V74;
	V73= CMPcar((V70));
	V74= CMPcar((V73));
	goto T355;
T355:;
	if(!(((V73))==Cnil)){
	goto T356;}
	goto T351;
	goto T356;
T356:;
	{object V75= (V74);
	if((V75!= VV[285]))goto T361;
	V71= Ct;
	goto T360;
	goto T361;
T361:;
	if((V75!= VV[44]))goto T363;
	V72= Ct;
	goto T360;
	goto T363;
T363:;
	if((V75!= VV[286]))goto T365;
	goto T360;
	goto T365;
T365:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[46],(V74))));}
	goto T360;
T360:;
	V73= CMPcdr((V73));
	V74= CMPcar((V73));
	goto T355;}
	goto T351;
T351:;
	base[1]= CMPcar((V70));
	bds_bind(VV[43],base[1]);
	if(((V71))==Cnil){
	goto T373;}
	base[2]= (*(LnkLI287))(CMPcdr((V70)));
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T373;
T373:;
	if(((V72))==Cnil){
	goto T376;}
	base[2]= make_cons(VV[47],CMPcdr((V70)));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk283)();
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

static object LI6(V77)

object V77;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	if(!(equal(CMPcar((V77)),VV[48]))){
	goto T380;}
	bds_bind(VV[49],Ct);
	{object V78 = (*(LnkLI287))(CMPcdr((V77)));
	bds_unwind1;
	VMR6(V78)}
	goto T380;
T380:;
	{register object V79;
	register object V80;
	V79= (V77);
	V80= CMPcar((V79));
	goto T385;
T385:;
	if(!(((V79))==Cnil)){
	goto T386;}
	{object V81 = Cnil;
	VMR6(V81)}
	goto T386;
T386:;
	base[1]= (V80);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	V79= CMPcdr((V79));
	V80= CMPcar((V79));
	goto T385;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CMPFIX-ARGS	*/

static object LI7(V84,V85)

object V84;object V85;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V86;
	register object V87;
	V86= Cnil;
	base[1]= CMPcadr((V84));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V87= vs_base[0];
	{register object V88;
	register object V89;
	V88= (V85);
	V89= CMPcar((V88));
	goto T404;
T404:;
	if(!(((V88))==Cnil)){
	goto T405;}
	goto T400;
	goto T405;
T405:;
	{register object x= CMPcar((V89)),V90= (V87);
	while(V90!=Cnil)
	if(eql(x,V90->c.c_car)){
	V86= V90;
	goto T410;
	}else V90=V90->c.c_cdr;
	V86= Cnil;}
	goto T410;
T410:;
	if((V86)==Cnil){
	goto T411;}
	{register object V91;
	register object V92;
	V91= (V86);
	V92= CMPcadr((V89));
	((V91))->c.c_car = (V92);}
	goto T411;
T411:;
	V88= CMPcdr((V88));
	V89= CMPcar((V88));
	goto T404;}
	goto T400;
T400:;
	{register object x= VV[50],V93= (V87);
	while(V93!=Cnil)
	if(eql(x,V93->c.c_car)){
	V86= V93;
	goto T424;
	}else V93=V93->c.c_cdr;
	V86= Cnil;}
	goto T424;
T424:;
	if(((V86))==Cnil){
	goto T422;}
	{object V95;
	V95= append((V85),CMPcdr((V86)));
	(V86)->c.c_cdr = (V95);
	goto T420;}
	goto T422;
T422:;
	V96= make_cons(VV[50],(V85));
	V87= append((V87),/* INLINE-ARGS */V96);
	goto T420;
T420:;
	{object V97 = listA(3,CMPcar((V84)),(V87),CMPcddr((V84)));
	VMR7(V97)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFUN	*/

static object LI8(V99)

object V99;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	{object V100;
	V100= (VV[51]->s.s_dbind);
	bds_bind(VV[53],Cnil);
	if(((V99))==Cnil){
	goto T430;}
	if(!((CMPcdr((V99)))==Cnil)){
	goto T429;}
	goto T430;
T430:;
	V102 = CMPmake_fixnum((long)length((V99)));
	(void)((*(LnkLI284))(VV[52],small_fixnum(2),V102));
	goto T429;
T429:;
	if(type_of(CMPcar((V99)))==t_symbol){
	goto T434;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[54],CMPcar((V99)))));
	goto T434;
T434:;
	V103= make_cons(VV[52],(V99));
	(void)((*(LnkLI269))(Cnil,/* INLINE-ARGS */V103));
	goto T439;
T439:;
	(VV[6]->s.s_dbind)= Ct;
	(VV[55]->s.s_dbind)= Cnil;
	{register object V104;
	object V105;
	object V106;
	register object V107;{object V108;
	{object V109 =(CMPcar((V99)))->s.s_plist;
	 object ind= VV[61];
	while(V109!=Cnil){
	if(V109->c.c_car==ind){
	V108= (V109->c.c_cdr->c.c_car);
	goto T447;
	}else V109=V109->c.c_cdr->c.c_cdr;}
	V108= Cnil;}
	goto T447;
T447:;
	if(V108==Cnil)goto T446;
	V105= V108;
	goto T445;
	goto T446;
T446:;}
	(VV[62]->s.s_dbind)= number_plus((VV[62]->s.s_dbind),small_fixnum(1));
	V105= (VV[62]->s.s_dbind);
	goto T445;
T445:;
	V107= CMPcar((V99));
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[59],Cnil);
	V104= Cnil;
	bds_bind(VV[60],Cnil);
	V106= Cnil;
	V104= (VFUN_NARGS=2,(*(LnkLI288))(CMPcdr((V99)),(V107)));
	if(!(eql((V100),(VV[51]->s.s_dbind)))){
	goto T453;}
	goto T452;
	goto T453;
T453:;
	V110= CMPcadr((V104));
	V111= Ct;
	STSET(object,/* INLINE-ARGS */V110,16, Ct);
	(void)(Ct);
	goto T452;
T452:;
	(void)((*(LnkLI289))(STREF(object,CMPcadr((V104)),4)));
	{object V112 =((V107))->s.s_plist;
	 object ind= VV[64];
	while(V112!=Cnil){
	if(V112->c.c_car==ind){
	if(((V112->c.c_cdr->c.c_car))==Cnil){
	goto T456;}
	goto T458;
	}else V112=V112->c.c_cdr->c.c_cdr;}
	goto T456;}
	goto T458;
T458:;
	{object V113;
	V113= CMPmake_fixnum((long)length(CMPcar(CMPcaddr((V104)))));
	(void)(sputprop((V107),VV[64],(V113)));
	base[6]= (V113);
	base[7]= VV[66];
	base[8]= Ct;
	vs_top=(vs_base=base+6)+3;
	Lmake_list();
	vs_top=sup;
	V114= vs_base[0];
	V115= list(4,VV[65],(V107),V114,Ct);
	(void)((*(LnkLI290))(/* INLINE-ARGS */V115));}
	goto T456;
T456:;
	{object V116 =((V107))->s.s_plist;
	 object ind= VV[67];
	while(V116!=Cnil){
	if(V116->c.c_car==ind){
	if(((V116->c.c_cdr->c.c_car))==Cnil){
	goto T467;}
	goto T469;
	}else V116=V116->c.c_cdr->c.c_cdr;}
	goto T467;}
	goto T469;
T469:;
	{object V117;
	register object V118;
	V117= CMPcaddr((V104));
	V118= Cnil;
	if((CMPcadr((V117)))==Cnil){
	goto T472;}
	goto T467;
	goto T472;
T472:;
	if((CMPcaddr((V117)))==Cnil){
	goto T474;}
	goto T467;
	goto T474;
T474:;
	if((CMPcadddr((V117)))==Cnil){
	goto T476;}
	goto T467;
	goto T476;
T476:;
	if(((long)length(CMPcar((V117))))<(64)){
	goto T478;}
	goto T467;
	goto T478;
T478:;
	{register object V119;
	register object V120;
	object V121;
	V119= CMPcar((V117));
	{object V122 =((V107))->s.s_plist;
	 object ind= VV[68];
	while(V122!=Cnil){
	if(V122->c.c_car==ind){
	V120= (V122->c.c_cdr->c.c_car);
	goto T483;
	}else V122=V122->c.c_cdr->c.c_cdr;}
	V120= Cnil;}
	goto T483;
T483:;
	V121= Cnil;
	goto T485;
T485:;
	if(!(((V119))==Cnil)){
	goto T486;}
	if(((V120))==Cnil){
	goto T489;}
	goto T481;
	goto T489;
T489:;
	if(((V118))==Cnil){
	goto T492;}
	V99= (*(LnkLI291))((V99),(V118));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T439;
	goto T492;
T492:;
	if(((V121))==Cnil){
	goto T480;}
	goto T481;
	goto T486;
T486:;
	{register object V123;
	V123= CMPcar((V119));
	if(!(equal(CMPcar((V120)),VV[69]))){
	goto T499;}
	goto T481;
	goto T499;
T499:;
	if((STREF(object,(V123),4))==(VV[71])){
	goto T505;}
	if(!((STREF(object,(V123),4))==(VV[72]))){
	goto T504;}
	if(!((CMPcar((V120)))==(Ct))){
	goto T504;}
	goto T505;
T505:;
	if((STREF(object,(V123),12))!=Cnil){
	goto T504;}
	if(!((STREF(object,(V123),16))==(VV[73]))){
	goto T503;}
	goto T504;
T504:;
	{object V124;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V125= vs_base[0];
	V124= list(2,STREF(object,(V123),0),V125);
	V118= make_cons((V124),(V118));}
	goto T503;
T503:;
	if(((*(LnkLI292))(CMPcar((V120)),STREF(object,(V123),20)))==Cnil){
	goto T502;}
	{register object x= CMPcar((V120)),V126= VV[74];
	while(V126!=Cnil)
	if(eql(x,V126->c.c_car)){
	goto T497;
	}else V126=V126->c.c_cdr;}
	if((STREF(object,(V123),16))==(VV[75])){
	goto T497;}
	if(((VV[76]->s.s_dbind))!=Cnil){
	goto T497;}
	{register object x= (V123),V127= STREF(object,CMPcadr((V104)),0);
	while(V127!=Cnil)
	if(eql(x,V127->c.c_car)){
	goto T527;
	}else V127=V127->c.c_cdr;
	goto T497;}
	goto T527;
T527:;
	goto T502;
T502:;
	if(((V118))!=Cnil){
	goto T528;}
	(void)((VFUN_NARGS=3,(*(LnkLI267))(VV[77],(V107),STREF(object,(V123),0))));
	goto T528;
T528:;
	V121= Ct;}
	goto T497;
T497:;
	V119= CMPcdr((V119));
	V120= CMPcdr((V120));
	goto T485;}
	goto T481;
T481:;
	goto T467;
	goto T480;
T480:;
	if(!(type_of((V105))==t_fixnum||
type_of((V105))==t_bignum||
type_of((V105))==t_ratio||
type_of((V105))==t_shortfloat||
type_of((V105))==t_longfloat||
type_of((V105))==t_complex)){
	goto T467;}}
	{object V128;
	{object V130 =((V107))->s.s_plist;
	 object ind= VV[68];
	while(V130!=Cnil){
	if(V130->c.c_car==ind){
	V129= (V130->c.c_cdr->c.c_car);
	goto T537;
	}else V130=V130->c.c_cdr->c.c_cdr;}
	V129= Cnil;}
	goto T537;
T537:;
	{object V132 =((V107))->s.s_plist;
	 object ind= VV[78];
	while(V132!=Cnil){
	if(V132->c.c_car==ind){
	V131= (V132->c.c_cdr->c.c_car);
	goto T538;
	}else V132=V132->c.c_cdr->c.c_cdr;}
	V131= Cnil;}
	goto T538;
T538:;
	{object V134 =((V107))->s.s_plist;
	 object ind= VV[68];
	while(V134!=Cnil){
	if(V134->c.c_car==ind){
	V133= (V134->c.c_cdr->c.c_car);
	goto T539;
	}else V134=V134->c.c_cdr->c.c_cdr;}
	V133= Cnil;}
	goto T539;
T539:;
	V128= list(5,(V107),V129,V131,small_fixnum(3),(*(LnkLI293))((V105),V133));
	(VV[79]->s.s_dbind)= make_cons((V128),(VV[79]->s.s_dbind));
	goto T465;}
	goto T467;
T467:;
	{object V135;
	{object V137 =((V107))->s.s_plist;
	 object ind= VV[78];
	while(V137!=Cnil){
	if(V137->c.c_car==ind){
	V136= (V137->c.c_cdr->c.c_car);
	goto T542;
	}else V137=V137->c.c_cdr->c.c_cdr;}
	V136= Cnil;}
	goto T542;
T542:;
	V135= ((V136)==(Ct)?Ct:Cnil);
	if(((V135))==Cnil){
	goto T465;}}
	goto T465;
T465:;
	if((CMPcadddr((V104)))==Cnil){
	goto T545;}
	V106= CMPcadddr((V104));
	goto T545;
T545:;
	(void)((*(LnkLI294))());
	{object V138;
	V138= list(6,VV[52],(V107),(V105),(V104),(V106),(VV[60]->s.s_dbind));
	(VV[25]->s.s_dbind)= make_cons((V138),(VV[25]->s.s_dbind));}
	{object V139;
	V139= make_cons((V107),(V105));
	(VV[80]->s.s_dbind)= make_cons((V139),(VV[80]->s.s_dbind));
	V140= (VV[80]->s.s_dbind);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	{object V141 = Cnil;
	bds_unwind1;
	VMR8(V141)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INLINE-STRING	*/

static object LI9(V144,V145)

object V144;object V145;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(((V145))!=Cnil){
	goto T556;}
	base[0]= Cnil;
	base[1]= VV[81];
	base[2]= (V144);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V146 = vs_base[0];
	VMR9(V146)}
	goto T556;
T556:;
	{register object V147;
	V147= (VFUN_NARGS=7,(*(LnkLI295))(small_fixnum(100),VV[82],VV[83],VV[84],small_fixnum(0),VV[85],Ct));
	base[0]= (V147);
	base[1]= VV[86];
	base[2]= (V144);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{register object V148;
	register long V149;
	V149= 0;
	V148= (V145);
	goto T569;
T569:;
	if(!((CMPcdr((V148)))==Cnil)){
	goto T570;}
	base[0]= (V147);
	base[1]= VV[87];
	base[2]= CMPmake_fixnum(V149);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T566;
	goto T570;
T570:;
	base[0]= (V147);
	base[1]= VV[88];
	base[2]= CMPmake_fixnum(V149);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V148= CMPcdr((V148));
	V149= (long)(V149)+1;
	goto T569;}
	goto T566;
T566:;
	{object V150 = (V147);
	VMR9(V150)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CS-PUSH	*/

static object LI10(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V151;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T585;
	else {
	V151= first;}
	--narg; goto T586;
	goto T585;
T585:;
	V151= Cnil;
	goto T586;
T586:;
	{object V152;
	(VV[89]->s.s_dbind)= number_plus((VV[89]->s.s_dbind),small_fixnum(1));
	V152= (VV[89]->s.s_dbind);
	{object V153;
	if(((V151))==Cnil){
	goto T593;}
	V153= make_cons((V151),(V152));
	goto T591;
	goto T593;
T593:;
	V153= (V152);
	goto T591;
T591:;
	(VV[19]->s.s_dbind)= make_cons((V153),(VV[19]->s.s_dbind));}
	{object V154 = (V152);
	VMR10(V154)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function F-TYPE	*/

static object LI11(V156)

register object V156;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= (V156);
	base[1]= VV[70];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk296)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T596;}
	V156= STREF(object,(V156),20);
	goto T596;
T596:;
	if(((V156))==Cnil){
	goto T603;}
	base[0]= (V156);
	base[1]= VV[90];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk297)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T603;}
	{long V157 = 1;
	VMR11((object)V157)}
	goto T603;
T603:;
	{long V158 = 0;
	VMR11((object)V158)}
	base[0]=base[0];
}
/*	local entry for function PROCLAIMED-ARGD	*/

static object LI12(V161,V162)

register object V161;object V162;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register long V163;
	register long V164;
	register object V165;
	register object V166;
	V163= (long)length((V161));
	V164= 8;
	V165= CMPmake_fixnum((long)(*(LnkLI298))((V162)));
	V166= Ct;
	goto T613;
T613:;
	if(eql(small_fixnum(0),(V165))){
	goto T615;}
	V163= (long)(V163)+((long)((fix((V165))) << (V164)));
	goto T615;
T615:;
	if(((V166))==Cnil){
	goto T619;}
	V164= 10;
	V166= Cnil;
	goto T619;
T619:;
	if(((V161))!=Cnil){
	goto T625;}
	{long V167 = V163;
	VMR12((object)V167)}
	goto T625;
T625:;
	V164= (long)(V164)+(2);
	{register object V169;
	V169= CMPcar((V161));
	V161= CMPcdr((V161));
	V168= (V169);}
	V165= CMPmake_fixnum((long)(*(LnkLI298))(V168));
	goto T613;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI13(V173,V174,V175)

register object V173;object V174;object V175;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI300))((V173))))==Cnil){
	goto T637;}
	{register object x= (V173),V176= (VV[79]->s.s_dbind);
	while(V176!=Cnil)
	if(eql(x,V176->c.c_car->c.c_car) &&V176->c.c_car != Cnil){
	goto T641;
	}else V176=V176->c.c_cdr;
	goto T640;}
	goto T641;
T641:;
	V177= list(2,VV[92],(V173));
	V178= (*(LnkLI302))(VV[93],(V174));
	{object V180 =((V173))->s.s_plist;
	 object ind= VV[68];
	while(V180!=Cnil){
	if(V180->c.c_car==ind){
	V179= (V180->c.c_cdr->c.c_car);
	goto T643;
	}else V180=V180->c.c_cdr->c.c_cdr;}
	V179= Cnil;}
	goto T643;
T643:;
	{object V182 =((V173))->s.s_plist;
	 object ind= VV[78];
	while(V182!=Cnil){
	if(V182->c.c_car==ind){
	V181= (V182->c.c_cdr->c.c_car);
	goto T644;
	}else V182=V182->c.c_cdr->c.c_cdr;}
	V181= Cnil;}
	goto T644;
T644:;
	V183 = CMPmake_fixnum((long)(*(LnkLI303))(V179,V181));
	V184= list(4,VV[91],/* INLINE-ARGS */V177,/* INLINE-ARGS */V178,V183);
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V184)));
	{object V185 = Ct;
	VMR13(V185)}
	goto T640;
T640:;
	{register object V186;
	register object V187;
	object V188;
	V186= CMPmake_fixnum((long)length(CMPcar(CMPcaddr((V175)))));
	{object V190 =((V173))->s.s_plist;
	 object ind= VV[68];
	while(V190!=Cnil){
	if(V190->c.c_car==ind){
	V189= (V190->c.c_cdr->c.c_car);
	goto T648;
	}else V190=V190->c.c_cdr->c.c_cdr;}
	V189= Cnil;}
	goto T648;
T648:;
	V187= CMPmake_fixnum((long)length(V189));
	{object V193 =((V173))->s.s_plist;
	 object ind= VV[68];
	while(V193!=Cnil){
	if(V193->c.c_car==ind){
	V192= (V193->c.c_cdr->c.c_car);
	goto T650;
	}else V193=V193->c.c_cdr->c.c_cdr;}
	V192= Cnil;}
	goto T650;
T650:;
	{register object x= VV[69],V191= V192;
	while(V191!=Cnil)
	if(eql(x,V191->c.c_car)){
	V188= V191;
	goto T649;
	}else V191=V191->c.c_cdr;
	V188= Cnil;}
	goto T649;
T649:;
	if(((V188))==Cnil){
	goto T652;}
	base[0]= (V186);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T654;}
	goto T645;
	goto T654;
T654:;{object V194;
	V195 = CMPmake_fixnum((long)length((V188)));
	V194= number_minus((V187),V195);
	if(V194==Cnil)goto T657;
	goto T645;
	goto T657;
T657:;}
	V196 = CMPmake_fixnum((long)length((V188)));
	V197= number_minus((V187),V196);
	(void)((VFUN_NARGS=4,(*(LnkLI267))(VV[94],(V173),/* INLINE-ARGS */V197,(V186))));
	goto T645;
	goto T652;
T652:;
	if(eql((V186),(V187))){
	goto T660;}
	(void)((VFUN_NARGS=4,(*(LnkLI267))(VV[95],(V173),(V187),(V186))));
	goto T645;
	goto T660;
T660:;
	(void)((VFUN_NARGS=2,(*(LnkLI267))(VV[96],(V173))));}
	goto T645;
T645:;
	{object V198 = Cnil;
	VMR13(V198)}
	goto T637;
T637:;
	{object V199 = Cnil;
	VMR13(V199)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VOLATILE	*/

static object LI14(V201)

object V201;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if((STREF(object,(V201),16))==Cnil){
	goto T663;}
	{object V202 = VV[97];
	VMR14(V202)}
	goto T663;
T663:;
	{object V203 = VV[98];
	VMR14(V203)}
	return Cnil;
}
/*	local entry for function REGISTER	*/

static object LI15(V205)

object V205;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(equal((VV[21]->s.s_dbind),VV[99]))){
	goto T666;}
	if(!((fix(STREF(object,(V205),24)))>=(fix((VV[100]->s.s_dbind))))){
	goto T666;}
	{object V206 = VV[101];
	VMR15(V206)}
	goto T666;
T666:;
	{object V207 = VV[102];
	VMR15(V207)}
	return Cnil;
}
/*	local entry for function VARARG-P	*/

static object LI16(V209)

object V209;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V211 =((V209))->s.s_plist;
	 object ind= VV[78];
	while(V211!=Cnil){
	if(V211->c.c_car==ind){
	V210= (V211->c.c_cdr->c.c_car);
	goto T672;
	}else V211=V211->c.c_cdr->c.c_cdr;}
	V210= Cnil;}
	goto T672;
T672:;
	if(equal(V210,Ct)){
	goto T670;}
	{object V212 = Cnil;
	VMR16(V212)}
	goto T670;
T670:;
	{register object V213;
	{object V214 =((V209))->s.s_plist;
	 object ind= VV[68];
	while(V214!=Cnil){
	if(V214->c.c_car==ind){
	V213= (V214->c.c_cdr->c.c_car);
	goto T673;
	}else V214=V214->c.c_cdr->c.c_cdr;}
	V213= Cnil;}
	goto T673;
T673:;
	goto T675;
T675:;
	if(((V213))!=Cnil){
	goto T676;}
	{object V215 = Ct;
	VMR16(V215)}
	goto T676;
T676:;
	if(!(type_of((V213))==t_cons)){
	goto T681;}
	goto T680;
	goto T681;
T681:;
	{object V216 = Cnil;
	VMR16(V216)}
	goto T680;
T680:;
	if(!((CMPcar((V213)))==(Ct))){
	goto T684;}
	goto T683;
	goto T684;
T684:;
	if(!((CMPcar((V213)))==(VV[69]))){
	goto T686;}
	goto T683;
	goto T686;
T686:;
	{object V217 = Cnil;
	VMR16(V217)}
	goto T683;
T683:;
	V213= CMPcdr((V213));
	goto T675;}
	return Cnil;
}
/*	local entry for function MAXARGS	*/

static object LI17(V219)

register object V219;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((CMPcadddr((V219)))!=Cnil){
	goto T691;}
	if((CMPcaddr((V219)))==Cnil){
	goto T692;}
	goto T691;
T691:;
	{object V220 = small_fixnum(64);
	VMR17(V220)}
	goto T692;
T692:;
	base[0]= CMPmake_fixnum((long)length(CMPcar((V219))));
	base[1]= CMPmake_fixnum((long)length(CMPcadr((V219))));
	V221 = CMPmake_fixnum((long)length(CMPcar(CMPcddddr((V219)))));
	base[2]= number_times(small_fixnum(2),V221);
	vs_top=(vs_base=base+0)+3;
	Lplus();
	vs_top=sup;
	{object V222 = vs_base[0];
	VMR17(V222)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-ADDRESS	*/

static object LI18(V225,V226)

object V225;object V226;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V227;
	V227= list(2,(V225),(V226));
	(VV[22]->s.s_dbind)= make_cons((V227),(VV[22]->s.s_dbind));}
	{object V228;
	V228= (VV[23]->s.s_dbind);
	(VV[23]->s.s_dbind)= number_plus((VV[23]->s.s_dbind),small_fixnum(1));
	{object V229 = (V228);
	VMR18(V229)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFUN	*/

static object LI19(V235,V236,V237,V238,V239)

register object V235;register object V236;register object V237;object V238;object V239;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V240 =((V235))->s.s_plist;
	 object ind= VV[103];
	while(V240!=Cnil){
	if(V240->c.c_car==ind){
	if(((V240->c.c_cdr->c.c_car))==Cnil){
	goto T704;}
	goto T706;
	}else V240=V240->c.c_cdr->c.c_cdr;}
	goto T704;}
	goto T706;
T706:;
	{object V241 = Cnil;
	VMR19(V241)}
	goto T704;
T704:;
	if(((V238))==Cnil){
	goto T707;}
	V242= list(4,VV[104],list(2,VV[92],(V235)),(V238),VV[105]);
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V242)));
	goto T707;
T707:;
	{object V243;
	V243= (*(LnkLI304))((V235),(V236),(V237));
	if(((V243))==Cnil){
	goto T713;}
	goto T710;
	goto T713;
T713:;
	if(((*(LnkLI305))((V235)))==Cnil){
	goto T716;}
	{object V244;
	V244= CMPcadddr(CMPcaddr((V237)));
	if(((V244))==Cnil){
	goto T720;}
	V245= list(2,VV[92],(V235));
	V246= (*(LnkLI302))(VV[107],(V236));
	V247 = CMPmake_fixnum((long)length(CMPcar(CMPcaddr((V237)))));
	V248= (*(LnkLI306))(CMPcaddr((V237)));
	V249= (*(LnkLI299))(/* INLINE-ARGS */V248,small_fixnum(8));
	V250= number_plus(V247,/* INLINE-ARGS */V249);
	base[0]= Cnil;
	base[1]= VV[108];
	base[2]= (V236);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V251= vs_base[0];
	V252= list(5,VV[106],/* INLINE-ARGS */V245,/* INLINE-ARGS */V246,/* INLINE-ARGS */V250,(*(LnkLI302))(V251,VV[109]));
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V252)));
	goto T710;
	goto T720;
T720:;
	V253= list(2,VV[92],(V235));
	V254= (*(LnkLI302))(VV[111],(V236));
	V255 = CMPmake_fixnum((long)length(CMPcar(CMPcaddr((V237)))));
	V256= (*(LnkLI306))(CMPcaddr((V237)));
	V257= (*(LnkLI299))(/* INLINE-ARGS */V256,small_fixnum(8));
	V258= list(4,VV[110],/* INLINE-ARGS */V253,/* INLINE-ARGS */V254,number_plus(V255,/* INLINE-ARGS */V257));
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V258)));
	goto T710;}
	goto T716;
T716:;
	if(!(type_of((V236))==t_fixnum||
type_of((V236))==t_bignum||
type_of((V236))==t_ratio||
type_of((V236))==t_shortfloat||
type_of((V236))==t_longfloat||
type_of((V236))==t_complex)){
	goto T727;}
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V236)));
	princ_str("();",VV[32]);
	V259= list(2,VV[92],(V235));
	V260= list(3,VV[112],/* INLINE-ARGS */V259,(*(LnkLI302))(VV[113],(V236)));
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V260)));
	goto T710;
	goto T727;
T727:;
	princ_char(10,VV[32]);
	(void)((*(LnkLI278))((V236)));
	princ_str("();",VV[32]);
	V261= list(2,VV[92],(V235));
	V262= list(3,VV[112],/* INLINE-ARGS */V261,(*(LnkLI302))(VV[114],(V236)));
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V262)));}
	goto T710;
T710:;
	if(!(number_compare((VV[115]->s.s_dbind),small_fixnum(2))<0)){
	goto T738;}
	{object V263 = sputprop((V235),VV[116],Ct);
	VMR19(V263)}
	goto T738;
T738:;
	{object V264 = Cnil;
	VMR19(V264)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DEBUG	*/

static object LI20(V267,V268)

object V267;object V268;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V269 = putprop((V267),(V268),VV[117]);
	VMR20(V269)}
	return Cnil;
}
/*	local entry for function T3DEFUN	*/

static object LI21(V275,V276,V277,V278,V279)

register object V275;register object V276;register object V277;object V278;object V279;
{	 VMB21 VMS21 VMV21
	bds_check;
	goto TTL;
TTL:;
	{register object V280;
	V280= Cnil;
	bds_bind(VV[0],list(2,VV[52],(V275)));
	bds_bind(VV[21],(*(LnkLI307))(CMPcadr((V277))));
	bds_bind(VV[118],Cnil);
	{register object V281;
	register object V282;
	V281= (VV[79]->s.s_dbind);
	V282= CMPcar((V281));
	goto T750;
T750:;
	if(!(((V281))==Cnil)){
	goto T751;}
	goto T745;
	goto T751;
T751:;{object V283;
	base[4]= CMPcadddr((V282));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk308)();
	vs_top=sup;
	V283= vs_base[0];
	if(V283==Cnil)goto T756;
	goto T755;
	goto T756;
T756:;}
	base[4]= VV[119];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T755;
T755:;
	if((CMPcar((V282)))==((V275))){
	goto T761;}
	goto T760;
	goto T761;
T761:;
	if((CMPcadr(CMPcddddr((V282))))==Cnil){
	goto T763;}
	goto T760;
	goto T763;
T763:;
	V280= (V282);
	if(((V280))==Cnil){
	goto T745;}
	goto T746;
	goto T760;
T760:;
	V281= CMPcdr((V281));
	V282= CMPcar((V281));
	goto T750;}
	goto T746;
T746:;
	if(((VFUN_NARGS=1,(*(LnkLI300))((V275))))!=Cnil){
	goto T771;}
	{object V284;
	V284= list(4,(V275),(V276),CMPcadr((V280)),CMPcaddr((V280)));
	(VV[30]->s.s_dbind)= make_cons((V284),(VV[30]->s.s_dbind));}
	goto T771;
T771:;
	(void)((*(LnkLI309))(STREF(object,CMPcadr((V277)),4),small_fixnum(0)));
	base[3]= VV[120];
	{object V285= CMPcaddr((V280));
	if((V285!= VV[90]))goto T779;
	base[4]= VV[121];
	goto T778;
	goto T779;
T779:;
	if((V285!= VV[143]))goto T780;
	base[4]= VV[122];
	goto T778;
	goto T780;
T780:;
	if((V285!= VV[144]))goto T781;
	base[4]= VV[123];
	goto T778;
	goto T781;
T781:;
	if((V285!= VV[145]))goto T782;
	base[4]= VV[124];
	goto T778;
	goto T782;
T782:;
	base[4]= VV[125];}
	goto T778;
T778:;
	base[5]= (V275);
	base[6]= (V276);
	base[7]= (V277);
	base[8]= (V279);
	base[9]= (V280);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk310)();
	vs_top=sup;
	goto T743;
	goto T745;
T745:;
	if(((*(LnkLI305))((V275)))==Cnil){
	goto T789;}
	(void)((*(LnkLI309))(STREF(object,CMPcadr((V277)),4),small_fixnum(0)));
	base[3]= VV[126];
	base[4]= VV[125];
	base[5]= (V275);
	base[6]= (V276);
	base[7]= (V277);
	base[8]= (V279);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk310)();
	vs_top=sup;
	goto T743;
	goto T789;
T789:;
	(void)((*(LnkLI309))(STREF(object,CMPcadr((V277)),4),small_fixnum(2)));
	base[3]= VV[127];
	base[4]= VV[128];
	base[5]= (V275);
	base[6]= (V276);
	base[7]= (V277);
	base[8]= (V279);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk310)();
	vs_top=sup;
	goto T743;
T743:;
	(void)((*(LnkLI311))((V276)));
	{object V286 = (*(LnkLI312))((V275),(V277));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR21(V286)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T3DEFUN-AUX	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	bds_check;
	{object V287;
	object V288;
	V287=(base[0]);
	bds_bind(VV[129],base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V288=(base[2]);
	vs_top=sup;
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],small_fixnum(0));
	bds_bind(VV[133],small_fixnum(0));
	bds_bind(VV[134],Cnil);
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	(VV[138]->s.s_dbind)= number_plus((VV[138]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[137],(VV[138]->s.s_dbind));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	base[16]= (V287);
	{object V289;
	V289= (V288);
	 vs_top=base+17;
	 while(V289!=Cnil)
	 {vs_push((V289)->c.c_car);V289=(V289)->c.c_cdr;}
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

static object LI23(V295,V296,V297,V298,V299)

object V295;object V296;object V297;object V298;object V299;
{	 VMB23 VMS23 VMV23
	bds_check;
	goto TTL;
TTL:;
	{object V300;
	object V301;
	V300= Cnil;
	V301= CMPcaaddr((V297));
	{register object V302;
	object V303;
	V303= CMPcadr((V299));
	V302= (V301);
	goto T816;
T816:;
	if(!(((V302))==Cnil)){
	goto T817;}
	goto T813;
	goto T817;
T817:;
	if(!((STREF(object,CMPcar((V302)),4))==(VV[72]))){
	goto T823;}
	{object V304;
	V304= make_cons(CMPcar((V302)),STREF(object,CMPcar((V302)),16));
	V300= make_cons((V304),(V300));
	goto T821;}
	goto T823;
T823:;
	V305= CMPcar((V302));
	{object V307= CMPcar((V303));
	if((V307!= VV[90]))goto T828;
	V306= VV[90];
	goto T827;
	goto T828;
T828:;
	if((V307!= VV[143]))goto T829;
	V306= VV[143];
	goto T827;
	goto T829;
T829:;
	if((V307!= VV[144]))goto T830;
	V306= VV[144];
	goto T827;
	goto T830;
T830:;
	if((V307!= VV[145]))goto T831;
	V306= VV[145];
	goto T827;
	goto T831;
T831:;
	V306= VV[75];}
	goto T827;
T827:;
	V308= Ct;
	STSET(object,/* INLINE-ARGS */V305,4, V306);
	(void)(V306);
	goto T821;
T821:;
	V309= CMPcar((V302));
	(VV[89]->s.s_dbind)= number_plus((VV[89]->s.s_dbind),small_fixnum(1));
	V310= Ct;
	STSET(object,/* INLINE-ARGS */V309,16, (VV[89]->s.s_dbind));
	(void)((VV[89]->s.s_dbind));
	V302= CMPcdr((V302));
	V303= CMPcdr((V303));
	goto T816;}
	goto T813;
T813:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[146],(V295))));
	princ_str("\nstatic ",VV[32]);
	V311= (*(LnkLI281))(CMPcaddr((V299)));
	V312= (*(LnkLI282))(/* INLINE-ARGS */V311);
	(void)((*(LnkLI278))(/* INLINE-ARGS */V312));
	princ_str("LI",VV[32]);
	(void)((*(LnkLI278))((V296)));
	princ_str("();",VV[32]);
	princ_str("\nstatic ",VV[26]);
	V313= (*(LnkLI281))(CMPcaddr((V299)));
	V314= (*(LnkLI282))(/* INLINE-ARGS */V313);
	(void)((*(LnkLI275))(/* INLINE-ARGS */V314));
	princ_str("LI",VV[26]);
	(void)((*(LnkLI275))((V296)));
	princ_char(40,VV[26]);
	(void)((*(LnkLI314))((V301),CMPcadr((V299))));
	{object V315;
	V315= (VV[137]->s.s_dbind);
	if(((VV[148]->s.s_dbind))==Cnil){
	goto T855;}
	base[1]= make_cons((V295),(V301));
	goto T853;
	goto T855;
T855:;
	base[1]= Cnil;
	goto T853;
T853:;
	bds_bind(VV[147],base[1]);
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	princ_str("\n{	",VV[26]);
	(void)((*(LnkLI315))(STREF(object,CMPcadr((V297)),4),(V296),VV[149]));
	princ_str(" VMB",VV[26]);
	(void)((*(LnkLI275))((V315)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V315)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V315)));
	if(((V298))==Cnil){
	goto T867;}
	princ_str("\n	bds_check;",VV[26]);
	goto T867;
T867:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T871;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T871;
T871:;
	if(((VV[147]->s.s_dbind))==Cnil){
	goto T875;}
	(VV[135]->s.s_dbind)= make_cons(VV[151],(VV[135]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[26]);
	princ_str("\nTTL:;",VV[26]);
	goto T875;
T875:;
	{register object V317;
	register object V318;
	V317= (V300);
	V318= CMPcar((V317));
	goto T887;
T887:;
	if(!(((V317))==Cnil)){
	goto T888;}
	goto T883;
	goto T888;
T888:;
	princ_str("\n	bds_bind(VV[",VV[26]);
	(void)((*(LnkLI275))(CMPcdr((V318))));
	princ_str("],V",VV[26]);
	(void)((*(LnkLI275))(STREF(object,CMPcar((V318)),16)));
	princ_str(");",VV[26]);
	(VV[135]->s.s_dbind)= make_cons(VV[152],(VV[135]->s.s_dbind));
	V320= CMPcar((V318));
	V321= Ct;
	STSET(object,/* INLINE-ARGS */V320,4, VV[72]);
	(void)(VV[72]);
	V322= CMPcar((V318));
	V323= CMPcdr((V318));
	V324= Ct;
	STSET(object,/* INLINE-ARGS */V322,16, /* INLINE-ARGS */V323);
	(void)(/* INLINE-ARGS */V323);
	V317= CMPcdr((V317));
	V318= CMPcar((V317));
	goto T887;}
	goto T883;
T883:;
	base[3]= CMPcaddr(CMPcddr((V297)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk316)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T911;}
	if(((VV[139]->s.s_dbind))!=Cnil){
	goto T911;}
	if(((VV[141]->s.s_dbind))!=Cnil){
	goto T911;}
	goto T909;
	goto T911;
T911:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T909;
T909:;
	V325= (*(LnkLI281))(CMPcaddr((V299)));
	if(!(equal(VV[153],/* INLINE-ARGS */V325))){
	goto T918;}
	princ_str("\n	return Cnil;",VV[26]);
	goto T918;
T918:;
	princ_str("\n}",VV[26]);
	{object V326 = (*(LnkLI317))((V315),CMPcaddr((V299)));
	bds_unwind1;
	bds_unwind1;
	VMR23(V326)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-UP-VAR-CVS	*/

static object LI24(V328)

object V328;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if(((VV[154]->s.s_dbind))==Cnil){
	goto T925;}
	V329= (*(LnkLI318))();
	V330= Ct;
	STSET(object,(V328),8, /* INLINE-ARGS */V329);
	{object V331 = /* INLINE-ARGS */V329;
	VMR24(V331)}
	goto T925;
T925:;
	V332= (*(LnkLI319))();
	V333= Ct;
	STSET(object,(V328),8, /* INLINE-ARGS */V332);
	{object V334 = /* INLINE-ARGS */V332;
	VMR24(V334)}
	return Cnil;
}
/*	local entry for function T3DEFUN-VARARG	*/

static object LI25(V339,V340,V341,V342)

object V339;object V340;object V341;object V342;
{	 VMB25 VMS25 VMV25
	bds_check;
	goto TTL;
TTL:;
	{object V343;
	register object V344;
	object V345;
	object V346;
	object V347;
	object V348;
	object V349;
	object V350;
	V343= Cnil;
	bds_bind(VV[154],Cnil);
	base[1]= Cnil;
	V344= Cnil;
	V345= Ct;
	V346= Cnil;
	bds_bind(VV[155],small_fixnum(0));
	V347= Cnil;
	V348= CMPcaddr((V341));
	V349= Cnil;{object V351;
	V351= CMPcaddr((V348));
	if(V351==Cnil)goto T935;
	V350= V351;
	goto T934;
	goto T935;
T935:;}{object V352;
	V352= CMPcadr((V348));
	if(V352==Cnil)goto T937;
	V350= V352;
	goto T934;
	goto T937;
T937:;}
	V350= CMPcadddr((V348));
	goto T934;
T934:;
	{object V353;
	register object V354;
	V353= CMPcar((V348));
	V354= CMPcar((V353));
	goto T943;
T943:;
	if(!(((V353))==Cnil)){
	goto T944;}
	goto T939;
	goto T944;
T944:;
	{object V355;
	(VV[89]->s.s_dbind)= number_plus((VV[89]->s.s_dbind),small_fixnum(1));
	V355= list(2,VV[156],(VV[89]->s.s_dbind));
	V343= make_cons((V355),(V343));}
	V353= CMPcdr((V353));
	V354= CMPcar((V353));
	goto T943;}
	goto T939;
T939:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[157],(V339))));
	{object V356;
	V356= VV[158];
	princ_str("\nstatic object LI",VV[26]);
	(void)((*(LnkLI275))((V340)));
	princ_char(40,VV[26]);
	if(((V343))==Cnil){
	goto T963;}
	{object V357;
	V357= (V343);
	goto T967;
T967:;
	if(((V357))!=Cnil){
	goto T968;}
	goto T963;
	goto T968;
T968:;
	princ_str("object ",VV[26]);
	(void)((*(LnkLI275))(CMPcar((V357))));
	V356= (VFUN_NARGS=3,(*(LnkLI320))(VV[159],(V356),VV[160]));
	if(!((CMPcdr((V357)))==Cnil)){
	goto T978;}
	goto T977;
	goto T978;
T978:;
	princ_char(44,VV[26]);
	V356= (VFUN_NARGS=3,(*(LnkLI320))(VV[159],(V356),VV[161]));
	goto T977;
T977:;
	V357= CMPcdr((V357));
	goto T967;}
	goto T963;
T963:;
	if(((V350))==Cnil){
	goto T986;}
	if(((V343))==Cnil){
	goto T989;}
	princ_char(44,VV[26]);
	V356= (VFUN_NARGS=3,(*(LnkLI320))(VV[159],(V356),VV[162]));
	goto T989;
T989:;
	princ_str("object first,...",VV[26]);
	V356= (VFUN_NARGS=3,(*(LnkLI320))(VV[159],(V356),VV[163]));
	goto T986;
T986:;
	princ_char(41,VV[26]);
	princ_str("\nstatic object LI",VV[32]);
	(void)((*(LnkLI278))((V340)));
	princ_char(40,VV[32]);
	(void)((*(LnkLI278))((V356)));
	princ_str(");",VV[32]);}
	{object V358;
	V358= (VV[137]->s.s_dbind);
	if((VV[148]->s.s_dbind)==Cnil){
	base[5]= Cnil;
	goto T1006;}
	if((CMPcaddr((V348)))==Cnil){
	goto T1007;}
	base[5]= Cnil;
	goto T1006;
	goto T1007;
T1007:;
	{object V359;
	object V360;
	V359= CMPcar((V348));
	V360= CMPcar((V359));
	goto T1014;
T1014:;
	if(!(((V359))==Cnil)){
	goto T1015;}
	goto T1009;
	goto T1015;
T1015:;
	if((STREF(object,(V360),12))==Cnil){
	goto T1019;}
	goto T1010;
	goto T1019;
T1019:;
	V359= CMPcdr((V359));
	V360= CMPcar((V359));
	goto T1014;}
	goto T1010;
T1010:;
	base[5]= Cnil;
	goto T1006;
	goto T1009;
T1009:;
	if((CMPcadr((V348)))==Cnil){
	goto T1027;}
	base[5]= Cnil;
	goto T1006;
	goto T1027;
T1027:;
	if((CMPcar(CMPcddddr((V348))))==Cnil){
	goto T1029;}
	base[5]= Cnil;
	goto T1006;
	goto T1029;
T1029:;
	base[5]= make_cons((V339),CMPcar((V348)));
	goto T1006;
T1006:;
	bds_bind(VV[147],base[5]);
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	princ_str("\n{	",VV[26]);
	if(((V350))==Cnil){
	goto T1033;}
	princ_str("\n	va_list ap;",VV[26]);
	goto T1033;
T1033:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[26]);
	(void)((*(LnkLI315))(STREF(object,CMPcadr((V341)),4),(V340),VV[149]));
	princ_str(" VMB",VV[26]);
	(void)((*(LnkLI275))((V358)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V358)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V358)));
	if(((V342))==Cnil){
	goto T1047;}
	princ_str("\n	bds_check;",VV[26]);
	goto T1047;
T1047:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T1051;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T1051;
T1051:;
	if((V350)!=Cnil){
	goto T1055;}
	princ_str("\n	if ( narg!= ",VV[26]);
	V361 = CMPmake_fixnum((long)length((V343)));
	(void)((*(LnkLI275))(V361));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[26]);
	V362 = CMPmake_fixnum((long)length((V343)));
	(void)((*(LnkLI275))(V362));
	princ_str("));",VV[26]);
	goto T1055;
T1055:;
	{object V363;
	object V364;
	V363= CMPcar((V348));
	V364= CMPcar((V363));
	goto T1066;
T1066:;
	if(!(((V363))==Cnil)){
	goto T1067;}
	goto T1062;
	goto T1067;
T1067:;
	base[9]= (V364);
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	V363= CMPcdr((V363));
	V364= CMPcar((V363));
	goto T1066;}
	goto T1062;
T1062:;
	{object V365;
	object V366;
	V365= CMPcadr((V348));
	V366= CMPcar((V365));
	goto T1082;
T1082:;
	if(!(((V365))==Cnil)){
	goto T1083;}
	goto T1078;
	goto T1083;
T1083:;
	base[9]= CMPcar((V366));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((CMPcaddr((V366)))==Cnil){
	goto T1089;}
	base[9]= CMPcaddr((V366));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1089;
T1089:;
	V365= CMPcdr((V365));
	V366= CMPcar((V365));
	goto T1082;}
	goto T1078;
T1078:;
	if((CMPcaddr((V348)))==Cnil){
	goto T1098;}
	base[7]= CMPcaddr((V348));
	vs_top=(vs_base=base+7)+1;
	L26(base);
	vs_top=sup;
	goto T1098;
T1098:;
	{object V367;
	object V368;
	V367= CMPcar(CMPcddddr((V348)));
	V368= CMPcar((V367));
	goto T1105;
T1105:;
	if(!(((V367))==Cnil)){
	goto T1106;}
	goto T1061;
	goto T1106;
T1106:;
	base[9]= CMPcadr((V368));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((CMPcadddr((V368)))==Cnil){
	goto T1112;}
	base[9]= CMPcadddr((V368));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1112;
T1112:;
	V367= CMPcdr((V367));
	V368= CMPcar((V367));
	goto T1105;}
	goto T1061;
T1061:;
	if((CMPcadr((V348)))!=Cnil){
	goto T1122;}
	if((CMPcaddr((V348)))!=Cnil){
	goto T1122;}
	if((CMPcadddr((V348)))==Cnil){
	goto T1121;}
	goto T1122;
T1122:;
	if(((V349))!=Cnil){
	goto T1121;}
	V349= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1121;
T1121:;
	if(((VV[164]->s.s_dbind))!=Cnil){
	goto T1135;}
	if(((VV[165]->s.s_dbind))==Cnil){
	goto T1133;}
	goto T1135;
T1135:;
	if((CMPcar((V348)))==Cnil){
	goto T1133;}
	princ_str("\n	if(narg <",VV[26]);
	V369 = CMPmake_fixnum((long)length(CMPcar((V348))));
	(void)((*(LnkLI275))(V369));
	princ_str(") too_few_arguments();",VV[26]);
	goto T1133;
T1133:;
	{object V370;
	object V371;
	V370= CMPcar((V348));
	V371= CMPcar((V370));
	goto T1147;
T1147:;
	if(!(((V370))==Cnil)){
	goto T1148;}
	goto T1143;
	goto T1148;
T1148:;
	(void)((*(LnkLI321))((V371)));
	V370= CMPcdr((V370));
	V371= CMPcar((V370));
	goto T1147;}
	goto T1143;
T1143:;
	{object V372;
	object V373;
	V372= CMPcadr((V348));
	V373= CMPcar((V372));
	goto T1162;
T1162:;
	if(!(((V372))==Cnil)){
	goto T1163;}
	goto T1158;
	goto T1163;
T1163:;
	(void)((*(LnkLI321))(CMPcar((V373))));
	V372= CMPcdr((V372));
	V373= CMPcar((V372));
	goto T1162;}
	goto T1158;
T1158:;
	if((CMPcaddr((V348)))==Cnil){
	goto T1173;}
	(void)((*(LnkLI321))(CMPcaddr((V348))));
	goto T1173;
T1173:;
	if(((VV[154]->s.s_dbind))==Cnil){
	goto T1179;}
	V346= (VV[130]->s.s_dbind);
	goto T1177;
	goto T1179;
T1179:;
	V346= (VV[142]->s.s_dbind);
	goto T1177;
T1177:;
	{object V374;
	object V375;
	V374= CMPcar(CMPcddddr((V348)));
	V375= CMPcar((V374));
	goto T1185;
T1185:;
	if(!(((V374))==Cnil)){
	goto T1186;}
	goto T1181;
	goto T1186;
T1186:;
	(void)((*(LnkLI321))(CMPcadr((V375))));
	V374= CMPcdr((V374));
	V375= CMPcar((V374));
	goto T1185;}
	goto T1181;
T1181:;
	{object V376;
	object V377;
	V376= CMPcar(CMPcddddr((V348)));
	V377= CMPcar((V376));
	goto T1200;
T1200:;
	if(!(((V376))==Cnil)){
	goto T1201;}
	goto T1196;
	goto T1201;
T1201:;
	(void)((*(LnkLI321))(CMPcadddr((V377))));
	V376= CMPcdr((V376));
	V377= CMPcar((V376));
	goto T1200;}
	goto T1196;
T1196:;
	{object V378;
	object V379;
	V379= CMPcar((V348));
	V378= (V343);
	goto T1214;
T1214:;
	if(((V378))!=Cnil){
	goto T1215;}
	goto T1211;
	goto T1215;
T1215:;
	(void)((*(LnkLI322))(CMPcar((V379)),CMPcar((V378))));
	V378= CMPcdr((V378));
	V379= CMPcdr((V379));
	goto T1214;}
	goto T1211;
T1211:;
	if((CMPcadr((V348)))==Cnil){
	goto T1224;}
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	bds_bind(VV[133],(VV[133]->s.s_dbind));
	princ_str("\n	narg = narg - ",VV[26]);
	V380 = CMPmake_fixnum((long)length((V343)));
	(void)((*(LnkLI275))(V380));
	princ_char(59,VV[26]);
	{object V381;
	V381= Ct;
	{object V382;
	object V383;
	V382= CMPcadr((V348));
	V383= CMPcar((V382));
	goto T1235;
T1235:;
	if(!(((V382))==Cnil)){
	goto T1236;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1227;
	goto T1236;
T1236:;
	{object V384;
	(VV[166]->s.s_dbind)= number_plus((VV[166]->s.s_dbind),small_fixnum(1));
	V384= make_cons((VV[166]->s.s_dbind),Cnil);
	V344= make_cons((V384),(V344));}
	princ_str("\n	if (",VV[26]);
	if((CMPcdr((V344)))==Cnil){
	goto T1249;}
	V385= VV[167];
	goto T1247;
	goto T1249;
T1249:;
	V385= VV[168];
	goto T1247;
T1247:;
	(void)((*(LnkLI275))(V385));
	princ_str("narg <= 0) ",VV[26]);
	(CMPcar((V344)))->c.c_cdr = Ct;
	(void)(CMPcar((V344)));
	princ_str("goto T",VV[26]);
	(void)((*(LnkLI275))(CMPcar(CMPcar((V344)))));
	princ_char(59,VV[26]);
	princ_str("\n	else {",VV[26]);
	if(((V349))!=Cnil){
	goto T1259;}
	V349= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1259;
T1259:;
	V386= CMPcar((V383));
	if(((V381))==Cnil){
	goto T1268;}
	V387= make_cons(VV[169],Cnil);
	goto T1266;
	goto T1268;
T1268:;
	V387= make_cons(VV[170],Cnil);
	goto T1266;
T1266:;
	(void)((*(LnkLI322))(/* INLINE-ARGS */V386,V387));
	V381= Cnil;
	princ_char(125,VV[26]);
	if((CMPcaddr((V383)))==Cnil){
	goto T1274;}
	(void)((*(LnkLI322))(CMPcaddr((V383)),Ct));
	goto T1274;
T1274:;
	V382= CMPcdr((V382));
	V383= CMPcar((V382));
	goto T1235;}}
	goto T1227;
T1227:;
	V344= nreverse((V344));
	{object V388;
	(VV[166]->s.s_dbind)= number_plus((VV[166]->s.s_dbind),small_fixnum(1));
	V388= make_cons((VV[166]->s.s_dbind),Cnil);
	princ_str("\n	--narg; ",VV[26]);
	((V388))->c.c_cdr = Ct;
	princ_str("goto T",VV[26]);
	(void)((*(LnkLI275))(CMPcar((V388))));
	princ_char(59,VV[26]);
	{object V389;
	object V390;
	V389= CMPcadr((V348));
	V390= CMPcar((V389));
	goto T1297;
T1297:;
	if(!(((V389))==Cnil)){
	goto T1298;}
	goto T1293;
	goto T1298;
T1298:;
	if((CMPcdr(CMPcar((V344))))==Cnil){
	goto T1302;}
	princ_str("\n	goto T",VV[26]);
	(void)((*(LnkLI275))(CMPcar(CMPcar((V344)))));
	princ_char(59,VV[26]);
	princ_str("\nT",VV[26]);
	(void)((*(LnkLI275))(CMPcar(CMPcar((V344)))));
	princ_str(":;",VV[26]);
	goto T1302;
T1302:;
	{object V391;
	V391= CMPcar((V344));
	V344= CMPcdr((V344));}
	(void)((*(LnkLI323))(CMPcar((V390)),CMPcadr((V390))));
	if((CMPcaddr((V390)))==Cnil){
	goto T1317;}
	(void)((*(LnkLI322))(CMPcaddr((V390)),Cnil));
	goto T1317;
T1317:;
	V389= CMPcdr((V389));
	V390= CMPcar((V389));
	goto T1297;}
	goto T1293;
T1293:;
	if((CMPcdr((V388)))==Cnil){
	goto T1224;}
	princ_str("\n	goto T",VV[26]);
	(void)((*(LnkLI275))(CMPcar((V388))));
	princ_char(59,VV[26]);
	princ_str("\nT",VV[26]);
	(void)((*(LnkLI275))(CMPcar((V388))));
	princ_str(":;",VV[26]);}
	goto T1224;
T1224:;
	if((CMPcaddr((V348)))==Cnil){
	goto T1334;}
	V347= (VFUN_NARGS=0,(*(LnkLI324))());
	{object V392;
	V392= CMPcadr((V348));
	if(((V392))==Cnil){
	goto T1342;}
	goto T1339;
	goto T1342;
T1342:;
	princ_str("\n	narg= narg - ",VV[26]);
	V393 = CMPmake_fixnum((long)length(CMPcar((V348))));
	(void)((*(LnkLI275))(V393));
	princ_char(59,VV[26]);}
	goto T1339;
T1339:;
	if(((V349))!=Cnil){
	goto T1347;}
	V349= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1347;
T1347:;
	princ_str("\n	V",VV[26]);
	(void)((*(LnkLI275))((V347)));
	princ_str(" = ",VV[26]);
	if(!((STREF(object,CMPcaddr((V348)),20))==(VV[172]))){
	goto T1358;}
	base[7]= Ct;
	goto T1357;
	goto T1358;
T1358:;
	base[7]= (VV[171]->s.s_dbind);
	goto T1357;
T1357:;
	bds_bind(VV[171],base[7]);
	if((CMPcadddr((V348)))==Cnil){
	goto T1362;}
	if(((VV[171]->s.s_dbind))==Cnil){
	goto T1365;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[26]);
	goto T1360;
	goto T1365;
T1365:;
	princ_str("make_list(narg);",VV[26]);
	goto T1360;
	goto T1362;
T1362:;
	if(((VV[171]->s.s_dbind))==Cnil){
	goto T1370;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));",VV[26]);
	goto T1360;
	goto T1370;
T1370:;
	princ_str("list_vector_new(narg,first,ap);",VV[26]);
	goto T1360;
T1360:;
	V394= CMPcaddr((V348));
	V395= list(2,VV[156],(V347));
	V396= (*(LnkLI322))(/* INLINE-ARGS */V394,/* INLINE-ARGS */V395);
	bds_unwind1;
	goto T1334;
T1334:;
	if((CMPcadddr((V348)))==Cnil){
	goto T1374;}
	{object V397;
	V397= CMPcaddr((V348));
	if(((V397))==Cnil){
	goto T1380;}
	goto T1377;
	goto T1380;
T1380:;
	{object V398;
	V398= CMPcadr((V348));
	if(((V398))==Cnil){
	goto T1384;}
	goto T1377;
	goto T1384;
T1384:;
	princ_str("\n	narg= narg - ",VV[26]);
	V399 = CMPmake_fixnum((long)length(CMPcar((V348))));
	(void)((*(LnkLI275))(V399));
	princ_char(59,VV[26]);}}
	goto T1377;
T1377:;
	if(((V349))!=Cnil){
	goto T1389;}
	V349= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1389;
T1389:;
	{object V400;
	object V401= CMPcar(CMPcddddr((V348)));
	if(V401==Cnil){
	V345= Cnil;
	goto T1396;}
	base[7]=V400=MMcons(Cnil,Cnil);
	goto T1397;
T1397:;
	(V400->c.c_car)= CMPcaddr((V401->c.c_car));
	if((V401=MMcdr(V401))==Cnil){
	V345= base[7];
	goto T1396;}
	V400=MMcdr(V400)=MMcons(Cnil,Cnil);
	goto T1397;}
	goto T1396;
T1396:;
	{object V402;
	object V403;
	V403= CMPmake_fixnum((long)length(CMPcar(CMPcddddr((V348)))));
	V402= Cnil;
	{register object V404;
	object V405;
	object V406;
	V404= (V345);
	V405= CMPcar(CMPcddddr((V348)));
	V406= CMPcar((V405));
	goto T1405;
T1405:;
	if(((V404))!=Cnil){
	goto T1406;}
	goto T1400;
	goto T1406;
T1406:;
	if(!((CMPcaar((V404)))==(VV[173]))){
	goto T1411;}
	if((CMPcaddr(CMPcar((V404))))==(Cnil)){
	goto T1410;}
	goto T1411;
T1411:;
	V402= Ct;
	goto T1410;
T1410:;
	if(!((CMPcaar((V404)))==(VV[173]))){
	goto T1417;}
	{object V407;
	V407= CMPcaddr(CMPcar((V404)));
	if(!(((V407))==(Cnil))){
	goto T1423;}
	goto T1421;
	goto T1423;
T1423:;
	if(type_of((V407))==t_cons){
	goto T1425;}
	goto T1417;
	goto T1425;
T1425:;
	{register object x= CMPcar((V407)),V408= VV[174];
	while(V408!=Cnil)
	if(eql(x,V408->c.c_car)){
	goto T1421;
	}else V408=V408->c.c_cdr;
	goto T1417;}}
	goto T1421;
T1421:;
	if((STREF(object,CMPcadddr((V406)),4))==(VV[175])){
	goto T1416;}
	goto T1417;
T1417:;
	V402= Ct;
	(V404)->c.c_car = small_fixnum(0);
	goto T1416;
T1416:;
	V404= CMPcdr((V404));
	V405= CMPcdr((V405));
	V406= CMPcar((V405));
	goto T1405;}
	goto T1400;
T1400:;
	if(!(((long)length((V345)))>(15))){
	goto T1438;}
	V402= Ct;
	goto T1438;
T1438:;
	princ_str("\n	{",VV[26]);
	(void)((*(LnkLI325))());
	bds_bind(VV[26],(VV[32]->s.s_dbind));
	if(((V402))==Cnil){
	goto T1446;}
	princ_char(10,VV[32]);
	princ_str("static object VK",VV[26]);
	(void)((*(LnkLI275))((V340)));
	princ_str("defaults[",VV[26]);
	V411 = CMPmake_fixnum((long)length((V345)));
	(void)((*(LnkLI275))(V411));
	princ_str("]={",VV[26]);
	{object V412;
	register object V413;
	V412= (V345);
	V413= Cnil;
	goto T1458;
T1458:;
	if(((V412))!=Cnil){
	goto T1459;}
	goto T1456;
	goto T1459;
T1459:;
	princ_str("(void *)",VV[26]);
	if(!(eql(CMPcar((V412)),small_fixnum(0)))){
	goto T1467;}
	princ_str("-1",VV[26]);
	goto T1465;
	goto T1467;
T1467:;
	V413= CMPcaddr(CMPcar((V412)));
	if(!(((V413))==(Cnil))){
	goto T1471;}
	princ_str("-2",VV[26]);
	goto T1465;
	goto T1471;
T1471:;
	if(!(type_of((V413))==t_cons)){
	goto T1476;}
	if(!((CMPcar((V413)))==(VV[176]))){
	goto T1476;}
	(void)((*(LnkLI275))(CMPcadr((V413))));
	goto T1465;
	goto T1476;
T1476:;
	if(!(type_of((V413))==t_cons)){
	goto T1482;}
	if(!((CMPcar((V413)))==(VV[177]))){
	goto T1482;}
	V414= (*(LnkLI326))(CMPcaddr((V413)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V414));
	goto T1465;
	goto T1482;
T1482:;
	(void)((*(LnkLI327))());
	goto T1465;
T1465:;
	if((CMPcdr((V412)))==Cnil){
	goto T1487;}
	princ_char(44,VV[26]);
	goto T1487;
T1487:;
	V412= CMPcdr((V412));
	goto T1458;}
	goto T1456;
T1456:;
	princ_str("};",VV[26]);
	goto T1446;
T1446:;
	princ_char(10,VV[32]);
	princ_str("static struct { short n,allow_other_keys;",VV[26]);
	princ_str("object *defaults;",VV[26]);
	princ_str("\n	 KEYTYPE keys[",VV[26]);
	(void)((*(LnkLI275))((number_compare((V403),small_fixnum(1))>=0?((V403)):small_fixnum(1))));
	princ_str("];",VV[26]);
	princ_str("} LI",VV[26]);
	(void)((*(LnkLI275))((V340)));
	princ_str("key=",VV[26]);
	princ_char(123,VV[26]);
	V415 = CMPmake_fixnum((long)length(CMPcar(CMPcddddr((V348)))));
	(void)((*(LnkLI275))(V415));
	princ_char(44,VV[26]);
	if((CMPcadr(CMPcddddr((V348))))==Cnil){
	goto T1514;}
	V416= small_fixnum(1);
	goto T1512;
	goto T1514;
T1514:;
	V416= small_fixnum(0);
	goto T1512;
T1512:;
	(void)((*(LnkLI275))(V416));
	princ_char(44,VV[26]);
	if(((V402))==Cnil){
	goto T1519;}
	princ_str("VK",VV[26]);
	(void)((*(LnkLI275))((V340)));
	princ_str("defaults",VV[26]);
	goto T1517;
	goto T1519;
T1519:;
	princ_str("Cstd_key_defaults",VV[26]);
	goto T1517;
T1517:;
	if((CMPcar(CMPcddddr((V348))))==Cnil){
	goto T1525;}
	princ_str(",{",VV[26]);
	{object V417;
	V417= reverse(CMPcar(CMPcddddr((V348))));
	goto T1533;
T1533:;
	if(((V417))!=Cnil){
	goto T1534;}
	goto T1530;
	goto T1534;
T1534:;
	princ_str("(void *)",VV[26]);
	V418= (*(LnkLI328))(CMPcaar((V417)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V418));
	if((CMPcdr((V417)))==Cnil){
	goto T1542;}
	princ_char(44,VV[26]);
	goto T1542;
T1542:;
	V417= CMPcdr((V417));
	goto T1533;}
	goto T1530;
T1530:;
	princ_char(125,VV[26]);
	goto T1525;
T1525:;
	princ_str("};",VV[26]);
	bds_unwind1;
	if((CMPcaddr((V348)))==Cnil){
	goto T1553;}
	princ_str("\n	parse_key_rest_new(",VV[26]);
	V419= list(2,VV[156],(V347));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V419));
	princ_char(44,VV[26]);
	goto T1551;
	goto T1553;
T1553:;
	princ_str("\n	parse_key_new_new(",VV[26]);
	goto T1551;
T1551:;
	if(!(eql(small_fixnum(0),(VV[142]->s.s_dbind)))){
	goto T1559;}
	(VV[142]->s.s_dbind)= small_fixnum(1);
	goto T1559;
T1559:;
	princ_str("narg,",VV[26]);
	if(((VV[154]->s.s_dbind))==Cnil){
	goto T1567;}
	V420= VV[178];
	goto T1565;
	goto T1567;
T1567:;
	(VV[17]->s.s_dbind)= Ct;
	V420= VV[179];
	goto T1565;
T1565:;
	(void)((*(LnkLI275))(V420));
	princ_char(43,VV[26]);
	(void)((*(LnkLI275))((V346)));
	princ_str(",(struct key *)(void *)&LI",VV[26]);
	(void)((*(LnkLI275))((V340)));
	princ_str("key,first,ap);",VV[26]);}
	goto T1374;
T1374:;
	{object V421;
	register object V422;
	V421= CMPcar(CMPcddddr((V348)));
	V422= CMPcar((V421));
	goto T1580;
T1580:;
	if(!(((V421))==Cnil)){
	goto T1581;}
	goto T1576;
	goto T1581;
T1581:;
	{object V424;
	V424= CMPcar((V345));
	V345= CMPcdr((V345));
	V423= (V424);}
	if(eql(small_fixnum(0),V423)){
	goto T1587;}
	(void)((*(LnkLI329))(CMPcadr((V422))));
	goto T1585;
	goto T1587;
T1587:;
	princ_str("\n	if(",VV[26]);
	(void)((*(LnkLI330))(STREF(object,CMPcadr((V422)),8)));
	princ_str("==0){",VV[26]);
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	bds_bind(VV[133],(VV[133]->s.s_dbind));
	V425= (*(LnkLI323))(CMPcadr((V422)),CMPcaddr((V422)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	if((STREF(object,CMPcadddr((V422)),4))==(VV[175])){
	goto T1599;}
	(void)((*(LnkLI322))(CMPcadddr((V422)),Cnil));
	goto T1599;
T1599:;
	princ_str("\n	}else{",VV[26]);
	(void)((*(LnkLI329))(CMPcadr((V422))));
	if((STREF(object,CMPcadddr((V422)),4))==(VV[175])){
	goto T1605;}
	(void)((*(LnkLI322))(CMPcadddr((V422)),Ct));
	goto T1605;
T1605:;
	princ_char(125,VV[26]);
	goto T1585;
T1585:;
	V421= CMPcdr((V421));
	V422= CMPcar((V421));
	goto T1580;}
	goto T1576;
T1576:;
	if(((VV[147]->s.s_dbind))==Cnil){
	goto T1614;}
	(VV[135]->s.s_dbind)= make_cons(VV[151],(VV[135]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[26]);
	princ_str("\nTTL:;",VV[26]);
	goto T1614;
T1614:;
	base[7]= CMPcaddr(CMPcddr((V341)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk316)();
	vs_top=sup;
	if(((V349))==Cnil){
	goto T1624;}
	V349= Cnil;
	princ_str("\n	va_end(ap);",VV[26]);
	goto T1624;
T1624:;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T1632;}
	if(((VV[139]->s.s_dbind))!=Cnil){
	goto T1632;}
	if(((VV[141]->s.s_dbind))!=Cnil){
	goto T1632;}
	goto T1630;
	goto T1632;
T1632:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T1630;
T1630:;
	princ_str("\n	return Cnil;",VV[26]);
	princ_char(125,VV[26]);
	if((base[1])==Cnil){
	goto T1643;}
	princ_str("\n	}",VV[26]);
	goto T1643;
T1643:;
	(void)((*(LnkLI331))());
	{object V428 =((V339))->s.s_plist;
	 object ind= VV[78];
	while(V428!=Cnil){
	if(V428->c.c_car==ind){
	V427= (V428->c.c_cdr->c.c_car);
	goto T1648;
	}else V428=V428->c.c_cdr->c.c_cdr;}
	V427= Cnil;}
	goto T1648;
T1648:;
	{object V429 = (*(LnkLI317))((V358),V427);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR25(V429)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFUN-NORMAL	*/

static object LI27(V434,V435,V436,V437)

object V434;register object V435;object V436;object V437;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[180],(V434))));
	if(!(type_of((V435))==t_fixnum||
type_of((V435))==t_bignum||
type_of((V435))==t_ratio||
type_of((V435))==t_shortfloat||
type_of((V435))==t_longfloat||
type_of((V435))==t_complex)){
	goto T1652;}
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V435)));
	princ_str("()",VV[26]);
	goto T1650;
	goto T1652;
T1652:;
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V435)));
	princ_str("()",VV[26]);
	goto T1650;
T1650:;
	princ_str("\n{",VV[26]);
	princ_str("register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base=vs_base;",VV[26]);
	(void)((*(LnkLI315))(STREF(object,CMPcadr((V436)),4),(V435),VV[149]));
	princ_str("\n	register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("sup=base+VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_char(59,VV[26]);
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T1677;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_str(");",VV[26]);
	goto T1675;
	goto T1677;
T1677:;
	princ_str("\n	vs_check;",VV[26]);
	goto T1675;
T1675:;
	if(((V437))==Cnil){
	goto T1683;}
	princ_str("\n	bds_check;",VV[26]);
	goto T1683;
T1683:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T1687;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T1687;
T1687:;
	(void)((VFUN_NARGS=3,(*(LnkLI332))(CMPcaddr((V436)),CMPcaddr(CMPcddr((V436))),(V434))));
	princ_str("\n}",VV[26]);
	{object V438;
	V438= make_cons((VV[137]->s.s_dbind),(VV[131]->s.s_dbind));
	(VV[34]->s.s_dbind)= make_cons((V438),(VV[34]->s.s_dbind));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))((VV[137]->s.s_dbind)));
	{object V439 = (*(LnkLI333))();
	VMR26(V439)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-V*-MACROS	*/

static object LI28(V442,V443)

register object V442;object V443;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V444;
	V444= make_cons((V442),(VV[131]->s.s_dbind));
	(VV[34]->s.s_dbind)= make_cons((V444),(VV[34]->s.s_dbind));}
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T1705;}
	if(((VV[139]->s.s_dbind))!=Cnil){
	goto T1705;}
	if(((VV[141]->s.s_dbind))!=Cnil){
	goto T1705;}
	princ_str("\n#define VMB",VV[32]);
	(void)((*(LnkLI278))((V442)));
	goto T1703;
	goto T1705;
T1705:;
	princ_str("\n#define VMB",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_char(32,VV[32]);
	princ_str("register object *",VV[32]);
	(void)((*(LnkLI278))((VV[21]->s.s_dbind)));
	princ_str("base=vs_top;",VV[32]);
	goto T1703;
T1703:;
	(void)((*(LnkLI333))());
	if(((VV[139]->s.s_dbind))==Cnil){
	goto T1722;}
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_char(32,VV[32]);
	princ_str(" register object *",VV[32]);
	(void)((*(LnkLI278))((VV[21]->s.s_dbind)));
	princ_str("sup=vs_top+",VV[32]);
	(void)((*(LnkLI278))((VV[131]->s.s_dbind)));
	princ_str(";vs_top=sup;",VV[32]);
	goto T1720;
	goto T1722;
T1722:;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T1733;}
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V442)));
	goto T1720;
	goto T1733;
T1733:;
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(" vs_top += ",VV[32]);
	(void)((*(LnkLI278))((VV[131]->s.s_dbind)));
	princ_char(59,VV[32]);
	goto T1720;
T1720:;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T1744;}
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V442)));
	goto T1742;
	goto T1744;
T1744:;
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T1749;}
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(" vs_reserve(",VV[32]);
	(void)((*(LnkLI278))((VV[131]->s.s_dbind)));
	princ_str(");",VV[32]);
	goto T1742;
	goto T1749;
T1749:;
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(" vs_check;",VV[32]);
	goto T1742;
T1742:;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T1760;}
	princ_str("\n#define VMR",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str("(VMT",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(") return(VMT",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(");",VV[32]);
	{object V445 = Cnil;
	VMR27(V445)}
	goto T1760;
T1760:;
	princ_str("\n#define VMR",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str("(VMT",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(") vs_top=base ; return(VMT",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(");",VV[32]);
	{object V446 = Cnil;
	VMR27(V446)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-REQUIREDS	*/

static object LI29(V449,V450)

object V449;object V450;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{register object V451;
	V451= (V449);
	goto T1778;
T1778:;
	if(!(((V451))==Cnil)){
	goto T1779;}
	goto T1776;
	goto T1779;
T1779:;
	{register object V452;
	(VV[89]->s.s_dbind)= number_plus((VV[89]->s.s_dbind),small_fixnum(1));
	V452= (VV[89]->s.s_dbind);
	V453= CMPcar((V451));
	V454= Ct;
	STSET(object,/* INLINE-ARGS */V453,16, (V452));
	(void)((V452));
	princ_char(86,VV[26]);
	(void)((*(LnkLI275))((V452)));}
	if((CMPcdr((V451)))==Cnil){
	goto T1789;}
	princ_char(44,VV[26]);
	goto T1789;
T1789:;
	V451= CMPcdr((V451));
	goto T1778;}
	goto T1776;
T1776:;
	princ_str(")\n",VV[26]);
	if(((V449))==Cnil){
	goto T1799;}
	princ_char(10,VV[26]);
	{register object V455;
	register object V456;
	register object V457;
	V455= (V449);
	V456= (V450);
	V457= Cnil;
	goto T1803;
T1803:;
	if(!(((V455))==Cnil)){
	goto T1804;}
	princ_char(59,VV[26]);
	{object V458 = Cnil;
	VMR28(V458)}
	goto T1804;
T1804:;
	if(((V457))==Cnil){
	goto T1809;}
	princ_char(59,VV[26]);
	goto T1809;
T1809:;
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	V459= (*(LnkLI334))(CMPcar((V455)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V459));
	V460= (*(LnkLI281))(CMPcar((V456)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V460));
	V457= CMPcar((V456));
	princ_char(86,VV[26]);
	(void)((*(LnkLI275))(STREF(object,CMPcar((V455)),16)));
	V455= CMPcdr((V455));
	V456= CMPcdr((V456));
	goto T1803;}
	goto T1799;
T1799:;
	{object V461 = Cnil;
	VMR28(V461)}
	return Cnil;
}
/*	local entry for function ADD-DEBUG-INFO	*/

static object LI30(V464,V465)

object V464;object V465;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V466;
	V466= Cnil;
	{object V467;
	V467= (number_compare((VV[115]->s.s_dbind),small_fixnum(2))>=0?Ct:Cnil);
	if(((V467))==Cnil){
	goto T1829;}
	{object V468 = (V467);
	VMR29(V468)}
	goto T1829;
T1829:;
	{object V469 =((V464))->s.s_plist;
	 object ind= VV[116];
	while(V469!=Cnil){
	if(V469->c.c_car==ind){
	if(((V469->c.c_cdr->c.c_car))!=Cnil){
	goto T1832;}
	goto T1833;
	}else V469=V469->c.c_cdr->c.c_cdr;}}
	goto T1833;
T1833:;
	{object V470 = (VFUN_NARGS=2,(*(LnkLI335))(VV[181],(V464)));
	VMR29(V470)}
	goto T1832;
T1832:;
	(void)(remprop((V464),VV[116]));
	{register object V471;
	V471= small_fixnum(0);
	{register object V472;
	register object V473;
	V472= STREF(object,CMPcadr((V465)),4);
	V473= CMPcar((V472));
	goto T1839;
T1839:;
	if(!(((V472))==Cnil)){
	goto T1840;}
	goto T1835;
	goto T1840;
T1840:;
	if(!(type_of(STREF(object,(V473),8))==t_cons)){
	goto T1844;}
	if(!(type_of(CMPcdr(STREF(object,(V473),8)))==t_fixnum)){
	goto T1844;}
	{object V474= CMPcdr(STREF(object,(V473),8));
	V471= (number_compare((V471),V474)>=0?((V471)):V474);}
	goto T1844;
T1844:;
	V472= CMPcdr((V472));
	V473= CMPcar((V472));
	goto T1839;}
	goto T1835;
T1835:;
	base[0]= one_plus((V471));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V466= vs_base[0];
	{register object V475;
	register object V476;
	V475= STREF(object,CMPcadr((V465)),4);
	V476= CMPcar((V475));
	goto T1862;
T1862:;
	if(!(((V475))==Cnil)){
	goto T1863;}
	goto T1858;
	goto T1863;
T1863:;
	if(!(type_of(STREF(object,(V476),8))==t_cons)){
	goto T1867;}
	if(!(type_of(CMPcdr(STREF(object,(V476),8)))==t_fixnum)){
	goto T1867;}
	{object V477;
	register object V479;
	V477= CMPcdr(STREF(object,(V476),8));
	V479= STREF(object,(V476),0);
	(nthcdr(fix((V477)),V466))->c.c_car = (V479);
	(void)(nthcdr(fix((V477)),V466));}
	goto T1867;
T1867:;
	V475= CMPcdr((V475));
	V476= CMPcar((V475));
	goto T1862;}
	goto T1858;
T1858:;
	(void)(sputprop((V464),VV[117],(V466)));
	{object V480;
	{object V481 =((V464))->s.s_plist;
	 object ind= VV[117];
	while(V481!=Cnil){
	if(V481->c.c_car==ind){
	V480= (V481->c.c_cdr->c.c_car);
	goto T1881;
	}else V481=V481->c.c_cdr->c.c_cdr;}
	V480= Cnil;}
	goto T1881;
T1881:;
	if(((V480))==Cnil){
	goto T1883;}
	if((CMPcdr((V480)))!=Cnil){
	goto T1882;}
	if((CMPcar((V480)))==Cnil){
	goto T1883;}
	goto T1882;
T1882:;
	V482= list(2,VV[92],(V464));
	V483= list(3,VV[117],/* INLINE-ARGS */V482,list(2,VV[92],(V480)));
	{object V484 = (VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V483));
	VMR29(V484)}
	goto T1883;
T1883:;
	{object V485 = Cnil;
	VMR29(V485)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ANALYZE-REGS	*/

static object LI31(V488,V489)

object V488;object V489;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V490;
	V490= number_minus((VV[182]->s.s_dbind),(V489));
	if(!(number_compare(small_fixnum(0),(VV[183]->s.s_dbind))==0)){
	goto T1891;}
	V491= (VFUN_NARGS=1,(*(LnkLI337))((V488)));
	{long V492 = (long)(*(LnkLI336))(/* INLINE-ARGS */V491,(V490));
	VMR30((object)V492)}
	goto T1891;
T1891:;
	{register object V493;
	register object V494;
	V493= Cnil;
	V494= Cnil;
	{register object V495;
	register object V496;
	V495= (V488);
	V496= CMPcar((V495));
	goto T1897;
T1897:;
	if(!(((V495))==Cnil)){
	goto T1898;}
	goto T1893;
	goto T1898;
T1898:;
	{register object x= STREF(object,(V496),20),V497= VV[184];
	while(V497!=Cnil)
	if(x==(V497->c.c_car)){
	goto T1905;
	}else V497=V497->c.c_cdr;
	goto T1904;}
	goto T1905;
T1905:;{object V498;
	{register object x= (V496),V499= (V494);
	while(V499!=Cnil)
	if(eql(x,V499->c.c_car)){
	V498= V499;
	goto T1907;
	}else V499=V499->c.c_cdr;
	V498= Cnil;}
	goto T1907;
T1907:;
	if(V498==Cnil)goto T1906;
	goto T1902;
	goto T1906;
T1906:;}
	{register object V500;
	V500= (V496);
	V494= make_cons((V500),(V494));
	goto T1902;}
	goto T1904;
T1904:;{object V501;
	{register object x= (V496),V502= (V493);
	while(V502!=Cnil)
	if(x==(V502->c.c_car)){
	V501= V502;
	goto T1911;
	}else V502=V502->c.c_cdr;
	V501= Cnil;}
	goto T1911;
T1911:;
	if(V501==Cnil)goto T1910;
	goto T1902;
	goto T1910;
T1910:;}
	{register object V503;
	V503= (V496);
	V494= make_cons((V503),(V494));}
	goto T1902;
T1902:;
	V495= CMPcdr((V495));
	V496= CMPcar((V495));
	goto T1897;}
	goto T1893;
T1893:;
	(void)((*(LnkLI336))((V493),(V490)));
	{long V504 = (long)(*(LnkLI336))((V494),(VV[183]->s.s_dbind));
	VMR30((object)V504)}}}
	base[0]=base[0];
}
/*	local entry for function ANALYZE-REGS1	*/

static object LI32(V507,V508)

object V507;object V508;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{register long V509;
	register long V510;
	long V511;
	long V512;
	register long V513;
	V509= 0;
	V510= 3;
	V511= 100000;
	V512= fix((V508));
	V513= 0;
	V507= (VFUN_NARGS=1,(*(LnkLI337))((V507)));
	goto T1928;
T1928:;
	{register object V514;
	object V515;
	V514= (V507);
	V515= CMPcar((V514));
	goto T1934;
T1934:;
	if(!(((V514))==Cnil)){
	goto T1935;}
	goto T1930;
	goto T1935;
T1935:;
	V509= fix(STREF(object,(V515),24));
	if(!((V509)>=(V510))){
	goto T1941;}
	V513= (long)(V513)+(1);
	if(!((V509)<(V511))){
	goto T1946;}
	V511= V509;
	goto T1946;
T1946:;
	if(!((V513)>(V512))){
	goto T1941;}
	goto T1929;
	goto T1941;
T1941:;
	V514= CMPcdr((V514));
	V515= CMPcar((V514));
	goto T1934;}
	goto T1930;
T1930:;
	if(!((V513)<(V512))){
	goto T1957;}
	V510= (long)(V510)-(1);
	goto T1957;
T1957:;
	{register object V516;
	register object V517;
	V516= (V507);
	V517= CMPcar((V516));
	goto T1965;
T1965:;
	if(!(((V516))==Cnil)){
	goto T1966;}
	goto T1961;
	goto T1966;
T1966:;
	if(!((fix(STREF(object,(V517),24)))<(V510))){
	goto T1970;}
	V518= Ct;
	STSET(object,(V517),24, small_fixnum(0));
	(void)(small_fixnum(0));
	goto T1970;
T1970:;
	V516= CMPcdr((V516));
	V517= CMPcar((V516));
	goto T1965;}
	goto T1961;
T1961:;
	{long V519 = V510;
	VMR31((object)V519)}
	goto T1929;
T1929:;
	V513= 0;
	V510= (long)(V511)+(1);
	V511= 1000000;
	goto T1928;}
	base[0]=base[0];
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI33(V524,V525,V526,V527)

object V524;object V525;object V526;object V527;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{object V528 =((V524))->s.s_plist;
	 object ind= VV[103];
	while(V528!=Cnil){
	if(V528->c.c_car==ind){
	if(((V528->c.c_cdr->c.c_car))==Cnil){
	goto T1985;}
	goto T1987;
	}else V528=V528->c.c_cdr->c.c_cdr;}
	goto T1985;}
	goto T1987;
T1987:;
	{object V529 = Cnil;
	VMR32(V529)}
	goto T1985;
T1985:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[187],(V524))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V525)));
	princ_str("()",VV[26]);
	princ_str("\n{	register object *base=vs_base;",VV[26]);
	if(((VV[164]->s.s_dbind))!=Cnil){
	goto T1996;}
	if(((VV[165]->s.s_dbind))==Cnil){
	goto T1995;}
	goto T1996;
T1996:;
	princ_str("\n	check_arg(",VV[26]);
	V530 = CMPmake_fixnum((long)length((V526)));
	(void)((*(LnkLI275))(V530));
	princ_str(");",VV[26]);
	goto T1995;
T1995:;
	princ_str("\n	base[0]=",VV[26]);
	{object V532= (V527);
	if((V532!= VV[90]))goto T2007;
	if(!(number_compare(small_fixnum(0),(VV[115]->s.s_dbind))==0)){
	goto T2009;}
	V531= VV[188];
	goto T2006;
	goto T2009;
T2009:;
	V531= VV[189];
	goto T2006;
	goto T2007;
T2007:;
	if((V532!= VV[143]))goto T2011;
	V531= VV[190];
	goto T2006;
	goto T2011;
T2011:;
	if((V532!= VV[144]))goto T2012;
	V531= VV[191];
	goto T2006;
	goto T2012;
T2012:;
	if((V532!= VV[145]))goto T2013;
	V531= VV[192];
	goto T2006;
	goto T2013;
T2013:;
	V531= VV[193];}
	goto T2006;
T2006:;
	(void)((*(LnkLI275))(V531));
	princ_str("(LI",VV[26]);
	(void)((*(LnkLI275))((V525)));
	princ_char(40,VV[26]);
	{register object V533;
	register long V534;
	V534= 0;
	V533= (V526);
	goto T2020;
T2020:;
	if(!(((V533))==Cnil)){
	goto T2021;}
	goto T2017;
	goto T2021;
T2021:;
	{object V536= CMPcar((V533));
	if((V536!= VV[90]))goto T2028;
	V535= VV[194];
	goto T2027;
	goto T2028;
T2028:;
	if((V536!= VV[143]))goto T2029;
	V535= VV[195];
	goto T2027;
	goto T2029;
T2029:;
	if((V536!= VV[144]))goto T2030;
	V535= VV[196];
	goto T2027;
	goto T2030;
T2030:;
	if((V536!= VV[145]))goto T2031;
	V535= VV[197];
	goto T2027;
	goto T2031;
T2031:;
	V535= VV[198];}
	goto T2027;
T2027:;
	(void)((*(LnkLI275))(V535));
	princ_str("(base[",VV[26]);
	V537 = CMPmake_fixnum(V534);
	(void)((*(LnkLI275))(V537));
	princ_str("])",VV[26]);
	if((CMPcdr((V533)))==Cnil){
	goto T2035;}
	princ_char(44,VV[26]);
	goto T2035;
T2035:;
	V533= CMPcdr((V533));
	V534= (long)(V534)+1;
	goto T2020;}
	goto T2017;
T2017:;
	princ_str("));",VV[26]);
	princ_str("\n	vs_top=(vs_base=base)+1;",VV[26]);
	princ_str("\n}",VV[26]);
	{object V538 = Cnil;
	VMR32(V538)}
	return Cnil;
}
/*	local entry for function REP-TYPE	*/

static object LI34(V540)

object V540;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V541= (V540);
	if((V541!= VV[90]))goto T2048;
	{object V542 = VV[199];
	VMR33(V542)}
	goto T2048;
T2048:;
	if((V541!= VV[262]))goto T2049;
	{object V543 = VV[200];
	VMR33(V543)}
	goto T2049;
T2049:;
	if((V541!= VV[143]))goto T2050;
	{object V544 = VV[201];
	VMR33(V544)}
	goto T2050;
T2050:;
	if((V541!= VV[145]))goto T2051;
	{object V545 = VV[202];
	VMR33(V545)}
	goto T2051;
T2051:;
	if((V541!= VV[144]))goto T2052;
	{object V546 = VV[203];
	VMR33(V546)}
	goto T2052;
T2052:;
	{object V547 = VV[204];
	VMR33(V547)}}
	return Cnil;
}
/*	local entry for function T1DEFMACRO	*/

static object LI35(V549)

register object V549;
{	 VMB34 VMS34 VMV34
	bds_check;
	goto TTL;
TTL:;
	if(((V549))==Cnil){
	goto T2054;}
	if(!((CMPcdr((V549)))==Cnil)){
	goto T2053;}
	goto T2054;
T2054:;
	V550 = CMPmake_fixnum((long)length((V549)));
	(void)((*(LnkLI284))(VV[205],small_fixnum(2),V550));
	goto T2053;
T2053:;
	if(type_of(CMPcar((V549)))==t_symbol){
	goto T2058;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[206],CMPcar((V549)))));
	goto T2058;
T2058:;
	V551= make_cons(VV[205],(V549));
	(void)((*(LnkLI269))(Ct,/* INLINE-ARGS */V551));
	(VV[6]->s.s_dbind)= Ct;
	{register object V552;
	object V553;
	(VV[62]->s.s_dbind)= number_plus((VV[62]->s.s_dbind),small_fixnum(1));
	V553= (VV[62]->s.s_dbind);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[59],Cnil);
	bds_bind(VV[53],Cnil);
	bds_bind(VV[60],Cnil);
	V552= Cnil;
	V552= (*(LnkLI338))(CMPcar((V549)),CMPcadr((V549)),CMPcddr((V549)));
	(void)((*(LnkLI294))());
	{object V554;
	V554= list(7,VV[205],CMPcar((V549)),(V553),CMPcddr((V552)),CMPcar((V552)),CMPcadr((V552)),(VV[60]->s.s_dbind));
	(VV[25]->s.s_dbind)= make_cons((V554),(VV[25]->s.s_dbind));
	{object V555 = (VV[25]->s.s_dbind);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR34(V555)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFMACRO	*/

static object LI36(V562,V563,V564,V565,V566,V567)

object V562;object V563;object V564;object V565;object V566;object V567;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	if(((V565))==Cnil){
	goto T2071;}
	V568= list(4,VV[104],list(2,VV[92],(V562)),(V565),VV[207]);
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V568)));
	goto T2071;
T2071:;
	if(((V566))==Cnil){
	goto T2074;}
	V569= list(2,VV[92],(V562));
	V570= list(4,VV[104],/* INLINE-ARGS */V569,list(2,VV[92],(V566)),VV[208]);
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V570)));
	goto T2074;
T2074:;
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V563)));
	princ_str("();",VV[32]);
	V571= list(2,VV[92],(V562));
	V572= list(3,VV[209],/* INLINE-ARGS */V571,(*(LnkLI302))(VV[210],(V563)));
	{object V573 = (VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V572));
	VMR35(V573)}
	return Cnil;
}
/*	local entry for function T3DEFMACRO	*/

static object LI37(V580,V581,V582,V583,V584,V585)

object V580;object V581;register object V582;object V583;object V584;object V585;
{	 VMB36 VMS36 VMV36
	bds_check;
	goto TTL;
TTL:;
	{object V586 =((V580))->s.s_plist;
	 object ind= VV[211];
	while(V586!=Cnil){
	if(V586->c.c_car==ind){
	if(((V586->c.c_cdr->c.c_car))==Cnil){
	goto T2083;}
	goto T2084;
	}else V586=V586->c.c_cdr->c.c_cdr;}
	goto T2083;}
	goto T2084;
T2084:;
	bds_bind(VV[21],VV[212]);
	goto T2081;
	goto T2083;
T2083:;
	bds_bind(VV[21],VV[213]);
	goto T2081;
T2081:;
	bds_bind(VV[129],VV[128]);
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],small_fixnum(0));
	bds_bind(VV[133],small_fixnum(0));
	bds_bind(VV[134],Cnil);
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	(VV[138]->s.s_dbind)= number_plus((VV[138]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[137],(VV[138]->s.s_dbind));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[214],(V580))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V581)));
	princ_str("()",VV[26]);
	princ_str("\n{register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base=vs_base;",VV[26]);
	(void)((*(LnkLI315))(STREF(object,CMPcar(CMPcddddr((V582))),4),(V581),VV[149]));
	princ_str("\n	register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("sup=base+VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_char(59,VV[26]);
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T2109;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_str(");",VV[26]);
	goto T2107;
	goto T2109;
T2109:;
	princ_str("\n	vs_check;",VV[26]);
	goto T2107;
T2107:;
	if(((V585))==Cnil){
	goto T2115;}
	princ_str("\n	bds_check;",VV[26]);
	goto T2115;
T2115:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T2119;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2119;
T2119:;
	base[15]= CMPcar((V582));
	base[16]= CMPcadr((V582));
	base[17]= CMPcaddr((V582));
	base[18]= CMPcadddr((V582));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk339)();
	vs_top=sup;
	princ_str("\n}",VV[26]);
	{object V587;
	V587= make_cons((VV[137]->s.s_dbind),(VV[131]->s.s_dbind));
	(VV[34]->s.s_dbind)= make_cons((V587),(VV[34]->s.s_dbind));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))((VV[137]->s.s_dbind)));
	{object V588 = (*(LnkLI333))();
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
	VMR36(V588)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1ORDINARY	*/

static object LI38(V590)

register object V590;
{	 VMB37 VMS37 VMV37
	bds_check;
	goto TTL;
TTL:;
	{register object V591;
	V591= Cnil;
	(VV[6]->s.s_dbind)= Ct;
	if(((VV[49]->s.s_dbind))==Cnil){
	goto T2140;}
	(void)((*(LnkLI269))(Cnil,(V590)));
	{object V592;
	base[0]= VV[215];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V592= vs_base[0];
	V593= listA(3,VV[65],(V592),VV[216]);
	(void)((*(LnkLI290))(/* INLINE-ARGS */V593));
	base[0]= list(5,VV[52],(V592),Cnil,(V590),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	{object V594;
	V594= list(2,VV[217],make_cons((V592),Cnil));
	(VV[25]->s.s_dbind)= make_cons((V594),(VV[25]->s.s_dbind));
	{object V595 = (VV[25]->s.s_dbind);
	VMR37(V595)}}}
	goto T2140;
T2140:;
	{object V596;
	if(type_of((V590))==t_cons){
	goto T2151;}
	V596= Cnil;
	goto T2150;
	goto T2151;
T2151:;
	if(type_of(CMPcar((V590)))==t_symbol){
	goto T2153;}
	V596= Cnil;
	goto T2150;
	goto T2153;
T2153:;
	if(!((CMPcar((V590)))==(VV[218]))){
	goto T2157;}
	goto T2155;
	goto T2157;
T2157:;
	base[0]= CMPcar((V590));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V597= vs_base[0];
	if((V597)==Cnil){
	goto T2155;}
	V596= Cnil;
	goto T2150;
	goto T2155;
T2155:;
	{register object V598;
	register long V599;
	V598= CMPcdr((V590));
	V599= 1;
	goto T2164;
T2164:;
	if((V599)>=(1000)){
	goto T2166;}
	if(type_of((V598))==t_cons){
	goto T2165;}
	goto T2166;
T2166:;
	V596= Cnil;
	goto T2150;
	goto T2165;
T2165:;
	if(!(type_of(CMPcar((V598)))==t_cons)){
	goto T2171;}
	if(!((CMPcaar((V598)))==(VV[65]))){
	goto T2171;}
	V591= CMPcadr(CMPcar((V598)));
	if(!(type_of((V591))==t_cons)){
	goto T2171;}
	if(!((CMPcar((V591)))==(VV[219]))){
	goto T2171;}
	{register object V600;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V600= vs_base[0];
	base[0]= listA(3,VV[52],(V600),CMPcdr((V591)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	base[1]= (V590);
	base[2]= small_fixnum(0);
	base[3]= CMPmake_fixnum(V599);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	base[0]= vs_base[0];
	V601= list(2,VV[220],list(2,VV[92],(V600)));
	base[1]= make_cons(/* INLINE-ARGS */V601,Cnil);
	V602 = CMPmake_fixnum(V599);
	V603= number_plus(small_fixnum(1),V602);
	base[2]= nthcdr(fix(/* INLINE-ARGS */V603),(V590));
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V590= vs_base[0];
	goto TTL;}
	goto T2171;
T2171:;
	if(type_of((V598))==t_cons){
	goto T2194;}
	V598= Cnil;
	goto T2193;
	goto T2194;
T2194:;
	V598= CMPcdr((V598));
	goto T2193;
T2193:;
	V599= (long)(1)+(V599);
	goto T2164;}
	goto T2150;
T2150:;
	if(((V596))==Cnil){
	goto T2199;}
	{object V604 = (V596);
	VMR37(V604)}
	goto T2199;
T2199:;
	(void)((*(LnkLI269))(Cnil,(V590)));
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[59],Cnil);
	bds_bind(VV[53],Cnil);
	{object V605;
	V605= list(2,VV[217],(V590));
	(VV[25]->s.s_dbind)= make_cons((V605),(VV[25]->s.s_dbind));}
	{object V606 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR37(V606)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2ORDINARY	*/

static object LI39(V608)

object V608;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{object V609;
	V609= (type_of((V608))!=t_cons?Ct:Cnil);
	if(((V609))==Cnil){
	goto T2207;}
	{object V610 = (V609);
	VMR38(V610)}
	goto T2207;
T2207:;
	{object V611;
	base[0]= (V608);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V611= vs_base[0];
	if(((V611))==Cnil){
	goto T2212;}
	{object V612 = (V611);
	VMR38(V612)}
	goto T2212;
T2212:;
	{object V613 = (VFUN_NARGS=1,(*(LnkLI301))((V608)));
	VMR38(V613)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-LOAD-TIME-SHARP-COMMA	*/

static object LI40()

{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{register object V614;
	register object V615;
	V614= reverse((VV[53]->s.s_dbind));
	V615= CMPcar((V614));
	goto T2217;
T2217:;
	if(!(((V614))==Cnil)){
	goto T2218;}
	{object V616 = Cnil;
	VMR39(V616)}
	goto T2218;
T2218:;
	if(!(type_of((V615))!=t_cons)){
	goto T2222;}
	(void)((*(LnkLI340))());
	goto T2222;
T2222:;
	{register object V617;
	V617= make_cons(VV[221],(V615));
	(VV[25]->s.s_dbind)= make_cons((V617),(VV[25]->s.s_dbind));}
	V614= CMPcdr((V614));
	V615= CMPcar((V614));
	goto T2217;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2SHARP-COMMA	*/

static object LI41(V620,V621)

object V620;object V621;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	V622= list(3,VV[222],(V620),(V621));
	{object V623 = (VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V622));
	VMR40(V623)}
	return Cnil;
}
/*	local entry for function T2DECLARE	*/

static object LI42(V625)

object V625;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V626 = (*(LnkLI340))();
	VMR41(V626)}
	return Cnil;
}
/*	local entry for function T1DEFINE-STRUCTURE	*/

static object LI43(V628)

object V628;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	V629= (*(LnkLI269))(Cnil,Cnil);
	V630= make_cons(((/* INLINE-ARGS */V629)==Cnil?Ct:Cnil),Cnil);
	V631= append((V628),/* INLINE-ARGS */V630);
	V632= make_cons(VV[223],/* INLINE-ARGS */V631);
	(void)((*(LnkLI269))(Ct,/* INLINE-ARGS */V632));
	V633= make_cons(VV[223],(V628));
	{object V634 = (*(LnkLI274))(/* INLINE-ARGS */V633);
	VMR42(V634)}
	return Cnil;
}
/*	local entry for function SET-DBIND	*/

static object LI44(V637,V638)

object V637;object V638;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	princ_str("\n	VV[",VV[26]);
	(void)((*(LnkLI275))((V638)));
	princ_str("]->s.s_dbind = ",VV[26]);
	(void)((*(LnkLI275))((V637)));
	princ_char(59,VV[26]);
	{object V639 = Cnil;
	VMR43(V639)}
	return Cnil;
}
/*	local entry for function T1CLINES	*/

static object LI45(V641)

object V641;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{register object V642;
	register object V643;
	V642= (V641);
	V643= CMPcar((V642));
	goto T2244;
T2244:;
	if(!(((V642))==Cnil)){
	goto T2245;}
	goto T2240;
	goto T2245;
T2245:;
	if(type_of((V643))==t_string){
	goto T2249;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[224],(V643))));
	goto T2249;
T2249:;
	V642= CMPcdr((V642));
	V643= CMPcar((V642));
	goto T2244;}
	goto T2240;
T2240:;
	{object V644;
	V644= list(2,VV[225],(V641));
	(VV[25]->s.s_dbind)= make_cons((V644),(VV[25]->s.s_dbind));
	{object V645 = (VV[25]->s.s_dbind);
	VMR44(V645)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3CLINES	*/

static object LI46(V647)

object V647;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{register object V648;
	register object V649;
	V648= (V647);
	V649= CMPcar((V648));
	goto T2262;
T2262:;
	if(!(((V648))==Cnil)){
	goto T2263;}
	{object V650 = Cnil;
	VMR45(V650)}
	goto T2263;
T2263:;
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V649)));
	V648= CMPcdr((V648));
	V649= CMPcar((V648));
	goto T2262;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFCFUN	*/

static object LI47(V652)

object V652;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{register object V653;
	V653= Cnil;
	if(((V652))==Cnil){
	goto T2277;}
	if(!((CMPcdr((V652)))==Cnil)){
	goto T2276;}
	goto T2277;
T2277:;
	V654 = CMPmake_fixnum((long)length((V652)));
	(void)((*(LnkLI284))(VV[226],small_fixnum(2),V654));
	goto T2276;
T2276:;
	if(type_of(CMPcar((V652)))==t_string){
	goto T2281;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[227],CMPcar((V652)))));
	goto T2281;
T2281:;
	{object V655= CMPcadr((V652));
	if(type_of(V655)==t_fixnum||
type_of(V655)==t_bignum||
type_of(V655)==t_ratio||
type_of(V655)==t_shortfloat||
type_of(V655)==t_longfloat||
type_of(V655)==t_complex){
	goto T2284;}}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[228],CMPcadr((V652)))));
	goto T2284;
T2284:;
	{register object V656;
	register object V657;
	V656= CMPcddr((V652));
	V657= CMPcar((V656));
	goto T2291;
T2291:;
	if(!(((V656))==Cnil)){
	goto T2292;}
	goto T2287;
	goto T2292;
T2292:;
	if(!(type_of((V657))==t_string)){
	goto T2298;}
	{register object V658;
	V658= (V657);
	V653= make_cons((V658),(V653));
	goto T2296;}
	goto T2298;
T2298:;
	if(!(type_of((V657))==t_cons)){
	goto T2303;}
	if(!(type_of(CMPcar((V657)))==t_symbol)){
	goto T2306;}
	base[2]= CMPcar((V657));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2308;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[229],CMPcar((V657)))));
	goto T2308;
T2308:;
	{register object V659;
	V660= CMPcar((V657));
	V661= (*(LnkLI341))(CMPcdr((V657)));
	V662= make_cons(/* INLINE-ARGS */V660,/* INLINE-ARGS */V661);
	V659= make_cons(/* INLINE-ARGS */V662,Cnil);
	V653= make_cons((V659),(V653));
	goto T2296;}
	goto T2306;
T2306:;
	if(!(type_of(CMPcar((V657)))==t_cons)){
	goto T2315;}
	if(!(type_of(CMPcaar((V657)))==t_symbol)){
	goto T2315;}
	if(!((CMPcaar((V657)))==(VV[92]))){
	goto T2322;}
	if(!((CMPcdar((V657)))==Cnil)){
	goto T2324;}
	goto T2315;
	goto T2324;
T2324:;
	if(!((((CMPcddar((V657)))==Cnil?Ct:Cnil))==Cnil)){
	goto T2326;}
	goto T2315;
	goto T2326;
T2326:;
	if(!((CMPcdr((V657)))==Cnil)){
	goto T2328;}
	goto T2315;
	goto T2328;
T2328:;
	if((((CMPcddr((V657)))==Cnil?Ct:Cnil))==Cnil){
	goto T2315;}
	goto T2320;
	goto T2322;
T2322:;
	base[2]= CMPcaar((V657));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2315;}
	goto T2320;
T2320:;
	{register object V663;
	V664= CMPcaar((V657));
	if(!((CMPcaar((V657)))==(VV[92]))){
	goto T2334;}
	V666= (*(LnkLI326))(CMPcadar((V657)));
	V665= make_cons(/* INLINE-ARGS */V666,Cnil);
	goto T2332;
	goto T2334;
T2334:;
	V665= (*(LnkLI341))(CMPcdar((V657)));
	goto T2332;
T2332:;
	V667= make_cons(/* INLINE-ARGS */V664,V665);
	V668= (*(LnkLI341))(CMPcdr((V657)));
	V663= make_cons(/* INLINE-ARGS */V667,/* INLINE-ARGS */V668);
	V653= make_cons((V663),(V653));
	goto T2296;}
	goto T2315;
T2315:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[230],(V657))));
	goto T2296;
	goto T2303;
T2303:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[231],(V657))));
	goto T2296;
T2296:;
	V656= CMPcdr((V656));
	V657= CMPcar((V656));
	goto T2291;}
	goto T2287;
T2287:;
	{object V669;
	V670= CMPcar((V652));
	V671= CMPcadr((V652));
	V669= list(4,VV[226],/* INLINE-ARGS */V670,/* INLINE-ARGS */V671,reverse((V653)));
	(VV[25]->s.s_dbind)= make_cons((V669),(VV[25]->s.s_dbind));
	{object V672 = (VV[25]->s.s_dbind);
	VMR46(V672)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFCFUN	*/

static object LI48(V676,V677,V678)

object V676;object V677;object V678;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V679;
	V679= Cnil;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[232],VV[226])));
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V676)));
	princ_str("\n{",VV[26]);
	princ_str("\nobject *vs=vs_top;",VV[26]);
	princ_str("\nobject *old_top=vs_top+",VV[26]);
	(void)((*(LnkLI275))((V677)));
	princ_char(59,VV[26]);
	if(!(number_compare((V677),small_fixnum(0))>0)){
	goto T2357;}
	princ_str("\n	vs_top=old_top;",VV[26]);
	goto T2357;
T2357:;
	princ_str("\n{",VV[26]);
	{object V680;
	register object V681;
	V680= (V678);
	V681= CMPcar((V680));
	goto T2367;
T2367:;
	if(!(((V680))==Cnil)){
	goto T2368;}
	goto T2363;
	goto T2368;
T2368:;
	if(!(type_of((V681))==t_string)){
	goto T2374;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V681)));
	goto T2372;
	goto T2374;
T2374:;
	if(!((CMPcaar((V681)))==(VV[92]))){
	goto T2379;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(CMPcadadr((V681))));
	{object V682= CMPcaadr((V681));
	if((V682!= VV[75]))goto T2384;
	princ_str("=VV[",VV[26]);
	(void)((*(LnkLI275))(CMPcadar((V681))));
	princ_str("];",VV[26]);
	goto T2372;
	goto T2384;
T2384:;
	princ_str("=object_to_",VV[26]);
	base[1]= symbol_name(CMPcaadr((V681)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V683= vs_base[0];
	(void)((*(LnkLI275))(V683));
	princ_str("(VV[",VV[26]);
	(void)((*(LnkLI275))(CMPcadar((V681))));
	princ_str("]);",VV[26]);
	goto T2372;}
	goto T2379;
T2379:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[26]);
	{register object V684;
	register object V685;
	V684= CMPcdar((V681));
	V685= CMPcar((V684));
	goto T2401;
T2401:;
	if(!(((V684))==Cnil)){
	goto T2402;}
	goto T2397;
	goto T2402;
T2402:;
	princ_str("\nvs_push(",VV[26]);
	{object V686= CMPcar((V685));
	if((V686!= VV[75]))goto T2409;
	(void)((*(LnkLI275))(CMPcadr((V685))));
	goto T2408;
	goto T2409;
T2409:;
	if((V686!= VV[342]))goto T2411;
	princ_str("code_char((long)",VV[26]);
	(void)((*(LnkLI275))(CMPcadr((V685))));
	princ_char(41,VV[26]);
	goto T2408;
	goto T2411;
T2411:;
	if((V686!= VV[343]))goto T2415;
	if(!(number_compare(small_fixnum(0),(VV[115]->s.s_dbind))==0)){
	goto T2416;}
	princ_str("CMP",VV[26]);
	goto T2416;
T2416:;
	princ_str("make_fixnum((long)",VV[26]);
	(void)((*(LnkLI275))(CMPcadr((V685))));
	princ_char(41,VV[26]);
	goto T2408;
	goto T2415;
T2415:;
	if((V686!= VV[344]))goto T2423;
	princ_str("make_shortfloat((double)",VV[26]);
	(void)((*(LnkLI275))(CMPcadr((V685))));
	princ_char(41,VV[26]);
	goto T2408;
	goto T2423;
T2423:;
	if((V686!= VV[345]))goto T2427;
	princ_str("make_longfloat((double)",VV[26]);
	(void)((*(LnkLI275))(CMPcadr((V685))));
	princ_char(41,VV[26]);
	goto T2408;
	goto T2427;
T2427:;}
	goto T2408;
T2408:;
	princ_str(");",VV[26]);
	V684= CMPcdr((V684));
	V685= CMPcar((V684));
	goto T2401;}
	goto T2397;
T2397:;
	{register object x= CMPcaar((V681)),V687= (VV[80]->s.s_dbind);
	while(V687!=Cnil)
	if(eql(x,V687->c.c_car->c.c_car) &&V687->c.c_car != Cnil){
	V679= (V687->c.c_car);
	goto T2442;
	}else V687=V687->c.c_cdr;
	V679= Cnil;}
	goto T2442;
T2442:;
	if(((V679))==Cnil){
	goto T2440;}
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T2444;}
	princ_str("\nihs_push(VV[",VV[26]);
	V688= (*(LnkLI328))(CMPcaar((V681)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V688));
	princ_str("]);",VV[26]);
	princ_str("\nL",VV[26]);
	(void)((*(LnkLI275))(CMPcdr((V679))));
	princ_str("();",VV[26]);
	princ_str("\nihs_pop();",VV[26]);
	goto T2438;
	goto T2444;
T2444:;
	princ_str("\nL",VV[26]);
	(void)((*(LnkLI275))(CMPcdr((V679))));
	princ_str("();",VV[26]);
	goto T2438;
	goto T2440;
T2440:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T2459;}
	princ_str("\nsuper_funcall(VV[",VV[26]);
	V689= (*(LnkLI328))(CMPcaar((V681)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V689));
	princ_str("]);",VV[26]);
	goto T2438;
	goto T2459;
T2459:;
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T2465;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[26]);
	V690= (*(LnkLI328))(CMPcaar((V681)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V690));
	princ_str("]);",VV[26]);
	goto T2438;
	goto T2465;
T2465:;
	princ_str("\nCMPfuncall(VV[",VV[26]);
	V691= (*(LnkLI328))(CMPcaar((V681)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V691));
	princ_str("]->s.s_gfdef);",VV[26]);
	goto T2438;
T2438:;
	if((CMPcdr((V681)))==Cnil){
	goto T2473;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(CMPcadadr((V681))));
	{object V692= CMPcaadr((V681));
	if((V692!= VV[75]))goto T2480;
	princ_str("=vs_base[0];",VV[26]);
	goto T2479;
	goto T2480;
T2480:;
	princ_str("=object_to_",VV[26]);
	base[1]= symbol_name(CMPcaadr((V681)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V693= vs_base[0];
	(void)((*(LnkLI275))(V693));
	princ_str("(vs_base[0]);",VV[26]);}
	goto T2479;
T2479:;
	{register object V694;
	register object V695;
	V694= CMPcddr((V681));
	V695= CMPcar((V694));
	goto T2490;
T2490:;
	if(!(((V694))==Cnil)){
	goto T2491;}
	goto T2473;
	goto T2491;
T2491:;
	princ_str("\nvs_base++;",VV[26]);
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(CMPcadr((V695))));
	{object V696= CMPcar((V695));
	if((V696!= VV[75]))goto T2501;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[26]);
	goto T2500;
	goto T2501;
T2501:;
	princ_str("=object_to_",VV[26]);
	base[3]= symbol_name(CMPcar((V695)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V697= vs_base[0];
	(void)((*(LnkLI275))(V697));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[26]);}
	goto T2500;
T2500:;
	V694= CMPcdr((V694));
	V695= CMPcar((V694));
	goto T2490;}
	goto T2473;
T2473:;
	princ_str("\n}",VV[26]);
	goto T2372;
T2372:;
	V680= CMPcdr((V680));
	V681= CMPcar((V680));
	goto T2367;}
	goto T2363;
T2363:;
	princ_str("\n}",VV[26]);
	princ_str("\nvs_top=vs;",VV[26]);
	princ_str("\n}",VV[26]);
	{object V698 = Cnil;
	VMR47(V698)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFENTRY	*/

static object LI49(V700)

register object V700;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{register object V701;
	register object V702;
	object V703;
	register object V704;
	V701= Cnil;
	V702= Cnil;
	(VV[62]->s.s_dbind)= number_plus((VV[62]->s.s_dbind),small_fixnum(1));
	V703= (VV[62]->s.s_dbind);
	V704= Cnil;
	if(((V700))==Cnil){
	goto T2530;}
	if((CMPcdr((V700)))==Cnil){
	goto T2530;}
	if(!((CMPcddr((V700)))==Cnil)){
	goto T2529;}
	goto T2530;
T2530:;
	V705 = CMPmake_fixnum((long)length((V700)));
	(void)((*(LnkLI284))(VV[233],small_fixnum(3),V705));
	goto T2529;
T2529:;
	if(type_of(CMPcar((V700)))==t_symbol){
	goto T2536;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[234],CMPcar((V700)))));
	goto T2536;
T2536:;
	{register object V706;
	register object V707;
	V706= CMPcadr((V700));
	V707= CMPcar((V706));
	goto T2543;
T2543:;
	if(!(((V706))==Cnil)){
	goto T2544;}
	goto T2539;
	goto T2544;
T2544:;
	{register object x= (V707),V708= VV[235];
	while(V708!=Cnil)
	if(eql(x,V708->c.c_car)){
	goto T2548;
	}else V708=V708->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[236],(V707))));
	goto T2548;
T2548:;
	V706= CMPcdr((V706));
	V707= CMPcar((V706));
	goto T2543;}
	goto T2539;
T2539:;
	V704= CMPcaddr((V700));
	if(!(type_of((V704))==t_symbol)){
	goto T2560;}
	V701= VV[75];
	base[1]= symbol_name((V704));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V702= vs_base[0];
	goto T2558;
	goto T2560;
T2560:;
	if(!(type_of((V704))==t_string)){
	goto T2567;}
	V701= VV[75];
	V702= (V704);
	goto T2558;
	goto T2567;
T2567:;
	if(!(type_of((V704))==t_cons)){
	goto T2573;}
	{register object x= CMPcar((V704)),V709= VV[237];
	while(V709!=Cnil)
	if(eql(x,V709->c.c_car)){
	goto T2577;
	}else V709=V709->c.c_cdr;
	goto T2573;}
	goto T2577;
T2577:;
	if(!(type_of(CMPcdr((V704)))==t_cons)){
	goto T2573;}
	if(type_of(CMPcadr((V704)))==t_symbol){
	goto T2580;}
	if(!(type_of(CMPcadr((V704)))==t_string)){
	goto T2573;}
	goto T2580;
T2580:;
	if(!((CMPcddr((V704)))==Cnil)){
	goto T2573;}
	if(!(type_of(CMPcadr((V704)))==t_symbol)){
	goto T2588;}
	base[1]= symbol_name(CMPcadr((V704)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V702= vs_base[0];
	goto T2586;
	goto T2588;
T2588:;
	V702= CMPcadr((V704));
	goto T2586;
T2586:;
	V701= CMPcar((V704));
	goto T2558;
	goto T2573;
T2573:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[238],(V704))));
	goto T2558;
T2558:;
	{object V710;
	V710= list(6,VV[233],CMPcar((V700)),(V703),CMPcadr((V700)),(V701),(V702));
	(VV[25]->s.s_dbind)= make_cons((V710),(VV[25]->s.s_dbind));}
	{object V711;
	V711= make_cons(CMPcar((V700)),(V703));
	(VV[80]->s.s_dbind)= make_cons((V711),(VV[80]->s.s_dbind));
	{object V712 = (VV[80]->s.s_dbind);
	VMR48(V712)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFENTRY	*/

static object LI50(V718,V719,V720,V721,V722)

object V718;object V719;object V720;object V721;object V722;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V719)));
	princ_str("();",VV[32]);
	V723= list(2,VV[92],(V718));
	V724= list(3,VV[112],/* INLINE-ARGS */V723,(*(LnkLI302))(VV[239],(V719)));
	{object V725 = (VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V724));
	VMR49(V725)}
	return Cnil;
}
/*	local entry for function T3DEFENTRY	*/

static object LI51(V731,V732,V733,V734,V735)

object V731;object V732;object V733;register object V734;object V735;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[240],(V731))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V732)));
	princ_str("()",VV[26]);
	princ_str("\n{	object *old_base=vs_base;",VV[26]);
	{object V736= (V734);
	if((V736!= VV[241]))goto T2609;
	goto T2608;
	goto T2609;
T2609:;
	if((V736!= VV[159]))goto T2610;
	princ_str("\n	char *x;",VV[26]);
	goto T2608;
	goto T2610;
T2610:;
	princ_str("\n	",VV[26]);
	base[0]= symbol_name((V734));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V737= vs_base[0];
	(void)((*(LnkLI275))(V737));
	princ_str(" x;",VV[26]);}
	goto T2608;
T2608:;
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T2617;}
	princ_str("\n	check_arg(",VV[26]);
	V738 = CMPmake_fixnum((long)length((V733)));
	(void)((*(LnkLI275))(V738));
	princ_str(");",VV[26]);
	goto T2617;
T2617:;
	if(((V734))==(VV[241])){
	goto T2623;}
	princ_str("\n	x=",VV[26]);
	goto T2623;
T2623:;
	princ_str("\n	",VV[26]);
	(void)((*(LnkLI275))((V735)));
	princ_char(40,VV[26]);
	if(((V733))==Cnil){
	goto T2631;}
	{register object V739;
	register long V740;
	V740= 0;
	V739= (V733);
	goto T2636;
T2636:;
	{object V741= CMPcar((V739));
	if((V741!= VV[75]))goto T2640;
	princ_str("\n	vs_base[",VV[26]);
	V742 = CMPmake_fixnum(V740);
	(void)((*(LnkLI275))(V742));
	princ_char(93,VV[26]);
	goto T2639;
	goto T2640;
T2640:;
	princ_str("\n	object_to_",VV[26]);
	base[0]= symbol_name(CMPcar((V739)));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V743= vs_base[0];
	(void)((*(LnkLI275))(V743));
	princ_str("(vs_base[",VV[26]);
	V744 = CMPmake_fixnum(V740);
	(void)((*(LnkLI275))(V744));
	princ_str("])",VV[26]);}
	goto T2639;
T2639:;
	if(!((CMPcdr((V739)))==Cnil)){
	goto T2651;}
	goto T2631;
	goto T2651;
T2651:;
	princ_char(44,VV[26]);
	V739= CMPcdr((V739));
	V740= (long)(V740)+1;
	goto T2636;}
	goto T2631;
T2631:;
	princ_str(");",VV[26]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[26]);
	princ_str("\n	vs_base[0]=",VV[26]);
	{object V745= (V734);
	if((V745!= VV[241]))goto T2667;
	princ_str("Cnil",VV[26]);
	goto T2666;
	goto T2667;
T2667:;
	if((V745!= VV[75]))goto T2669;
	princ_char(120,VV[26]);
	goto T2666;
	goto T2669;
T2669:;
	if((V745!= VV[342]))goto T2671;
	princ_str("code_char(x)",VV[26]);
	goto T2666;
	goto T2671;
T2671:;
	if((V745!= VV[343]))goto T2673;
	if(!(number_compare(small_fixnum(0),(VV[115]->s.s_dbind))==0)){
	goto T2674;}
	princ_str("CMP",VV[26]);
	goto T2674;
T2674:;
	princ_str("make_fixnum(x)",VV[26]);
	goto T2666;
	goto T2673;
T2673:;
	if((V745!= VV[159]))goto T2679;
	princ_str("make_simple_string(x)",VV[26]);
	goto T2666;
	goto T2679;
T2679:;
	if((V745!= VV[344]))goto T2681;
	princ_str("make_shortfloat(x)",VV[26]);
	goto T2666;
	goto T2681;
T2681:;
	if((V745!= VV[345]))goto T2683;
	princ_str("make_longfloat(x)",VV[26]);
	goto T2666;
	goto T2683;
T2683:;}
	goto T2666;
T2666:;
	princ_char(59,VV[26]);
	princ_str("\n}",VV[26]);
	{object V746 = Cnil;
	VMR50(V746)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFLA	*/

static object LI52(V748)

object V748;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V749 = Cnil;
	VMR51(V749)}
	return Cnil;
}
/*	local entry for function PARSE-CVSPECS	*/

static object LI53(V751)

object V751;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{register object V752;
	V752= Cnil;
	{register object V753;
	register object V754;
	V753= (V751);
	V754= CMPcar((V753));
	goto T2692;
T2692:;
	if(!(((V753))==Cnil)){
	goto T2693;}
	{object V755 = reverse((V752));
	VMR52(V755)}
	goto T2693;
T2693:;
	if(!(type_of((V754))==t_symbol)){
	goto T2699;}
	{object V756;
	base[2]= symbol_name((V754));
	vs_top=(vs_base=base+2)+1;
	Lstring_downcase();
	vs_top=sup;
	V757= vs_base[0];
	V756= list(2,VV[75],V757);
	V752= make_cons((V756),(V752));
	goto T2697;}
	goto T2699;
T2699:;
	if(!(type_of((V754))==t_string)){
	goto T2706;}
	{object V758;
	V758= list(2,VV[75],(V754));
	V752= make_cons((V758),(V752));
	goto T2697;}
	goto T2706;
T2706:;
	if(!(type_of((V754))==t_cons)){
	goto T2711;}
	{register object x= CMPcar((V754)),V759= VV[242];
	while(V759!=Cnil)
	if(eql(x,V759->c.c_car)){
	goto T2714;
	}else V759=V759->c.c_cdr;
	goto T2711;}
	goto T2714;
T2714:;
	{register object V760;
	register object V761;
	V760= CMPcdr((V754));
	V761= CMPcar((V760));
	goto T2718;
T2718:;
	if(!(((V760))==Cnil)){
	goto T2719;}
	goto T2697;
	goto T2719;
T2719:;
	{register object V762;
	V763= CMPcar((V754));
	if(!(type_of((V761))==t_symbol)){
	goto T2727;}
	base[4]= symbol_name((V761));
	vs_top=(vs_base=base+4)+1;
	Lstring_downcase();
	vs_top=sup;
	V764= vs_base[0];
	goto T2725;
	goto T2727;
T2727:;
	if(!(type_of((V761))==t_string)){
	goto T2731;}
	V764= (V761);
	goto T2725;
	goto T2731;
T2731:;
	V764= (VFUN_NARGS=2,(*(LnkLI266))(VV[243],(V761)));
	goto T2725;
T2725:;
	V762= list(2,/* INLINE-ARGS */V763,V764);
	V752= make_cons((V762),(V752));}
	V760= CMPcdr((V760));
	V761= CMPcar((V760));
	goto T2718;}
	goto T2711;
T2711:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[244],(V754))));
	goto T2697;
T2697:;
	V753= CMPcdr((V753));
	V754= CMPcar((V753));
	goto T2692;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-DCFUN	*/

static object LI54(V770,V771,V772,V773,V774)

object V770;object V771;object V772;register object V773;register object V774;
{	 VMB53 VMS53 VMV53
	bds_check;
	goto TTL;
TTL:;
	{object V775;
	register object V776;
	object V777;
	if(((V770))==Cnil){
	goto T2746;}
	V775= small_fixnum(0);
	goto T2744;
	goto T2746;
T2746:;
	V775= STREF(object,(V773),16);
	goto T2744;
T2744:;
	V776= Cnil;
	bds_bind(VV[21],(*(LnkLI307))(CMPcadr((V774))));
	bds_bind(VV[118],Cnil);
	V777= CMPcaaddr((V774));
	if((STREF(object,(V773),0))==Cnil){
	goto T2754;}
	V778= STREF(object,(V773),0);
	goto T2752;
	goto T2754;
T2754:;
	V778= Cnil;
	goto T2752;
T2752:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[245],V778)));
	princ_str("\nstatic void ",VV[26]);
	if(((V770))==Cnil){
	goto T2761;}
	V779= VV[246];
	goto T2759;
	goto T2761;
T2761:;
	V779= VV[247];
	goto T2759;
T2759:;
	(void)((*(LnkLI275))(V779));
	(void)((*(LnkLI275))(STREF(object,(V773),12)));
	princ_char(40,VV[26]);
	princ_str("base0",VV[26]);
	if(((V777))==Cnil){
	goto T2770;}
	V780= VV[248];
	goto T2768;
	goto T2770;
T2770:;
	V780= VV[249];
	goto T2768;
T2768:;
	(void)((*(LnkLI275))(V780));
	(void)((*(LnkLI309))(STREF(object,CMPcadr((V774)),4),small_fixnum(2)));
	(void)((*(LnkLI314))(CMPcaaddr((V774)),Cnil));
	princ_str("register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base0;",VV[26]);
	bds_bind(VV[250],(V772));
	bds_bind(VV[129],VV[125]);
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],one_plus((V775)));
	bds_bind(VV[133],(V772));
	bds_bind(VV[134],(V771));
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	(VV[138]->s.s_dbind)= number_plus((VV[138]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[137],(VV[138]->s.s_dbind));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	V776= (VV[137]->s.s_dbind);
	princ_str("\n{",VV[26]);
	(void)((*(LnkLI315))(STREF(object,CMPcadr((V774)),4),STREF(object,(V773),12),VV[251]));
	princ_str("\n	VMB",VV[26]);
	(void)((*(LnkLI275))((V776)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V776)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V776)));
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T2794;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2794;
T2794:;
	base[19]= CMPcaddr(CMPcddr((V774)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk316)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T2802;}
	if(((VV[139]->s.s_dbind))!=Cnil){
	goto T2802;}
	if(((VV[141]->s.s_dbind))!=Cnil){
	goto T2802;}
	goto T2800;
	goto T2802;
T2802:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T2800;
T2800:;
	princ_str("\n}",VV[26]);
	(void)((*(LnkLI317))((V776),Ct));
	{object V781 = (*(LnkLI311))(STREF(object,(V773),12));
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
	VMR53(V781)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-FUN	*/

static object LI55(V787,V788,V789,V790,V791)

object V787;object V788;object V789;object V790;object V791;
{	 VMB54 VMS54 VMV54
	bds_check;
	goto TTL;
TTL:;
	{long V792;
	if(((V787))==Cnil){
	goto T2814;}
	V792= 0;
	goto T2812;
	goto T2814;
T2814:;
	V792= fix(STREF(object,(V790),16));
	goto T2812;
T2812:;
	bds_bind(VV[21],(*(LnkLI307))(CMPcadr((V791))));
	bds_bind(VV[118],Cnil);
	if(!(((V787))==(VV[252]))){
	goto T2817;}
	{object V793 = (*(LnkLI251))((V787),(V788),(V789),(V790),(V791));
	bds_unwind1;
	bds_unwind1;
	VMR54(V793)}
	goto T2817;
T2817:;
	if((STREF(object,(V790),0))==Cnil){
	goto T2823;}
	V794= STREF(object,(V790),0);
	goto T2821;
	goto T2823;
T2823:;
	V794= Cnil;
	goto T2821;
T2821:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[253],V794)));
	princ_str("\nstatic void ",VV[32]);
	if(((V787))==Cnil){
	goto T2830;}
	V795= VV[254];
	goto T2828;
	goto T2830;
T2830:;
	V795= VV[255];
	goto T2828;
T2828:;
	(void)((*(LnkLI278))(V795));
	(void)((*(LnkLI278))(STREF(object,(V790),12)));
	princ_str("();",VV[32]);
	princ_str("\nstatic void ",VV[26]);
	if(((V787))==Cnil){
	goto T2839;}
	V796= VV[256];
	goto T2837;
	goto T2839;
T2839:;
	V796= VV[257];
	goto T2837;
T2837:;
	(void)((*(LnkLI275))(V796));
	(void)((*(LnkLI275))(STREF(object,(V790),12)));
	princ_char(40,VV[26]);
	{register object V797;
	register long V798;
	V797= CMPmake_fixnum(V792);
	V798= 0;
	goto T2847;
T2847:;
	V799 = CMPmake_fixnum(V798);
	if(!(number_compare(V799,(V797))>=0)){
	goto T2848;}
	princ_str("base",VV[26]);
	V800 = CMPmake_fixnum(V798);
	(void)((*(LnkLI275))(V800));
	princ_char(41,VV[26]);
	goto T2843;
	goto T2848;
T2848:;
	princ_str("base",VV[26]);
	V801 = CMPmake_fixnum(V798);
	(void)((*(LnkLI275))(V801));
	princ_char(44,VV[26]);
	V798= (long)(V798)+1;
	goto T2847;}
	goto T2843;
T2843:;
	princ_str("\nregister object ",VV[26]);
	{register object V802;
	register long V803;
	V802= CMPmake_fixnum(V792);
	V803= 0;
	goto T2868;
T2868:;
	V804 = CMPmake_fixnum(V803);
	if(!(number_compare(V804,(V802))>=0)){
	goto T2869;}
	princ_char(42,VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base",VV[26]);
	V805 = CMPmake_fixnum(V803);
	(void)((*(LnkLI275))(V805));
	princ_char(59,VV[26]);
	goto T2864;
	goto T2869;
T2869:;
	princ_char(42,VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base",VV[26]);
	V806 = CMPmake_fixnum(V803);
	(void)((*(LnkLI275))(V806));
	princ_char(44,VV[26]);
	V803= (long)(V803)+1;
	goto T2868;}
	goto T2864;
T2864:;
	(void)((*(LnkLI309))(STREF(object,CMPcadr((V791)),4),small_fixnum(2)));
	bds_bind(VV[129],VV[128]);
	bds_bind(VV[250],(V789));
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	V807 = CMPmake_fixnum(V792);
	bds_bind(VV[132],one_plus(V807));
	bds_bind(VV[133],(V789));
	bds_bind(VV[134],(V788));
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	(VV[138]->s.s_dbind)= number_plus((VV[138]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[137],(VV[138]->s.s_dbind));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	princ_str("\n{	register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base=vs_base;",VV[26]);
	princ_str("\n	register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("sup=base+VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_char(59,VV[26]);
	(void)((*(LnkLI315))(STREF(object,CMPcadr((V791)),4),STREF(object,(V790),12),VV[258]));
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T2909;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_str(");",VV[26]);
	goto T2907;
	goto T2909;
T2909:;
	princ_str("\n	vs_check;",VV[26]);
	goto T2907;
T2907:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T2915;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2915;
T2915:;
	if(((V787))==Cnil){
	goto T2921;}
	(void)((VFUN_NARGS=2,(*(LnkLI332))(CMPcaddr((V791)),CMPcaddr(CMPcddr((V791))))));
	goto T2919;
	goto T2921;
T2921:;
	(void)((VFUN_NARGS=3,(*(LnkLI332))(CMPcaddr((V791)),CMPcaddr(CMPcddr((V791))),(V790))));
	goto T2919;
T2919:;
	princ_str("\n}",VV[26]);
	{object V808;
	V808= make_cons((VV[137]->s.s_dbind),(VV[131]->s.s_dbind));
	(VV[34]->s.s_dbind)= make_cons((V808),(VV[34]->s.s_dbind));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))((VV[137]->s.s_dbind)));
	V809= (*(LnkLI333))();
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
	{object V810 = (*(LnkLI311))(STREF(object,(V790),12));
	bds_unwind1;
	bds_unwind1;
	VMR54(V810)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-CVARS	*/

static object LI56()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{register object V811;
	V811= Cnil;
	{register object V812;
	register object V813;
	V812= (VV[19]->s.s_dbind);
	V813= CMPcar((V812));
	goto T2936;
T2936:;
	if(!(((V812))==Cnil)){
	goto T2937;}
	goto T2932;
	goto T2937;
T2937:;
	{register object V814;
	if(!(type_of((V813))==t_cons)){
	goto T2944;}
	{register object V815;
	V815= CMPcar((V813));
	V813= CMPcdr((V813));
	V814= (V815);
	goto T2942;}
	goto T2944;
T2944:;
	V814= Ct;
	goto T2942;
T2942:;
	if(!(((V811))==((V814)))){
	goto T2951;}
	base[1]= (VV[32]->s.s_dbind);
	base[2]= VV[259];
	base[3]= (V813);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2949;
	goto T2951;
T2951:;
	if(!(((V811))==Cnil)){
	goto T2957;}
	goto T2956;
	goto T2957;
T2957:;
	base[1]= (VV[32]->s.s_dbind);
	base[2]= VV[260];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	goto T2956;
T2956:;
	V811= (V814);
	base[1]= (VV[32]->s.s_dbind);
	base[2]= VV[261];
	base[3]= (*(LnkLI281))((V811));
	base[4]= (V813);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	goto T2949;
T2949:;
	if(!(((V811))==(VV[262]))){
	goto T2941;}
	base[1]= (VV[32]->s.s_dbind);
	base[2]= VV[263];
	base[3]= (V813);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
	goto T2941;
T2941:;
	V812= CMPcdr((V812));
	V813= CMPcar((V812));
	goto T2936;}
	goto T2932;
T2932:;
	if((VV[19]->s.s_dbind)==Cnil){
	goto T2977;}
	base[0]= (VV[32]->s.s_dbind);
	base[1]= VV[264];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T2977;
T2977:;
	if(((VV[17]->s.s_dbind))==Cnil){
	goto T2981;}
	if(eql((VV[142]->s.s_dbind),small_fixnum(0))){
	goto T2981;}
	base[0]= (VV[32]->s.s_dbind);
	base[1]= VV[265];
	base[2]= (VV[142]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V816 = vs_base[0];
	VMR55(V816)}
	goto T2981;
T2981:;
	{object V817 = Cnil;
	VMR55(V817)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function DO-DECL	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	{object V818;
	V818=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(eql(STREF(object,(V818),16),VV[73])){
	goto T2989;}
	goto T2988;
	goto T2989;
T2989:;
	(VV[154]->s.s_dbind)= Ct;
	goto T2988;
T2988:;
	{object V819;
	V819= (*(LnkLI346))((V818));
	if(((V819))==Cnil){
	goto T2994;}
	{object V820;
	(VV[89]->s.s_dbind)= number_plus((VV[89]->s.s_dbind),small_fixnum(1));
	V820= (VV[89]->s.s_dbind);
	V821= Ct;
	STSET(object,(V818),4, (V819));
	(void)((V819));
	V822= Ct;
	STSET(object,(V818),16, (V820));
	(void)((V820));
	princ_str("\n	",VV[26]);
	if((base0[1])!=Cnil){
	goto T3001;}
	princ_char(123,VV[26]);
	base0[1]= Ct;
	goto T3001;
T3001:;
	base[1]= (*(LnkLI347))((V818));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2994;
T2994:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static object  LnkTLI347(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[347],(void **)(void *)&LnkLI347,1,first,ap);va_end(ap);return V1;} /* WT-VAR-DECL */
static object  LnkTLI346(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[346],(void **)(void *)&LnkLI346,1,first,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI251(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[251],(void **)(void *)&LnkLI251,5,first,ap);va_end(ap);return V1;} /* T3LOCAL-DCFUN */
static object  LnkTLI341(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[341],(void **)(void *)&LnkLI341,1,first,ap);va_end(ap);return V1;} /* PARSE-CVSPECS */
static object  LnkTLI340(){return call_proc0(VV[340],(void **)(void *)&LnkLI340);} /* WFS-ERROR */
static void LnkT339(){ call_or_link(VV[339],(void **)(void *)&Lnk339);} /* C2DM */
static object  LnkTLI338(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[338],(void **)(void *)&LnkLI338,3,first,ap);va_end(ap);return V1;} /* C1DM */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[337],(void **)(void *)&LnkLI337,first,ap);va_end(ap);return V1;} /* REMOVE-DUPLICATES */
static object  LnkTLI336(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[336],(void **)(void *)&LnkLI336,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS1 */
static object  LnkTLI335(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[335],(void **)(void *)&LnkLI335,first,ap);va_end(ap);return V1;} /* WARN */
static object  LnkTLI334(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[334],(void **)(void *)&LnkLI334,1,first,ap);va_end(ap);return V1;} /* REGISTER */
static object  LnkTLI333(){return call_proc0(VV[333],(void **)(void *)&LnkLI333);} /* WT-CVARS */
static object  LnkTLI332(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[332],(void **)(void *)&LnkLI332,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR */
static object  LnkTLI331(){return call_proc0(VV[331],(void **)(void *)&LnkLI331);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI330(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[330],(void **)(void *)&LnkLI330,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI329(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[329],(void **)(void *)&LnkLI329,1,first,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI328(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[328],(void **)(void *)&LnkLI328,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI327(){return call_proc0(VV[327],(void **)(void *)&LnkLI327);} /* BABOON */
static object  LnkTLI326(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[326],(void **)(void *)&LnkLI326,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static object  LnkTLI325(){return call_proc0(VV[325],(void **)(void *)&LnkLI325);} /* INC-INLINE-BLOCKS */
static object  LnkTLI324(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[324],(void **)(void *)&LnkLI324,first,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI323(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[323],(void **)(void *)&LnkLI323,2,first,ap);va_end(ap);return V1;} /* C2BIND-INIT */
static object  LnkTLI322(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[322],(void **)(void *)&LnkLI322,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI321(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[321],(void **)(void *)&LnkLI321,1,first,ap);va_end(ap);return V1;} /* SET-UP-VAR-CVS */
static object  LnkTLI320(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[320],(void **)(void *)&LnkLI320,first,ap);va_end(ap);return V1;} /* CONCATENATE */
static object  LnkTLI319(){return call_proc0(VV[319],(void **)(void *)&LnkLI319);} /* CVS-PUSH */
static object  LnkTLI318(){return call_proc0(VV[318],(void **)(void *)&LnkLI318);} /* VS-PUSH */
static object  LnkTLI317(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[317],(void **)(void *)&LnkLI317,2,first,ap);va_end(ap);return V1;} /* WT-V*-MACROS */
static void LnkT316(){ call_or_link(VV[316],(void **)(void *)&Lnk316);} /* C2EXPR */
static object  LnkTLI315(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[315],(void **)(void *)&LnkLI315,3,first,ap);va_end(ap);return V1;} /* ASSIGN-DOWN-VARS */
static object  LnkTLI314(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[314],(void **)(void *)&LnkLI314,2,first,ap);va_end(ap);return V1;} /* WT-REQUIREDS */
static object  LnkTLI313(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[313],(void **)(void *)&LnkLI313,first,ap);va_end(ap);return V1;} /* WT-COMMENT */
static object  LnkTLI312(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[312],(void **)(void *)&LnkLI312,2,first,ap);va_end(ap);return V1;} /* ADD-DEBUG-INFO */
static object  LnkTLI311(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[311],(void **)(void *)&LnkLI311,1,first,ap);va_end(ap);return V1;} /* WT-DOWNWARD-CLOSURE-MACRO */
static void LnkT310(){ call_or_link(VV[310],(void **)(void *)&Lnk310);} /* T3DEFUN-AUX */
static object  LnkTLI309(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[309],(void **)(void *)&LnkLI309,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS */
static void LnkT308(){ call_or_link(VV[308],(void **)(void *)&Lnk308);} /* FIXNUMP */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[307],(void **)(void *)&LnkLI307,1,first,ap);va_end(ap);return V1;} /* VOLATILE */
static object  LnkTLI306(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[306],(void **)(void *)&LnkLI306,1,first,ap);va_end(ap);return V1;} /* MAXARGS */
static object  LnkTLI305(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[305],(void **)(void *)&LnkLI305,1,first,ap);va_end(ap);return V1;} /* VARARG-P */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[304],(void **)(void *)&LnkLI304,3,first,ap);va_end(ap);return V1;} /* WT-IF-PROCLAIMED */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[303],(void **)(void *)&LnkLI303,258,first,ap);va_end(ap);return V1;} /* PROCLAIMED-ARGD */
static object  LnkTLI302(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[302],(void **)(void *)&LnkLI302,2,first,ap);va_end(ap);return V1;} /* ADD-ADDRESS */
static object  LnkTLI301(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[301],(void **)(void *)&LnkLI301,first,ap);va_end(ap);return V1;} /* ADD-INIT */
static object  LnkTLI300(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[300],(void **)(void *)&LnkLI300,first,ap);va_end(ap);return V1;} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI299(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[299],(void **)(void *)&LnkLI299,2,first,ap);va_end(ap);return V1;} /* SHIFT<< */
static object  LnkTLI298(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[298],(void **)(void *)&LnkLI298,257,first,ap);va_end(ap);return V1;} /* F-TYPE */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* SUBTYPEP */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI295(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[295],(void **)(void *)&LnkLI295,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI294(){return call_proc0(VV[294],(void **)(void *)&LnkLI294);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI293(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[293],(void **)(void *)&LnkLI293,2,first,ap);va_end(ap);return V1;} /* MAKE-INLINE-STRING */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)(void *)&LnkLI292,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI291(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[291],(void **)(void *)&LnkLI291,2,first,ap);va_end(ap);return V1;} /* CMPFIX-ARGS */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[290],(void **)(void *)&LnkLI290,1,first,ap);va_end(ap);return V1;} /* PROCLAIM */
static object  LnkTLI289(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[289],(void **)(void *)&LnkLI289,1,first,ap);va_end(ap);return V1;} /* CHECK-DOWNWARD */
static object  LnkTLI288(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[288],(void **)(void *)&LnkLI288,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI287(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[287],(void **)(void *)&LnkLI287,1,first,ap);va_end(ap);return V1;} /* T1PROGN */
static object  LnkTLI284(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[284],(void **)(void *)&LnkLI284,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static void LnkT283(){ call_or_link(VV[283],(void **)(void *)&Lnk283);} /* CMP-EVAL */
static object  LnkTLI282(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[282],(void **)(void *)&LnkLI282,1,first,ap);va_end(ap);return V1;} /* DECLARATION-TYPE */
static object  LnkTLI281(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[281],(void **)(void *)&LnkLI281,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static void LnkT280(){ call_or_link(VV[280],(void **)(void *)&Lnk280);} /* WT-DATA-FILE */
static object  LnkTLI279(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[279],(void **)(void *)&LnkLI279,1,first,ap);va_end(ap);return V1;} /* PUSH-DATA-INCF */
static object  LnkTLI278(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[278],(void **)(void *)&LnkLI278,1,first,ap);va_end(ap);return V1;} /* WT-H1 */
static object  LnkTLI277(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[277],(void **)(void *)&LnkLI277,1,first,ap);va_end(ap);return V1;} /* WT-FUNCTION-LINK */
static void LnkT276(){ call_or_link(VV[276],(void **)(void *)&Lnk276);} /* WT-GLOBAL-ENTRY */
static void LnkT258(){ call_or_link(VV[258],(void **)(void *)&Lnk258);} /* T3LOCAL-FUN */
static object  LnkTLI275(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[275],(void **)(void *)&LnkLI275,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI274(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[274],(void **)(void *)&LnkLI274,1,first,ap);va_end(ap);return V1;} /* T1ORDINARY */
static void LnkT273(){ call_or_link(VV[273],(void **)(void *)&Lnk273);} /* T1EXPR */
static object  LnkTLI272(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[272],(void **)(void *)&LnkLI272,1,first,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND-1 */
static object  LnkTLI271(){return call_proc0(VV[271],(void **)(void *)&LnkLI271);} /* PRINT-CURRENT-FORM */
static object  LnkTLI270(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[270],(void **)(void *)&LnkLI270,1,first,ap);va_end(ap);return V1;} /* WT-DATA-PACKAGE-OPERATION */
static object  LnkTLI269(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[269],(void **)(void *)&LnkLI269,2,first,ap);va_end(ap);return V1;} /* MAYBE-EVAL */
static object  LnkTLI268(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[268],(void **)(void *)&LnkLI268,3,first,ap);va_end(ap);return V1;} /* CMP-EXPAND-MACRO */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[267],(void **)(void *)&LnkLI267,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[266],(void **)(void *)&LnkLI266,first,ap);va_end(ap);return V1;} /* CMPERR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

