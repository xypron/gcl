#include "pbits.h"

struct pageinfo {
  ufixnum type:6;
  ufixnum magic:7;
  ufixnum sgc_flags:2;
  ufixnum in_use:LM(15);
  struct pageinfo *next;
};
  
