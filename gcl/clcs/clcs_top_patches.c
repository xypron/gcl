
#include "cmpinclude.h"
#include "clcs_top_patches.h"
void init_clcs_top_patches(){do_init(VV);}
/*	macro definition for WITH-CLCS-BREAK-LEVEL-BINDINGS	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= V1;}
	base[3]= listA(3,VV[0],VV[1],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for CLCS-BREAK-LEVEL-INVOKE-RESTART	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	bds_check;
	bds_bind(VV[2],base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(number_compare(small_fixnum(0),(VV[2]->s.s_dbind))<0)){
	goto T2;}{object V2;
	V2= (VV[2]->s.s_dbind);
	V3= number_plus((VV[3]->s.s_dbind),small_fixnum(1));
	if(!(number_compare(V2,/* INLINE-ARGS */V3)<0)){
	goto T2;}}
	{object V4;
	V5= number_minus((VV[2]->s.s_dbind),small_fixnum(1));
	V4= nth(fix(/* INLINE-ARGS */V5),(VV[4]->s.s_dbind));
	base[1]= (V4);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk62)();
	bds_unwind1;
	return;}
	goto T2;
T2:;
	base[1]= Ct;
	base[2]= VV[5];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	bds_unwind1;
	return;
}
/*	function definition for CLCS-BREAK-LEVEL	*/

static void L3()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM3; VC3
	vs_check;
	bds_check;
	{VOL object V6;
	VOL object V7;
	V6=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T10;}
	V7=(base[1]);
	vs_top=sup;
	goto T11;
	goto T10;
T10:;
	V7= Cnil;
	goto T11;
T11:;
	if(type_of((V6))==t_string){
	goto T14;}
	base[24]= (V6);
	vs_top=(vs_base=base+24)+1;
	(void) (*Lnk63)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T15;}
	goto T14;
T14:;
	bds_bind(VV[6],(V6));
	goto T13;
	goto T15;
T15:;
	bds_bind(VV[6],(VV[6]->s.s_dbind));
	goto T13;
T13:;
	V8= make_cons((VV[8]->s.s_dbind),(VV[9]->s.s_dbind));
	bds_bind(VV[7],make_cons(/* INLINE-ARGS */V8,(VV[7]->s.s_dbind)));
	bds_bind(VV[9],Cnil);
	base[24]= (V6);
	vs_top=(vs_base=base+24)+1;
	(void) (*Lnk63)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T23;}
	bds_bind(VV[8],make_cons(Ct,(VV[8]->s.s_dbind)));
	goto T21;
	goto T23;
T23:;
	bds_bind(VV[8],(VV[8]->s.s_dbind));
	goto T21;
T21:;
	bds_bind(VV[10],one_plus((VV[11]->s.s_dbind)));
	vs_base=vs_top;
	(void) (*Lnk64)();
	vs_top=sup;
	V9= vs_base[0];
	bds_bind(VV[11],one_minus(V9));
	bds_bind(VV[12],(VV[11]->s.s_dbind));{VOL object V10;
	base[24]= (VV[14]->s.s_dbind);
	base[25]= (VV[10]->s.s_dbind);
	vs_top=(vs_base=base+24)+2;
	(void) (*Lnk65)();
	vs_top=sup;
	V10= vs_base[0];
	if(V10==Cnil)goto T30;
	bds_bind(VV[13],V10);
	goto T29;
	goto T30;
T30:;}
	vs_base=vs_top;
	(void) (*Lnk66)();
	vs_top=sup;
	V11= vs_base[0];
	bds_bind(VV[13],one_plus(V11));
	goto T29;
T29:;
	vs_base=vs_top;
	(void) (*Lnk66)();
	vs_top=sup;
	bds_bind(VV[14],vs_base[0]);
	bds_bind(VV[15],Cnil);
	if((VV[17]->s.s_dbind)!=Cnil){
	bds_bind(VV[16],(VV[17]->s.s_dbind));
	goto T36;}
	bds_bind(VV[16],(VV[16]->s.s_dbind));
	goto T36;
T36:;
	bds_bind(VV[18],Cnil);
	bds_bind(VV[19],(VV[19]->s.s_dbind));
	bds_bind(VV[20],(VV[20]->s.s_dbind));
	bds_bind(VV[21],(VV[21]->s.s_dbind));
	bds_bind(VV[2],(VV[2]->s.s_dbind));
	bds_bind(VV[22],(VV[22]->s.s_dbind));
	bds_bind(VV[23],(VV[23]->s.s_dbind));
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	bds_bind(VV[26],(VV[26]->s.s_dbind));
	bds_bind(VV[27],(VV[27]->s.s_dbind));
	bds_bind(VV[28],one_plus((VV[28]->s.s_dbind)));
	base[25]=MMcons((VV[28]->s.s_dbind),Cnil);
	vs_base=vs_top;
	(void) (*Lnk67)();
	vs_top=sup;
	bds_bind(VV[4],vs_base[0]);
	bds_bind(VV[3],CMPmake_fixnum((long)length((VV[4]->s.s_dbind))));
	base[32]= VV[30];
	vs_top=(vs_base=base+32)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	bds_bind(VV[29],vs_base[0]);{VOL object V12;
	{object V13;
	base[32]= VV[32];
	vs_top=(vs_base=base+32)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	V13= vs_base[0];
	if(((VV[31]->s.s_dbind))==Cnil){
	goto T47;}
	if(((VV[31]->s.s_dbind))==((V13))){
	goto T48;}
	goto T47;
T47:;
	V12= (V13);
	goto T44;
	goto T48;
T48:;
	V12= Cnil;}
	goto T44;
T44:;
	if(V12==Cnil)goto T43;
	bds_bind(VV[31],V12);
	goto T42;
	goto T43;
T43:;}
	{object V14;
	if(((VV[4]->s.s_dbind))==Cnil){
	goto T54;}
	V14= CMPcar((VV[4]->s.s_dbind));
	goto T52;
	goto T54;
T54:;
	V14= Cnil;
	goto T52;
T52:;
	if(((V14))==((VV[29]->s.s_dbind))){
	goto T57;}
	bds_bind(VV[31],(V14));
	goto T42;
	goto T57;
T57:;
	bds_bind(VV[31],Cnil);}
	goto T42;
T42:;
	base[32]= (V6);
	vs_top=(vs_base=base+32)+1;
	(void) (*Lnk63)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T61;}
	bds_bind(VV[33],(V6));
	goto T59;
	goto T61;
T61:;
	bds_bind(VV[33],(VV[33]->s.s_dbind));
	goto T59;
T59:;
	{object V15;
	V15= Cnil;
	{register object V16;
	object V17;
	V16= (VV[4]->s.s_dbind);
	V17= CMPcar((V16));
	goto T69;
T69:;
	if(!(((V16))==Cnil)){
	goto T70;}
	goto T65;
	goto T70;
T70:;
	if(!((VV[30])==(STREF(object,(V17),0)))){
	goto T74;}
	V15= make_cons(V17,(V15));
	goto T74;
T74:;
	V16= CMPcdr((V16));
	V17= CMPcar((V16));
	goto T69;}
	goto T65;
T65:;
	bds_bind(VV[34],nreverse((V15)));}
	if(!(type_of((V6))==t_cons)){
	goto T85;}
	base[32]= (V6);
	base[33]= (V7);
	vs_top=(vs_base=base+32)+2;
	(void) (*Lnk69)();
	vs_top=sup;
	goto T83;
	goto T85;
T85:;
	base[32]=MMcons(Cnil,base[25]);
	base[33]=alloc_frame_id();
	base[33]=MMcons(base[33],base[32]);
	frs_push(FRS_CATCH,(base[33]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[46]))goto T90;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[35]= VV[37];
	base[36]= VV[30];
	base[37]= VV[38];
	base[38]= 
	make_cclosure_new(LC8,Cnil,base[33],Cdata);
	base[39]= VV[39];
	base[40]= 
	make_cclosure_new(LC9,Cnil,base[33],Cdata);
	vs_top=(vs_base=base+35)+6;
	(void) (*Lnk70)();
	vs_top=sup;
	V19= vs_base[0];
	V20= make_cons(V19,Cnil);
	base[34]= make_cons(/* INLINE-ARGS */V20,(VV[36]->s.s_dbind));
	bds_bind(VV[36],base[34]);
	base[35]= (VV[41]->s.s_dbind);
	base[36]= VV[42];
	base[37]= (VV[6]->s.s_dbind);
	vs_top=(vs_base=base+35)+3;
	Lformat();
	vs_top=sup;
	if(!(((long)length((VV[43]->s.s_dbind)))>(0))){
	goto T103;}
	base[35]= (VV[41]->s.s_dbind);
	base[36]= VV[44];
	vs_top=(vs_base=base+35)+2;
	Lformat();
	vs_top=sup;
	goto T103;
T103:;
	vs_base=vs_top;
	(void) (*Lnk71)();
	vs_top=sup;
	(VV[45]->s.s_dbind)= Cnil;
	vs_base=vs_top;
	(void) (*Lnk72)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T83;
	goto T90;
T90:;
	{object V21;
	V21= (base[32]->c.c_car);
	base[34]= Cnil;
	base[35]= Ct;
	vs_top=(vs_base=base+34)+2;
	vs_top=sup;
	frs_pop();
	goto T83;}
	frs_pop();
	goto T83;
	goto T83;
T83:;
	base[32]= small_fixnum(1);
	vs_top=(vs_base=base+32)+1;
	(void) (*Lnk73)();
	vs_top=sup;
	(VV[47]->s.s_dbind)= Ct;
	goto T119;
T119:;
	(VV[21]->s.s_dbind)= (VV[20]->s.s_dbind);
	(VV[20]->s.s_dbind)= (VV[19]->s.s_dbind);
	(VV[19]->s.s_dbind)= (VV[2]->s.s_dbind);
	if(((VV[45]->s.s_dbind))==Cnil){
	goto T129;}
	(VV[45]->s.s_dbind)= Cnil;
	goto T127;
	goto T129;
T129:;
	base[32]= (VV[41]->s.s_dbind);
	base[33]= VV[48];
	if(!(type_of((V6))==t_string)){
	goto T136;}
	base[34]= VV[49];
	goto T134;
	goto T136;
T136:;
	base[34]= VV[50];
	goto T134;
T134:;{VOL object V22;
	V22= (VV[51]->s.s_dbind);
	base[36]= VV[52];
	vs_top=(vs_base=base+36)+1;
	Lfind_package();
	vs_top=sup;
	V23= vs_base[0];
	if(!((V22)==(V23))){
	goto T140;}}
	base[35]= VV[53];
	goto T138;
	goto T140;
T140:;
	base[36]= (VV[51]->s.s_dbind);
	vs_top=(vs_base=base+36)+1;
	Lpackage_name();
	vs_top=sup;
	base[35]= vs_base[0];
	goto T138;
T138:;
	base[36]= (VV[8]->s.s_dbind);
	vs_top=(vs_base=base+32)+5;
	Lformat();
	vs_top=sup;
	goto T127;
T127:;
	base[32]=MMcons(Cnil,base[25]);
	base[33]=alloc_frame_id();
	base[33]=MMcons(base[33],base[32]);
	frs_push(FRS_CATCH,(base[33]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[57]))goto T149;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[35]= VV[37];
	base[36]= VV[30];
	base[37]= VV[38];
	base[38]= 
	make_cclosure_new(LC10,Cnil,base[33],Cdata);
	base[39]= VV[39];
	base[40]= 
	make_cclosure_new(LC11,Cnil,base[33],Cdata);
	vs_top=(vs_base=base+35)+6;
	(void) (*Lnk70)();
	vs_top=sup;
	V24= vs_base[0];
	V25= make_cons(V24,Cnil);
	base[34]= make_cons(/* INLINE-ARGS */V25,(VV[36]->s.s_dbind));
	bds_bind(VV[36],base[34]);
	frs_push(FRS_CATCH,VV[55]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V26= vs_base[0];
	goto T158;}
	else{
	base[35]= (VV[41]->s.s_dbind);
	base[36]= Cnil;
	base[37]= (VV[56]->s.s_dbind);
	vs_top=(vs_base=base+35)+3;
	(void) (*Lnk74)();
	vs_top=sup;
	(VV[2]->s.s_dbind)= vs_base[0];
	if(!(((VV[2]->s.s_dbind))==((VV[56]->s.s_dbind)))){
	goto T165;}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	goto T165;
T165:;
	{register object V27;
	object V28;
	V27= Cnil;
	if((type_of((VV[2]->s.s_dbind))==t_symbol&&((VV[2]->s.s_dbind))->s.s_hpack==keyword_package)){
	goto T173;}
	if(!(type_of((VV[2]->s.s_dbind))==t_fixnum||type_of((VV[2]->s.s_dbind))==t_bignum)){
	goto T172;}
	goto T173;
T173:;
	(VV[2]->s.s_dbind)= make_cons((VV[2]->s.s_dbind),Cnil);
	goto T172;
T172:;
	if(!(type_of((VV[2]->s.s_dbind))==t_cons)){
	goto T179;}
	{object V29= CMPcar((VV[2]->s.s_dbind));
	if(!((type_of(V29)==t_symbol&&(V29)->s.s_hpack==keyword_package))){
	goto T179;}}
	V27= Ct;
	base[36]= CMPcar((VV[2]->s.s_dbind));
	base[37]= CMPcdr((VV[2]->s.s_dbind));
	symlispcall(VV[75],base+36,2);
	goto T171;
	goto T179;
T179:;
	if(!(type_of((VV[2]->s.s_dbind))==t_cons)){
	goto T188;}
	{object V30= CMPcar((VV[2]->s.s_dbind));
	if(!(type_of(V30)==t_fixnum||type_of(V30)==t_bignum)){
	goto T188;}}
	V27= Ct;
	base[36]= CMPcar((VV[2]->s.s_dbind));
	vs_top=(vs_base=base+36)+1;
	(void) (*Lnk76)();
	goto T171;
	goto T188;
T188:;
	base[36]= (VV[2]->s.s_dbind);
	base[37]= Cnil;
	base[38]= Cnil;
	base[39]= (VV[15]->s.s_dbind);
	symlispcall(VV[77],base+36,4);
	goto T171;
T171:;
	Llist();
	vs_top=sup;
	V28= vs_base[0];
	(VV[27]->s.s_dbind)= (VV[26]->s.s_dbind);
	(VV[26]->s.s_dbind)= (VV[25]->s.s_dbind);
	(VV[25]->s.s_dbind)= (V28);
	(VV[24]->s.s_dbind)= (VV[23]->s.s_dbind);
	(VV[23]->s.s_dbind)= (VV[22]->s.s_dbind);
	(VV[22]->s.s_dbind)= CMPcar((VV[25]->s.s_dbind));
	base[36]= (VV[41]->s.s_dbind);
	vs_top=(vs_base=base+36)+1;
	Lfresh_line();
	vs_top=sup;
	{register object V31;
	register object V32;
	V31= (VV[25]->s.s_dbind);
	V32= CMPcar((V31));
	goto T216;
T216:;
	if(!(((V31))==Cnil)){
	goto T217;}
	goto T168;
	goto T217;
T217:;
	base[37]= (V32);
	base[38]= (VV[41]->s.s_dbind);
	(void)simple_symlispcall(VV[78],base+37,2);
	princ_char(10,VV[41]);
	V31= CMPcdr((V31));
	V32= CMPcar((V31));
	goto T216;}}
	goto T168;
T168:;
	frs_pop();
	V26= Cnil;}
	goto T158;
T158:;
	if((V26)==Cnil){
	frs_pop();
	bds_unwind1;
	goto T120;}
	V33= ((V26)==Cnil?Ct:Cnil);
	frs_pop();
	bds_unwind1;
	goto T147;
	goto T149;
T149:;
	{register object V34;
	V34= (base[32]->c.c_car);
	base[34]= Cnil;
	base[35]= Ct;
	vs_top=(vs_base=base+34)+2;
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	frs_pop();
	goto T120;}
	frs_pop();
	goto T147;}
	frs_pop();
	goto T147;
	goto T147;
T147:;
	princ_char(10,VV[41]);
	vs_base=vs_top;
	(void) (*Lnk79)();
	vs_top=sup;
	goto T120;
T120:;
	goto T119;
	}
}
/*	function definition for CLCS-TERMINAL-INTERRUPT	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V35;
	V35=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V35))==Cnil){
	goto T236;}
	base[1]= VV[58];
	base[2]= VV[59];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk80)();
	return;
	goto T236;
T236:;
	base[1]= VV[60];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk81)();
	return;
	}
}
/*	function definition for CLCS-BREAK-QUIT	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V36;
	if(vs_base>=vs_top){vs_top=sup;goto T241;}
	V36=(base[0]);
	vs_top=sup;
	goto T242;
	goto T241;
T241:;
	V36= small_fixnum(0);
	goto T242;
T242:;
	{object V37;
	V38= reverse((VV[34]->s.s_dbind));
	V37= nth(fix((V36)),/* INLINE-ARGS */V38);
	if(((V37))==Cnil){
	goto T244;}
	base[1]= (V37);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk62)();
	vs_top=sup;}
	goto T244;
T244:;
	vs_base=vs_top;
	(void) (*Lnk79)();
	return;
	}
}
/*	function definition for BREAK-RESUME	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if((VV[31]->s.s_dbind)==Cnil){
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;}
	base[0]= (VV[31]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk82)();
	return;
}
/*	function definition for BREAK-HELP	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= (VV[41]->s.s_dbind);
	base[1]= VV[61];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
}
/*	local function CLOSURE	*/

static void LC11(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V39;
	V39=(base[0]);
	vs_top=sup;
	base[1]= (V39);
	base[2]= VV[54];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC10(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V40;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V40=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V40);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[57]);
	vs_base=vs_top;
	unwind(fr,VV[57]);}
	}
}
/*	local function CLOSURE	*/

static void LC9(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V41;
	V41=(base[0]);
	vs_top=sup;
	base[1]= (V41);
	base[2]= VV[40];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V42;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V42=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V42);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[46]);
	vs_base=vs_top;
	unwind(fr,VV[46]);}
	}
}
static void LnkT82(){ call_or_link(VV[82],(void **)(void *)&Lnk82);} /* INVOKE-RESTART */
static void LnkT81(){ call_or_link(VV[81],(void **)(void *)&Lnk81);} /* ERROR */
static void LnkT80(){ call_or_link(VV[80],(void **)(void *)&Lnk80);} /* CERROR */
static void LnkT79(){ call_or_link(VV[79],(void **)(void *)&Lnk79);} /* BREAK-CURRENT */
static void LnkT76(){ call_or_link(VV[76],(void **)(void *)&Lnk76);} /* CLCS-BREAK-LEVEL-INVOKE-RESTART */
static void LnkT74(){ call_or_link(VV[74],(void **)(void *)&Lnk74);} /* DBL-READ */
static void LnkT73(){ call_or_link(VV[73],(void **)(void *)&Lnk73);} /* CATCH-FATAL */
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* SHOW-RESTARTS */
static void LnkT71(){ call_or_link(VV[71],(void **)(void *)&Lnk71);} /* SET-CURRENT */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* MAKE-RESTART */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* SET-BACK */
static void LnkT68(){ call_or_link(VV[68],(void **)(void *)&Lnk68);} /* FIND-RESTART */
static void LnkT67(){ call_or_link(VV[67],(void **)(void *)&Lnk67);} /* COMPUTE-RESTARTS */
static void LnkT66(){ call_or_link(VV[66],(void **)(void *)&Lnk66);} /* FRS-TOP */
static void LnkT65(){ call_or_link(VV[65],(void **)(void *)&Lnk65);} /* SCH-FRS-BASE */
static void LnkT64(){ call_or_link(VV[64],(void **)(void *)&Lnk64);} /* IHS-TOP */
static void LnkT63(){ call_or_link(VV[63],(void **)(void *)&Lnk63);} /* CONDITIONP */
static void LnkT62(){ call_or_link(VV[62],(void **)(void *)&Lnk62);} /* INVOKE-RESTART-INTERACTIVELY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

