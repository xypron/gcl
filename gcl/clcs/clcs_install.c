
#include "cmpinclude.h"
#include "clcs_install.h"
void init_clcs_install(){do_init(VV);}
/*	function definition for INSTALL-SYMBOL	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{register object V1;
	object V2;
	V1=(base[0]);
	V2=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V3 =((V1))->s.s_plist;
	 object ind= VV[0];
	while(V3!=Cnil){
	if(V3->c.c_car==ind){
	if(((V3->c.c_cdr->c.c_car))!=Cnil){
	goto T1;}
	goto T3;
	}else V3=V3->c.c_cdr->c.c_cdr;}}
	goto T3;
T3:;
	base[2]= (V1);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	V4= vs_base[0];
	(void)(sputprop((V1),VV[0],V4));
	goto T1;
T1:;
	base[2]= (V1);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	V5= vs_base[0];
	base[2]= (V2);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	V6= vs_base[0];
	if((V5)==(V6)){
	goto T7;}
	base[2]= (V1);
	base[4]= (V2);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_function();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	siLfset();
	return;
	goto T7;
T7:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for REVERT-SYMBOL	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{register object V7;
	V7=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V8 =((V7))->s.s_plist;
	 object ind= VV[0];
	while(V8!=Cnil){
	if(V8->c.c_car==ind){
	if(((V8->c.c_cdr->c.c_car))==Cnil){
	goto T17;}
	goto T19;
	}else V8=V8->c.c_cdr->c.c_cdr;}
	goto T17;}
	goto T19;
T19:;
	base[1]= (V7);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V9= vs_base[0];
	{object V11 =((V7))->s.s_plist;
	 object ind= VV[0];
	while(V11!=Cnil){
	if(V11->c.c_car==ind){
	V10= (V11->c.c_cdr->c.c_car);
	goto T23;
	}else V11=V11->c.c_cdr->c.c_cdr;}
	V10= Cnil;}
	goto T23;
T23:;
	if((V9)==(V10)){
	goto T17;}
	base[1]= (V7);
	{object V12 =((V7))->s.s_plist;
	 object ind= VV[0];
	while(V12!=Cnil){
	if(V12->c.c_car==ind){
	base[2]= (V12->c.c_cdr->c.c_car);
	goto T25;
	}else V12=V12->c.c_cdr->c.c_cdr;}
	base[2]= Cnil;}
	goto T25;
T25:;
	vs_top=(vs_base=base+1)+2;
	siLfset();
	return;
	goto T17;
T17:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for INSTALL-CLCS-SYMBOLS	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V13;
	register object V14;
	V13= (VV[1]->s.s_dbind);
	V14= CMPcar((V13));
	goto T30;
T30:;
	if(!(((V13))==Cnil)){
	goto T31;}
	goto T26;
	goto T31;
T31:;
	base[1]= CMPcar((V14));
	base[2]= CMPcadr((V14));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk22)();
	vs_top=sup;
	V13= CMPcdr((V13));
	V14= CMPcar((V13));
	goto T30;}
	goto T26;
T26:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for REVERT-CLCS-SYMBOLS	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V15;
	register object V16;
	V15= reverse((VV[1]->s.s_dbind));
	V16= CMPcar((V15));
	goto T47;
T47:;
	if(!(((V15))==Cnil)){
	goto T48;}
	goto T43;
	goto T48;
T48:;
	base[2]= CMPcar((V16));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk23)();
	vs_top=sup;
	V15= CMPcdr((V15));
	V16= CMPcar((V15));
	goto T47;}
	goto T43;
T43:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for CLCS-COMPILE-FILE	*/

static void L5()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM5; VC5
	vs_check;
	bds_check;
	{VOL object V17;
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V17=(base[1]);
	vs_top=sup;
	goto T60;
T60:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[11]))goto T63;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[3];
	base[6]= VV[4];
	base[7]= VV[5];
	base[8]= 
	make_cclosure_new(LC9,Cnil,base[3],Cdata);
	base[9]= VV[6];
	base[10]= 
	make_cclosure_new(LC10,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk24)();
	vs_top=sup;
	V18= vs_base[0];
	V19= make_cons(V18,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V19,(VV[2]->s.s_dbind));
	bds_bind(VV[2],base[4]);
	{register object V20;
	{register object V21;
	{object V22 =(VV[8])->s.s_plist;
	 object ind= VV[0];
	while(V22!=Cnil){
	if(V22->c.c_car==ind){
	V21= (V22->c.c_cdr->c.c_car);
	goto T75;
	}else V22=V22->c.c_cdr->c.c_cdr;}
	V21= Cnil;}
	goto T75;
T75:;
	if(((V21))==Cnil){
	goto T77;}
	base[5]= (V21);
	goto T74;
	goto T77;
T77:;
	base[5]= (VV[8]->s.s_gfdef);}
	goto T74;
T74:;
	base[6]= (base[0]->c.c_car);
	{object V23;
	V23= (V17);
	 vs_top=base+7;
	 while(V23!=Cnil)
	 {vs_push((V23)->c.c_car);V23=(V23)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	V20= vs_base[0];
	if(((VV[9]->s.s_dbind))!=Cnil){
	goto T81;}
	base[5]= (V20);
	vs_top=(vs_base=base+5)+1;
	Lvalues_list();
	frs_pop();
	bds_unwind1;
	return;
	goto T81;
T81:;
	base[5]= VV[10];
	base[6]= VV[8];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk25)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T61;}
	goto T63;
T63:;
	{register object V24;
	V24= (base[2]->c.c_car);
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T61;}
	frs_pop();
	goto T61;
	goto T61;
T61:;
	goto T60;
	}
}
/*	function definition for CLCS-COMPILE	*/

static void L6()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM6; VC6
	vs_check;
	bds_check;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	goto T92;
T92:;
	base[1]=MMcons(Cnil,base[0]);
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base[1]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[15]))goto T95;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[4]= VV[3];
	base[5]= VV[4];
	base[6]= VV[5];
	base[7]= 
	make_cclosure_new(LC11,Cnil,base[2],Cdata);
	base[8]= VV[6];
	base[9]= 
	make_cclosure_new(LC12,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+4)+6;
	(void) (*Lnk24)();
	vs_top=sup;
	V25= vs_base[0];
	V26= make_cons(V25,Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V26,(VV[2]->s.s_dbind));
	bds_bind(VV[2],base[3]);
	{register object V27;
	{register object V28;
	{object V29 =(VV[13])->s.s_plist;
	 object ind= VV[0];
	while(V29!=Cnil){
	if(V29->c.c_car==ind){
	V28= (V29->c.c_cdr->c.c_car);
	goto T107;
	}else V29=V29->c.c_cdr->c.c_cdr;}
	V28= Cnil;}
	goto T107;
T107:;
	if(((V28))==Cnil){
	goto T109;}
	base[4]= (V28);
	goto T106;
	goto T109;
T109:;
	base[4]= (VV[8]->s.s_gfdef);}
	goto T106;
T106:;
	{object V30;
	V30= (base[0]->c.c_car);
	 vs_top=base+5;
	 while(V30!=Cnil)
	 {vs_push((V30)->c.c_car);V30=(V30)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	V27= vs_base[0];
	if(((VV[9]->s.s_dbind))!=Cnil){
	goto T112;}
	base[4]= (V27);
	vs_top=(vs_base=base+4)+1;
	Lvalues_list();
	frs_pop();
	bds_unwind1;
	return;
	goto T112;
T112:;
	base[4]= VV[14];
	base[5]= VV[13];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk25)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T93;}
	goto T95;
T95:;
	{register object V31;
	V31= (base[1]->c.c_car);
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	vs_top=sup;
	frs_pop();
	goto T93;}
	frs_pop();
	goto T93;
	goto T93;
T93:;
	goto T92;
}
/*	function definition for CLCS-LOAD	*/

static void L7()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM7; VC7
	vs_check;
	bds_check;
	{VOL object V32;
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V32=(base[1]);
	vs_top=sup;
	goto T123;
T123:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[18]))goto T126;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[3];
	base[6]= VV[4];
	base[7]= VV[5];
	base[8]= 
	make_cclosure_new(LC13,Cnil,base[3],Cdata);
	base[9]= VV[6];
	base[10]= 
	make_cclosure_new(LC14,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk24)();
	vs_top=sup;
	V33= vs_base[0];
	V34= make_cons(V33,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V34,(VV[2]->s.s_dbind));
	bds_bind(VV[2],base[4]);
	{register object V35;
	{object V36 =(VV[17])->s.s_plist;
	 object ind= VV[0];
	while(V36!=Cnil){
	if(V36->c.c_car==ind){
	V35= (V36->c.c_cdr->c.c_car);
	goto T136;
	}else V36=V36->c.c_cdr->c.c_cdr;}
	V35= Cnil;}
	goto T136;
T136:;
	if(((V35))==Cnil){
	goto T138;}
	base[5]= (V35);
	goto T135;
	goto T138;
T138:;
	base[5]= (VV[17]->s.s_gfdef);}
	goto T135;
T135:;
	base[6]= (base[0]->c.c_car);
	{object V37;
	V37= (V32);
	 vs_top=base+7;
	 while(V37!=Cnil)
	 {vs_push((V37)->c.c_car);V37=(V37)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	frs_pop();
	bds_unwind1;
	return;
	goto T126;
T126:;
	{register object V38;
	V38= (base[2]->c.c_car);
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T124;}
	frs_pop();
	goto T124;
	goto T124;
T124:;
	goto T123;
	}
}
/*	function definition for CLCS-OPEN	*/

static void L8()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM8; VC8
	vs_check;
	bds_check;
	{VOL object V39;
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V39=(base[1]);
	vs_top=sup;
	goto T147;
T147:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[21]))goto T150;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[3];
	base[6]= VV[4];
	base[7]= VV[5];
	base[8]= 
	make_cclosure_new(LC15,Cnil,base[3],Cdata);
	base[9]= VV[6];
	base[10]= 
	make_cclosure_new(LC16,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk24)();
	vs_top=sup;
	V40= vs_base[0];
	V41= make_cons(V40,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V41,(VV[2]->s.s_dbind));
	bds_bind(VV[2],base[4]);
	{register object V42;
	{object V43 =(VV[20])->s.s_plist;
	 object ind= VV[0];
	while(V43!=Cnil){
	if(V43->c.c_car==ind){
	V42= (V43->c.c_cdr->c.c_car);
	goto T160;
	}else V43=V43->c.c_cdr->c.c_cdr;}
	V42= Cnil;}
	goto T160;
T160:;
	if(((V42))==Cnil){
	goto T162;}
	base[5]= (V42);
	goto T159;
	goto T162;
T162:;
	base[5]= (VV[20]->s.s_gfdef);}
	goto T159;
T159:;
	base[6]= (base[0]->c.c_car);
	{object V44;
	V44= (V39);
	 vs_top=base+7;
	 while(V44!=Cnil)
	 {vs_push((V44)->c.c_car);V44=(V44)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	frs_pop();
	bds_unwind1;
	return;
	goto T150;
T150:;
	{register object V45;
	V45= (base[2]->c.c_car);
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T148;}
	frs_pop();
	goto T148;
	goto T148;
T148:;
	goto T147;
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{register object V46;
	V46=(base[0]);
	vs_top=sup;
	base[1]= (V46);
	base[2]= VV[19];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC15(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{register object V47;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V47=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V47);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[21]);
	vs_base=vs_top;
	unwind(fr,VV[21]);}
	}
}
/*	local function CLOSURE	*/

static void LC14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V48;
	V48=(base[0]);
	vs_top=sup;
	base[1]= (V48);
	base[2]= VV[16];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC13(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{register object V49;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V49=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V49);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[18]);
	vs_base=vs_top;
	unwind(fr,VV[18]);}
	}
}
/*	local function CLOSURE	*/

static void LC12(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{register object V50;
	V50=(base[0]);
	vs_top=sup;
	base[1]= (V50);
	base[2]= VV[12];
	base[3]= CMPcar((base0[2]->c.c_car));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC11(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{register object V51;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V51=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V51);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[15]);
	vs_base=vs_top;
	unwind(fr,VV[15]);}
	}
}
/*	local function CLOSURE	*/

static void LC10(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{register object V52;
	V52=(base[0]);
	vs_top=sup;
	base[1]= (V52);
	base[2]= VV[7];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC9(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{register object V53;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V53=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V53);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[11]);
	vs_base=vs_top;
	unwind(fr,VV[11]);}
	}
}
static void LnkT25(){ call_or_link(VV[25],(void **)(void *)&Lnk25);} /* ERROR */
static void LnkT24(){ call_or_link(VV[24],(void **)(void *)&Lnk24);} /* MAKE-RESTART */
static void LnkT23(){ call_or_link(VV[23],(void **)(void *)&Lnk23);} /* REVERT-SYMBOL */
static void LnkT22(){ call_or_link(VV[22],(void **)(void *)&Lnk22);} /* INSTALL-SYMBOL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

