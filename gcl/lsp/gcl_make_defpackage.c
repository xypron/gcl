
#include "cmpinclude.h"
#include "gcl_make_defpackage.h"
void init_gcl_make_defpackage(){do_init(VV);}
/*	local entry for function MAKE-DEFPACKAGE-FORM	*/

static object LI1(V2)

object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{object V3;
	base[0]= (V2);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V3= vs_base[0];
	{object V4;
	object V5;
	object V6;
	object V7;
	object V8;
	object V9;
	object V10;
	object V11;
	object V12;
	object V13;
	base[5]= (V3);
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	V4= vs_base[0];
	base[5]= (V3);
	vs_top=(vs_base=base+5)+1;
	Lpackage_nicknames();
	vs_top=sup;
	V5= vs_base[0];
	base[5]= (V3);
	vs_top=(vs_base=base+5)+1;
	Lpackage_use_list();
	vs_top=sup;
	V6= vs_base[0];
	{object V14;
	object V15= (V6);
	if(V15==Cnil){
	V7= Cnil;
	goto T9;}
	base[5]=V14=MMcons(Cnil,Cnil);
	goto T10;
T10:;
	base[6]= (V15->c.c_car);
	vs_top=(vs_base=base+6)+1;
	Lpackage_name();
	vs_top=sup;
	(V14->c.c_car)= vs_base[0];
	if((V15=MMcdr(V15))==Cnil){
	V7= base[5];
	goto T9;}
	V14=MMcdr(V14)=MMcons(Cnil,Cnil);
	goto T10;}
	goto T9;
T9:;
	V8= Cnil;
	base[5]= (V3);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk8)();
	vs_top=sup;
	V9= vs_base[0];
	V10= Cnil;
	V11= Cnil;
	V12= Cnil;
	V13= Cnil;
	{object V16;
	object V17;
	register object V18;
	base[5]= V3;
	vs_top=(vs_base=base+5)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T23;}
	V16= V3;
	goto T21;
	goto T23;
T23:;
	base[5]= coerce_to_string(V3);
	vs_top=(vs_base=base+5)+1;
	Lfind_package();
	vs_top=sup;
	V16= vs_base[0];
	goto T21;
T21:;
	V17= Cnil;
	V18= Cnil;
	{object V20;
	object V21;
	base[6]= (V16);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk9)();
	vs_top=sup;
	V20= vs_base[0];
	V21= small_fixnum(0);
	goto T31;
T31:;
	if(!(number_compare((V21),(V20))>=0)){
	goto T32;}
	V17= Cnil;
	goto T20;
	goto T32;
T32:;
	base[6]= (V16);
	base[7]= (V21);
	vs_top=(vs_base=base+6)+2;
	siLpackage_external();
	vs_top=sup;
	V18= vs_base[0];
	goto T39;
T39:;
	if(((V18))!=Cnil){
	goto T44;}
	goto T40;
	goto T44;
T44:;
	V17= CMPcar((V18));
	{object V22;
	V22= symbol_name((V17));
	V8= make_cons((V22),(V8));}
	V18= CMPcdr((V18));
	goto T39;
	goto T40;
T40:;
	goto T37;
	goto T37;
T37:;
	V21= one_plus((V21));
	goto T31;}}
	goto T20;
T20:;
	{register object V23;
	register object V24;
	register object V25;
	base[5]= V3;
	vs_top=(vs_base=base+5)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T60;}
	V23= V3;
	goto T58;
	goto T60;
T60:;
	base[5]= coerce_to_string(V3);
	vs_top=(vs_base=base+5)+1;
	Lfind_package();
	vs_top=sup;
	V23= vs_base[0];
	goto T58;
T58:;
	V24= Cnil;
	V25= Cnil;
	{object V27;
	register object V28;
	base[7]= (V23);
	vs_top=(vs_base=base+7)+1;
	Lpackage_use_list();
	vs_top=sup;
	V29= vs_base[0];
	V27= make_cons((V23),V29);
	V28= CMPcar((V27));
	goto T69;
T69:;
	if(!(((V27))==Cnil)){
	goto T70;}
	V24= Cnil;
	goto T57;
	goto T70;
T70:;
	{long V30;
	long V31;
	base[7]= (V28);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk9)();
	if(vs_base>=vs_top){vs_top=sup;goto T79;}
	V30= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T80;}
	V31= fix(vs_base[0]);
	vs_top=sup;
	goto T81;
	goto T79;
T79:;
	V30= fix(Cnil);
	goto T80;
T80:;
	V31= fix(Cnil);
	goto T81;
T81:;
	if(((V23))==((V28))){
	goto T82;}
	V31= 0;
	goto T82;
T82:;
	{object V32;
	register object V33;
	V34 = CMPmake_fixnum(V31);
	V35 = CMPmake_fixnum(V30);
	V32= number_plus(V34,V35);
	V33= small_fixnum(0);
	goto T89;
T89:;
	if(!(number_compare((V33),(V32))>=0)){
	goto T90;}
	goto T76;
	goto T90;
T90:;
	V36 = CMPmake_fixnum(V31);
	if(!(number_compare((V33),V36)<0)){
	goto T99;}
	base[8]= (V28);
	base[9]= (V33);
	vs_top=(vs_base=base+8)+2;
	siLpackage_internal();
	vs_top=sup;
	V25= vs_base[0];
	goto T97;
	goto T99;
T99:;
	base[8]= (V28);
	V37 = CMPmake_fixnum(V31);
	base[9]= number_minus((V33),V37);
	vs_top=(vs_base=base+8)+2;
	siLpackage_external();
	vs_top=sup;
	V25= vs_base[0];
	goto T97;
T97:;
	goto T95;
T95:;
	if(((V25))!=Cnil){
	goto T105;}
	goto T96;
	goto T105;
T105:;
	V24= CMPcar((V25));
	if(((V28))==((V23))){
	goto T111;}
	base[9]= symbol_name((V24));
	base[10]= (V23);
	vs_top=(vs_base=base+9)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	Llast();
	vs_top=sup;
	V38= vs_base[0];
	if(!((VV[0])==(CMPcar(V38)))){
	goto T110;}
	goto T111;
T111:;
	base[8]= (V24);
	vs_top=(vs_base=base+8)+1;
	Lsymbol_package();
	vs_top=sup;
	V39= vs_base[0];
	if(((V3))==(V39)){
	goto T120;}
	base[8]= (V24);
	vs_top=(vs_base=base+8)+1;
	Lsymbol_package();
	vs_top=sup;
	V40= vs_base[0];
	if(((VFUN_NARGS=2,(*(LnkLI10))(V40,(V6))))!=Cnil){
	goto T120;}
	V10= make_cons(V24,(V10));
	goto T120;
T120:;
	goto T110;
T110:;
	V25= CMPcdr((V25));
	goto T95;
	goto T96;
T96:;
	goto T93;
	goto T93;
T93:;
	V33= one_plus((V33));
	goto T89;}}
	goto T76;
T76:;
	V27= CMPcdr((V27));
	V28= CMPcar((V27));
	goto T69;}}
	goto T57;
T57:;
	V11= (VFUN_NARGS=2,(*(LnkLI11))((V9),(V10)));
	V12= (VFUN_NARGS=2,(*(LnkLI12))((V9),(V11)));
	V13= (VFUN_NARGS=2,(*(LnkLI12))((V10),(V11)));
	if(((V5))==Cnil){
	goto T149;}
	V43= make_cons(VV[2],(V5));
	base[5]= make_cons(/* INLINE-ARGS */V43,Cnil);
	goto T147;
	goto T149;
T149:;
	base[5]= Cnil;
	goto T147;
T147:;
	if(((V7))==Cnil){
	goto T153;}
	V44= make_cons(VV[3],(V7));
	base[6]= make_cons(/* INLINE-ARGS */V44,Cnil);
	goto T151;
	goto T153;
T153:;
	base[6]= Cnil;
	goto T151;
T151:;
	if(((V8))==Cnil){
	goto T157;}
	V45= make_cons(VV[4],(V8));
	base[7]= make_cons(/* INLINE-ARGS */V45,Cnil);
	goto T155;
	goto T157;
T157:;
	base[7]= Cnil;
	goto T155;
T155:;
	if(((V12))==Cnil){
	goto T161;}
	{object V47;
	object V48= (V12);
	if(V48==Cnil){
	V46= Cnil;
	goto T163;}
	base[9]=V47=MMcons(Cnil,Cnil);
	goto T164;
T164:;
	(V47->c.c_car)= symbol_name((V48->c.c_car));
	if((V48=MMcdr(V48))==Cnil){
	V46= base[9];
	goto T163;}
	V47=MMcdr(V47)=MMcons(Cnil,Cnil);
	goto T164;}
	goto T163;
T163:;
	V49= make_cons(VV[5],V46);
	base[8]= make_cons(/* INLINE-ARGS */V49,Cnil);
	goto T159;
	goto T161;
T161:;
	base[8]= Cnil;
	goto T159;
T159:;
	if(((V11))==Cnil){
	goto T168;}
	{object V50;
	object V51= (V11);
	if(V51==Cnil){
	base[9]= Cnil;
	goto T166;}
	base[10]=V50=MMcons(Cnil,Cnil);
	goto T170;
T170:;
	base[12]= (V51->c.c_car);
	vs_top=(vs_base=base+12)+1;
	Lsymbol_package();
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	Lpackage_name();
	vs_top=sup;
	V53= vs_base[0];
	V54= list(3,VV[6],V53,symbol_name((V51->c.c_car)));
	(V50->c.c_car)= make_cons(/* INLINE-ARGS */V54,Cnil);
	if((V51=MMcdr(V51))==Cnil){
	base[9]= base[10];
	goto T166;}
	V50=MMcdr(V50)=MMcons(Cnil,Cnil);
	goto T170;}
	goto T168;
T168:;
	base[9]= Cnil;
	goto T166;
T166:;
	if(((V13))==Cnil){
	goto T177;}
	{object V55;
	object V56= (V13);
	if(V56==Cnil){
	base[10]= Cnil;
	goto T175;}
	base[11]=V55=MMcons(Cnil,Cnil);
	goto T179;
T179:;
	base[13]= (V56->c.c_car);
	vs_top=(vs_base=base+13)+1;
	Lsymbol_package();
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+12)+1;
	Lpackage_name();
	vs_top=sup;
	V58= vs_base[0];
	V59= list(3,VV[7],V58,symbol_name((V56->c.c_car)));
	(V55->c.c_car)= make_cons(/* INLINE-ARGS */V59,Cnil);
	if((V56=MMcdr(V56))==Cnil){
	base[10]= base[11];
	goto T175;}
	V55=MMcdr(V55)=MMcons(Cnil,Cnil);
	goto T179;}
	goto T177;
T177:;
	base[10]= Cnil;
	goto T175;
T175:;
	vs_top=(vs_base=base+5)+6;
	Lappend();
	vs_top=sup;
	V42= vs_base[0];
	{object V60 = listA(3,VV[1],(V4),V42);
	VMR1(V60)}}}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI12(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[12],(void **)(void *)&LnkLI12,first,ap);va_end(ap);return V1;} /* SET-DIFFERENCE */
static object  LnkTLI11(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[11],(void **)(void *)&LnkLI11,first,ap);va_end(ap);return V1;} /* INTERSECTION */
static object  LnkTLI10(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[10],(void **)(void *)&LnkLI10,first,ap);va_end(ap);return V1;} /* FIND */
static void LnkT9(){ call_or_link(VV[9],(void **)(void *)&Lnk9);} /* PACKAGE-SIZE */
static void LnkT8(){ call_or_link(VV[8],(void **)(void *)&Lnk8);} /* PACKAGE-SHADOWING-SYMBOLS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

