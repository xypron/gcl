
#include "cmpinclude.h"
#include "gcl_seqlib.h"
void init_gcl_seqlib(){do_init(VV);}
/*	local entry for function SEQTYPE	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	if(!(type_of((V2))==t_cons||((V2))==Cnil)){
	goto T2;}
	{object V3 = VV[0];
	VMR1(V3)}
	goto T2;
T2:;
	if(!(type_of((V2))==t_string)){
	goto T5;}
	{object V4 = VV[1];
	VMR1(V4)}
	goto T5;
T5:;
	if(!((type_of((V2))==t_bitvector))){
	goto T8;}
	{object V5 = VV[2];
	VMR1(V5)}
	goto T8;
T8:;
	if(!(type_of((V2))==t_vector||
type_of((V2))==t_string||
type_of((V2))==t_bitvector)){
	goto T11;}
	base[0]= (V2);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V6= vs_base[0];
	{object V7 = list(2,VV[3],V6);
	VMR1(V7)}
	goto T11;
T11:;
	base[0]= VV[4];
	base[1]= (V2);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V8 = vs_base[0];
	VMR1(V8)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CALL-TEST	*/

static object LI2(V13,V14,V15,V16)

object V13;object V14;object V15;object V16;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(((V13))==Cnil){
	goto T18;}
	base[0]= (V15);
	base[1]= (V16);
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V13));
	vs_top=sup;
	{object V17 = vs_base[0];
	VMR2(V17)}
	goto T18;
T18:;
	if(((V14))==Cnil){
	goto T23;}
	base[0]= (V15);
	base[1]= (V16);
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V14));
	vs_top=sup;
	V18= vs_base[0];
	{object V19 = ((V18)==Cnil?Ct:Cnil);
	VMR2(V19)}
	goto T23;
T23:;
	{object V20 = (eql((V15),(V16))?Ct:Cnil);
	VMR2(V20)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-SEQ-START-END	*/

static object LI3(V23,V24)

object V23;object V24;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V23))==t_fixnum)){
	goto T29;}
	if(type_of((V24))==t_fixnum){
	goto T28;}
	goto T29;
T29:;
	base[0]= VV[5];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T28;
T28:;
	if(!((fix((V23)))>(fix((V24))))){
	goto T35;}
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V25 = vs_base[0];
	VMR3(V25)}
	goto T35;
T35:;
	{object V26 = Cnil;
	VMR3(V26)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TEST-ERROR	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	base[0]= VV[7];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V27 = vs_base[0];
	VMR4(V27)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for BAD-SEQ-LIMIT	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V28;
	object V29;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V28=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T39;}
	V29=(base[1]);
	vs_top=sup;
	goto T40;
	goto T39;
T39:;
	V29= Cnil;
	goto T40;
T40:;
	base[2]= VV[8];
	base[3]= VV[9];
	if(((V29))==Cnil){
	goto T46;}
	base[4]= list(2,(V28),(V29));
	goto T44;
	goto T46;
T46:;
	base[4]= (V28);
	goto T44;
T44:;
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk32)();
	return;
	}
}
/*	local entry for function THE-END	*/

static object LI6(V32,V33)

register object V32;object V33;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(!(type_of((V32))==t_fixnum)){
	goto T49;}
	if(!((fix((V32)))<=((long)length((V33))))){
	goto T52;}
	goto T51;
	goto T52;
T52:;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T51;
T51:;
	{long V34 = fix((V32));
	VMR6((object)V34)}
	goto T49;
T49:;
	if(((V32))!=Cnil){
	goto T56;}
	{long V35 = (long)length((V33));
	VMR6((object)V35)}
	goto T56;
T56:;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	{long V36 = fix(vs_base[0]);
	VMR6((object)V36)}
	base[0]=base[0];
}
/*	local entry for function THE-START	*/

static object LI7(V38)

register object V38;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(!(type_of((V38))==t_fixnum)){
	goto T60;}
	if(!((fix((V38)))>=(0))){
	goto T63;}
	goto T62;
	goto T63;
T63:;
	base[0]= (V38);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T62;
T62:;
	{long V39 = fix((V38));
	VMR7((object)V39)}
	goto T60;
T60:;
	if(((V38))!=Cnil){
	goto T67;}
	{long V40 = 0;
	VMR7((object)V40)}
	goto T67;
T67:;
	base[0]= (V38);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	{long V41 = fix(vs_base[0]);
	VMR7((object)V41)}
	base[0]=base[0];
}
/*	function definition for REDUCE	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{register object V42;
	register object V43;
	object V44;
	object V45;
	object V46;
	object V47;
	object V48;
	register object V49;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,FALSE,FALSE,5,VV[11],VV[14],VV[15],VV[34],VV[17]);
	V42=(base[0]);
	V43=(base[1]);
	vs_top=sup;
	V44=(base[2]);
	V45=(base[3]);
	V46=(base[4]);
	V47=(base[5]);
	V48=(base[10]);
	if(base[11]==Cnil){
	V49= symbol_function(VV[35]);
	}else{
	V49=(base[6]);}
	{register long V50;
	if(((V45))==Cnil){
	goto T73;}
	V50= (long)(*(LnkLI36))((V45));
	goto T71;
	goto T73;
T73:;
	V50= 0;
	goto T71;
T71:;
	{register long V51;
	V51= (long)(*(LnkLI37))((V46),(V43));
	if(!((V50)<=(V51))){
	goto T77;}
	goto T76;
	goto T77;
T77:;
	base[12]= make_fixnum(V50);
	base[13]= make_fixnum(V51);
	vs_top=(vs_base=base+12)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T76;
T76:;
	if(((V44))!=Cnil){
	goto T82;}
	if(((V48))!=Cnil){
	goto T84;}
	if(!((V50)>=(V51))){
	goto T87;}
	vs_base=vs_top;
	super_funcall_no_event((V42));
	return;
	goto T87;
T87:;
	V52= elt((V43),V50);
	V47= (
	(type_of((V49)) == t_sfun ?(*(((V49))->sfn.sfn_self)):
	(fcall.fun=((V49)),fcall.argd=1,fcalln))(/* INLINE-ARGS */V52));
	V50= (long)(1)+(V50);
	goto T84;
T84:;
	{register object V53;
	V53= (V47);
	goto T94;
T94:;
	if(!((V50)>=(V51))){
	goto T95;}
	base[12]= (V53);
	vs_top=(vs_base=base+12)+1;
	return;
	goto T95;
T95:;
	{object V55;
	V55= elt((V43),V50);
	V50= (long)(1)+(V50);
	base[12]= (V55);}
	vs_top=(vs_base=base+12)+1;
	super_funcall_no_event((V49));
	vs_top=sup;
	V54= vs_base[0];
	V53= (
	(type_of((V42)) == t_sfun ?(*(((V42))->sfn.sfn_self)):
	(fcall.fun=((V42)),fcall.argd=2,fcalln))((V53),V54));
	goto T94;}
	goto T82;
T82:;
	if(((V48))!=Cnil){
	goto T107;}
	if(!((V50)>=(V51))){
	goto T110;}
	vs_base=vs_top;
	super_funcall_no_event((V42));
	return;
	goto T110;
T110:;
	V51= (long)(V51)+(-1);
	V56= elt((V43),V51);
	V47= (
	(type_of((V49)) == t_sfun ?(*(((V49))->sfn.sfn_self)):
	(fcall.fun=((V49)),fcall.argd=1,fcalln))(/* INLINE-ARGS */V56));
	goto T107;
T107:;
	{register object V57;
	V57= (V47);
	goto T117;
T117:;
	if(!((V50)>=(V51))){
	goto T118;}
	base[12]= (V57);
	vs_top=(vs_base=base+12)+1;
	return;
	goto T118;
T118:;
	V51= (long)(-1)+(V51);
	base[12]= elt((V43),V51);
	vs_top=(vs_base=base+12)+1;
	super_funcall_no_event((V49));
	vs_top=sup;
	V58= vs_base[0];
	V57= (
	(type_of((V42)) == t_sfun ?(*(((V42))->sfn.sfn_self)):
	(fcall.fun=((V42)),fcall.argd=2,fcalln))(V58,(V57)));
	goto T117;}}}
	}
}
/*	local entry for function FILL	*/

static object LI9(object V60,object V59,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{register object V61;
	register object V62;
	object V63;
	object V64;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V61= V60;
	V62= V59;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI9key,first,ap);
	V63=(Vcs[2]);
	V64=(Vcs[3]);
	{long V65;
	if(((V63))==Cnil){
	goto T131;}
	V65= (long)(*(LnkLI36))((V63));
	goto T129;
	goto T131;
T131:;
	V65= 0;
	goto T129;
T129:;
	{register long V66;
	V66= (long)(*(LnkLI37))((V64),(V61));
	if(!((V65)<=(V66))){
	goto T135;}
	goto T134;
	goto T135;
T135:;
	base[0]= make_fixnum(V65);
	base[1]= make_fixnum(V66);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T134;
T134:;
	{register long V67;
	V67= V65;
	goto T141;
T141:;
	if(!((V67)>=(V66))){
	goto T142;}
	{object V68 = (V61);
	VMR9(V68)}
	goto T142;
T142:;
	(void)(elt_set((V61),V67,(V62)));
	V67= (long)(1)+(V67);
	goto T141;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REPLACE	*/

static object LI10(object V70,object V69,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{register object V71;
	object V72;
	object V73;
	object V74;
	object V75;
	object V76;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V71= V70;
	V72= V69;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI10key,first,ap);
	V73=(Vcs[2]);
	V74=(Vcs[3]);
	V75=(Vcs[4]);
	V76=(Vcs[5]);
	{long V77;
	if(((V73))==Cnil){
	goto T152;}
	V77= (long)(*(LnkLI36))((V73));
	goto T150;
	goto T152;
T152:;
	V77= 0;
	goto T150;
T150:;
	{long V78;
	V78= (long)(*(LnkLI37))((V74),(V71));
	if(!((V77)<=(V78))){
	goto T156;}
	goto T155;
	goto T156;
T156:;
	base[0]= make_fixnum(V77);
	base[1]= make_fixnum(V78);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T155;
T155:;
	{long V79;
	if(((V75))==Cnil){
	goto T162;}
	V79= (long)(*(LnkLI36))((V75));
	goto T160;
	goto T162;
T162:;
	V79= 0;
	goto T160;
T160:;
	{long V80;
	V80= (long)(*(LnkLI37))((V76),(V72));
	if(!((V79)<=(V80))){
	goto T166;}
	goto T165;
	goto T166;
T166:;
	base[0]= make_fixnum(V79);
	base[1]= make_fixnum(V80);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T165;
T165:;
	if(!(((V71))==((V72)))){
	goto T171;}
	if(!((V77)>(V79))){
	goto T171;}
	{register long V81;
	long V82;
	register long V83;
	register long V84;
	V81= 0;
	if(!(((long)(V78)-(V77))<((long)(V80)-(V79)))){
	goto T178;}
	V82= (long)(V78)-(V77);
	goto T176;
	goto T178;
T178:;
	V82= (long)(V80)-(V79);
	goto T176;
T176:;
	V83= (long)(V77)+((long)(-1)+(V82));
	V84= (long)(V79)+((long)(-1)+(V82));
	goto T183;
T183:;
	if(!((V81)>=(V82))){
	goto T184;}
	{object V85 = (V71);
	VMR10(V85)}
	goto T184;
T184:;
	V86= elt((V72),V84);
	(void)(elt_set((V71),V83,/* INLINE-ARGS */V86));
	V81= (long)(1)+(V81);
	V83= (long)(-1)+(V83);
	V84= (long)(-1)+(V84);
	goto T183;}
	goto T171;
T171:;
	{register long V87;
	long V88;
	register long V89;
	register long V90;
	V87= 0;
	if(!(((long)(V78)-(V77))<((long)(V80)-(V79)))){
	goto T199;}
	V88= (long)(V78)-(V77);
	goto T197;
	goto T199;
T199:;
	V88= (long)(V80)-(V79);
	goto T197;
T197:;
	V89= V77;
	V90= V79;
	goto T204;
T204:;
	if(!((V87)>=(V88))){
	goto T205;}
	{object V91 = (V71);
	VMR10(V91)}
	goto T205;
T205:;
	V92= elt((V72),V90);
	(void)(elt_set((V71),V89,/* INLINE-ARGS */V92));
	V87= (long)(1)+(V87);
	V89= (long)(1)+(V89);
	V90= (long)(1)+(V90);
	goto T204;}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REMOVE	*/

static object LI11(object V94,object V93,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V95;
	object V96;
	object V97;
	object V98;
	object V99;
	object V100;
	object V101;
	object V102;
	object V103;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V95= V94;
	V96= V93;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI11key,first,ap);
	V97=(Vcs[2]);
	V98=(Vcs[3]);
	V99=(Vcs[4]);
	V100=(Vcs[5]);
	V101=(Vcs[6]);
	V102=(Vcs[7]);
	if(Vcs[8]==0){
	V103= symbol_function(VV[35]);
	}else{
	V103=(Vcs[8]);}
	if(!(((V103))==(Cnil))){
	goto T216;}
	V103= symbol_function(VV[35]);
	goto T216;
T216:;
	{long V104;
	if(((V100))==Cnil){
	goto T222;}
	V104= (long)(*(LnkLI36))((V100));
	goto T220;
	goto T222;
T222:;
	V104= 0;
	goto T220;
T220:;
	{long V105;
	V105= (long)(*(LnkLI37))((V101),(V96));
	if(!((V104)<=(V105))){
	goto T226;}
	goto T225;
	goto T226;
T226:;
	base[0]= make_fixnum(V104);
	base[1]= make_fixnum(V105);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T225;
T225:;
	{IDECL(GEN V106,V106space,V106alloc);
	if(((V102))!=Cnil){
	goto T232;}
	ISETQ_FIX(V106,V106alloc,2147483647);
	goto T230;
	goto T232;
T232:;SETQ_IO(V106,V106alloc,(V102));
	goto T230;
T230:;
	if((V98)==Cnil){
	goto T235;}
	if((V99)==Cnil){
	goto T235;}
	(void)((*(LnkLI42))());
	goto T235;
T235:;
	if(((V97))!=Cnil){
	goto T237;}
	if(!(type_of((V96))==t_cons||((V96))==Cnil)){
	goto T240;}
	{register object V107;
	register object V108;
	V107= (V96);
	V108= Cnil;
	{register long V109;
	V109= 0;
	goto T245;
T245:;
	if(!((V109)>=(V104))){
	goto T246;}
	goto T242;
	goto T246;
T246:;
	{register object V110;
	V110= car((V107));
	V108= make_cons((V110),(V108));}
	{register object V111;
	V111= car((V107));
	V107= cdr((V107));}
	V109= (long)(1)+(V109);
	goto T245;}
	goto T242;
T242:;
	{register long V112;
	register long V113;
	V112= V104;
	V113= 0;
	goto T263;
T263:;
	if((V112)>=(V105)){
	goto T265;}
	V114 = make_fixnum(V113);
	V115 = make_integer(V106);
	if(number_compare(V114,V115)>=0){
	goto T265;}
	if(!(endp_prop((V107)))){
	goto T264;}
	goto T265;
T265:;
	base[0]= (V108);
	base[1]= (V107);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V116 = vs_base[0];
	VMR11(V116)}
	goto T264;
T264:;
	base[0]= car((V107));
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V103));
	vs_top=sup;
	V117= vs_base[0];
	if(((*(LnkLI43))((V98),(V99),(V95),V117))==Cnil){
	goto T276;}
	V113= (long)(1)+(V113);
	{register object V118;
	V118= car((V107));
	V107= cdr((V107));
	goto T274;}
	goto T276;
T276:;
	{register object V119;
	V119= car((V107));
	V108= make_cons((V119),(V108));}
	{register object V120;
	V120= car((V107));
	V107= cdr((V107));}
	goto T274;
T274:;
	V112= (long)(1)+(V112);
	goto T263;}}
	goto T240;
T240:;
	V121 = make_fixnum(V104);
	V122 = make_fixnum(V105);
	V123 = make_integer(V106);
	{object V124 = (VFUN_NARGS=16,(*(LnkLI44))((V95),(V96),VV[11],(V97),VV[12],(V98),VV[13],(V99),VV[14],V121,VV[15],V122,VV[16],V123,VV[17],(V103)));
	VMR11(V124)}
	goto T237;
T237:;
	V125 = make_fixnum(V104);
	V126 = make_fixnum(V105);
	V127 = make_integer(V106);
	{object V128 = (VFUN_NARGS=16,(*(LnkLI44))((V95),(V96),VV[11],(V97),VV[12],(V98),VV[13],(V99),VV[14],V125,VV[15],V126,VV[16],V127,VV[17],(V103)));
	VMR11(V128)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function REMOVE-IF	*/

static object LI12(object V130,object V129,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V131;
	object V132;
	object V133;
	object V134;
	object V135;
	object V136;
	object V137;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V131= V130;
	V132= V129;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI12key,first,ap);
	V133=(Vcs[2]);
	V134=(Vcs[3]);
	V135=(Vcs[4]);
	V136=(Vcs[5]);
	if(Vcs[6]==0){
	V137= symbol_function(VV[35]);
	}else{
	V137=(Vcs[6]);}
	if(!(((V137))==(Cnil))){
	goto T295;}
	V137= symbol_function(VV[35]);
	goto T295;
T295:;
	V138= symbol_function(VV[46]);
	{object V139 = (VFUN_NARGS=14,(*(LnkLI45))((V131),(V132),VV[11],(V133),VV[12],V138,VV[14],(V134),VV[15],(V135),VV[16],(V136),VV[17],(V137)));
	VMR12(V139)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function REMOVE-IF-NOT	*/

static object LI13(object V141,object V140,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V142;
	object V143;
	object V144;
	object V145;
	object V146;
	object V147;
	object V148;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V142= V141;
	V143= V140;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI13key,first,ap);
	V144=(Vcs[2]);
	V145=(Vcs[3]);
	V146=(Vcs[4]);
	V147=(Vcs[5]);
	if(Vcs[6]==0){
	V148= symbol_function(VV[35]);
	}else{
	V148=(Vcs[6]);}
	if(!(((V148))==(Cnil))){
	goto T301;}
	V148= symbol_function(VV[35]);
	goto T301;
T301:;
	V149= symbol_function(VV[46]);
	{object V150 = (VFUN_NARGS=14,(*(LnkLI45))((V142),(V143),VV[11],(V144),VV[13],V149,VV[14],(V145),VV[15],(V146),VV[16],(V147),VV[17],(V148)));
	VMR13(V150)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function DELETE	*/

static object LI14(object V152,object V151,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V153;
	register object V154;
	object V155;
	object V156;
	object V157;
	object V158;
	object V159;
	object V160;
	object V161;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V153= V152;
	V154= V151;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI14key,first,ap);
	V155=(Vcs[2]);
	V156=(Vcs[3]);
	V157=(Vcs[4]);
	V158=(Vcs[5]);
	V159=(Vcs[6]);
	V160=(Vcs[7]);
	if(Vcs[8]==0){
	V161= symbol_function(VV[35]);
	}else{
	V161=(Vcs[8]);}
	{long V162;
	V162= (long)length((V154));
	if(!(((V161))==(Cnil))){
	goto T308;}
	V161= symbol_function(VV[35]);
	goto T308;
T308:;
	{register long V163;
	if(((V158))==Cnil){
	goto T314;}
	V163= (long)(*(LnkLI36))((V158));
	goto T312;
	goto T314;
T314:;
	V163= 0;
	goto T312;
T312:;
	{long V164;
	V164= (long)(*(LnkLI37))((V159),(V154));
	if(!((V163)<=(V164))){
	goto T318;}
	goto T317;
	goto T318;
T318:;
	base[0]= make_fixnum(V163);
	base[1]= make_fixnum(V164);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T317;
T317:;
	{IDECL(register GEN V165,V165space,V165alloc);
	if(((V160))!=Cnil){
	goto T324;}
	ISETQ_FIX(V165,V165alloc,2147483647);
	goto T322;
	goto T324;
T324:;SETQ_IO(V165,V165alloc,(V160));
	goto T322;
T322:;
	if((V156)==Cnil){
	goto T327;}
	if((V157)==Cnil){
	goto T327;}
	(void)((*(LnkLI42))());
	goto T327;
T327:;
	if(((V155))!=Cnil){
	goto T329;}
	if(!(type_of((V154))==t_cons||((V154))==Cnil)){
	goto T332;}
	{object V166;
	register object V167;
	V166= make_cons(Cnil,(V154));
	V167= (V166);
	{long V168;
	V168= 0;
	goto T339;
T339:;
	if(!((V168)>=(V163))){
	goto T340;}
	goto T336;
	goto T340;
T340:;
	{object V169;
	V169= car((V167));
	V167= cdr((V167));}
	V168= (long)(1)+(V168);
	goto T339;}
	goto T336;
T336:;
	{long V170;
	long V171;
	V170= V163;
	V171= 0;
	goto T354;
T354:;
	if((V170)>=(V164)){
	goto T356;}
	V172 = make_fixnum(V171);
	V173 = make_integer(V165);
	if(number_compare(V172,V173)>=0){
	goto T356;}
	if(!(endp_prop(cdr((V167))))){
	goto T355;}
	goto T356;
T356:;
	{object V174 = cdr((V166));
	VMR14(V174)}
	goto T355;
T355:;
	base[1]= cadr((V167));
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V161));
	vs_top=sup;
	V175= vs_base[0];
	if(((*(LnkLI43))((V156),(V157),(V153),V175))==Cnil){
	goto T365;}
	V171= (long)(1)+(V171);
	if(type_of((V167))!=t_cons)FEwrong_type_argument(Scons,(V167));
	((V167))->c.c_cdr = cddr((V167));
	goto T363;
	goto T365;
T365:;
	V167= cdr((V167));
	goto T363;
T363:;
	V170= (long)(1)+(V170);
	goto T354;}}
	goto T332;
T332:;
	{long V176;
	V177 = make_fixnum(V163);
	V178 = make_fixnum(V164);
	V179 = make_integer(V165);
	V176= fix((VFUN_NARGS=16,(*(LnkLI47))((V153),(V154),VV[11],(V155),VV[12],(V156),VV[13],(V157),VV[14],V177,VV[15],V178,VV[16],V179,VV[17],(V161))));
	V180 = make_fixnum(V176);
	V181 = make_integer(V165);
	if(!(number_compare(V180,V181)<0)){
	goto T376;}ISETQ_FIX(V165,V165alloc,V176);
	goto T376;
T376:;
	V182 = make_integer(V165);
	if(!(number_compare(V182,small_fixnum(0))<0)){
	goto T380;}
	ISETQ_FIX(V165,V165alloc,0);
	goto T380;
T380:;
	{object V183;
	register long V184;
	long V185;
	long V186;
	V187= (*(LnkLI49))((V154));
	V188 = fix(make_integer(V165));
	V189 = make_fixnum((long)(V162)-(V188));
	V183= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V187,V189));
	V184= 0;
	V185= 0;
	V186= 0;
	goto T389;
T389:;
	if(!((V184)>=(V162))){
	goto T390;}
	{object V190 = (V183);
	VMR14(V190)}
	goto T390;
T390:;
	if(!((V163)<=(V184))){
	goto T396;}
	if(!((V184)<(V164))){
	goto T396;}
	V191 = make_fixnum(V186);
	V192 = make_integer(V165);
	if(!(number_compare(V191,V192)<0)){
	goto T396;}
	base[0]= elt((V154),V184);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V161));
	vs_top=sup;
	V193= vs_base[0];
	if(((*(LnkLI43))((V156),(V157),(V153),V193))==Cnil){
	goto T396;}
	V186= (long)(1)+(V186);
	goto T394;
	goto T396;
T396:;
	V194= elt((V154),V184);
	(void)(elt_set((V183),V185,/* INLINE-ARGS */V194));
	V185= (long)(1)+(V185);
	goto T394;
T394:;
	V184= (long)(1)+(V184);
	goto T389;}}
	goto T329;
T329:;
	{long V195;
	V196 = make_fixnum(V163);
	V197 = make_fixnum(V164);
	V198 = make_integer(V165);
	V195= fix((VFUN_NARGS=16,(*(LnkLI47))((V153),(V154),VV[11],(V155),VV[12],(V156),VV[13],(V157),VV[14],V196,VV[15],V197,VV[16],V198,VV[17],(V161))));
	V199 = make_fixnum(V195);
	V200 = make_integer(V165);
	if(!(number_compare(V199,V200)<0)){
	goto T413;}ISETQ_FIX(V165,V165alloc,V195);
	goto T413;
T413:;
	V201 = make_integer(V165);
	if(!(number_compare(V201,small_fixnum(0))<0)){
	goto T417;}
	ISETQ_FIX(V165,V165alloc,0);
	goto T417;
T417:;
	{object V202;
	register long V203;
	long V204;
	long V205;
	V206= (*(LnkLI49))((V154));
	V207 = fix(make_integer(V165));
	V208 = make_fixnum((long)(V162)-(V207));
	V202= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V206,V208));
	V203= (long)(-1)+(V162);
	V209 = fix(make_integer(V165));
	V204= (long)(-1)+((long)(V162)-(V209));
	V205= 0;
	goto T426;
T426:;
	if(!((V203)<(0))){
	goto T427;}
	{object V210 = (V202);
	VMR14(V210)}
	goto T427;
T427:;
	if(!((V163)<=(V203))){
	goto T433;}
	if(!((V203)<(V164))){
	goto T433;}
	V211 = make_fixnum(V205);
	V212 = make_integer(V165);
	if(!(number_compare(V211,V212)<0)){
	goto T433;}
	base[0]= elt((V154),V203);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V161));
	vs_top=sup;
	V213= vs_base[0];
	if(((*(LnkLI43))((V156),(V157),(V153),V213))==Cnil){
	goto T433;}
	V205= (long)(1)+(V205);
	goto T431;
	goto T433;
T433:;
	V214= elt((V154),V203);
	(void)(elt_set((V202),V204,/* INLINE-ARGS */V214));
	V204= (long)(-1)+(V204);
	goto T431;
T431:;
	V203= (long)(-1)+(V203);
	goto T426;}}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DELETE-IF	*/

static object LI15(object V216,object V215,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V217;
	object V218;
	object V219;
	object V220;
	object V221;
	object V222;
	object V223;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V217= V216;
	V218= V215;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI15key,first,ap);
	V219=(Vcs[2]);
	V220=(Vcs[3]);
	V221=(Vcs[4]);
	V222=(Vcs[5]);
	if(Vcs[6]==0){
	V223= symbol_function(VV[35]);
	}else{
	V223=(Vcs[6]);}
	if(!(((V223))==(Cnil))){
	goto T450;}
	V223= symbol_function(VV[35]);
	goto T450;
T450:;
	V224= symbol_function(VV[46]);
	{object V225 = (VFUN_NARGS=14,(*(LnkLI44))((V217),(V218),VV[11],(V219),VV[12],V224,VV[14],(V220),VV[15],(V221),VV[16],(V222),VV[17],(V223)));
	VMR15(V225)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function DELETE-IF-NOT	*/

static object LI16(object V227,object V226,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V228;
	object V229;
	object V230;
	object V231;
	object V232;
	object V233;
	object V234;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V228= V227;
	V229= V226;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI16key,first,ap);
	V230=(Vcs[2]);
	V231=(Vcs[3]);
	V232=(Vcs[4]);
	V233=(Vcs[5]);
	if(Vcs[6]==0){
	V234= symbol_function(VV[35]);
	}else{
	V234=(Vcs[6]);}
	if(!(((V234))==(Cnil))){
	goto T456;}
	V234= symbol_function(VV[35]);
	goto T456;
T456:;
	V235= symbol_function(VV[46]);
	{object V236 = (VFUN_NARGS=14,(*(LnkLI44))((V228),(V229),VV[11],(V230),VV[13],V235,VV[14],(V231),VV[15],(V232),VV[16],(V233),VV[17],(V234)));
	VMR16(V236)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function COUNT	*/

static object LI17(object V238,object V237,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{object V239;
	register object V240;
	object V241;
	register object V242;
	register object V243;
	object V244;
	object V245;
	register object V246;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V239= V238;
	V240= V237;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI17key,first,ap);
	V241=(Vcs[2]);
	V242=(Vcs[3]);
	V243=(Vcs[4]);
	V244=(Vcs[5]);
	V245=(Vcs[6]);
	if(Vcs[7]==0){
	V246= symbol_function(VV[35]);
	}else{
	V246=(Vcs[7]);}
	if(!(((V246))==(Cnil))){
	goto T462;}
	V246= symbol_function(VV[35]);
	goto T462;
T462:;
	{long V247;
	if(((V244))==Cnil){
	goto T468;}
	V247= (long)(*(LnkLI36))((V244));
	goto T466;
	goto T468;
T468:;
	V247= 0;
	goto T466;
T466:;
	{long V248;
	V248= (long)(*(LnkLI37))((V245),(V240));
	if(!((V247)<=(V248))){
	goto T472;}
	goto T471;
	goto T472;
T472:;
	base[0]= make_fixnum(V247);
	base[1]= make_fixnum(V248);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T471;
T471:;
	if((V242)==Cnil){
	goto T476;}
	if((V243)==Cnil){
	goto T476;}
	(void)((*(LnkLI42))());
	goto T476;
T476:;
	if(((V241))!=Cnil){
	goto T478;}
	{register long V249;
	register long V250;
	V249= V247;
	V250= 0;
	goto T483;
T483:;
	if(!((V249)>=(V248))){
	goto T484;}
	{object V251 = make_fixnum(V250);
	VMR17(V251)}
	goto T484;
T484:;
	base[0]= elt((V240),V249);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V246));
	vs_top=sup;
	V252= vs_base[0];
	if(((*(LnkLI43))((V242),(V243),(V239),V252))==Cnil){
	goto T488;}
	V250= (long)(1)+(V250);
	goto T488;
T488:;
	V249= (long)(1)+(V249);
	goto T483;}
	goto T478;
T478:;
	{register long V253;
	register long V254;
	V253= (long)(-1)+(V248);
	V254= 0;
	goto T500;
T500:;
	if(!((V253)<(V247))){
	goto T501;}
	{object V255 = make_fixnum(V254);
	VMR17(V255)}
	goto T501;
T501:;
	base[0]= elt((V240),V253);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V246));
	vs_top=sup;
	V256= vs_base[0];
	if(((*(LnkLI43))((V242),(V243),(V239),V256))==Cnil){
	goto T505;}
	V254= (long)(1)+(V254);
	goto T505;
T505:;
	V253= (long)(-1)+(V253);
	goto T500;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function COUNT-IF	*/

static object LI18(object V258,object V257,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB18 VMS18 VMV18
	{object V259;
	object V260;
	object V261;
	object V262;
	object V263;
	object V264;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V259= V258;
	V260= V257;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI18key,first,ap);
	V261=(Vcs[2]);
	V262=(Vcs[3]);
	V263=(Vcs[4]);
	if(Vcs[5]==0){
	V264= symbol_function(VV[35]);
	}else{
	V264=(Vcs[5]);}
	if(!(((V264))==(Cnil))){
	goto T515;}
	V264= symbol_function(VV[35]);
	goto T515;
T515:;
	V265= symbol_function(VV[46]);
	{object V266 = (VFUN_NARGS=12,(*(LnkLI50))((V259),(V260),VV[11],(V261),VV[12],V265,VV[14],(V262),VV[15],(V263),VV[17],(V264)));
	VMR18(V266)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function COUNT-IF-NOT	*/

static object LI19(object V268,object V267,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V269;
	object V270;
	object V271;
	object V272;
	object V273;
	object V274;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V269= V268;
	V270= V267;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI19key,first,ap);
	V271=(Vcs[2]);
	V272=(Vcs[3]);
	V273=(Vcs[4]);
	if(Vcs[5]==0){
	V274= symbol_function(VV[35]);
	}else{
	V274=(Vcs[5]);}
	if(!(((V274))==(Cnil))){
	goto T521;}
	V274= symbol_function(VV[35]);
	goto T521;
T521:;
	V275= symbol_function(VV[46]);
	{object V276 = (VFUN_NARGS=12,(*(LnkLI50))((V269),(V270),VV[11],(V271),VV[13],V275,VV[14],(V272),VV[15],(V273),VV[17],(V274)));
	VMR19(V276)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT	*/

static object LI20(object V278,object V277,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB20 VMS20 VMV20
	{object V279;
	register object V280;
	object V281;
	register object V282;
	register object V283;
	object V284;
	object V285;
	object V286;
	register object V287;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V279= V278;
	V280= V277;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI20key,first,ap);
	V281=(Vcs[2]);
	V282=(Vcs[3]);
	V283=(Vcs[4]);
	V284=(Vcs[5]);
	V285=(Vcs[6]);
	V286=(Vcs[7]);
	if(Vcs[8]==0){
	V287= symbol_function(VV[35]);
	}else{
	V287=(Vcs[8]);}
	if(!(((V287))==(Cnil))){
	goto T527;}
	V287= symbol_function(VV[35]);
	goto T527;
T527:;
	{long V288;
	if(((V284))==Cnil){
	goto T533;}
	V288= (long)(*(LnkLI36))((V284));
	goto T531;
	goto T533;
T533:;
	V288= 0;
	goto T531;
T531:;
	{long V289;
	V289= (long)(*(LnkLI37))((V285),(V280));
	if(!((V288)<=(V289))){
	goto T537;}
	goto T536;
	goto T537;
T537:;
	base[0]= make_fixnum(V288);
	base[1]= make_fixnum(V289);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T536;
T536:;
	{IDECL(GEN V290,V290space,V290alloc);
	if(((V286))!=Cnil){
	goto T543;}
	ISETQ_FIX(V290,V290alloc,2147483647);
	goto T541;
	goto T543;
T543:;SETQ_IO(V290,V290alloc,(V286));
	goto T541;
T541:;
	if((V282)==Cnil){
	goto T546;}
	if((V283)==Cnil){
	goto T546;}
	(void)((*(LnkLI42))());
	goto T546;
T546:;
	if(((V281))!=Cnil){
	goto T548;}
	{register long V291;
	register long V292;
	V291= V288;
	V292= 0;
	goto T553;
T553:;
	if(!((V291)>=(V289))){
	goto T554;}
	{object V293 = make_fixnum(V292);
	VMR20(V293)}
	goto T554;
T554:;
	V294 = make_fixnum(V292);
	V295 = make_integer(V290);
	if(!(number_compare(V294,V295)<0)){
	goto T558;}
	base[0]= elt((V280),V291);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V287));
	vs_top=sup;
	V296= vs_base[0];
	if(((*(LnkLI43))((V282),(V283),(V279),V296))==Cnil){
	goto T558;}
	V292= (long)(1)+(V292);
	goto T558;
T558:;
	V291= (long)(1)+(V291);
	goto T553;}
	goto T548;
T548:;
	{register long V297;
	register long V298;
	V297= (long)(-1)+(V289);
	V298= 0;
	goto T572;
T572:;
	if(!((V297)<(V288))){
	goto T573;}
	{object V299 = make_fixnum(V298);
	VMR20(V299)}
	goto T573;
T573:;
	V300 = make_fixnum(V298);
	V301 = make_integer(V290);
	if(!(number_compare(V300,V301)<0)){
	goto T577;}
	base[0]= elt((V280),V297);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V287));
	vs_top=sup;
	V302= vs_base[0];
	if(((*(LnkLI43))((V282),(V283),(V279),V302))==Cnil){
	goto T577;}
	V298= (long)(1)+(V298);
	goto T577;
T577:;
	V297= (long)(-1)+(V297);
	goto T572;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT-IF	*/

static object LI21(object V304,object V303,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V305;
	object V306;
	object V307;
	object V308;
	object V309;
	object V310;
	object V311;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V305= V304;
	V306= V303;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI21key,first,ap);
	V307=(Vcs[2]);
	V308=(Vcs[3]);
	V309=(Vcs[4]);
	V310=(Vcs[5]);
	if(Vcs[6]==0){
	V311= symbol_function(VV[35]);
	}else{
	V311=(Vcs[6]);}
	if(!(((V311))==(Cnil))){
	goto T589;}
	V311= symbol_function(VV[35]);
	goto T589;
T589:;
	V312= symbol_function(VV[46]);
	{object V313 = (VFUN_NARGS=14,(*(LnkLI47))((V305),(V306),VV[11],(V307),VV[12],V312,VV[14],(V308),VV[15],(V309),VV[16],(V310),VV[17],(V311)));
	VMR21(V313)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function INTERNAL-COUNT-IF-NOT	*/

static object LI22(object V315,object V314,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB22 VMS22 VMV22
	{object V316;
	object V317;
	object V318;
	object V319;
	object V320;
	object V321;
	object V322;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V316= V315;
	V317= V314;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI22key,first,ap);
	V318=(Vcs[2]);
	V319=(Vcs[3]);
	V320=(Vcs[4]);
	V321=(Vcs[5]);
	if(Vcs[6]==0){
	V322= symbol_function(VV[35]);
	}else{
	V322=(Vcs[6]);}
	if(!(((V322))==(Cnil))){
	goto T595;}
	V322= symbol_function(VV[35]);
	goto T595;
T595:;
	V323= symbol_function(VV[46]);
	{object V324 = (VFUN_NARGS=14,(*(LnkLI47))((V316),(V317),VV[11],(V318),VV[13],V323,VV[14],(V319),VV[15],(V320),VV[16],(V321),VV[17],(V322)));
	VMR22(V324)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE	*/

static object LI23(object V327,object V326,object V325,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V328;
	object V329;
	register object V330;
	object V331;
	object V332;
	object V333;
	object V334;
	object V335;
	object V336;
	object V337;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V328= V327;
	V329= V326;
	V330= V325;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI23key,first,ap);
	V331=(Vcs[3]);
	V332=(Vcs[4]);
	V333=(Vcs[5]);
	V334=(Vcs[6]);
	V335=(Vcs[7]);
	V336=(Vcs[8]);
	if(Vcs[9]==0){
	V337= symbol_function(VV[35]);
	}else{
	V337=(Vcs[9]);}
	{long V338;
	V338= (long)length((V330));
	if(!(((V337))==(Cnil))){
	goto T602;}
	V337= symbol_function(VV[35]);
	goto T602;
T602:;
	{long V339;
	if(((V334))==Cnil){
	goto T608;}
	V339= (long)(*(LnkLI36))((V334));
	goto T606;
	goto T608;
T608:;
	V339= 0;
	goto T606;
T606:;
	{long V340;
	V340= (long)(*(LnkLI37))((V335),(V330));
	if(!((V339)<=(V340))){
	goto T612;}
	goto T611;
	goto T612;
T612:;
	base[0]= make_fixnum(V339);
	base[1]= make_fixnum(V340);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T611;
T611:;
	{IDECL(GEN V341,V341space,V341alloc);
	if(((V336))!=Cnil){
	goto T618;}
	ISETQ_FIX(V341,V341alloc,2147483647);
	goto T616;
	goto T618;
T618:;SETQ_IO(V341,V341alloc,(V336));
	goto T616;
T616:;
	if((V332)==Cnil){
	goto T621;}
	if((V333)==Cnil){
	goto T621;}
	(void)((*(LnkLI42))());
	goto T621;
T621:;
	if(((V331))!=Cnil){
	goto T623;}
	{register object V342;
	register long V343;
	register long V344;
	V345= (*(LnkLI49))((V330));
	V346 = make_fixnum(V338);
	V342= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V345,V346));
	V343= 0;
	V344= 0;
	goto T629;
T629:;
	if(!((V343)>=(V338))){
	goto T630;}
	{object V347 = (V342);
	VMR23(V347)}
	goto T630;
T630:;
	if(!((V339)<=(V343))){
	goto T636;}
	if(!((V343)<(V340))){
	goto T636;}
	V348 = make_fixnum(V344);
	V349 = make_integer(V341);
	if(!(number_compare(V348,V349)<0)){
	goto T636;}
	base[0]= elt((V330),V343);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V337));
	vs_top=sup;
	V350= vs_base[0];
	if(((*(LnkLI43))((V332),(V333),(V329),V350))==Cnil){
	goto T636;}
	(void)(elt_set((V342),V343,(V328)));
	V344= (long)(1)+(V344);
	goto T634;
	goto T636;
T636:;
	V351= elt((V330),V343);
	(void)(elt_set((V342),V343,/* INLINE-ARGS */V351));
	goto T634;
T634:;
	V343= (long)(1)+(V343);
	goto T629;}
	goto T623;
T623:;
	{register object V352;
	register long V353;
	register long V354;
	V355= (*(LnkLI49))((V330));
	V356 = make_fixnum(V338);
	V352= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V355,V356));
	V353= (long)(-1)+(V338);
	V354= 0;
	goto T655;
T655:;
	if(!((V353)<(0))){
	goto T656;}
	{object V357 = (V352);
	VMR23(V357)}
	goto T656;
T656:;
	if(!((V339)<=(V353))){
	goto T662;}
	if(!((V353)<(V340))){
	goto T662;}
	V358 = make_fixnum(V354);
	V359 = make_integer(V341);
	if(!(number_compare(V358,V359)<0)){
	goto T662;}
	base[0]= elt((V330),V353);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V337));
	vs_top=sup;
	V360= vs_base[0];
	if(((*(LnkLI43))((V332),(V333),(V329),V360))==Cnil){
	goto T662;}
	(void)(elt_set((V352),V353,(V328)));
	V354= (long)(1)+(V354);
	goto T660;
	goto T662;
T662:;
	V361= elt((V330),V353);
	(void)(elt_set((V352),V353,/* INLINE-ARGS */V361));
	goto T660;
T660:;
	V353= (long)(-1)+(V353);
	goto T655;}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE-IF	*/

static object LI24(object V364,object V363,object V362,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V365;
	object V366;
	object V367;
	object V368;
	object V369;
	object V370;
	object V371;
	object V372;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V365= V364;
	V366= V363;
	V367= V362;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI24key,first,ap);
	V368=(Vcs[3]);
	V369=(Vcs[4]);
	V370=(Vcs[5]);
	V371=(Vcs[6]);
	if(Vcs[7]==0){
	V372= symbol_function(VV[35]);
	}else{
	V372=(Vcs[7]);}
	if(!(((V372))==(Cnil))){
	goto T678;}
	V372= symbol_function(VV[35]);
	goto T678;
T678:;
	V373= symbol_function(VV[46]);
	{object V374 = (VFUN_NARGS=15,(*(LnkLI51))((V365),(V366),(V367),VV[11],(V368),VV[12],V373,VV[14],(V369),VV[15],(V370),VV[16],(V371),VV[17],(V372)));
	VMR24(V374)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function SUBSTITUTE-IF-NOT	*/

static object LI25(object V377,object V376,object V375,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{object V378;
	object V379;
	object V380;
	object V381;
	object V382;
	object V383;
	object V384;
	object V385;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V378= V377;
	V379= V376;
	V380= V375;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI25key,first,ap);
	V381=(Vcs[3]);
	V382=(Vcs[4]);
	V383=(Vcs[5]);
	V384=(Vcs[6]);
	if(Vcs[7]==0){
	V385= symbol_function(VV[35]);
	}else{
	V385=(Vcs[7]);}
	if(!(((V385))==(Cnil))){
	goto T684;}
	V385= symbol_function(VV[35]);
	goto T684;
T684:;
	V386= symbol_function(VV[46]);
	{object V387 = (VFUN_NARGS=15,(*(LnkLI51))((V378),(V379),(V380),VV[11],(V381),VV[13],V386,VV[14],(V382),VV[15],(V383),VV[16],(V384),VV[17],(V385)));
	VMR25(V387)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE	*/

static object LI26(object V390,object V389,object V388,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V391;
	object V392;
	register object V393;
	object V394;
	object V395;
	object V396;
	object V397;
	object V398;
	object V399;
	register object V400;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V391= V390;
	V392= V389;
	V393= V388;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI26key,first,ap);
	V394=(Vcs[3]);
	V395=(Vcs[4]);
	V396=(Vcs[5]);
	V397=(Vcs[6]);
	V398=(Vcs[7]);
	V399=(Vcs[8]);
	if(Vcs[9]==0){
	V400= symbol_function(VV[35]);
	}else{
	V400=(Vcs[9]);}
	if(!(((V400))==(Cnil))){
	goto T690;}
	V400= symbol_function(VV[35]);
	goto T690;
T690:;
	{long V401;
	if(((V397))==Cnil){
	goto T696;}
	V401= (long)(*(LnkLI36))((V397));
	goto T694;
	goto T696;
T696:;
	V401= 0;
	goto T694;
T694:;
	{long V402;
	V402= (long)(*(LnkLI37))((V398),(V393));
	if(!((V401)<=(V402))){
	goto T700;}
	goto T699;
	goto T700;
T700:;
	base[0]= make_fixnum(V401);
	base[1]= make_fixnum(V402);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T699;
T699:;
	{IDECL(GEN V403,V403space,V403alloc);
	if(((V399))!=Cnil){
	goto T706;}
	ISETQ_FIX(V403,V403alloc,2147483647);
	goto T704;
	goto T706;
T706:;SETQ_IO(V403,V403alloc,(V399));
	goto T704;
T704:;
	if((V395)==Cnil){
	goto T709;}
	if((V396)==Cnil){
	goto T709;}
	(void)((*(LnkLI42))());
	goto T709;
T709:;
	if(((V394))!=Cnil){
	goto T711;}
	{register long V404;
	register long V405;
	V404= V401;
	V405= 0;
	goto T716;
T716:;
	if(!((V404)>=(V402))){
	goto T717;}
	{object V406 = (V393);
	VMR26(V406)}
	goto T717;
T717:;
	V407 = make_fixnum(V405);
	V408 = make_integer(V403);
	if(!(number_compare(V407,V408)<0)){
	goto T721;}
	base[0]= elt((V393),V404);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V400));
	vs_top=sup;
	V409= vs_base[0];
	if(((*(LnkLI43))((V395),(V396),(V392),V409))==Cnil){
	goto T721;}
	(void)(elt_set((V393),V404,(V391)));
	V405= (long)(1)+(V405);
	goto T721;
T721:;
	V404= (long)(1)+(V404);
	goto T716;}
	goto T711;
T711:;
	{register long V410;
	register long V411;
	V410= (long)(-1)+(V402);
	V411= 0;
	goto T736;
T736:;
	if(!((V410)<(V401))){
	goto T737;}
	{object V412 = (V393);
	VMR26(V412)}
	goto T737;
T737:;
	V413 = make_fixnum(V411);
	V414 = make_integer(V403);
	if(!(number_compare(V413,V414)<0)){
	goto T741;}
	base[0]= elt((V393),V410);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V400));
	vs_top=sup;
	V415= vs_base[0];
	if(((*(LnkLI43))((V395),(V396),(V392),V415))==Cnil){
	goto T741;}
	(void)(elt_set((V393),V410,(V391)));
	V411= (long)(1)+(V411);
	goto T741;
T741:;
	V410= (long)(-1)+(V410);
	goto T736;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE-IF	*/

static object LI27(object V418,object V417,object V416,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB27 VMS27 VMV27
	{object V419;
	object V420;
	object V421;
	object V422;
	object V423;
	object V424;
	object V425;
	object V426;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V419= V418;
	V420= V417;
	V421= V416;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI27key,first,ap);
	V422=(Vcs[3]);
	V423=(Vcs[4]);
	V424=(Vcs[5]);
	V425=(Vcs[6]);
	if(Vcs[7]==0){
	V426= symbol_function(VV[35]);
	}else{
	V426=(Vcs[7]);}
	if(!(((V426))==(Cnil))){
	goto T754;}
	V426= symbol_function(VV[35]);
	goto T754;
T754:;
	V427= symbol_function(VV[46]);
	{object V428 = (VFUN_NARGS=15,(*(LnkLI52))((V419),(V420),(V421),VV[11],(V422),VV[12],V427,VV[14],(V423),VV[15],(V424),VV[16],(V425),VV[17],(V426)));
	VMR27(V428)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function NSUBSTITUTE-IF-NOT	*/

static object LI28(object V431,object V430,object V429,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB28 VMS28 VMV28
	{object V432;
	object V433;
	object V434;
	object V435;
	object V436;
	object V437;
	object V438;
	object V439;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V432= V431;
	V433= V430;
	V434= V429;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI28key,first,ap);
	V435=(Vcs[3]);
	V436=(Vcs[4]);
	V437=(Vcs[5]);
	V438=(Vcs[6]);
	if(Vcs[7]==0){
	V439= symbol_function(VV[35]);
	}else{
	V439=(Vcs[7]);}
	if(!(((V439))==(Cnil))){
	goto T760;}
	V439= symbol_function(VV[35]);
	goto T760;
T760:;
	V440= symbol_function(VV[46]);
	{object V441 = (VFUN_NARGS=15,(*(LnkLI52))((V432),(V433),(V434),VV[11],(V435),VV[13],V440,VV[14],(V436),VV[15],(V437),VV[16],(V438),VV[17],(V439)));
	VMR28(V441)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function FIND	*/

static object LI29(object V443,object V442,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB29 VMS29 VMV29
	{object V444;
	register object V445;
	object V446;
	register object V447;
	register object V448;
	object V449;
	object V450;
	register object V451;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V444= V443;
	V445= V442;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI29key,first,ap);
	V446=(Vcs[2]);
	V447=(Vcs[3]);
	V448=(Vcs[4]);
	V449=(Vcs[5]);
	V450=(Vcs[6]);
	if(Vcs[7]==0){
	V451= symbol_function(VV[35]);
	}else{
	V451=(Vcs[7]);}
	if(!(((V451))==(Cnil))){
	goto T766;}
	V451= symbol_function(VV[35]);
	goto T766;
T766:;
	{long V452;
	if(((V449))==Cnil){
	goto T772;}
	V452= (long)(*(LnkLI36))((V449));
	goto T770;
	goto T772;
T772:;
	V452= 0;
	goto T770;
T770:;
	{long V453;
	V453= (long)(*(LnkLI37))((V450),(V445));
	if(!((V452)<=(V453))){
	goto T776;}
	goto T775;
	goto T776;
T776:;
	base[0]= make_fixnum(V452);
	base[1]= make_fixnum(V453);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T775;
T775:;
	if((V447)==Cnil){
	goto T780;}
	if((V448)==Cnil){
	goto T780;}
	(void)((*(LnkLI42))());
	goto T780;
T780:;
	if(((V446))!=Cnil){
	goto T782;}
	{register long V454;
	V454= V452;
	goto T786;
T786:;
	if(!((V454)>=(V453))){
	goto T787;}
	{object V455 = Cnil;
	VMR29(V455)}
	goto T787;
T787:;
	base[0]= elt((V445),V454);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V451));
	vs_top=sup;
	V456= vs_base[0];
	if(((*(LnkLI43))((V447),(V448),(V444),V456))==Cnil){
	goto T791;}
	{object V457 = elt((V445),V454);
	VMR29(V457)}
	goto T791;
T791:;
	V454= (long)(1)+(V454);
	goto T786;}
	goto T782;
T782:;
	{register long V458;
	V458= (long)(-1)+(V453);
	goto T801;
T801:;
	if(!((V458)<(V452))){
	goto T802;}
	{object V459 = Cnil;
	VMR29(V459)}
	goto T802;
T802:;
	base[0]= elt((V445),V458);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V451));
	vs_top=sup;
	V460= vs_base[0];
	if(((*(LnkLI43))((V447),(V448),(V444),V460))==Cnil){
	goto T806;}
	{object V461 = elt((V445),V458);
	VMR29(V461)}
	goto T806;
T806:;
	V458= (long)(-1)+(V458);
	goto T801;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function FIND-IF	*/

static object LI30(object V463,object V462,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{object V464;
	object V465;
	object V466;
	object V467;
	object V468;
	object V469;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V464= V463;
	V465= V462;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI30key,first,ap);
	V466=(Vcs[2]);
	V467=(Vcs[3]);
	V468=(Vcs[4]);
	if(Vcs[5]==0){
	V469= symbol_function(VV[35]);
	}else{
	V469=(Vcs[5]);}
	if(!(((V469))==(Cnil))){
	goto T815;}
	V469= symbol_function(VV[35]);
	goto T815;
T815:;
	V470= symbol_function(VV[46]);
	{object V471 = (VFUN_NARGS=12,(*(LnkLI53))((V464),(V465),VV[11],(V466),VV[12],V470,VV[14],(V467),VV[15],(V468),VV[17],(V469)));
	VMR30(V471)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function FIND-IF-NOT	*/

static object LI31(object V473,object V472,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V474;
	object V475;
	object V476;
	object V477;
	object V478;
	object V479;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V474= V473;
	V475= V472;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI31key,first,ap);
	V476=(Vcs[2]);
	V477=(Vcs[3]);
	V478=(Vcs[4]);
	if(Vcs[5]==0){
	V479= symbol_function(VV[35]);
	}else{
	V479=(Vcs[5]);}
	if(!(((V479))==(Cnil))){
	goto T821;}
	V479= symbol_function(VV[35]);
	goto T821;
T821:;
	V480= symbol_function(VV[46]);
	{object V481 = (VFUN_NARGS=12,(*(LnkLI53))((V474),(V475),VV[11],(V476),VV[13],V480,VV[14],(V477),VV[15],(V478),VV[17],(V479)));
	VMR31(V481)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function POSITION	*/

static object LI32(object V483,object V482,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB32 VMS32 VMV32
	{object V484;
	register object V485;
	object V486;
	register object V487;
	register object V488;
	object V489;
	object V490;
	register object V491;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V484= V483;
	V485= V482;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI32key,first,ap);
	V486=(Vcs[2]);
	V487=(Vcs[3]);
	V488=(Vcs[4]);
	V489=(Vcs[5]);
	V490=(Vcs[6]);
	if(Vcs[7]==0){
	V491= symbol_function(VV[35]);
	}else{
	V491=(Vcs[7]);}
	if(!(((V491))==(Cnil))){
	goto T827;}
	V491= symbol_function(VV[35]);
	goto T827;
T827:;
	{long V492;
	if(((V489))==Cnil){
	goto T833;}
	V492= (long)(*(LnkLI36))((V489));
	goto T831;
	goto T833;
T833:;
	V492= 0;
	goto T831;
T831:;
	{long V493;
	V493= (long)(*(LnkLI37))((V490),(V485));
	if(!((V492)<=(V493))){
	goto T837;}
	goto T836;
	goto T837;
T837:;
	base[0]= make_fixnum(V492);
	base[1]= make_fixnum(V493);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T836;
T836:;
	if((V487)==Cnil){
	goto T841;}
	if((V488)==Cnil){
	goto T841;}
	(void)((*(LnkLI42))());
	goto T841;
T841:;
	if(((V486))!=Cnil){
	goto T843;}
	{register long V494;
	V494= V492;
	goto T847;
T847:;
	if(!((V494)>=(V493))){
	goto T848;}
	{object V495 = Cnil;
	VMR32(V495)}
	goto T848;
T848:;
	base[0]= elt((V485),V494);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V491));
	vs_top=sup;
	V496= vs_base[0];
	if(((*(LnkLI43))((V487),(V488),(V484),V496))==Cnil){
	goto T852;}
	{object V497 = make_fixnum(V494);
	VMR32(V497)}
	goto T852;
T852:;
	V494= (long)(1)+(V494);
	goto T847;}
	goto T843;
T843:;
	{register long V498;
	V498= (long)(-1)+(V493);
	goto T862;
T862:;
	if(!((V498)<(V492))){
	goto T863;}
	{object V499 = Cnil;
	VMR32(V499)}
	goto T863;
T863:;
	base[0]= elt((V485),V498);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V491));
	vs_top=sup;
	V500= vs_base[0];
	if(((*(LnkLI43))((V487),(V488),(V484),V500))==Cnil){
	goto T867;}
	{object V501 = make_fixnum(V498);
	VMR32(V501)}
	goto T867;
T867:;
	V498= (long)(-1)+(V498);
	goto T862;}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function POSITION-IF	*/

static object LI33(object V503,object V502,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V504;
	object V505;
	object V506;
	object V507;
	object V508;
	object V509;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V504= V503;
	V505= V502;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI33key,first,ap);
	V506=(Vcs[2]);
	V507=(Vcs[3]);
	V508=(Vcs[4]);
	if(Vcs[5]==0){
	V509= symbol_function(VV[35]);
	}else{
	V509=(Vcs[5]);}
	if(!(((V509))==(Cnil))){
	goto T876;}
	V509= symbol_function(VV[35]);
	goto T876;
T876:;
	V510= symbol_function(VV[46]);
	{object V511 = (VFUN_NARGS=12,(*(LnkLI54))((V504),(V505),VV[11],(V506),VV[12],V510,VV[14],(V507),VV[15],(V508),VV[17],(V509)));
	VMR33(V511)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function POSITION-IF-NOT	*/

static object LI34(object V513,object V512,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	{object V514;
	object V515;
	object V516;
	object V517;
	object V518;
	object V519;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V514= V513;
	V515= V512;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI34key,first,ap);
	V516=(Vcs[2]);
	V517=(Vcs[3]);
	V518=(Vcs[4]);
	if(Vcs[5]==0){
	V519= symbol_function(VV[35]);
	}else{
	V519=(Vcs[5]);}
	if(!(((V519))==(Cnil))){
	goto T882;}
	V519= symbol_function(VV[35]);
	goto T882;
T882:;
	V520= symbol_function(VV[46]);
	{object V521 = (VFUN_NARGS=12,(*(LnkLI54))((V514),(V515),VV[11],(V516),VV[13],V520,VV[14],(V517),VV[15],(V518),VV[17],(V519)));
	VMR34(V521)}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function REMOVE-DUPLICATES	*/

static object LI35(object V522,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{register object V523;
	object V524;
	register object V525;
	register object V526;
	object V527;
	object V528;
	register object V529;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V523= V522;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI35key,first,ap);
	V524=(Vcs[1]);
	V525=(Vcs[2]);
	V526=(Vcs[3]);
	V527=(Vcs[4]);
	V528=(Vcs[5]);
	if(Vcs[6]==0){
	V529= symbol_function(VV[35]);
	}else{
	V529=(Vcs[6]);}
	if((V525)==Cnil){
	goto T888;}
	if((V526)==Cnil){
	goto T888;}
	(void)((*(LnkLI42))());
	goto T888;
T888:;
	if(!(type_of((V523))==t_cons||((V523))==Cnil)){
	goto T889;}
	if(((V524))!=Cnil){
	goto T889;}
	if(((V527))!=Cnil){
	goto T889;}
	if(((V528))!=Cnil){
	goto T889;}
	if(!(endp_prop((V523)))){
	goto T898;}
	{object V530 = Cnil;
	VMR35(V530)}
	goto T898;
T898:;
	{register object V531;
	register object V532;
	V531= (V523);
	V532= Cnil;
	goto T902;
T902:;
	if(!(endp_prop(cdr((V531))))){
	goto T903;}
	base[0]= (V532);
	base[1]= (V531);
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	{object V533 = vs_base[0];
	VMR35(V533)}
	goto T903;
T903:;
	base[0]= car((V531));
	base[1]= cdr((V531));
	base[2]= VV[12];
	base[3]= (V525);
	base[4]= VV[13];
	base[5]= (V526);
	base[6]= VV[17];
	base[7]= (V529);
	vs_top=(vs_base=base+0)+8;
	(void) (*Lnk55)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T909;}
	V532= make_cons(car((V531)),(V532));
	goto T909;
T909:;
	V531= cdr((V531));
	goto T902;}
	goto T889;
T889:;
	{object V534 = (VFUN_NARGS=13,(*(LnkLI56))((V523),VV[11],(V524),VV[12],(V525),VV[13],(V526),VV[14],(V527),VV[15],(V528),VV[17],(V529)));
	VMR35(V534)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DELETE-DUPLICATES	*/

static object LI36(object V535,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V536;
	object V537;
	object V538;
	object V539;
	object V540;
	object V541;
	register object V542;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V536= V535;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI36key,first,ap);
	V537=(Vcs[1]);
	V538=(Vcs[2]);
	V539=(Vcs[3]);
	V540=(Vcs[4]);
	V541=(Vcs[5]);
	if(Vcs[6]==0){
	V542= symbol_function(VV[35]);
	}else{
	V542=(Vcs[6]);}
	{long V543;
	V543= (long)length((V536));
	if((V538)==Cnil){
	goto T926;}
	if((V539)==Cnil){
	goto T926;}
	(void)((*(LnkLI42))());
	goto T926;
T926:;
	if(!(type_of((V536))==t_cons||((V536))==Cnil)){
	goto T927;}
	if(((V537))!=Cnil){
	goto T927;}
	if(((V540))!=Cnil){
	goto T927;}
	if(((V541))!=Cnil){
	goto T927;}
	if(!(endp_prop((V536)))){
	goto T936;}
	{object V544 = Cnil;
	VMR36(V544)}
	goto T936;
T936:;
	{register object V545;
	V545= (V536);
	goto T940;
T940:;
	if(!(endp_prop(cdr((V545))))){
	goto T941;}
	{object V546 = (V536);
	VMR36(V546)}
	goto T941;
T941:;
	base[0]= car((V545));
	base[1]= cdr((V545));
	base[2]= VV[12];
	base[3]= (V538);
	base[4]= VV[13];
	base[5]= (V539);
	base[6]= VV[17];
	base[7]= (V542);
	vs_top=(vs_base=base+0)+8;
	(void) (*Lnk55)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T947;}
	if(type_of((V545))!=t_cons)FEwrong_type_argument(Scons,(V545));
	((V545))->c.c_car = cadr((V545));
	if(type_of((V545))!=t_cons)FEwrong_type_argument(Scons,(V545));
	((V545))->c.c_cdr = cddr((V545));
	goto T945;
	goto T947;
T947:;
	V545= cdr((V545));
	goto T945;
T945:;
	goto T940;}
	goto T927;
T927:;
	{register long V547;
	if(((V540))==Cnil){
	goto T963;}
	V547= (long)(*(LnkLI36))((V540));
	goto T961;
	goto T963;
T963:;
	V547= 0;
	goto T961;
T961:;
	{register long V548;
	V548= (long)(*(LnkLI37))((V541),(V536));
	if(!((V547)<=(V548))){
	goto T967;}
	goto T966;
	goto T967;
T967:;
	base[0]= make_fixnum(V547);
	base[1]= make_fixnum(V548);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T966;
T966:;
	if(((V537))!=Cnil){
	goto T972;}
	{long V549;
	long V550;
	V549= 0;
	V550= V547;
	goto T977;
T977:;
	if(!((V550)>=(V548))){
	goto T978;}
	{object V551;
	register long V552;
	long V553;
	V554= (*(LnkLI49))((V536));
	V555 = make_fixnum((long)(V543)-(V549));
	V551= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V554,V555));
	V552= 0;
	V553= 0;
	goto T985;
T985:;
	if(!((V552)>=(V543))){
	goto T986;}
	{object V556 = (V551);
	VMR36(V556)}
	goto T986;
T986:;
	{object V557;
	if((V547)<=(V552)){
	goto T992;}
	V557= Cnil;
	goto T991;
	goto T992;
T992:;
	if((V552)<(V548)){
	goto T994;}
	V557= Cnil;
	goto T991;
	goto T994;
T994:;
	base[0]= elt((V536),V552);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V542));
	vs_top=sup;
	V558= vs_base[0];
	V559 = make_fixnum((long)(1)+(V552));
	V560 = make_fixnum(V548);
	V557= (VFUN_NARGS=12,(*(LnkLI54))(V558,(V536),VV[12],(V538),VV[13],(V539),VV[14],V559,VV[15],V560,VV[17],(V542)));
	goto T991;
T991:;
	if(((V557))==Cnil){
	goto T999;}
	goto T990;
	goto T999;
T999:;
	V561= elt((V536),V552);
	(void)(elt_set((V551),V553,/* INLINE-ARGS */V561));
	V553= (long)(1)+(V553);}
	goto T990;
T990:;
	V552= (long)(1)+(V552);
	goto T985;}
	goto T978;
T978:;
	base[0]= elt((V536),V550);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V542));
	vs_top=sup;
	V562= vs_base[0];
	V563 = make_fixnum((long)(1)+(V550));
	V564 = make_fixnum(V548);
	if(((VFUN_NARGS=12,(*(LnkLI54))(V562,(V536),VV[12],(V538),VV[13],(V539),VV[14],V563,VV[15],V564,VV[17],(V542))))==Cnil){
	goto T1007;}
	V549= (long)(1)+(V549);
	goto T1007;
T1007:;
	V550= (long)(1)+(V550);
	goto T977;}
	goto T972;
T972:;
	{long V565;
	long V566;
	V565= 0;
	V566= (long)(-1)+(V548);
	goto T1019;
T1019:;
	if(!((V566)<(V547))){
	goto T1020;}
	{object V567;
	register long V568;
	long V569;
	V570= (*(LnkLI49))((V536));
	V571 = make_fixnum((long)(V543)-(V565));
	V567= (VFUN_NARGS=2,(*(LnkLI48))(/* INLINE-ARGS */V570,V571));
	V568= (long)(-1)+(V543);
	V569= (long)((long)(-1)+(V543))-(V565);
	goto T1027;
T1027:;
	if(!((V568)<(0))){
	goto T1028;}
	{object V572 = (V567);
	VMR36(V572)}
	goto T1028;
T1028:;
	{object V573;
	if((V547)<=(V568)){
	goto T1034;}
	V573= Cnil;
	goto T1033;
	goto T1034;
T1034:;
	if((V568)<(V548)){
	goto T1036;}
	V573= Cnil;
	goto T1033;
	goto T1036;
T1036:;
	base[0]= elt((V536),V568);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V542));
	vs_top=sup;
	V574= vs_base[0];
	V575 = make_fixnum(V547);
	V576 = make_fixnum(V568);
	V573= (VFUN_NARGS=14,(*(LnkLI54))(V574,(V536),VV[11],Ct,VV[12],(V538),VV[13],(V539),VV[14],V575,VV[15],V576,VV[17],(V542)));
	goto T1033;
T1033:;
	if(((V573))==Cnil){
	goto T1041;}
	goto T1032;
	goto T1041;
T1041:;
	V577= elt((V536),V568);
	(void)(elt_set((V567),V569,/* INLINE-ARGS */V577));
	V569= (long)(-1)+(V569);}
	goto T1032;
T1032:;
	V568= (long)(-1)+(V568);
	goto T1027;}
	goto T1020;
T1020:;
	base[0]= elt((V536),V566);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V542));
	vs_top=sup;
	V578= vs_base[0];
	V579 = make_fixnum(V547);
	V580 = make_fixnum(V566);
	if(((VFUN_NARGS=14,(*(LnkLI54))(V578,(V536),VV[11],Ct,VV[12],(V538),VV[13],(V539),VV[14],V579,VV[15],V580,VV[17],(V542))))==Cnil){
	goto T1049;}
	V565= (long)(1)+(V565);
	goto T1049;
T1049:;
	V566= (long)(-1)+(V566);
	goto T1019;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MISMATCH	*/

static object LI37(object V582,object V581,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB37 VMS37 VMV37
	{object V583;
	object V584;
	object V585;
	object V586;
	object V587;
	register object V588;
	object V589;
	object V590;
	object V591;
	object V592;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V583= V582;
	V584= V581;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI37key,first,ap);
	V585=(Vcs[2]);
	V586=(Vcs[3]);
	V587=(Vcs[4]);
	if(Vcs[5]==0){
	V588= symbol_function(VV[35]);
	}else{
	V588=(Vcs[5]);}
	V589=(Vcs[6]);
	V590=(Vcs[7]);
	V591=(Vcs[8]);
	V592=(Vcs[9]);
	if((V586)==Cnil){
	goto T1059;}
	if((V587)==Cnil){
	goto T1059;}
	(void)((*(LnkLI42))());
	goto T1059;
T1059:;
	{register long V593;
	if(((V589))==Cnil){
	goto T1062;}
	V593= (long)(*(LnkLI36))((V589));
	goto T1060;
	goto T1062;
T1062:;
	V593= 0;
	goto T1060;
T1060:;
	{register long V594;
	V594= (long)(*(LnkLI37))((V591),(V583));
	if(!((V593)<=(V594))){
	goto T1066;}
	goto T1065;
	goto T1066;
T1066:;
	base[0]= make_fixnum(V593);
	base[1]= make_fixnum(V594);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T1065;
T1065:;
	{register long V595;
	if(((V590))==Cnil){
	goto T1072;}
	V595= (long)(*(LnkLI36))((V590));
	goto T1070;
	goto T1072;
T1072:;
	V595= 0;
	goto T1070;
T1070:;
	{register long V596;
	V596= (long)(*(LnkLI37))((V592),(V584));
	if(!((V595)<=(V596))){
	goto T1076;}
	goto T1075;
	goto T1076;
T1076:;
	base[0]= make_fixnum(V595);
	base[1]= make_fixnum(V596);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T1075;
T1075:;
	if(((V585))!=Cnil){
	goto T1081;}
	{register long V597;
	register long V598;
	V597= V593;
	V598= V595;
	goto T1086;
T1086:;
	if((V597)>=(V594)){
	goto T1088;}
	if(!((V598)>=(V596))){
	goto T1087;}
	goto T1088;
T1088:;
	if(!((V597)>=(V594))){
	goto T1093;}
	if(!((V598)>=(V596))){
	goto T1093;}
	{object V599 = Cnil;
	VMR37(V599)}
	goto T1093;
T1093:;
	{object V600 = make_fixnum(V597);
	VMR37(V600)}
	goto T1087;
T1087:;
	base[0]= elt((V583),V597);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V588));
	vs_top=sup;
	V601= vs_base[0];
	base[0]= elt((V584),V598);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V588));
	vs_top=sup;
	V602= vs_base[0];
	if(((*(LnkLI43))((V586),(V587),V601,V602))!=Cnil){
	goto T1098;}
	{object V603 = make_fixnum(V597);
	VMR37(V603)}
	goto T1098;
T1098:;
	V597= (long)(1)+(V597);
	V598= (long)(1)+(V598);
	goto T1086;}
	goto T1081;
T1081:;
	{register long V604;
	register long V605;
	V604= (long)(-1)+(V594);
	V605= (long)(-1)+(V596);
	goto T1112;
T1112:;
	if((V604)<(V593)){
	goto T1114;}
	if(!((V605)<(V595))){
	goto T1113;}
	goto T1114;
T1114:;
	if(!((V604)<(V593))){
	goto T1119;}
	if(!((V605)<(V595))){
	goto T1119;}
	{object V606 = Cnil;
	VMR37(V606)}
	goto T1119;
T1119:;
	{object V607 = make_fixnum((long)(1)+(V604));
	VMR37(V607)}
	goto T1113;
T1113:;
	base[0]= elt((V583),V604);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V588));
	vs_top=sup;
	V608= vs_base[0];
	base[0]= elt((V584),V605);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V588));
	vs_top=sup;
	V609= vs_base[0];
	if(((*(LnkLI43))((V586),(V587),V608,V609))!=Cnil){
	goto T1124;}
	{object V610 = make_fixnum((long)(1)+(V604));
	VMR37(V610)}
	goto T1124;
T1124:;
	V604= (long)(-1)+(V604);
	V605= (long)(-1)+(V605);
	goto T1112;}}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function SEARCH	*/

static object LI38(object V612,object V611,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB38 VMS38 VMV38
	{object V613;
	object V614;
	object V615;
	object V616;
	object V617;
	register object V618;
	object V619;
	object V620;
	object V621;
	object V622;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V613= V612;
	V614= V611;
	narg= narg - 2;
	{
	parse_key_new_new(narg,Vcs +2,(struct key *)(void *)&LI38key,first,ap);
	V615=(Vcs[2]);
	V616=(Vcs[3]);
	V617=(Vcs[4]);
	if(Vcs[5]==0){
	V618= symbol_function(VV[35]);
	}else{
	V618=(Vcs[5]);}
	V619=(Vcs[6]);
	V620=(Vcs[7]);
	V621=(Vcs[8]);
	V622=(Vcs[9]);
	if((V616)==Cnil){
	goto T1136;}
	if((V617)==Cnil){
	goto T1136;}
	(void)((*(LnkLI42))());
	goto T1136;
T1136:;
	{long V623;
	if(((V619))==Cnil){
	goto T1139;}
	V623= (long)(*(LnkLI36))((V619));
	goto T1137;
	goto T1139;
T1139:;
	V623= 0;
	goto T1137;
T1137:;
	{long V624;
	V624= (long)(*(LnkLI37))((V621),(V613));
	if(!((V623)<=(V624))){
	goto T1143;}
	goto T1142;
	goto T1143;
T1143:;
	base[0]= make_fixnum(V623);
	base[1]= make_fixnum(V624);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T1142;
T1142:;
	{register long V625;
	if(((V620))==Cnil){
	goto T1149;}
	V625= (long)(*(LnkLI36))((V620));
	goto T1147;
	goto T1149;
T1149:;
	V625= 0;
	goto T1147;
T1147:;
	{long V626;
	V626= (long)(*(LnkLI37))((V622),(V614));
	if(!((V625)<=(V626))){
	goto T1153;}
	goto T1152;
	goto T1153;
T1153:;
	base[0]= make_fixnum(V625);
	base[1]= make_fixnum(V626);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T1152;
T1152:;
	if(((V615))!=Cnil){
	goto T1158;}
	goto T1161;
T1161:;
	{register long V627;
	register long V628;
	V627= V623;
	V628= V625;
	goto T1167;
T1167:;
	if(!((V627)>=(V624))){
	goto T1168;}
	{object V629 = make_fixnum(V625);
	VMR38(V629)}
	goto T1168;
T1168:;
	if(!((V628)>=(V626))){
	goto T1172;}
	{object V630 = Cnil;
	VMR38(V630)}
	goto T1172;
T1172:;
	base[0]= elt((V613),V627);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V618));
	vs_top=sup;
	V631= vs_base[0];
	base[0]= elt((V614),V628);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V618));
	vs_top=sup;
	V632= vs_base[0];
	if(((*(LnkLI43))((V616),(V617),V631,V632))!=Cnil){
	goto T1175;}
	goto T1163;
	goto T1175;
T1175:;
	V627= (long)(1)+(V627);
	V628= (long)(1)+(V628);
	goto T1167;}
	goto T1163;
T1163:;
	V625= (long)(1)+(V625);
	goto T1161;
	goto T1158;
T1158:;
	goto T1189;
T1189:;
	{register long V633;
	register long V634;
	V633= (long)(-1)+(V624);
	V634= (long)(-1)+(V626);
	goto T1195;
T1195:;
	if(!((V633)<(V623))){
	goto T1196;}
	{object V635 = make_fixnum((long)(1)+(V634));
	VMR38(V635)}
	goto T1196;
T1196:;
	if(!((V634)<(V625))){
	goto T1200;}
	{object V636 = Cnil;
	VMR38(V636)}
	goto T1200;
T1200:;
	base[0]= elt((V613),V633);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V618));
	vs_top=sup;
	V637= vs_base[0];
	base[0]= elt((V614),V634);
	vs_top=(vs_base=base+0)+1;
	super_funcall_no_event((V618));
	vs_top=sup;
	V638= vs_base[0];
	if(((*(LnkLI43))((V616),(V617),V637,V638))!=Cnil){
	goto T1203;}
	goto T1191;
	goto T1203;
T1203:;
	V633= (long)(-1)+(V633);
	V634= (long)(-1)+(V634);
	goto T1195;}
	goto T1191;
T1191:;
	V626= (long)(-1)+(V626);
	goto T1189;}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for SORT	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	{register object V639;
	object V640;
	object V641;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,FALSE,FALSE,1,VV[17]);
	V639=(base[0]);
	V640=(base[1]);
	vs_top=sup;
	if(base[3]==Cnil){
	V641= symbol_function(VV[35]);
	}else{
	V641=(base[2]);}
	if(!(type_of((V639))==t_cons||((V639))==Cnil)){
	goto T1218;}
	base[4]= (V639);
	base[5]= (V640);
	base[6]= (V641);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk57)();
	return;
	goto T1218;
T1218:;
	base[4]= (*(LnkLI58))((V639),0,(long)length((V639)),(V640),(V641));
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for LIST-MERGE-SORT	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_reserve(VM40);
	{object V642;
	check_arg(3);
	V642=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V642);
	vs_top=(vs_base=base+3)+1;
	L41(base);
	return;
	}
}
/*	local entry for function QUICK-SORT	*/

static object LI42(V648,V649,V650,V651,V652)

register object V648;long V649;long V650;register object V651;register object V652;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	if(!((V650)<=((long)(1)+(V649)))){
	goto T1225;}
	{object V653 = (V648);
	VMR41(V653)}
	goto T1225;
T1225:;
	{register long V654;
	register long V655;
	object V656;
	register object V657;
	V654= V649;
	V655= V650;
	V656= elt((V648),V649);
	V657= (
	(type_of((V652)) == t_sfun ?(*(((V652))->sfn.sfn_self)):
	(fcall.fun=((V652)),fcall.argd=1,fcalln))((V656)));
	goto T1233;
T1233:;
	goto T1237;
T1237:;
	V655= (long)(-1)+(V655);
	if((V654)<(V655)){
	goto T1241;}
	goto T1231;
	goto T1241;
T1241:;
	base[3]= elt((V648),V655);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V652));
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V657);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V651));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1238;}
	goto T1235;
	goto T1238;
T1238:;
	goto T1237;
	goto T1235;
T1235:;
	goto T1252;
T1252:;
	V654= (long)(1)+(V654);
	if((V654)<(V655)){
	goto T1256;}
	goto T1231;
	goto T1256;
T1256:;
	base[3]= elt((V648),V654);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V652));
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V657);
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V651));
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1253;}
	goto T1250;
	goto T1253;
T1253:;
	goto T1252;
	goto T1250;
T1250:;
	{object V658;
	V658= elt((V648),V654);
	V659= elt((V648),V655);
	(void)(elt_set((V648),V654,/* INLINE-ARGS */V659));
	(void)(elt_set((V648),V655,(V658)));}
	goto T1233;
	goto T1231;
T1231:;
	V660= elt((V648),V654);
	(void)(elt_set((V648),V649,/* INLINE-ARGS */V660));
	(void)(elt_set((V648),V654,(V656)));
	(void)((*(LnkLI58))((V648),V649,V654,(V651),(V652)));
	V649= (long)(1)+(V654);
	goto TTL;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for STABLE-SORT	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	{register object V661;
	object V662;
	object V663;
	if(vs_top-vs_base<2) too_few_arguments();
	parse_key(vs_base+2,FALSE,FALSE,1,VV[17]);
	V661=(base[0]);
	V662=(base[1]);
	vs_top=sup;
	if(base[3]==Cnil){
	V663= symbol_function(VV[35]);
	}else{
	V663=(base[2]);}
	if(!(type_of((V661))==t_cons||((V661))==Cnil)){
	goto T1279;}
	base[4]= (V661);
	base[5]= (V662);
	base[6]= (V663);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk57)();
	return;
	goto T1279;
T1279:;
	if(type_of((V661))==t_string){
	goto T1284;}
	if(!((type_of((V661))==t_bitvector))){
	goto T1285;}
	goto T1284;
T1284:;
	base[4]= (V661);
	base[5]= (V662);
	base[6]= VV[17];
	base[7]= (V663);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk59)();
	return;
	goto T1285;
T1285:;
	base[4]= (*(LnkLI60))((V661),VV[0]);
	base[5]= (V662);
	base[6]= (V663);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk57)();
	vs_top=sup;
	V664= vs_base[0];
	V665= (*(LnkLI49))((V661));
	base[4]= (*(LnkLI60))(V664,/* INLINE-ARGS */V665);
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function MERGE	*/

static object LI44(object V669,object V668,object V667,object V666,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	{object V670;
	register object V671;
	object V672;
	object V673;
	register object V674;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V670= V669;
	V671= V668;
	V672= V667;
	V673= V666;
	narg= narg - 4;
	{
	parse_key_new_new(narg,Vcs +4,(struct key *)(void *)&LI44key,first,ap);
	if(Vcs[4]==0){
	V674= symbol_function(VV[35]);
	}else{
	V674=(Vcs[4]);}
	{long V675;
	long V676;
	V675= (long)length((V671));
	V676= (long)length((V672));
	if(!(equal((V674),Cnil))){
	goto T1300;}
	V674= symbol_function(VV[35]);
	goto T1300;
T1300:;
	{register object V677;
	register long V678;
	register long V679;
	register long V680;
	V681 = make_fixnum((long)(V675)+(V676));
	V677= (VFUN_NARGS=2,(*(LnkLI48))((V670),V681));
	V678= 0;
	V679= 0;
	V680= 0;
	goto T1309;
T1309:;
	if(!((V679)==(V675))){
	goto T1310;}
	if(!((V680)==(V676))){
	goto T1310;}
	{object V682 = (V677);
	VMR43(V682)}
	goto T1310;
T1310:;
	if(!((V679)<(V675))){
	goto T1318;}
	if(!((V680)<(V676))){
	goto T1318;}
	base[1]= elt((V671),V679);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V674));
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= elt((V672),V680);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V674));
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V673));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1323;}
	V683= elt((V671),V679);
	(void)(elt_set((V677),V678,/* INLINE-ARGS */V683));
	V679= (long)(1)+(V679);
	goto T1316;
	goto T1323;
T1323:;
	base[1]= elt((V672),V680);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V674));
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= elt((V671),V679);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V674));
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	super_funcall_no_event((V673));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1332;}
	V684= elt((V672),V680);
	(void)(elt_set((V677),V678,/* INLINE-ARGS */V684));
	V680= (long)(1)+(V680);
	goto T1316;
	goto T1332;
T1332:;
	V685= elt((V671),V679);
	(void)(elt_set((V677),V678,/* INLINE-ARGS */V685));
	V679= (long)(1)+(V679);
	goto T1316;
	goto T1318;
T1318:;
	if(!((V679)<(V675))){
	goto T1343;}
	V686= elt((V671),V679);
	(void)(elt_set((V677),V678,/* INLINE-ARGS */V686));
	V679= (long)(1)+(V679);
	goto T1316;
	goto T1343;
T1343:;
	V687= elt((V672),V680);
	(void)(elt_set((V677),V678,/* INLINE-ARGS */V687));
	V680= (long)(1)+(V680);
	goto T1316;
T1316:;
	V678= (long)(1)+(V678);
	goto T1309;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAP-INTO	*/

static object LI45(object V689,object V688,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB44 VMS44 VMV44
	{register object V690;
	register object V691;
	register object V692;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V690= V689;
	V691= V688;
	narg= narg - 2;
	V693 = list_vector_new(narg,first,ap);
	V692= V693;
	{object V694;
	base[2]= (V690);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= VV[18];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk61)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1355;}
	base[1]= (V690);
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+1)+2;
	Larray_dimension();
	vs_top=sup;
	base[0]= vs_base[0];
	goto T1353;
	goto T1355;
T1355:;
	base[0]= make_fixnum((long)length((V690)));
	goto T1353;
T1353:;
	{object V695;
	{object V696;
	object V697= (V692);
	if(endp(V697)){
	V695= Cnil;
	goto T1362;}
	base[1]=V696=MMcons(Cnil,Cnil);
	goto T1363;
T1363:;
	base[2]= (V697->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Llength();
	vs_top=sup;
	(V696->c.c_car)= vs_base[0];
	V697=MMcdr(V697);
	if(endp(V697)){
	V695= base[1];
	goto T1362;}
	V696=MMcdr(V696)=MMcons(Cnil,Cnil);
	goto T1363;}
	goto T1362;
T1362:;
	 vs_top=base+1;
	 while(!endp(V695))
	 {vs_push(car(V695));V695=cdr(V695);}
	vs_base=base+0;}
	Lmin();
	vs_top=sup;
	V694= vs_base[0];
	base[1]= (V690);
	vs_top=(vs_base=base+1)+1;
	Ltype_of();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= VV[18];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk61)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1366;}
	base[0]= (V690);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk62)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1366;}
	base[0]= (V690);
	base[1]= (V694);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T1366;
T1366:;
	{register object V698;
	register object V699;
	V698= (V694);
	V699= small_fixnum(0);
	goto T1380;
T1380:;
	if(!(number_compare((V699),(V698))>=0)){
	goto T1381;}
	{object V700 = (V690);
	VMR44(V700)}
	goto T1381;
T1381:;
	base[0]= (V691);
	{object V702;
	{object V703;
	object V704= (V692);
	if(endp(V704)){
	V702= Cnil;
	goto T1388;}
	base[1]=V703=MMcons(Cnil,Cnil);
	goto T1389;
T1389:;
	{register object V705;
	V705= (V704->c.c_car);
	(V703->c.c_car)= elt((V705),fixint((V699)));}
	V704=MMcdr(V704);
	if(endp(V704)){
	V702= base[1];
	goto T1388;}
	V703=MMcdr(V703)=MMcons(Cnil,Cnil);
	goto T1389;}
	goto T1388;
T1388:;
	 vs_top=base+1;
	 while(!endp(V702))
	 {vs_push(car(V702));V702=cdr(V702);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V701= vs_base[0];
	(void)(elt_set((V690),fixint((V699)),V701));
	V699= one_plus((V699));
	goto T1380;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for WITH-HASH-TABLE-ITERATOR	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	check_arg(2);
	vs_top=sup;
	{object V706=base[0]->c.c_cdr;
	if(endp(V706))invalid_macro_call();
	{object V707= (V706->c.c_car);
	if(endp(V707))invalid_macro_call();
	base[2]= (V707->c.c_car);
	V707=V707->c.c_cdr;
	if(endp(V707))invalid_macro_call();
	base[3]= (V707->c.c_car);
	V707=V707->c.c_cdr;
	if(!endp(V707))invalid_macro_call();}
	V706=V706->c.c_cdr;
	base[4]= V706;}
	{object V708;
	object V709;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V708= vs_base[0];
	base[5]= VV[19];
	vs_top=(vs_base=base+5)+1;
	Lgensym();
	vs_top=sup;
	V709= vs_base[0];
	V710= list(2,(V708),base[3]);
	V711= list(2,/* INLINE-ARGS */V710,list(2,(V709),small_fixnum(0)));
	V712= list(2,VV[25],(V708));
	V713= list(4,VV[0],VV[24],/* INLINE-ARGS */V712,list(2,VV[25],(V709)));
	V714= list(3,base[2],Cnil,list(5,VV[0],VV[22],VV[23],/* INLINE-ARGS */V713,list(4,VV[0],VV[26],list(4,VV[0],VV[27],list(4,VV[0],VV[28],list(2,VV[25],(V709)),VV[29]),VV[30]),VV[31])));
	base[5]= list(3,VV[20],/* INLINE-ARGS */V711,listA(3,VV[21],make_cons(/* INLINE-ARGS */V714,Cnil),base[4]));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function SORT	*/

static void L41(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{object V715;
	check_arg(1);
	V715=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{long V716;
	register object V717;
	register object V718;
	object V719;
	register object V720;
	register object V721;
	register object V722;
	V716= 0;
	V717= Cnil;
	V718= Cnil;
	V719= Cnil;
	V720= Cnil;
	V721= Cnil;
	V722= Cnil;
	V716= (long)length((V715));
	if(!((V716)<(2))){
	goto T1406;}
	base[1]= (V715);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1406;
T1406:;
	if(!((V716)==(2))){
	goto T1404;}
	V721= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V715))));
	V722= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(cadr((V715))));
	base[1]= (V721);
	base[2]= (V722);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1415;}
	base[1]= (V715);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1415;
T1415:;
	base[1]= (V722);
	base[2]= (V721);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1420;}
	base[1]= nreverse((V715));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1420;
T1420:;
	base[1]= (V715);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1404;
T1404:;
	V716= (long)(V716>=0&&(2)>0?(V716)/(2):ifloor(V716,2));
	{long V723;
	register object V724;
	V723= 1;
	V724= (V715);
	goto T1429;
T1429:;
	if(!((V723)>=(V716))){
	goto T1430;}
	V717= (V715);
	V718= cdr((V724));
	if(type_of((V724))!=t_cons)FEwrong_type_argument(Scons,(V724));
	((V724))->c.c_cdr = Cnil;
	goto T1426;
	goto T1430;
T1430:;
	V723= (long)(1)+(V723);
	V724= cdr((V724));
	goto T1429;}
	goto T1426;
T1426:;
	base[1]= (V717);
	vs_top=(vs_base=base+1)+1;
	L41(base0);
	vs_top=sup;
	V717= vs_base[0];
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	L41(base0);
	vs_top=sup;
	V718= vs_base[0];
	if(!(endp_prop((V717)))){
	goto T1450;}
	base[1]= (V718);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1450;
T1450:;
	if(!(endp_prop((V718)))){
	goto T1448;}
	base[1]= (V717);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1448;
T1448:;
	V719= make_cons(Cnil,Cnil);
	V720= (V719);
	V721= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V717))));
	V722= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V718))));
	goto T1399;
T1399:;
	base[1]= (V721);
	base[2]= (V722);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1462;}
	goto T1400;
	goto T1462;
T1462:;
	base[1]= (V722);
	base[2]= (V721);
	vs_top=(vs_base=base+1)+2;
	super_funcall_no_event(base0[1]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1467;}
	goto T1401;
	goto T1467;
T1467:;
	goto T1400;
	goto T1400;
T1400:;
	if(type_of((V720))!=t_cons)FEwrong_type_argument(Scons,(V720));
	((V720))->c.c_cdr = (V717);
	V720= cdr((V720));
	V717= cdr((V717));
	if(!(endp_prop((V717)))){
	goto T1476;}
	if(type_of((V720))!=t_cons)FEwrong_type_argument(Scons,(V720));
	((V720))->c.c_cdr = (V718);
	base[1]= cdr((V719));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1476;
T1476:;
	V721= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V717))));
	goto T1399;
	goto T1401;
T1401:;
	if(type_of((V720))!=t_cons)FEwrong_type_argument(Scons,(V720));
	((V720))->c.c_cdr = (V718);
	V720= cdr((V720));
	V718= cdr((V718));
	if(!(endp_prop((V718)))){
	goto T1487;}
	if(type_of((V720))!=t_cons)FEwrong_type_argument(Scons,(V720));
	((V720))->c.c_cdr = (V717);
	base[1]= cdr((V719));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1487;
T1487:;
	V722= (
	(type_of(base0[2]) == t_sfun ?(*((base0[2])->sfn.sfn_self)):
	(fcall.fun=(base0[2]),fcall.argd=1,fcalln))(car((V718))));
	goto T1399;}
	}
}
static void LnkT62(){ call_or_link(VV[62],(void **)(void *)&Lnk62);} /* ARRAY-HAS-FILL-POINTER-P */
static void LnkT61(){ call_or_link(VV[61],(void **)(void *)&Lnk61);} /* SUBTYPEP */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],(void **)(void *)&LnkLI60,2,first,ap);va_end(ap);return V1;} /* COERCE */
static void LnkT59(){ call_or_link(VV[59],(void **)(void *)&Lnk59);} /* SORT */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[58],(void **)(void *)&LnkLI58,81925,first,ap);va_end(ap);return V1;} /* QUICK-SORT */
static void LnkT57(){ call_or_link(VV[57],(void **)(void *)&Lnk57);} /* LIST-MERGE-SORT */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[56],(void **)(void *)&LnkLI56,first,ap);va_end(ap);return V1;} /* DELETE-DUPLICATES */
static void LnkT55(){ call_or_link(VV[55],(void **)(void *)&Lnk55);} /* MEMBER1 */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[54],(void **)(void *)&LnkLI54,first,ap);va_end(ap);return V1;} /* POSITION */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[53],(void **)(void *)&LnkLI53,first,ap);va_end(ap);return V1;} /* FIND */
static object  LnkTLI52(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[52],(void **)(void *)&LnkLI52,first,ap);va_end(ap);return V1;} /* NSUBSTITUTE */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[51],(void **)(void *)&LnkLI51,first,ap);va_end(ap);return V1;} /* SUBSTITUTE */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[50],(void **)(void *)&LnkLI50,first,ap);va_end(ap);return V1;} /* COUNT */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],(void **)(void *)&LnkLI49,1,first,ap);va_end(ap);return V1;} /* SEQTYPE */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[48],(void **)(void *)&LnkLI48,first,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[47],(void **)(void *)&LnkLI47,first,ap);va_end(ap);return V1;} /* INTERNAL-COUNT */
static object  LnkTLI45(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[45],(void **)(void *)&LnkLI45,first,ap);va_end(ap);return V1;} /* REMOVE */
static object  LnkTLI44(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[44],(void **)(void *)&LnkLI44,first,ap);va_end(ap);return V1;} /* DELETE */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[43],(void **)(void *)&LnkLI43,4,first,ap);va_end(ap);return V1;} /* CALL-TEST */
static object  LnkTLI42(){return call_proc0(VV[42],(void **)(void *)&LnkLI42);} /* TEST-ERROR */
static object  LnkTLI37(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[37],(void **)(void *)&LnkLI37,258,first,ap);va_end(ap);return V1;} /* THE-END */
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],(void **)(void *)&LnkLI36,257,first,ap);va_end(ap);return V1;} /* THE-START */
static void LnkT33(){ call_or_link(VV[33],(void **)(void *)&Lnk33);} /* BAD-SEQ-LIMIT */
static void LnkT32(){ call_or_link(VV[32],(void **)(void *)&Lnk32);} /* SPECIFIC-ERROR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

