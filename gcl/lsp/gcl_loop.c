
#include "cmpinclude.h"
#include "gcl_loop.h"
void init_gcl_loop(){do_init(VV);}
/*	macro definition for LOOP-COPYLIST*	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= (V1->c.c_car);}
	base[3]= list(2,VV[0],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function LOOP-GENTEMP	*/

static object LI2(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V2;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T1;
	else {
	V2= first;}
	--narg; goto T2;
	goto T1;
T1:;
	V2= VV[1];
	goto T2;
T2:;
	if(((VV[2]->s.s_dbind))==Cnil){
	goto T5;}
	base[0]= coerce_to_string((V2));
	vs_top=(vs_base=base+0)+1;
	Lgentemp();
	vs_top=sup;
	{object V3 = vs_base[0];
	VMR2(V3)}
	goto T5;
T5:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	{object V4 = vs_base[0];
	VMR2(V4)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for LOOP-OPTIMIZATION-QUANTITIES	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V5;
	V5=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= small_fixnum(1);
	base[2]= small_fixnum(1);
	base[3]= small_fixnum(1);
	base[4]= small_fixnum(1);
	base[5]= small_fixnum(1);
	vs_top=(vs_base=base+1)+5;
	return;
	}
}
/*	local entry for function HIDE-VARIABLE-REFERENCES	*/

static object LI4(V8,V9)

object V8;object V9;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V10 = (V9);
	VMR4(V10)}
	return Cnil;
}
/*	local entry for function HIDE-VARIABLE-REFERENCE	*/

static object LI5(V14,V15,V16)

object V14;object V15;object V16;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V17 = (V16);
	VMR5(V17)}
	return Cnil;
}
/*	macro definition for WITH-LOOP-LIST-COLLECTION-HEAD	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	vs_top=sup;
	{object V18=base[0]->c.c_cdr;
	{object V19= (V18->c.c_car);
	base[2]= (V19->c.c_car);
	V19=V19->c.c_cdr;
	base[3]= (V19->c.c_car);
	V19=V19->c.c_cdr;
	if(endp(V19)){
	base[4]= Cnil;
	} else {
	base[4]= (V19->c.c_car);}}
	V18=V18->c.c_cdr;
	base[5]= V18;}
	{object V20;
	if(base[4]==Cnil){
	V20= Cnil;
	goto T14;}
	V21= list(2,base[4],Cnil);
	V20= make_cons(/* INLINE-ARGS */V21,Cnil);
	goto T14;
T14:;
	V22= list(2,base[2],VV[4]);
	base[6]= listA(3,VV[3],listA(3,/* INLINE-ARGS */V22,list(2,base[3],base[2]),(V20)),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for LOOP-COLLECT-RPLACD	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	{object V23=base[0]->c.c_cdr;
	{object V24= (V23->c.c_car);
	base[2]= (V24->c.c_car);
	V24=V24->c.c_cdr;
	base[3]= (V24->c.c_car);
	V24=V24->c.c_cdr;
	if(endp(V24)){
	base[4]= Cnil;
	} else {
	base[4]= (V24->c.c_car);}}
	V23=V23->c.c_cdr;
	base[5]= (V23->c.c_car);}
	base[6]= base[5];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lmacroexpand();
	vs_top=sup;
	base[5]= vs_base[0];
	{register object V26;
	V26= Cnil;
	if(!(type_of(base[5])==t_cons)){
	goto T20;}
	if(!((CMPcar(base[5]))==(VV[5]))){
	goto T24;}
	V27 = CMPmake_fixnum((long)length(CMPcdr(base[5])));
	V26= one_minus(V27);
	goto T20;
	goto T24;
T24:;
	{register object x= CMPcar(base[5]),V28= VV[6];
	while(V28!=Cnil)
	if(eql(x,V28->c.c_car)){
	goto T28;
	}else V28=V28->c.c_cdr;
	goto T20;}
	goto T28;
T28:;
	if((CMPcddr(base[5]))==Cnil){
	goto T20;}
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	Llast();
	vs_top=sup;
	V30= vs_base[0];
	{register object x= CMPcar(V30),V29= VV[7];
	while(V29!=Cnil)
	if(eql(x,V29->c.c_car)){
	goto T32;
	}else V29=V29->c.c_cdr;
	goto T20;}
	goto T32;
T32:;
	V31 = CMPmake_fixnum((long)length(CMPcdr(base[5])));
	V26= number_minus(V31,small_fixnum(2));
	goto T20;
T20:;
	{object V32;
	if(((V26))!=Cnil){
	goto T38;}
	V33= list(3,VV[9],list(2,VV[10],base[3]),base[5]);
	V32= list(3,VV[8],/* INLINE-ARGS */V33,list(3,VV[11],base[3],list(2,VV[12],list(2,VV[10],base[3]))));
	goto T36;
	goto T38;
T38:;
	if(!(number_compare((V26),small_fixnum(0))<0)){
	goto T41;}
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	return;
	goto T41;
T41:;
	if(!(number_compare((V26),small_fixnum(0))==0)){
	goto T44;}
	V32= list(3,VV[13],base[3],list(3,VV[11],base[3],base[5]));
	goto T36;
	goto T44;
T44:;
	base[6]= list(3,VV[9],list(2,VV[10],base[3]),base[5]);
	base[7]= (V26);
	vs_top=(vs_base=base+6)+2;
	L8(base);
	vs_top=sup;
	V34= vs_base[0];
	V32= list(3,VV[11],base[3],V34);
	goto T36;
T36:;
	if((base[4])==Cnil){
	goto T49;}
	V32= list(3,VV[14],(V32),list(3,VV[11],base[4],list(2,VV[10],base[2])));
	goto T49;
T49:;
	base[6]= (V32);
	vs_top=(vs_base=base+6)+1;
	return;}}
}
/*	macro definition for LOOP-COLLECT-ANSWER	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	{object V35=base[0]->c.c_cdr;
	base[2]= (V35->c.c_car);
	V35=V35->c.c_cdr;
	if(endp(V35)){
	base[3]= Cnil;
	} else {
	base[3]= (V35->c.c_car);}}
	if(base[3]!=Cnil){
	vs_top=(vs_base=base+3)+1;
	return;}
	base[4]= list(2,VV[10],base[2]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-LOOP-MINIMAX-INTERNAL	*/

static object LI10(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V36;
	object V37;
	object V38;
	object V39;
	object V40;
	object V41;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI10key,first,ap);
	V36=(Vcs[0]);
	V37=(Vcs[1]);
	V38=(Vcs[2]);
	V39=(Vcs[3]);
	V40=(Vcs[4]);
	V41=(Vcs[5]);
	base[0]= VV[18];
	base[1]= (V36);
	base[2]= (V37);
	base[3]= (V38);
	base[4]= (V39);
	base[5]= (V40);
	base[6]= (V41);
	vs_top=(vs_base=base+0)+7;
	siLmake_structure();
	vs_top=sup;
	{object V42 = vs_base[0];
	VMR9(V42)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-LOOP-MINIMAX	*/

static object LI11(V45,V46)

object V45;object V46;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V47;
	base[0]= (V46);
	base[1]= (VV[19]->s.s_dbind);
	base[2]= VV[20];
	base[3]= (VV[326]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lassoc();
	vs_top=sup;
	V48= vs_base[0];
	V47= CMPcdr(V48);
	V49= (VFUN_NARGS=1,(*(LnkLI328))(VV[24]));
	if(((V47))==Cnil){
	goto T68;}
	V50= Cnil;
	goto T67;
	goto T68;
T68:;
	V50= (VFUN_NARGS=1,(*(LnkLI328))(VV[26]));
	goto T67;
T67:;
	{object V51 = (VFUN_NARGS=12,(*(LnkLI327))(VV[21],(V45),VV[22],(V46),VV[23],/* INLINE-ARGS */V49,VV[25],V50,VV[27],Cnil,VV[28],(V47)));
	VMR10(V51)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-NOTE-MINIMAX-OPERATION	*/

static object LI12(V54,V55)

object V54;register object V55;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V58;
	base[1]= V54;
	base[2]= STREF(object,V55,16);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V58= vs_base[0];
	V59= Ct;
	STSET(object,V55,16, (V58));
	(void)((V58));}
	if((CMPcdr(STREF(object,(V55),16)))==Cnil){
	goto T74;}
	if((STREF(object,(V55),12))!=Cnil){
	goto T74;}
	V60= (VFUN_NARGS=1,(*(LnkLI328))(VV[26]));
	V61= Ct;
	STSET(object,(V55),12, /* INLINE-ARGS */V60);
	(void)(/* INLINE-ARGS */V60);
	goto T74;
T74:;
	{object V62 = (V54);
	VMR11(V62)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for WITH-MINIMAX-VALUE	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	vs_top=sup;
	{object V63=base[0]->c.c_cdr;
	base[2]= (V63->c.c_car);
	V63=V63->c.c_cdr;
	base[3]= V63;}
	{object V64;
	object V65;
	object V66;
	register object V67;
	register object V68;
	object V69;
	object V70;
	V64= (*(LnkLI329))(STREF(object,base[2],4));
	V65= CMPcar(STREF(object,base[2],16));
	V66= STREF(object,base[2],20);
	V67= STREF(object,base[2],0);
	V68= STREF(object,base[2],8);
	V69= STREF(object,base[2],12);
	V70= STREF(object,base[2],4);
	if(((V69))==Cnil){
	goto T87;}
	V71= list(2,(V67),(V64));
	V72= list(2,(V68),(V64));
	V73= list(3,/* INLINE-ARGS */V71,/* INLINE-ARGS */V72,list(2,(V69),Cnil));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V73,list(2,VV[30],list(4,VV[31],(V70),(V67),(V68))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T87;
T87:;
	if(!(((V65))==(VV[32]))){
	goto T91;}
	V74= CMPcar((V66));
	goto T89;
	goto T91;
T91:;
	V74= CMPcadr((V66));
	goto T89;
T89:;
	V75= list(2,(V67),V74);
	V76= list(2,/* INLINE-ARGS */V75,list(2,(V68),(V64)));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V76,list(2,VV[30],list(4,VV[31],(V70),(V67),(V68))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for LOOP-ACCUMULATE-MINIMAX-VALUE	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	vs_top=sup;
	{object V77=base[0]->c.c_cdr;
	base[2]= (V77->c.c_car);
	V77=V77->c.c_cdr;
	base[3]= (V77->c.c_car);
	V77=V77->c.c_cdr;
	base[4]= (V77->c.c_car);}
	{object V78;
	object V79;
	register object V80;
	object V81;
	V78= STREF(object,base[2],0);
	V79= STREF(object,base[2],8);
	V80= STREF(object,base[2],12);
	{object V83= base[3];
	if((V83!= VV[32]))goto T98;
	V82= VV[33];
	goto T97;
	goto T98;
T98:;
	if((V83!= VV[331]))goto T99;
	V82= VV[34];
	goto T97;
	goto T99;
T99:;
	FEerror("The ECASE key value ~s is illegal.",1,V83);
	V82= Cnil;
	goto T97;}
	goto T97;
T97:;
	V84= list(3,V82,(V79),(V78));
	V81= (*(LnkLI330))(Ct,STREF(object,base[2],0),/* INLINE-ARGS */V84);
	V85= list(3,VV[11],(V79),base[4]);
	if(((V80))==Cnil){
	goto T102;}
	V86= list(3,VV[35],list(2,VV[36],(V80)),(V81));
	goto T100;
	goto T102;
T102:;
	V86= (V81);
	goto T100;
T100:;
	if((V80)==Cnil){
	V87= Cnil;
	goto T104;}
	V87= list(2,(V80),Ct);
	goto T104;
T104:;
	V88= list(2,(V78),(V79));
	V89= append(V87,/* INLINE-ARGS */V88);
	base[9]= list(3,VV[14],/* INLINE-ARGS */V85,list(3,VV[8],V86,make_cons(VV[11],/* INLINE-ARGS */V89)));
	vs_top=(vs_base=base+9)+1;
	return;}
}
/*	local entry for function LOOP-TEQUAL	*/

static object LI15(V92,V93)

object V92;object V93;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(type_of((V92))==t_symbol){
	goto T105;}
	{object V94 = Cnil;
	VMR14(V94)}
	goto T105;
T105:;
	base[0]= (V92);
	base[1]= (V93);
	vs_top=(vs_base=base+0)+2;
	Lstring_eq();
	vs_top=sup;
	{object V95 = vs_base[0];
	VMR14(V95)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-TASSOC	*/

static object LI16(V98,V99)

object V98;object V99;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(type_of((V98))==t_symbol){
	goto T109;}
	{object V100 = Cnil;
	VMR15(V100)}
	goto T109;
T109:;
	base[0]= (V98);
	base[1]= (V99);
	base[2]= VV[20];
	base[3]= (VV[332]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lassoc();
	vs_top=sup;
	{object V101 = vs_base[0];
	VMR15(V101)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-TMEMBER	*/

static object LI17(V104,V105)

object V104;object V105;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(type_of((V104))==t_symbol){
	goto T115;}
	{object V106 = Cnil;
	VMR16(V106)}
	goto T115;
T115:;
	base[0]= (V104);
	base[1]= (V105);
	base[2]= VV[20];
	base[3]= (VV[332]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	{object V107 = vs_base[0];
	VMR16(V107)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-LOOKUP-KEYWORD	*/

static object LI18(V110,V111)

object V110;object V111;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(type_of((V110))==t_symbol){
	goto T121;}
	{object V112 = Cnil;
	VMR17(V112)}
	goto T121;
T121:;
	base[1]= symbol_name((V110));
	base[2]= (V111);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	vs_top=sup;
	{object V113 = vs_base[0];
	VMR17(V113)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for LOOP-STORE-TABLE-DATA	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	vs_top=sup;
	{object V114=base[0]->c.c_cdr;
	base[2]= (V114->c.c_car);
	V114=V114->c.c_cdr;
	base[3]= (V114->c.c_car);
	V114=V114->c.c_cdr;
	base[4]= (V114->c.c_car);}
	base[5]= list(3,VV[9],list(3,VV[37],list(2,VV[38],base[2]),base[3]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-LOOP-UNIVERSE	*/

static object LI20(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V115;
	object V116;
	object V117;
	object V118;
	object V119;
	object V120;
	object V121;
	object V122;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI20key,first,ap);
	V115=(Vcs[0]);
	V116=(Vcs[1]);
	V117=(Vcs[2]);
	V118=(Vcs[3]);
	V119=(Vcs[4]);
	V120=(Vcs[5]);
	V121=(Vcs[6]);
	V122=(Vcs[7]);
	base[0]= VV[39];
	base[1]= (V115);
	base[2]= (V116);
	base[3]= (V117);
	base[4]= (V118);
	base[5]= (V119);
	base[6]= (V120);
	base[7]= (V121);
	base[8]= (V122);
	vs_top=(vs_base=base+0)+9;
	siLmake_structure();
	vs_top=sup;
	{object V123 = vs_base[0];
	VMR19(V123)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function PRINT-LOOP-UNIVERSE	*/

static object LI21(V127,V128,V129)

object V127;object V128;object V129;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V130;
	{object V131= STREF(object,(V127),24);
	if((V131!= Cnil))goto T136;
	V130= VV[40];
	goto T135;
	goto T136;
T136:;
	if((V131!= Ct))goto T137;
	V130= VV[41];
	goto T135;
	goto T137;
T137:;
	if((V131!= VV[307]))goto T138;
	V130= VV[42];
	goto T135;
	goto T138;
T138:;
	V130= STREF(object,(V127),24);}
	goto T135;
T135:;
	base[0]= (V128);
	base[1]= VV[43];
	base[3]= (V127);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V130);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V132 = vs_base[0];
	VMR20(V132)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STANDARD-LOOP-UNIVERSE	*/

static object LI22(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	bds_check;
	{object V133;
	object V134;
	object V135;
	object V136;
	object V137;
	object V138;
	register object V139;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI22key,first,ap);
	V133=(Vcs[0]);
	V134=(Vcs[1]);
	V135=(Vcs[2]);
	V136=(Vcs[3]);
	V137=(Vcs[4]);
	V138=(Vcs[5]);
	V139=(Vcs[6]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T146;
T146:;
	base[2]= (V139);
	base[3]= VV[46];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T147;}
	bds_unwind1;
	bds_unwind1;
	goto T144;
	goto T147;
T147:;
	base[2]= VV[47];
	base[3]= VV[48];
	base[4]= VV[49];
	base[5]= (V139);
	base[6]= VV[46];
	vs_top=(vs_base=base+2)+5;
	Lcerror();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[51];
	base[4]= VV[49];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V139= vs_base[0];
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[52];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T146;
	goto T144;
T144:;
	base[0]= (V133);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V140= vs_base[0];
	base[0]= (V134);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V141= vs_base[0];
	base[0]= (V135);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V142= vs_base[0];
	base[0]= (V136);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V143= vs_base[0];
	V144= (((((V139))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	base[0]= (V137);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V145= vs_base[0];
	{object V147;
	object V148;
	V147= CMPmake_fixnum((long)length((V138)));
	base[2]= VV[61];
	if(!(number_compare((V147),small_fixnum(10))<0)){
	goto T188;}
	base[3]= small_fixnum(10);
	goto T186;
	goto T188;
T188:;
	base[3]= (V147);
	goto T186;
T186:;
	base[4]= VV[20];
	base[5]= (VV[335]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	Lmake_hash_table();
	vs_top=sup;
	V148= vs_base[0];
	{register object V149;
	register object V150;
	V149= (V138);
	V150= CMPcar((V149));
	goto T196;
T196:;
	if(!(((V149))==Cnil)){
	goto T197;}
	goto T192;
	goto T197;
T197:;
	if(!(type_of((V150))!=t_cons)){
	goto T203;}
	base[3]= V150;
	base[4]= V148;
	base[5]= V150;
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	goto T201;
	goto T203;
T203:;
	{object V154;
	object V156;
	V154= CMPcar((V150));
	V156= CMPcadr((V150));
	base[5]= (V154);
	base[6]= V148;
	base[7]= (V156);
	vs_top=(vs_base=base+5)+3;
	siLhash_set();
	vs_top=sup;}
	goto T201;
T201:;
	V149= CMPcdr((V149));
	V150= CMPcar((V149));
	goto T196;}
	goto T192;
T192:;
	V146= (V148);}
	{object V157 = (VFUN_NARGS=16,(*(LnkLI334))(VV[53],V140,VV[54],V141,VV[55],V142,VV[56],V143,VV[57],(V139),VV[58],/* INLINE-ARGS */V144,VV[59],V145,VV[60],V146));
	VMR21(V157)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-MAKE-PSETQ	*/

static object LI24(V159)

register object V159;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	if((V159)==Cnil){
	{object V160 = Cnil;
	VMR22(V160)}}
	V161= CMPcar((V159));
	if((CMPcddr((V159)))!=Cnil){
	goto T220;}
	V162= CMPcadr((V159));
	goto T218;
	goto T220;
T220:;
	V163= CMPcadr((V159));
	V162= list(3,VV[62],/* INLINE-ARGS */V163,(*(LnkLI337))(CMPcddr((V159))));
	goto T218;
T218:;
	V164= list(2,/* INLINE-ARGS */V161,V162);
	{object V165 = (*(LnkLI336))(/* INLINE-ARGS */V164);
	VMR22(V165)}
	return Cnil;
}
/*	local entry for function LOOP-MAKE-DESETQ	*/

static object LI25(V167)

object V167;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	if(((V167))!=Cnil){
	goto T223;}
	{object V168 = Cnil;
	VMR23(V168)}
	goto T223;
T223:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T227;}
	V169= CMPcadr((VV[63]->s.s_dbind));
	goto T225;
	goto T227;
T227:;
	V169= VV[64];
	goto T225;
T225:;
	{object V170 = make_cons(V169,(V167));
	VMR23(V170)}
	return Cnil;
}
/*	macro definition for LOOP-REALLY-DESETQ	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	vs_top=sup;
	{object V171=base[0]->c.c_cdr;
	base[2]= V171;}
	{register object V172;
	V172= Cnil;
	goto T230;
T230:;
	if((base[2])!=Cnil){
	goto T231;}
	if((CMPcdr((V172)))!=Cnil){
	goto T235;}
	base[3]= CMPcar((V172));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T235;
T235:;
	V173= nreverse((V172));
	base[3]= make_cons(VV[14],/* INLINE-ARGS */V173);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T231;
T231:;
	{register object V174;
	V174= CMPcar(base[2]);
	base[2]= CMPcdr(base[2]);
	base[4]= (V174);}
	{register object V175;
	V175= CMPcar(base[2]);
	base[2]= CMPcdr(base[2]);
	base[5]= (V175);}
	vs_top=(vs_base=base+4)+2;
	L28(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V172);
	vs_top=(vs_base=base+3)+2;
	Lrevappend();
	vs_top=sup;
	V172= vs_base[0];
	goto T230;}
}
/*	function definition for LOOP-CONSTANT-FOLD-IF-POSSIBLE	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V176;
	object V177;
	V176=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T252;}
	V177=(base[1]);
	vs_top=sup;
	goto T253;
	goto T252;
T252:;
	V177= Cnil;
	goto T253;
T253:;
	{register object V179;
	register object V180;
	V179= Cnil;
	V180= Cnil;
	base[2]= V176;
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	V179= vs_base[0];
	if(((V179))==Cnil){
	goto T255;}
	base[2]= V176;
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V180= vs_base[0];
	goto T255;
T255:;
	if(((V179))==Cnil){
	goto T262;}
	if(((V177))==Cnil){
	goto T262;}
	base[2]= (V180);
	base[3]= (V177);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T262;}
	(void)((VFUN_NARGS=4,(*(LnkLI338))(VV[67],(V176),(V180),(V177))));
	V179= Cnil;
	V180= Cnil;
	goto T262;
T262:;
	base[2]= V176;
	base[3]= (V179);
	base[4]= (V180);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function LOOP-CONSTANTP	*/

static object LI30(V182)

object V182;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]= (V182);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	{object V183 = vs_base[0];
	VMR26(V183)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-CODE-DUPLICATION-THRESHOLD	*/

static object LI31(V185)

object V185;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V186;
	object V187;
	base[0]= (V185);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk339)();
	if(vs_base>=vs_top){vs_top=sup;goto T281;}
	V186= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T282;}
	V187= vs_base[0];
	vs_top=sup;
	goto T283;
	goto T281;
T281:;
	V186= Cnil;
	goto T282;
T282:;
	V187= Cnil;
	goto T283;
T283:;
	V188= number_minus((V186),(V187));
	V189= number_times(/* INLINE-ARGS */V188,small_fixnum(10));
	{object V190 = number_plus(small_fixnum(40),/* INLINE-ARGS */V189);
	VMR27(V190)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for LOOP-BODY	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	vs_top=sup;
	{object V191=base[0]->c.c_cdr;
	base[2]= (V191->c.c_car);
	V191=V191->c.c_cdr;
	base[3]= (V191->c.c_car);
	V191=V191->c.c_cdr;
	base[4]= (V191->c.c_car);
	V191=V191->c.c_cdr;
	base[5]= (V191->c.c_car);
	V191=V191->c.c_cdr;
	base[6]= (V191->c.c_car);
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= Cnil;}
	if(((long)length(base[3]))==((long)length(base[5]))){
	goto T287;}
	base[10]= VV[68];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
	goto T287;
T287:;
	base[7]= reverse(base[3]);
	base[8]= reverse(base[5]);
	if(((VV[69]->s.s_dbind))!=Cnil){
	goto T296;}
	if((base[7])!=Cnil){
	goto T295;}
	goto T296;
T296:;
	vs_base=vs_top;
	L35(base);
	return;
	goto T295;
T295:;
	{register long V192;
	V192= fix((*(LnkLI340))(base[1]));
	goto T302;
T302:;
	goto T307;
T307:;
	if((base[7])==Cnil){
	goto T309;}
	if(equal(CMPcar(base[7]),CMPcar(base[8]))){
	goto T308;}
	goto T309;
T309:;
	goto T305;
	goto T308;
T308:;
	{register object V193;
	{register object V194;
	V194= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V193= (V194);}
	base[4]= make_cons((V193),base[4]);}
	{register object V195;
	V195= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);}
	goto T307;
	goto T305;
T305:;
	if((base[7])!=Cnil){
	goto T326;}
	vs_base=vs_top;
	L35(base);
	return;
	goto T326;
T326:;
	{register object V196;
	register object V197;
	register object V198;
	register object V199;
	register object V200;
	V196= base[7];
	V197= base[8];
	V198= Cnil;
	V199= small_fixnum(0);
	V200= Cnil;
	goto T331;
T331:;
	if(((V196))!=Cnil){
	goto T332;}
	vs_base=vs_top;
	L35(base);
	return;
	goto T332;
T332:;
	if(equal(CMPcar((V196)),CMPcar((V197)))){
	goto T338;}
	V198= (V196);
	V199= small_fixnum(0);
	goto T336;
	goto T338;
T338:;
	base[10]= CMPcar((V196));
	base[11]= base[1];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V200= vs_base[0];
	if(((V200))==Cnil){
	goto T343;}
	V199= number_plus((V199),(V200));
	V201 = CMPmake_fixnum(V192);
	if(!(number_compare((V199),V201)>0)){
	goto T336;}
	goto T343;
T343:;
	{register object V202;
	register object V203;
	V202= Cnil;
	V203= Cnil;
	goto T354;
T354:;
	{register object V204;
	{register object V205;
	V205= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V204= (V205);}
	V203= make_cons((V204),(V203));}
	{register object V206;
	{register object V207;
	V207= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);
	V206= (V207);}
	V202= make_cons((V206),(V202));}
	if(!((base[7])==(CMPcdr((V198))))){
	goto T369;}
	goto T352;
	goto T369;
T369:;
	goto T354;
	goto T352;
T352:;
	if((base[9])!=Cnil){
	goto T374;}
	{register object V208;
	base[9]= (VV[70]->s.s_dbind);
	V208= list(3,VV[11],base[9],Ct);
	V203= make_cons((V208),(V203));}
	goto T374;
T374:;
	{register object V209;
	base[12]= (V202);
	vs_top=(vs_base=base+12)+1;
	L33(base);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	L34(base);
	vs_top=sup;
	V210= vs_base[0];
	base[12]= (V203);
	vs_top=(vs_base=base+12)+1;
	L33(base);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	L34(base);
	vs_top=sup;
	V211= vs_base[0];
	V209= list(4,VV[71],base[9],V210,V211);
	base[4]= make_cons((V209),base[4]);}}
	goto T390;
T390:;
	{register object V212;
	V212= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);}
	{register object V213;
	{register object V214;
	V214= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V213= (V214);}
	base[4]= make_cons((V213),base[4]);}
	if(!((base[7])==(CMPcdr((V196))))){
	goto T403;}
	goto T388;
	goto T403;
T403:;
	goto T390;
	goto T388;
T388:;
	goto T329;
	goto T336;
T336:;
	V196= CMPcdr((V196));
	V197= CMPcdr((V197));
	goto T331;}
	goto T329;
T329:;
	goto T302;}
}
/*	local entry for function DUPLICATABLE-CODE-P	*/

static object LI36(V217,V218)

object V217;object V218;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(((V217))!=Cnil){
	goto T415;}
	{long V219 = 0;
	VMR29((object)V219)}
	goto T415;
T415:;
	{long V220;
	base[0]= (V217);
	base[1]= (V218);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V220= fix(vs_base[0]);
	{long V221 = V220;
	VMR29((object)V221)}}
	base[0]=base[0];
}
/*	local entry for function DESTRUCTURING-SIZE	*/

static object LI37(V223)

object V223;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{register object V224;
	register object V225;
	V224= (V223);
	V225= small_fixnum(0);
	goto T421;
T421:;
	if(!(type_of((V224))!=t_cons)){
	goto T422;}
	if(((V224))!=Cnil){
	goto T427;}
	V226= small_fixnum(0);
	goto T425;
	goto T427;
T427:;
	V226= small_fixnum(1);
	goto T425;
T425:;
	{object V227 = number_plus((V225),V226);
	VMR30(V227)}
	goto T422;
T422:;
	{object V228;
	V228= CMPcdr((V224));
	V229= (*(LnkLI341))(CMPcar((V224)));
	V225= number_plus(/* INLINE-ARGS */V229,(V225));
	V224= (V228);}
	goto T421;}
	return Cnil;
}
/*	function definition for ESTIMATE-CODE-SIZE	*/

static void L38()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM31; VC31
	vs_check;
	{VOL object V230;
	VOL object V231;
	V230=(base[0]);
	V231=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	frs_push(FRS_CATCH,VV[77]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[2]= (V230);
	base[3]= (V231);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk342)();
	frs_pop();
	return;}
	}
}
/*	function definition for ESTIMATE-CODE-SIZE-1	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V232;
	V232=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V232);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T438;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T438;
T438:;
	if(!(type_of((V232))==t_symbol)){
	goto T442;}
	{object V233;
	object V234;
	base[2]= (V232);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T447;}
	V233= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T448;}
	V234= vs_base[0];
	vs_top=sup;
	goto T449;
	goto T447;
T447:;
	V233= Cnil;
	goto T448;
T448:;
	V234= Cnil;
	goto T449;
T449:;
	if(((V234))==Cnil){
	goto T451;}
	V232= (V233);
	goto TTL;
	goto T451;
T451:;
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T442;
T442:;
	if(!(type_of((V232))!=t_cons)){
	goto T457;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T457;
T457:;
	if(!(type_of(CMPcar((V232)))==t_symbol)){
	goto T460;}
	{object V235;
	object V236;
	register long V237;
	V235= CMPcar((V232));
	V237= 0;
	V236= Cnil;
	{object V238 =((V235))->s.s_plist;
	 object ind= VV[77];
	while(V238!=Cnil){
	if(V238->c.c_car==ind){
	V236= (V238->c.c_cdr->c.c_car);
	goto T467;
	}else V238=V238->c.c_cdr->c.c_cdr;}
	V236= Cnil;}
	goto T467;
T467:;
	if(((V236))==Cnil){
	goto T465;}
	if(!(type_of(V236)==t_fixnum)){
	goto T469;}
	base[2]= CMPcdr((V232));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V240= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(fix((V236)))+(V240));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T469;
T469:;
	base[2]= (V232);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V236));
	return;
	goto T465;
T465:;
	{register object x= (V235),V241= (VV[78]->s.s_dbind);
	while(V241!=Cnil)
	if(eql(x,V241->c.c_car->c.c_car) &&V241->c.c_car != Cnil){
	V236= (V241->c.c_car);
	goto T478;
	}else V241=V241->c.c_cdr;
	V236= Cnil;}
	goto T478;
T478:;
	if(((V236))==Cnil){
	goto T476;}
	{long V242= fix(CMPcadr((V236)));
	base[2]= CMPcdr((V232));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V243= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(/* INLINE-ARGS */V242)+(V243));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T476;
T476:;
	if(!(((V235))==(VV[79]))){
	goto T482;}
	{register object V244;
	object V245;
	V244= CMPcdr((V232));
	V245= CMPcar((V244));
	goto T487;
T487:;
	if(!(((V244))==Cnil)){
	goto T488;}
	base[4]= CMPmake_fixnum(V237);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T488;
T488:;
	V246 = CMPmake_fixnum(V237);
	base[4]= (V245);
	vs_top=(vs_base=base+4)+1;
	L40(base);
	vs_top=sup;
	V247= vs_base[0];
	V237= fix(number_plus(V246,V247));
	V237= (long)(V237)+(1);
	V244= CMPcdr((V244));
	V245= CMPcar((V244));
	goto T487;}
	goto T482;
T482:;
	if(!(((V235))==(VV[80]))){
	goto T504;}
	{register object V248;
	V248= CMPcdr((V232));
	goto T508;
T508:;
	if(((V248))!=Cnil){
	goto T509;}
	base[2]= CMPmake_fixnum(V237);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T509;
T509:;
	base[2]= CMPmake_fixnum(V237);
	base[3]= (*(LnkLI341))(CMPcar((V248)));
	base[5]= CMPcadr((V248));
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk342)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V237= fix(vs_base[0]);
	V248= CMPcdr((V248));
	goto T508;}
	goto T504;
T504:;
	{register object x= (V235),V249= VV[81];
	while(V249!=Cnil)
	if(eql(x,V249->c.c_car)){
	goto T525;
	}else V249=V249->c.c_cdr;
	goto T524;}
	goto T525;
T525:;
	{register object V250;
	V250= CMPcdr((V232));
	goto T528;
T528:;
	if(((V250))!=Cnil){
	goto T529;}
	base[2]= CMPmake_fixnum(V237);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T529;
T529:;
	base[2]= CMPmake_fixnum(V237);
	base[4]= CMPcadr((V250));
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk342)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V237= fix(vs_base[0]);
	V250= CMPcdr((V250));
	goto T528;}
	goto T524;
T524:;
	if(!(((V235))==(VV[82]))){
	goto T544;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T544;
T544:;
	if(!(((V235))==(VV[83]))){
	goto T547;}
	if(type_of(CMPcadr((V232)))==t_symbol){
	goto T549;}
	if(!(type_of(CMPcadr((V232)))==t_cons)){
	goto T550;}
	if(!((CMPcaadr((V232)))==(VV[9]))){
	goto T550;}
	goto T549;
T549:;
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T550;
T550:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[84]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[84]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[84]);}
	goto T547;
T547:;
	if(!(((V235))==(VV[85]))){
	goto T558;}
	{long V251= (long)length(CMPcadr((V232)));
	base[2]= CMPcddr((V232));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V252= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(/* INLINE-ARGS */V251)+(V252));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T558;
T558:;
	if(!(((V235))==(VV[86]))){
	goto T563;}
	base[2]= CMPcaddr((V232));
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk342)();
	vs_top=sup;
	V253= vs_base[0];
	base[2]= one_plus(V253);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T563;
T563:;
	base[2]= (V235);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk343)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T568;}
	{register object x= (V235),V254= (VV[87]->s.s_dbind);
	while(V254!=Cnil)
	if(eql(x,V254->c.c_car)){
	goto T573;
	}else V254=V254->c.c_cdr;
	goto T569;}
	goto T573;
T573:;
	goto T568;
T568:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[77]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[77]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[77]);}
	goto T569;
T569:;
	{object V255;
	object V256;
	base[2]= (V232);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T578;}
	V255= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T579;}
	V256= vs_base[0];
	vs_top=sup;
	goto T580;
	goto T578;
T578:;
	V255= Cnil;
	goto T579;
T579:;
	V256= Cnil;
	goto T580;
T580:;
	if(((V256))==Cnil){
	goto T582;}
	V232= (V255);
	goto TTL;
	goto T582;
T582:;
	base[2]= CMPcdr((V232));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V257= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(3)+(V257));
	vs_top=(vs_base=base+2)+1;
	return;}}
	goto T460;
T460:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[77]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[77]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[77]);}
	}
}
/*	local entry for function LOOP-CONTEXT	*/

static object LI41()

{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V258;
	register object V259;
	V258= (VV[88]->s.s_dbind);
	V259= Cnil;
	goto T591;
T591:;
	if(!(((V258))==(CMPcdr((VV[89]->s.s_dbind))))){
	goto T592;}
	{object V260 = nreverse((V259));
	VMR33(V260)}
	goto T592;
T592:;
	{object V261;
	V261= CMPcdr((V258));
	V259= make_cons(CMPcar((V258)),(V259));
	V258= (V261);}
	goto T591;}
	return Cnil;
}
/*	function definition for LOOP-ERROR	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V262;
	object V263;
	V262=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V263=(base[1]);
	vs_top=sup;
	base[2]= VV[90];
	base[3]= VV[91];
	base[4]= (V262);
	base[5]= (V263);
	base[6]= (*(LnkLI344))();
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk345)();
	return;
	}
}
/*	local entry for function LOOP-WARN	*/

static object LI43(object V264,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{object V265;
	object V266;
	va_start(ap,first);
	V265= V264;
	narg= narg - 1;
	V267 = list_vector_new(narg,first,ap);
	V266= V267;
	V268= (*(LnkLI344))();
	{object V269 = (VFUN_NARGS=4,(*(LnkLI346))(VV[92],(V265),(V266),/* INLINE-ARGS */V268));
	VMR35(V269)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function LOOP-CHECK-DATA-TYPE	*/

static object LI44(object V271,object V270,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V272;
	register object V273;
	object V274;
	va_start(ap,first);
	V272= V271;
	V273= V270;
	narg = narg - 2;
	if (narg <= 0) goto T605;
	else {
	V274= first;}
	--narg; goto T606;
	goto T605;
T605:;
	V274= (V273);
	goto T606;
T606:;
	if(((V272))!=Cnil){
	goto T609;}
	{object V275 = (V274);
	VMR36(V275)}
	goto T609;
T609:;
	{object V276;
	object V277;
	base[0]= (V272);
	base[1]= (V273);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk326)();
	if(vs_base>=vs_top){vs_top=sup;goto T614;}
	V276= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T615;}
	V277= vs_base[0];
	vs_top=sup;
	goto T616;
	goto T614;
T614:;
	V276= Cnil;
	goto T615;
T615:;
	V277= Cnil;
	goto T616;
T616:;
	if(((V277))!=Cnil){
	goto T619;}
	(void)((VFUN_NARGS=3,(*(LnkLI338))(VV[93],(V272),(V273))));
	goto T617;
	goto T619;
T619:;
	if(((V276))!=Cnil){
	goto T617;}
	base[0]= VV[94];
	base[1]= (V272);
	base[2]= (V273);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T617;
T617:;
	{object V278 = (V272);
	VMR36(V278)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for LOOP-FINISH	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	vs_top=sup;
	base[2]= VV[95];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function LOOP-TRANSLATE	*/

static object LI46(V283,V284,V285)

object V283;object V284;object V285;
{	 VMB38 VMS38 VMV38
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[97],V285);
	bds_bind(VV[96],V284);
	bds_bind(VV[89],V283);
	bds_bind(VV[98],(VV[89]->s.s_dbind));
	bds_bind(VV[88],Cnil);
	bds_bind(VV[99],Cnil);
	bds_bind(VV[100],Cnil);
	bds_bind(VV[101],Cnil);
	bds_bind(VV[102],Cnil);
	bds_bind(VV[103],Cnil);
	bds_bind(VV[104],Cnil);
	bds_bind(VV[105],Cnil);
	bds_bind(VV[106],Cnil);
	bds_bind(VV[107],Cnil);
	bds_bind(VV[108],Cnil);
	bds_bind(VV[109],Cnil);
	bds_bind(VV[110],Cnil);
	bds_bind(VV[111],Cnil);
	bds_bind(VV[112],Cnil);
	bds_bind(VV[113],Cnil);
	bds_bind(VV[114],Cnil);
	bds_bind(VV[115],Cnil);
	bds_bind(VV[116],Cnil);
	bds_bind(VV[117],Cnil);
	bds_bind(VV[118],Cnil);
	bds_bind(VV[119],Cnil);
	bds_bind(VV[120],Cnil);
	(void)((*(LnkLI348))());
	(void)((*(LnkLI349))());
	{register object V286;
	V287= nreverse((VV[106]->s.s_dbind));
	V288= nreverse((VV[108]->s.s_dbind));
	V289= nreverse((VV[109]->s.s_dbind));
	V290= nreverse((VV[111]->s.s_dbind));
	base[24]= (VV[112]->s.s_dbind);
	base[25]= nreverse((VV[113]->s.s_dbind));
	vs_top=(vs_base=base+24)+2;
	Lreconc();
	vs_top=sup;
	V291= vs_base[0];
	V286= list(6,VV[121],/* INLINE-ARGS */V287,/* INLINE-ARGS */V288,/* INLINE-ARGS */V289,/* INLINE-ARGS */V290,V291);
	{register object V292;
	register object V293;
	V292= (VV[105]->s.s_dbind);
	V293= CMPcar((V292));
	goto T636;
T636:;
	if(!(((V292))==Cnil)){
	goto T637;}
	goto T632;
	goto T637;
T637:;
	{object V294;
	object V295;
	object V296;
	object V297;
	V294= CMPcar((V293));
	V295= CMPcadr((V293));
	V296= CMPcaddr((V293));
	V297= CMPcadddr((V293));
	{register object V298;
	register object V299;
	V298= (V297);
	V299= CMPcar((V298));
	goto T650;
T650:;
	if(!(((V298))==Cnil)){
	goto T651;}
	goto T646;
	goto T651;
T651:;
	V300= make_cons((V286),Cnil);
	V286= append((V299),/* INLINE-ARGS */V300);
	V298= CMPcdr((V298));
	V299= CMPcar((V298));
	goto T650;}
	goto T646;
T646:;
	if(((V294))!=Cnil){
	goto T662;}
	if(((V295))!=Cnil){
	goto T662;}
	if(((V296))==Cnil){
	goto T641;}
	goto T662;
T662:;
	{register object V301;
	V301= make_cons((V286),Cnil);
	if(((V295))==Cnil){
	goto T669;}
	{object V302;
	V302= make_cons(VV[30],(V295));
	V301= make_cons((V302),(V301));}
	goto T669;
T669:;
	if(((V294))!=Cnil){
	goto T677;}
	V303= VV[122];
	goto T675;
	goto T677;
T677:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T680;}
	V303= CMPcar((VV[63]->s.s_dbind));
	goto T675;
	goto T680;
T680:;
	V303= VV[29];
	goto T675;
T675:;
	if(((V296))==Cnil){
	goto T684;}
	V305= append((V296),(V301));
	V306= make_cons(VV[123],/* INLINE-ARGS */V305);
	V304= make_cons(/* INLINE-ARGS */V306,Cnil);
	goto T682;
	goto T684;
T684:;
	V304= (V301);
	goto T682;
T682:;
	V286= listA(3,V303,(V294),V304);}}
	goto T641;
T641:;
	V292= CMPcdr((V292));
	V293= CMPcar((V292));
	goto T636;}
	goto T632;
T632:;
	V286= list(3,VV[124],CMPcar((VV[118]->s.s_dbind)),(V286));
	{object V307 = (V286);
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
	VMR38(V307)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-ITERATION-DRIVER	*/

static object LI47()

{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	goto T694;
T694:;
	if(((VV[89]->s.s_dbind))!=Cnil){
	goto T695;}
	{object V308 = Cnil;
	VMR39(V308)}
	goto T695;
T695:;
	{register object V309;
	register object V310;
	V309= CMPcar((VV[89]->s.s_dbind));
	V310= Cnil;
	if(type_of((V309))==t_symbol){
	goto T702;}
	base[0]= VV[125];
	base[1]= (V309);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T699;
	goto T702;
T702:;
	(VV[88]->s.s_dbind)= (VV[89]->s.s_dbind);
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V310= (*(LnkLI351))((V309),STREF(object,(VV[97]->s.s_dbind),0));
	if(((V310))==Cnil){
	goto T710;}
	base[1]= CMPcar((V310));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V311;
	V311= CMPcdr((V310));
	 vs_top=base+1;
	 while(V311!=Cnil)
	 {vs_push((V311)->c.c_car);V311=(V311)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	goto T699;
	goto T710;
T710:;
	V310= (*(LnkLI351))((V309),STREF(object,(VV[97]->s.s_dbind),4));
	if(((V310))==Cnil){
	goto T717;}
	(void)((*(LnkLI352))((V310)));
	goto T699;
	goto T717;
T717:;
	if(((*(LnkLI353))((V309),VV[126]))==Cnil){
	goto T721;}
	base[0]= VV[127];
	base[1]= (V309);
	base[2]= CMPcar((VV[89]->s.s_dbind));
	base[3]= CMPcadr((VV[89]->s.s_dbind));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T699;
	goto T721;
T721:;
	base[0]= VV[128];
	base[1]= (V309);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;}
	goto T699;
T699:;
	goto T694;
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-POP-SOURCE	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[89]->s.s_dbind))==Cnil){
	goto T732;}
	{object V312;
	V312= CMPcar((VV[89]->s.s_dbind));
	(VV[89]->s.s_dbind)= CMPcdr((VV[89]->s.s_dbind));
	base[0]= (V312);
	vs_top=(vs_base=base+0)+1;
	return;}
	goto T732;
T732:;
	base[0]= VV[129];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	return;
}
/*	local entry for function LOOP-GET-PROGN	*/

static object LI49()

{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{register object V313;
	register object V314;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V315= vs_base[0];
	V313= make_cons(V315,Cnil);
	V314= CMPcar((VV[89]->s.s_dbind));
	goto T742;
T742:;
	if(!(type_of((V314))!=t_cons)){
	goto T743;}
	if((CMPcdr((V313)))!=Cnil){
	goto T747;}
	{object V316 = CMPcar((V313));
	VMR41(V316)}
	goto T747;
T747:;
	V317= nreverse((V313));
	{object V318 = make_cons(VV[14],/* INLINE-ARGS */V317);
	VMR41(V318)}
	goto T743;
T743:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V319= vs_base[0];
	V313= make_cons(V319,(V313));
	V314= CMPcar((VV[89]->s.s_dbind));
	goto T742;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-GET-FORM	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[89]->s.s_dbind))==Cnil){
	goto T756;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	return;
	goto T756;
T756:;
	base[0]= VV[130];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	return;
}
/*	local entry for function LOOP-CONSTRUCT-RETURN	*/

static object LI51(V321)

object V321;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	{object V322 = list(3,VV[86],CMPcar((VV[118]->s.s_dbind)),(V321));
	VMR43(V322)}
	return Cnil;
}
/*	local entry for function LOOP-PSEUDO-BODY	*/

static object LI52(V324)

object V324;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	if(((VV[110]->s.s_dbind))!=Cnil){
	goto T759;}
	if(((VV[115]->s.s_dbind))==Cnil){
	goto T760;}
	goto T759;
T759:;
	(VV[109]->s.s_dbind)= make_cons(V324,(VV[109]->s.s_dbind));
	{object V326 = (VV[109]->s.s_dbind);
	VMR44(V326)}
	goto T760;
T760:;
	(VV[108]->s.s_dbind)= make_cons(V324,(VV[108]->s.s_dbind));
	(VV[111]->s.s_dbind)= make_cons(V324,(VV[111]->s.s_dbind));
	{object V329 = (VV[111]->s.s_dbind);
	VMR44(V329)}
	return Cnil;
}
/*	local entry for function LOOP-EMIT-BODY	*/

static object LI53(V331)

object V331;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	(VV[110]->s.s_dbind)= Ct;
	{object V332 = (*(LnkLI354))((V331));
	VMR45(V332)}
	return Cnil;
}
/*	local entry for function LOOP-EMIT-FINAL-VALUE	*/

static object LI54(V334)

object V334;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V335;
	V335= (*(LnkLI355))((V334));
	(VV[113]->s.s_dbind)= make_cons((V335),(VV[113]->s.s_dbind));}
	if(((VV[114]->s.s_dbind))==Cnil){
	goto T773;}
	if(((VV[119]->s.s_dbind))==Cnil){
	goto T777;}
	base[0]= VV[90];
	base[1]= VV[131];
	base[2]= (VV[114]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk345)();
	vs_top=sup;
	goto T773;
	goto T777;
T777:;
	(void)((VFUN_NARGS=2,(*(LnkLI338))(VV[132],(VV[114]->s.s_dbind))));
	goto T773;
T773:;
	(VV[114]->s.s_dbind)= CMPcar((VV[88]->s.s_dbind));
	{object V336 = (VV[114]->s.s_dbind);
	VMR46(V336)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-DISALLOW-CONDITIONAL	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V337;
	if(vs_base>=vs_top){vs_top=sup;goto T783;}
	V337=(base[0]);
	vs_top=sup;
	goto T784;
	goto T783;
T783:;
	V337= Cnil;
	goto T784;
T784:;
	if(((VV[115]->s.s_dbind))==Cnil){
	goto T787;}
	base[1]= VV[133];
	base[2]= (V337);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk347)();
	return;
	goto T787;
T787:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function LOOP-TYPED-INIT	*/

static object LI56(V339)

register object V339;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	if(((V339))==Cnil){
	goto T792;}
	base[0]= (V339);
	base[1]= VV[134];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk326)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T792;}
	base[0]= (V339);
	base[1]= VV[135];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk326)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T798;}
	base[0]= (V339);
	base[1]= VV[136];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk326)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T799;}
	goto T798;
T798:;
	{object V340 = (*(LnkLI356))(small_fixnum(0),(V339));
	VMR48(V340)}
	goto T799;
T799:;
	{object V341 = small_fixnum(0);
	VMR48(V341)}
	goto T792;
T792:;
	{object V342 = Cnil;
	VMR48(V342)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-OPTIONAL-TYPE	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	if(vs_base>=vs_top){vs_top=sup;goto T807;}
	vs_top=sup;
	goto T808;
	goto T807;
T807:;
	base[0]= Cnil;
	goto T808;
T808:;
	if((VV[89]->s.s_dbind)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= CMPcar((VV[89]->s.s_dbind));
	if(((*(LnkLI357))(base[1],VV[137]))==Cnil){
	goto T812;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk350)();
	return;
	goto T812;
T812:;
	if(!(type_of(base[1])==t_symbol)){
	goto T816;}
	{object V343;{object V344;
	base[2]= base[1];
	base[3]= STREF(object,(VV[97]->s.s_dbind),16);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V344= vs_base[0];
	if(V344==Cnil)goto T819;
	V343= V344;
	goto T818;
	goto T819;
T819:;}
	base[2]= symbol_name(base[1]);
	base[3]= STREF(object,(VV[97]->s.s_dbind),20);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V343= vs_base[0];
	goto T818;
T818:;
	if(((V343))==Cnil){
	goto T826;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	base[2]= (V343);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T826;
T826:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T816;
T816:;
	if(!(type_of(base[0])==t_cons)){
	goto T831;}
	if(type_of(base[1])==t_cons){
	goto T829;}
	base[2]= VV[138];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T829;
	goto T831;
T831:;
	base[2]= VV[139];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T829;
T829:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	base[2]= base[1];
	base[3]= base[0];
	vs_top=(vs_base=base+2)+2;
	L58(base);
	return;
}
/*	local entry for function LOOP-BIND-BLOCK	*/

static object LI60()

{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	if(((VV[100]->s.s_dbind))!=Cnil){
	goto T842;}
	if(((VV[103]->s.s_dbind))!=Cnil){
	goto T842;}
	if(((VV[107]->s.s_dbind))==Cnil){
	goto T843;}
	goto T842;
T842:;
	{object V345;
	V346= nreverse((VV[100]->s.s_dbind));
	V345= list(4,/* INLINE-ARGS */V346,(VV[103]->s.s_dbind),(VV[104]->s.s_dbind),(VV[107]->s.s_dbind));
	(VV[105]->s.s_dbind)= make_cons((V345),(VV[105]->s.s_dbind));}
	(VV[100]->s.s_dbind)= Cnil;
	(VV[103]->s.s_dbind)= Cnil;
	(VV[104]->s.s_dbind)= Cnil;
	(VV[107]->s.s_dbind)= Cnil;
	{object V347 = Cnil;
	VMR50(V347)}
	goto T843;
T843:;
	{object V348 = Cnil;
	VMR50(V348)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-MAKE-VARIABLE	*/

static object LI61(object V351,object V350,object V349,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB51 VMS51 VMV51
	{register object V352;
	register object V353;
	register object V354;
	object V355;
	va_start(ap,first);
	V352= V351;
	V353= V350;
	V354= V349;
	narg = narg - 3;
	if (narg <= 0) goto T859;
	else {
	V355= first;}
	--narg; goto T860;
	goto T859;
T859:;
	V355= Cnil;
	goto T860;
T860:;
	if(((V352))!=Cnil){
	goto T864;}
	if(((V353))==Cnil){
	goto T862;}
	{object V356;
	V352= (VFUN_NARGS=1,(*(LnkLI328))(VV[142]));
	V356= list(2,(V352),(V353));
	(VV[100]->s.s_dbind)= make_cons((V356),(VV[100]->s.s_dbind));}
	{object V357;
	V357= list(2,VV[143],(V352));
	(VV[103]->s.s_dbind)= make_cons((V357),(VV[103]->s.s_dbind));
	goto T862;}
	goto T864;
T864:;
	if(!(type_of((V352))!=t_cons)){
	goto T875;}
	if(((V355))==Cnil){
	goto T879;}
	{register object x= (V352),V358= (VV[99]->s.s_dbind);
	while(V358!=Cnil)
	if(eql(x,V358->c.c_car)){
	goto T883;
	}else V358=V358->c.c_cdr;
	goto T882;}
	goto T883;
T883:;
	base[0]= VV[144];
	base[1]= (V352);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T877;
	goto T882;
T882:;
	(VV[99]->s.s_dbind)= make_cons(V352,(VV[99]->s.s_dbind));
	goto T877;
	goto T879;
T879:;
	{register object x= (V352),V360= (VV[100]->s.s_dbind);
	while(V360!=Cnil)
	if(eql(x,V360->c.c_car->c.c_car) &&V360->c.c_car != Cnil){
	goto T888;
	}else V360=V360->c.c_cdr;
	goto T877;}
	goto T888;
T888:;
	base[0]= VV[145];
	base[1]= (V352);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T877;
T877:;
	if(type_of((V352))==t_symbol){
	goto T891;}
	base[0]= VV[146];
	base[1]= (V352);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T891;
T891:;
	(void)((*(LnkLI358))((V352),(V354)));
	{object V361;
	if((V353)!=Cnil){
	V362= (V353);
	goto T898;}
	V362= (*(LnkLI329))((V354));
	goto T898;
T898:;
	V361= list(2,(V352),V362);
	(VV[100]->s.s_dbind)= make_cons((V361),(VV[100]->s.s_dbind));
	goto T862;}
	goto T875;
T875:;
	if(((V353))==Cnil){
	goto T901;}
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T904;}
	(void)((*(LnkLI358))((V352),(V354)));
	{object V363;
	V363= list(2,(V352),(V353));
	(VV[100]->s.s_dbind)= make_cons((V363),(VV[100]->s.s_dbind));
	goto T862;}
	goto T904;
T904:;
	{object V364;
	V364= (VFUN_NARGS=1,(*(LnkLI328))(VV[147]));
	{object V365;
	V365= list(2,(V364),(V353));
	(VV[100]->s.s_dbind)= make_cons((V365),(VV[100]->s.s_dbind));}
	(VV[104]->s.s_dbind)= listA(3,(V352),(V364),(VV[104]->s.s_dbind));
	goto T862;}
	goto T901;
T901:;
	{object V366;
	object V367;
	V366= Cnil;
	V367= Cnil;
	if(!(type_of((V354))!=t_cons)){
	goto T916;}
	V367= (V354);
	V366= (V367);
	goto T914;
	goto T916;
T916:;
	V366= CMPcar((V354));
	V367= CMPcdr((V354));
	goto T914;
T914:;
	(void)((VFUN_NARGS=4,(*(LnkLI359))(CMPcar((V352)),Cnil,(V366),(V355))));
	(void)((VFUN_NARGS=4,(*(LnkLI359))(CMPcdr((V352)),Cnil,(V367),(V355))));}
	goto T862;
T862:;
	{object V368 = (V352);
	VMR51(V368)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-MAKE-ITERATION-VARIABLE	*/

static object LI62(V372,V373,V374)

object V372;object V373;object V374;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V375 = (VFUN_NARGS=4,(*(LnkLI359))((V372),(V373),(V374),Ct));
	VMR52(V375)}
	return Cnil;
}
/*	local entry for function LOOP-DECLARE-VARIABLE	*/

static object LI63(V378,V379)

register object V378;register object V379;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	if(((V378))==Cnil){
	goto T924;}
	if(((V379))==Cnil){
	goto T924;}
	if(!(((V379))==(Ct))){
	goto T925;}
	goto T924;
T924:;
	{object V380 = Cnil;
	VMR53(V380)}
	goto T925;
T925:;
	if(!(type_of((V378))==t_symbol)){
	goto T932;}
	if(((V379))==(Ct)){
	goto T935;}
	{register object x= (V378),V381= (VV[101]->s.s_dbind);
	while(V381!=Cnil)
	if(eql(x,V381->c.c_car)){
	goto T935;
	}else V381=V381->c.c_cdr;}
	{object V383;
	V383= list(3,VV[31],V379,(V378));
	(VV[103]->s.s_dbind)= make_cons((V383),(VV[103]->s.s_dbind));
	{object V384 = (VV[103]->s.s_dbind);
	VMR53(V384)}}
	goto T935;
T935:;
	{object V385 = Cnil;
	VMR53(V385)}
	goto T932;
T932:;
	if(!(type_of((V378))==t_cons)){
	goto T942;}
	if(!(type_of((V379))==t_cons)){
	goto T945;}
	(void)((*(LnkLI358))(CMPcar((V378)),CMPcar((V379))));
	V378= CMPcdr((V378));
	V379= CMPcdr((V379));
	goto TTL;
	goto T945;
T945:;
	(void)((*(LnkLI358))(CMPcar((V378)),(V379)));
	V378= CMPcdr((V378));
	goto TTL;
	goto T942;
T942:;
	base[0]= VV[148];
	base[1]= (V378);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V386 = vs_base[0];
	VMR53(V386)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-MAYBE-BIND-FORM	*/

static object LI64(V389,V390)

object V389;object V390;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	if(((*(LnkLI360))((V389)))==Cnil){
	goto T958;}
	{object V391 = (V389);
	VMR54(V391)}
	goto T958;
T958:;
	V392= (VFUN_NARGS=1,(*(LnkLI328))(VV[149]));
	{object V393 = (VFUN_NARGS=3,(*(LnkLI359))(/* INLINE-ARGS */V392,(V389),(V390)));
	VMR54(V393)}
	return Cnil;
}
/*	local entry for function LOOP-DO-IF	*/

static object LI65(V396,V397)

object V396;object V397;
{	 VMB55 VMS55 VMV55
	bds_check;
	goto TTL;
TTL:;
	{object V398;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V398= vs_base[0];
	bds_bind(VV[115],Ct);
	base[1]= Cnil;
	{object V399;
	object V400;
	base[2]= (V396);
	vs_top=(vs_base=base+2)+1;
	L66(base);
	vs_top=sup;
	V399= vs_base[0];
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[150]))==Cnil){
	goto T965;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	base[2]= VV[150];
	vs_top=(vs_base=base+2)+1;
	L66(base);
	vs_top=sup;
	V401= vs_base[0];
	V400= make_cons(V401,Cnil);
	goto T963;
	goto T965;
T965:;
	V400= Cnil;
	goto T963;
T963:;
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[151]))==Cnil){
	goto T970;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	goto T970;
T970:;
	if((base[1])==Cnil){
	goto T973;}
	V398= list(3,VV[11],base[1],(V398));
	goto T973;
T973:;
	if(((V397))==Cnil){
	goto T979;}
	V402= list(2,VV[36],(V398));
	goto T977;
	goto T979;
T979:;
	V402= (V398);
	goto T977;
T977:;
	V403= listA(4,VV[71],V402,(V399),(V400));
	{object V404 = (*(LnkLI354))(/* INLINE-ARGS */V403);
	bds_unwind1;
	VMR55(V404)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-INITIALLY	*/

static object LI67()

{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk362)();
	vs_top=sup;
	{object V405;
	V405= (*(LnkLI363))();
	(VV[106]->s.s_dbind)= make_cons((V405),(VV[106]->s.s_dbind));
	{object V406 = (VV[106]->s.s_dbind);
	VMR56(V406)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-FINALLY	*/

static object LI68()

{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	base[0]= VV[157];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk362)();
	vs_top=sup;
	{object V407;
	V407= (*(LnkLI363))();
	(VV[112]->s.s_dbind)= make_cons((V407),(VV[112]->s.s_dbind));
	{object V408 = (VV[112]->s.s_dbind);
	VMR57(V408)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-DO	*/

static object LI69()

{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	V409= (*(LnkLI363))();
	{object V410 = (*(LnkLI364))(/* INLINE-ARGS */V409);
	VMR58(V410)}
	return Cnil;
}
/*	local entry for function LOOP-DO-NAMED	*/

static object LI70()

{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{register object V411;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V411= vs_base[0];
	if(type_of((V411))==t_symbol){
	goto T990;}
	base[0]= VV[158];
	base[1]= (V411);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T990;
T990:;
	if(((VV[108]->s.s_dbind))!=Cnil){
	goto T996;}
	if(((VV[109]->s.s_dbind))!=Cnil){
	goto T996;}
	if(((VV[113]->s.s_dbind))!=Cnil){
	goto T996;}
	if(((VV[115]->s.s_dbind))==Cnil){
	goto T995;}
	goto T996;
T996:;
	base[0]= VV[159];
	base[1]= (V411);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T995;
T995:;
	if(((VV[118]->s.s_dbind))==Cnil){
	goto T1006;}
	base[0]= VV[160];
	base[1]= CMPcar((VV[118]->s.s_dbind));
	base[2]= (V411);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1006;
T1006:;
	(VV[118]->s.s_dbind)= list(2,(V411),Cnil);
	{object V412 = (VV[118]->s.s_dbind);
	VMR59(V412)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-RETURN	*/

static object LI71()

{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V413= vs_base[0];
	V414= (*(LnkLI355))(V413);
	{object V415 = (*(LnkLI354))(/* INLINE-ARGS */V414);
	VMR60(V415)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-LOOP-COLLECTOR	*/

static object LI72(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB61 VMS61 VMV61
	{object V416;
	object V417;
	object V418;
	object V419;
	object V420;
	object V421;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI72key,first,ap);
	V416=(Vcs[0]);
	V417=(Vcs[1]);
	V418=(Vcs[2]);
	V419=(Vcs[3]);
	V420=(Vcs[4]);
	V421=(Vcs[5]);
	base[0]= VV[161];
	base[1]= (V416);
	base[2]= (V417);
	base[3]= (V418);
	base[4]= (V419);
	base[5]= (V420);
	base[6]= (V421);
	vs_top=(vs_base=base+0)+7;
	siLmake_structure();
	vs_top=sup;
	{object V422 = vs_base[0];
	VMR61(V422)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for LOOP-GET-COLLECTION-INFO	*/

static void L73()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	{object V423;
	object V424;
	object V425;
	V423=(base[0]);
	V424=(base[1]);
	V425=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[162]))!=Cnil){
	goto T1021;}
	(VV[119]->s.s_dbind)= Ct;
	goto T1021;
T1021:;
	{object V426;
	register object V427;
	register object V428;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V426= vs_base[0];
	if((STREF(object,(VV[97]->s.s_dbind),24))==Cnil){
	goto T1027;}
	V427= Cnil;
	goto T1026;
	goto T1027;
T1027:;
	vs_base=vs_top;
	(void) (*Lnk367)();
	vs_top=sup;
	V427= vs_base[0];
	goto T1026;
T1026:;
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[162]))==Cnil){
	goto T1031;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V428= vs_base[0];
	goto T1029;
	goto T1031;
T1031:;
	V428= Cnil;
	goto T1029;
T1029:;
	if(type_of((V428))==t_symbol){
	goto T1034;}
	base[3]= VV[163];
	base[4]= (V428);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1034;
T1034:;
	if(((V427))!=Cnil){
	goto T1039;}{object V429;
	vs_base=vs_top;
	(void) (*Lnk367)();
	vs_top=sup;
	V429= vs_base[0];
	if(V429==Cnil)goto T1043;
	V427= V429;
	goto T1042;
	goto T1043;
T1043:;}
	V427= (V425);
	goto T1042;
T1042:;
	goto T1039;
T1039:;
	{register object V430;{object V431;
	V431= (VV[120]->s.s_dbind);
	V432= (VV[369]->s.s_gfdef);
	V430= (VFUN_NARGS=4,(*(LnkLI368))((V428),V431,VV[164],V432));}
	if(((V430))!=Cnil){
	goto T1049;}
	{object V433;
	V434= make_cons((V423),Cnil);
	V430= (VFUN_NARGS=8,(*(LnkLI370))(VV[165],(V428),VV[166],(V424),VV[167],/* INLINE-ARGS */V434,VV[168],(V427)));
	V433= (V430);
	(VV[120]->s.s_dbind)= make_cons((V433),(VV[120]->s.s_dbind));
	goto T1047;}
	goto T1049;
T1049:;
	if((STREF(object,(V430),4))==((V424))){
	goto T1054;}
	base[3]= VV[169];
	base[4]= (V428);
	base[5]= CMPcar(STREF(object,(V430),8));
	base[6]= (V423);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1054;
T1054:;
	if(equal((V427),STREF(object,(V430),16))){
	goto T1061;}
	(void)((VFUN_NARGS=4,(*(LnkLI338))(VV[170],(V428),(V427),STREF(object,(V430),16))));
	if(!((STREF(object,(V430),16))==(Ct))){
	goto T1061;}
	V435= Ct;
	STSET(object,(V430),16, (V427));
	(void)((V427));
	goto T1061;
T1061:;
	{object V438;
	V438= make_cons(V423,STREF(object,V430,8));
	V439= Ct;
	STSET(object,V430,8, (V438));
	(void)((V438));}
	goto T1047;
T1047:;
	base[3]= (V430);
	base[4]= (V426);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function LOOP-LIST-COLLECTION	*/

static object LI74(V441)

object V441;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	{register object V442;
	register object V443;
	base[0]= (V441);
	base[1]= VV[5];
	base[2]= VV[5];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T1074;}
	V442= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1075;}
	V443= vs_base[0];
	vs_top=sup;
	goto T1076;
	goto T1074;
T1074:;
	V442= Cnil;
	goto T1075;
T1075:;
	V443= Cnil;
	goto T1076;
T1076:;
	{register object V444;
	V444= STREF(object,(V442),12);
	if(((V444))!=Cnil){
	goto T1078;}
	V445= (VFUN_NARGS=1,(*(LnkLI328))(VV[171]));
	V446= (VFUN_NARGS=1,(*(LnkLI328))(VV[172]));
	if((STREF(object,(V442),0))!=Cnil){
	goto T1084;}
	V447= Cnil;
	goto T1083;
	goto T1084;
T1084:;
	V447= make_cons(STREF(object,(V442),0),Cnil);
	goto T1083;
T1083:;
	V444= listA(3,/* INLINE-ARGS */V445,/* INLINE-ARGS */V446,V447);
	V448= Ct;
	STSET(object,(V442),12, (V444));
	(void)((V444));
	{object V449;
	V449= list(2,VV[173],(V444));
	(VV[107]->s.s_dbind)= make_cons((V449),(VV[107]->s.s_dbind));}
	if((STREF(object,(V442),0))!=Cnil){
	goto T1078;}
	V450= listA(3,VV[174],CMPcar((V444)),CMPcddr((V444)));
	(void)((*(LnkLI372))(/* INLINE-ARGS */V450));
	goto T1078;
T1078:;
	{object V451= (V441);
	if((V451!= VV[5]))goto T1092;
	V443= list(2,VV[5],(V443));
	goto T1091;
	goto T1092;
T1092:;
	if((V451!= VV[373]))goto T1094;
	goto T1091;
	goto T1094;
T1094:;
	if((V451!= VV[374]))goto T1095;
	if(!(type_of((V443))==t_cons)){
	goto T1096;}
	if((CMPcar((V443)))==(VV[5])){
	goto T1091;}
	goto T1096;
T1096:;
	V443= list(2,VV[175],(V443));
	goto T1091;
	goto T1095;
T1095:;
	FEerror("The ECASE key value ~s is illegal.",1,V451);
	goto T1091;}
	goto T1091;
T1091:;
	V452= list(3,VV[176],(V444),(V443));
	{object V453 = (*(LnkLI364))(/* INLINE-ARGS */V452);
	VMR63(V453)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-SUM-COLLECTION	*/

static object LI75(V457,V458,V459)

object V457;object V458;object V459;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{register object V460;
	object V461;
	base[0]= (V457);
	base[1]= VV[177];
	base[2]= (V459);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T1105;}
	V460= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1106;}
	V461= vs_base[0];
	vs_top=sup;
	goto T1107;
	goto T1105;
T1105:;
	V460= Cnil;
	goto T1106;
T1106:;
	V461= Cnil;
	goto T1107;
T1107:;
	(void)((VFUN_NARGS=2,(*(LnkLI375))(STREF(object,(V460),16),(V458))));
	{register object V462;
	V462= STREF(object,(V460),12);
	if(((V462))!=Cnil){
	goto T1110;}{object V464;
	V464= STREF(object,(V460),0);
	if(V464==Cnil)goto T1116;
	V463= V464;
	goto T1115;
	goto T1116;
T1116:;}
	V463= (VFUN_NARGS=1,(*(LnkLI328))(VV[178]));
	goto T1115;
T1115:;
	V465= (VFUN_NARGS=3,(*(LnkLI359))(V463,Cnil,STREF(object,(V460),16)));
	V462= make_cons(/* INLINE-ARGS */V465,Cnil);
	V466= Ct;
	STSET(object,(V460),12, (V462));
	(void)((V462));
	if((STREF(object,(V460),0))!=Cnil){
	goto T1110;}
	(void)((*(LnkLI372))(CMPcar(STREF(object,(V460),12))));
	goto T1110;
T1110:;
	if(!(((V457))==(VV[179]))){
	goto T1122;}
	V468= CMPcar((V462));
	V469= CMPcar((V462));
	V470= list(2,VV[180],CMPcar((V462)));
	V467= list(3,VV[8],(V461),list(3,VV[11],/* INLINE-ARGS */V468,(*(LnkLI330))(Ct,/* INLINE-ARGS */V469,/* INLINE-ARGS */V470)));
	goto T1120;
	goto T1122;
T1122:;
	V471= CMPcar((V462));
	V472= (*(LnkLI330))(Ct,CMPcar((V462)),CMPcar((V462)));
	V467= list(3,VV[11],/* INLINE-ARGS */V471,list(3,VV[181],/* INLINE-ARGS */V472,(V461)));
	goto T1120;
T1120:;
	{object V473 = (*(LnkLI364))(V467);
	VMR64(V473)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-MAXMIN-COLLECTION	*/

static object LI76(V475)

object V475;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{register object V476;
	object V477;
	base[0]= (V475);
	base[1]= VV[182];
	base[2]= (VV[183]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk371)();
	if(vs_base>=vs_top){vs_top=sup;goto T1128;}
	V476= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1129;}
	V477= vs_base[0];
	vs_top=sup;
	goto T1130;
	goto T1128;
T1128:;
	V476= Cnil;
	goto T1129;
T1129:;
	V477= Cnil;
	goto T1130;
T1130:;
	(void)((VFUN_NARGS=2,(*(LnkLI375))(STREF(object,(V476),16),(VV[183]->s.s_dbind))));
	{register object V478;
	V478= STREF(object,(V476),20);
	if(((V478))!=Cnil){
	goto T1133;}{object V480;
	V480= STREF(object,(V476),0);
	if(V480==Cnil)goto T1139;
	V479= V480;
	goto T1138;
	goto T1139;
T1139:;}
	V479= (VFUN_NARGS=1,(*(LnkLI328))(VV[184]));
	goto T1138;
T1138:;
	V478= (*(LnkLI376))(V479,STREF(object,(V476),16));
	V481= Ct;
	STSET(object,(V476),20, (V478));
	(void)((V478));
	if((STREF(object,(V476),0))!=Cnil){
	goto T1133;}
	(void)((*(LnkLI372))(STREF(object,(V478),0)));
	goto T1133;
T1133:;
	(void)((*(LnkLI377))((V475),(V478)));
	{object V482;
	V482= list(2,VV[185],(V478));
	(VV[107]->s.s_dbind)= make_cons((V482),(VV[107]->s.s_dbind));}
	V483= list(4,VV[186],(V478),(V475),(V477));
	{object V484 = (*(LnkLI364))(/* INLINE-ARGS */V483);
	VMR65(V484)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-ALWAYS	*/

static object LI77(V487,V488)

object V487;object V488;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{object V489;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V489= vs_base[0];
	if(((V487))==Cnil){
	goto T1148;}
	vs_base=vs_top;
	(void) (*Lnk362)();
	vs_top=sup;
	goto T1148;
T1148:;
	if(((V488))==Cnil){
	goto T1154;}
	V490= VV[8];
	goto T1152;
	goto T1154;
T1154:;
	V490= VV[187];
	goto T1152;
T1152:;
	V491= list(3,V490,(V489),(*(LnkLI355))(Cnil));
	(void)((*(LnkLI364))(/* INLINE-ARGS */V491));
	{object V492 = (*(LnkLI372))(Ct);
	VMR66(V492)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-THEREIS	*/

static object LI78(V494)

object V494;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	if(((V494))==Cnil){
	goto T1156;}
	vs_base=vs_top;
	(void) (*Lnk362)();
	vs_top=sup;
	goto T1156;
T1156:;
	V495= (*(LnkLI378))();
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V496= vs_base[0];
	V497= list(3,VV[11],/* INLINE-ARGS */V495,V496);
	V498= list(3,VV[8],/* INLINE-ARGS */V497,(*(LnkLI355))((VV[116]->s.s_dbind)));
	(void)((*(LnkLI364))(/* INLINE-ARGS */V498));
	{object V499 = (*(LnkLI372))(Cnil);
	VMR67(V499)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-WHILE	*/

static object LI79(V502,V503)

object V502;object V503;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	{object V504;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V504= vs_base[0];
	base[1]= (V503);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk362)();
	vs_top=sup;
	if(((V502))==Cnil){
	goto T1166;}
	V505= VV[8];
	goto T1164;
	goto T1166;
T1166:;
	V505= VV[187];
	goto T1164;
T1164:;
	V506= list(3,V505,(V504),VV[188]);
	{object V507 = (*(LnkLI354))(/* INLINE-ARGS */V506);
	VMR68(V507)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-WITH	*/

static object LI80()

{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	base[0]= VV[189];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk362)();
	vs_top=sup;
	{register object V508;
	register object V509;
	register object V510;
	V508= Cnil;
	V509= Cnil;
	V510= Cnil;
	goto T1171;
T1171:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V508= vs_base[0];
	base[0]= (V508);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk367)();
	vs_top=sup;
	V510= vs_base[0];
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[190]))==Cnil){
	goto T1182;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V509= vs_base[0];
	goto T1180;
	goto T1182;
T1182:;
	V509= Cnil;
	goto T1180;
T1180:;
	(void)((VFUN_NARGS=3,(*(LnkLI359))((V508),(V509),(V510))));
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[155]))==Cnil){
	goto T1188;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	goto T1186;
	goto T1188;
T1188:;
	{object V511 = (*(LnkLI349))();
	VMR69(V511)}
	goto T1186;
T1186:;
	goto T1171;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-HACK-ITERATION	*/

static object LI81(V513)

register object V513;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{register object V514;
	register object V515;
	register object V516;
	register object V517;
	register object V518;
	register object V519;
	register object V520;
	register object V521;
	register object V522;
	object V523;
	V514= Cnil;
	V515= Cnil;
	V516= Cnil;
	V517= Cnil;
	V518= Cnil;
	V519= Cnil;
	V520= Cnil;
	V521= Cnil;
	V522= Cnil;
	V523= Cnil;
	goto T1193;
T1193:;
	base[1]= CMPcar((V513));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V524;
	V524= CMPcdr((V513));
	 vs_top=base+1;
	 while(V524!=Cnil)
	 {vs_push((V524)->c.c_car);V524=(V524)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V523= vs_base[0];
	V522= (V523);
	if((CMPcar((V522)))!=Cnil){
	goto T1203;}
	goto T1202;
	goto T1203;
T1203:;
	{object V525;
	V525= CMPcar((V522));
	V514= make_cons((V525),(V514));}
	goto T1202;
T1202:;
	V522= CMPcdr((V522));
	base[0]= CMPcar((V522));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V526= vs_base[0];
	V515= nconc((V515),V526);
	V522= CMPcdr((V522));
	if((CMPcar((V522)))!=Cnil){
	goto T1213;}
	goto T1212;
	goto T1213;
T1213:;
	{object V527;
	V527= CMPcar((V522));
	V516= make_cons((V527),(V516));}
	goto T1212;
T1212:;
	V522= CMPcdr((V522));
	base[0]= CMPcar((V522));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V528= vs_base[0];
	V517= nconc((V517),V528);
	V522= CMPcdr((V522));
	if(((VV[110]->s.s_dbind))==Cnil){
	goto T1225;}
	base[0]= VV[191];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1225;
T1225:;
	if(((V522))!=Cnil){
	goto T1229;}
	V522= (V523);
	goto T1229;
T1229:;
	if((CMPcar((V522)))==Cnil){
	goto T1233;}
	{object V529;
	V529= CMPcar((V522));
	V518= make_cons((V529),(V518));}
	goto T1233;
T1233:;
	V522= CMPcdr((V522));
	base[0]= CMPcar((V522));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V530= vs_base[0];
	V519= nconc((V519),V530);
	V522= CMPcdr((V522));
	if((CMPcar((V522)))==Cnil){
	goto T1243;}
	{object V531;
	V531= CMPcar((V522));
	V520= make_cons((V531),(V520));}
	goto T1243;
T1243:;
	base[0]= CMPcadr((V522));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V532= vs_base[0];
	V521= nconc((V521),V532);
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[155]))!=Cnil){
	goto T1253;}
	V533= (*(LnkLI336))((V521));
	base[0]= (V520);
	vs_top=(vs_base=base+0)+1;
	L82(base);
	vs_top=sup;
	V534= vs_base[0];
	V535= (*(LnkLI337))((V519));
	base[0]= (V518);
	vs_top=(vs_base=base+0)+1;
	L82(base);
	vs_top=sup;
	V536= vs_base[0];
	(VV[108]->s.s_dbind)= listA(5,/* INLINE-ARGS */V533,V534,/* INLINE-ARGS */V535,V536,(VV[108]->s.s_dbind));
	V537= (*(LnkLI336))((V517));
	base[0]= (V516);
	vs_top=(vs_base=base+0)+1;
	L82(base);
	vs_top=sup;
	V538= vs_base[0];
	V539= (*(LnkLI337))((V515));
	base[0]= (V514);
	vs_top=(vs_base=base+0)+1;
	L82(base);
	vs_top=sup;
	V540= vs_base[0];
	(VV[111]->s.s_dbind)= listA(5,/* INLINE-ARGS */V537,V538,/* INLINE-ARGS */V539,V540,(VV[111]->s.s_dbind));
	(void)((*(LnkLI349))());
	{object V541 = Cnil;
	VMR70(V541)}
	goto T1253;
T1253:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	if((STREF(object,(VV[97]->s.s_dbind),28))!=Cnil){
	goto T1270;}
	V522= (*(LnkLI351))(CMPcar((VV[89]->s.s_dbind)),STREF(object,(VV[97]->s.s_dbind),4));
	if(((V522))==Cnil){
	goto T1270;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V513= (V522);
	goto T1270;
T1270:;
	goto T1193;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-DO-FOR	*/

static void L83()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V542;
	object V543;
	object V544;
	object V545;
	object V546;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V542= vs_base[0];
	base[3]= (V542);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk367)();
	vs_top=sup;
	V543= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V544= vs_base[0];
	V545= Cnil;
	V546= Cnil;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V545= vs_base[0];
	if(!(type_of((V544))==t_symbol)){
	goto T1289;}
	V546= (*(LnkLI351))((V544),STREF(object,(VV[97]->s.s_dbind),8));
	if(((V546))!=Cnil){
	goto T1288;}
	goto T1289;
T1289:;
	base[3]= VV[194];
	base[4]= (V544);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1288;
T1288:;
	base[3]= CMPcar((V546));
	base[4]= (V542);
	base[5]= (V545);
	base[6]= (V543);
	{object V547;
	V547= CMPcdr((V546));
	 vs_top=base+7;
	 while(V547!=Cnil)
	 {vs_push((V547)->c.c_car);V547=(V547)->c.c_cdr;}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	return;}
}
/*	local entry for function LOOP-DO-REPEAT	*/

static object LI84()

{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{register object V548;
	register object V549;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V548= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk367)();
	vs_top=sup;
	V550= vs_base[0];
	V549= (VFUN_NARGS=2,(*(LnkLI375))(V550,(VV[183]->s.s_dbind)));
	if(!(type_of((V548))==t_cons)){
	goto T1304;}
	if(!((CMPcar((V548)))==(VV[195]))){
	goto T1304;}
	base[0]= CMPcadr((V548));
	base[1]= (V549);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk326)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1304;}
	V549= CMPcadr((V548));
	goto T1304;
T1304:;
	{object V551;
	object V552;
	object V553;
	base[0]= (V548);
	base[1]= (V549);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk379)();
	if(vs_base>=vs_top){vs_top=sup;goto T1317;}
	V551= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1318;}
	V552= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1319;}
	V553= vs_base[0];
	vs_top=sup;
	goto T1320;
	goto T1317;
T1317:;
	V551= Cnil;
	goto T1318;
T1318:;
	V552= Cnil;
	goto T1319;
T1319:;
	V553= Cnil;
	goto T1320;
T1320:;
	if(((V552))==Cnil){
	goto T1322;}
	if(!(number_compare((V553),small_fixnum(1))<=0)){
	goto T1322;}
	{object V554 = listA(6,Ct,Cnil,Cnil,Cnil,(number_compare((V553),small_fixnum(0))<=0?Ct:Cnil),VV[196]);
	VMR72(V554)}
	goto T1322;
T1322:;
	{register object V555;
	V556= (VFUN_NARGS=1,(*(LnkLI328))(VV[197]));
	V555= (VFUN_NARGS=3,(*(LnkLI359))(/* INLINE-ARGS */V556,(V551),(V549)));
	if(((V552))==Cnil){
	goto T1328;}
	V557= list(2,VV[36],list(2,VV[198],list(3,VV[11],(V555),list(2,VV[199],(V555)))));
	{object V558 = make_cons(/* INLINE-ARGS */V557,VV[200]);
	VMR72(V558)}
	goto T1328;
T1328:;
	V559= list(2,VV[201],list(3,VV[11],(V555),list(2,VV[199],(V555))));
	{object V560 = make_cons(/* INLINE-ARGS */V559,VV[202]);
	VMR72(V560)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-WHEN-IT-VARIABLE	*/

static object LI85()

{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	if((VV[116]->s.s_dbind)!=Cnil){
	{object V561 = (VV[116]->s.s_dbind);
	VMR73(V561)}}
	V562= (VFUN_NARGS=1,(*(LnkLI328))(VV[203]));
	(VV[116]->s.s_dbind)= (VFUN_NARGS=3,(*(LnkLI359))(/* INLINE-ARGS */V562,Cnil,Cnil));
	{object V563 = (VV[116]->s.s_dbind);
	VMR73(V563)}
	return Cnil;
}
/*	local entry for function LOOP-ANSI-FOR-EQUALS	*/

static object LI86(V567,V568,V569)

register object V567;object V568;object V569;
{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	(void)((*(LnkLI380))((V567),Cnil,(V569)));
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[204]))==Cnil){
	goto T1333;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V570= vs_base[0];
	V571= list(2,(V567),V570);
	{object V572 = listA(7,Cnil,/* INLINE-ARGS */V571,Cnil,Cnil,Cnil,list(2,(V567),(V568)),VV[205]);
	VMR74(V572)}
	goto T1333;
T1333:;
	{object V573 = listA(3,Cnil,list(2,(V567),(V568)),VV[206]);
	VMR74(V573)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-FOR-ACROSS	*/

static object LI87(V577,V578,V579)

object V577;object V578;object V579;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	(void)((*(LnkLI380))((V577),Cnil,(V579)));
	{object V580;
	register object V581;
	V580= (VFUN_NARGS=1,(*(LnkLI328))(VV[207]));
	V581= (VFUN_NARGS=1,(*(LnkLI328))(VV[208]));
	{register object V582;
	object V583;
	object V584;
	base[0]= (V578);
	base[1]= VV[209];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk379)();
	if(vs_base>=vs_top){vs_top=sup;goto T1343;}
	V582= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1344;}
	V583= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1345;}
	V584= vs_base[0];
	vs_top=sup;
	goto T1346;
	goto T1343;
T1343:;
	V582= Cnil;
	goto T1344;
T1344:;
	V583= Cnil;
	goto T1345;
T1345:;
	V584= Cnil;
	goto T1346;
T1346:;
	if(!(type_of((V582))==t_cons)){
	goto T1350;}
	if(!((CMPcar((V582)))==(VV[195]))){
	goto T1350;}
	V585= CMPcadr((V582));
	goto T1348;
	goto T1350;
T1350:;
	V585= VV[209];
	goto T1348;
T1348:;
	(void)((VFUN_NARGS=3,(*(LnkLI359))((V580),(V582),V585)));
	(void)((VFUN_NARGS=3,(*(LnkLI359))((V581),small_fixnum(0),VV[210])));
	{long V586;
	object V587;
	register object V588;
	object V589;
	object V590;
	object V591;
	V586= 0;
	if(((V583))!=Cnil){
	goto T1358;}
	{object V592;
	V592= (VFUN_NARGS=1,(*(LnkLI328))(VV[211]));
	{object V593;
	V593= list(3,VV[11],(V592),list(2,VV[212],(V580)));
	(VV[106]->s.s_dbind)= make_cons((V593),(VV[106]->s.s_dbind));}
	V587= (VFUN_NARGS=3,(*(LnkLI359))((V592),small_fixnum(0),VV[210]));
	goto T1356;}
	goto T1358;
T1358:;
	V586= (long)length((V584));
	V587= CMPmake_fixnum(V586);
	goto T1356;
T1356:;
	V588= list(3,VV[213],(V581),(V587));
	V589= (V588);
	V590= list(2,(V577),list(3,VV[214],(V580),(V581)));
	V591= list(2,(V581),list(2,VV[180],(V581)));
	if(((V583))==Cnil){
	goto T1369;}
	V588= ((V586)==(0)?Ct:Cnil);
	if(!((V586)<=(1))){
	goto T1369;}
	V589= Ct;
	goto T1369;
T1369:;
	if(((((V588))==((V589))?Ct:Cnil))==Cnil){
	goto T1378;}
	V594= Cnil;
	goto T1377;
	goto T1378;
T1378:;
	V594= list(4,(V588),(V590),Cnil,(V591));
	goto T1377;
T1377:;
	{object V595 = listA(5,(V589),(V590),Cnil,(V591),V594);
	VMR75(V595)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-LIST-STEP	*/

static void L88()
{register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_check;
	{object V596;
	V596=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V597;
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[215]))==Cnil){
	goto T1382;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V597= vs_base[0];
	goto T1380;
	goto T1382;
T1382:;
	V597= VV[216];
	goto T1380;
T1380:;
	if(!(type_of((V597))==t_cons)){
	goto T1386;}
	if(!((CMPcar((V597)))==(VV[217]))){
	goto T1386;}
	(void)((VFUN_NARGS=1,(*(LnkLI338))(VV[218])));
	base[1]= list(3,VV[219],(V597),(V596));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1386;
T1386:;
	if(!(type_of((V597))==t_cons)){
	goto T1394;}
	if(!((CMPcar((V597)))==(VV[83]))){
	goto T1394;}
	base[1]= list(2,CMPcadr((V597)),(V596));
	base[2]= CMPcadr((V597));
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1394;
T1394:;
	V598= (VFUN_NARGS=1,(*(LnkLI328))(VV[220]));
	V599= (VFUN_NARGS=3,(*(LnkLI359))(/* INLINE-ARGS */V598,(V597),VV[83]));
	base[1]= list(3,VV[219],/* INLINE-ARGS */V599,(V596));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	local entry for function LOOP-FOR-ON	*/

static object LI89(V603,V604,V605)

register object V603;object V604;object V605;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V606;
	object V607;
	object V608;
	base[0]= (V604);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk379)();
	if(vs_base>=vs_top){vs_top=sup;goto T1404;}
	V606= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1405;}
	V607= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1406;}
	V608= vs_base[0];
	vs_top=sup;
	goto T1407;
	goto T1404;
T1404:;
	V606= Cnil;
	goto T1405;
T1405:;
	V607= Cnil;
	goto T1406;
T1406:;
	V608= Cnil;
	goto T1407;
T1407:;
	{register object V609;
	V609= (V603);
	if(((V603))==Cnil){
	goto T1410;}
	if(!(type_of((V603))==t_symbol)){
	goto T1410;}
	(void)((*(LnkLI380))((V603),(V606),(V605)));
	goto T1408;
	goto T1410;
T1410:;
	V609= (VFUN_NARGS=0,(*(LnkLI328))());
	(void)((VFUN_NARGS=3,(*(LnkLI359))((V609),(V606),VV[5])));
	(void)((*(LnkLI380))((V603),Cnil,(V605)));
	goto T1408;
T1408:;
	{object V610;
	object V611;
	base[0]= (V609);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk381)();
	if(vs_base>=vs_top){vs_top=sup;goto T1418;}
	V610= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1419;}
	V611= vs_base[0];
	vs_top=sup;
	goto T1420;
	goto T1418;
T1418:;
	V610= Cnil;
	goto T1419;
T1419:;
	V611= Cnil;
	goto T1420;
T1420:;
	{register object V612;
	object V613;
	V614= (((V603))==((V609))?Ct:Cnil);
	V615= list(2,VV[221],(V609));
	V612= (*(LnkLI330))(/* INLINE-ARGS */V614,(V609),/* INLINE-ARGS */V615);
	V613= (V612);
	if(((V607))==Cnil){
	goto T1423;}
	if(!(type_of((V608))==t_cons||((V608))==Cnil)){
	goto T1423;}
	V612= (((V608))==Cnil?Ct:Cnil);
	goto T1423;
T1423:;
	if(!(((V603))==((V609)))){
	goto T1430;}
	{object V616 = list(8,Cnil,list(2,(V609),(*(LnkLI330))(Ct,(V609),(V610))),(V613),Cnil,Cnil,Cnil,(V612),Cnil);
	VMR77(V616)}
	goto T1430;
T1430:;
	{object V617;
	object V618;
	V617= list(2,(V603),(V609));
	V618= list(2,(V609),(V610));
	if(((((V612))==((V613))?Ct:Cnil))==Cnil){
	goto T1435;}
	V619= Cnil;
	goto T1434;
	goto T1435;
T1435:;
	V619= list(4,(V612),(V617),Cnil,(V618));
	goto T1434;
T1434:;
	{object V620 = listA(5,(V613),(V617),Cnil,(V618),V619);
	VMR77(V620)}}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-FOR-IN	*/

static object LI90(V624,V625,V626)

object V624;object V625;object V626;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	{object V627;
	object V628;
	object V629;
	base[0]= (V625);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk379)();
	if(vs_base>=vs_top){vs_top=sup;goto T1439;}
	V627= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1440;}
	V628= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1441;}
	V629= vs_base[0];
	vs_top=sup;
	goto T1442;
	goto T1439;
T1439:;
	V627= Cnil;
	goto T1440;
T1440:;
	V628= Cnil;
	goto T1441;
T1441:;
	V629= Cnil;
	goto T1442;
T1442:;
	{register object V630;
	V630= (VFUN_NARGS=1,(*(LnkLI328))(VV[222]));
	(void)((*(LnkLI380))((V624),Cnil,(V626)));
	(void)((VFUN_NARGS=3,(*(LnkLI359))((V630),(V627),VV[5])));
	{object V631;
	object V632;
	base[0]= (V630);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk381)();
	if(vs_base>=vs_top){vs_top=sup;goto T1448;}
	V631= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1449;}
	V632= vs_base[0];
	vs_top=sup;
	goto T1450;
	goto T1448;
T1448:;
	V631= Cnil;
	goto T1449;
T1449:;
	V632= Cnil;
	goto T1450;
T1450:;
	{register object V633;
	object V634;
	object V635;
	object V636;
	V633= list(2,VV[223],(V630));
	V634= (V633);
	V635= list(2,(V624),list(2,VV[65],(V630)));
	V636= list(2,(V630),(V631));
	if(((V628))==Cnil){
	goto T1455;}
	if(!(type_of((V629))==t_cons||((V629))==Cnil)){
	goto T1455;}
	V633= (((V629))==Cnil?Ct:Cnil);
	goto T1455;
T1455:;
	if(((((V633))==((V634))?Ct:Cnil))==Cnil){
	goto T1462;}
	V637= Cnil;
	goto T1461;
	goto T1462;
T1462:;
	V637= list(4,(V633),(V635),Cnil,(V636));
	goto T1461;
T1461:;
	{object V638 = listA(5,(V634),(V635),Cnil,(V636),V637);
	VMR78(V638)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-LOOP-PATH	*/

static object LI91(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB79 VMS79 VMV79
	{object V639;
	object V640;
	object V641;
	object V642;
	object V643;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI91key,first,ap);
	V639=(Vcs[0]);
	V640=(Vcs[1]);
	V641=(Vcs[2]);
	V642=(Vcs[3]);
	V643=(Vcs[4]);
	base[0]= VV[224];
	base[1]= (V639);
	base[2]= (V640);
	base[3]= (V641);
	base[4]= (V642);
	base[5]= (V643);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V644 = vs_base[0];
	VMR79(V644)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ADD-LOOP-PATH	*/

static object LI92(object V647,object V646,object V645,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB80 VMS80 VMV80
	bds_check;
	{object V648;
	object V649;
	register object V650;
	object V651;
	object V652;
	object V653;
	va_start(ap,first);
	V648= V647;
	V649= V646;
	V650= V645;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI92key,first,ap);
	V651=(Vcs[3]);
	V652=(Vcs[4]);
	V653=(Vcs[5]);
	if(type_of((V648))==t_cons||((V648))==Cnil){
	goto T1470;}
	V648= make_cons((V648),Cnil);
	goto T1470;
T1470:;
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T1476;
T1476:;
	base[2]= (V650);
	base[3]= VV[39];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk382)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1477;}
	bds_unwind1;
	bds_unwind1;
	goto T1474;
	goto T1477;
T1477:;
	base[2]= VV[47];
	base[3]= VV[48];
	base[4]= VV[225];
	base[5]= (V650);
	base[6]= VV[39];
	vs_top=(vs_base=base+2)+5;
	Lcerror();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[51];
	base[4]= VV[225];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V650= vs_base[0];
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[52];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T1476;
	goto T1474;
T1474:;
	{object V654;
	object V655;
	V654= STREF(object,(V650),12);
	{object V657;
	object V658= (V648);
	if(V658==Cnil){
	V656= Cnil;
	goto T1504;}
	base[0]=V657=MMcons(Cnil,Cnil);
	goto T1505;
T1505:;
	(V657->c.c_car)= symbol_name((V658->c.c_car));
	if((V658=MMcdr(V658))==Cnil){
	V656= base[0];
	goto T1504;}
	V657=MMcdr(V657)=MMcons(Cnil,Cnil);
	goto T1505;}
	goto T1504;
T1504:;
	{object V660;
	object V661= (V651);
	if(V661==Cnil){
	V659= Cnil;
	goto T1507;}
	base[0]=V660=MMcons(Cnil,Cnil);
	goto T1508;
T1508:;
	if(!(type_of((V661->c.c_car))==t_cons||((V661->c.c_car))==Cnil)){
	goto T1511;}
	(V660->c.c_car)= (V661->c.c_car);
	goto T1509;
	goto T1511;
T1511:;
	(V660->c.c_car)= make_cons((V661->c.c_car),Cnil);
	goto T1509;
T1509:;
	if((V661=MMcdr(V661))==Cnil){
	V659= base[0];
	goto T1507;}
	V660=MMcdr(V660)=MMcons(Cnil,Cnil);
	goto T1508;}
	goto T1507;
T1507:;
	V655= (VFUN_NARGS=10,(*(LnkLI383))(VV[226],V656,VV[227],(V649),VV[228],(V653),VV[229],V659,VV[230],(V652)));
	{register object V663;
	register object V664;
	V663= (V648);
	V664= CMPcar((V663));
	goto T1517;
T1517:;
	if(!(((V663))==Cnil)){
	goto T1518;}
	goto T1513;
	goto T1518;
T1518:;
	{register object V665;
	register object V666;
	register object V667;
	V665= symbol_name((V664));
	V666= (V654);
	V667= (V655);
	base[2]= (V665);
	base[3]= (V666);
	base[4]= (V667);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	V663= CMPcdr((V663));
	V664= CMPcar((V663));
	goto T1517;}
	goto T1513;
T1513:;
	{object V668 = (V655);
	VMR80(V668)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-FOR-BEING	*/

static object LI93(V672,V673,V674)

object V672;object V673;object V674;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	{register object V675;
	object V676;
	object V677;
	object V678;
	object V679;
	V675= Cnil;
	V676= Cnil;
	V677= Cnil;
	V678= Cnil;
	V679= Cnil;
	if(((*(LnkLI353))((V673),VV[231]))==Cnil){
	goto T1536;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V675= vs_base[0];
	goto T1534;
	goto T1536;
T1536:;
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[155]))==Cnil){
	goto T1540;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V677= Ct;
	if(((*(LnkLI353))(CMPcar((VV[89]->s.s_dbind)),VV[232]))!=Cnil){
	goto T1545;}
	base[0]= VV[233];
	base[1]= CMPcar((VV[89]->s.s_dbind));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1545;
T1545:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V675= vs_base[0];
	V680= list(2,VV[234],(V673));
	V679= make_cons(/* INLINE-ARGS */V680,Cnil);
	goto T1534;
	goto T1540;
T1540:;
	base[0]= VV[235];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1534;
T1534:;
	if(type_of((V675))==t_symbol){
	goto T1557;}
	base[0]= VV[236];
	base[1]= (V675);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1555;
	goto T1557;
T1557:;
	V676= (*(LnkLI351))((V675),STREF(object,(VV[97]->s.s_dbind),12));
	if(((V676))!=Cnil){
	goto T1562;}
	base[0]= VV[237];
	base[1]= (V675);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1555;
	goto T1562;
T1562:;
	if(((V677))==Cnil){
	goto T1555;}
	if((STREF(object,(V676),8))!=Cnil){
	goto T1555;}
	base[0]= VV[238];
	base[1]= (V675);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1555;
T1555:;
	{object V681;
	object V682;
	object V683;
	V681= STREF(object,(V676),12);
	V684= (VFUN_NARGS=2,(*(LnkLI384))(STREF(object,(V676),4),Ct));
	V682= nconc((V679),/* INLINE-ARGS */V684);
	V683= STREF(object,(V676),16);
	if(!(type_of((V681))==t_symbol)){
	goto T1577;}
	base[0]= (V681);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V681= vs_base[0];
	goto T1577;
T1577:;
	if(((V677))==Cnil){
	goto T1584;}
	base[0]= (V681);
	base[1]= (V672);
	base[2]= (V674);
	base[3]= (V682);
	base[4]= VV[239];
	base[5]= Ct;
	{object V685;
	V685= (V683);
	 vs_top=base+6;
	 while(V685!=Cnil)
	 {vs_push((V685)->c.c_car);V685=(V685)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V678= vs_base[0];
	goto T1582;
	goto T1584;
T1584:;
	base[0]= (V681);
	base[1]= (V672);
	base[2]= (V674);
	base[3]= (V682);
	{object V686;
	V686= (V683);
	 vs_top=base+4;
	 while(V686!=Cnil)
	 {vs_push((V686)->c.c_car);V686=(V686)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V678= vs_base[0];
	goto T1582;
T1582:;}
	if(((VV[102]->s.s_dbind))==Cnil){
	goto T1598;}
	base[0]= VV[240];
	base[1]= (VV[102]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1598;
T1598:;
	V688 = CMPmake_fixnum((long)length((V678)));
	{register object x= V688,V687= VV[241];
	while(V687!=Cnil)
	if(eql(x,V687->c.c_car)){
	goto T1603;
	}else V687=V687->c.c_cdr;}
	base[0]= VV[242];
	base[1]= (V675);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1603;
T1603:;
	{register object V689;
	register object V690;
	V689= CMPcar((V678));
	V690= Cnil;
	goto T1611;
T1611:;
	if(((V689))!=Cnil){
	goto T1612;}
	goto T1608;
	goto T1612;
T1612:;
	V690= CMPcar((V689));
	if(!(type_of((V690))!=t_cons)){
	goto T1618;}
	(void)((*(LnkLI380))((V690),Cnil,Cnil));
	goto T1616;
	goto T1618;
T1618:;
	(void)((*(LnkLI380))(CMPcar((V690)),CMPcadr((V690)),CMPcaddr((V690))));
	goto T1616;
T1616:;
	V689= CMPcdr((V689));
	goto T1611;}
	goto T1608;
T1608:;
	V691= reverse(CMPcadr((V678)));
	(VV[106]->s.s_dbind)= nconc(/* INLINE-ARGS */V691,(VV[106]->s.s_dbind));
	{object V692 = CMPcddr((V678));
	VMR81(V692)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for NAMED-VARIABLE	*/

static void L94()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V693;
	V693=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V694;
	V694= (*(LnkLI385))((V693),(VV[102]->s.s_dbind));
	if(((V694))!=Cnil){
	goto T1628;}
	base[1]= (VFUN_NARGS=0,(*(LnkLI328))());
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1628;
T1628:;
	(VV[102]->s.s_dbind)= (VFUN_NARGS=2,(*(LnkLI386))((V694),(VV[102]->s.s_dbind)));
	base[1]= CMPcdr((V694));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	local entry for function LOOP-COLLECT-PREPOSITIONAL-PHRASES	*/

static object LI95(object V695,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB83 VMS83 VMV83
	{object V696;
	object V697;
	object V698;
	va_start(ap,first);
	V696= V695;
	narg = narg - 1;
	if (narg <= 0) goto T1636;
	else {
	V697= first;}
	if (--narg <= 0) goto T1637;
	else {
	V698= va_arg(ap,object);}
	--narg; goto T1638;
	goto T1636;
T1636:;
	V697= Cnil;
	goto T1637;
T1637:;
	V698= Cnil;
	goto T1638;
T1638:;
	base[0]=make_cclosure_new(LC96,Cnil,Cnil,Cdata);
	base[0]=MMcons(base[0],Cnil);
	{object V699;
	object V700;
	register object V701;
	register object V702;
	object V703;
	object V704;
	{object V705;
	object V706= (V698);
	if(V706==Cnil){
	V703= Cnil;
	goto T1641;}
	base[1]=V705=MMcons(Cnil,Cnil);
	goto T1642;
T1642:;
	V708= CMPcar((V706->c.c_car));
	V709= (base[0]->c.c_car);
	base[2]= (VFUN_NARGS=4,(*(LnkLI368))(/* INLINE-ARGS */V708,(V696),VV[20],V709));
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	(V705->c.c_cdr)= vs_base[0];
	while(MMcdr(V705)!=Cnil)V705=MMcdr(V705);
	if((V706=MMcdr(V706))==Cnil){
	base[1]=base[1]->c.c_cdr;
	V703= base[1];
	goto T1641;}
	goto T1642;}
	goto T1641;
T1641:;
	{object V710;
	object V711= (V698);
	if(V711==Cnil){
	V704= Cnil;
	goto T1646;}
	base[1]=V710=MMcons(Cnil,Cnil);
	goto T1647;
T1647:;
	(V710->c.c_car)= CMPcar((V711->c.c_car));
	if((V711=MMcdr(V711))==Cnil){
	V704= base[1];
	goto T1646;}
	V710=MMcdr(V710)=MMcons(Cnil,Cnil);
	goto T1647;}
	goto T1646;
T1646:;
	V699= Cnil;
	V700= (V698);
	V701= Cnil;
	V702= Cnil;
	goto T1650;
T1650:;
	if(((VV[89]->s.s_dbind))!=Cnil){
	goto T1651;}
	{object V712 = nreverse((V700));
	VMR83(V712)}
	goto T1651;
T1651:;
	V699= CMPcar((VV[89]->s.s_dbind));
	{register object V713;
	register object V714;
	V713= (V696);
	V714= CMPcar((V713));
	goto T1661;
T1661:;
	if(!(((V713))==Cnil)){
	goto T1662;}
	goto T1657;
	goto T1662;
T1662:;
	base[2]= (V699);
	base[3]= (V714);
	vs_top=(vs_base=base+2)+2;
	L96(base);
	vs_top=sup;
	V702= vs_base[0];
	if(((V702))==Cnil){
	goto T1666;}
	V701= (V714);
	goto T1657;
	goto T1666;
T1666:;
	V713= CMPcdr((V713));
	V714= CMPcar((V713));
	goto T1661;}
	goto T1657;
T1657:;
	if(((V701))==Cnil){
	goto T1680;}
	{register object x= (V702),V715= (V703);
	while(V715!=Cnil)
	if(eql(x,V715->c.c_car)){
	goto T1684;
	}else V715=V715->c.c_cdr;
	goto T1682;}
	goto T1684;
T1684:;
	{register object x= (V702),V716= (V704);
	while(V716!=Cnil)
	if(eql(x,V716->c.c_car)){
	goto T1688;
	}else V716=V716->c.c_cdr;
	goto T1687;}
	goto T1688;
T1688:;
	base[1]= VV[243];
	goto T1685;
	goto T1687;
T1687:;
	base[1]= VV[244];
	goto T1685;
T1685:;
	base[2]= (V699);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1682;
T1682:;
	if(!(type_of((V701))==t_cons||((V701))==Cnil)){
	goto T1693;}
	V704= append((V701),(V704));
	goto T1691;
	goto T1693;
T1693:;
	V704= make_cons((V701),(V704));
	goto T1691;
T1691:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	{object V717;
	vs_base=vs_top;
	(void) (*Lnk361)();
	vs_top=sup;
	V718= vs_base[0];
	V717= list(2,(V702),V718);
	V700= make_cons((V717),(V700));
	goto T1678;}
	goto T1680;
T1680:;
	if(((V697))==Cnil){
	goto T1700;}
	if(((*(LnkLI357))((V699),VV[245]))==Cnil){
	goto T1700;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	{register object V719;
	object V720;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V719= vs_base[0];
	V720= Cnil;
	goto T1707;
T1707:;
	if(type_of((V719))!=t_cons){
	goto T1711;}
	if(type_of(CMPcdr((V719)))!=t_cons){
	goto T1711;}
	if((CMPcddr((V719)))!=Cnil){
	goto T1711;}
	if(!(type_of(CMPcar((V719)))==t_symbol)){
	goto T1711;}
	if((CMPcadr((V719)))==Cnil){
	goto T1710;}
	if(type_of(CMPcadr((V719)))==t_symbol){
	goto T1710;}
	goto T1711;
T1711:;
	base[1]= VV[246];
	base[2]= (V719);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1710;
T1710:;
	if((CMPcadr((V719)))==Cnil){
	goto T1725;}
	V720= (*(LnkLI385))(CMPcar((V719)),(VV[102]->s.s_dbind));
	if(((V720))==Cnil){
	goto T1729;}
	base[1]= VV[247];
	base[2]= CMPcar((V719));
	base[3]= CMPcadr((V719));
	base[4]= CMPcadr((V720));
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1725;
	goto T1729;
T1729:;
	{object V721;
	V721= make_cons(CMPcar((V719)),CMPcadr((V719)));
	(VV[102]->s.s_dbind)= make_cons((V721),(VV[102]->s.s_dbind));}
	goto T1725;
T1725:;
	if(((VV[89]->s.s_dbind))==Cnil){
	goto T1739;}
	if(!(type_of(CMPcar((VV[89]->s.s_dbind)))==t_symbol)){
	goto T1738;}
	goto T1739;
T1739:;
	goto T1678;
	goto T1738;
T1738:;
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	V719= vs_base[0];
	goto T1707;}
	goto T1700;
T1700:;
	{object V722 = nreverse((V700));
	VMR83(V722)}
	goto T1678;
T1678:;
	V701= Cnil;
	V702= Cnil;
	goto T1650;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-SEQUENCER	*/

static object LI97(V733,V734,V735,V736,V737,V738,V739,V740,V741,V742)

object V733;register object V734;object V735;object V736;object V737;object V738;object V739;object V740;object V741;object V742;
{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	{object V743;
	object V744;
	object V745;
	object V746;
	object V747;
	object V748;
	object V749;
	register object V750;
	register object V751;
	object V752;
	object V753;
	object V754;
	object V755;
	object V756;
	object V757;{object V759;
	V759= (*(LnkLI329))((V734));
	if(V759==Cnil)goto T1752;
	V758= V759;
	goto T1751;
	goto T1752;
T1752:;}
	V758= small_fixnum(0);
	goto T1751;
T1751:;
	V747= one_plus(V758);
	V743= Cnil;
	V744= Cnil;
	V745= Cnil;
	V746= Cnil;
	V748= Ct;
	V749= Cnil;
	V750= Cnil;
	V751= Cnil;
	V752= Cnil;
	V753= Cnil;
	V754= Cnil;
	V755= Cnil;
	V756= Cnil;
	V757= Cnil;
	if(((V736))==Cnil){
	goto T1754;}
	(void)((*(LnkLI380))((V736),Cnil,(V737)));
	goto T1754;
T1754:;
	{register object V760;
	register object V761;
	register object V762;
	object V763;
	V760= (V742);
	V761= Cnil;
	V762= Cnil;
	V763= Cnil;
	goto T1759;
T1759:;
	if(((V760))!=Cnil){
	goto T1760;}
	goto T1757;
	goto T1760;
T1760:;
	V761= CMPcaar((V760));
	V762= CMPcadar((V760));
	{object V764= (V761);
	if((V764!= VV[387])
	&& (V764!= VV[234]))goto T1769;
	V744= Ct;
	(void)((VFUN_NARGS=3,(*(LnkLI359))((V738),(V762),(V739))));
	goto T1768;
	goto T1769;
T1769:;
	if((V764!= VV[388])
	&& (V764!= VV[248])
	&& (V764!= VV[250]))goto T1772;
	V752= Ct;
	if(!(((V761))==(VV[248]))){
	goto T1777;}
	V750= VV[249];
	goto T1775;
	goto T1777;
T1777:;
	if(!(((V761))==(VV[250]))){
	goto T1775;}
	V750= VV[251];
	goto T1775;
T1775:;
	base[0]= (V762);
	base[1]= (V734);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk379)();
	if(vs_base<vs_top){
	V762= vs_base[0];
	vs_base++;
	}else{
	V762= Cnil;}
	if(vs_base<vs_top){
	V754= vs_base[0];
	vs_base++;
	}else{
	V754= Cnil;}
	if(vs_base<vs_top){
	V753= vs_base[0];
	}else{
	V753= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI380))((V733),(V762),(V734)));
	goto T1768;
	goto T1772;
T1772:;
	if((V764!= VV[252])
	&& (V764!= VV[253])
	&& (V764!= VV[254])
	&& (V764!= VV[255])
	&& (V764!= VV[256]))goto T1787;
	if(((*(LnkLI357))((V761),VV[252]))==Cnil){
	goto T1790;}
	V750= VV[251];
	V751= VV[251];
	goto T1788;
	goto T1790;
T1790:;
	if(((*(LnkLI357))((V761),VV[253]))==Cnil){
	goto T1795;}
	V751= Ct;
	goto T1788;
	goto T1795;
T1795:;
	if(((*(LnkLI357))((V761),VV[254]))==Cnil){
	goto T1799;}
	V750= VV[249];
	V751= VV[249];
	goto T1788;
	goto T1799;
T1799:;
	if(((*(LnkLI357))((V761),VV[255]))==Cnil){
	goto T1804;}
	V750= VV[249];
	goto T1788;
	goto T1804;
T1804:;
	if(((*(LnkLI357))((V761),VV[256]))==Cnil){
	goto T1788;}
	V750= VV[251];
	goto T1788;
T1788:;
	V755= Ct;
	base[0]= (V762);
	base[1]= (V734);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk379)();
	if(vs_base<vs_top){
	V762= vs_base[0];
	vs_base++;
	}else{
	V762= Cnil;}
	if(vs_base<vs_top){
	V756= vs_base[0];
	vs_base++;
	}else{
	V756= Cnil;}
	if(vs_base<vs_top){
	V757= vs_base[0];
	}else{
	V757= Cnil;}
	vs_top=sup;
	if(((V756))==Cnil){
	goto T1818;}
	V743= list(2,VV[217],(V757));
	goto T1816;
	goto T1818;
T1818:;
	V765= (VFUN_NARGS=1,(*(LnkLI328))(VV[257]));
	V743= (VFUN_NARGS=3,(*(LnkLI359))(/* INLINE-ARGS */V765,(V762),(V734)));
	goto T1816;
T1816:;
	goto T1768;
	goto T1787;
T1787:;
	if((V764!= VV[215]))goto T1820;
	base[0]= (V762);
	base[1]= (V734);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk379)();
	if(vs_base<vs_top){
	V762= vs_base[0];
	vs_base++;
	}else{
	V762= Cnil;}
	if(vs_base<vs_top){
	V748= vs_base[0];
	vs_base++;
	}else{
	V748= Cnil;}
	if(vs_base<vs_top){
	V747= vs_base[0];
	}else{
	V747= Cnil;}
	vs_top=sup;
	if(((V748))!=Cnil){
	goto T1768;}
	V747= (VFUN_NARGS=1,(*(LnkLI328))(VV[258]));
	(void)((VFUN_NARGS=3,(*(LnkLI359))((V747),(V762),(V734))));
	goto T1768;
	goto T1820;
T1820:;
	base[0]= VV[259];
	base[1]= (V761);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk347)();
	vs_top=sup;}
	goto T1768;
T1768:;
	if(((V763))==Cnil){
	goto T1830;}
	if(((V750))==Cnil){
	goto T1830;}
	if(((V750))==((V763))){
	goto T1830;}
	base[0]= VV[260];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1830;
T1830:;
	V763= (V750);
	V760= CMPcdr((V760));
	goto T1759;}
	goto T1757;
T1757:;
	if(((V738))==Cnil){
	goto T1843;}
	if(((V744))!=Cnil){
	goto T1843;}
	base[0]= VV[261];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1843;
T1843:;
	if(((V752))!=Cnil){
	goto T1849;}
	V754= Ct;{object V767;
	V767= (*(LnkLI329))((V734));
	if(V767==Cnil)goto T1856;
	V753= V767;
	goto T1855;
	goto T1856;
T1856:;}
	V753= small_fixnum(0);
	goto T1855;
T1855:;
	V766= (V753);
	(void)((*(LnkLI380))((V733),V766,(V734)));
	goto T1849;
T1849:;
	{register object x= (V750),V768= VV[262];
	while(V768!=Cnil)
	if(eql(x,V768->c.c_car)){
	goto T1861;
	}else V768=V768->c.c_cdr;
	goto T1860;}
	goto T1861;
T1861:;
	if(((V755))!=Cnil){
	goto T1863;}
	if(((V741))==Cnil){
	goto T1862;}
	goto T1863;
T1863:;
	if(((V755))!=Cnil){
	goto T1867;}
	V743= (VFUN_NARGS=1,(*(LnkLI328))(VV[263]));
	(void)((VFUN_NARGS=3,(*(LnkLI359))((V743),Cnil,(V734))));
	{object V769;
	V769= list(3,VV[11],(V743),(V741));
	(VV[106]->s.s_dbind)= make_cons((V769),(VV[106]->s.s_dbind));}
	goto T1867;
T1867:;
	if(((V751))==Cnil){
	goto T1876;}
	V745= VV[34];
	goto T1874;
	goto T1876;
T1876:;
	V745= VV[213];
	goto T1874;
T1874:;
	goto T1862;
T1862:;
	if(!(eql((V747),small_fixnum(1)))){
	goto T1880;}
	V749= list(2,VV[180],(V733));
	goto T1878;
	goto T1880;
T1880:;
	V749= list(3,VV[181],(V733),(V747));
	goto T1878;
T1878:;
	goto T1858;
	goto T1860;
T1860:;
	if(((V752))!=Cnil){
	goto T1882;}
	if(((V741))!=Cnil){
	goto T1885;}
	base[0]= VV[264];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1885;
T1885:;
	{object V770;
	V770= list(3,VV[11],(V733),list(2,VV[199],(V741)));
	(VV[106]->s.s_dbind)= make_cons((V770),(VV[106]->s.s_dbind));}
	goto T1882;
T1882:;
	if(((V741))==Cnil){
	goto T1891;}
	if(((V743))!=Cnil){
	goto T1891;}
	V743= (*(LnkLI329))((V734));
	V751= Ct;
	goto T1891;
T1891:;
	if(((V743))==Cnil){
	goto T1899;}
	if(((V751))==Cnil){
	goto T1904;}
	V745= VV[33];
	goto T1902;
	goto T1904;
T1904:;
	V745= VV[265];
	goto T1902;
T1902:;
	goto T1899;
T1899:;
	if(!(eql((V747),small_fixnum(1)))){
	goto T1908;}
	V749= list(2,VV[199],(V733));
	goto T1906;
	goto T1908;
T1908:;
	V749= list(3,VV[266],(V733),(V747));
	goto T1906;
T1906:;
	goto T1858;
T1858:;
	if(((V745))==Cnil){
	goto T1910;}
	V771= list(3,(V745),(V733),(V743));
	V746= (*(LnkLI330))(Ct,(V733),/* INLINE-ARGS */V771);
	goto T1910;
T1910:;
	if(((V740))==Cnil){
	goto T1914;}
	V740= list(2,(V736),(*(LnkLI330))((V735),(V733),(V740)));
	goto T1914;
T1914:;
	{object V772;
	object V773;
	V772= (V746);
	V773= (V746);
	if(((V748))==Cnil){
	goto T1918;}
	if(((V754))==Cnil){
	goto T1918;}
	if(((V756))==Cnil){
	goto T1918;}
	base[0]= (V745);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V774= vs_base[0];
	V772= (
	V775 = V774,
	(type_of(V775) == t_sfun ?(*((V775)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V775)==t_vfun) ?
	(*((V775)->sfn.sfn_self)):
	(fcall.fun=(V775),fcalln))((V753),(V757)));
	if(((V772))==Cnil){
	goto T1918;}
	V773= Ct;
	goto T1918;
T1918:;
	{object V776 = list(8,Cnil,list(2,(V733),(*(LnkLI330))(Ct,(V733),(V749))),(V773),(V740),Cnil,Cnil,(V772),(V740));
	VMR84(V776)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-FOR-ARITHMETIC	*/

static object LI98(V781,V782,V783,V784)

object V781;object V782;object V783;object V784;
{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	V785= (VFUN_NARGS=2,(*(LnkLI375))((V783),(VV[183]->s.s_dbind)));
	V786= list(2,(V784),(V782));
	V787= make_cons(/* INLINE-ARGS */V786,Cnil);
	V788= (VFUN_NARGS=3,(*(LnkLI384))(VV[267],Cnil,/* INLINE-ARGS */V787));
	{object V789 = (*(LnkLI389))((V781),/* INLINE-ARGS */V785,Ct,Cnil,Cnil,Cnil,Cnil,Cnil,Cnil,/* INLINE-ARGS */V788);
	VMR85(V789)}
	return Cnil;
}
/*	local entry for function LOOP-SEQUENCE-ELEMENTS-PATH	*/

static object LI99(object V792,object V791,object V790,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB86 VMS86 VMV86
	{object V793;
	object V794;
	object V795;
	object V796;
	object V797;
	object V798;
	object V799;
	va_start(ap,first);
	V793= V792;
	V794= V791;
	V795= V790;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI99key,first,ap);
	V796=(Vcs[3]);
	V797=(Vcs[4]);
	V798=(Vcs[5]);
	V799=(Vcs[6]);
	{object V800;
	object V801;
	base[0]= VV[268];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk394)();
	if(vs_base>=vs_top){vs_top=sup;goto T1933;}
	V800= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1934;}
	V801= vs_base[0];
	vs_top=sup;
	goto T1935;
	goto T1933;
T1933:;
	V800= Cnil;
	goto T1934;
T1934:;
	V801= Cnil;
	goto T1935;
T1935:;
	{object V802;
	base[0]= VV[269];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk394)();
	vs_top=sup;
	V802= vs_base[0];
	if((V794)!=Cnil){
	V803= (V794);
	goto T1938;}
	V803= (V799);
	goto T1938;
T1938:;
	V804= list(3,(V796),(V802),(V800));
	V805= list(2,(V797),(V802));
	{object V806 = listA(3,Cnil,Cnil,(*(LnkLI389))((V800),VV[210],(V801),(V793),V803,(V802),(V798),/* INLINE-ARGS */V804,/* INLINE-ARGS */V805,(V795)));
	VMR86(V806)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-HASH-TABLE-ITERATION-PATH	*/

static object LI100(object V809,object V808,object V807,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB87 VMS87 VMV87
	bds_check;
	{object V810;
	object V811;
	object V812;
	register object V813;
	va_start(ap,first);
	V810= V809;
	V811= V808;
	V812= V807;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI100key,first,ap);
	V813=(Vcs[3]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T1941;
T1941:;
	base[2]= (V813);
	base[3]= VV[270];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1942;}
	bds_unwind1;
	bds_unwind1;
	goto T1939;
	goto T1942;
T1942:;
	base[2]= VV[47];
	base[3]= VV[48];
	base[4]= VV[271];
	base[5]= (V813);
	base[6]= VV[270];
	vs_top=(vs_base=base+2)+5;
	Lcerror();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[51];
	base[4]= VV[271];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V813= vs_base[0];
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[52];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T1941;
	goto T1939;
T1939:;
	if((CMPcdr((V812)))!=Cnil){
	goto T1968;}
	{register object x= CMPcaar((V812)),V814= VV[272];
	while(V814!=Cnil)
	if(eql(x,V814->c.c_car)){
	goto T1969;
	}else V814=V814->c.c_cdr;}
	goto T1968;
T1968:;
	base[0]= VV[273];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1967;
	goto T1969;
T1969:;
	if(((V812))!=Cnil){
	goto T1967;}
	base[0]= VV[274];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T1967;
T1967:;
	{object V815;
	object V816;
	object V817;
	register object V818;
	V815= (VFUN_NARGS=1,(*(LnkLI328))(VV[275]));
	V816= (VFUN_NARGS=1,(*(LnkLI328))(VV[276]));
	V817= Cnil;
	V818= Cnil;
	{object V819;
	object V820;
	if(!(((V813))==(VV[277]))){
	goto T1982;}
	base[0]= VV[278];
	goto T1980;
	goto T1982;
T1982:;
	base[0]= VV[277];
	goto T1980;
T1980:;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk394)();
	if(vs_base>=vs_top){vs_top=sup;goto T1984;}
	V819= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1985;}
	V820= vs_base[0];
	vs_top=sup;
	goto T1986;
	goto T1984;
T1984:;
	V819= Cnil;
	goto T1985;
T1985:;
	V820= Cnil;
	goto T1986;
T1986:;
	V820= Ct;
	V817= (*(LnkLI378))();
	{register object V821;
	register object V822;
	register object V823;
	V824= list(3,(V810),Cnil,(V811));
	V825= list(2,(V815),CMPcadar((V812)));
	if((V820)==Cnil){
	V826= Cnil;
	goto T1992;}
	if((V819)==Cnil){
	V826= Cnil;
	goto T1992;}
	V827= list(2,(V819),Cnil);
	V826= make_cons(/* INLINE-ARGS */V827,Cnil);
	goto T1992;
T1992:;
	V823= listA(3,/* INLINE-ARGS */V824,/* INLINE-ARGS */V825,V826);
	V821= Cnil;
	V822= Cnil;
	if(!(((V813))==(VV[277]))){
	goto T1995;}
	V821= (V810);
	if((V820)==Cnil){
	V822= Cnil;
	goto T1999;}
	V822= (V819);
	goto T1999;
T1999:;
	goto T1993;
	goto T1995;
T1995:;
	if((V820)==Cnil){
	V821= Cnil;
	goto T2001;}
	V821= (V819);
	goto T2001;
T2001:;
	V822= (V810);
	goto T1993;
T1993:;
	{object V828;
	V828= list(2,VV[279],list(2,(V816),(V815)));
	(VV[107]->s.s_dbind)= make_cons((V828),(VV[107]->s.s_dbind));}
	if(!(type_of((V821))==t_cons)){
	goto T2006;}{object V829;
	V829= (V821);
	V821= (VFUN_NARGS=1,(*(LnkLI328))(VV[280]));
	V818= listA(3,V829,(V821),(V818));}
	{object V830;
	V830= list(2,(V821),Cnil);
	V823= make_cons((V830),(V823));}
	goto T2006;
T2006:;
	if(!(type_of((V822))==t_cons)){
	goto T2014;}{object V831;
	V831= (V822);
	V822= (VFUN_NARGS=1,(*(LnkLI328))(VV[281]));
	V818= listA(3,V831,(V822),(V818));}
	{object V832;
	V832= list(2,(V822),Cnil);
	V823= make_cons((V832),(V823));}
	goto T2014;
T2014:;
	V833= list(3,(V817),(V821),(V822));
	{object V834 = list(6,(V823),Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[85],/* INLINE-ARGS */V833,make_cons((V816),Cnil))),(V818));
	VMR87(V834)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-PACKAGE-SYMBOLS-ITERATION-PATH	*/

static object LI101(object V837,object V836,object V835,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB88 VMS88 VMV88
	{object V838;
	object V839;
	register object V840;
	object V841;
	va_start(ap,first);
	V838= V837;
	V839= V836;
	V840= V835;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI101key,first,ap);
	V841=(Vcs[3]);
	if((CMPcdr((V840)))!=Cnil){
	goto T2023;}
	{register object x= CMPcaar((V840)),V842= VV[282];
	while(V842!=Cnil)
	if(eql(x,V842->c.c_car)){
	goto T2024;
	}else V842=V842->c.c_cdr;}
	goto T2023;
T2023:;
	base[0]= VV[283];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2022;
	goto T2024;
T2024:;
	if(((V840))!=Cnil){
	goto T2022;}
	base[0]= VV[284];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2022;
T2022:;
	if(type_of((V838))==t_symbol){
	goto T2032;}
	base[0]= VV[285];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk347)();
	vs_top=sup;
	goto T2032;
T2032:;
	{object V843;
	object V844;
	V843= (VFUN_NARGS=1,(*(LnkLI328))(VV[286]));
	V844= (VFUN_NARGS=1,(*(LnkLI328))(VV[287]));
	{object V845;
	V845= list(2,VV[288],listA(3,(V844),(V843),(V841)));
	(VV[107]->s.s_dbind)= make_cons((V845),(VV[107]->s.s_dbind));}
	V846= list(3,(V838),Cnil,(V839));
	V847= list(2,/* INLINE-ARGS */V846,list(2,(V843),CMPcadar((V840))));
	V848= (*(LnkLI378))();
	V849= list(2,/* INLINE-ARGS */V848,(V838));
	{object V850 = list(6,/* INLINE-ARGS */V847,Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[85],/* INLINE-ARGS */V849,make_cons((V844),Cnil))),Cnil);
	VMR88(V850)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-ANSI-LOOP-UNIVERSE	*/

static object LI102(V852)

object V852;
{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	{register object V853;
	base[0]= VV[289];
	base[1]= VV[290];
	base[2]= VV[291];
	base[3]= VV[292];
	base[4]= VV[293];
	base[5]= VV[294];
	base[6]= VV[295];
	base[7]= VV[296];
	base[8]= VV[297];
	base[9]= VV[298];
	base[10]= VV[299];
	base[11]= VV[300];
	base[12]= list(2,VV[179],list(4,VV[301],VV[179],(VV[183]->s.s_dbind),VV[210]));
	base[13]= list(2,VV[302],list(4,VV[301],VV[179],(VV[183]->s.s_dbind),VV[210]));
	base[14]= VV[303];
	vs_top=(vs_base=base+0)+15;
	LlistA();
	vs_top=sup;
	V854= vs_base[0];
	if(((V852))==Cnil){
	goto T2060;}
	V855= VV[307];
	goto T2058;
	goto T2060;
T2060:;
	V855= Ct;
	goto T2058;
T2058:;
	V853= (VFUN_NARGS=12,(*(LnkLI397))(VV[53],V854,VV[54],VV[304],VV[55],VV[305],VV[60],VV[306],VV[59],Cnil,VV[57],V855));
	(void)((VFUN_NARGS=9,(*(LnkLI398))(VV[308],VV[309],(V853),VV[229],VV[310],VV[230],Cnil,VV[228],VV[311])));
	(void)((VFUN_NARGS=9,(*(LnkLI398))(VV[312],VV[309],(V853),VV[229],VV[313],VV[230],Cnil,VV[228],VV[314])));
	(void)((VFUN_NARGS=9,(*(LnkLI398))(VV[315],VV[316],(V853),VV[229],VV[317],VV[230],Cnil,VV[228],VV[318])));
	(void)((VFUN_NARGS=9,(*(LnkLI398))(VV[319],VV[316],(V853),VV[229],VV[320],VV[230],Cnil,VV[228],VV[321])));
	(void)((VFUN_NARGS=9,(*(LnkLI398))(VV[322],VV[316],(V853),VV[229],VV[323],VV[230],Cnil,VV[228],VV[324])));
	{object V856 = (V853);
	VMR89(V856)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-STANDARD-EXPANSION	*/

static object LI103(V860,V861,V862)

register object V860;object V861;object V862;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	if(((V860))==Cnil){
	goto T2068;}
	if(!(type_of(CMPcar((V860)))==t_symbol)){
	goto T2068;}
	{object V863 = (*(LnkLI399))((V860),(V861),(V862));
	VMR90(V863)}
	goto T2068;
T2068:;
	{object V864;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V864= vs_base[0];
	V865= make_cons(VV[14],(V860));
	{object V866 = list(3,VV[124],Cnil,list(4,VV[73],(V864),/* INLINE-ARGS */V865,list(2,VV[82],(V864))));
	VMR90(V866)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for LOOP	*/

static void L104()
{register object *base=vs_base;
	register object *sup=base+VM91; VC91
	vs_check;
	vs_top=sup;
	{object V867=base[0]->c.c_cdr;
	base[2]= V867;}
	base[3]= (*(LnkLI400))(base[2],base[1],(VV[325]->s.s_dbind));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function IN-GROUP-P	*/

static void LC96(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM92; VC92
	vs_check;
	{object V868;
	object V869;
	V868=(base[0]);
	V869=(base[1]);
	vs_top=sup;
	V870= (*(LnkLI353))((V868),(V869));
	base[2]= CMPcar(/* INLINE-ARGS */V870);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function IN-GROUP-P	*/

static void L96(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM93; VC93
	vs_check;
	{object V871;
	object V872;
	V871=(base[0]);
	V872=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	V873= (*(LnkLI353))((V871),(V872));
	base[2]= CMPcar(/* INLINE-ARGS */V873);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function MAKE-ENDTEST	*/

static void L82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM94; VC94
	vs_check;
	{object V874;
	V874=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V874))!=Cnil){
	goto T2074;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2074;
T2074:;
	{register object x= Ct,V875= (V874);
	while(V875!=Cnil)
	if(eql(x,V875->c.c_car)){
	goto T2078;
	}else V875=V875->c.c_cdr;
	goto T2077;}
	goto T2078;
T2078:;
	base[1]= VV[192];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2077;
T2077:;
	V874= nreverse((V874));
	if((CMPcdr((V874)))!=Cnil){
	goto T2081;}
	V876= CMPcar((V874));
	goto T2079;
	goto T2081;
T2081:;
	V876= make_cons(VV[35],(V874));
	goto T2079;
T2079:;
	base[1]= list(3,VV[8],V876,VV[193]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function GET-CLAUSE	*/

static void L66(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM95; VC95
	vs_check;
	{object V877;
	V877=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V878;
	V878= Cnil;
	goto T2085;
T2085:;
	{register object V879;
	register object V880;
	V879= CMPcar((VV[89]->s.s_dbind));
	bds_bind(VV[109],Cnil);
	V880= Cnil;
	if(type_of((V879))==t_symbol){
	goto T2091;}
	base[2]= VV[152];
	base[3]= (V879);
	base[4]= (V877);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	bds_unwind1;
	goto T2088;
	goto T2091;
T2091:;
	(VV[88]->s.s_dbind)= (VV[89]->s.s_dbind);
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[153]))==Cnil){
	goto T2099;}
	if(base0[1]!=Cnil){
	V881= base0[1];
	goto T2103;}
	base0[1]= (*(LnkLI378))();
	V881= base0[1];
	goto T2103;
T2103:;
	(VV[89]->s.s_dbind)= make_cons(V881,CMPcdr((VV[89]->s.s_dbind)));
	goto T2099;
T2099:;
	V880= (*(LnkLI351))((V879),STREF(object,(VV[97]->s.s_dbind),0));
	if(((V880))==Cnil){
	goto T2105;}
	base[3]= CMPcar((V880));
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	{object V882;
	V882= CMPcdr((V880));
	 vs_top=base+3;
	 while(V882!=Cnil)
	 {vs_push((V882)->c.c_car);V882=(V882)->c.c_cdr;}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if(!(((VV[109]->s.s_dbind))==Cnil)){
	goto T2106;}
	goto T2105;
T2105:;
	base[2]= VV[154];
	base[3]= (V879);
	base[4]= (V877);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	bds_unwind1;
	goto T2088;
	goto T2106;
T2106:;
	base[2]= (VV[109]->s.s_dbind);
	base[3]= (V878);
	vs_top=(vs_base=base+2)+2;
	Lreconc();
	vs_top=sup;
	V878= vs_base[0];
	bds_unwind1;}
	goto T2088;
T2088:;
	if(((*(LnkLI357))(CMPcar((VV[89]->s.s_dbind)),VV[155]))==Cnil){
	goto T2123;}
	vs_base=vs_top;
	(void) (*Lnk350)();
	vs_top=sup;
	goto T2121;
	goto T2123;
T2123:;
	if((CMPcdr((V878)))==Cnil){
	goto T2126;}
	V883= nreverse((V878));
	base[1]= make_cons(VV[14],/* INLINE-ARGS */V883);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2126;
T2126:;
	base[1]= CMPcar((V878));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2121;
T2121:;
	goto T2085;}
	}
}
/*	local function REPLICATE	*/

static void L59(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	{object V884;
	object V885;
	V884=(base[0]);
	V885=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V885))!=t_cons)){
	goto T2131;}
	base[2]= (V884);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2131;
T2131:;
	base[2]= (V884);
	base[3]= CMPcar((V885));
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	vs_top=sup;
	V886= vs_base[0];
	base[2]= (V884);
	base[3]= CMPcdr((V885));
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	vs_top=sup;
	V887= vs_base[0];
	base[2]= make_cons(V886,V887);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function TRANSLATE	*/

static void L58(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM97; VC97
	vs_check;
	{register object V888;
	register object V889;
	V888=(base[0]);
	V889=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V888))!=Cnil){
	goto T2140;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2140;
T2140:;
	if(!(type_of((V888))!=t_cons)){
	goto T2143;}{object V890;
	base[3]= (V888);
	base[4]= STREF(object,(VV[97]->s.s_dbind),16);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V890= vs_base[0];
	if(V890==Cnil)goto T2146;
	base[2]= V890;
	goto T2145;
	goto T2146;
T2146:;}{object V891;
	base[3]= symbol_name((V888));
	base[4]= STREF(object,(VV[97]->s.s_dbind),20);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V891= vs_base[0];
	if(V891==Cnil)goto T2150;
	base[2]= V891;
	goto T2145;
	goto T2150;
T2150:;}
	base[3]= VV[140];
	base[4]= base0[1];
	base[5]= (V888);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk347)();
	vs_top=sup;
	base[2]= vs_base[0];
	goto T2145;
T2145:;
	base[3]= (V889);
	vs_top=(vs_base=base+2)+2;
	L59(base0);
	return;
	goto T2143;
T2143:;
	if(!(type_of((V889))!=t_cons)){
	goto T2159;}
	base[2]= VV[141];
	base[3]= base0[1];
	base[4]= base0[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk347)();
	return;
	goto T2159;
T2159:;
	base[2]= CMPcar((V888));
	base[3]= CMPcar((V889));
	vs_top=(vs_base=base+2)+2;
	L58(base0);
	vs_top=sup;
	V892= vs_base[0];
	base[2]= CMPcdr((V888));
	base[3]= CMPcdr((V889));
	vs_top=(vs_base=base+2)+2;
	L58(base0);
	vs_top=sup;
	V893= vs_base[0];
	base[2]= make_cons(V892,V893);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function LIST-SIZE	*/

static void L40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	{object V894;
	V894=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{long V895;
	V895= 0;
	{register object V896;
	object V897;
	V896= (V894);
	V897= CMPcar((V896));
	goto T2174;
T2174:;
	if(!(((V896))==Cnil)){
	goto T2175;}
	base[2]= CMPmake_fixnum(V895);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2175;
T2175:;
	V898 = CMPmake_fixnum(V895);
	base[2]= (V897);
	base[3]= base0[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk342)();
	vs_top=sup;
	V899= vs_base[0];
	V895= fix(number_plus(V898,V899));
	V896= CMPcdr((V896));
	V897= CMPcar((V896));
	goto T2174;}}
	}
}
/*	local function MAKEBODY	*/

static void L35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM99; VC99
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V900;
	V902= nreverse(base0[7]);
	base[0]= append(base0[2],/* INLINE-ARGS */V902);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V901= vs_base[0];
	base[1]= base0[8];
	base[2]= VV[75];
	vs_top=(vs_base=base+1)+2;
	Lreconc();
	vs_top=sup;
	V904= vs_base[0];
	base[0]= append(base0[4],V904);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V903= vs_base[0];
	base[0]= base0[6];
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V905= vs_base[0];
	V906= make_cons(VV[76],V905);
	V907= append(V903,/* INLINE-ARGS */V906);
	V908= make_cons(VV[74],/* INLINE-ARGS */V907);
	V909= append(V901,/* INLINE-ARGS */V908);
	V900= make_cons(VV[73],/* INLINE-ARGS */V909);
	if((base0[9])==Cnil){
	goto T2200;}
	V910= list(2,base0[9],Cnil);
	base[0]= list(3,VV[29],make_cons(/* INLINE-ARGS */V910,Cnil),(V900));
	vs_top=(vs_base=base+0)+1;
	return;
	goto T2200;
T2200:;
	base[0]= (V900);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function PIFY	*/

static void L34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_check;
	{object V911;
	V911=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((CMPcdr((V911)))!=Cnil){
	goto T2203;}
	base[1]= CMPcar((V911));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2203;
T2203:;
	base[1]= make_cons(VV[14],(V911));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function PSIMP	*/

static void L33(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	{object V912;
	V912=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V913;
	V913= Cnil;
	{register object V914;
	register object V915;
	V914= (V912);
	V915= CMPcar((V914));
	goto T2209;
T2209:;
	if(!(((V914))==Cnil)){
	goto T2210;}
	goto T2205;
	goto T2210;
T2210:;
	if(((V915))==Cnil){
	goto T2214;}
	{register object V916;
	V916= (V915);
	V913= make_cons((V916),(V913));}
	if(!(type_of((V915))==t_cons)){
	goto T2214;}
	{register object x= CMPcar((V915)),V917= VV[72];
	while(V917!=Cnil)
	if(eql(x,V917->c.c_car)){
	goto T2223;
	}else V917=V917->c.c_cdr;
	goto T2214;}
	goto T2223;
T2223:;
	goto T2205;
	goto T2214;
T2214:;
	V914= CMPcdr((V914));
	V915= CMPcar((V914));
	goto T2209;}
	goto T2205;
T2205:;
	base[1]= nreverse((V913));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function FIND-NON-NULL	*/

static void L27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_check;
	{object V918;
	V918=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V919;
	V919= (V918);
	goto T2230;
T2230:;
	if(type_of((V919))==t_cons){
	goto T2231;}
	base[1]= (V919);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2231;
T2231:;
	{register object V920;
	V920= CMPcar((V919));
	V919= CMPcdr((V919));
	base[1]= (V920);}
	vs_top=(vs_base=base+1)+1;
	L27(base0);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2235;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2235;
T2235:;
	goto T2230;}
	}
}
/*	local function LOOP-DESETQ-INTERNAL	*/

static void L28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM103; VC103
	vs_check;
	{register object V921;
	register object V922;
	object V923;
	V921=(base[0]);
	V922=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2244;}
	V923=(base[2]);
	vs_top=sup;
	goto T2245;
	goto T2244;
T2244:;
	V923= Cnil;
	goto T2245;
T2245:;
	{register object V924;
	V924= (V921);
	if(!(((V924))==Cnil)){
	goto T2248;}
	if(!(type_of((V922))==t_cons)){
	goto T2251;}
	if(!((CMPcar((V922)))==(VV[62]))){
	goto T2254;}
	{object V925;
	object V926= CMPcdr((V922));
	if(V926==Cnil){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	base[3]=V925=MMcons(Cnil,Cnil);
	goto T2256;
T2256:;
	{register object V927;
	V927= (V926->c.c_car);
	if(type_of((V927))==t_cons){
	goto T2258;}
	(V925->c.c_cdr)= Cnil;
	goto T2257;
	goto T2258;
T2258:;
	if(!((((CMPcar((V927)))==(VV[65])?Ct:Cnil))==Cnil)){
	goto T2262;}
	goto T2260;
	goto T2262;
T2262:;
	if(!(((type_of(CMPcadr((V927)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T2264;}
	goto T2260;
	goto T2264;
T2264:;
	base[4]= (V927);
	base[5]= base0[1];
	vs_top=(vs_base=base+4)+2;
	Lmacroexpand();
	vs_top=sup;
	V927= vs_base[0];
	if(((type_of((V927))==t_symbol?Ct:Cnil))==Cnil){
	goto T2260;}
	(V925->c.c_cdr)= Cnil;
	goto T2257;
	goto T2260;
T2260:;
	(V925->c.c_cdr)= make_cons((V927),Cnil);}
	goto T2257;
T2257:;
	while(MMcdr(V925)!=Cnil)V925=MMcdr(V925);
	if((V926=MMcdr(V926))==Cnil){
	base[3]=base[3]->c.c_cdr;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2256;}
	goto T2254;
T2254:;
	base[3]= make_cons((V922),Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2251;
T2251:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2248;
T2248:;
	if(!(type_of((V924))==t_cons)){
	goto T2270;}
	{object V928;
	object V929;
	object V930;
	object V931;
	V928= CMPcar((V921));
	V929= CMPcdr((V921));
	base[7]= (V928);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V930= vs_base[0];
	base[7]= (V929);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V931= vs_base[0];
	if(((V930))!=Cnil){
	goto T2278;}
	if(((V931))==Cnil){
	goto T2279;}
	goto T2278;
T2278:;
	if(((V931))==Cnil){
	goto T2284;}
	{register object V933;
	object V934;
	if((V923)!=Cnil){
	V933= (V923);
	goto T2286;}
	V933= (VV[66]->s.s_dbind);
	goto T2286;
T2286:;
	base[9]= (V928);
	base[10]= list(2,VV[65],(V933));
	vs_top=(vs_base=base+9)+2;
	L28(base0);
	vs_top=sup;
	V935= vs_base[0];
	V936= list(3,VV[11],(V933),list(2,VV[10],(V933)));
	base[9]= (V929);
	base[10]= (V933);
	base[11]= (V933);
	vs_top=(vs_base=base+9)+3;
	L28(base0);
	vs_top=sup;
	V937= vs_base[0];
	V938= make_cons(/* INLINE-ARGS */V936,V937);
	V934= append(V935,/* INLINE-ARGS */V938);
	if((V923)==Cnil){
	goto T2296;}
	if(((V933))==((V922))){
	goto T2300;}
	V940= list(3,VV[11],(V933),(V922));
	V939= make_cons(/* INLINE-ARGS */V940,Cnil);
	goto T2298;
	goto T2300;
T2300:;
	V939= Cnil;
	goto T2298;
T2298:;
	base[9]= append(V939,(V934));
	vs_top=(vs_base=base+9)+1;
	return;
	goto T2296;
T2296:;
	V941= list(2,(V933),(V922));
	V942= listA(3,VV[29],make_cons(/* INLINE-ARGS */V941,Cnil),(V934));
	base[9]= make_cons(/* INLINE-ARGS */V942,Cnil);
	vs_top=(vs_base=base+9)+1;
	return;}
	goto T2284;
T2284:;
	base[7]= (V928);
	base[8]= list(2,VV[65],(V922));
	base[9]= (V923);
	vs_top=(vs_base=base+7)+3;
	L28(base0);
	return;
	goto T2279;
T2279:;
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
	goto T2270;
T2270:;
	if(((V921))==((V922))){
	goto T2306;}
	V943= list(3,VV[11],(V921),(V922));
	base[3]= make_cons(/* INLINE-ARGS */V943,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2306;
T2306:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function MAKETABLE	*/

static void L23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM104; VC104
	vs_check;
	{object V944;
	V944=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V945;
	object V946;
	V945= CMPmake_fixnum((long)length((V944)));
	base[3]= VV[61];
	if(!(number_compare((V945),small_fixnum(10))<0)){
	goto T2313;}
	base[4]= small_fixnum(10);
	goto T2311;
	goto T2313;
T2313:;
	base[4]= (V945);
	goto T2311;
T2311:;
	base[5]= VV[20];
	base[6]= (VV[401]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V946= vs_base[0];
	{register object V947;
	register object V948;
	V947= (V944);
	V948= CMPcar((V947));
	goto T2321;
T2321:;
	if(!(((V947))==Cnil)){
	goto T2322;}
	goto T2317;
	goto T2322;
T2322:;
	{object V949;
	object V951;
	V949= symbol_name(CMPcar((V948)));
	V951= CMPcadr((V948));
	base[6]= (V949);
	base[7]= V946;
	base[8]= (V951);
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	V947= CMPcdr((V947));
	V948= CMPcar((V947));
	goto T2321;}
	goto T2317;
T2317:;
	base[3]= (V946);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CDR-WRAP	*/

static void L8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_check;
	{register object V952;
	register long V953;
	V952=(base[0]);
	V953=fix(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	goto T2338;
T2338:;
	if(!((V953)<=(4))){
	goto T2339;}switch(V953){
	case 1:
	goto T2345;
T2345:;
	V954= VV[10];
	goto T2343;
	case 2:
	goto T2346;
T2346:;
	V954= VV[15];
	goto T2343;
	case 3:
	goto T2347;
T2347:;
	V954= VV[16];
	goto T2343;
	case 4:
	goto T2348;
T2348:;
	V954= VV[17];
	goto T2343;
	default:
	goto T2349;
T2349:;
	V954= Cnil;
	goto T2343;}
	V954= Cnil;
	goto T2343;
T2343:;
	V952= list(2,V954,(V952));
	base[2]= (V952);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2339;
T2339:;
	V952= list(2,VV[17],(V952));
	V953= (long)(V953)-(4);
	goto T2338;
	}
}
static object  LnkTLI400(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[400],(void **)(void *)&LnkLI400,3,first,ap);va_end(ap);return V1;} /* LOOP-STANDARD-EXPANSION */
static object  LnkTLI399(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[399],(void **)(void *)&LnkLI399,3,first,ap);va_end(ap);return V1;} /* LOOP-TRANSLATE */
static object  LnkTLI398(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[398],(void **)(void *)&LnkLI398,first,ap);va_end(ap);return V1;} /* ADD-LOOP-PATH */
static object  LnkTLI397(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[397],(void **)(void *)&LnkLI397,first,ap);va_end(ap);return V1;} /* MAKE-STANDARD-LOOP-UNIVERSE */
static void LnkT394(){ call_or_link(VV[394],(void **)(void *)&Lnk394);} /* NAMED-VARIABLE */
static object  LnkTLI389(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[389],(void **)(void *)&LnkLI389,10,first,ap);va_end(ap);return V1;} /* LOOP-SEQUENCER */
static object  LnkTLI386(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[386],(void **)(void *)&LnkLI386,first,ap);va_end(ap);return V1;} /* DELETE */
static object  LnkTLI385(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[385],(void **)(void *)&LnkLI385,2,first,ap);va_end(ap);return V1;} /* LOOP-TASSOC */
static object  LnkTLI384(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[384],(void **)(void *)&LnkLI384,first,ap);va_end(ap);return V1;} /* LOOP-COLLECT-PREPOSITIONAL-PHRASES */
static object  LnkTLI383(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[383],(void **)(void *)&LnkLI383,first,ap);va_end(ap);return V1;} /* MAKE-LOOP-PATH */
static void LnkT382(){ call_or_link(VV[382],(void **)(void *)&Lnk382);} /* STRUCTURE-SUBTYPE-P */
static void LnkT381(){ call_or_link(VV[381],(void **)(void *)&Lnk381);} /* LOOP-LIST-STEP */
static object  LnkTLI380(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[380],(void **)(void *)&LnkLI380,3,first,ap);va_end(ap);return V1;} /* LOOP-MAKE-ITERATION-VARIABLE */
static void LnkT379(){ call_or_link(VV[379],(void **)(void *)&Lnk379);} /* LOOP-CONSTANT-FOLD-IF-POSSIBLE */
static object  LnkTLI378(){return call_proc0(VV[378],(void **)(void *)&LnkLI378);} /* LOOP-WHEN-IT-VARIABLE */
static object  LnkTLI377(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[377],(void **)(void *)&LnkLI377,2,first,ap);va_end(ap);return V1;} /* LOOP-NOTE-MINIMAX-OPERATION */
static object  LnkTLI376(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[376],(void **)(void *)&LnkLI376,2,first,ap);va_end(ap);return V1;} /* MAKE-LOOP-MINIMAX */
static object  LnkTLI375(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[375],(void **)(void *)&LnkLI375,first,ap);va_end(ap);return V1;} /* LOOP-CHECK-DATA-TYPE */
static object  LnkTLI372(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[372],(void **)(void *)&LnkLI372,1,first,ap);va_end(ap);return V1;} /* LOOP-EMIT-FINAL-VALUE */
static void LnkT371(){ call_or_link(VV[371],(void **)(void *)&Lnk371);} /* LOOP-GET-COLLECTION-INFO */
static object  LnkTLI370(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[370],(void **)(void *)&LnkLI370,first,ap);va_end(ap);return V1;} /* MAKE-LOOP-COLLECTOR */
static object  LnkTLI368(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[368],(void **)(void *)&LnkLI368,first,ap);va_end(ap);return V1;} /* FIND */
static void LnkT367(){ call_or_link(VV[367],(void **)(void *)&Lnk367);} /* LOOP-OPTIONAL-TYPE */
static object  LnkTLI364(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[364],(void **)(void *)&LnkLI364,1,first,ap);va_end(ap);return V1;} /* LOOP-EMIT-BODY */
static object  LnkTLI363(){return call_proc0(VV[363],(void **)(void *)&LnkLI363);} /* LOOP-GET-PROGN */
static void LnkT362(){ call_or_link(VV[362],(void **)(void *)&Lnk362);} /* LOOP-DISALLOW-CONDITIONAL */
static void LnkT361(){ call_or_link(VV[361],(void **)(void *)&Lnk361);} /* LOOP-GET-FORM */
static object  LnkTLI360(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[360],(void **)(void *)&LnkLI360,1,first,ap);va_end(ap);return V1;} /* LOOP-CONSTANTP */
static object  LnkTLI359(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[359],(void **)(void *)&LnkLI359,first,ap);va_end(ap);return V1;} /* LOOP-MAKE-VARIABLE */
static object  LnkTLI358(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[358],(void **)(void *)&LnkLI358,2,first,ap);va_end(ap);return V1;} /* LOOP-DECLARE-VARIABLE */
static object  LnkTLI357(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[357],(void **)(void *)&LnkLI357,2,first,ap);va_end(ap);return V1;} /* LOOP-TEQUAL */
static object  LnkTLI356(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[356],(void **)(void *)&LnkLI356,2,first,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI355(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[355],(void **)(void *)&LnkLI355,1,first,ap);va_end(ap);return V1;} /* LOOP-CONSTRUCT-RETURN */
static object  LnkTLI354(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[354],(void **)(void *)&LnkLI354,1,first,ap);va_end(ap);return V1;} /* LOOP-PSEUDO-BODY */
static object  LnkTLI353(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[353],(void **)(void *)&LnkLI353,2,first,ap);va_end(ap);return V1;} /* LOOP-TMEMBER */
static object  LnkTLI352(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[352],(void **)(void *)&LnkLI352,1,first,ap);va_end(ap);return V1;} /* LOOP-HACK-ITERATION */
static object  LnkTLI351(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[351],(void **)(void *)&LnkLI351,2,first,ap);va_end(ap);return V1;} /* LOOP-LOOKUP-KEYWORD */
static void LnkT350(){ call_or_link(VV[350],(void **)(void *)&Lnk350);} /* LOOP-POP-SOURCE */
static object  LnkTLI349(){return call_proc0(VV[349],(void **)(void *)&LnkLI349);} /* LOOP-BIND-BLOCK */
static object  LnkTLI348(){return call_proc0(VV[348],(void **)(void *)&LnkLI348);} /* LOOP-ITERATION-DRIVER */
static void LnkT347(){ call_or_link(VV[347],(void **)(void *)&Lnk347);} /* LOOP-ERROR */
static void LnkT326(){ call_or_link(VV[326],(void **)(void *)&Lnk326);} /* SUBTYPEP */
static object  LnkTLI346(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[346],(void **)(void *)&LnkLI346,first,ap);va_end(ap);return V1;} /* WARN */
static void LnkT345(){ call_or_link(VV[345],(void **)(void *)&Lnk345);} /* SPECIFIC-ERROR */
static object  LnkTLI344(){return call_proc0(VV[344],(void **)(void *)&LnkLI344);} /* LOOP-CONTEXT */
static void LnkT343(){ call_or_link(VV[343],(void **)(void *)&Lnk343);} /* SPECIAL-OPERATOR-P */
static void LnkT342(){ call_or_link(VV[342],(void **)(void *)&Lnk342);} /* ESTIMATE-CODE-SIZE-1 */
static object  LnkTLI341(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[341],(void **)(void *)&LnkLI341,1,first,ap);va_end(ap);return V1;} /* DESTRUCTURING-SIZE */
static void LnkT77(){ call_or_link(VV[77],(void **)(void *)&Lnk77);} /* ESTIMATE-CODE-SIZE */
static object  LnkTLI340(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[340],(void **)(void *)&LnkLI340,1,first,ap);va_end(ap);return V1;} /* LOOP-CODE-DUPLICATION-THRESHOLD */
static void LnkT339(){ call_or_link(VV[339],(void **)(void *)&Lnk339);} /* LOOP-OPTIMIZATION-QUANTITIES */
static object  LnkTLI338(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[338],(void **)(void *)&LnkLI338,first,ap);va_end(ap);return V1;} /* LOOP-WARN */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[337],(void **)(void *)&LnkLI337,1,first,ap);va_end(ap);return V1;} /* LOOP-MAKE-PSETQ */
static object  LnkTLI336(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[336],(void **)(void *)&LnkLI336,1,first,ap);va_end(ap);return V1;} /* LOOP-MAKE-DESETQ */
static object  LnkTLI334(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[334],(void **)(void *)&LnkLI334,first,ap);va_end(ap);return V1;} /* MAKE-LOOP-UNIVERSE */
static void LnkT333(){ call_or_link(VV[333],(void **)(void *)&Lnk333);} /* TYPEP */
static object  LnkTLI330(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[330],(void **)(void *)&LnkLI330,3,first,ap);va_end(ap);return V1;} /* HIDE-VARIABLE-REFERENCE */
static object  LnkTLI329(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[329],(void **)(void *)&LnkLI329,1,first,ap);va_end(ap);return V1;} /* LOOP-TYPED-INIT */
static object  LnkTLI328(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[328],(void **)(void *)&LnkLI328,first,ap);va_end(ap);return V1;} /* LOOP-GENTEMP */
static object  LnkTLI327(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[327],(void **)(void *)&LnkLI327,first,ap);va_end(ap);return V1;} /* MAKE-LOOP-MINIMAX-INTERNAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

