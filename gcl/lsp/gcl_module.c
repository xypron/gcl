
#include "cmpinclude.h"
#include "gcl_module.h"
void init_gcl_module(){do_init(VV);}
/*	local entry for function PROVIDE	*/

static object LI1(V2)

object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= coerce_to_string((V2));
	base[1]= symbol_value(VV[0]);
	base[2]= VV[1];
	base[3]= symbol_function(VV[13]);
	vs_top=(vs_base=base+0)+4;
	Ladjoin();
	vs_top=sup;
	setq(VV[0],vs_base[0]);
	{object V3 = symbol_value(VV[0]);
	VMR1(V3)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for REQUIRE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	bds_check;
	{object V4;
	object V5;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V4=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T6;}
	V5=(base[1]);
	vs_top=sup;
	goto T7;
	goto T6;
T6:;
	base[2]= coerce_to_string((V4));
	vs_top=(vs_base=base+2)+1;
	Lstring_downcase();
	vs_top=sup;
	V5= vs_base[0];
	goto T7;
T7:;
	bds_bind(VV[2],VV[3]);
	base[3]= coerce_to_string((V4));
	base[4]= symbol_value(VV[0]);
	base[5]= VV[1];
	base[6]= symbol_function(VV[13]);
	vs_top=(vs_base=base+3)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T11;}
	if(!(type_of((V5))!=t_cons)){
	goto T18;}
	base[3]= (V5);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk14)();
	bds_unwind1;
	return;
	goto T18;
T18:;
	{register object V6;
	V6= (V5);
	goto T22;
T22:;
	if(!(endp_prop((V6)))){
	goto T23;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	goto T23;
T23:;
	base[3]= car((V6));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk14)();
	vs_top=sup;
	V6= cdr((V6));
	goto T22;}
	goto T11;
T11:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function DOCUMENTATION	*/

static object LI3(V9,V10)

register object V9;object V10;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V11= (V10);
	if((V11!= VV[15]))goto T32;
	{object V12 = get((V9),VV[4],Cnil);
	VMR3(V12)}
	goto T32;
T32:;
	if((V11!= VV[16]))goto T33;
	{object V13 = get((V9),VV[5],Cnil);
	VMR3(V13)}
	goto T33;
T33:;
	if((V11!= VV[17]))goto T34;
	{object V14 = get((V9),VV[6],Cnil);
	VMR3(V14)}
	goto T34;
T34:;
	if((V11!= VV[18]))goto T35;
	{object V15 = get((V9),VV[7],Cnil);
	VMR3(V15)}
	goto T35;
T35:;
	if((V11!= VV[19]))goto T36;
	{object V16 = get((V9),VV[8],Cnil);
	VMR3(V16)}
	goto T36;
T36:;
	base[0]= (V9);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T38;}
	base[1]= (V9);
	vs_top=(vs_base=base+1)+1;
	Lpackage_name();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= VV[9];
	vs_top=(vs_base=base+0)+2;
	Lfind_symbol();
	vs_top=sup;
	V17= vs_base[0];
	{object V18 = get(V17,VV[10],Cnil);
	VMR3(V18)}
	goto T38;
T38:;
	base[0]= VV[11];
	base[1]= (V10);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V19 = vs_base[0];
	VMR3(V19)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-DOCUMENTATION	*/

static object LI4(V21)

register object V21;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(endp_prop((V21))){
	goto T47;}
	if(!(endp_prop(cdr((V21))))){
	goto T48;}
	goto T47;
T47:;
	{object V22 = Cnil;
	VMR4(V22)}
	goto T48;
T48:;
	{register object V23;
	base[0]= car((V21));
	vs_top=(vs_base=base+0)+1;
	Lmacroexpand();
	vs_top=sup;
	V23= vs_base[0];
	if(!(type_of((V23))==t_string)){
	goto T55;}
	{object V24 = (V23);
	VMR4(V24)}
	goto T55;
T55:;
	if(!(type_of((V23))==t_cons)){
	goto T58;}
	if(!((car((V23)))==(VV[12]))){
	goto T58;}
	V21= cdr((V21));
	goto TTL;
	goto T58;
T58:;
	{object V25 = Cnil;
	VMR4(V25)}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT14(){ call_or_link(VV[14],(void **)(void *)&Lnk14);} /* LOAD */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

