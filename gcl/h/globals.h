EXTER union lispunion Cnil_body __attribute__ ((aligned (8192)));
EXTER union lispunion Ct_body __attribute__ ((aligned (8192)));

struct call_data { 
  object fun;
  int argd;
  int nvalues;
  object values[50];
  double double_return;
};
EXTER struct call_data fcall;

EXTER object Cstd_key_defaults[15];   
EXTER char *alloca_val;
EXTER object keyword_package;

EXTER object sLlist;
EXTER object sLstring;
EXTER object sLcons;
EXTER object sLhash_table;

EXTER object sLerror;
EXTER object sKformat_control;
EXTER object sKformat_arguments;

EXTER object sLtype_error;
EXTER object sKdatum;
EXTER object sKexpected_type;


EXTER object MVloc[10];

EXTER object null_string;
