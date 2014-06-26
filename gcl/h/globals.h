EXTER union lispunion Cnil_body OBJ_ALIGN;
EXTER union lispunion Ct_body OBJ_ALIGN;

struct call_data { 
  object fun;
  int argd;
  int nvalues;
  object values[50];
  double double_return;
};
EXTER struct call_data fcall;

EXTER union lispunion character_table1[256+128] OBJ_ALIGN;

EXTER object Cstd_key_defaults[15];   
EXTER char *alloca_val;
EXTER object keyword_package;

EXTER object sLlist;
EXTER object sLcons;
EXTER object sLhash_table;

EXTER object MVloc[10];
EXTER void **cfreep;
EXTER ufixnum *cnfreep;
struct mpageinfo {
  unsigned long type:6;
  unsigned long magic:7;
  unsigned long sgc_flags:2;
  unsigned long in_use:49;
  struct mpageinfo *next;
};
