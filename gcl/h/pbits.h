#define mjoin(a_,b_) a_ ## b_
#define Mjoin(a_,b_) mjoin(a_,b_)

#include "arth.h"

#define LM(a_) AM(AT(SIZEOF_VOID_P,8),a_)
#if SIZEOF_VOID_P == 4
#define LL 2
#elif SIZEOF_VOID_P == 8
#define LL 3
#else
#error "unknown SIZEOF_VOID_P"
#endif 
