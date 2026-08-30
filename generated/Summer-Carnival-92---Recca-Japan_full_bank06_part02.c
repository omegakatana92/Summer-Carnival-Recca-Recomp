/* Summer-Carnival-92---Recca-Japan_full_bank06_part02.c — PRG bank 6 function bodies (sub-part 2).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella Summer-Carnival-92---Recca-Japan_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "Summer-Carnival-92---Recca-Japan_full_decls.h"

void func_86E5_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86E5_b6");
#endif
label_86E5:;
    /* $86E5: BD */ nes_instruction_boundary(0x86E5, 4); g_cpu.A = nes_read((0x0671 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86E8:;
    /* $86E8: 10 */ nes_instruction_boundary(0x86E8, 2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_8703; }
label_86EA:;
    /* $86EA: BD */ nes_instruction_boundary(0x86EA, 4); g_cpu.A = nes_read((0x0771 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86ED:;
    /* $86ED: 4A */ nes_instruction_boundary(0x86ED, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_86EE:;
    /* $86EE: E5 */ nes_instruction_boundary(0x86EE, 3); { uint8_t m=nes_read(0x2B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86F0:;
    /* $86F0: 69 */ nes_instruction_boundary(0x86F0, 2); { uint16_t r = g_cpu.A + 0x1C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x1C); g_cpu.A=r&0xFF; }
label_86F2:;
    /* $86F2: C9 */ nes_instruction_boundary(0x86F2, 2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_86F4:;
    /* $86F4: B0 */ nes_instruction_boundary(0x86F4, 2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_8703; }
label_86F6:;
    /* $86F6: BD */ nes_instruction_boundary(0x86F6, 4); g_cpu.A = nes_read((0x06F1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86F9:;
    /* $86F9: 4A */ nes_instruction_boundary(0x86F9, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_86FA:;
    /* $86FA: E5 */ nes_instruction_boundary(0x86FA, 3); { uint8_t m=nes_read(0x2C); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86FC:;
    /* $86FC: C9 */ nes_instruction_boundary(0x86FC, 2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_86FE:;
    /* $86FE: B0 */ nes_instruction_boundary(0x86FE, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8703; }
label_8700:;
    /* $8700: 9D */ nes_instruction_boundary(0x8700, 5); nes_write((0x0671 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8703:;
    /* $8703: CA */ nes_instruction_boundary(0x8703, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8704:;
    /* $8704: 10 */ nes_instruction_boundary(0x8704, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x86E5, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_86E5;
    }
label_8706:;
    /* $8706: 60 */ nes_instruction_boundary(0x8706, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A685_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A685_b6");
#endif
label_A685:;
    /* $A685: 20 */ nes_instruction_boundary(0xA685, 6); nes_dispatch_call(0x8694, 6);
label_A688:;
    /* $A688: A9 */ nes_instruction_boundary(0xA688, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A68A:;
    /* $A68A: 85 */ nes_instruction_boundary(0xA68A, 3); nes_write(0x55, g_cpu.A);
label_A68C:;
    /* $A68C: A9 */ nes_instruction_boundary(0xA68C, 2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A68E:;
    /* $A68E: 85 */ nes_instruction_boundary(0xA68E, 3); nes_write(0x56, g_cpu.A);
label_A690:;
    /* $A690: 20 */ nes_instruction_boundary(0xA690, 6); nes_dispatch_call(0x8795, 6);
label_A693:;
    /* $A693: 60 */ nes_instruction_boundary(0xA693, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8DFE_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DFE_b6");
#endif
label_8DFE:;
    /* $8DFE: B5 */ nes_instruction_boundary(0x8DFE, 4); g_cpu.A = nes_read((0x7C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8E00:;
    /* $8E00: D5 */ nes_instruction_boundary(0x8E00, 4); { uint8_t m=nes_read((0xF0 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E02:;
    /* $8E02: F0 */ nes_instruction_boundary(0x8E02, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E08; }
label_8E04:;
    /* $8E04: 90 */ nes_instruction_boundary(0x8E04, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8E14; }
label_8E06:;
    /* $8E06: B0 */ nes_instruction_boundary(0x8E06, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8E0D; }
label_8E08:;
    /* $8E08: CA */ nes_instruction_boundary(0x8E08, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E09:;
    /* $8E09: 10 */ nes_instruction_boundary(0x8E09, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x8DFE, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8DFE;
    }
label_8E0B:;
    /* $8E0B: 30 */ nes_instruction_boundary(0x8E0B, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8E14; }
label_8E0D:;
    /* $8E0D: B5 */ nes_instruction_boundary(0x8E0D, 4); g_cpu.A = nes_read((0x7C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8E0F:;
    /* $8E0F: 95 */ nes_instruction_boundary(0x8E0F, 4); nes_write((0xF0 + g_cpu.X) & 0xFF, g_cpu.A);
label_8E11:;
    /* $8E11: CA */ nes_instruction_boundary(0x8E11, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E12:;
    /* $8E12: 10 */ nes_instruction_boundary(0x8E12, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x8E0D, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8E0D;
    }
label_8E14:;
    /* $8E14: A5 */ nes_instruction_boundary(0x8E14, 3); g_cpu.A = nes_read(0xF6); FLAG_NZ(g_cpu.A);
label_8E16:;
    /* $8E16: 8D */ nes_instruction_boundary(0x8E16, 4); nes_write(0x0155, g_cpu.A);
label_8E19:;
    /* $8E19: A5 */ nes_instruction_boundary(0x8E19, 3); g_cpu.A = nes_read(0xF5); FLAG_NZ(g_cpu.A);
label_8E1B:;
    /* $8E1B: 8D */ nes_instruction_boundary(0x8E1B, 4); nes_write(0x0156, g_cpu.A);
label_8E1E:;
    /* $8E1E: A5 */ nes_instruction_boundary(0x8E1E, 3); g_cpu.A = nes_read(0xF4); FLAG_NZ(g_cpu.A);
label_8E20:;
    /* $8E20: 8D */ nes_instruction_boundary(0x8E20, 4); nes_write(0x0157, g_cpu.A);
label_8E23:;
    /* $8E23: A5 */ nes_instruction_boundary(0x8E23, 3); g_cpu.A = nes_read(0xF3); FLAG_NZ(g_cpu.A);
label_8E25:;
    /* $8E25: 8D */ nes_instruction_boundary(0x8E25, 4); nes_write(0x0158, g_cpu.A);
label_8E28:;
    /* $8E28: A5 */ nes_instruction_boundary(0x8E28, 3); g_cpu.A = nes_read(0xF2); FLAG_NZ(g_cpu.A);
label_8E2A:;
    /* $8E2A: 8D */ nes_instruction_boundary(0x8E2A, 4); nes_write(0x0159, g_cpu.A);
label_8E2D:;
    /* $8E2D: A5 */ nes_instruction_boundary(0x8E2D, 3); g_cpu.A = nes_read(0xF1); FLAG_NZ(g_cpu.A);
label_8E2F:;
    /* $8E2F: 8D */ nes_instruction_boundary(0x8E2F, 4); nes_write(0x015A, g_cpu.A);
label_8E32:;
    /* $8E32: A5 */ nes_instruction_boundary(0x8E32, 3); g_cpu.A = nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_8E34:;
    /* $8E34: 8D */ nes_instruction_boundary(0x8E34, 4); nes_write(0x015B, g_cpu.A);
label_8E37:;
    /* $8E37: 60 */ nes_instruction_boundary(0x8E37, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_83AE_b6_body(int _entry) {
    switch (_entry) {
        case 1: goto label_83E0;
        case 2: goto label_83CA;
        case 3: goto label_83CC;
        case 4: goto label_8403;
    }
label_83AE:;
    /* $83AE: BD */ nes_instruction_boundary(0x83AE, 4); g_cpu.A = nes_read((0x0491 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83B1:;
    /* $83B1: C9 */ nes_instruction_boundary(0x83B1, 2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_83B3:;
    /* $83B3: B0 */ nes_instruction_boundary(0x83B3, 2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_8406; }
label_83B5:;
    /* $83B5: 20 */ nes_instruction_boundary(0x83B5, 6); nes_dispatch_call(0x8415, 6);
label_83B8:;
    /* $83B8: 30 */ nes_instruction_boundary(0x83B8, 2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_8406; }
label_83BA:;
    /* $83BA: B5 */ nes_instruction_boundary(0x83BA, 4); g_cpu.A = nes_read((0xB0 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_83BC:;
    /* $83BC: 85 */ nes_instruction_boundary(0x83BC, 3); nes_write(0x23, g_cpu.A);
label_83BE:;
    /* $83BE: BD */ nes_instruction_boundary(0x83BE, 4); g_cpu.A = nes_read((0x04D1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83C1:;
    /* $83C1: 85 */ nes_instruction_boundary(0x83C1, 3); nes_write(0x25, g_cpu.A);
label_83C3:;
    /* $83C3: BD */ nes_instruction_boundary(0x83C3, 4); g_cpu.A = nes_read((0x0551 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83C6:;
    /* $83C6: 85 */ nes_instruction_boundary(0x83C6, 3); nes_write(0x26, g_cpu.A);
label_83C8:;
    /* $83C8: 86 */ nes_instruction_boundary(0x83C8, 3); nes_write(0x34, g_cpu.X);
label_83CA:;
    /* $83CA: A2 */ nes_instruction_boundary(0x83CA, 2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_83CC:;
    /* $83CC: B4 */ nes_instruction_boundary(0x83CC, 4); g_cpu.Y = nes_read((0x27 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_83CE:;
    /* $83CE: A5 */ nes_instruction_boundary(0x83CE, 3); g_cpu.A = nes_read(0x23); FLAG_NZ(g_cpu.A);
label_83D0:;
    /* $83D0: 99 */ nes_instruction_boundary(0x83D0, 5); nes_write((0x00B0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_83D3:;
    /* $83D3: A9 */ nes_instruction_boundary(0x83D3, 2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_83D5:;
    /* $83D5: 99 */ nes_instruction_boundary(0x83D5, 5); nes_write((0x0471 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_83D8:;
    /* $83D8: BD */ nes_instruction_boundary(0x83D8, 4); g_cpu.A = nes_read((0x8411 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83DB:;
    /* $83DB: 99 */ nes_instruction_boundary(0x83DB, 5); nes_write((0x0491 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_83DE:;
    /* $83DE: A5 */ nes_instruction_boundary(0x83DE, 3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_83E0:;
    /* $83E0: 99 */ nes_instruction_boundary(0x83E0, 5); nes_write((0x04D1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_83E3:;
    /* $83E3: A5 */ nes_instruction_boundary(0x83E3, 3); g_cpu.A = nes_read(0x26); FLAG_NZ(g_cpu.A);
label_83E5:;
    /* $83E5: 99 */ nes_instruction_boundary(0x83E5, 5); nes_write((0x0551 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_83E8:;
    /* $83E8: BD */ nes_instruction_boundary(0x83E8, 4); g_cpu.A = nes_read((0x8409 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83EB:;
    /* $83EB: 99 */ nes_instruction_boundary(0x83EB, 5); nes_write((0x0511 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_83EE:;
    /* $83EE: BD */ nes_instruction_boundary(0x83EE, 4); g_cpu.A = nes_read((0x840D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83F1:;
    /* $83F1: 99 */ nes_instruction_boundary(0x83F1, 5); nes_write((0x0591 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_83F4:;
    /* $83F4: A9 */ nes_instruction_boundary(0x83F4, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_83F6:;
    /* $83F6: 99 */ nes_instruction_boundary(0x83F6, 5); nes_write((0x05D1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_83F9:;
    /* $83F9: A9 */ nes_instruction_boundary(0x83F9, 2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_83FB:;
    /* $83FB: 99 */ nes_instruction_boundary(0x83FB, 5); nes_write((0x05F1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_83FE:;
    /* $83FE: CA */ nes_instruction_boundary(0x83FE, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_83FF:;
    /* $83FF: 10 */ nes_instruction_boundary(0x83FF, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x83CC, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_83CC;
    }
label_8401:;
    /* $8401: A6 */ nes_instruction_boundary(0x8401, 3); g_cpu.X = nes_read(0x34); FLAG_NZ(g_cpu.X);
label_8403:;
    /* $8403: 4C */ nes_instruction_boundary(0x8403, 3); nes_cpu_instruction_boundary(0xEA89, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA89(); g_code_window_base = _swb; } return;
label_8406:;
    /* $8406: 4C */ nes_instruction_boundary(0x8406, 3); nes_cpu_instruction_boundary(0xEA8C, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA8C(); g_code_window_base = _swb; } return;
}

void func_83AE_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83AE_b6");
#endif
    func_83AE_b6_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83E0_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83E0_b6");
#endif
    func_83AE_b6_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83CA_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83CA_b6");
#endif
    func_83AE_b6_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83CC_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83CC_b6");
#endif
    func_83AE_b6_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8403_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8403_b6");
#endif
    func_83AE_b6_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8431_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8431_b6");
#endif
label_8431:;
    /* $8431: A5 */ nes_instruction_boundary(0x8431, 3); g_cpu.A = nes_read(0xB1); FLAG_NZ(g_cpu.A);
label_8433:;
    /* $8433: 09 */ nes_instruction_boundary(0x8433, 2); g_cpu.A |= 0x10; FLAG_NZ(g_cpu.A);
label_8435:;
    /* $8435: 85 */ nes_instruction_boundary(0x8435, 3); nes_write(0xB1, g_cpu.A);
label_8437:;
    /* $8437: E6 */ nes_instruction_boundary(0x8437, 5); { uint16_t a=0x71; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8439:;
    /* $8439: 4C */ nes_instruction_boundary(0x8439, 3); nes_cpu_instruction_boundary(0xEA89, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA89(); g_code_window_base = _swb; } return;
}

void func_843C_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_843C_b6");
#endif
label_843C:;
    /* $843C: 20 */ nes_instruction_boundary(0x843C, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EC6A(); g_code_window_base = _swb; }
label_843F:;
    /* $843F: 4C */ nes_instruction_boundary(0x843F, 3); nes_cpu_instruction_boundary(0xEA89, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA89(); g_code_window_base = _swb; } return;
}

void func_8445_b6_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8467;
        case 2: goto label_8450;
        case 3: goto label_8478;
        case 4: goto label_8460;
    }
label_8445:;
    /* $8445: BD */ nes_instruction_boundary(0x8445, 4); g_cpu.A = nes_read((0x0491 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8448:;
    /* $8448: 29 */ nes_instruction_boundary(0x8448, 2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_844A:;
    /* $844A: D0 */ nes_instruction_boundary(0x844A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8478; }
label_844C:;
    /* $844C: 8A */ nes_instruction_boundary(0x844C, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_844D:;
    /* $844D: 48 */ nes_instruction_boundary(0x844D, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_844E:;
    /* $844E: A0 */ nes_instruction_boundary(0x844E, 2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_8450:;
    /* $8450: B5 */ nes_instruction_boundary(0x8450, 4); g_cpu.A = nes_read((0xB1 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8452:;
    /* $8452: 29 */ nes_instruction_boundary(0x8452, 2); g_cpu.A &= 0xDF; FLAG_NZ(g_cpu.A);
label_8454:;
    /* $8454: 95 */ nes_instruction_boundary(0x8454, 4); nes_write((0xB1 + g_cpu.X) & 0xFF, g_cpu.A);
label_8456:;
    /* $8456: A9 */ nes_instruction_boundary(0x8456, 2); g_cpu.A = 0xFC; FLAG_NZ(g_cpu.A);
label_8458:;
    /* $8458: 9D */ nes_instruction_boundary(0x8458, 5); nes_write((0x0592 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_845B:;
    /* $845B: A9 */ nes_instruction_boundary(0x845B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_845D:;
    /* $845D: 9D */ nes_instruction_boundary(0x845D, 5); nes_write((0x0512 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8460:;
    /* $8460: A9 */ nes_instruction_boundary(0x8460, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8462:;
    /* $8462: 9D */ nes_instruction_boundary(0x8462, 5); nes_write((0x05D2 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8465:;
    /* $8465: A9 */ nes_instruction_boundary(0x8465, 2); g_cpu.A = 0x53; FLAG_NZ(g_cpu.A);
label_8467:;
    /* $8467: 9D */ nes_instruction_boundary(0x8467, 5); nes_write((0x05F2 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_846A:;
    /* $846A: A9 */ nes_instruction_boundary(0x846A, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_846C:;
    /* $846C: 9D */ nes_instruction_boundary(0x846C, 5); nes_write((0x0492 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_846F:;
    /* $846F: E8 */ nes_instruction_boundary(0x846F, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8470:;
    /* $8470: 88 */ nes_instruction_boundary(0x8470, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8471:;
    /* $8471: 10 */ nes_instruction_boundary(0x8471, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x8450, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8450;
    }
label_8473:;
    /* $8473: 68 */ nes_instruction_boundary(0x8473, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8474:;
    /* $8474: AA */ nes_instruction_boundary(0x8474, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8475:;
    /* $8475: 4C */ nes_instruction_boundary(0x8475, 3); nes_cpu_instruction_boundary(0xEB08, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB08(); g_code_window_base = _swb; } return;
label_8478:;
    /* $8478: 4C */ nes_instruction_boundary(0x8478, 3); nes_cpu_instruction_boundary(0xEB14, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB14(); g_code_window_base = _swb; } return;
}

void func_8445_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8445_b6");
#endif
    func_8445_b6_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8467_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8467_b6");
#endif
    func_8445_b6_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8450_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8450_b6");
#endif
    func_8445_b6_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8478_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8478_b6");
#endif
    func_8445_b6_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8460_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8460_b6");
#endif
    func_8445_b6_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_847B_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_847B_b6");
#endif
label_847B:;
    /* $847B: BD */ nes_instruction_boundary(0x847B, 4); g_cpu.A = nes_read((0x0491 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_847E:;
    /* $847E: C9 */ nes_instruction_boundary(0x847E, 2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8480:;
    /* $8480: B0 */ nes_instruction_boundary(0x8480, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8485; }
label_8482:;
    /* $8482: 4C */ nes_instruction_boundary(0x8482, 3); nes_cpu_instruction_boundary(0xEAA9, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EAA9(); g_code_window_base = _swb; } return;
label_8485:;
    /* $8485: 4C */ nes_instruction_boundary(0x8485, 3); nes_cpu_instruction_boundary(0xEA89, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA89(); g_code_window_base = _swb; } return;
}

void func_8488_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8488_b6");
#endif
label_8488:;
    /* $8488: A2 */ nes_instruction_boundary(0x8488, 2); g_cpu.X = 0x18; FLAG_NZ(g_cpu.X);
label_848A:;
    /* $848A: 20 */ nes_instruction_boundary(0x848A, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA8C(); g_code_window_base = _swb; }
label_848D:;
    /* $848D: CA */ nes_instruction_boundary(0x848D, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_848E:;
    /* $848E: D0 */ nes_instruction_boundary(0x848E, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0x848A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_848A;
    }
label_8490:;
    /* $8490: 4C */ nes_instruction_boundary(0x8490, 3); nes_cpu_instruction_boundary(0xEAC3, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EAC3(); g_code_window_base = _swb; } return;
}

void func_8493_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8493_b6");
#endif
label_8493:;
    /* $8493: A2 */ nes_instruction_boundary(0x8493, 2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_8495:;
    /* $8495: 20 */ nes_instruction_boundary(0x8495, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA8C(); g_code_window_base = _swb; }
label_8498:;
    /* $8498: A2 */ nes_instruction_boundary(0x8498, 2); g_cpu.X = 0x0F; FLAG_NZ(g_cpu.X);
label_849A:;
    /* $849A: 20 */ nes_instruction_boundary(0x849A, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA8C(); g_code_window_base = _swb; }
label_849D:;
    /* $849D: 4C */ nes_instruction_boundary(0x849D, 3); nes_cpu_instruction_boundary(0xEAC3, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EAC3(); g_code_window_base = _swb; } return;
}

void func_84A0_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84A0_b6");
#endif
label_84A0:;
    /* $84A0: BD */ nes_instruction_boundary(0x84A0, 4); g_cpu.A = nes_read((0x05B1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84A3:;
    /* $84A3: D0 */ nes_instruction_boundary(0x84A3, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84A8; }
label_84A5:;
    /* $84A5: 4C */ nes_instruction_boundary(0x84A5, 3); nes_cpu_instruction_boundary(0xEAC3, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EAC3(); g_code_window_base = _swb; } return;
label_84A8:;
    /* $84A8: 4C */ nes_instruction_boundary(0x84A8, 3); nes_cpu_instruction_boundary(0xEAA9, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EAA9(); g_code_window_base = _swb; } return;
}

void func_84AB_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84AB_b6");
#endif
label_84AB:;
    /* $84AB: AD */ nes_instruction_boundary(0x84AB, 4); g_cpu.A = nes_read(0x05B1); FLAG_NZ(g_cpu.A);
label_84AE:;
    /* $84AE: C9 */ nes_instruction_boundary(0x84AE, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_84B0:;
    /* $84B0: D0 */ nes_instruction_boundary(0x84B0, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84BE; }
label_84B2:;
    /* $84B2: A9 */ nes_instruction_boundary(0x84B2, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_84B4:;
    /* $84B4: 85 */ nes_instruction_boundary(0x84B4, 3); nes_write(0x35, g_cpu.A);
label_84B6:;
    /* $84B6: A9 */ nes_instruction_boundary(0x84B6, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_84B8:;
    /* $84B8: 20 */ nes_instruction_boundary(0x84B8, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EDC0(); g_code_window_base = _swb; }
label_84BB:;
    /* $84BB: 4C */ nes_instruction_boundary(0x84BB, 3); nes_cpu_instruction_boundary(0xEAC3, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EAC3(); g_code_window_base = _swb; } return;
label_84BE:;
    /* $84BE: A9 */ nes_instruction_boundary(0x84BE, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_84C0:;
    /* $84C0: 8D */ nes_instruction_boundary(0x84C0, 4); nes_write(0x05D1, g_cpu.A);
label_84C3:;
    /* $84C3: 60 */ nes_instruction_boundary(0x84C3, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_84C4_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84C4_b6");
#endif
label_84C4:;
    /* $84C4: E0 */ nes_instruction_boundary(0x84C4, 2); { int r=g_cpu.X-0x00; g_cpu.C=(g_cpu.X>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_84C6:;
    /* $84C6: D0 */ nes_instruction_boundary(0x84C6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84CB; }
label_84C8:;
    /* $84C8: 4C */ nes_instruction_boundary(0x84C8, 3); nes_cpu_instruction_boundary(0xEAC3, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EAC3(); g_code_window_base = _swb; } return;
label_84CB:;
    /* $84CB: 4C */ nes_instruction_boundary(0x84CB, 3); nes_cpu_instruction_boundary(0xEA89, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA89(); g_code_window_base = _swb; } return;
}

void func_85EB_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85EB_b6");
#endif
label_85EB:;
    /* $85EB: 04 */ nes_instruction_boundary(0x85EB, 3); (void)nes_read(0x99); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_85ED:;
    /* $85ED: 98 */ nes_instruction_boundary(0x85ED, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_85EE:;
    /* $85EE: 00 */ nes_instruction_boundary(0x85EE, 7); nes_brk_executed(0x85EE); return;
}

void func_86EB_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86EB_b6");
#endif
label_86EB:;
    /* $86EB: 71 */ nes_instruction_boundary(0x86EB, 5); { uint8_t m=nes_read((nes_read16zp(0x07) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86ED:;
    /* $86ED: 4A */ nes_instruction_boundary(0x86ED, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_86EE:;
    /* $86EE: E5 */ nes_instruction_boundary(0x86EE, 3); { uint8_t m=nes_read(0x2B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86F0:;
    /* $86F0: 69 */ nes_instruction_boundary(0x86F0, 2); { uint16_t r = g_cpu.A + 0x1C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x1C); g_cpu.A=r&0xFF; }
label_86F2:;
    /* $86F2: C9 */ nes_instruction_boundary(0x86F2, 2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_86F4:;
    /* $86F4: B0 */ nes_instruction_boundary(0x86F4, 2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_8703; }
label_86F6:;
    /* $86F6: BD */ nes_instruction_boundary(0x86F6, 4); g_cpu.A = nes_read((0x06F1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86F9:;
    /* $86F9: 4A */ nes_instruction_boundary(0x86F9, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_86FA:;
    /* $86FA: E5 */ nes_instruction_boundary(0x86FA, 3); { uint8_t m=nes_read(0x2C); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86FC:;
    /* $86FC: C9 */ nes_instruction_boundary(0x86FC, 2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_86FE:;
    /* $86FE: B0 */ nes_instruction_boundary(0x86FE, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8703; }
label_8700:;
    /* $8700: 9D */ nes_instruction_boundary(0x8700, 5); nes_write((0x0671 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8703:;
    /* $8703: CA */ nes_instruction_boundary(0x8703, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8704:;
    /* $8704: 10 */ nes_instruction_boundary(0x8704, 2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06E5), 6); return; }
label_8706:;
    /* $8706: 60 */ nes_instruction_boundary(0x8706, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C99_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C99_b6");
#endif
label_9C99:;
    /* $9C99: 39 */ nes_instruction_boundary(0x9C99, 4); g_cpu.A &= nes_read((0x3848 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C9C:;
    /* $9C9C: 24 */ nes_instruction_boundary(0x9C9C, 3); { uint8_t m=nes_read(0xFE); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9C9E:;
    /* $9C9E: 00 */ nes_instruction_boundary(0x9C9E, 7); nes_brk_executed(0x9C9E); return;
}

void func_8801_b6_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8825;
    }
label_8801:;
    /* $8801: 31 */ nes_instruction_boundary(0x8801, 5); g_cpu.A &= nes_read((nes_read16zp(0x64) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8803:;
    /* $8803: 81 */ nes_instruction_boundary(0x8803, 6); nes_write(nes_read16zp((0x87 + g_cpu.X) & 0xFF), g_cpu.A);
label_8805:;
    /* $8805: 88 */ nes_instruction_boundary(0x8805, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8806:;
    /* $8806: 88 */ nes_instruction_boundary(0x8806, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8807:;
    /* $8807: 88 */ nes_instruction_boundary(0x8807, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8808:;
    /* $8808: 88 */ nes_instruction_boundary(0x8808, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8809:;
    /* $8809: 88 */ nes_instruction_boundary(0x8809, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_880A:;
    /* $880A: 88 */ nes_instruction_boundary(0x880A, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_880B:;
    /* $880B: 88 */ nes_instruction_boundary(0x880B, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_880C:;
    /* $880C: 89 */ nes_instruction_boundary(0x880C, 2); /* NOP */
label_880E:;
    /* $880E: 89 */ nes_instruction_boundary(0x880E, 2); /* NOP */
label_8810:;
    /* $8810: 89 */ nes_instruction_boundary(0x8810, 2); /* NOP */
label_8812:;
    /* $8812: 54 */ nes_instruction_boundary(0x8812, 4); (void)nes_read((0xD0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8814:;
    /* $8814: 19 */ nes_instruction_boundary(0x8814, 4); g_cpu.A |= nes_read((0x53A5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8817:;
    /* $8817: 29 */ nes_instruction_boundary(0x8817, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8819:;
    /* $8819: D0 */ nes_instruction_boundary(0x8819, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_882E; }
label_881B:;
    /* $881B: A5 */ nes_instruction_boundary(0x881B, 3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_881D:;
    /* $881D: C9 */ nes_instruction_boundary(0x881D, 2); { int r=g_cpu.A-0x40; g_cpu.C=(g_cpu.A>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_881F:;
    /* $881F: F0 */ nes_instruction_boundary(0x881F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_882E; }
label_8821:;
    /* $8821: E6 */ nes_instruction_boundary(0x8821, 5); { uint16_t a=0x4E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8823:;
    /* $8823: A5 */ nes_instruction_boundary(0x8823, 3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_8825:;
    /* $8825: 85 */ nes_instruction_boundary(0x8825, 3); nes_write(0x2B, g_cpu.A);
label_8827:;
    /* $8827: A9 */ nes_instruction_boundary(0x8827, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8829:;
    /* $8829: 85 */ nes_instruction_boundary(0x8829, 3); nes_write(0x2C, g_cpu.A);
label_882B:;
    /* $882B: 4C */ nes_instruction_boundary(0x882B, 3); nes_cpu_instruction_boundary(0x8895, 2); call_by_address_tail(0x8895, 6); return;
label_882E:;
    /* $882E: 60 */ nes_instruction_boundary(0x882E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8801_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8801_b6");
#endif
    func_8801_b6_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8825_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8825_b6");
#endif
    func_8801_b6_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9885_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9885_b6");
#endif
label_9885:;
    /* $9885: 20 */ nes_instruction_boundary(0x9885, 6); nes_dispatch_call(0x2018, -1);
label_9888:;
    /* $9888: 00 */ nes_instruction_boundary(0x9888, 7); nes_brk_executed(0x9888); return;
}

void func_86E6_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86E6_b6");
#endif
label_86E6:;
    /* $86E6: 71 */ nes_instruction_boundary(0x86E6, 5); { uint8_t m=nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86E8:;
    /* $86E8: 10 */ nes_instruction_boundary(0x86E8, 2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_8703; }
label_86EA:;
    /* $86EA: BD */ nes_instruction_boundary(0x86EA, 4); g_cpu.A = nes_read((0x0771 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86ED:;
    /* $86ED: 4A */ nes_instruction_boundary(0x86ED, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_86EE:;
    /* $86EE: E5 */ nes_instruction_boundary(0x86EE, 3); { uint8_t m=nes_read(0x2B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86F0:;
    /* $86F0: 69 */ nes_instruction_boundary(0x86F0, 2); { uint16_t r = g_cpu.A + 0x1C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x1C); g_cpu.A=r&0xFF; }
label_86F2:;
    /* $86F2: C9 */ nes_instruction_boundary(0x86F2, 2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_86F4:;
    /* $86F4: B0 */ nes_instruction_boundary(0x86F4, 2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_8703; }
label_86F6:;
    /* $86F6: BD */ nes_instruction_boundary(0x86F6, 4); g_cpu.A = nes_read((0x06F1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86F9:;
    /* $86F9: 4A */ nes_instruction_boundary(0x86F9, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_86FA:;
    /* $86FA: E5 */ nes_instruction_boundary(0x86FA, 3); { uint8_t m=nes_read(0x2C); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86FC:;
    /* $86FC: C9 */ nes_instruction_boundary(0x86FC, 2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_86FE:;
    /* $86FE: B0 */ nes_instruction_boundary(0x86FE, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8703; }
label_8700:;
    /* $8700: 9D */ nes_instruction_boundary(0x8700, 5); nes_write((0x0671 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8703:;
    /* $8703: CA */ nes_instruction_boundary(0x8703, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8704:;
    /* $8704: 10 */ nes_instruction_boundary(0x8704, 2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x06E5), 6); return; }
label_8706:;
    /* $8706: 60 */ nes_instruction_boundary(0x8706, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_873A_b6_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8795;
        case 2: goto label_874A;
        case 3: goto label_8781;
        case 4: goto label_8761;
        case 5: goto label_876E;
        case 6: goto label_8797;
        case 7: goto label_8763;
        case 8: goto label_878D;
    }
label_873A:;
    /* $873A: 87 */ nes_instruction_boundary(0x873A, 3); nes_write(0xBF, g_cpu.A & g_cpu.X); /* SAX */
label_873C:;
    /* $873C: 89 */ nes_instruction_boundary(0x873C, 2); /* NOP */
label_873E:;
    /* $873E: 87 */ nes_instruction_boundary(0x873E, 3); nes_write(0x49, g_cpu.A & g_cpu.X); /* SAX */
label_8740:;
    /* $8740: 87 */ nes_instruction_boundary(0x8740, 3); nes_write(0x49, g_cpu.A & g_cpu.X); /* SAX */
label_8742:;
    /* $8742: 87 */ nes_instruction_boundary(0x8742, 3); nes_write(0x49, g_cpu.A & g_cpu.X); /* SAX */
label_8744:;
    /* $8744: 87 */ nes_instruction_boundary(0x8744, 3); nes_write(0x49, g_cpu.A & g_cpu.X); /* SAX */
label_8746:;
    /* $8746: 87 */ nes_instruction_boundary(0x8746, 3); nes_write(0x49, g_cpu.A & g_cpu.X); /* SAX */
label_8748:;
    /* $8748: 87 */ nes_instruction_boundary(0x8748, 3); nes_write(0x60, g_cpu.A & g_cpu.X); /* SAX */
label_874A:;
    /* $874A: A5 */ nes_instruction_boundary(0x874A, 3); g_cpu.A = nes_read(0x63); FLAG_NZ(g_cpu.A);
label_874C:;
    /* $874C: D0 */ nes_instruction_boundary(0x874C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_875D; }
label_874E:;
    /* $874E: A4 */ nes_instruction_boundary(0x874E, 3); g_cpu.Y = nes_read(0x4D); FLAG_NZ(g_cpu.Y);
label_8750:;
    /* $8750: B9 */ nes_instruction_boundary(0x8750, 4); g_cpu.A = nes_read((0x87F7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8753:;
    /* $8753: 85 */ nes_instruction_boundary(0x8753, 3); nes_write(0x23, g_cpu.A);
label_8755:;
    /* $8755: B9 */ nes_instruction_boundary(0x8755, 4); g_cpu.A = nes_read((0x8804 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8758:;
    /* $8758: 85 */ nes_instruction_boundary(0x8758, 3); nes_write(0x24, g_cpu.A);
label_875A:;
    /* $875A: 6C */ nes_instruction_boundary(0x875A, 5); { uint16_t _jt = nes_read16zp(0x23); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
label_875D:;
    /* $875D: A5 */ nes_instruction_boundary(0x875D, 3); g_cpu.A = nes_read(0x54); FLAG_NZ(g_cpu.A);
label_875F:;
    /* $875F: D0 */ nes_instruction_boundary(0x875F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_87C8; }
label_8761:;
    /* $8761: A2 */ nes_instruction_boundary(0x8761, 2); g_cpu.X = 0x1F; FLAG_NZ(g_cpu.X);
label_8763:;
    /* $8763: B5 */ nes_instruction_boundary(0x8763, 4); g_cpu.A = nes_read((0xB0 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8765:;
    /* $8765: 10 */ nes_instruction_boundary(0x8765, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8773; }
label_8767:;
    /* $8767: 0A */ nes_instruction_boundary(0x8767, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8768:;
    /* $8768: 10 */ nes_instruction_boundary(0x8768, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8773; }
label_876A:;
    /* $876A: BD */ nes_instruction_boundary(0x876A, 4); g_cpu.A = nes_read((0x0551 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_876D:;
    /* $876D: 18 */ nes_instruction_boundary(0x876D, 2); g_cpu.C = 0;
label_876E:;
    /* $876E: 65 */ nes_instruction_boundary(0x876E, 3); { uint8_t m=nes_read(0x63); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8770:;
    /* $8770: 9D */ nes_instruction_boundary(0x8770, 5); nes_write((0x0551 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8773:;
    /* $8773: CA */ nes_instruction_boundary(0x8773, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8774:;
    /* $8774: 10 */ nes_instruction_boundary(0x8774, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x8763, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8763;
    }
label_8776:;
    /* $8776: A5 */ nes_instruction_boundary(0x8776, 3); g_cpu.A = nes_read(0x63); FLAG_NZ(g_cpu.A);
label_8778:;
    /* $8778: 30 */ nes_instruction_boundary(0x8778, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_87D4; }
label_877A:;
    /* $877A: A5 */ nes_instruction_boundary(0x877A, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_877C:;
    /* $877C: 38 */ nes_instruction_boundary(0x877C, 2); g_cpu.C = 1;
label_877D:;
    /* $877D: E5 */ nes_instruction_boundary(0x877D, 3); { uint8_t m=nes_read(0x63); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_877F:;
    /* $877F: 85 */ nes_instruction_boundary(0x877F, 3); nes_write(0x61, g_cpu.A);
label_8781:;
    /* $8781: A5 */ nes_instruction_boundary(0x8781, 3); g_cpu.A = nes_read(0x62); FLAG_NZ(g_cpu.A);
label_8783:;
    /* $8783: E9 */ nes_instruction_boundary(0x8783, 2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8785:;
    /* $8785: 85 */ nes_instruction_boundary(0x8785, 3); nes_write(0x62, g_cpu.A);
label_8787:;
    /* $8787: B0 */ nes_instruction_boundary(0x8787, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8791; }
label_8789:;
    /* $8789: A9 */ nes_instruction_boundary(0x8789, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_878B:;
    /* $878B: 85 */ nes_instruction_boundary(0x878B, 3); nes_write(0x61, g_cpu.A);
label_878D:;
    /* $878D: 85 */ nes_instruction_boundary(0x878D, 3); nes_write(0x62, g_cpu.A);
label_878F:;
    /* $878F: 85 */ nes_instruction_boundary(0x878F, 3); nes_write(0x63, g_cpu.A);
label_8791:;
    /* $8791: A4 */ nes_instruction_boundary(0x8791, 3); g_cpu.Y = nes_read(0x61); FLAG_NZ(g_cpu.Y);
label_8793:;
    /* $8793: 84 */ nes_instruction_boundary(0x8793, 3); nes_write(0x27, g_cpu.Y);
label_8795:;
    /* $8795: A5 */ nes_instruction_boundary(0x8795, 3); g_cpu.A = nes_read(0x62); FLAG_NZ(g_cpu.A);
label_8797:;
    /* $8797: 85 */ nes_instruction_boundary(0x8797, 3); nes_write(0x28, g_cpu.A);
label_8799:;
    /* $8799: 20 */ nes_instruction_boundary(0x8799, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_879C:;
    /* $879C: 85 */ nes_instruction_boundary(0x879C, 3); nes_write(0x29, g_cpu.A);
label_879E:;
    /* $879E: A5 */ nes_instruction_boundary(0x879E, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_87A0:;
    /* $87A0: 29 */ nes_instruction_boundary(0x87A0, 2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_87A2:;
    /* $87A2: CD */ nes_instruction_boundary(0x87A2, 4); { uint8_t m=nes_read(0x07F1); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87A5:;
    /* $87A5: F0 */ nes_instruction_boundary(0x87A5, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_87BF; }
label_87A7:;
    /* $87A7: A5 */ nes_instruction_boundary(0x87A7, 3); g_cpu.A = nes_read(0x64); FLAG_NZ(g_cpu.A);
label_87A9:;
    /* $87A9: A2 */ nes_instruction_boundary(0x87A9, 2); g_cpu.X = 0x07; FLAG_NZ(g_cpu.X);
label_87AB:;
    /* $87AB: 20 */ nes_instruction_boundary(0x87AB, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E5F2(); g_code_window_base = _swb; }
label_87AE:;
    /* $87AE: 20 */ nes_instruction_boundary(0x87AE, 6); nes_dispatch_call(0x8A5B, 6);
label_87B1:;
    /* $87B1: 20 */ nes_instruction_boundary(0x87B1, 6); nes_dispatch_call(0x8B66, 6);
label_87B4:;
    /* $87B4: A9 */ nes_instruction_boundary(0x87B4, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_87B6:;
    /* $87B6: 85 */ nes_instruction_boundary(0x87B6, 3); nes_write(0x5D, g_cpu.A);
label_87B8:;
    /* $87B8: A5 */ nes_instruction_boundary(0x87B8, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_87BA:;
    /* $87BA: 29 */ nes_instruction_boundary(0x87BA, 2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_87BC:;
    /* $87BC: 8D */ nes_instruction_boundary(0x87BC, 4); nes_write(0x07F1, g_cpu.A);
label_87BF:;
    /* $87BF: A4 */ nes_instruction_boundary(0x87BF, 3); g_cpu.Y = nes_read(0x61); FLAG_NZ(g_cpu.Y);
label_87C1:;
    /* $87C1: A5 */ nes_instruction_boundary(0x87C1, 3); g_cpu.A = nes_read(0x62); FLAG_NZ(g_cpu.A);
label_87C3:;
    /* $87C3: 20 */ nes_instruction_boundary(0x87C3, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_87C6:;
    /* $87C6: 85 */ nes_instruction_boundary(0x87C6, 3); nes_write(0x3A, g_cpu.A);
label_87C8:;
    /* $87C8: 60 */ nes_instruction_boundary(0x87C8, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_87C9:;
    /* $87C9: A9 */ nes_instruction_boundary(0x87C9, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_87CB:;
    /* $87CB: 85 */ nes_instruction_boundary(0x87CB, 3); nes_write(0x61, g_cpu.A);
label_87CD:;
    /* $87CD: 85 */ nes_instruction_boundary(0x87CD, 3); nes_write(0x62, g_cpu.A);
label_87CF:;
    /* $87CF: 85 */ nes_instruction_boundary(0x87CF, 3); nes_write(0x3A, g_cpu.A);
label_87D1:;
    /* $87D1: 85 */ nes_instruction_boundary(0x87D1, 3); nes_write(0x63, g_cpu.A);
label_87D3:;
    /* $87D3: 60 */ nes_instruction_boundary(0x87D3, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_87D4:;
    /* $87D4: A5 */ nes_instruction_boundary(0x87D4, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_87D6:;
    /* $87D6: 38 */ nes_instruction_boundary(0x87D6, 2); g_cpu.C = 1;
label_87D7:;
    /* $87D7: E5 */ nes_instruction_boundary(0x87D7, 3); { uint8_t m=nes_read(0x63); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87D9:;
    /* $87D9: 85 */ nes_instruction_boundary(0x87D9, 3); nes_write(0x61, g_cpu.A);
label_87DB:;
    /* $87DB: A5 */ nes_instruction_boundary(0x87DB, 3); g_cpu.A = nes_read(0x62); FLAG_NZ(g_cpu.A);
label_87DD:;
    /* $87DD: E9 */ nes_instruction_boundary(0x87DD, 2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87DF:;
    /* $87DF: 85 */ nes_instruction_boundary(0x87DF, 3); nes_write(0x62, g_cpu.A);
label_87E1:;
    /* $87E1: A5 */ nes_instruction_boundary(0x87E1, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_87E3:;
    /* $87E3: 18 */ nes_instruction_boundary(0x87E3, 2); g_cpu.C = 0;
label_87E4:;
    /* $87E4: 69 */ nes_instruction_boundary(0x87E4, 2); { uint16_t r = g_cpu.A + 0xD0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xD0); g_cpu.A=r&0xFF; }
label_87E6:;
    /* $87E6: 85 */ nes_instruction_boundary(0x87E6, 3); nes_write(0x27, g_cpu.A);
label_87E8:;
    /* $87E8: A8 */ nes_instruction_boundary(0x87E8, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_87E9:;
    /* $87E9: A5 */ nes_instruction_boundary(0x87E9, 3); g_cpu.A = nes_read(0x62); FLAG_NZ(g_cpu.A);
label_87EB:;
    /* $87EB: 69 */ nes_instruction_boundary(0x87EB, 2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_87ED:;
    /* $87ED: 85 */ nes_instruction_boundary(0x87ED, 3); nes_write(0x28, g_cpu.A);
label_87EF:;
    /* $87EF: 20 */ nes_instruction_boundary(0x87EF, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_87F2:;
    /* $87F2: 85 */ nes_instruction_boundary(0x87F2, 3); nes_write(0x29, g_cpu.A);
label_87F4:;
    /* $87F4: 4C */ nes_instruction_boundary(0x87F4, 3); nes_cpu_instruction_boundary(0x879E, 2); call_by_address_tail(0x879E, 6); return;
}

void func_873A_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_873A_b6");
#endif
    func_873A_b6_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8795_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8795_b6");
#endif
    func_873A_b6_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_874A_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_874A_b6");
#endif
    func_873A_b6_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8781_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8781_b6");
#endif
    func_873A_b6_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8761_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8761_b6");
#endif
    func_873A_b6_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_876E_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_876E_b6");
#endif
    func_873A_b6_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8797_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8797_b6");
#endif
    func_873A_b6_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8763_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8763_b6");
#endif
    func_873A_b6_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_878D_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_878D_b6");
#endif
    func_873A_b6_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A40F_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A40F_b6");
#endif
label_A40F:;
    /* $A40F: DC */ nes_instruction_boundary(0xA40F, 4); (void)nes_read((0xD400 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A412:;
    /* $A412: F4 */ nes_instruction_boundary(0xA412, 4); (void)nes_read((0xF4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A414:;
    /* $A414: D4 */ nes_instruction_boundary(0xA414, 4); (void)nes_read((0xD8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A416:;
    /* $A416: E6 */ nes_instruction_boundary(0xA416, 5); { uint16_t a=0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A418:;
    /* $A418: BE */ nes_instruction_boundary(0xA418, 4); g_cpu.X = nes_read((0xECD4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A41B:;
    /* $A41B: E6 */ nes_instruction_boundary(0xA41B, 5); { uint16_t a=0xE4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A41D:;
    /* $A41D: 00 */ nes_instruction_boundary(0xA41D, 7); nes_brk_executed(0xA41D); return;
}

void func_8811_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8811_b6");
#endif
label_8811:;
    /* $8811: A5 */ nes_instruction_boundary(0x8811, 3); g_cpu.A = nes_read(0x54); FLAG_NZ(g_cpu.A);
label_8813:;
    /* $8813: D0 */ nes_instruction_boundary(0x8813, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_882E; }
label_8815:;
    /* $8815: A5 */ nes_instruction_boundary(0x8815, 3); g_cpu.A = nes_read(0x53); FLAG_NZ(g_cpu.A);
label_8817:;
    /* $8817: 29 */ nes_instruction_boundary(0x8817, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8819:;
    /* $8819: D0 */ nes_instruction_boundary(0x8819, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_882E; }
label_881B:;
    /* $881B: A5 */ nes_instruction_boundary(0x881B, 3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_881D:;
    /* $881D: C9 */ nes_instruction_boundary(0x881D, 2); { int r=g_cpu.A-0x40; g_cpu.C=(g_cpu.A>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_881F:;
    /* $881F: F0 */ nes_instruction_boundary(0x881F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_882E; }
label_8821:;
    /* $8821: E6 */ nes_instruction_boundary(0x8821, 5); { uint16_t a=0x4E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8823:;
    /* $8823: A5 */ nes_instruction_boundary(0x8823, 3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_8825:;
    /* $8825: 85 */ nes_instruction_boundary(0x8825, 3); nes_write(0x2B, g_cpu.A);
label_8827:;
    /* $8827: A9 */ nes_instruction_boundary(0x8827, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8829:;
    /* $8829: 85 */ nes_instruction_boundary(0x8829, 3); nes_write(0x2C, g_cpu.A);
label_882B:;
    /* $882B: 4C */ nes_instruction_boundary(0x882B, 3); nes_cpu_instruction_boundary(0x8895, 2); call_by_address_tail(0x8895, 6); return;
label_882E:;
    /* $882E: 60 */ nes_instruction_boundary(0x882E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_882F_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_882F_b6");
#endif
label_882F:;
    /* $882F: A5 */ nes_instruction_boundary(0x882F, 3); g_cpu.A = nes_read(0x54); FLAG_NZ(g_cpu.A);
label_8831:;
    /* $8831: D0 */ nes_instruction_boundary(0x8831, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_884A; }
label_8833:;
    /* $8833: A5 */ nes_instruction_boundary(0x8833, 3); g_cpu.A = nes_read(0x53); FLAG_NZ(g_cpu.A);
label_8835:;
    /* $8835: 29 */ nes_instruction_boundary(0x8835, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8837:;
    /* $8837: D0 */ nes_instruction_boundary(0x8837, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_884A; }
label_8839:;
    /* $8839: A5 */ nes_instruction_boundary(0x8839, 3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_883B:;
    /* $883B: F0 */ nes_instruction_boundary(0x883B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_884A; }
label_883D:;
    /* $883D: C6 */ nes_instruction_boundary(0x883D, 5); { uint16_t a=0x4E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_883F:;
    /* $883F: A5 */ nes_instruction_boundary(0x883F, 3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_8841:;
    /* $8841: 85 */ nes_instruction_boundary(0x8841, 3); nes_write(0x2B, g_cpu.A);
label_8843:;
    /* $8843: A9 */ nes_instruction_boundary(0x8843, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8845:;
    /* $8845: 85 */ nes_instruction_boundary(0x8845, 3); nes_write(0x2C, g_cpu.A);
label_8847:;
    /* $8847: 4C */ nes_instruction_boundary(0x8847, 3); nes_cpu_instruction_boundary(0x8895, 2); call_by_address_tail(0x8895, 6); return;
label_884A:;
    /* $884A: 60 */ nes_instruction_boundary(0x884A, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_884B_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_884B_b6");
#endif
label_884B:;
    /* $884B: A5 */ nes_instruction_boundary(0x884B, 3); g_cpu.A = nes_read(0x54); FLAG_NZ(g_cpu.A);
label_884D:;
    /* $884D: D0 */ nes_instruction_boundary(0x884D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_885D; }
label_884F:;
    /* $884F: A5 */ nes_instruction_boundary(0x884F, 3); g_cpu.A = nes_read(0x53); FLAG_NZ(g_cpu.A);
label_8851:;
    /* $8851: 29 */ nes_instruction_boundary(0x8851, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8853:;
    /* $8853: D0 */ nes_instruction_boundary(0x8853, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_885D; }
label_8855:;
    /* $8855: A5 */ nes_instruction_boundary(0x8855, 3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_8857:;
    /* $8857: C9 */ nes_instruction_boundary(0x8857, 2); { int r=g_cpu.A-0x40; g_cpu.C=(g_cpu.A>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_8859:;
    /* $8859: F0 */ nes_instruction_boundary(0x8859, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_885D; }
label_885B:;
    /* $885B: E6 */ nes_instruction_boundary(0x885B, 5); { uint16_t a=0x4E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_885D:;
    /* $885D: 4C */ nes_instruction_boundary(0x885D, 3); nes_cpu_instruction_boundary(0x8873, 2); call_by_address_tail(0x8873, 6); return;
}

void func_8860_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8860_b6");
#endif
label_8860:;
    /* $8860: A5 */ nes_instruction_boundary(0x8860, 3); g_cpu.A = nes_read(0x54); FLAG_NZ(g_cpu.A);
label_8862:;
    /* $8862: D0 */ nes_instruction_boundary(0x8862, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8870; }
label_8864:;
    /* $8864: A5 */ nes_instruction_boundary(0x8864, 3); g_cpu.A = nes_read(0x53); FLAG_NZ(g_cpu.A);
label_8866:;
    /* $8866: 29 */ nes_instruction_boundary(0x8866, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8868:;
    /* $8868: D0 */ nes_instruction_boundary(0x8868, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8870; }
label_886A:;
    /* $886A: A5 */ nes_instruction_boundary(0x886A, 3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_886C:;
    /* $886C: F0 */ nes_instruction_boundary(0x886C, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8870; }
label_886E:;
    /* $886E: C6 */ nes_instruction_boundary(0x886E, 5); { uint16_t a=0x4E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8870:;
    /* $8870: 4C */ nes_instruction_boundary(0x8870, 3); nes_cpu_instruction_boundary(0x8873, 2); call_by_address_tail(0x8873, 6); return;
}

void func_88FE_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88FE_b6");
#endif
label_88FE:;
    /* $88FE: AD */ nes_instruction_boundary(0x88FE, 4); g_cpu.A = nes_read(0x0471); FLAG_NZ(g_cpu.A);
label_8901:;
    /* $8901: C9 */ nes_instruction_boundary(0x8901, 2); { int r=g_cpu.A-0x66; g_cpu.C=(g_cpu.A>=0x66)?1:0; FLAG_NZ(r&0xFF); }
label_8903:;
    /* $8903: D0 */ nes_instruction_boundary(0x8903, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8928; }
label_8905:;
    /* $8905: A5 */ nes_instruction_boundary(0x8905, 3); g_cpu.A = nes_read(0x52); FLAG_NZ(g_cpu.A);
label_8907:;
    /* $8907: 4A */ nes_instruction_boundary(0x8907, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8908:;
    /* $8908: A4 */ nes_instruction_boundary(0x8908, 3); g_cpu.Y = nes_read(0x8F); FLAG_NZ(g_cpu.Y);
label_890A:;
    /* $890A: F0 */ nes_instruction_boundary(0x890A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_890D; }
label_890C:;
    /* $890C: 4A */ nes_instruction_boundary(0x890C, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_890D:;
    /* $890D: B0 */ nes_instruction_boundary(0x890D, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8919; }
label_890F:;
    /* $890F: AD */ nes_instruction_boundary(0x890F, 4); g_cpu.A = nes_read(0x05F1); FLAG_NZ(g_cpu.A);
label_8912:;
    /* $8912: 85 */ nes_instruction_boundary(0x8912, 3); nes_write(0x39, g_cpu.A);
label_8914:;
    /* $8914: A9 */ nes_instruction_boundary(0x8914, 2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_8916:;
    /* $8916: 85 */ nes_instruction_boundary(0x8916, 3); nes_write(0x37, g_cpu.A);
label_8918:;
    /* $8918: 60 */ nes_instruction_boundary(0x8918, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8919:;
    /* $8919: AD */ nes_instruction_boundary(0x8919, 4); g_cpu.A = nes_read(0x05F1); FLAG_NZ(g_cpu.A);
label_891C:;
    /* $891C: 49 */ nes_instruction_boundary(0x891C, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_891E:;
    /* $891E: 18 */ nes_instruction_boundary(0x891E, 2); g_cpu.C = 0;
label_891F:;
    /* $891F: 69 */ nes_instruction_boundary(0x891F, 2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_8921:;
    /* $8921: 85 */ nes_instruction_boundary(0x8921, 3); nes_write(0x39, g_cpu.A);
label_8923:;
    /* $8923: A9 */ nes_instruction_boundary(0x8923, 2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_8925:;
    /* $8925: 85 */ nes_instruction_boundary(0x8925, 3); nes_write(0x37, g_cpu.A);
label_8927:;
    /* $8927: 60 */ nes_instruction_boundary(0x8927, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8928:;
    /* $8928: A9 */ nes_instruction_boundary(0x8928, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_892A:;
    /* $892A: 85 */ nes_instruction_boundary(0x892A, 3); nes_write(0x39, g_cpu.A);
label_892C:;
    /* $892C: A9 */ nes_instruction_boundary(0x892C, 2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_892E:;
    /* $892E: 85 */ nes_instruction_boundary(0x892E, 3); nes_write(0x37, g_cpu.A);
label_8930:;
    /* $8930: 60 */ nes_instruction_boundary(0x8930, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88B4_b6_body(int _entry) {
    switch (_entry) {
        case 1: goto label_88C3;
    }
label_88B4:;
    /* $88B4: A5 */ nes_instruction_boundary(0x88B4, 3); g_cpu.A = nes_read(0x54); FLAG_NZ(g_cpu.A);
label_88B6:;
    /* $88B6: D0 */ nes_instruction_boundary(0x88B6, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_88FD; }
label_88B8:;
    /* $88B8: A5 */ nes_instruction_boundary(0x88B8, 3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_88BA:;
    /* $88BA: C9 */ nes_instruction_boundary(0x88BA, 2); { int r=g_cpu.A-0x78; g_cpu.C=(g_cpu.A>=0x78)?1:0; FLAG_NZ(r&0xFF); }
label_88BC:;
    /* $88BC: F0 */ nes_instruction_boundary(0x88BC, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88FD; }
label_88BE:;
    /* $88BE: 18 */ nes_instruction_boundary(0x88BE, 2); g_cpu.C = 0;
label_88BF:;
    /* $88BF: 69 */ nes_instruction_boundary(0x88BF, 2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_88C1:;
    /* $88C1: 85 */ nes_instruction_boundary(0x88C1, 3); nes_write(0x4E, g_cpu.A);
label_88C3:;
    /* $88C3: A2 */ nes_instruction_boundary(0x88C3, 2); g_cpu.X = 0x1F; FLAG_NZ(g_cpu.X);
label_88C5:;
    /* $88C5: 8A */ nes_instruction_boundary(0x88C5, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_88C6:;
    /* $88C6: 0A */ nes_instruction_boundary(0x88C6, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_88C7:;
    /* $88C7: 0A */ nes_instruction_boundary(0x88C7, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_88C8:;
    /* $88C8: A4 */ nes_instruction_boundary(0x88C8, 3); g_cpu.Y = nes_read(0x4E); FLAG_NZ(g_cpu.Y);
label_88CA:;
    /* $88CA: 20 */ nes_instruction_boundary(0x88CA, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF3D(); g_code_window_base = _swb; }
label_88CD:;
    /* $88CD: A9 */ nes_instruction_boundary(0x88CD, 2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_88CF:;
    /* $88CF: 38 */ nes_instruction_boundary(0x88CF, 2); g_cpu.C = 1;
label_88D0:;
    /* $88D0: ED */ nes_instruction_boundary(0x88D0, 4); { uint8_t m=nes_read(0x04D1); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88D3:;
    /* $88D3: 85 */ nes_instruction_boundary(0x88D3, 3); nes_write(0x25, g_cpu.A);
label_88D5:;
    /* $88D5: A9 */ nes_instruction_boundary(0x88D5, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_88D7:;
    /* $88D7: E9 */ nes_instruction_boundary(0x88D7, 2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88D9:;
    /* $88D9: 85 */ nes_instruction_boundary(0x88D9, 3); nes_write(0x26, g_cpu.A);
label_88DB:;
    /* $88DB: A9 */ nes_instruction_boundary(0x88DB, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_88DD:;
    /* $88DD: 85 */ nes_instruction_boundary(0x88DD, 3); nes_write(0x23, g_cpu.A);
label_88DF:;
    /* $88DF: A5 */ nes_instruction_boundary(0x88DF, 3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_88E1:;
    /* $88E1: 10 */ nes_instruction_boundary(0x88E1, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_88E5; }
label_88E3:;
    /* $88E3: C6 */ nes_instruction_boundary(0x88E3, 5); { uint16_t a=0x23; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_88E5:;
    /* $88E5: A5 */ nes_instruction_boundary(0x88E5, 3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_88E7:;
    /* $88E7: 18 */ nes_instruction_boundary(0x88E7, 2); g_cpu.C = 0;
label_88E8:;
    /* $88E8: 65 */ nes_instruction_boundary(0x88E8, 3); { uint8_t m=nes_read(0x24); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88EA:;
    /* $88EA: 9D */ nes_instruction_boundary(0x88EA, 5); nes_write((0x0120 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88ED:;
    /* $88ED: A5 */ nes_instruction_boundary(0x88ED, 3); g_cpu.A = nes_read(0x26); FLAG_NZ(g_cpu.A);
label_88EF:;
    /* $88EF: 65 */ nes_instruction_boundary(0x88EF, 3); { uint8_t m=nes_read(0x23); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88F1:;
    /* $88F1: 29 */ nes_instruction_boundary(0x88F1, 2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_88F3:;
    /* $88F3: 09 */ nes_instruction_boundary(0x88F3, 2); g_cpu.A |= 0xA8; FLAG_NZ(g_cpu.A);
label_88F5:;
    /* $88F5: 9D */ nes_instruction_boundary(0x88F5, 5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88F8:;
    /* $88F8: CA */ nes_instruction_boundary(0x88F8, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_88F9:;
    /* $88F9: 10 */ nes_instruction_boundary(0x88F9, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x88C5, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_88C5;
    }
label_88FB:;
    /* $88FB: 86 */ nes_instruction_boundary(0x88FB, 3); nes_write(0x4F, g_cpu.X);
label_88FD:;
    /* $88FD: 60 */ nes_instruction_boundary(0x88FD, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88B4_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88B4_b6");
#endif
    func_88B4_b6_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_88C3_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88C3_b6");
#endif
    func_88B4_b6_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8971_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8971_b6");
#endif
label_8971:;
    /* $8971: A5 */ nes_instruction_boundary(0x8971, 3); g_cpu.A = nes_read(0x52); FLAG_NZ(g_cpu.A);
label_8973:;
    /* $8973: 29 */ nes_instruction_boundary(0x8973, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8975:;
    /* $8975: A8 */ nes_instruction_boundary(0x8975, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8976:;
    /* $8976: B9 */ nes_instruction_boundary(0x8976, 4); g_cpu.A = nes_read((0xE6B8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8979:;
    /* $8979: 85 */ nes_instruction_boundary(0x8979, 3); nes_write(0x39, g_cpu.A);
label_897B:;
    /* $897B: B9 */ nes_instruction_boundary(0x897B, 4); g_cpu.A = nes_read((0xE6A8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_897E:;
    /* $897E: 85 */ nes_instruction_boundary(0x897E, 3); nes_write(0x37, g_cpu.A);
label_8980:;
    /* $8980: 60 */ nes_instruction_boundary(0x8980, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8931_b6_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8944;
    }
label_8931:;
    /* $8931: AD */ nes_instruction_boundary(0x8931, 4); g_cpu.A = nes_read(0x03AD); FLAG_NZ(g_cpu.A);
label_8934:;
    /* $8934: D0 */ nes_instruction_boundary(0x8934, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_893F; }
label_8936:;
    /* $8936: A4 */ nes_instruction_boundary(0x8936, 3); g_cpu.Y = nes_read(0x4E); FLAG_NZ(g_cpu.Y);
label_8938:;
    /* $8938: C0 */ nes_instruction_boundary(0x8938, 2); { int r=g_cpu.Y-0x07; g_cpu.C=(g_cpu.Y>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_893A:;
    /* $893A: F0 */ nes_instruction_boundary(0x893A, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8947; }
label_893C:;
    /* $893C: C8 */ nes_instruction_boundary(0x893C, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_893D:;
    /* $893D: 84 */ nes_instruction_boundary(0x893D, 3); nes_write(0x4E, g_cpu.Y);
label_893F:;
    /* $893F: A4 */ nes_instruction_boundary(0x893F, 3); g_cpu.Y = nes_read(0x4E); FLAG_NZ(g_cpu.Y);
label_8941:;
    /* $8941: B9 */ nes_instruction_boundary(0x8941, 4); g_cpu.A = nes_read((0x895C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8944:;
    /* $8944: 85 */ nes_instruction_boundary(0x8944, 3); nes_write(0x3A, g_cpu.A);
label_8946:;
    /* $8946: 60 */ nes_instruction_boundary(0x8946, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8947:;
    /* $8947: A9 */ nes_instruction_boundary(0x8947, 2); g_cpu.A = 0xCF; FLAG_NZ(g_cpu.A);
label_8949:;
    /* $8949: 85 */ nes_instruction_boundary(0x8949, 3); nes_write(0x3B, g_cpu.A);
label_894B:;
    /* $894B: A9 */ nes_instruction_boundary(0x894B, 2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_894D:;
    /* $894D: 85 */ nes_instruction_boundary(0x894D, 3); nes_write(0x3C, g_cpu.A);
label_894F:;
    /* $894F: A9 */ nes_instruction_boundary(0x894F, 2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_8951:;
    /* $8951: 85 */ nes_instruction_boundary(0x8951, 3); nes_write(0x3D, g_cpu.A);
label_8953:;
    /* $8953: A9 */ nes_instruction_boundary(0x8953, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8955:;
    /* $8955: 85 */ nes_instruction_boundary(0x8955, 3); nes_write(0x4D, g_cpu.A);
label_8957:;
    /* $8957: 85 */ nes_instruction_boundary(0x8957, 3); nes_write(0x4E, g_cpu.A);
label_8959:;
    /* $8959: 85 */ nes_instruction_boundary(0x8959, 3); nes_write(0x3A, g_cpu.A);
label_895B:;
    /* $895B: 60 */ nes_instruction_boundary(0x895B, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8931_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8931_b6");
#endif
    func_8931_b6_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8944_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8944_b6");
#endif
    func_8931_b6_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8964_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8964_b6");
#endif
label_8964:;
    /* $8964: A5 */ nes_instruction_boundary(0x8964, 3); g_cpu.A = nes_read(0x54); FLAG_NZ(g_cpu.A);
label_8966:;
    /* $8966: D0 */ nes_instruction_boundary(0x8966, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8970; }
label_8968:;
    /* $8968: E6 */ nes_instruction_boundary(0x8968, 5); { uint16_t a=0x3A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_896A:;
    /* $896A: A5 */ nes_instruction_boundary(0x896A, 3); g_cpu.A = nes_read(0x3A); FLAG_NZ(g_cpu.A);
label_896C:;
    /* $896C: 29 */ nes_instruction_boundary(0x896C, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_896E:;
    /* $896E: 85 */ nes_instruction_boundary(0x896E, 3); nes_write(0x3A, g_cpu.A);
label_8970:;
    /* $8970: 60 */ nes_instruction_boundary(0x8970, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8981_b6_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8989;
        case 2: goto label_8987;
        case 3: goto label_8999;
    }
label_8981:;
    /* $8981: A5 */ nes_instruction_boundary(0x8981, 3); g_cpu.A = nes_read(0x52); FLAG_NZ(g_cpu.A);
label_8983:;
    /* $8983: 29 */ nes_instruction_boundary(0x8983, 2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8985:;
    /* $8985: D0 */ nes_instruction_boundary(0x8985, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_89A3; }
label_8987:;
    /* $8987: A9 */ nes_instruction_boundary(0x8987, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_8989:;
    /* $8989: 85 */ nes_instruction_boundary(0x8989, 3); nes_write(0x2B, g_cpu.A);
label_898B:;
    /* $898B: A9 */ nes_instruction_boundary(0x898B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_898D:;
    /* $898D: 85 */ nes_instruction_boundary(0x898D, 3); nes_write(0x2C, g_cpu.A);
label_898F:;
    /* $898F: 20 */ nes_instruction_boundary(0x898F, 6); nes_dispatch_call(0x8895, 6);
label_8992:;
    /* $8992: A5 */ nes_instruction_boundary(0x8992, 3); g_cpu.A = nes_read(0x4E); FLAG_NZ(g_cpu.A);
label_8994:;
    /* $8994: 4A */ nes_instruction_boundary(0x8994, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8995:;
    /* $8995: 4A */ nes_instruction_boundary(0x8995, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8996:;
    /* $8996: 29 */ nes_instruction_boundary(0x8996, 2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_8998:;
    /* $8998: A8 */ nes_instruction_boundary(0x8998, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8999:;
    /* $8999: B9 */ nes_instruction_boundary(0x8999, 4); g_cpu.A = nes_read((0x0100 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_899C:;
    /* $899C: 85 */ nes_instruction_boundary(0x899C, 3); nes_write(0x37, g_cpu.A);
label_899E:;
    /* $899E: B9 */ nes_instruction_boundary(0x899E, 4); g_cpu.A = nes_read((0x0120 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89A1:;
    /* $89A1: 85 */ nes_instruction_boundary(0x89A1, 3); nes_write(0x39, g_cpu.A);
label_89A3:;
    /* $89A3: 60 */ nes_instruction_boundary(0x89A3, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8981_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8981_b6");
#endif
    func_8981_b6_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8989_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8989_b6");
#endif
    func_8981_b6_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8987_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8987_b6");
#endif
    func_8981_b6_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8999_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8999_b6");
#endif
    func_8981_b6_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8415_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8415_b6");
#endif
label_8415:;
    /* $8415: A4 */ nes_instruction_boundary(0x8415, 3); g_cpu.Y = nes_read(0x95); FLAG_NZ(g_cpu.Y);
label_8417:;
    /* $8417: 30 */ nes_instruction_boundary(0x8417, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8430; }
label_8419:;
    /* $8419: A9 */ nes_instruction_boundary(0x8419, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_841B:;
    /* $841B: 85 */ nes_instruction_boundary(0x841B, 3); nes_write(0x33, g_cpu.A);
label_841D:;
    /* $841D: B9 */ nes_instruction_boundary(0x841D, 4); g_cpu.A = nes_read((0x00B0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8420:;
    /* $8420: 30 */ nes_instruction_boundary(0x8420, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_842D; }
label_8422:;
    /* $8422: 98 */ nes_instruction_boundary(0x8422, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8423:;
    /* $8423: A4 */ nes_instruction_boundary(0x8423, 3); g_cpu.Y = nes_read(0x33); FLAG_NZ(g_cpu.Y);
label_8425:;
    /* $8425: 99 */ nes_instruction_boundary(0x8425, 5); nes_write((0x0026 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8428:;
    /* $8428: A8 */ nes_instruction_boundary(0x8428, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8429:;
    /* $8429: C6 */ nes_instruction_boundary(0x8429, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_842B:;
    /* $842B: F0 */ nes_instruction_boundary(0x842B, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8430; }
label_842D:;
    /* $842D: 88 */ nes_instruction_boundary(0x842D, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_842E:;
    /* $842E: 10 */ nes_instruction_boundary(0x842E, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x841D, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_841D;
    }
label_8430:;
    /* $8430: 60 */ nes_instruction_boundary(0x8430, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B79_b6_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8BA9;
    }
label_8B79:;
    /* $8B79: 8A */ nes_instruction_boundary(0x8B79, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8B7A:;
    /* $8B7A: 4A */ nes_instruction_boundary(0x8B7A, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8B7B:;
    /* $8B7B: A8 */ nes_instruction_boundary(0x8B7B, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8B7C:;
    /* $8B7C: B1 */ nes_instruction_boundary(0x8B7C, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B7E:;
    /* $8B7E: A0 */ nes_instruction_boundary(0x8B7E, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8B80:;
    /* $8B80: 84 */ nes_instruction_boundary(0x8B80, 3); nes_write(0x26, g_cpu.Y);
label_8B82:;
    /* $8B82: 0A */ nes_instruction_boundary(0x8B82, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8B83:;
    /* $8B83: 26 */ nes_instruction_boundary(0x8B83, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B85:;
    /* $8B85: 0A */ nes_instruction_boundary(0x8B85, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8B86:;
    /* $8B86: 26 */ nes_instruction_boundary(0x8B86, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B88:;
    /* $8B88: 65 */ nes_instruction_boundary(0x8B88, 3); { uint8_t m=nes_read(0x69); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B8A:;
    /* $8B8A: 85 */ nes_instruction_boundary(0x8B8A, 3); nes_write(0x25, g_cpu.A);
label_8B8C:;
    /* $8B8C: A5 */ nes_instruction_boundary(0x8B8C, 3); g_cpu.A = nes_read(0x26); FLAG_NZ(g_cpu.A);
label_8B8E:;
    /* $8B8E: 65 */ nes_instruction_boundary(0x8B8E, 3); { uint8_t m=nes_read(0x6A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B90:;
    /* $8B90: 85 */ nes_instruction_boundary(0x8B90, 3); nes_write(0x26, g_cpu.A);
label_8B92:;
    /* $8B92: B1 */ nes_instruction_boundary(0x8B92, 5); g_cpu.A = nes_read((nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B94:;
    /* $8B94: 9D */ nes_instruction_boundary(0x8B94, 5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8B97:;
    /* $8B97: C8 */ nes_instruction_boundary(0x8B97, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8B98:;
    /* $8B98: B1 */ nes_instruction_boundary(0x8B98, 5); g_cpu.A = nes_read((nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B9A:;
    /* $8B9A: 9D */ nes_instruction_boundary(0x8B9A, 5); nes_write((0x0101 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8B9D:;
    /* $8B9D: C8 */ nes_instruction_boundary(0x8B9D, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8B9E:;
    /* $8B9E: B1 */ nes_instruction_boundary(0x8B9E, 5); g_cpu.A = nes_read((nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BA0:;
    /* $8BA0: 9D */ nes_instruction_boundary(0x8BA0, 5); nes_write((0x0120 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BA3:;
    /* $8BA3: C8 */ nes_instruction_boundary(0x8BA3, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8BA4:;
    /* $8BA4: B1 */ nes_instruction_boundary(0x8BA4, 5); g_cpu.A = nes_read((nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BA6:;
    /* $8BA6: 9D */ nes_instruction_boundary(0x8BA6, 5); nes_write((0x0121 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BA9:;
    /* $8BA9: CA */ nes_instruction_boundary(0x8BA9, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8BAA:;
    /* $8BAA: CA */ nes_instruction_boundary(0x8BAA, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8BAB:;
    /* $8BAB: 10 */ nes_instruction_boundary(0x8BAB, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x8B79, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8B79;
    }
label_8BAD:;
    /* $8BAD: A5 */ nes_instruction_boundary(0x8BAD, 3); g_cpu.A = nes_read(0x29); FLAG_NZ(g_cpu.A);
label_8BAF:;
    /* $8BAF: A0 */ nes_instruction_boundary(0x8BAF, 2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_8BB1:;
    /* $8BB1: 84 */ nes_instruction_boundary(0x8BB1, 3); nes_write(0x56, g_cpu.Y);
label_8BB3:;
    /* $8BB3: 29 */ nes_instruction_boundary(0x8BB3, 2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_8BB5:;
    /* $8BB5: 0A */ nes_instruction_boundary(0x8BB5, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8BB6:;
    /* $8BB6: 26 */ nes_instruction_boundary(0x8BB6, 5); { uint16_t a=0x56; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BB8:;
    /* $8BB8: 0A */ nes_instruction_boundary(0x8BB8, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8BB9:;
    /* $8BB9: 26 */ nes_instruction_boundary(0x8BB9, 5); { uint16_t a=0x56; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BBB:;
    /* $8BBB: 85 */ nes_instruction_boundary(0x8BBB, 3); nes_write(0x55, g_cpu.A);
label_8BBD:;
    /* $8BBD: 60 */ nes_instruction_boundary(0x8BBD, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B79_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B79_b6");
#endif
    func_8B79_b6_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8BA9_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BA9_b6");
#endif
    func_8B79_b6_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89DD_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89DD_b6");
#endif
label_89DD:;
    /* $89DD: 86 */ nes_instruction_boundary(0x89DD, 3); nes_write(0x33, g_cpu.X);
label_89DF:;
    /* $89DF: 8A */ nes_instruction_boundary(0x89DF, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_89E0:;
    /* $89E0: 0A */ nes_instruction_boundary(0x89E0, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_89E1:;
    /* $89E1: 65 */ nes_instruction_boundary(0x89E1, 3); { uint8_t m=nes_read(0x33); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_89E3:;
    /* $89E3: A8 */ nes_instruction_boundary(0x89E3, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_89E4:;
    /* $89E4: A9 */ nes_instruction_boundary(0x89E4, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_89E6:;
    /* $89E6: 85 */ nes_instruction_boundary(0x89E6, 3); nes_write(0x33, g_cpu.A);
label_89E8:;
    /* $89E8: B9 */ nes_instruction_boundary(0x89E8, 4); g_cpu.A = nes_read((0x0169 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89EB:;
    /* $89EB: 38 */ nes_instruction_boundary(0x89EB, 2); g_cpu.C = 1;
label_89EC:;
    /* $89EC: FD */ nes_instruction_boundary(0x89EC, 4); { uint8_t m=nes_read((0x03AD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_89EF:;
    /* $89EF: 10 */ nes_instruction_boundary(0x89EF, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_89F3; }
label_89F1:;
    /* $89F1: A9 */ nes_instruction_boundary(0x89F1, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_89F3:;
    /* $89F3: 99 */ nes_instruction_boundary(0x89F3, 5); nes_write((0x0182 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_89F6:;
    /* $89F6: C8 */ nes_instruction_boundary(0x89F6, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_89F7:;
    /* $89F7: C6 */ nes_instruction_boundary(0x89F7, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89F9:;
    /* $89F9: D0 */ nes_instruction_boundary(0x89F9, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0x89E8, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_89E8;
    }
label_89FB:;
    /* $89FB: BD */ nes_instruction_boundary(0x89FB, 4); g_cpu.A = nes_read((0x03AD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89FE:;
    /* $89FE: 38 */ nes_instruction_boundary(0x89FE, 2); g_cpu.C = 1;
label_89FF:;
    /* $89FF: E9 */ nes_instruction_boundary(0x89FF, 2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A01:;
    /* $8A01: 9D */ nes_instruction_boundary(0x8A01, 5); nes_write((0x03AD + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A04:;
    /* $8A04: 10 */ nes_instruction_boundary(0x8A04, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8A0B; }
label_8A06:;
    /* $8A06: A9 */ nes_instruction_boundary(0x8A06, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A08:;
    /* $8A08: 9D */ nes_instruction_boundary(0x8A08, 5); nes_write((0x03A9 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A0B:;
    /* $8A0B: 60 */ nes_instruction_boundary(0x8A0B, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A009_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A009_b6");
#endif
label_A009:;
    /* $A009: 4C */ nes_instruction_boundary(0xA009, 3); nes_cpu_instruction_boundary(0x8015, 2); call_by_address_tail(0x8015, 6); return;
}

