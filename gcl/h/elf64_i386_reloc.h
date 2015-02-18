    case R_X86_64_32:
      add_val(where,MASK(32),s+a);
      break;
    case R_X86_64_32S:
      add_vals(where,MASK(32),s+a);
      break;
    case R_X86_64_64:
      add_val(where,~0L,s+a);
      break;
    case R_X86_64_PC32:
    {
      long x=s+a-p;
      if (abs(x)&(~MASK(32))) {
	if (a) {
	  got+=gotp;
	  gotp+=tz;
	} else
	  got+=(sym->st_size-1)*tz;
	memcpy(got,tramp,sizeof(tramp));
	add_val((void *)got+2,~0L,s+a);
	x=(long)got-p;
      }
      add_val(where,MASK(32),x);
      break;
    }
