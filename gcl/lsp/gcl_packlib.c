
#include "cmpinclude.h"
#include "gcl_packlib.h"
void init_gcl_packlib(){do_init(VV);}
/*	macro definition for COERCE-TO-PACKAGE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	if(!((base[2])==(VV[0]))){
	goto T2;}
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2;
T2:;
	{register object V2;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V2= vs_base[0];
	V3= list(2,(V2),base[2]);
	V4= make_cons(/* INLINE-ARGS */V3,Cnil);
	V5= list(2,VV[3],(V2));
	base[3]= list(3,VV[1],/* INLINE-ARGS */V4,list(4,VV[2],/* INLINE-ARGS */V5,(V2),list(2,VV[4],list(2,VV[5],(V2)))));
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	local entry for function FIND-ALL-SYMBOLS	*/

static object LI2(V7)

register object V7;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!(type_of((V7))==t_symbol)){
	goto T5;}
	V7= symbol_name((V7));
	goto T5;
T5:;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V10= vs_base[0];
	{object V8;
	object V9= V10;
	if(endp(V9)){
	{object V11 = Cnil;
	VMR2(V11)}}
	base[0]=V8=MMcons(Cnil,Cnil);
	goto T9;
T9:;
	{object V13;
	object V14;
	base[1]= (V7);
	base[2]= (V9->c.c_car);
	vs_top=(vs_base=base+1)+2;
	Lfind_symbol();
	if(vs_base>=vs_top){vs_top=sup;goto T15;}
	V13= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T16;}
	V14= vs_base[0];
	vs_top=sup;
	goto T17;
	goto T15;
T15:;
	V13= Cnil;
	goto T16;
T16:;
	V14= Cnil;
	goto T17;
T17:;
	if(((V14))==(VV[6])){
	goto T18;}
	if(!(((V14))==(VV[7]))){
	goto T19;}
	goto T18;
T18:;
	(V8->c.c_cdr)= make_cons((V13),Cnil);
	goto T11;
	goto T19;
T19:;
	(V8->c.c_cdr)= Cnil;}
	goto T11;
T11:;
	{object cdr_V8=MMcdr(V8);while(!endp(cdr_V8)) {cdr_V8=MMcdr(cdr_V8);V8=MMcdr(V8);}}
	V9=MMcdr(V9);
	if(endp(V9)){
	base[0]=base[0]->c.c_cdr;
	{object V15 = base[0];
	VMR2(V15)}}
	goto T9;}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DO-SYMBOLS	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V16=base[0]->c.c_cdr;
	if(endp(V16))invalid_macro_call();
	{object V17= (V16->c.c_car);
	if(endp(V17))invalid_macro_call();
	base[2]= (V17->c.c_car);
	V17=V17->c.c_cdr;
	if(endp(V17)){
	base[3]= VV[0];
	} else {
	base[3]= (V17->c.c_car);
	V17=V17->c.c_cdr;}
	if(endp(V17)){
	base[4]= Cnil;
	} else {
	base[4]= (V17->c.c_car);
	V17=V17->c.c_cdr;}
	if(!endp(V17))invalid_macro_call();}
	V16=V16->c.c_cdr;
	base[5]= V16;}
	{register object V18;
	register object V19;
	register object V20;
	register object V21;
	object V22;
	register object V23;
	object V24;
	object V25;
	object V26;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V18= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V19= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V20= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V21= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V22= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V23= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V24= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V25= vs_base[0];
	V26= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk61)();
	if(vs_base<vs_top){
	V26= vs_base[0];
	vs_base++;
	}else{
	V26= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	V27= list(3,list(2,(V18),list(2,VV[8],base[3])),base[2],(V20));
	V28= list(3,VV[10],(V18),list(2,VV[11],(V18)));
	V29= list(3,(V21),/* INLINE-ARGS */V28,list(3,VV[12],list(3,VV[13],base[2],Cnil),base[4]));
	V30= list(2,(V24),(V23));
	V31= list(2,VV[15],(V21));
	V32= list(2,VV[16],list(3,VV[17],(V23),(V24)));
	V33= list(2,VV[18],list(3,VV[19],(V18),(V21)));
	V34= list(3,VV[2],/* INLINE-ARGS */V33,list(3,VV[13],(V23),small_fixnum(0)));
	V35= list(2,(V19),list(3,VV[21],(V23),(V24)));
	V36= list(3,VV[22],(V19),(V23));
	V37= list(3,VV[23],(V21),(V19));
	V38= list(3,VV[13],(V20),list(4,VV[2],/* INLINE-ARGS */V36,/* INLINE-ARGS */V37,list(3,VV[24],(V21),list(3,VV[25],(V19),(V23)))));
	V39= list(2,VV[27],(V20));
	V40= list(3,VV[26],/* INLINE-ARGS */V39,list(2,VV[28],(V25)));
	V41= list(3,VV[13],base[2],list(2,VV[29],(V20)));
	V42= list(3,VV[19],(V21),(V18));
	V43= list(3,VV[30],/* INLINE-ARGS */V42,list(3,VV[19],VV[31],list(2,VV[29],list(2,VV[32],list(2,VV[33],list(3,VV[34],list(2,VV[35],base[2]),(V18)))))));
	V44= list(3,VV[2],/* INLINE-ARGS */V43,make_cons(VV[36],base[5]));
	V45= list(3,VV[13],(V20),list(2,VV[37],(V20)));
	V46= list(3,VV[9],/* INLINE-ARGS */V29,list(6,VV[14],/* INLINE-ARGS */V30,/* INLINE-ARGS */V31,/* INLINE-ARGS */V32,/* INLINE-ARGS */V34,list(10,VV[20],/* INLINE-ARGS */V35,/* INLINE-ARGS */V38,(V22),/* INLINE-ARGS */V40,/* INLINE-ARGS */V41,/* INLINE-ARGS */V44,/* INLINE-ARGS */V45,list(2,VV[28],(V22)),(V25))));
	V47= make_cons(/* INLINE-ARGS */V46,Cnil);
	base[6]= listA(3,VV[1],/* INLINE-ARGS */V27,append((V26),/* INLINE-ARGS */V47));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for DO-EXTERNAL-SYMBOLS	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V48=base[0]->c.c_cdr;
	if(endp(V48))invalid_macro_call();
	{object V49= (V48->c.c_car);
	if(endp(V49))invalid_macro_call();
	base[2]= (V49->c.c_car);
	V49=V49->c.c_cdr;
	if(endp(V49)){
	base[3]= VV[0];
	} else {
	base[3]= (V49->c.c_car);
	V49=V49->c.c_cdr;}
	if(endp(V49)){
	base[4]= Cnil;
	} else {
	base[4]= (V49->c.c_car);
	V49=V49->c.c_cdr;}
	if(!endp(V49))invalid_macro_call();}
	V48=V48->c.c_cdr;
	base[5]= V48;}
	{object V50;
	object V51;
	register object V52;
	object V53;
	object V54;
	object V55;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V50= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V51= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V52= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V53= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V54= vs_base[0];
	V55= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk61)();
	if(vs_base<vs_top){
	V55= vs_base[0];
	vs_base++;
	}else{
	V55= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	V56= list(3,list(2,(V50),list(2,VV[8],base[3])),base[2],(V52));
	V57= list(2,VV[15],(V50));
	V58= list(3,(V51),/* INLINE-ARGS */V57,list(3,VV[12],list(3,VV[13],base[2],Cnil),base[4]));
	V59= list(3,VV[13],(V52),list(3,VV[24],(V50),(V51)));
	V60= list(2,VV[27],(V52));
	V61= list(3,VV[26],/* INLINE-ARGS */V60,list(2,VV[28],(V54)));
	V62= list(3,VV[13],base[2],list(2,VV[29],(V52)));
	V63= list(3,VV[13],(V52),list(2,VV[37],(V52)));
	V64= list(3,/* INLINE-ARGS */V63,list(2,VV[28],(V53)),(V54));
	V65= listA(7,VV[20],/* INLINE-ARGS */V58,/* INLINE-ARGS */V59,(V53),/* INLINE-ARGS */V61,/* INLINE-ARGS */V62,append(base[5],/* INLINE-ARGS */V64));
	V66= make_cons(/* INLINE-ARGS */V65,Cnil);
	base[6]= listA(3,VV[1],/* INLINE-ARGS */V56,append((V55),/* INLINE-ARGS */V66));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for DO-ALL-SYMBOLS	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V67=base[0]->c.c_cdr;
	if(endp(V67))invalid_macro_call();
	{object V68= (V67->c.c_car);
	if(endp(V68))invalid_macro_call();
	base[2]= (V68->c.c_car);
	V68=V68->c.c_cdr;
	if(endp(V68)){
	base[3]= Cnil;
	} else {
	base[3]= (V68->c.c_car);
	V68=V68->c.c_cdr;}
	if(!endp(V68))invalid_macro_call();}
	V67=V67->c.c_cdr;
	base[4]= V67;}
	V69= list(3,VV[38],VV[39],base[3]);
	V70= list(2,base[2],VV[38]);
	base[5]= list(3,VV[9],/* INLINE-ARGS */V69,list(3,VV[40],/* INLINE-ARGS */V70,make_cons(VV[36],base[4])));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function SUBSTRINGP	*/

static object LI6(V73,V74)

register object V73;register object V74;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{register object V75;
	register object V76;
	register object V77;
	V78 = make_fixnum((long)length((V74)));
	V79 = make_fixnum((long)length((V73)));
	V75= number_minus(V78,V79);
	V76= make_fixnum((long)length((V73)));
	V77= small_fixnum(0);
	goto T50;
T50:;
	if(!(number_compare((V77),(V75))>0)){
	goto T51;}
	{object V80 = Cnil;
	VMR6(V80)}
	goto T51;
T51:;
	base[0]= (V73);
	base[1]= (V74);
	base[2]= VV[41];
	base[3]= (V77);
	base[4]= VV[42];
	base[5]= number_plus((V77),(V76));
	vs_top=(vs_base=base+0)+6;
	Lstring_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T55;}
	{object V81 = Ct;
	VMR6(V81)}
	goto T55;
T55:;
	V77= one_plus((V77));
	goto T50;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRINT-SYMBOL-APROPOS	*/

static object LI7(V83)

register object V83;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	(void)(prin1((V83),Cnil));
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T68;}
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T73;}
	princ_str("  Special form",Cnil);
	goto T68;
	goto T73;
T73:;
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lmacro_function();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T77;}
	princ_str("  Macro",Cnil);
	goto T68;
	goto T77;
T77:;
	princ_str("  Function",Cnil);
	goto T68;
T68:;
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T80;}
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T86;}
	princ_str("  Constant: ",Cnil);
	goto T84;
	goto T86;
T86:;
	princ_str("  has value: ",Cnil);
	goto T84;
T84:;
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_value();
	vs_top=sup;
	V84= vs_base[0];
	(void)(prin1(V84,Cnil));
	goto T80;
T80:;
	{object V85 = terpri(Cnil);
	VMR7(V85)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for APROPOS-LIST	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V86;
	object V87;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V86=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T91;}
	V87=(base[1]);
	vs_top=sup;
	goto T92;
	goto T91;
T91:;
	V87= Cnil;
	goto T92;
T92:;
	{register object V88;
	V88= Cnil;
	V88= Cnil;
	V86= coerce_to_string((V86));
	if(((V87))==Cnil){
	goto T101;}
	{object V89;
	object V90;
	object V91;
	base[2]= V87;
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T106;}
	V89= V87;
	goto T104;
	goto T106;
T106:;
	base[2]= coerce_to_string(V87);
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V89= vs_base[0];
	goto T104;
T104:;
	V90= Cnil;
	V91= Cnil;
	{object V93;
	object V94;
	base[4]= (V89);
	vs_top=(vs_base=base+4)+1;
	Lpackage_use_list();
	vs_top=sup;
	V95= vs_base[0];
	V93= make_cons((V89),V95);
	V94= car((V93));
	goto T115;
T115:;
	if(!(endp_prop((V93)))){
	goto T116;}
	V90= Cnil;
	goto T103;
	goto T116;
T116:;
	{long V96;
	long V97;
	base[4]= (V94);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T125;}
	V96= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T126;}
	V97= fix(vs_base[0]);
	vs_top=sup;
	goto T127;
	goto T125;
T125:;
	V96= fix(Cnil);
	goto T126;
T126:;
	V97= fix(Cnil);
	goto T127;
T127:;
	if(((V89))==((V94))){
	goto T128;}
	V97= 0;
	goto T128;
T128:;
	{object V98;
	object V99;
	V100 = make_fixnum(V97);
	V101 = make_fixnum(V96);
	V98= number_plus(V100,V101);
	V99= small_fixnum(0);
	goto T135;
T135:;
	if(!(number_compare((V99),(V98))>=0)){
	goto T136;}
	goto T122;
	goto T136;
T136:;
	V102 = make_fixnum(V97);
	if(!(number_compare((V99),V102)<0)){
	goto T145;}
	base[5]= (V94);
	base[6]= (V99);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V91= vs_base[0];
	goto T143;
	goto T145;
T145:;
	base[5]= (V94);
	V103 = make_fixnum(V97);
	base[6]= number_minus((V99),V103);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V91= vs_base[0];
	goto T143;
T143:;
	goto T141;
T141:;
	if(((V91))!=Cnil){
	goto T151;}
	goto T142;
	goto T151;
T151:;
	V90= car((V91));
	if(((V94))==((V89))){
	goto T157;}
	base[6]= symbol_name((V90));
	base[7]= (V89);
	vs_top=(vs_base=base+6)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V104= vs_base[0];
	if(!((VV[31])==(car(V104)))){
	goto T156;}
	goto T157;
T157:;
	V105= coerce_to_string((V90));
	if(((*(LnkLI62))((V86),/* INLINE-ARGS */V105))==Cnil){
	goto T166;}
	V88= make_cons((V90),(V88));
	goto T166;
T166:;
	goto T156;
T156:;
	V91= cdr((V91));
	goto T141;
	goto T142;
T142:;
	goto T139;
	goto T139;
T139:;
	V99= one_plus((V99));
	goto T135;}}
	goto T122;
T122:;
	V93= cdr((V93));
	V94= car((V93));
	goto T115;}}
	goto T103;
T103:;
	{object V106;
	base[2]= (V87);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V106= vs_base[0];
	goto T183;
T183:;
	if(((V106))!=Cnil){
	goto T184;}
	goto T99;
	goto T184;
T184:;
	{object V107;
	object V108;
	register object V109;
	{object V110;
	V110= car((V106));
	base[2]= (V110);
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T192;}
	V107= (V110);
	goto T189;
	goto T192;
T192:;
	base[2]= coerce_to_string((V110));
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V107= vs_base[0];}
	goto T189;
T189:;
	V108= Cnil;
	V109= Cnil;
	{object V111;
	object V112;
	base[3]= (V107);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk15)();
	vs_top=sup;
	V111= vs_base[0];
	V112= small_fixnum(0);
	goto T200;
T200:;
	if(!(number_compare((V112),(V111))>=0)){
	goto T201;}
	V108= Cnil;
	goto T188;
	goto T201;
T201:;
	base[3]= (V107);
	base[4]= (V112);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V109= vs_base[0];
	goto T208;
T208:;
	if(((V109))!=Cnil){
	goto T213;}
	goto T209;
	goto T213;
T213:;
	V108= car((V109));
	V113= coerce_to_string((V108));
	if(((*(LnkLI62))((V86),/* INLINE-ARGS */V113))==Cnil){
	goto T218;}
	V88= make_cons((V108),(V88));
	goto T218;
T218:;
	V109= cdr((V109));
	goto T208;
	goto T209;
T209:;
	goto T206;
	goto T206;
T206:;
	V112= one_plus((V112));
	goto T200;}}
	goto T188;
T188:;
	V106= cdr((V106));
	goto T183;}
	goto T101;
T101:;
	{object V114;
	object V115;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V114= vs_base[0];
	V115= car((V114));
	goto T233;
T233:;
	if(!(endp_prop((V114)))){
	goto T234;}
	goto T99;
	goto T234;
T234:;
	{object V116;
	register object V117;
	register object V118;
	base[4]= V115;
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T241;}
	V116= V115;
	goto T239;
	goto T241;
T241:;
	base[4]= coerce_to_string(V115);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V116= vs_base[0];
	goto T239;
T239:;
	V117= Cnil;
	V118= Cnil;
	{object V120;
	register object V121;
	base[6]= (V116);
	vs_top=(vs_base=base+6)+1;
	Lpackage_use_list();
	vs_top=sup;
	V122= vs_base[0];
	V120= make_cons((V116),V122);
	V121= car((V120));
	goto T250;
T250:;
	if(!(endp_prop((V120)))){
	goto T251;}
	V117= Cnil;
	goto T238;
	goto T251;
T251:;
	{long V123;
	long V124;
	base[6]= (V121);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T260;}
	V123= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T261;}
	V124= fix(vs_base[0]);
	vs_top=sup;
	goto T262;
	goto T260;
T260:;
	V123= fix(Cnil);
	goto T261;
T261:;
	V124= fix(Cnil);
	goto T262;
T262:;
	if(((V116))==((V121))){
	goto T263;}
	V124= 0;
	goto T263;
T263:;
	{object V125;
	register object V126;
	V127 = make_fixnum(V124);
	V128 = make_fixnum(V123);
	V125= number_plus(V127,V128);
	V126= small_fixnum(0);
	goto T270;
T270:;
	if(!(number_compare((V126),(V125))>=0)){
	goto T271;}
	goto T257;
	goto T271;
T271:;
	V129 = make_fixnum(V124);
	if(!(number_compare((V126),V129)<0)){
	goto T280;}
	base[7]= (V121);
	base[8]= (V126);
	vs_top=(vs_base=base+7)+2;
	siLpackage_internal();
	vs_top=sup;
	V118= vs_base[0];
	goto T278;
	goto T280;
T280:;
	base[7]= (V121);
	V130 = make_fixnum(V124);
	base[8]= number_minus((V126),V130);
	vs_top=(vs_base=base+7)+2;
	siLpackage_external();
	vs_top=sup;
	V118= vs_base[0];
	goto T278;
T278:;
	goto T276;
T276:;
	if(((V118))!=Cnil){
	goto T286;}
	goto T277;
	goto T286;
T286:;
	V117= car((V118));
	if(((V121))==((V116))){
	goto T292;}
	base[8]= symbol_name((V117));
	base[9]= (V116);
	vs_top=(vs_base=base+8)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V131= vs_base[0];
	if(!((VV[31])==(car(V131)))){
	goto T291;}
	goto T292;
T292:;
	V132= coerce_to_string((V117));
	if(((*(LnkLI62))((V86),/* INLINE-ARGS */V132))==Cnil){
	goto T302;}
	V88= make_cons((V117),(V88));
	goto T302;
T302:;
	goto T291;
T291:;
	V118= cdr((V118));
	goto T276;
	goto T277;
T277:;
	goto T274;
	goto T274;
T274:;
	V126= one_plus((V126));
	goto T270;}}
	goto T257;
T257:;
	V120= cdr((V120));
	V121= car((V120));
	goto T250;}}
	goto T238;
T238:;
	V114= cdr((V114));
	V115= car((V114));
	goto T233;}
	goto T99;
T99:;
	V133= symbol_function(VV[19]);
	base[2]= (VFUN_NARGS=3,(*(LnkLI63))((V88),VV[43],V133));
	base[3]= symbol_function(VV[64]);
	base[4]= VV[44];
	base[5]= symbol_function(VV[35]);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk65)();
	return;}
	}
}
/*	function definition for APROPOS	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V134;
	object V135;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V134=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T326;}
	V135=(base[1]);
	vs_top=sup;
	goto T327;
	goto T326;
T326:;
	V135= Cnil;
	goto T327;
T327:;
	{register object V136;
	register object V137;
	base[4]= (V134);
	base[5]= (V135);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk66)();
	vs_top=sup;
	V136= vs_base[0];
	V137= car((V136));
	goto T335;
T335:;
	if(!(endp_prop((V136)))){
	goto T336;}
	goto T329;
	goto T336;
T336:;
	(void)((*(LnkLI67))((V137)));
	V136= cdr((V136));
	V137= car((V136));
	goto T335;}
	goto T329;
T329:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
	}
}
/*	macro definition for WITH-PACKAGE-ITERATOR	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(2);
	vs_top=sup;
	{object V138=base[0]->c.c_cdr;
	if(endp(V138))invalid_macro_call();
	{object V139= (V138->c.c_car);
	if(endp(V139))invalid_macro_call();
	base[2]= (V139->c.c_car);
	V139=V139->c.c_cdr;
	if(endp(V139))invalid_macro_call();
	base[3]= (V139->c.c_car);
	V139=V139->c.c_cdr;
	base[4]= V139;}
	V138=V138->c.c_cdr;
	base[5]= V138;}
	{register object V140;
	register object V141;
	register object V142;
	register object V143;
	object V144;
	register object V145;
	register object V146;
	register object V147;
	object V148;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V140= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V141= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V142= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V143= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V144= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V145= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V146= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V147= vs_base[0];
	V148= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk61)();
	if(vs_base<vs_top){
	V148= vs_base[0];
	vs_base++;
	}else{
	V148= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	if((base[4])!=Cnil){
	goto T357;}
	base[6]= VV[45];
	base[7]= VV[46];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk68)();
	vs_top=sup;
	goto T357;
T357:;
	V149= list(2,VV[47],base[3]);
	V150= list(2,(V140),list(3,VV[10],Ct,list(4,VV[2],/* INLINE-ARGS */V149,list(2,VV[48],base[3]),base[3])));
	V151= list(2,(V143),Cnil);
	V152= list(2,(V142),Cnil);
	V153= list(2,(V141),small_fixnum(-1));
	V154= list(2,(V145),small_fixnum(0));
	V155= list(2,(V146),small_fixnum(0));
	V156= list(2,(V144),Cnil);
	V157= list(8,/* INLINE-ARGS */V150,/* INLINE-ARGS */V151,/* INLINE-ARGS */V152,/* INLINE-ARGS */V153,/* INLINE-ARGS */V154,/* INLINE-ARGS */V155,/* INLINE-ARGS */V156,list(2,(V147),Cnil));
	V158= list(2,VV[16],list(3,VV[17],(V145),(V146)));
	V159= list(2,VV[27],list(3,VV[13],(V142),list(2,VV[37],(V142))));
	V160= list(2,VV[51],(V141));
	V161= list(3,VV[50],/* INLINE-ARGS */V160,list(3,VV[21],(V145),(V146)));
	V162= list(2,VV[27],list(3,VV[13],(V143),list(2,VV[37],(V143))));
	V163= list(2,VV[27],list(3,VV[13],(V140),list(2,VV[37],(V140))));
	V164= list(3,VV[26],/* INLINE-ARGS */V163,list(3,VV[52],base[2],Cnil));
	V165= list(3,VV[53],(V140),list(2,VV[8],list(2,VV[29],(V140))));
	V166= list(3,VV[13],(V143),list(2,VV[48],list(2,VV[8],list(2,VV[29],(V140)))));
	V167= list(3,VV[54],VV[31],make_cons(VV[48],base[4]));
	V168= list(6,VV[26],/* INLINE-ARGS */V162,/* INLINE-ARGS */V164,/* INLINE-ARGS */V165,/* INLINE-ARGS */V166,list(3,VV[26],/* INLINE-ARGS */V167,list(3,VV[55],(V143),list(2,VV[11],list(2,VV[29],(V143))))));
	V169= list(2,(V146),(V145));
	V170= list(3,VV[56],/* INLINE-ARGS */V169,list(2,VV[15],list(2,VV[29],(V143))));
	V171= list(2,VV[18],list(3,VV[54],VV[6],make_cons(VV[48],base[4])));
	V172= list(2,VV[29],(V140));
	V173= list(3,VV[30],/* INLINE-ARGS */V171,list(2,VV[18],list(3,VV[19],/* INLINE-ARGS */V172,list(2,VV[29],(V143)))));
	V174= list(3,VV[26],/* INLINE-ARGS */V173,list(3,VV[13],(V145),small_fixnum(0)));
	V175= list(2,VV[18],list(3,VV[54],VV[7],make_cons(VV[48],base[4])));
	V176= list(2,VV[29],(V140));
	V177= list(3,VV[57],/* INLINE-ARGS */V175,list(3,VV[19],/* INLINE-ARGS */V176,list(2,VV[29],(V143))));
	V178= list(3,VV[26],/* INLINE-ARGS */V177,list(3,VV[13],(V146),small_fixnum(0)));
	V179= list(2,VV[58],list(3,VV[21],(V145),(V146)));
	V180= list(3,VV[13],(V141),small_fixnum(-1));
	V181= list(4,VV[26],/* INLINE-ARGS */V179,/* INLINE-ARGS */V180,list(2,VV[28],base[2]));
	V182= list(8,VV[26],/* INLINE-ARGS */V161,/* INLINE-ARGS */V168,/* INLINE-ARGS */V170,/* INLINE-ARGS */V174,/* INLINE-ARGS */V178,/* INLINE-ARGS */V181,list(3,VV[13],(V141),small_fixnum(0)));
	V183= list(3,VV[22],(V141),(V145));
	V184= list(3,VV[23],list(2,VV[29],(V143)),(V141));
	V185= list(2,VV[29],(V143));
	V186= list(4,VV[26],/* INLINE-ARGS */V159,/* INLINE-ARGS */V182,list(3,VV[13],(V142),list(4,VV[2],/* INLINE-ARGS */V183,/* INLINE-ARGS */V184,list(3,VV[24],/* INLINE-ARGS */V185,list(3,VV[25],(V141),(V145))))));
	V187= list(2,VV[27],(V142));
	V188= list(3,VV[26],/* INLINE-ARGS */V187,list(2,VV[28],base[2]));
	V189= list(2,(V144),(V147));
	V190= list(2,VV[35],list(2,VV[29],(V142)));
	V191= list(3,VV[56],/* INLINE-ARGS */V189,list(3,VV[34],/* INLINE-ARGS */V190,list(2,VV[29],(V140))));
	V192= list(2,VV[18],list(3,VV[19],(V147),VV[31]));
	V193= list(2,VV[29],(V140));
	V194= list(3,VV[57],/* INLINE-ARGS */V192,list(2,VV[18],list(3,VV[19],/* INLINE-ARGS */V193,list(2,VV[29],(V143)))));
	V195= list(6,VV[36],base[2],/* INLINE-ARGS */V186,/* INLINE-ARGS */V188,/* INLINE-ARGS */V191,list(3,VV[26],/* INLINE-ARGS */V194,list(2,VV[28],base[2])));
	V196= list(2,VV[29],(V142));
	V197= list(4,base[2],Cnil,/* INLINE-ARGS */V195,list(5,VV[59],VV[60],/* INLINE-ARGS */V196,(V147),list(2,VV[29],(V140))));
	V198= make_cons(/* INLINE-ARGS */V197,Cnil);
	base[6]= list(4,VV[1],/* INLINE-ARGS */V157,/* INLINE-ARGS */V158,listA(3,VV[49],/* INLINE-ARGS */V198,append((V148),base[5])));
	vs_top=(vs_base=base+6)+1;
	return;}
}
static void LnkT68(){ call_or_link(VV[68],(void **)(void *)&Lnk68);} /* SPECIFIC-ERROR */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],(void **)(void *)&LnkLI67,1,first,ap);va_end(ap);return V1;} /* PRINT-SYMBOL-APROPOS */
static void LnkT66(){ call_or_link(VV[66],(void **)(void *)&Lnk66);} /* APROPOS-LIST */
static void LnkT65(){ call_or_link(VV[65],(void **)(void *)&Lnk65);} /* STABLE-SORT */
static object  LnkTLI63(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[63],(void **)(void *)&LnkLI63,first,ap);va_end(ap);return V1;} /* DELETE-DUPLICATES */
static object  LnkTLI62(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[62],(void **)(void *)&LnkLI62,2,first,ap);va_end(ap);return V1;} /* SUBSTRINGP */
static void LnkT15(){ call_or_link(VV[15],(void **)(void *)&Lnk15);} /* PACKAGE-SIZE */
static void LnkT61(){ call_or_link(VV[61],(void **)(void *)&Lnk61);} /* FIND-DECLARATIONS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

