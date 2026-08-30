/* Summer-Carnival-92---Recca-Japan_full_bank05_part03.c — PRG bank 5 function bodies (sub-part 3).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella Summer-Carnival-92---Recca-Japan_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "Summer-Carnival-92---Recca-Japan_full_decls.h"

void func_B13E_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B13E_b5");
#endif
label_B13E:;
    /* $B13E: B4 */ nes_instruction_boundary(0xB13E, 4); g_cpu.Y = nes_read((0x2A + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B140:;
    /* $B140: AD */ nes_instruction_boundary(0xB140, 4); g_cpu.A = nes_read(0x04D1); FLAG_NZ(g_cpu.A);
label_B143:;
    /* $B143: 18 */ nes_instruction_boundary(0xB143, 2); g_cpu.C = 0;
label_B144:;
    /* $B144: 7D */ nes_instruction_boundary(0xB144, 4); { uint8_t m=nes_read((0xB16F + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B147:;
    /* $B147: 99 */ nes_instruction_boundary(0xB147, 5); nes_write((0x0771 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B14A:;
    /* $B14A: A9 */ nes_instruction_boundary(0xB14A, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B14C:;
    /* $B14C: 7D */ nes_instruction_boundary(0xB14C, 4); { uint8_t m=nes_read((0xB177 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B14F:;
    /* $B14F: D0 */ nes_instruction_boundary(0xB14F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B16C; }
label_B151:;
    /* $B151: BD */ nes_instruction_boundary(0xB151, 4); g_cpu.A = nes_read((0xB17F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B154:;
    /* $B154: 99 */ nes_instruction_boundary(0xB154, 5); nes_write((0x06F1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B157:;
    /* $B157: A9 */ nes_instruction_boundary(0xB157, 2); g_cpu.A = 0xDE; FLAG_NZ(g_cpu.A);
label_B159:;
    /* $B159: 99 */ nes_instruction_boundary(0xB159, 5); nes_write((0x0671 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B15C:;
    /* $B15C: A9 */ nes_instruction_boundary(0xB15C, 2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_B15E:;
    /* $B15E: 99 */ nes_instruction_boundary(0xB15E, 5); nes_write((0x0691 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B161:;
    /* $B161: 99 */ nes_instruction_boundary(0xB161, 5); nes_write((0x0731 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B164:;
    /* $B164: A9 */ nes_instruction_boundary(0xB164, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B166:;
    /* $B166: 99 */ nes_instruction_boundary(0xB166, 5); nes_write((0x07B1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B169:;
    /* $B169: 99 */ nes_instruction_boundary(0xB169, 5); nes_write((0x06B1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B16C:;
    /* $B16C: CA */ nes_instruction_boundary(0xB16C, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B16D:;
    /* $B16D: D0 */ nes_instruction_boundary(0xB16D, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xB13E, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B13E;
    }
label_B16F:;
    /* $B16F: 60 */ nes_instruction_boundary(0xB16F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A139_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A139_b5");
#endif
label_A139:;
    /* $A139: FE */ nes_instruction_boundary(0xA139, 7); { uint16_t a=(0x0651 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A13C:;
    /* $A13C: 60 */ nes_instruction_boundary(0xA13C, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA7B_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA7B_b5");
#endif
label_AA7B:;
    /* $AA7B: FE */ nes_instruction_boundary(0xAA7B, 7); { uint16_t a=(0x0651 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA7E:;
    /* $AA7E: 60 */ nes_instruction_boundary(0xAA7E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AB8C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB8C_b5");
#endif
label_AB8C:;
    /* $AB8C: B4 */ nes_instruction_boundary(0xAB8C, 4); g_cpu.Y = nes_read((0x2B + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_AB8E:;
    /* $AB8E: A5 */ nes_instruction_boundary(0xAB8E, 3); g_cpu.A = nes_read(0x27); FLAG_NZ(g_cpu.A);
label_AB90:;
    /* $AB90: 99 */ nes_instruction_boundary(0xAB90, 5); nes_write((0x00B0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AB93:;
    /* $AB93: A9 */ nes_instruction_boundary(0xAB93, 2); g_cpu.A = 0x4B; FLAG_NZ(g_cpu.A);
label_AB95:;
    /* $AB95: 99 */ nes_instruction_boundary(0xAB95, 5); nes_write((0x0471 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AB98:;
    /* $AB98: A9 */ nes_instruction_boundary(0xAB98, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AB9A:;
    /* $AB9A: 99 */ nes_instruction_boundary(0xAB9A, 5); nes_write((0x05D1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AB9D:;
    /* $AB9D: 4A */ nes_instruction_boundary(0xAB9D, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AB9E:;
    /* $AB9E: 99 */ nes_instruction_boundary(0xAB9E, 5); nes_write((0x0491 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABA1:;
    /* $ABA1: A5 */ nes_instruction_boundary(0xABA1, 3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_ABA3:;
    /* $ABA3: 99 */ nes_instruction_boundary(0xABA3, 5); nes_write((0x04D1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABA6:;
    /* $ABA6: A5 */ nes_instruction_boundary(0xABA6, 3); g_cpu.A = nes_read(0x26); FLAG_NZ(g_cpu.A);
label_ABA8:;
    /* $ABA8: 99 */ nes_instruction_boundary(0xABA8, 5); nes_write((0x0551 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABAB:;
    /* $ABAB: BD */ nes_instruction_boundary(0xABAB, 4); g_cpu.A = nes_read((0xABC7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABAE:;
    /* $ABAE: 99 */ nes_instruction_boundary(0xABAE, 5); nes_write((0x0511 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABB1:;
    /* $ABB1: BD */ nes_instruction_boundary(0xABB1, 4); g_cpu.A = nes_read((0xABCD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABB4:;
    /* $ABB4: 99 */ nes_instruction_boundary(0xABB4, 5); nes_write((0x0591 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABB7:;
    /* $ABB7: A9 */ nes_instruction_boundary(0xABB7, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_ABB9:;
    /* $ABB9: 99 */ nes_instruction_boundary(0xABB9, 5); nes_write((0x0611 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABBC:;
    /* $ABBC: A9 */ nes_instruction_boundary(0xABBC, 2); g_cpu.A = 0x31; FLAG_NZ(g_cpu.A);
label_ABBE:;
    /* $ABBE: 99 */ nes_instruction_boundary(0xABBE, 5); nes_write((0x05F1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABC1:;
    /* $ABC1: CA */ nes_instruction_boundary(0xABC1, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABC2:;
    /* $ABC2: 10 */ nes_instruction_boundary(0xABC2, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xAB8C, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AB8C;
    }
label_ABC4:;
    /* $ABC4: 68 */ nes_instruction_boundary(0xABC4, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_ABC5:;
    /* $ABC5: AA */ nes_instruction_boundary(0xABC5, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_ABC6:;
    /* $ABC6: 60 */ nes_instruction_boundary(0xABC6, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9974_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9989;
    }
label_9974:;
    /* $9974: 05 */ nes_instruction_boundary(0x9974, 3); g_cpu.A |= nes_read(0x60); FLAG_NZ(g_cpu.A);
label_9976:;
    /* $9976: BD */ nes_instruction_boundary(0x9976, 4); g_cpu.A = nes_read((0x0551 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9979:;
    /* $9979: 38 */ nes_instruction_boundary(0x9979, 2); g_cpu.C = 1;
label_997A:;
    /* $997A: E9 */ nes_instruction_boundary(0x997A, 2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_997C:;
    /* $997C: C9 */ nes_instruction_boundary(0x997C, 2); { int r=g_cpu.A-0xB1; g_cpu.C=(g_cpu.A>=0xB1)?1:0; FLAG_NZ(r&0xFF); }
label_997E:;
    /* $997E: 90 */ nes_instruction_boundary(0x997E, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9989; }
label_9980:;
    /* $9980: A9 */ nes_instruction_boundary(0x9980, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9982:;
    /* $9982: 38 */ nes_instruction_boundary(0x9982, 2); g_cpu.C = 1;
label_9983:;
    /* $9983: FD */ nes_instruction_boundary(0x9983, 4); { uint8_t m=nes_read((0x0591 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9986:;
    /* $9986: 9D */ nes_instruction_boundary(0x9986, 5); nes_write((0x0591 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9989:;
    /* $9989: 60 */ nes_instruction_boundary(0x9989, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9974_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9974_b5");
#endif
    func_9974_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9989_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9989_b5");
#endif
    func_9974_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9963_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9963_b5");
#endif
label_9963:;
    /* $9963: D1 */ nes_instruction_boundary(0x9963, 5); { uint8_t m=nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9965:;
    /* $9965: 38 */ nes_instruction_boundary(0x9965, 2); g_cpu.C = 1;
label_9966:;
    /* $9966: E9 */ nes_instruction_boundary(0x9966, 2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9968:;
    /* $9968: C9 */ nes_instruction_boundary(0x9968, 2); { int r=g_cpu.A-0xE1; g_cpu.C=(g_cpu.A>=0xE1)?1:0; FLAG_NZ(r&0xFF); }
label_996A:;
    /* $996A: 90 */ nes_instruction_boundary(0x996A, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9975; }
label_996C:;
    /* $996C: A9 */ nes_instruction_boundary(0x996C, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_996E:;
    /* $996E: 38 */ nes_instruction_boundary(0x996E, 2); g_cpu.C = 1;
label_996F:;
    /* $996F: FD */ nes_instruction_boundary(0x996F, 4); { uint8_t m=nes_read((0x0511 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9972:;
    /* $9972: 9D */ nes_instruction_boundary(0x9972, 5); nes_write((0x0511 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9975:;
    /* $9975: 60 */ nes_instruction_boundary(0x9975, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ABFC_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_ABFF;
    }
label_ABFC:;
    /* $ABFC: FE */ nes_instruction_boundary(0xABFC, 7); { uint16_t a=(0x0651 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABFF:;
    /* $ABFF: 60 */ nes_instruction_boundary(0xABFF, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ABFC_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABFC_b5");
#endif
    func_ABFC_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ABFF_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABFF_b5");
#endif
    func_ABFC_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7D0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D0_b5");
#endif
label_B7D0:;
    /* $B7D0: F1 */ nes_instruction_boundary(0xB7D0, 5); { uint8_t m=nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7D2:;
    /* $B7D2: CA */ nes_instruction_boundary(0xB7D2, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B7D3:;
    /* $B7D3: D0 */ nes_instruction_boundary(0xB7D3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1791), 5); return; }
label_B7D5:;
    /* $B7D5: 60 */ nes_instruction_boundary(0xB7D5, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AFB0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFB0_b5");
#endif
label_AFB0:;
    /* $AFB0: 28 */ nes_instruction_boundary(0xAFB0, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AFB1:;
    /* $AFB1: 28 */ nes_instruction_boundary(0xAFB1, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AFB2:;
    /* $AFB2: 28 */ nes_instruction_boundary(0xAFB2, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AFB3:;
    /* $AFB3: 58 */ nes_instruction_boundary(0xAFB3, 2); g_cpu.I = 0;
label_AFB4:;
    /* $AFB4: 58 */ nes_instruction_boundary(0xAFB4, 2); g_cpu.I = 0;
label_AFB5:;
    /* $AFB5: 58 */ nes_instruction_boundary(0xAFB5, 2); g_cpu.I = 0;
label_AFB6:;
    /* $AFB6: 58 */ nes_instruction_boundary(0xAFB6, 2); g_cpu.I = 0;
label_AFB7:;
    /* $AFB7: 00 */ nes_instruction_boundary(0xAFB7, 7); nes_brk_executed(0xAFB7); return;
}

void func_B519_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B529;
    }
label_B519:;
    /* $B519: 71 */ nes_instruction_boundary(0xB519, 5); { uint8_t m=nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B51B:;
    /* $B51B: AD */ nes_instruction_boundary(0xB51B, 4); g_cpu.A = nes_read(0x04D1); FLAG_NZ(g_cpu.A);
label_B51E:;
    /* $B51E: 99 */ nes_instruction_boundary(0xB51E, 5); nes_write((0x0771 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B521:;
    /* $B521: AD */ nes_instruction_boundary(0xB521, 4); g_cpu.A = nes_read(0x0551); FLAG_NZ(g_cpu.A);
label_B524:;
    /* $B524: 99 */ nes_instruction_boundary(0xB524, 5); nes_write((0x06F1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B527:;
    /* $B527: A9 */ nes_instruction_boundary(0xB527, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B529:;
    /* $B529: 99 */ nes_instruction_boundary(0xB529, 5); nes_write((0x0691 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B52C:;
    /* $B52C: BD */ nes_instruction_boundary(0xB52C, 4); g_cpu.A = nes_read((0xB547 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B52F:;
    /* $B52F: 99 */ nes_instruction_boundary(0xB52F, 5); nes_write((0x07B1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B532:;
    /* $B532: BD */ nes_instruction_boundary(0xB532, 4); g_cpu.A = nes_read((0xB541 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B535:;
    /* $B535: 99 */ nes_instruction_boundary(0xB535, 5); nes_write((0x0731 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B538:;
    /* $B538: BD */ nes_instruction_boundary(0xB538, 4); g_cpu.A = nes_read((0xB54F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B53B:;
    /* $B53B: 99 */ nes_instruction_boundary(0xB53B, 5); nes_write((0x06B1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B53E:;
    /* $B53E: CA */ nes_instruction_boundary(0xB53E, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B53F:;
    /* $B53F: D0 */ nes_instruction_boundary(0xB53F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1514), 5); return; }
label_B541:;
    /* $B541: 60 */ nes_instruction_boundary(0xB541, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B519_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B519_b5");
#endif
    func_B519_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B529_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B529_b5");
#endif
    func_B519_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B03F_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B04F;
    }
label_B03F:;
    /* $B03F: 06 */ nes_instruction_boundary(0xB03F, 5); { uint16_t a=0x4C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B041:;
    /* $B041: 39 */ nes_instruction_boundary(0xB041, 4); g_cpu.A &= nes_read((0xA996 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B044:;
    /* $B044: 80 */ nes_instruction_boundary(0xB044, 2); /* NOP */
label_B046:;
    /* $B046: 11 */ nes_instruction_boundary(0xB046, 5); g_cpu.A |= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B048:;
    /* $B048: 0A */ nes_instruction_boundary(0xB048, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B049:;
    /* $B049: 8D */ nes_instruction_boundary(0xB049, 4); nes_write(0x0511, g_cpu.A);
label_B04C:;
    /* $B04C: EE */ nes_instruction_boundary(0xB04C, 6); { uint16_t a=0x05B1; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B04F:;
    /* $B04F: 60 */ nes_instruction_boundary(0xB04F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B03F_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B03F_b5");
#endif
    func_B03F_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B04F_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B04F_b5");
#endif
    func_B03F_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B902_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B904;
    }
label_B902:;
    /* $B902: 05 */ nes_instruction_boundary(0xB902, 3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_B904:;
    /* $B904: 08 */ nes_instruction_boundary(0xB904, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B905:;
    /* $B905: 20 */ nes_instruction_boundary(0xB905, 6); nes_dispatch_call(0x9366, 5);
label_B908:;
    /* $B908: A5 */ nes_instruction_boundary(0xB908, 3); g_cpu.A = nes_read(0xB1); FLAG_NZ(g_cpu.A);
label_B90A:;
    /* $B90A: 05 */ nes_instruction_boundary(0xB90A, 3); g_cpu.A |= nes_read(0xB2); FLAG_NZ(g_cpu.A);
label_B90C:;
    /* $B90C: 30 */ nes_instruction_boundary(0xB90C, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_B920; }
label_B90E:;
    /* $B90E: AD */ nes_instruction_boundary(0xB90E, 4); g_cpu.A = nes_read(0x0611); FLAG_NZ(g_cpu.A);
label_B911:;
    /* $B911: 29 */ nes_instruction_boundary(0xB911, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B913:;
    /* $B913: D0 */ nes_instruction_boundary(0xB913, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B920; }
label_B915:;
    /* $B915: AD */ nes_instruction_boundary(0xB915, 4); g_cpu.A = nes_read(0x0631); FLAG_NZ(g_cpu.A);
label_B918:;
    /* $B918: 29 */ nes_instruction_boundary(0xB918, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B91A:;
    /* $B91A: 38 */ nes_instruction_boundary(0xB91A, 2); g_cpu.C = 1;
label_B91B:;
    /* $B91B: E9 */ nes_instruction_boundary(0xB91B, 2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B91D:;
    /* $B91D: 20 */ nes_instruction_boundary(0xB91D, 6); nes_dispatch_call(0xB9B7, 5);
label_B920:;
    /* $B920: A9 */ nes_instruction_boundary(0xB920, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_B922:;
    /* $B922: 4C */ nes_instruction_boundary(0xB922, 3); nes_cpu_instruction_boundary(0x98CE, 2); call_by_address_tail(0x98CE, 5); return;
}

void func_B902_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B902_b5");
#endif
    func_B902_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B904_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B904_b5");
#endif
    func_B902_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A49C_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A4A9;
    }
label_A49C:;
    /* $A49C: A0 */ nes_instruction_boundary(0xA49C, 2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_A49E:;
    /* $A49E: BD */ nes_instruction_boundary(0xA49E, 4); g_cpu.A = nes_read((0xA4C4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A1:;
    /* $A4A1: 20 */ nes_instruction_boundary(0xA4A1, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF9B(); g_code_window_base = _swb; }
label_A4A4:;
    /* $A4A4: B4 */ nes_instruction_boundary(0xA4A4, 4); g_cpu.Y = nes_read((0x2B + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A4A6:;
    /* $A4A6: 20 */ nes_instruction_boundary(0xA4A6, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_ED51(); g_code_window_base = _swb; }
label_A4A9:;
    /* $A4A9: A5 */ nes_instruction_boundary(0xA4A9, 3); g_cpu.A = nes_read(0x35); FLAG_NZ(g_cpu.A);
label_A4AB:;
    /* $A4AB: 18 */ nes_instruction_boundary(0xA4AB, 2); g_cpu.C = 0;
label_A4AC:;
    /* $A4AC: 7D */ nes_instruction_boundary(0xA4AC, 4); { uint8_t m=nes_read((0xA4C0 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4AF:;
    /* $A4AF: 99 */ nes_instruction_boundary(0xA4AF, 5); nes_write((0x0771 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4B2:;
    /* $A4B2: A5 */ nes_instruction_boundary(0xA4B2, 3); g_cpu.A = nes_read(0x36); FLAG_NZ(g_cpu.A);
label_A4B4:;
    /* $A4B4: 99 */ nes_instruction_boundary(0xA4B4, 5); nes_write((0x06F1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4B7:;
    /* $A4B7: 20 */ nes_instruction_boundary(0xA4B7, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_ED21(); g_code_window_base = _swb; }
label_A4BA:;
    /* $A4BA: CA */ nes_instruction_boundary(0xA4BA, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A4BB:;
    /* $A4BB: 10 */ nes_instruction_boundary(0xA4BB, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xA49C, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A49C;
    }
label_A4BD:;
    /* $A4BD: 68 */ nes_instruction_boundary(0xA4BD, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A4BE:;
    /* $A4BE: AA */ nes_instruction_boundary(0xA4BE, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A4BF:;
    /* $A4BF: 60 */ nes_instruction_boundary(0xA4BF, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A49C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A49C_b5");
#endif
    func_A49C_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4A9_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4A9_b5");
#endif
    func_A49C_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0ED_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B0F0;
    }
label_B0ED:;
    /* $B0ED: EE */ nes_instruction_boundary(0xB0ED, 6); { uint16_t a=0x0651; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0F0:;
    /* $B0F0: 60 */ nes_instruction_boundary(0xB0F0, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B0ED_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0ED_b5");
#endif
    func_B0ED_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0F0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0F0_b5");
#endif
    func_B0ED_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99D7_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99D7_b5");
#endif
label_99D7:;
    /* $99D7: 11 */ nes_instruction_boundary(0x99D7, 5); g_cpu.A |= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99D9:;
    /* $99D9: BD */ nes_instruction_boundary(0x99D9, 4); g_cpu.A = nes_read((0x0611 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99DC:;
    /* $99DC: 0A */ nes_instruction_boundary(0x99DC, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_99DD:;
    /* $99DD: D0 */ nes_instruction_boundary(0x99DD, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x19D5), 5); return; }
label_99DF:;
    /* $99DF: B0 */ nes_instruction_boundary(0x99DF, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_99E4; }
label_99E1:;
    /* $99E1: 4C */ nes_instruction_boundary(0x99E1, 3); nes_cpu_instruction_boundary(0xEA8C, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA8C(); g_code_window_base = _swb; } return;
label_99E4:;
    /* $99E4: 4C */ nes_instruction_boundary(0x99E4, 3); nes_cpu_instruction_boundary(0xEAA9, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EAA9(); g_code_window_base = _swb; } return;
}

void func_8F01_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8F01_b5");
#endif
label_8F01:;
    /* $8F01: A5 */ nes_instruction_boundary(0x8F01, 3); g_cpu.A = nes_read(0x54); FLAG_NZ(g_cpu.A);
label_8F03:;
    /* $8F03: D0 */ nes_instruction_boundary(0x8F03, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8F0C; }
label_8F05:;
    /* $8F05: B5 */ nes_instruction_boundary(0x8F05, 4); g_cpu.A = nes_read((0x98 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8F07:;
    /* $8F07: 10 */ nes_instruction_boundary(0x8F07, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8F13; }
label_8F09:;
    /* $8F09: 20 */ nes_instruction_boundary(0x8F09, 6); nes_dispatch_call(0x8F19, 5);
label_8F0C:;
    /* $8F0C: B5 */ nes_instruction_boundary(0x8F0C, 4); g_cpu.A = nes_read((0x98 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8F0E:;
    /* $8F0E: 10 */ nes_instruction_boundary(0x8F0E, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8F13; }
label_8F10:;
    /* $8F10: 20 */ nes_instruction_boundary(0x8F10, 6); nes_dispatch_call(0x8F29, 5);
label_8F13:;
    /* $8F13: E8 */ nes_instruction_boundary(0x8F13, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8F14:;
    /* $8F14: E0 */ nes_instruction_boundary(0x8F14, 2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8F16:;
    /* $8F16: D0 */ nes_instruction_boundary(0x8F16, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0x8F01, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8F01;
    }
label_8F18:;
    /* $8F18: 60 */ nes_instruction_boundary(0x8F18, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B843_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B84A;
        case 2: goto label_B885;
    }
label_B843:;
    /* $B843: 98 */ nes_instruction_boundary(0xB843, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B844:;
    /* $B844: 29 */ nes_instruction_boundary(0xB844, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B846:;
    /* $B846: AA */ nes_instruction_boundary(0xB846, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B847:;
    /* $B847: BD */ nes_instruction_boundary(0xB847, 4); g_cpu.A = nes_read((0xB886 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B84A:;
    /* $B84A: 99 */ nes_instruction_boundary(0xB84A, 5); nes_write((0x0671 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B84D:;
    /* $B84D: A9 */ nes_instruction_boundary(0xB84D, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B84F:;
    /* $B84F: 99 */ nes_instruction_boundary(0xB84F, 5); nes_write((0x0691 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B852:;
    /* $B852: A9 */ nes_instruction_boundary(0xB852, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B854:;
    /* $B854: 99 */ nes_instruction_boundary(0xB854, 5); nes_write((0x06B1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B857:;
    /* $B857: 98 */ nes_instruction_boundary(0xB857, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B858:;
    /* $B858: 4A */ nes_instruction_boundary(0xB858, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B859:;
    /* $B859: 4A */ nes_instruction_boundary(0xB859, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B85A:;
    /* $B85A: 4A */ nes_instruction_boundary(0xB85A, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B85B:;
    /* $B85B: AA */ nes_instruction_boundary(0xB85B, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B85C:;
    /* $B85C: BD */ nes_instruction_boundary(0xB85C, 4); g_cpu.A = nes_read((0xB88E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B85F:;
    /* $B85F: 99 */ nes_instruction_boundary(0xB85F, 5); nes_write((0x07D1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B862:;
    /* $B862: AD */ nes_instruction_boundary(0xB862, 4); g_cpu.A = nes_read(0x04D1); FLAG_NZ(g_cpu.A);
label_B865:;
    /* $B865: 99 */ nes_instruction_boundary(0xB865, 5); nes_write((0x0771 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B868:;
    /* $B868: 99 */ nes_instruction_boundary(0xB868, 5); nes_write((0x0751 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B86B:;
    /* $B86B: 99 */ nes_instruction_boundary(0xB86B, 5); nes_write((0x07B1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B86E:;
    /* $B86E: 99 */ nes_instruction_boundary(0xB86E, 5); nes_write((0x0791 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B871:;
    /* $B871: AD */ nes_instruction_boundary(0xB871, 4); g_cpu.A = nes_read(0x0551); FLAG_NZ(g_cpu.A);
label_B874:;
    /* $B874: 99 */ nes_instruction_boundary(0xB874, 5); nes_write((0x06F1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B877:;
    /* $B877: 99 */ nes_instruction_boundary(0xB877, 5); nes_write((0x06D1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B87A:;
    /* $B87A: 99 */ nes_instruction_boundary(0xB87A, 5); nes_write((0x0731 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B87D:;
    /* $B87D: 99 */ nes_instruction_boundary(0xB87D, 5); nes_write((0x0711 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B880:;
    /* $B880: 88 */ nes_instruction_boundary(0xB880, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B881:;
    /* $B881: 10 */ nes_instruction_boundary(0xB881, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xB843, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B843;
    }
label_B883:;
    /* $B883: A2 */ nes_instruction_boundary(0xB883, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_B885:;
    /* $B885: 60 */ nes_instruction_boundary(0xB885, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B843_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B843_b5");
#endif
    func_B843_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B84A_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B84A_b5");
#endif
    func_B843_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B885_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B885_b5");
#endif
    func_B843_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BAFC_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAFC_b5");
#endif
label_BAFC:;
    /* $BAFC: EE */ nes_instruction_boundary(0xBAFC, 6); { uint16_t a=0x0611; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAFF:;
    /* $BAFF: 60 */ nes_instruction_boundary(0xBAFF, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99CB_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99CB_b5");
#endif
label_99CB:;
    /* $99CB: 04 */ nes_instruction_boundary(0x99CB, 3); (void)nes_read(0x9D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_99CD:;
    /* $99CD: 51 */ nes_instruction_boundary(0x99CD, 5); g_cpu.A ^= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99CF:;
    /* $99CF: BD */ nes_instruction_boundary(0x99CF, 4); g_cpu.A = nes_read((0x0550 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99D2:;
    /* $99D2: 9D */ nes_instruction_boundary(0x99D2, 5); nes_write((0x05B1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99D5:;
    /* $99D5: 60 */ nes_instruction_boundary(0x99D5, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9B72_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B72_b5");
#endif
label_9B72:;
    /* $9B72: AA */ nes_instruction_boundary(0x9B72, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9B73:;
    /* $9B73: BD */ nes_instruction_boundary(0x9B73, 4); g_cpu.A = nes_read((0x9C3A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B76:;
    /* $9B76: 85 */ nes_instruction_boundary(0x9B76, 3); nes_write(0x2F, g_cpu.A);
label_9B78:;
    /* $9B78: BD */ nes_instruction_boundary(0x9B78, 4); g_cpu.A = nes_read((0x9C4A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B7B:;
    /* $9B7B: 85 */ nes_instruction_boundary(0x9B7B, 3); nes_write(0x30, g_cpu.A);
label_9B7D:;
    /* $9B7D: B1 */ nes_instruction_boundary(0x9B7D, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B7F:;
    /* $9B7F: 85 */ nes_instruction_boundary(0x9B7F, 3); nes_write(0x2D, g_cpu.A);
label_9B81:;
    /* $9B81: C8 */ nes_instruction_boundary(0x9B81, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9B82:;
    /* $9B82: B1 */ nes_instruction_boundary(0x9B82, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B84:;
    /* $9B84: 85 */ nes_instruction_boundary(0x9B84, 3); nes_write(0x2E, g_cpu.A);
label_9B86:;
    /* $9B86: A0 */ nes_instruction_boundary(0x9B86, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9B88:;
    /* $9B88: B1 */ nes_instruction_boundary(0x9B88, 5); g_cpu.A = nes_read((nes_read16zp(0x2D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B8A:;
    /* $9B8A: 10 */ nes_instruction_boundary(0x9B8A, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9B8F; }
label_9B8C:;
    /* $9B8C: A6 */ nes_instruction_boundary(0x9B8C, 3); g_cpu.X = nes_read(0x36); FLAG_NZ(g_cpu.X);
label_9B8E:;
    /* $9B8E: 60 */ nes_instruction_boundary(0x9B8E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B8F:;
    /* $9B8F: 4A */ nes_instruction_boundary(0x9B8F, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B90:;
    /* $9B90: 4A */ nes_instruction_boundary(0x9B90, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B91:;
    /* $9B91: 4A */ nes_instruction_boundary(0x9B91, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9B92:;
    /* $9B92: 85 */ nes_instruction_boundary(0x9B92, 3); nes_write(0x35, g_cpu.A);
label_9B94:;
    /* $9B94: AA */ nes_instruction_boundary(0x9B94, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9B95:;
    /* $9B95: BD */ nes_instruction_boundary(0x9B95, 4); g_cpu.A = nes_read((0x9C2A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B98:;
    /* $9B98: 18 */ nes_instruction_boundary(0x9B98, 2); g_cpu.C = 0;
label_9B99:;
    /* $9B99: 65 */ nes_instruction_boundary(0x9B99, 3); { uint8_t m=nes_read(0x2C); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9B9B:;
    /* $9B9B: 85 */ nes_instruction_boundary(0x9B9B, 3); nes_write(0x27, g_cpu.A);
label_9B9D:;
    /* $9B9D: A9 */ nes_instruction_boundary(0x9B9D, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9B9F:;
    /* $9B9F: 69 */ nes_instruction_boundary(0x9B9F, 2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_9BA1:;
    /* $9BA1: 85 */ nes_instruction_boundary(0x9BA1, 3); nes_write(0x28, g_cpu.A);
label_9BA3:;
    /* $9BA3: B1 */ nes_instruction_boundary(0x9BA3, 5); g_cpu.A = nes_read((nes_read16zp(0x2D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BA5:;
    /* $9BA5: 29 */ nes_instruction_boundary(0x9BA5, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_9BA7:;
    /* $9BA7: 85 */ nes_instruction_boundary(0x9BA7, 3); nes_write(0x34, g_cpu.A);
label_9BA9:;
    /* $9BA9: AA */ nes_instruction_boundary(0x9BA9, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9BAA:;
    /* $9BAA: BD */ nes_instruction_boundary(0x9BAA, 4); g_cpu.A = nes_read((0x9C32 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BAD:;
    /* $9BAD: 18 */ nes_instruction_boundary(0x9BAD, 2); g_cpu.C = 0;
label_9BAE:;
    /* $9BAE: 65 */ nes_instruction_boundary(0x9BAE, 3); { uint8_t m=nes_read(0x2B); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9BB0:;
    /* $9BB0: 85 */ nes_instruction_boundary(0x9BB0, 3); nes_write(0x25, g_cpu.A);
label_9BB2:;
    /* $9BB2: A9 */ nes_instruction_boundary(0x9BB2, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9BB4:;
    /* $9BB4: 69 */ nes_instruction_boundary(0x9BB4, 2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_9BB6:;
    /* $9BB6: 85 */ nes_instruction_boundary(0x9BB6, 3); nes_write(0x26, g_cpu.A);
label_9BB8:;
    /* $9BB8: C8 */ nes_instruction_boundary(0x9BB8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9BB9:;
    /* $9BB9: A5 */ nes_instruction_boundary(0x9BB9, 3); g_cpu.A = nes_read(0x26); FLAG_NZ(g_cpu.A);
label_9BBB:;
    /* $9BBB: D0 */ nes_instruction_boundary(0x9BBB, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9C23; }
label_9BBD:;
    /* $9BBD: A5 */ nes_instruction_boundary(0x9BBD, 3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_9BBF:;
    /* $9BBF: C9 */ nes_instruction_boundary(0x9BBF, 2); { int r=g_cpu.A-0xD0; g_cpu.C=(g_cpu.A>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_9BC1:;
    /* $9BC1: B0 */ nes_instruction_boundary(0x9BC1, 2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_9C23; }
label_9BC3:;
    /* $9BC3: A5 */ nes_instruction_boundary(0x9BC3, 3); g_cpu.A = nes_read(0x35); FLAG_NZ(g_cpu.A);
label_9BC5:;
    /* $9BC5: 85 */ nes_instruction_boundary(0x9BC5, 3); nes_write(0x33, g_cpu.A);
label_9BC7:;
    /* $9BC7: A5 */ nes_instruction_boundary(0x9BC7, 3); g_cpu.A = nes_read(0x27); FLAG_NZ(g_cpu.A);
label_9BC9:;
    /* $9BC9: 85 */ nes_instruction_boundary(0x9BC9, 3); nes_write(0x23, g_cpu.A);
label_9BCB:;
    /* $9BCB: A5 */ nes_instruction_boundary(0x9BCB, 3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_9BCD:;
    /* $9BCD: 85 */ nes_instruction_boundary(0x9BCD, 3); nes_write(0x24, g_cpu.A);
label_9BCF:;
    /* $9BCF: A5 */ nes_instruction_boundary(0x9BCF, 3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_9BD1:;
    /* $9BD1: D0 */ nes_instruction_boundary(0x9BD1, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9C01; }
label_9BD3:;
    /* $9BD3: A5 */ nes_instruction_boundary(0x9BD3, 3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_9BD5:;
    /* $9BD5: C5 */ nes_instruction_boundary(0x9BD5, 3); { uint8_t m=nes_read(0x51); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9BD7:;
    /* $9BD7: F0 */ nes_instruction_boundary(0x9BD7, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9C20; }
label_9BD9:;
    /* $9BD9: 0A */ nes_instruction_boundary(0x9BD9, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9BDA:;
    /* $9BDA: 0A */ nes_instruction_boundary(0x9BDA, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9BDB:;
    /* $9BDB: AA */ nes_instruction_boundary(0x9BDB, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_9BDC:;
    /* $9BDC: A9 */ nes_instruction_boundary(0x9BDC, 2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_9BDE:;
    /* $9BDE: 9D */ nes_instruction_boundary(0x9BDE, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BE1:;
    /* $9BE1: B1 */ nes_instruction_boundary(0x9BE1, 5); g_cpu.A = nes_read((nes_read16zp(0x2D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BE3:;
    /* $9BE3: F0 */ nes_instruction_boundary(0x9BE3, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9C01; }
label_9BE5:;
    /* $9BE5: 29 */ nes_instruction_boundary(0x9BE5, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_9BE7:;
    /* $9BE7: 05 */ nes_instruction_boundary(0x9BE7, 3); g_cpu.A |= nes_read(0x2F); FLAG_NZ(g_cpu.A);
label_9BE9:;
    /* $9BE9: 9D */ nes_instruction_boundary(0x9BE9, 5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BEC:;
    /* $9BEC: B1 */ nes_instruction_boundary(0x9BEC, 5); g_cpu.A = nes_read((nes_read16zp(0x2D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BEE:;
    /* $9BEE: 29 */ nes_instruction_boundary(0x9BEE, 2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_9BF0:;
    /* $9BF0: 05 */ nes_instruction_boundary(0x9BF0, 3); g_cpu.A |= nes_read(0x30); FLAG_NZ(g_cpu.A);
label_9BF2:;
    /* $9BF2: 9D */ nes_instruction_boundary(0x9BF2, 5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BF5:;
    /* $9BF5: A5 */ nes_instruction_boundary(0x9BF5, 3); g_cpu.A = nes_read(0x23); FLAG_NZ(g_cpu.A);
label_9BF7:;
    /* $9BF7: 9D */ nes_instruction_boundary(0x9BF7, 5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BFA:;
    /* $9BFA: A5 */ nes_instruction_boundary(0x9BFA, 3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_9BFC:;
    /* $9BFC: 9D */ nes_instruction_boundary(0x9BFC, 5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BFF:;
    /* $9BFF: E6 */ nes_instruction_boundary(0x9BFF, 5); { uint16_t a=0x50; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C01:;
    /* $9C01: C8 */ nes_instruction_boundary(0x9C01, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C02:;
    /* $9C02: A5 */ nes_instruction_boundary(0x9C02, 3); g_cpu.A = nes_read(0x23); FLAG_NZ(g_cpu.A);
label_9C04:;
    /* $9C04: 18 */ nes_instruction_boundary(0x9C04, 2); g_cpu.C = 0;
label_9C05:;
    /* $9C05: 69 */ nes_instruction_boundary(0x9C05, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_9C07:;
    /* $9C07: 85 */ nes_instruction_boundary(0x9C07, 3); nes_write(0x23, g_cpu.A);
label_9C09:;
    /* $9C09: 90 */ nes_instruction_boundary(0x9C09, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9C0D; }
label_9C0B:;
    /* $9C0B: E6 */ nes_instruction_boundary(0x9C0B, 5); { uint16_t a=0x24; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C0D:;
    /* $9C0D: C6 */ nes_instruction_boundary(0x9C0D, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C0F:;
    /* $9C0F: 10 */ nes_instruction_boundary(0x9C0F, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x9BCF, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9BCF;
    }
label_9C11:;
    /* $9C11: A5 */ nes_instruction_boundary(0x9C11, 3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_9C13:;
    /* $9C13: 18 */ nes_instruction_boundary(0x9C13, 2); g_cpu.C = 0;
label_9C14:;
    /* $9C14: 69 */ nes_instruction_boundary(0x9C14, 2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_9C16:;
    /* $9C16: 85 */ nes_instruction_boundary(0x9C16, 3); nes_write(0x25, g_cpu.A);
label_9C18:;
    /* $9C18: 90 */ nes_instruction_boundary(0x9C18, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9C1C; }
label_9C1A:;
    /* $9C1A: E6 */ nes_instruction_boundary(0x9C1A, 5); { uint16_t a=0x26; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C1C:;
    /* $9C1C: C6 */ nes_instruction_boundary(0x9C1C, 5); { uint16_t a=0x34; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C1E:;
    /* $9C1E: 10 */ nes_instruction_boundary(0x9C1E, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x9BB9, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9BB9;
    }
label_9C20:;
    /* $9C20: A6 */ nes_instruction_boundary(0x9C20, 3); g_cpu.X = nes_read(0x36); FLAG_NZ(g_cpu.X);
label_9C22:;
    /* $9C22: 60 */ nes_instruction_boundary(0x9C22, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9C23:;
    /* $9C23: 98 */ nes_instruction_boundary(0x9C23, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C24:;
    /* $9C24: 38 */ nes_instruction_boundary(0x9C24, 2); g_cpu.C = 1;
label_9C25:;
    /* $9C25: 65 */ nes_instruction_boundary(0x9C25, 3); { uint8_t m=nes_read(0x35); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9C27:;
    /* $9C27: A8 */ nes_instruction_boundary(0x9C27, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C28:;
    /* $9C28: D0 */ nes_instruction_boundary(0x9C28, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0x9C11, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C11;
    }
label_9C2A:;
    /* $9C2A: FC */ nes_instruction_boundary(0x9C2A, 4); (void)nes_read((0xF4F8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9C2D:;
    /* $9C2D: F0 */ nes_instruction_boundary(0x9C2D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1C1B), 5); return; }
label_9C2F:;
    /* $9C2F: E8 */ nes_instruction_boundary(0x9C2F, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9C30:;
    /* $9C30: E4 */ nes_instruction_boundary(0x9C30, 3); { uint8_t m=nes_read(0xE0); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C32:;
    /* $9C32: F8 */ nes_instruction_boundary(0x9C32, 2); g_cpu.D = 1;
label_9C33:;
    /* $9C33: F0 */ nes_instruction_boundary(0x9C33, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1C1D), 5); return; }
label_9C35:;
    /* $9C35: E0 */ nes_instruction_boundary(0x9C35, 2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_9C37:;
    /* $9C37: D0 */ nes_instruction_boundary(0x9C37, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0x9C01, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C01;
    }
label_9C39:;
    /* $9C39: C0 */ nes_instruction_boundary(0x9C39, 2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_9C3B:;
    /* $9C3B: 00 */ nes_instruction_boundary(0x9C3B, 7); nes_brk_executed(0x9C3B); return;
}

void func_BEBD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BEBD_b5");
#endif
label_BEBD:;
    /* $BEBD: A9 */ nes_instruction_boundary(0xBEBD, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BEBF:;
    /* $BEBF: A0 */ nes_instruction_boundary(0xBEBF, 2); g_cpu.Y = 0x3F; FLAG_NZ(g_cpu.Y);
label_BEC1:;
    /* $BEC1: 99 */ nes_instruction_boundary(0xBEC1, 5); nes_write((0x0100 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BEC4:;
    /* $BEC4: 88 */ nes_instruction_boundary(0xBEC4, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BEC5:;
    /* $BEC5: 10 */ nes_instruction_boundary(0xBEC5, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xBEC1, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BEC1;
    }
label_BEC7:;
    /* $BEC7: 60 */ nes_instruction_boundary(0xBEC7, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA3B_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA3B_b5");
#endif
label_BA3B:;
    /* $BA3B: B9 */ nes_instruction_boundary(0xBA3B, 4); g_cpu.A = nes_read((0x00B1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA3E:;
    /* $BA3E: 30 */ nes_instruction_boundary(0xBA3E, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_BA42; }
label_BA40:;
    /* $BA40: E6 */ nes_instruction_boundary(0xBA40, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA42:;
    /* $BA42: 88 */ nes_instruction_boundary(0xBA42, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA43:;
    /* $BA43: 10 */ nes_instruction_boundary(0xBA43, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xBA3B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA3B;
    }
label_BA45:;
    /* $BA45: A4 */ nes_instruction_boundary(0xBA45, 3); g_cpu.Y = nes_read(0x33); FLAG_NZ(g_cpu.Y);
label_BA47:;
    /* $BA47: 60 */ nes_instruction_boundary(0xBA47, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99D5_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99D5_b5");
#endif
label_99D5:;
    /* $99D5: 60 */ nes_instruction_boundary(0x99D5, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

