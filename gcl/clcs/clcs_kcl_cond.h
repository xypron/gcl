
static void L4();
static void L8();
static void L19();
static void L25();
static object LI1();
#define VMB1 register object *base=vs_top;
#define VMS1  register object *sup=vs_top+1;vs_top=sup;
#define VMV1 vs_check;
#define VMR1(VMT1) vs_top=base ; return(VMT1);
static object LI2();
#define VMB2 register object *base=vs_top;
#define VMS2  register object *sup=vs_top+2;vs_top=sup;
#define VMV2 vs_check;
#define VMR2(VMT2) vs_top=base ; return(VMT2);
static object LI3();
#define VMB3
#define VMS3
#define VMV3
#define VMR3(VMT3) return(VMT3);
#define VC4
static object LI5();
#define VMB5 register object *base=vs_top;
#define VMS5  register object *sup=vs_top+1;vs_top=sup;
#define VMV5 vs_check;
#define VMR5(VMT5) vs_top=base ; return(VMT5);
static object LI6();
#define VMB6
#define VMS6
#define VMV6
#define VMR6(VMT6) return(VMT6);
static object LI7();
#define VMB7
#define VMS7
#define VMV7
#define VMR7(VMT7) return(VMT7);
#define VC8 object  V18 ,V17 ,V16 ,V15;
static object LI9(object,object,object,object,...);
#define VMB9 register object *base=vs_top; object  V37;
#define VMS9  register object *sup=vs_top+5;vs_top=sup;
#define VMV9 vs_check;
#define VMR9(VMT9) vs_top=base ; return(VMT9);
static object LI10();
#define VMB10 register object *base=vs_top;
#define VMS10  register object *sup=vs_top+1;vs_top=sup;
#define VMV10 vs_check;
#define VMR10(VMT10) vs_top=base ; return(VMT10);
static object LI11();
#define VMB11 register object *base=vs_top;
#define VMS11  register object *sup=vs_top+1;vs_top=sup;
#define VMV11 vs_check;
#define VMR11(VMT11) vs_top=base ; return(VMT11);
static object LI12();
#define VMB12
#define VMS12
#define VMV12
#define VMR12(VMT12) return(VMT12);
static object LI13();
#define VMB13
#define VMS13
#define VMV13
#define VMR13(VMT13) return(VMT13);
static object LI14();
#define VMB14
#define VMS14
#define VMV14
#define VMR14(VMT14) return(VMT14);
static object LI15();
#define VMB15 register object *base=vs_top; object  V54 ,V52;
#define VMS15  register object *sup=vs_top+10;vs_top=sup;
#define VMV15 vs_check;
#define VMR15(VMT15) vs_top=base ; return(VMT15);
static object LI16();
#define VMB16 register object *base=vs_top;
#define VMS16  register object *sup=vs_top+1;vs_top=sup;
#define VMV16 vs_check;
#define VMR16(VMT16) vs_top=base ; return(VMT16);
static object LI17();
#define VMB17
#define VMS17
#define VMV17
#define VMR17(VMT17) return(VMT17);
static object LI18();
#define VMB18
#define VMS18
#define VMV18
#define VMR18(VMT18) return(VMT18);
#define VC19 object  V66 ,V65 ,V64 ,V63 ,V62 ,V61 ,V60 ,V59;
static object LI20();
#define VMB20 register object *base=vs_top;
#define VMS20  register object *sup=vs_top+3;vs_top=sup;
#define VMV20 vs_check;
#define VMR20(VMT20) vs_top=base ; return(VMT20);
static object LI21();
#define VMB21
#define VMS21
#define VMV21
#define VMR21(VMT21) return(VMT21);
static object LI22();
#define VMB22
#define VMS22
#define VMV22
#define VMR22(VMT22) return(VMT22);
static object LI23();
#define VMB23
#define VMS23
#define VMV23
#define VMR23(VMT23) return(VMT23);
static object LI24();
#define VMB24
#define VMS24
#define VMV24
#define VMR24(VMT24) return(VMT24);
#define VC25 object  V77 ,V76;
static void LC30();
#define VC26
static void LC29();
#define VC27
static void LC28();
#define VC28
static void LC27();
#define VC29
static void LC26();
#define VC30
static void LC30();
static void LC29();
static void LC28();
static void LC27();
static void LC26();
#define VM30 1
#define VM29 6
#define VM28 1
#define VM27 4
#define VM26 2
#define VM25 5
#define VM24 0
#define VM23 0
#define VM22 0
#define VM21 0
#define VM20 3
#define VM19 9
#define VM18 0
#define VM17 0
#define VM16 1
#define VM15 10
#define VM14 0
#define VM13 0
#define VM12 0
#define VM11 1
#define VM10 1
#define VM9 5
#define VM8 17
#define VM7 0
#define VM6 0
#define VM5 1
#define VM4 4
#define VM3 0
#define VM2 2
#define VM1 1
static char * VVi[55]={
#define Cdata VV[54]
(char *)(LI1),
(char *)(LI2),
(char *)(LI3),
(char *)(L4),
(char *)(LI5),
(char *)(LI6),
(char *)(LI7),
(char *)(L8),
(char *)(LI9),
(char *)(LI10),
(char *)(LI11),
(char *)(LI12),
(char *)(LI13),
(char *)(LI14),
(char *)(LI15),
(char *)(LI16),
(char *)(LI17),
(char *)(LI18),
(char *)(L19),
(char *)(LI20),
(char *)(LI21),
(char *)(LI22),
(char *)(LI23),
(char *)(LI24),
(char *)(L25)
};
#define VV ((object *)VVi)
static object  LnkTLI53(object,...);
static object  (*LnkLI53)() = (object (*)()) LnkTLI53;
static void LnkT30();
static void (*Lnk30)() = LnkT30;
static object  LnkTLI52(object,...);
static object  (*LnkLI52)() = (object (*)()) LnkTLI52;
static void LnkT50();
static void (*Lnk50)() = LnkT50;
static void LnkT49();
static void (*Lnk49)() = LnkT49;
static void LnkT48();
static void (*Lnk48)() = LnkT48;
static void LnkT47();
static void (*Lnk47)() = LnkT47;
static object  LnkTLI46();
static object  (*LnkLI46)() = LnkTLI46;
static void LnkT45();
static void (*Lnk45)() = LnkT45;
static void LnkT34();
static void (*Lnk34)() = LnkT34;
static object  LnkTLI44(object,...);
static object  (*LnkLI44)() = (object (*)()) LnkTLI44;
static object  LnkTLI43(object,...);
static object  (*LnkLI43)() = (object (*)()) LnkTLI43;
static void LnkT42();
static void (*Lnk42)() = LnkT42;
