#define GOT_RELOC(r) ELF_R_TYPE(r->r_info)==R_ALPHA_LITERAL

    case R_ALPHA_SREL32:
      store_val(where,MASK(32),s+a-p);
      break;
    case R_ALPHA_GPDISP:
      s=gpd=(ul)got;
      s-=p; 
      s+=(s&0x8000)<<1;
      store_val(where,MASK(16),s>>16); 
      where=(void *)where+a; 
      store_val(where,MASK(16),s); 
      break;
    case R_ALPHA_LITUSE:
      break;
    case R_ALPHA_HINT:
      break;
    case R_ALPHA_REFQUAD:
      store_val(where,~0L,s+a);
      break;
    case R_ALPHA_REFLONG:
      store_val(where,MASK(32),s+a);
      break;
    case R_ALPHA_LITERAL:
      s+=a&MASK(32);
      got+=(a>>32)-1;
      massert(got<gote); 
      massert(s); 
      *got=s;
      s=(ul)got-gpd;
      massert(!(s&0x8000));
      store_val(where,MASK(16),s);
      break;
    case R_ALPHA_GPRELHIGH:
      s+=a-gpd;
      s+=(s&0x8000)<<1;      
      store_val(where,MASK(16),s>>16);
      break;
    case R_ALPHA_GPRELLOW:
      store_val(where,MASK(16),s+a-gpd);
      break;