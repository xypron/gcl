
#include "cmpinclude.h"
#include "clcs_debugger.h"
void init_clcs_debugger(){do_init(VV);}
/*	macro definition for DEBUG-COMMAND	*/

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
/*	macro definition for DEBUG-COMMAND-ARGUMENT-COUNT	*/

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
/*	macro definition for DEFINE-DEBUG-COMMAND	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	vs_top=sup;
	{object V3=base[0]->c.c_cdr;
	base[2]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	base[3]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	base[4]= V3;}
	V4= list(2,VV[5],list(2,VV[6],base[2]));
	V5= list(3,VV[4],/* INLINE-ARGS */V4,list(2,VV[7],listA(3,VV[8],base[3],base[4])));
	V6= list(2,VV[9],list(2,VV[6],base[2]));
	V7 = CMPmake_fixnum((long)length(base[3]));
	V8= list(3,VV[4],/* INLINE-ARGS */V6,V7);
	base[5]= list(4,VV[3],/* INLINE-ARGS */V5,/* INLINE-ARGS */V8,list(2,VV[6],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for READ-DEBUG-COMMAND	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	bds_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= Ct;
	base[1]= VV[10];
	base[2]= (VV[11]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	Lpeek_char();
	vs_top=sup;
	V9= vs_base[0];
	if(!(char_code(V9)==char_code(VV[12]))){
	goto T6;}
	{long V10;
	V10= 0;
	if(!((type_of((VV[13]->s.s_dbind))==t_stream? (((VV[13]->s.s_dbind))->sm.sm_fp)!=0: 0 ))){
	goto T13;}
	V10= (long)getc(((VV[13]->s.s_dbind))->sm.sm_fp);
	if(!((V10)==(-1))){
	goto T18;}
	if(!((feof(((VV[13]->s.s_dbind))->sm.sm_fp)))){
	goto T18;}
	goto T10;
	goto T18;
T18:;
	(void)((V10));
	goto T10;
	goto T13;
T13:;
	(void)(read_char1((VV[13]->s.s_dbind),Cnil));}
	goto T10;
T10:;
	{register object V11;
	vs_base=vs_top;
	Lread_line();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk58)();
	vs_top=sup;
	V11= vs_base[0];
	{register object V12;
	V12= make_cons(Cnil,Cnil);
	{register object V13;
	register object V14;
	base[1]= VV[15];
	vs_top=(vs_base=base+1)+1;
	Lfind_package();
	vs_top=sup;
	base[0]= vs_base[0];
	bds_bind(VV[14],base[0]);
	base[1]= (V11);
	base[2]= Cnil;
	base[3]= (V12);
	vs_top=(vs_base=base+1)+3;
	Lread();
	vs_top=sup;
	bds_unwind1;
	V13= vs_base[0];
	V14= Cnil;
	goto T34;
T34:;
	if(!(((V13))==((V12)))){
	goto T35;}
	base[0]= nreverse((V14));
	vs_top=(vs_base=base+0)+1;
	return;
	goto T35;
T35:;
	{object V15;
	base[0]= (V11);
	base[1]= Cnil;
	base[2]= (V12);
	vs_top=(vs_base=base+0)+3;
	Lread();
	vs_top=sup;
	V15= vs_base[0];
	V14= make_cons((V13),(V14));
	V13= (V15);}
	goto T34;}}}
	goto T6;
T6:;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V16= vs_base[0];
	base[0]= list(2,VV[16],V16);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G2325	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V17;
	V17=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (VV[17]->s.s_dbind);
	base[3]= (V17);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = (VV[18]->s.s_dbind);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for G2354	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[19]->s.s_dbind))==Cnil){
	goto T52;}
	base[0]= (VV[19]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk59)();
	return;
	goto T52;
T52:;
	base[0]= Ct;
	base[1]= VV[20];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	return;
}
/*	function definition for G2379	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[21]->s.s_dbind))==Cnil){
	goto T58;}
	base[0]= (VV[21]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk59)();
	return;
	goto T58;
T58:;
	base[0]= Ct;
	base[1]= VV[22];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	return;
}
/*	function definition for G2404	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= Ct;
	base[1]= VV[23];
	base[2]= (VV[24]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	return;
}
/*	function definition for G2429	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= Ct;
	base[1]= VV[25];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	base[0]= (VV[26]->s.s_dbind);
	base[1]= (VV[27]->s.s_dbind);
	base[2]= small_fixnum(16);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk60)();
	vs_top=sup;
	base[0]= Ct;
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	if(((VV[19]->s.s_dbind))==Cnil){
	goto T76;}
	base[0]= Ct;
	base[1]= VV[29];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T76;
T76:;
	if(((VV[21]->s.s_dbind))==Cnil){
	goto T81;}
	base[0]= Ct;
	base[1]= VV[30];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T81;
T81:;
	base[0]= Ct;
	base[1]= VV[31];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	return;
}
/*	function definition for SHOW-RESTARTS	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V18;
	object V19;
	object V20;
	if(vs_base>=vs_top){vs_top=sup;goto T88;}
	V18=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T89;}
	V19=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T90;}
	V20=(base[2]);
	vs_top=sup;
	goto T91;
	goto T88;
T88:;
	V18= (VV[26]->s.s_dbind);
	goto T89;
T89:;
	V19= (VV[27]->s.s_dbind);
	goto T90;
T90:;
	V20= Cnil;
	goto T91;
T91:;
	if(((V19))!=Cnil){
	goto T95;}
	V19= CMPmake_fixnum((long)length((V18)));
	goto T95;
T95:;
	if(((V18))==Cnil){
	goto T100;}
	{object V21;
	register object V22;
	register object V23;
	if(((V20))==Cnil){
	goto T104;}
	V21= number_minus((V20),small_fixnum(3));
	goto T102;
	goto T104;
T104:;
	base[4]= (V19);
	base[5]= small_fixnum(10);
	vs_top=(vs_base=base+4)+2;
	Llog();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lceiling();
	vs_top=sup;
	V21= vs_base[0];
	goto T102;
T102:;
	V22= (V18);
	V23= small_fixnum(0);
	goto T110;
T110:;
	if(((V22))==Cnil){
	goto T112;}
	if(!(number_compare((V23),(V19))==0)){
	goto T111;}
	goto T112;
T112:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T111;
T111:;
	base[3]= Ct;
	base[4]= VV[32];
	base[5]= (VV[33]->s.s_dbind);
	{register object V24;
	base[7]= Cnil;
	base[8]= VV[34];
	base[9]= number_plus((V23),small_fixnum(1));
	vs_top=(vs_base=base+7)+3;
	Lformat();
	vs_top=sup;
	V24= vs_base[0];
	{register object V25;
	vs_base=vs_top;
	(void) (*Lnk61)();
	vs_top=sup;
	V25= vs_base[0];
	base[7]= (V25);
	base[8]= VV[35];
	base[9]= (V24);
	vs_top=(vs_base=base+7)+3;
	Lformat();
	vs_top=sup;
	{long V26;
	register long V27;
	V28 = CMPmake_fixnum((long)length((V24)));
	V26= fix(number_minus((V21),V28));
	V27= 0;
	goto T135;
T135:;
	if(!((V27)>=(V26))){
	goto T136;}
	goto T131;
	goto T136;
T136:;
	{register unsigned char V29;
	V29= 32;
	if(!((type_of((V25))==t_stream? (((V25))->sm.sm_fp)!=0: 0 ))){
	goto T143;}
	(void)((putc(V29,((V25))->sm.sm_fp)));
	goto T141;
	goto T143;
T143:;
	base[7]= code_char(V29);
	base[8]= (V25);
	vs_top=(vs_base=base+7)+2;
	Lwrite_char();
	vs_top=sup;
	goto T141;
T141:;}
	V27= (long)(V27)+1;
	goto T135;}
	goto T131;
T131:;
	base[7]= (V25);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk62)();
	vs_top=sup;
	base[6]= vs_base[0];}}
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	if(!((CMPcar((V22)))==((VV[19]->s.s_dbind)))){
	goto T151;}
	base[3]= Ct;
	base[4]= VV[37];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	goto T151;
T151:;
	if(!((CMPcar((V22)))==((VV[21]->s.s_dbind)))){
	goto T156;}
	base[3]= Ct;
	base[4]= VV[38];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	goto T156;
T156:;
	base[3]= Ct;
	base[4]= VV[39];
	base[5]= CMPcar((V22));
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[3]= Ct;
	base[4]= VV[40];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	V22= CMPcdr((V22));
	V23= one_plus((V23));
	goto T110;}
	goto T100;
T100:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for INVOKE-DEBUGGER	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	bds_check;
	{object V30;
	object V31;
	vs_top[0]=Cnil;
	{object *p=vs_top, *q=vs_base+1;
	 for(;p>q;p--)p[-1]=MMcons(p[-1],p[0]);}
	if(vs_base>=vs_top){vs_top=sup;goto T172;}
	V30=(base[0]);
	V31=(base[1]);
	vs_top=sup;
	goto T173;
	goto T172;
T172:;
	V30= VV[41];
	V31= Cnil;
	goto T173;
T173:;
	{object V32;
	base[2]= (V30);
	base[3]= (V31);
	base[4]= VV[42];
	base[5]= VV[43];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk63)();
	vs_top=sup;
	V32= vs_base[0];
	if(((VV[44]->s.s_dbind))==Cnil){
	goto T180;}
	{object V33;
	V33= (VV[44]->s.s_dbind);
	bds_bind(VV[44],Cnil);
	V34= (
	(type_of((V33)) == t_sfun ?(*(((V33))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V33))==t_vfun) ?
	(*(((V33))->sfn.sfn_self)):
	(fcall.fun=((V33)),fcalln))((V32),(V33)));
	bds_unwind1;}
	goto T180;
T180:;
	base[2]= (V32);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (VV[45]->s.s_dbind);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	function definition for STANDARD-DEBUGGER	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	bds_check;
	{object V35;
	V35=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[11],one_plus((VV[11]->s.s_dbind)));
	vs_base=vs_top;
	(void) (*Lnk64)();
	vs_top=sup;
	bds_bind(VV[26],vs_base[0]);
	bds_bind(VV[27],CMPmake_fixnum((long)length((VV[26]->s.s_dbind))));
	base[7]= VV[46];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk65)();
	vs_top=sup;
	bds_bind(VV[19],vs_base[0]);{object V36;
	{object V37;
	base[7]= VV[47];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk65)();
	vs_top=sup;
	V37= vs_base[0];
	if(((VV[21]->s.s_dbind))==Cnil){
	goto T194;}
	if(((VV[21]->s.s_dbind))==((V37))){
	goto T195;}
	goto T194;
T194:;
	V36= (V37);
	goto T191;
	goto T195;
T195:;
	V36= Cnil;}
	goto T191;
T191:;
	if(V36==Cnil)goto T190;
	bds_bind(VV[21],V36);
	goto T189;
	goto T190;
T190:;}
	{object V38;
	if(((VV[26]->s.s_dbind))==Cnil){
	goto T201;}
	V38= CMPcar((VV[26]->s.s_dbind));
	goto T199;
	goto T201;
T201:;
	V38= Cnil;
	goto T199;
T199:;
	if(((V38))==((VV[19]->s.s_dbind))){
	goto T204;}
	bds_bind(VV[21],(V38));
	goto T189;
	goto T204;
T204:;
	bds_bind(VV[21],Cnil);}
	goto T189;
T189:;
	bds_bind(VV[24],(V35));
	base[7]= Ct;
	base[8]= VV[48];
	base[9]= (V35);
	vs_top=(vs_base=base+7)+3;
	Lformat();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk60)();
	vs_top=sup;
	{register object V39;
	vs_base=vs_top;
	(void) (*Lnk66)();
	vs_top=sup;
	V39= vs_base[0];
	goto T213;
T213:;
	base[7]= CMPcar((V39));
	base[8]= CMPcdr((V39));
	base[9]= (VV[11]->s.s_dbind);
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk67)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk66)();
	vs_top=sup;
	V39= vs_base[0];
	goto T213;}
	}
}
/*	function definition for EXECUTE-DEBUGGER-COMMAND	*/

static void L13()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM13; VC13
	vs_check;
	bds_check;
	{VOL object V40;
	VOL object V41;
	V40=(base[0]);
	V41=(base[1]);
	base[2]=MMcons(base[2],Cnil);
	vs_top=sup;
	base[3]=MMcons(Cnil,base[2]);
	base[4]=alloc_frame_id();
	base[4]=MMcons(base[4],base[3]);
	frs_push(FRS_CATCH,(base[4]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[57]))goto T224;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[6]= VV[50];
	base[7]= VV[46];
	base[8]= VV[51];
	base[9]= 
	make_cclosure_new(LC14,Cnil,base[4],Cdata);
	base[10]= VV[52];
	base[11]= 
	make_cclosure_new(LC15,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk68)();
	vs_top=sup;
	V42= vs_base[0];
	V43= make_cons(V42,Cnil);
	base[5]= make_cons(/* INLINE-ARGS */V43,(VV[49]->s.s_dbind));
	bds_bind(VV[49],base[5]);
	{object V44;
	V44= (((V40))==Cnil?Ct:Cnil);
	if(((V44))==Cnil){
	goto T235;}
	frs_pop();
	base[6]= (V44);
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	return;
	goto T235;
T235:;
	if(!(type_of((V40))==t_fixnum||type_of((V40))==t_bignum)){
	goto T238;}
	if(!(number_compare(small_fixnum(0),(V40))<0)){
	goto T241;}
	V45= number_plus((VV[27]->s.s_dbind),small_fixnum(1));
	if(!(number_compare((V40),/* INLINE-ARGS */V45)<0)){
	goto T241;}
	{object V46;
	V47= number_minus((V40),small_fixnum(1));
	V46= nth(fix(/* INLINE-ARGS */V47),(VV[26]->s.s_dbind));
	if(((V41))==Cnil){
	goto T247;}
	base[6]=VV[69]->s.s_gfdef;
	base[7]= (V46);
	{object V48;
	base[9]= (VV[18]->s.s_dbind);
	{object V49;
	object V50= (V41);
	if(V50==Cnil){
	V48= Cnil;
	goto T250;}
	base[8]=V49=MMcons(Cnil,Cnil);
	goto T251;
T251:;
	base[10]= (V50->c.c_car);
	vs_top=(vs_base=base+10)+1;
	{object _funobj = base[9];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	(V49->c.c_car)= vs_base[0];
	if((V50=MMcdr(V50))==Cnil){
	V48= base[8];
	goto T250;}
	V49=MMcdr(V49)=MMcons(Cnil,Cnil);
	goto T251;}
	goto T250;
T250:;
	 vs_top=base+8;
	 while(V48!=Cnil)
	 {vs_push((V48)->c.c_car);V48=(V48)->c.c_cdr;}
	vs_base=base+7;}
	(void) (*Lnk69)();
	frs_pop();
	bds_unwind1;
	return;
	goto T247;
T247:;
	base[6]= (V46);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk59)();
	frs_pop();
	bds_unwind1;
	return;}
	goto T241;
T241:;
	base[6]= Ct;
	base[7]= VV[54];
	vs_top=(vs_base=base+6)+2;
	Lformat();
	frs_pop();
	bds_unwind1;
	return;
	goto T238;
T238:;
	{object V51;
	{object V52 =((V40))->s.s_plist;
	 object ind= VV[5];
	while(V52!=Cnil){
	if(V52->c.c_car==ind){
	V51= (V52->c.c_cdr->c.c_car);
	goto T258;
	}else V52=V52->c.c_cdr->c.c_cdr;}
	V51= Cnil;}
	goto T258;
T258:;
	if(((V51))==Cnil){
	goto T260;}
	V53 = CMPmake_fixnum((long)length((V41)));
	{object V55 =((V40))->s.s_plist;
	 object ind= VV[9];
	while(V55!=Cnil){
	if(V55->c.c_car==ind){
	V54= (V55->c.c_cdr->c.c_car);
	goto T265;
	}else V55=V55->c.c_cdr->c.c_cdr;}
	V54= Cnil;}
	goto T265;
T265:;
	if(number_compare(V53,V54)==0){
	goto T263;}
	base[6]= Ct;
	base[7]= VV[55];
	V56 = CMPmake_fixnum((long)length((V41)));
	{object V58 =((V40))->s.s_plist;
	 object ind= VV[9];
	while(V58!=Cnil){
	if(V58->c.c_car==ind){
	V57= (V58->c.c_cdr->c.c_car);
	goto T269;
	}else V58=V58->c.c_cdr->c.c_cdr;}
	V57= Cnil;}
	goto T269;
T269:;
	base[8]= (number_compare(V56,V57)>0?Ct:Cnil);
	base[9]= (V40);
	vs_top=(vs_base=base+6)+4;
	Lformat();
	frs_pop();
	bds_unwind1;
	return;
	goto T263;
T263:;
	base[6]= (V51);
	{object V59;
	V59= (V41);
	 vs_top=base+7;
	 while(V59!=Cnil)
	 {vs_push((V59)->c.c_car);V59=(V59)->c.c_cdr;}
	vs_base=base+7;}
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	frs_pop();
	bds_unwind1;
	return;
	goto T260;
T260:;
	base[6]= Ct;
	base[7]= VV[56];
	base[8]= (V40);
	vs_top=(vs_base=base+6)+3;
	Lformat();
	frs_pop();
	bds_unwind1;
	return;}}
	goto T224;
T224:;
	{object V60;
	V60= (base[3]->c.c_car);
	base[5]= Cnil;
	base[6]= Ct;
	vs_top=(vs_base=base+5)+2;
	frs_pop();
	return;}
	frs_pop();
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC15(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V61;
	V61=(base[0]);
	vs_top=sup;
	base[1]= (V61);
	base[2]= VV[53];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V62;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V62=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V62);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[57]);
	vs_base=vs_top;
	unwind(fr,VV[57]);}
	}
}
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* INVOKE-RESTART */
static void LnkT68(){ call_or_link(VV[68],(void **)(void *)&Lnk68);} /* MAKE-RESTART */
static void LnkT67(){ call_or_link(VV[67],(void **)(void *)&Lnk67);} /* EXECUTE-DEBUGGER-COMMAND */
static void LnkT66(){ call_or_link(VV[66],(void **)(void *)&Lnk66);} /* READ-DEBUG-COMMAND */
static void LnkT65(){ call_or_link(VV[65],(void **)(void *)&Lnk65);} /* FIND-RESTART */
static void LnkT64(){ call_or_link(VV[64],(void **)(void *)&Lnk64);} /* COMPUTE-RESTARTS */
static void LnkT63(){ call_or_link(VV[63],(void **)(void *)&Lnk63);} /* COERCE-TO-CONDITION */
static void LnkT62(){ call_or_link(VV[62],(void **)(void *)&Lnk62);} /* GET-OUTPUT-STREAM-STRING */
static void LnkT61(){ call_or_link(VV[61],(void **)(void *)&Lnk61);} /* MAKE-STRING-OUTPUT-STREAM */
static void LnkT60(){ call_or_link(VV[60],(void **)(void *)&Lnk60);} /* SHOW-RESTARTS */
static void LnkT59(){ call_or_link(VV[59],(void **)(void *)&Lnk59);} /* INVOKE-RESTART-INTERACTIVELY */
static void LnkT58(){ call_or_link(VV[58],(void **)(void *)&Lnk58);} /* MAKE-STRING-INPUT-STREAM */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

