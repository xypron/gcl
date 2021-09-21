/*
 * RISC-V relocations
 * Cf. linux/arch/riscv/kernel/module.c
 */

    case R_RISCV_32: /* S + A */
      store_val(where, 0xffffffff, s + a);
      break;
    case R_RISCV_64: /* S + A */
      store_val(where, 0xffffffffffffffff, s + a);
      break;
    case R_RISCV_BRANCH: /* S + A - P */
      {
        ul offset = s + a - p;
        ul imm12 = (offset & 0x1000) << (31 - 12);
        ul imm11 = (offset & 0x800) >> (11 - 7);
        ul imm10_5 = (offset & 0x7e0) << (30 - 10);
        ul imm4_1 = (offset & 0x1e) << (11 - 4);
        store_val(where, 0xfe000f80, imm12 | imm11 | imm10_5 | imm4_1);
      }
      break;
    case R_RISCV_JAL: /* S + A - P */
      {
        ul offset = s + a - p;
        ul imm20 = (offset & 0x100000) << (31 - 20);
        ul imm19_12 = (offset & 0xff000);
        ul imm11 = (offset & 0x800) << (20 - 11);
        ul imm10_1 = (offset & 0x7fe) << (30 - 10);
        store_val(where, 0xfffff000, imm20 | imm19_12 | imm11 | imm10_1);
      }
      break;
    case R_RISCV_RVC_BRANCH: /* S + A - P */
      break;
    case R_RISCV_RVC_JUMP: /* S + A - P */
      break;
    case R_RISCV_PCREL_HI20: /* S + A - P */
      break;
    case R_RISCV_PCREL_LO12_I: /* S - P */
      break;
    case R_RISCV_PCREL_LO12_S: /* S - P */
      break;
    case R_RISCV_HI20: /* S + A */
      store_val(where, 0xfffff000, s + a + 0x800);
      break;
    case R_RISCV_LO12_I: /* S + A */
      break;
    case R_RISCV_LO12_S: /* S + A */
      break;
    case R_RISCV_GOT_HI20: /* PC-relative GOT offset */
      break;
    case R_RISCV_CALL_PLT: /* S + A - P */
      break;
    case R_RISCV_CALL: /* S + A - P */
      break;
    case R_RISCV_RELAX:
      /* do nothing */
      break;
    case R_RISCV_ALIGN:
      /* do nothing */
      break;
    case R_RISCV_ADD32: /* V + S + A */
      break;
    case R_RISCV_ADD64: /* V + S + A */
      break;
    case R_RISCV_SUB32: /* V - S - A */
      break;
    case R_RISCV_SUB64: /* V - S - A */
      break;
