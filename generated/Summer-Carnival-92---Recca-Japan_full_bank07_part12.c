/* Summer-Carnival-92---Recca-Japan_full_bank07_part12.c — PRG bank 7 function bodies (sub-part 12).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella Summer-Carnival-92---Recca-Japan_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "Summer-Carnival-92---Recca-Japan_full_decls.h"

void func_EC24(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EC24");
#endif
label_EC24:;
    /* $EC24: 04 */ nes_instruction_boundary(0xEC24, 3); (void)nes_read(0x99); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_EC26:;
    /* $EC26: D1 */ nes_instruction_boundary(0xEC26, 5); { uint8_t m=nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_EC28:;
    /* $EC28: 30 */ nes_instruction_boundary(0xEC28, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_EC2F; }
label_EC2A:;
    /* $EC2A: 18 */ nes_instruction_boundary(0xEC2A, 2); g_cpu.C = 0;
label_EC2B:;
    /* $EC2B: 69 */ nes_instruction_boundary(0xEC2B, 2); { uint16_t r = g_cpu.A + 0x18 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x18); g_cpu.A=r&0xFF; }
label_EC2D:;
    /* $EC2D: D0 */ nes_instruction_boundary(0xEC2D, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EC32; }
label_EC2F:;
    /* $EC2F: 38 */ nes_instruction_boundary(0xEC2F, 2); g_cpu.C = 1;
label_EC30:;
    /* $EC30: E9 */ nes_instruction_boundary(0xEC30, 2); { uint8_t m=0x18; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_EC32:;
    /* $EC32: 99 */ nes_instruction_boundary(0xEC32, 5); nes_write((0x0611 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EC35:;
    /* $EC35: 60 */ nes_instruction_boundary(0xEC35, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D8F0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D8F2;
    }
label_D8F0:;
    /* $D8F0: 55 */ nes_instruction_boundary(0xD8F0, 4); g_cpu.A ^= nes_read((0xA5 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_D8F2:;
    /* $D8F2: 59 */ nes_instruction_boundary(0xD8F2, 4); g_cpu.A ^= nes_read((0x5685 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D8F5:;
    /* $D8F5: A9 */ nes_instruction_boundary(0xD8F5, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_D8F7:;
    /* $D8F7: 85 */ nes_instruction_boundary(0xD8F7, 3); nes_write(0x57, g_cpu.A);
label_D8F9:;
    /* $D8F9: 20 */ nes_instruction_boundary(0xD8F9, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E417(); g_code_window_base = _swb; }
label_D8FC:;
    /* $D8FC: A5 */ nes_instruction_boundary(0xD8FC, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_D8FE:;
    /* $D8FE: 18 */ nes_instruction_boundary(0xD8FE, 2); g_cpu.C = 0;
label_D8FF:;
    /* $D8FF: 69 */ nes_instruction_boundary(0xD8FF, 2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_D901:;
    /* $D901: 85 */ nes_instruction_boundary(0xD901, 3); nes_write(0x61, g_cpu.A);
label_D903:;
    /* $D903: 90 */ nes_instruction_boundary(0xD903, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D907; }
label_D905:;
    /* $D905: E6 */ nes_instruction_boundary(0xD905, 5); { uint16_t a=0x62; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D907:;
    /* $D907: C6 */ nes_instruction_boundary(0xD907, 5); { uint16_t a=0x39; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D909:;
    /* $D909: D0 */ nes_instruction_boundary(0xD909, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x18AE), -1); return; }
label_D90B:;
    /* $D90B: A9 */ nes_instruction_boundary(0xD90B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D90D:;
    /* $D90D: 85 */ nes_instruction_boundary(0xD90D, 3); nes_write(0x59, g_cpu.A);
label_D90F:;
    /* $D90F: 68 */ nes_instruction_boundary(0xD90F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D910:;
    /* $D910: 85 */ nes_instruction_boundary(0xD910, 3); nes_write(0x61, g_cpu.A);
label_D912:;
    /* $D912: A8 */ nes_instruction_boundary(0xD912, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_D913:;
    /* $D913: 68 */ nes_instruction_boundary(0xD913, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D914:;
    /* $D914: 85 */ nes_instruction_boundary(0xD914, 3); nes_write(0x62, g_cpu.A);
label_D916:;
    /* $D916: 20 */ nes_instruction_boundary(0xD916, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_D919:;
    /* $D919: 85 */ nes_instruction_boundary(0xD919, 3); nes_write(0x3A, g_cpu.A);
label_D91B:;
    /* $D91B: A9 */ nes_instruction_boundary(0xD91B, 2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_D91D:;
    /* $D91D: 85 */ nes_instruction_boundary(0xD91D, 3); nes_write(0x37, g_cpu.A);
label_D91F:;
    /* $D91F: 60 */ nes_instruction_boundary(0xD91F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D8F0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D8F0");
#endif
    func_D8F0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D8F2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D8F2");
#endif
    func_D8F0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E73F_body(int _entry) {
    switch (_entry) {
        case 1: goto label_E75C;
    }
label_E73F:;
    /* $E73F: 97 */ nes_instruction_boundary(0xE73F, 4); nes_write((0xE7 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_E741:;
    /* $E741: A6 */ nes_instruction_boundary(0xE741, 3); g_cpu.X = nes_read(0x4C); FLAG_NZ(g_cpu.X);
label_E743:;
    /* $E743: F0 */ nes_instruction_boundary(0xE743, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E751; }
label_E745:;
    /* $E745: 1D */ nes_instruction_boundary(0xE745, 4); g_cpu.A |= nes_read((0xE799 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E748:;
    /* $E748: 8D */ nes_instruction_boundary(0xE748, 4); nes_write(0x2006, g_cpu.A);
label_E74B:;
    /* $E74B: BD */ nes_instruction_boundary(0xE74B, 4); g_cpu.A = nes_read((0xE7A9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E74E:;
    /* $E74E: 8D */ nes_instruction_boundary(0xE74E, 4); nes_write(0x2006, g_cpu.A);
label_E751:;
    /* $E751: B9 */ nes_instruction_boundary(0xE751, 4); g_cpu.A = nes_read((0x0120 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E754:;
    /* $E754: 8D */ nes_instruction_boundary(0xE754, 4); nes_write(0x2005, g_cpu.A);
label_E757:;
    /* $E757: A9 */ nes_instruction_boundary(0xE757, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E759:;
    /* $E759: 8D */ nes_instruction_boundary(0xE759, 4); nes_write(0x2005, g_cpu.A);
label_E75C:;
    /* $E75C: A5 */ nes_instruction_boundary(0xE75C, 3); g_cpu.A = nes_read(0x4C); FLAG_NZ(g_cpu.A);
label_E75E:;
    /* $E75E: C9 */ nes_instruction_boundary(0xE75E, 2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_E760:;
    /* $E760: D0 */ nes_instruction_boundary(0xE760, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E76C; }
label_E762:;
    /* $E762: A9 */ nes_instruction_boundary(0xE762, 2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_E764:;
    /* $E764: 85 */ nes_instruction_boundary(0xE764, 3); nes_write(0x3E, g_cpu.A);
label_E766:;
    /* $E766: A9 */ nes_instruction_boundary(0xE766, 2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_E768:;
    /* $E768: 85 */ nes_instruction_boundary(0xE768, 3); nes_write(0x3F, g_cpu.A);
label_E76A:;
    /* $E76A: E6 */ nes_instruction_boundary(0xE76A, 5); { uint16_t a=0x4E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E76C:;
    /* $E76C: E6 */ nes_instruction_boundary(0xE76C, 5); { uint16_t a=0x60; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E76E:;
    /* $E76E: E6 */ nes_instruction_boundary(0xE76E, 5); { uint16_t a=0x4C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E770:;
    /* $E770: 68 */ nes_instruction_boundary(0xE770, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E771:;
    /* $E771: A8 */ nes_instruction_boundary(0xE771, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E772:;
    /* $E772: 68 */ nes_instruction_boundary(0xE772, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E773:;
    /* $E773: AA */ nes_instruction_boundary(0xE773, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E774:;
    /* $E774: 68 */ nes_instruction_boundary(0xE774, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E775:;
    /* $E775: 40 */ nes_instruction_boundary(0xE775, 6); /* RTI */ g_rti_source = 0xE775; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E73F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E73F");
#endif
    func_E73F_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E75C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E75C");
#endif
    func_E73F_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_FC33(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FC33");
#endif
label_FC33:;
    /* $FC33: E4 */ nes_instruction_boundary(0xFC33, 3); { uint8_t m=nes_read(0xF2); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FC35:;
    /* $FC35: D4 */ nes_instruction_boundary(0xFC35, 4); (void)nes_read((0xF4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FC37:;
    /* $FC37: C0 */ nes_instruction_boundary(0xFC37, 2); { int r=g_cpu.Y-0xFF; g_cpu.C=(g_cpu.Y>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_FC39:;
    /* $FC39: 10 */ nes_instruction_boundary(0xFC39, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1C1D), -1); return; }
label_FC3B:;
    /* $FC3B: E4 */ nes_instruction_boundary(0xFC3B, 3); { uint8_t m=nes_read(0xF0); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FC3D:;
    /* $FC3D: C0 */ nes_instruction_boundary(0xFC3D, 2); { int r=g_cpu.Y-0xEA; g_cpu.C=(g_cpu.Y>=0xEA)?1:0; FLAG_NZ(r&0xFF); }
label_FC3F:;
    /* $FC3F: E4 */ nes_instruction_boundary(0xFC3F, 3); { uint8_t m=nes_read(0xFF); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FC41:;
    /* $FC41: 10 */ nes_instruction_boundary(0xFC41, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xFC37, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_FC37;
    }
label_FC43:;
    /* $FC43: D4 */ nes_instruction_boundary(0xFC43, 4); (void)nes_read((0xE6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FC45:;
    /* $FC45: D4 */ nes_instruction_boundary(0xFC45, 4); (void)nes_read((0xFC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FC47:;
    /* $FC47: F6 */ nes_instruction_boundary(0xFC47, 6); { uint16_t a=(0xE6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FC49:;
    /* $FC49: E4 */ nes_instruction_boundary(0xFC49, 3); { uint8_t m=nes_read(0xB0); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FC4B:;
    /* $FC4B: E6 */ nes_instruction_boundary(0xFC4B, 5); { uint16_t a=0xD4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FC4D:;
    /* $FC4D: EC */ nes_instruction_boundary(0xFC4D, 4); { uint8_t m=nes_read(0xE4D4); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FC50:;
    /* $FC50: FF */ nes_instruction_boundary(0xFC50, 7); { uint16_t a=(0xC010 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FC53:;
    /* $FC53: E0 */ nes_instruction_boundary(0xFC53, 2); { int r=g_cpu.X-0xF6; g_cpu.C=(g_cpu.X>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_FC55:;
    /* $FC55: F0 */ nes_instruction_boundary(0xFC55, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1C2B), -1); return; }
label_FC57:;
    /* $FC57: FF */ nes_instruction_boundary(0xFC57, 7); { uint16_t a=(0xFA10 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FC5A:;
    /* $FC5A: D4 */ nes_instruction_boundary(0xFC5A, 4); (void)nes_read((0xE6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FC5C:;
    /* $FC5C: D4 */ nes_instruction_boundary(0xFC5C, 4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FC5E:;
    /* $FC5E: D4 */ nes_instruction_boundary(0xFC5E, 4); (void)nes_read((0xFC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FC60:;
    /* $FC60: D4 */ nes_instruction_boundary(0xFC60, 4); (void)nes_read((0xF2 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FC62:;
    /* $FC62: E2 */ nes_instruction_boundary(0xFC62, 2); /* NOP */
label_FC64:;
    /* $FC64: FF */ nes_instruction_boundary(0xFC64, 7); { uint16_t a=(0xE610 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FC67:;
    /* $FC67: E4 */ nes_instruction_boundary(0xFC67, 3); { uint8_t m=nes_read(0xEC); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FC69:;
    /* $FC69: EE */ nes_instruction_boundary(0xFC69, 6); { uint16_t a=0xF4D4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FC6C:;
    /* $FC6C: F2 */ nes_instruction_boundary(0xFC6C, 2); /* ILLEGAL $F2 — skip 1 */
label_FC6D:;
    /* $FC6D: F6 */ nes_instruction_boundary(0xFC6D, 6); { uint16_t a=(0xB6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FC6F:;
    /* $FC6F: E6 */ nes_instruction_boundary(0xFC6F, 5); { uint16_t a=0xF6; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FC71:;
    /* $FC71: EC */ nes_instruction_boundary(0xFC71, 4); { uint8_t m=nes_read(0x10FF); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FC74:;
    /* $FC74: E0 */ nes_instruction_boundary(0xFC74, 2); { int r=g_cpu.X-0xC0; g_cpu.C=(g_cpu.X>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_FC76:;
    /* $FC76: DA */ nes_instruction_boundary(0xFC76, 2); /* NOP */
label_FC77:;
    /* $FC77: E2 */ nes_instruction_boundary(0xFC77, 2); /* NOP */
label_FC79:;
    /* $FC79: EC */ nes_instruction_boundary(0xFC79, 4); { uint8_t m=nes_read(0xB6DA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_FC7C:;
    /* $FC7C: F2 */ nes_instruction_boundary(0xFC7C, 2); /* ILLEGAL $F2 — skip 1 */
label_FC7D:;
    /* $FC7D: FF */ nes_instruction_boundary(0xFC7D, 7); { uint16_t a=(0xF40C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FC80:;
    /* $FC80: E2 */ nes_instruction_boundary(0xFC80, 2); /* NOP */
label_FC82:;
    /* $FC82: 00 */ nes_instruction_boundary(0xFC82, 7); nes_brk_executed(0xFC82); return;
}

void func_F031(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F031");
#endif
label_F031:;
    /* $F031: 24 */ nes_instruction_boundary(0xF031, 3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_F033:;
    /* $F033: 26 */ nes_instruction_boundary(0xF033, 5); { uint16_t a=0x24; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F035:;
    /* $F035: 85 */ nes_instruction_boundary(0xF035, 3); nes_write(0x23, g_cpu.A);
label_F037:;
    /* $F037: B9 */ nes_instruction_boundary(0xF037, 4); g_cpu.A = nes_read((0xF0E2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F03A:;
    /* $F03A: 85 */ nes_instruction_boundary(0xF03A, 3); nes_write(0x26, g_cpu.A);
label_F03C:;
    /* $F03C: B9 */ nes_instruction_boundary(0xF03C, 4); g_cpu.A = nes_read((0xF0E1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F03F:;
    /* $F03F: 0A */ nes_instruction_boundary(0xF03F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F040:;
    /* $F040: 26 */ nes_instruction_boundary(0xF040, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F042:;
    /* $F042: 0A */ nes_instruction_boundary(0xF042, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F043:;
    /* $F043: 26 */ nes_instruction_boundary(0xF043, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F045:;
    /* $F045: 0A */ nes_instruction_boundary(0xF045, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F046:;
    /* $F046: 26 */ nes_instruction_boundary(0xF046, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F048:;
    /* $F048: 85 */ nes_instruction_boundary(0xF048, 3); nes_write(0x25, g_cpu.A);
label_F04A:;
    /* $F04A: A4 */ nes_instruction_boundary(0xF04A, 3); g_cpu.Y = nes_read(0x34); FLAG_NZ(g_cpu.Y);
label_F04C:;
    /* $F04C: 60 */ nes_instruction_boundary(0xF04C, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E460_body(int _entry) {
    switch (_entry) {
        case 1: goto label_E48E;
        case 2: goto label_E488;
        case 3: goto label_E48A;
    }
label_E460:;
    /* $E460: 56 */ nes_instruction_boundary(0xE460, 6); { uint16_t a=(0x8D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E462:;
    /* $E462: 06 */ nes_instruction_boundary(0xE462, 5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E464:;
    /* $E464: A5 */ nes_instruction_boundary(0xE464, 3); g_cpu.A = nes_read(0x55); FLAG_NZ(g_cpu.A);
label_E466:;
    /* $E466: 8D */ nes_instruction_boundary(0xE466, 4); nes_write(0x2006, g_cpu.A);
label_E469:;
    /* $E469: A0 */ nes_instruction_boundary(0xE469, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E46B:;
    /* $E46B: B1 */ nes_instruction_boundary(0xE46B, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E46D:;
    /* $E46D: C9 */ nes_instruction_boundary(0xE46D, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_E46F:;
    /* $E46F: F0 */ nes_instruction_boundary(0xE46F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E477; }
label_E471:;
    /* $E471: 8D */ nes_instruction_boundary(0xE471, 4); nes_write(0x2007, g_cpu.A);
label_E474:;
    /* $E474: C8 */ nes_instruction_boundary(0xE474, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E475:;
    /* $E475: D0 */ nes_instruction_boundary(0xE475, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xE46B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E46B;
    }
label_E477:;
    /* $E477: A5 */ nes_instruction_boundary(0xE477, 3); g_cpu.A = nes_read(0x55); FLAG_NZ(g_cpu.A);
label_E479:;
    /* $E479: 18 */ nes_instruction_boundary(0xE479, 2); g_cpu.C = 0;
label_E47A:;
    /* $E47A: 69 */ nes_instruction_boundary(0xE47A, 2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_E47C:;
    /* $E47C: 48 */ nes_instruction_boundary(0xE47C, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_E47D:;
    /* $E47D: A5 */ nes_instruction_boundary(0xE47D, 3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_E47F:;
    /* $E47F: 69 */ nes_instruction_boundary(0xE47F, 2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_E481:;
    /* $E481: 8D */ nes_instruction_boundary(0xE481, 4); nes_write(0x2006, g_cpu.A);
label_E484:;
    /* $E484: 68 */ nes_instruction_boundary(0xE484, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E485:;
    /* $E485: 8D */ nes_instruction_boundary(0xE485, 4); nes_write(0x2006, g_cpu.A);
label_E488:;
    /* $E488: A0 */ nes_instruction_boundary(0xE488, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E48A:;
    /* $E48A: B1 */ nes_instruction_boundary(0xE48A, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E48C:;
    /* $E48C: C9 */ nes_instruction_boundary(0xE48C, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_E48E:;
    /* $E48E: F0 */ nes_instruction_boundary(0xE48E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E49C; }
label_E490:;
    /* $E490: C9 */ nes_instruction_boundary(0xE490, 2); { int r=g_cpu.A-0x00; g_cpu.C=(g_cpu.A>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_E492:;
    /* $E492: F0 */ nes_instruction_boundary(0xE492, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E496; }
label_E494:;
    /* $E494: 09 */ nes_instruction_boundary(0xE494, 2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_E496:;
    /* $E496: 8D */ nes_instruction_boundary(0xE496, 4); nes_write(0x2007, g_cpu.A);
label_E499:;
    /* $E499: C8 */ nes_instruction_boundary(0xE499, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E49A:;
    /* $E49A: D0 */ nes_instruction_boundary(0xE49A, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xE48A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E48A;
    }
label_E49C:;
    /* $E49C: 60 */ nes_instruction_boundary(0xE49C, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E460(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E460");
#endif
    func_E460_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E48E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E48E");
#endif
    func_E460_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E488(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E488");
#endif
    func_E460_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E48A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E48A");
#endif
    func_E460_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ED33(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ED33");
#endif
label_ED33:;
    /* $ED33: 31 */ nes_instruction_boundary(0xED33, 5); g_cpu.A &= nes_read((nes_read16zp(0x07) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ED35:;
    /* $ED35: 60 */ nes_instruction_boundary(0xED35, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DE29_body(int _entry) {
    switch (_entry) {
        case 1: goto label_DE30;
    }
label_DE29:;
    /* $DE29: 80 */ nes_instruction_boundary(0xDE29, 2); /* NOP */
label_DE2B:;
    /* $DE2B: 46 */ nes_instruction_boundary(0xDE2B, 5); { uint16_t a=0x8D; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DE2D:;
    /* $DE2D: 01 */ nes_instruction_boundary(0xDE2D, 6); g_cpu.A |= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_DE2F:;
    /* $DE2F: E8 */ nes_instruction_boundary(0xDE2F, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DE30:;
    /* $DE30: 8E */ nes_instruction_boundary(0xDE30, 4); nes_write(0x8000, g_cpu.X);
label_DE33:;
    /* $DE33: A5 */ nes_instruction_boundary(0xDE33, 3); g_cpu.A = nes_read(0x47); FLAG_NZ(g_cpu.A);
label_DE35:;
    /* $DE35: 8D */ nes_instruction_boundary(0xDE35, 4); nes_write(0x8001, g_cpu.A);
label_DE38:;
    /* $DE38: 60 */ nes_instruction_boundary(0xDE38, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DE29(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DE29");
#endif
    func_DE29_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DE30(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DE30");
#endif
    func_DE29_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CD11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CD11");
#endif
label_CD11:;
    /* $CD11: 97 */ nes_instruction_boundary(0xCD11, 4); nes_write((0xD1 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_CD13:;
    /* $CD13: B0 */ nes_instruction_boundary(0xCD13, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_CD19; }
label_CD15:;
    /* $CD15: 4A */ nes_instruction_boundary(0xCD15, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CD16:;
    /* $CD16: 4A */ nes_instruction_boundary(0xCD16, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CD17:;
    /* $CD17: 4A */ nes_instruction_boundary(0xCD17, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CD18:;
    /* $CD18: 4A */ nes_instruction_boundary(0xCD18, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CD19:;
    /* $CD19: 29 */ nes_instruction_boundary(0xCD19, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_CD1B:;
    /* $CD1B: A0 */ nes_instruction_boundary(0xCD1B, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_CD1D:;
    /* $CD1D: C9 */ nes_instruction_boundary(0xCD1D, 2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_CD1F:;
    /* $CD1F: 90 */ nes_instruction_boundary(0xCD1F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CD24; }
label_CD21:;
    /* $CD21: 09 */ nes_instruction_boundary(0xCD21, 2); g_cpu.A |= 0xF0; FLAG_NZ(g_cpu.A);
label_CD23:;
    /* $CD23: 88 */ nes_instruction_boundary(0xCD23, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_CD24:;
    /* $CD24: 84 */ nes_instruction_boundary(0xCD24, 3); nes_write(0x0F, g_cpu.Y);
label_CD26:;
    /* $CD26: 0A */ nes_instruction_boundary(0xCD26, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_CD27:;
    /* $CD27: 26 */ nes_instruction_boundary(0xCD27, 5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CD29:;
    /* $CD29: 85 */ nes_instruction_boundary(0xCD29, 3); nes_write(0x0E, g_cpu.A);
label_CD2B:;
    /* $CD2B: A4 */ nes_instruction_boundary(0xCD2B, 3); g_cpu.Y = nes_read(0x0C); FLAG_NZ(g_cpu.Y);
label_CD2D:;
    /* $CD2D: A6 */ nes_instruction_boundary(0xCD2D, 3); g_cpu.X = nes_read(0x0B); FLAG_NZ(g_cpu.X);
label_CD2F:;
    /* $CD2F: 60 */ nes_instruction_boundary(0xCD2F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EA3A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EA3A");
#endif
label_EA3A:;
    /* $EA3A: ED */ nes_instruction_boundary(0xEA3A, 4); { uint8_t m=nes_read(0xB560); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_EA3D:;
    /* $EA3D: B1 */ nes_instruction_boundary(0xEA3D, 5); g_cpu.A = nes_read((nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EA3F:;
    /* $EA3F: 10 */ nes_instruction_boundary(0xEA3F, 2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x09D6), -1); return; }
label_EA41:;
    /* $EA41: B1 */ nes_instruction_boundary(0xEA41, 5); g_cpu.A = nes_read((nes_read16zp(0x4C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EA43:;
    /* $EA43: 89 */ nes_instruction_boundary(0xEA43, 2); /* NOP */
label_EA45:;
    /* $EA45: BD */ nes_instruction_boundary(0xEA45, 4); g_cpu.A = nes_read((0x0491 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EA48:;
    /* $EA48: C9 */ nes_instruction_boundary(0xEA48, 2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_EA4A:;
    /* $EA4A: D0 */ nes_instruction_boundary(0xEA4A, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EA59; }
label_EA4C:;
    /* $EA4C: 8A */ nes_instruction_boundary(0xEA4C, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_EA4D:;
    /* $EA4D: 48 */ nes_instruction_boundary(0xEA4D, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_EA4E:;
    /* $EA4E: A0 */ nes_instruction_boundary(0xEA4E, 2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_EA50:;
    /* $EA50: 20 */ nes_instruction_boundary(0xEA50, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA5C(); g_code_window_base = _swb; }
label_EA53:;
    /* $EA53: E8 */ nes_instruction_boundary(0xEA53, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EA54:;
    /* $EA54: 88 */ nes_instruction_boundary(0xEA54, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_EA55:;
    /* $EA55: D0 */ nes_instruction_boundary(0xEA55, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xEA50, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EA50;
    }
label_EA57:;
    /* $EA57: 68 */ nes_instruction_boundary(0xEA57, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_EA58:;
    /* $EA58: AA */ nes_instruction_boundary(0xEA58, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_EA59:;
    /* $EA59: 4C */ nes_instruction_boundary(0xEA59, 3); nes_cpu_instruction_boundary(0xEA8C, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA8C(); g_code_window_base = _swb; } return;
}

void func_F01A_body(int _entry) {
    switch (_entry) {
        case 1: goto label_F01E;
    }
label_F01A:;
    /* $F01A: 26 */ nes_instruction_boundary(0xF01A, 5); { uint16_t a=0x85; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F01C:;
    /* $F01C: 25 */ nes_instruction_boundary(0xF01C, 3); g_cpu.A &= nes_read(0xA4); FLAG_NZ(g_cpu.A);
label_F01E:;
    /* $F01E: 34 */ nes_instruction_boundary(0xF01E, 4); (void)nes_read((0x60 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F020:;
    /* $F020: 84 */ nes_instruction_boundary(0xF020, 3); nes_write(0x34, g_cpu.Y);
label_F022:;
    /* $F022: 0A */ nes_instruction_boundary(0xF022, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F023:;
    /* $F023: A8 */ nes_instruction_boundary(0xF023, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F024:;
    /* $F024: B9 */ nes_instruction_boundary(0xF024, 4); g_cpu.A = nes_read((0xF0A2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F027:;
    /* $F027: 85 */ nes_instruction_boundary(0xF027, 3); nes_write(0x24, g_cpu.A);
label_F029:;
    /* $F029: B9 */ nes_instruction_boundary(0xF029, 4); g_cpu.A = nes_read((0xF0A1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F02C:;
    /* $F02C: 0A */ nes_instruction_boundary(0xF02C, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F02D:;
    /* $F02D: 26 */ nes_instruction_boundary(0xF02D, 5); { uint16_t a=0x24; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F02F:;
    /* $F02F: 0A */ nes_instruction_boundary(0xF02F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F030:;
    /* $F030: 26 */ nes_instruction_boundary(0xF030, 5); { uint16_t a=0x24; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F032:;
    /* $F032: 0A */ nes_instruction_boundary(0xF032, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F033:;
    /* $F033: 26 */ nes_instruction_boundary(0xF033, 5); { uint16_t a=0x24; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F035:;
    /* $F035: 85 */ nes_instruction_boundary(0xF035, 3); nes_write(0x23, g_cpu.A);
label_F037:;
    /* $F037: B9 */ nes_instruction_boundary(0xF037, 4); g_cpu.A = nes_read((0xF0E2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F03A:;
    /* $F03A: 85 */ nes_instruction_boundary(0xF03A, 3); nes_write(0x26, g_cpu.A);
label_F03C:;
    /* $F03C: B9 */ nes_instruction_boundary(0xF03C, 4); g_cpu.A = nes_read((0xF0E1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F03F:;
    /* $F03F: 0A */ nes_instruction_boundary(0xF03F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F040:;
    /* $F040: 26 */ nes_instruction_boundary(0xF040, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F042:;
    /* $F042: 0A */ nes_instruction_boundary(0xF042, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F043:;
    /* $F043: 26 */ nes_instruction_boundary(0xF043, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F045:;
    /* $F045: 0A */ nes_instruction_boundary(0xF045, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F046:;
    /* $F046: 26 */ nes_instruction_boundary(0xF046, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F048:;
    /* $F048: 85 */ nes_instruction_boundary(0xF048, 3); nes_write(0x25, g_cpu.A);
label_F04A:;
    /* $F04A: A4 */ nes_instruction_boundary(0xF04A, 3); g_cpu.Y = nes_read(0x34); FLAG_NZ(g_cpu.Y);
label_F04C:;
    /* $F04C: 60 */ nes_instruction_boundary(0xF04C, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F01A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F01A");
#endif
    func_F01A_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F01E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F01E");
#endif
    func_F01A_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F13F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F13F");
#endif
label_F13F:;
    /* $F13F: 56 */ nes_instruction_boundary(0xF13F, 6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_F141:;
    /* $F141: 4C */ nes_instruction_boundary(0xF141, 3); nes_cpu_instruction_boundary(0x44FF, 2); call_by_address_tail(0x44FF, -1); return;
}

void func_EE00_body(int _entry) {
    switch (_entry) {
        case 1: goto label_EE07;
        case 2: goto label_EE0E;
        case 3: goto label_EE02;
        case 4: goto label_EE10;
        case 5: goto label_EE05;
        case 6: goto label_EE09;
        case 7: goto label_EE0C;
    }
label_EE00:;
    /* $EE00: E1 */ nes_instruction_boundary(0xEE00, 6); { uint8_t m=nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_EE02:;
    /* $EE02: 7E */ nes_instruction_boundary(0xEE02, 7); { uint16_t a=(0x21C9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EE05:;
    /* $EE05: D0 */ nes_instruction_boundary(0xEE05, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_EE10; }
label_EE07:;
    /* $EE07: A9 */ nes_instruction_boundary(0xEE07, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_EE09:;
    /* $EE09: 8D */ nes_instruction_boundary(0xEE09, 4); nes_write(0x01B6, g_cpu.A);
label_EE0C:;
    /* $EE0C: A9 */ nes_instruction_boundary(0xEE0C, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EE0E:;
    /* $EE0E: 85 */ nes_instruction_boundary(0xEE0E, 3); nes_write(0x85, g_cpu.A);
label_EE10:;
    /* $EE10: 60 */ nes_instruction_boundary(0xEE10, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EE00(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE00");
#endif
    func_EE00_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EE07(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE07");
#endif
    func_EE00_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EE0E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE0E");
#endif
    func_EE00_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EE02(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE02");
#endif
    func_EE00_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EE10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE10");
#endif
    func_EE00_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EE05(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE05");
#endif
    func_EE00_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EE09(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE09");
#endif
    func_EE00_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EE0C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE0C");
#endif
    func_EE00_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F94D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F94D");
#endif
label_F94D:;
    /* $F94D: D1 */ nes_instruction_boundary(0xF94D, 5); { uint8_t m=nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F94F:;
    /* $F94F: 30 */ nes_instruction_boundary(0xF94F, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F953; }
label_F951:;
    /* $F951: D0 */ nes_instruction_boundary(0xF951, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F978; }
label_F953:;
    /* $F953: 20 */ nes_instruction_boundary(0xF953, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F9A0(); g_code_window_base = _swb; }
label_F956:;
    /* $F956: C4 */ nes_instruction_boundary(0xF956, 3); { uint8_t m=nes_read(0x92); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F958:;
    /* $F958: D0 */ nes_instruction_boundary(0xF958, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1947), -1); return; }
label_F95A:;
    /* $F95A: A9 */ nes_instruction_boundary(0xF95A, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_F95C:;
    /* $F95C: 9D */ nes_instruction_boundary(0xF95C, 5); nes_write((0x01AE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F95F:;
    /* $F95F: BD */ nes_instruction_boundary(0xF95F, 4); g_cpu.A = nes_read((0x01AA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F962:;
    /* $F962: 29 */ nes_instruction_boundary(0xF962, 2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_F964:;
    /* $F964: C9 */ nes_instruction_boundary(0xF964, 2); { int r=g_cpu.A-0x40; g_cpu.C=(g_cpu.A>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_F966:;
    /* $F966: F0 */ nes_instruction_boundary(0xF966, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F99D; }
label_F968:;
    /* $F968: B0 */ nes_instruction_boundary(0xF968, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F96E; }
label_F96A:;
    /* $F96A: A9 */ nes_instruction_boundary(0xF96A, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_F96C:;
    /* $F96C: D0 */ nes_instruction_boundary(0xF96C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F970; }
label_F96E:;
    /* $F96E: A9 */ nes_instruction_boundary(0xF96E, 2); g_cpu.A = 0xFC; FLAG_NZ(g_cpu.A);
label_F970:;
    /* $F970: 18 */ nes_instruction_boundary(0xF970, 2); g_cpu.C = 0;
label_F971:;
    /* $F971: 7D */ nes_instruction_boundary(0xF971, 4); { uint8_t m=nes_read((0x01AA + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F974:;
    /* $F974: 9D */ nes_instruction_boundary(0xF974, 5); nes_write((0x01AA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F977:;
    /* $F977: 60 */ nes_instruction_boundary(0xF977, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F978:;
    /* $F978: 98 */ nes_instruction_boundary(0xF978, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_F979:;
    /* $F979: 9D */ nes_instruction_boundary(0xF979, 5); nes_write((0x01AE + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F97C:;
    /* $F97C: 20 */ nes_instruction_boundary(0xF97C, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F9A0(); g_code_window_base = _swb; }
label_F97F:;
    /* $F97F: 84 */ nes_instruction_boundary(0xF97F, 3); nes_write(0x92, g_cpu.Y);
label_F981:;
    /* $F981: A8 */ nes_instruction_boundary(0xF981, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F982:;
    /* $F982: BD */ nes_instruction_boundary(0xF982, 4); g_cpu.A = nes_read((0x019E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F985:;
    /* $F985: 85 */ nes_instruction_boundary(0xF985, 3); nes_write(0x2B, g_cpu.A);
label_F987:;
    /* $F987: BD */ nes_instruction_boundary(0xF987, 4); g_cpu.A = nes_read((0x01A2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F98A:;
    /* $F98A: 85 */ nes_instruction_boundary(0xF98A, 3); nes_write(0x2C, g_cpu.A);
label_F98C:;
    /* $F98C: BD */ nes_instruction_boundary(0xF98C, 4); g_cpu.A = nes_read((0x01AA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F98F:;
    /* $F98F: 85 */ nes_instruction_boundary(0xF98F, 3); nes_write(0x2D, g_cpu.A);
label_F991:;
    /* $F991: 20 */ nes_instruction_boundary(0xF991, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F9A8(); g_code_window_base = _swb; }
label_F994:;
    /* $F994: 0A */ nes_instruction_boundary(0xF994, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F995:;
    /* $F995: 0A */ nes_instruction_boundary(0xF995, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_F996:;
    /* $F996: 18 */ nes_instruction_boundary(0xF996, 2); g_cpu.C = 0;
label_F997:;
    /* $F997: 7D */ nes_instruction_boundary(0xF997, 4); { uint8_t m=nes_read((0x01AA + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F99A:;
    /* $F99A: 9D */ nes_instruction_boundary(0xF99A, 5); nes_write((0x01AA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F99D:;
    /* $F99D: 60 */ nes_instruction_boundary(0xF99D, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E9AD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E9AD");
#endif
label_E9AD:;
    /* $E9AD: 15 */ nes_instruction_boundary(0xE9AD, 4); g_cpu.A |= nes_read((0xA9 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_E9AF:;
    /* $E9AF: 00 */ nes_instruction_boundary(0xE9AF, 7); nes_brk_executed(0xE9AF); return;
}

void func_EEFC_body(int _entry) {
    switch (_entry) {
        case 1: goto label_EF00;
        case 2: goto label_EEFF;
        case 3: goto label_EF02;
        case 4: goto label_EF04;
        case 5: goto label_EF03;
    }
label_EEFC:;
    /* $EEFC: EE */ nes_instruction_boundary(0xEEFC, 6); { uint16_t a=0x9848; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EEFF:;
    /* $EEFF: 18 */ nes_instruction_boundary(0xEEFF, 2); g_cpu.C = 0;
label_EF00:;
    /* $EF00: 69 */ nes_instruction_boundary(0xEF00, 2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_EF02:;
    /* $EF02: A8 */ nes_instruction_boundary(0xEF02, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_EF03:;
    /* $EF03: 68 */ nes_instruction_boundary(0xEF03, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_EF04:;
    /* $EF04: 18 */ nes_instruction_boundary(0xEF04, 2); g_cpu.C = 0;
label_EF05:;
    /* $EF05: 69 */ nes_instruction_boundary(0xEF05, 2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_EF07:;
    /* $EF07: 60 */ nes_instruction_boundary(0xEF07, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EEFC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EEFC");
#endif
    func_EEFC_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EF00(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EF00");
#endif
    func_EEFC_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EEFF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EEFF");
#endif
    func_EEFC_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EF02(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EF02");
#endif
    func_EEFC_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EF04(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EF04");
#endif
    func_EEFC_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EF03(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EF03");
#endif
    func_EEFC_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F0AD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F0AD");
#endif
label_F0AD:;
    /* $F0AD: 4A */ nes_instruction_boundary(0xF0AD, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F0AE:;
    /* $F0AE: 00 */ nes_instruction_boundary(0xF0AE, 7); nes_brk_executed(0xF0AE); return;
}

void func_D845(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D845");
#endif
label_D845:;
    /* $D845: 64 */ nes_instruction_boundary(0xD845, 3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D847:;
    /* $D847: 00 */ nes_instruction_boundary(0xD847, 7); nes_brk_executed(0xD847); return;
}

void func_D405_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D407;
    }
label_D405:;
    /* $D405: E5 */ nes_instruction_boundary(0xD405, 3); { uint8_t m=nes_read(0xA9); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_D407:;
    /* $D407: 00 */ nes_instruction_boundary(0xD407, 7); nes_brk_executed(0xD407); return;
}

void func_D405(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D405");
#endif
    func_D405_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D407(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D407");
#endif
    func_D405_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_FF9D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FF9D");
#endif
label_FF9D:;
    /* $FF9D: 69 */ nes_instruction_boundary(0xFF9D, 2); { uint16_t r = g_cpu.A + 0xD2 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xD2); g_cpu.A=r&0xFF; }
label_FF9F:;
    /* $FF9F: 00 */ nes_instruction_boundary(0xFF9F, 7); nes_brk_executed(0xFF9F); return;
}

void func_AE80_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE80_b7");
#endif
label_AE80:;
    /* $AE80: C9 */ nes_instruction_boundary(0xAE80, 2); { int r=g_cpu.A-0x25; g_cpu.C=(g_cpu.A>=0x25)?1:0; FLAG_NZ(r&0xFF); }
label_AE82:;
    /* $AE82: F0 */ nes_instruction_boundary(0xAE82, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AEA6; }
label_AE84:;
    /* $AE84: C9 */ nes_instruction_boundary(0xAE84, 2); { int r=g_cpu.A-0x22; g_cpu.C=(g_cpu.A>=0x22)?1:0; FLAG_NZ(r&0xFF); }
label_AE86:;
    /* $AE86: D0 */ nes_instruction_boundary(0xAE86, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AEB3; }
label_AE88:;
    /* $AE88: A2 */ nes_instruction_boundary(0xAE88, 2); g_cpu.X = 0x06; FLAG_NZ(g_cpu.X);
label_AE8A:;
    /* $AE8A: EC */ nes_instruction_boundary(0xAE8A, 4); { uint8_t m=nes_read(0x07FB); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AE8D:;
    /* $AE8D: F0 */ nes_instruction_boundary(0xAE8D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AE9B; }
label_AE8F:;
    /* $AE8F: B5 */ nes_instruction_boundary(0xAE8F, 4); g_cpu.A = nes_read((0x78 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE91:;
    /* $AE91: C9 */ nes_instruction_boundary(0xAE91, 2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_AE93:;
    /* $AE93: D0 */ nes_instruction_boundary(0xAE93, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AEB3; }
label_AE95:;
    /* $AE95: CA */ nes_instruction_boundary(0xAE95, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AE96:;
    /* $AE96: EC */ nes_instruction_boundary(0xAE96, 4); { uint8_t m=nes_read(0x07FB); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AE99:;
    /* $AE99: D0 */ nes_instruction_boundary(0xAE99, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xAE8F, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AE8F;
    }
label_AE9B:;
    /* $AE9B: B5 */ nes_instruction_boundary(0xAE9B, 4); g_cpu.A = nes_read((0x78 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE9D:;
    /* $AE9D: CD */ nes_instruction_boundary(0xAE9D, 4); { uint8_t m=nes_read(0x07FC); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AEA0:;
    /* $AEA0: F0 */ nes_instruction_boundary(0xAEA0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AEB3; }
label_AEA2:;
    /* $AEA2: B0 */ nes_instruction_boundary(0xAEA2, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AEB3; }
label_AEA4:;
    /* $AEA4: 90 */ nes_instruction_boundary(0xAEA4, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AEAB; }
label_AEA6:;
    /* $AEA6: A9 */ nes_instruction_boundary(0xAEA6, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AEA8:;
    /* $AEA8: 8D */ nes_instruction_boundary(0xAEA8, 4); nes_write(0x01B6, g_cpu.A);
label_AEAB:;
    /* $AEAB: A9 */ nes_instruction_boundary(0xAEAB, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AEAD:;
    /* $AEAD: 85 */ nes_instruction_boundary(0xAEAD, 3); nes_write(0x85, g_cpu.A);
label_AEAF:;
    /* $AEAF: A9 */ nes_instruction_boundary(0xAEAF, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_AEB1:;
    /* $AEB1: 85 */ nes_instruction_boundary(0xAEB1, 3); nes_write(0x86, g_cpu.A);
label_AEB3:;
    /* $AEB3: 60 */ nes_instruction_boundary(0xAEB3, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE02_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE02_b7");
#endif
label_AE02:;
    /* $AE02: 7E */ nes_instruction_boundary(0xAE02, 7); { uint16_t a=(0x21C9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE05:;
    /* $AE05: D0 */ nes_instruction_boundary(0xAE05, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AE10; }
label_AE07:;
    /* $AE07: A9 */ nes_instruction_boundary(0xAE07, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AE09:;
    /* $AE09: 8D */ nes_instruction_boundary(0xAE09, 4); nes_write(0x01B6, g_cpu.A);
label_AE0C:;
    /* $AE0C: A9 */ nes_instruction_boundary(0xAE0C, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE0E:;
    /* $AE0E: 85 */ nes_instruction_boundary(0xAE0E, 3); nes_write(0x85, g_cpu.A);
label_AE10:;
    /* $AE10: 60 */ nes_instruction_boundary(0xAE10, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8DAD_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8DCA;
    }
label_8DAD:;
    /* $8DAD: 0A */ nes_instruction_boundary(0x8DAD, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8DAE:;
    /* $8DAE: 7D */ nes_instruction_boundary(0x8DAE, 4); { uint8_t m=nes_read((0x0355 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DB1:;
    /* $8DB1: 9D */ nes_instruction_boundary(0x8DB1, 5); nes_write((0x0355 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8DB4:;
    /* $8DB4: 18 */ nes_instruction_boundary(0x8DB4, 2); g_cpu.C = 0;
label_8DB5:;
    /* $8DB5: 98 */ nes_instruction_boundary(0x8DB5, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8DB6:;
    /* $8DB6: 65 */ nes_instruction_boundary(0x8DB6, 3); { uint8_t m=nes_read(0x0A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DB8:;
    /* $8DB8: 9D */ nes_instruction_boundary(0x8DB8, 5); nes_write((0x0341 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8DBB:;
    /* $8DBB: A9 */ nes_instruction_boundary(0x8DBB, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8DBD:;
    /* $8DBD: 65 */ nes_instruction_boundary(0x8DBD, 3); { uint8_t m=nes_read(0x0B); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DBF:;
    /* $8DBF: 9D */ nes_instruction_boundary(0x8DBF, 5); nes_write((0x034B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8DC2:;
    /* $8DC2: BD */ nes_instruction_boundary(0x8DC2, 4); g_cpu.A = nes_read((0xCDD3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8DC5:;
    /* $8DC5: 30 */ nes_instruction_boundary(0x8DC5, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8DCA; }
label_8DC7:;
    /* $8DC7: 9D */ nes_instruction_boundary(0x8DC7, 5); nes_write((0x0373 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8DCA:;
    /* $8DCA: BD */ nes_instruction_boundary(0x8DCA, 4); g_cpu.A = nes_read((0xCDDD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8DCD:;
    /* $8DCD: 30 */ nes_instruction_boundary(0x8DCD, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8DD2; }
label_8DCF:;
    /* $8DCF: 9D */ nes_instruction_boundary(0x8DCF, 5); nes_write((0x0369 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8DD2:;
    /* $8DD2: 60 */ nes_instruction_boundary(0x8DD2, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8DAD_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DAD_b7");
#endif
    func_8DAD_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8DCA_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DCA_b7");
#endif
    func_8DAD_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A903_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A909;
    }
label_A903:;
    /* $A903: 20 */ nes_instruction_boundary(0xA903, 6); nes_dispatch_call(0x058E, -1);
label_A906:;
    /* $A906: 20 */ nes_instruction_boundary(0xA906, 6); nes_dispatch_call(0x134C, -1);
label_A909:;
    /* $A909: E6 */ nes_instruction_boundary(0xA909, 5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A90B:;
    /* $A90B: 00 */ nes_instruction_boundary(0xA90B, 7); nes_brk_executed(0xA90B); return;
}

void func_A903_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A903_b7");
#endif
    func_A903_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A909_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A909_b7");
#endif
    func_A903_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9E9_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E9_b7");
#endif
label_A9E9:;
    /* $A9E9: 60 */ nes_instruction_boundary(0xA9E9, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_990E_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9913;
        case 2: goto label_9911;
    }
label_990E:;
    /* $990E: 59 */ nes_instruction_boundary(0x990E, 4); g_cpu.A ^= nes_read((0x8568 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9911:;
    /* $9911: 61 */ nes_instruction_boundary(0x9911, 6); { uint8_t m=nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9913:;
    /* $9913: 68 */ nes_instruction_boundary(0x9913, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9914:;
    /* $9914: 85 */ nes_instruction_boundary(0x9914, 3); nes_write(0x62, g_cpu.A);
label_9916:;
    /* $9916: 20 */ nes_instruction_boundary(0x9916, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_9919:;
    /* $9919: 85 */ nes_instruction_boundary(0x9919, 3); nes_write(0x3A, g_cpu.A);
label_991B:;
    /* $991B: A9 */ nes_instruction_boundary(0x991B, 2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_991D:;
    /* $991D: 85 */ nes_instruction_boundary(0x991D, 3); nes_write(0x37, g_cpu.A);
label_991F:;
    /* $991F: 60 */ nes_instruction_boundary(0x991F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_990E_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_990E_b7");
#endif
    func_990E_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9913_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9913_b7");
#endif
    func_990E_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9911_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9911_b7");
#endif
    func_990E_b7_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9CA_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9CA_b7");
#endif
label_A9CA:;
    /* $A9CA: B0 */ nes_instruction_boundary(0xA9CA, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A9CC; }
label_A9CC:;
    /* $A9CC: 10 */ nes_instruction_boundary(0xA9CC, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A9D1; }
label_A9CE:;
    /* $A9CE: 88 */ nes_instruction_boundary(0xA9CE, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A9CF:;
    /* $A9CF: 10 */ nes_instruction_boundary(0xA9CF, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x09C9), -1); return; }
label_A9D1:;
    /* $A9D1: 60 */ nes_instruction_boundary(0xA9D1, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A5E9_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5E9_b7");
#endif
label_A5E9:;
    /* $A5E9: 49 */ nes_instruction_boundary(0xA5E9, 2); g_cpu.A ^= 0x8D; FLAG_NZ(g_cpu.A);
label_A5EB:;
    /* $A5EB: 01 */ nes_instruction_boundary(0xA5EB, 6); g_cpu.A |= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A5ED:;
    /* $A5ED: C4 */ nes_instruction_boundary(0xA5ED, 3); { uint8_t m=nes_read(0x60); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5EF:;
    /* $A5EF: D0 */ nes_instruction_boundary(0xA5EF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05D8), -1); return; }
label_A5F1:;
    /* $A5F1: 60 */ nes_instruction_boundary(0xA5F1, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8B30_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8B30_b7");
#endif
label_8B30:;
    /* $8B30: A9 */ nes_instruction_boundary(0x8B30, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8B32:;
    /* $8B32: 8D */ nes_instruction_boundary(0x8B32, 4); nes_write(0x036D, g_cpu.A);
label_8B35:;
    /* $8B35: 20 */ nes_instruction_boundary(0x8B35, 6); nes_dispatch_call(0xCFF3, -1);
label_8B38:;
    /* $8B38: A9 */ nes_instruction_boundary(0x8B38, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8B3A:;
    /* $8B3A: 85 */ nes_instruction_boundary(0x8B3A, 3); nes_write(0x00, g_cpu.A);
label_8B3C:;
    /* $8B3C: A5 */ nes_instruction_boundary(0x8B3C, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_8B3E:;
    /* $8B3E: C9 */ nes_instruction_boundary(0x8B3E, 2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_8B40:;
    /* $8B40: F0 */ nes_instruction_boundary(0x8B40, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8B5F; }
label_8B42:;
    /* $8B42: 29 */ nes_instruction_boundary(0x8B42, 2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_8B44:;
    /* $8B44: C5 */ nes_instruction_boundary(0x8B44, 3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B46:;
    /* $8B46: 90 */ nes_instruction_boundary(0x8B46, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8B5B; }
label_8B48:;
    /* $8B48: 85 */ nes_instruction_boundary(0x8B48, 3); nes_write(0x02, g_cpu.A);
label_8B4A:;
    /* $8B4A: A5 */ nes_instruction_boundary(0x8B4A, 3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_8B4C:;
    /* $8B4C: 29 */ nes_instruction_boundary(0x8B4C, 2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_8B4E:;
    /* $8B4E: A2 */ nes_instruction_boundary(0x8B4E, 2); g_cpu.X = 0x09; FLAG_NZ(g_cpu.X);
label_8B50:;
    /* $8B50: 20 */ nes_instruction_boundary(0x8B50, 6); nes_dispatch_call(0xCF72, -1);
label_8B53:;
    /* $8B53: A9 */ nes_instruction_boundary(0x8B53, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8B55:;
    /* $8B55: 8D */ nes_instruction_boundary(0x8B55, 4); nes_write(0x0372, g_cpu.A);
label_8B58:;
    /* $8B58: 20 */ nes_instruction_boundary(0x8B58, 6); nes_dispatch_call(0xCFE4, -1);
label_8B5B:;
    /* $8B5B: A9 */ nes_instruction_boundary(0x8B5B, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8B5D:;
    /* $8B5D: 85 */ nes_instruction_boundary(0x8B5D, 3); nes_write(0x01, g_cpu.A);
label_8B5F:;
    /* $8B5F: A9 */ nes_instruction_boundary(0x8B5F, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B61:;
    /* $8B61: 85 */ nes_instruction_boundary(0x8B61, 3); nes_write(0x04, g_cpu.A);
label_8B63:;
    /* $8B63: 85 */ nes_instruction_boundary(0x8B63, 3); nes_write(0x03, g_cpu.A);
label_8B65:;
    /* $8B65: A2 */ nes_instruction_boundary(0x8B65, 2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_8B67:;
    /* $8B67: 20 */ nes_instruction_boundary(0x8B67, 6); nes_dispatch_call(0xCD30, -1);
label_8B6A:;
    /* $8B6A: A2 */ nes_instruction_boundary(0x8B6A, 2); g_cpu.X = 0x09; FLAG_NZ(g_cpu.X);
label_8B6C:;
    /* $8B6C: 20 */ nes_instruction_boundary(0x8B6C, 6); nes_dispatch_call(0xCD30, -1);
label_8B6F:;
    /* $8B6F: A5 */ nes_instruction_boundary(0x8B6F, 3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_8B71:;
    /* $8B71: 29 */ nes_instruction_boundary(0x8B71, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8B73:;
    /* $8B73: 85 */ nes_instruction_boundary(0x8B73, 3); nes_write(0x03, g_cpu.A);
label_8B75:;
    /* $8B75: AD */ nes_instruction_boundary(0x8B75, 4); g_cpu.A = nes_read(0x4015); FLAG_NZ(g_cpu.A);
label_8B78:;
    /* $8B78: 29 */ nes_instruction_boundary(0x8B78, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8B7A:;
    /* $8B7A: 05 */ nes_instruction_boundary(0x8B7A, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_8B7C:;
    /* $8B7C: A4 */ nes_instruction_boundary(0x8B7C, 3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_8B7E:;
    /* $8B7E: C0 */ nes_instruction_boundary(0x8B7E, 2); { int r=g_cpu.Y-0x10; g_cpu.C=(g_cpu.Y>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_8B80:;
    /* $8B80: 90 */ nes_instruction_boundary(0x8B80, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8BA9; }
label_8B82:;
    /* $8B82: A4 */ nes_instruction_boundary(0x8B82, 3); g_cpu.Y = nes_read(0x09); FLAG_NZ(g_cpu.Y);
label_8B84:;
    /* $8B84: C0 */ nes_instruction_boundary(0x8B84, 2); { int r=g_cpu.Y-0x54; g_cpu.C=(g_cpu.Y>=0x54)?1:0; FLAG_NZ(r&0xFF); }
label_8B86:;
    /* $8B86: F0 */ nes_instruction_boundary(0x8B86, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BA9; }
label_8B88:;
    /* $8B88: 29 */ nes_instruction_boundary(0x8B88, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8B8A:;
    /* $8B8A: 8D */ nes_instruction_boundary(0x8B8A, 4); nes_write(0x4015, g_cpu.A);
label_8B8D:;
    /* $8B8D: B9 */ nes_instruction_boundary(0x8B8D, 4); g_cpu.A = nes_read((0xD1D6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B90:;
    /* $8B90: 8D */ nes_instruction_boundary(0x8B90, 4); nes_write(0x4011, g_cpu.A);
label_8B93:;
    /* $8B93: B9 */ nes_instruction_boundary(0x8B93, 4); g_cpu.A = nes_read((0xD1D5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B96:;
    /* $8B96: 8D */ nes_instruction_boundary(0x8B96, 4); nes_write(0x4010, g_cpu.A);
label_8B99:;
    /* $8B99: B9 */ nes_instruction_boundary(0x8B99, 4); g_cpu.A = nes_read((0xD1D7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B9C:;
    /* $8B9C: 8D */ nes_instruction_boundary(0x8B9C, 4); nes_write(0x4012, g_cpu.A);
label_8B9F:;
    /* $8B9F: B9 */ nes_instruction_boundary(0x8B9F, 4); g_cpu.A = nes_read((0xD1D8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BA2:;
    /* $8BA2: 8D */ nes_instruction_boundary(0x8BA2, 4); nes_write(0x4013, g_cpu.A);
label_8BA5:;
    /* $8BA5: A5 */ nes_instruction_boundary(0x8BA5, 3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_8BA7:;
    /* $8BA7: 09 */ nes_instruction_boundary(0x8BA7, 2); g_cpu.A |= 0x10; FLAG_NZ(g_cpu.A);
label_8BA9:;
    /* $8BA9: 8D */ nes_instruction_boundary(0x8BA9, 4); nes_write(0x4015, g_cpu.A);
label_8BAC:;
    /* $8BAC: A2 */ nes_instruction_boundary(0x8BAC, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8BAE:;
    /* $8BAE: 86 */ nes_instruction_boundary(0x8BAE, 3); nes_write(0x0A, g_cpu.X);
label_8BB0:;
    /* $8BB0: 86 */ nes_instruction_boundary(0x8BB0, 3); nes_write(0x0B, g_cpu.X);
label_8BB2:;
    /* $8BB2: 20 */ nes_instruction_boundary(0x8BB2, 6); nes_dispatch_call(0xCC71, -1);
label_8BB5:;
    /* $8BB5: A4 */ nes_instruction_boundary(0x8BB5, 3); g_cpu.Y = nes_read(0x0C); FLAG_NZ(g_cpu.Y);
label_8BB7:;
    /* $8BB7: A6 */ nes_instruction_boundary(0x8BB7, 3); g_cpu.X = nes_read(0x0B); FLAG_NZ(g_cpu.X);
label_8BB9:;
    /* $8BB9: E0 */ nes_instruction_boundary(0x8BB9, 2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8BBB:;
    /* $8BBB: 90 */ nes_instruction_boundary(0x8BBB, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8BC1; }
label_8BBD:;
    /* $8BBD: A9 */ nes_instruction_boundary(0x8BBD, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8BBF:;
    /* $8BBF: D0 */ nes_instruction_boundary(0x8BBF, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BC6; }
label_8BC1:;
    /* $8BC1: 19 */ nes_instruction_boundary(0x8BC1, 4); g_cpu.A |= nes_read((0x0376 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BC4:;
    /* $8BC4: 09 */ nes_instruction_boundary(0x8BC4, 2); g_cpu.A |= 0x30; FLAG_NZ(g_cpu.A);
label_8BC6:;
    /* $8BC6: 9D */ nes_instruction_boundary(0x8BC6, 5); nes_write((0x4000 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BC9:;
    /* $8BC9: 20 */ nes_instruction_boundary(0x8BC9, 6); nes_dispatch_call(0xCCDA, -1);
label_8BCC:;
    /* $8BCC: A5 */ nes_instruction_boundary(0x8BCC, 3); g_cpu.A = nes_read(0x0D); FLAG_NZ(g_cpu.A);
label_8BCE:;
    /* $8BCE: C9 */ nes_instruction_boundary(0x8BCE, 2); { int r=g_cpu.A-0x54; g_cpu.C=(g_cpu.A>=0x54)?1:0; FLAG_NZ(r&0xFF); }
label_8BD0:;
    /* $8BD0: B0 */ nes_instruction_boundary(0x8BD0, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8BD5; }
label_8BD2:;
    /* $8BD2: 79 */ nes_instruction_boundary(0x8BD2, 4); { uint8_t m=nes_read((0x035F + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8BD5:;
    /* $8BD5: 0A */ nes_instruction_boundary(0x8BD5, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8BD6:;
    /* $8BD6: E0 */ nes_instruction_boundary(0x8BD6, 2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8BD8:;
    /* $8BD8: B0 */ nes_instruction_boundary(0x8BD8, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8BE2; }
label_8BDA:;
    /* $8BDA: 48 */ nes_instruction_boundary(0x8BDA, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8BDB:;
    /* $8BDB: B9 */ nes_instruction_boundary(0x8BDB, 4); g_cpu.A = nes_read((0x0362 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BDE:;
    /* $8BDE: 9D */ nes_instruction_boundary(0x8BDE, 5); nes_write((0x4001 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8BE1:;
    /* $8BE1: 68 */ nes_instruction_boundary(0x8BE1, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8BE2:;
    /* $8BE2: A8 */ nes_instruction_boundary(0x8BE2, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8BE3:;
    /* $8BE3: 18 */ nes_instruction_boundary(0x8BE3, 2); g_cpu.C = 0;
label_8BE4:;
    /* $8BE4: B9 */ nes_instruction_boundary(0x8BE4, 4); g_cpu.A = nes_read((0xD002 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BE7:;
    /* $8BE7: 65 */ nes_instruction_boundary(0x8BE7, 3); { uint8_t m=nes_read(0x0E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8BE9:;
    /* $8BE9: 85 */ nes_instruction_boundary(0x8BE9, 3); nes_write(0x10, g_cpu.A);
label_8BEB:;
    /* $8BEB: B9 */ nes_instruction_boundary(0x8BEB, 4); g_cpu.A = nes_read((0xD003 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8BEE:;
    /* $8BEE: 85 */ nes_instruction_boundary(0x8BEE, 3); nes_write(0x0D, g_cpu.A);
label_8BF0:;
    /* $8BF0: 65 */ nes_instruction_boundary(0x8BF0, 3); { uint8_t m=nes_read(0x0F); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8BF2:;
    /* $8BF2: C5 */ nes_instruction_boundary(0x8BF2, 3); { uint8_t m=nes_read(0x0D); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BF4:;
    /* $8BF4: F0 */ nes_instruction_boundary(0x8BF4, 2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8C04; }
label_8BF6:;
    /* $8BF6: A5 */ nes_instruction_boundary(0x8BF6, 3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_8BF8:;
    /* $8BF8: 29 */ nes_instruction_boundary(0x8BF8, 2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_8BFA:;
    /* $8BFA: F0 */ nes_instruction_boundary(0x8BFA, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BFE; }
label_8BFC:;
    /* $8BFC: A9 */ nes_instruction_boundary(0x8BFC, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8BFE:;
    /* $8BFE: 49 */ nes_instruction_boundary(0x8BFE, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_8C00:;
    /* $8C00: 85 */ nes_instruction_boundary(0x8C00, 3); nes_write(0x10, g_cpu.A);
label_8C02:;
    /* $8C02: A5 */ nes_instruction_boundary(0x8C02, 3); g_cpu.A = nes_read(0x0D); FLAG_NZ(g_cpu.A);
label_8C04:;
    /* $8C04: 85 */ nes_instruction_boundary(0x8C04, 3); nes_write(0x0F, g_cpu.A);
label_8C06:;
    /* $8C06: A5 */ nes_instruction_boundary(0x8C06, 3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_8C08:;
    /* $8C08: 9D */ nes_instruction_boundary(0x8C08, 5); nes_write((0x4002 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C0B:;
    /* $8C0B: 46 */ nes_instruction_boundary(0x8C0B, 5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8C0D:;
    /* $8C0D: 90 */ nes_instruction_boundary(0x8C0D, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8C18; }
label_8C0F:;
    /* $8C0F: A5 */ nes_instruction_boundary(0x8C0F, 3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_8C11:;
    /* $8C11: 29 */ nes_instruction_boundary(0x8C11, 2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_8C13:;
    /* $8C13: 09 */ nes_instruction_boundary(0x8C13, 2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_8C15:;
    /* $8C15: 9D */ nes_instruction_boundary(0x8C15, 5); nes_write((0x4003 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8C18:;
    /* $8C18: 18 */ nes_instruction_boundary(0x8C18, 2); g_cpu.C = 0;
label_8C19:;
    /* $8C19: A5 */ nes_instruction_boundary(0x8C19, 3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_8C1B:;
    /* $8C1B: 69 */ nes_instruction_boundary(0x8C1B, 2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_8C1D:;
    /* $8C1D: 85 */ nes_instruction_boundary(0x8C1D, 3); nes_write(0x0B, g_cpu.A);
label_8C1F:;
    /* $8C1F: E6 */ nes_instruction_boundary(0x8C1F, 5); { uint16_t a=0x0A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C21:;
    /* $8C21: A6 */ nes_instruction_boundary(0x8C21, 3); g_cpu.X = nes_read(0x0A); FLAG_NZ(g_cpu.X);
label_8C23:;
    /* $8C23: E0 */ nes_instruction_boundary(0x8C23, 2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8C25:;
    /* $8C25: 90 */ nes_instruction_boundary(0x8C25, 2); if (!g_cpu.C) {
    nes_instruction_boundary(0x8BB2, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8BB2;
    }
label_8C27:;
    /* $8C27: 20 */ nes_instruction_boundary(0x8C27, 6); nes_dispatch_call(0xCC71, -1);
label_8C2A:;
    /* $8C2A: 09 */ nes_instruction_boundary(0x8C2A, 2); g_cpu.A |= 0x30; FLAG_NZ(g_cpu.A);
label_8C2C:;
    /* $8C2C: 8D */ nes_instruction_boundary(0x8C2C, 4); nes_write(0x400C, g_cpu.A);
label_8C2F:;
    /* $8C2F: A4 */ nes_instruction_boundary(0x8C2F, 3); g_cpu.Y = nes_read(0x0D); FLAG_NZ(g_cpu.Y);
label_8C31:;
    /* $8C31: 8C */ nes_instruction_boundary(0x8C31, 4); nes_write(0x400E, g_cpu.Y);
label_8C34:;
    /* $8C34: 46 */ nes_instruction_boundary(0x8C34, 5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8C36:;
    /* $8C36: 90 */ nes_instruction_boundary(0x8C36, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8C3D; }
label_8C38:;
    /* $8C38: A9 */ nes_instruction_boundary(0x8C38, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8C3A:;
    /* $8C3A: 8D */ nes_instruction_boundary(0x8C3A, 4); nes_write(0x400F, g_cpu.A);
label_8C3D:;
    /* $8C3D: A2 */ nes_instruction_boundary(0x8C3D, 2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_8C3F:;
    /* $8C3F: A0 */ nes_instruction_boundary(0x8C3F, 2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_8C41:;
    /* $8C41: A9 */ nes_instruction_boundary(0x8C41, 2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8C43:;
    /* $8C43: 85 */ nes_instruction_boundary(0x8C43, 3); nes_write(0x0B, g_cpu.A);
label_8C45:;
    /* $8C45: A9 */ nes_instruction_boundary(0x8C45, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8C47:;
    /* $8C47: 85 */ nes_instruction_boundary(0x8C47, 3); nes_write(0x0A, g_cpu.A);
label_8C49:;
    /* $8C49: B9 */ nes_instruction_boundary(0x8C49, 4); g_cpu.A = nes_read((0x034B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C4C:;
    /* $8C4C: C9 */ nes_instruction_boundary(0x8C4C, 2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_8C4E:;
    /* $8C4E: 26 */ nes_instruction_boundary(0x8C4E, 5); { uint16_t a=0x0A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C50:;
    /* $8C50: 88 */ nes_instruction_boundary(0x8C50, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8C51:;
    /* $8C51: C6 */ nes_instruction_boundary(0x8C51, 5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C53:;
    /* $8C53: 10 */ nes_instruction_boundary(0x8C53, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x8C49, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8C49;
    }
label_8C55:;
    /* $8C55: A5 */ nes_instruction_boundary(0x8C55, 3); g_cpu.A = nes_read(0x0A); FLAG_NZ(g_cpu.A);
label_8C57:;
    /* $8C57: 0A */ nes_instruction_boundary(0x8C57, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8C58:;
    /* $8C58: C9 */ nes_instruction_boundary(0x8C58, 2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8C5A:;
    /* $8C5A: 6A */ nes_instruction_boundary(0x8C5A, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8C5B:;
    /* $8C5B: 95 */ nes_instruction_boundary(0x8C5B, 4); nes_write((0x11 + g_cpu.X) & 0xFF, g_cpu.A);
label_8C5D:;
    /* $8C5D: CA */ nes_instruction_boundary(0x8C5D, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8C5E:;
    /* $8C5E: 10 */ nes_instruction_boundary(0x8C5E, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x8C41, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8C41;
    }
label_8C60:;
    /* $8C60: 60 */ nes_instruction_boundary(0x8C60, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A910_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A910_b7");
#endif
label_A910:;
    /* $A910: 01 */ nes_instruction_boundary(0xA910, 6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A912:;
    /* $A912: 20 */ nes_instruction_boundary(0xA912, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E928(); g_code_window_base = _swb; }
label_A915:;
    /* $A915: 20 */ nes_instruction_boundary(0xA915, 6); nes_dispatch_call(0xDE5F, -1);
label_A918:;
    /* $A918: A2 */ nes_instruction_boundary(0xA918, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A91A:;
    /* $A91A: 8E */ nes_instruction_boundary(0xA91A, 4); nes_write(0x2005, g_cpu.X);
label_A91D:;
    /* $A91D: 8E */ nes_instruction_boundary(0xA91D, 4); nes_write(0x2005, g_cpu.X);
label_A920:;
    /* $A920: E6 */ nes_instruction_boundary(0xA920, 5); { uint16_t a=0x60; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A922:;
    /* $A922: 68 */ nes_instruction_boundary(0xA922, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A923:;
    /* $A923: A8 */ nes_instruction_boundary(0xA923, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A924:;
    /* $A924: 68 */ nes_instruction_boundary(0xA924, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A925:;
    /* $A925: AA */ nes_instruction_boundary(0xA925, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A926:;
    /* $A926: 68 */ nes_instruction_boundary(0xA926, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A927:;
    /* $A927: 40 */ nes_instruction_boundary(0xA927, 6); /* RTI */ g_rti_source = 0xA927; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A901_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A904;
    }
label_A901:;
    /* $A901: 8E */ nes_instruction_boundary(0xA901, 4); nes_write(0x2005, g_cpu.X);
label_A904:;
    /* $A904: 8E */ nes_instruction_boundary(0xA904, 4); nes_write(0x2005, g_cpu.X);
label_A907:;
    /* $A907: 4C */ nes_instruction_boundary(0xA907, 3); nes_cpu_instruction_boundary(0xE613, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E613(); g_code_window_base = _swb; } return;
}

void func_A901_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A901_b7");
#endif
    func_A901_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A904_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b7");
#endif
    func_A901_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B085_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B085_b7");
#endif
label_B085:;
    /* $B085: BD */ nes_instruction_boundary(0xB085, 4); g_cpu.A = nes_read((0xF0E1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B088:;
    /* $B088: 85 */ nes_instruction_boundary(0xB088, 3); nes_write(0x25, g_cpu.A);
label_B08A:;
    /* $B08A: BD */ nes_instruction_boundary(0xB08A, 4); g_cpu.A = nes_read((0xF0E2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B08D:;
    /* $B08D: 06 */ nes_instruction_boundary(0xB08D, 5); { uint16_t a=0x25; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B08F:;
    /* $B08F: 2A */ nes_instruction_boundary(0xB08F, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B090:;
    /* $B090: 06 */ nes_instruction_boundary(0xB090, 5); { uint16_t a=0x25; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B092:;
    /* $B092: 2A */ nes_instruction_boundary(0xB092, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B093:;
    /* $B093: 06 */ nes_instruction_boundary(0xB093, 5); { uint16_t a=0x25; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B095:;
    /* $B095: 2A */ nes_instruction_boundary(0xB095, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B096:;
    /* $B096: 99 */ nes_instruction_boundary(0xB096, 5); nes_write((0x0441 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B099:;
    /* $B099: A5 */ nes_instruction_boundary(0xB099, 3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_B09B:;
    /* $B09B: 99 */ nes_instruction_boundary(0xB09B, 5); nes_write((0x0431 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B09E:;
    /* $B09E: A6 */ nes_instruction_boundary(0xB09E, 3); g_cpu.X = nes_read(0x33); FLAG_NZ(g_cpu.X);
label_B0A0:;
    /* $B0A0: 60 */ nes_instruction_boundary(0xB0A0, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9999_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_99C1;
    }
label_9999:;
    /* $9999: 48 */ nes_instruction_boundary(0x9999, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_999A:;
    /* $999A: 85 */ nes_instruction_boundary(0x999A, 3); nes_write(0x23, g_cpu.A);
label_999C:;
    /* $999C: A9 */ nes_instruction_boundary(0x999C, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_999E:;
    /* $999E: 85 */ nes_instruction_boundary(0x999E, 3); nes_write(0x24, g_cpu.A);
label_99A0:;
    /* $99A0: 20 */ nes_instruction_boundary(0x99A0, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E417(); g_code_window_base = _swb; }
label_99A3:;
    /* $99A3: 20 */ nes_instruction_boundary(0x99A3, 6); nes_dispatch_call(0x8012, -1);
label_99A6:;
    /* $99A6: A9 */ nes_instruction_boundary(0x99A6, 2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_99A8:;
    /* $99A8: 85 */ nes_instruction_boundary(0x99A8, 3); nes_write(0x55, g_cpu.A);
label_99AA:;
    /* $99AA: A9 */ nes_instruction_boundary(0x99AA, 2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_99AC:;
    /* $99AC: 85 */ nes_instruction_boundary(0x99AC, 3); nes_write(0x56, g_cpu.A);
label_99AE:;
    /* $99AE: A9 */ nes_instruction_boundary(0x99AE, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_99B0:;
    /* $99B0: 85 */ nes_instruction_boundary(0x99B0, 3); nes_write(0x57, g_cpu.A);
label_99B2:;
    /* $99B2: A9 */ nes_instruction_boundary(0x99B2, 2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_99B4:;
    /* $99B4: 85 */ nes_instruction_boundary(0x99B4, 3); nes_write(0x23, g_cpu.A);
label_99B6:;
    /* $99B6: A9 */ nes_instruction_boundary(0x99B6, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_99B8:;
    /* $99B8: 85 */ nes_instruction_boundary(0x99B8, 3); nes_write(0x24, g_cpu.A);
label_99BA:;
    /* $99BA: 20 */ nes_instruction_boundary(0x99BA, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E417(); g_code_window_base = _swb; }
label_99BD:;
    /* $99BD: A9 */ nes_instruction_boundary(0x99BD, 2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_99BF:;
    /* $99BF: 85 */ nes_instruction_boundary(0x99BF, 3); nes_write(0x55, g_cpu.A);
label_99C1:;
    /* $99C1: A9 */ nes_instruction_boundary(0x99C1, 2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_99C3:;
    /* $99C3: 85 */ nes_instruction_boundary(0x99C3, 3); nes_write(0x56, g_cpu.A);
label_99C5:;
    /* $99C5: A9 */ nes_instruction_boundary(0x99C5, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_99C7:;
    /* $99C7: 85 */ nes_instruction_boundary(0x99C7, 3); nes_write(0x57, g_cpu.A);
label_99C9:;
    /* $99C9: A9 */ nes_instruction_boundary(0x99C9, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_99CB:;
    /* $99CB: 20 */ nes_instruction_boundary(0x99CB, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E49D(); g_code_window_base = _swb; }
label_99CE:;
    /* $99CE: A9 */ nes_instruction_boundary(0x99CE, 2); g_cpu.A = 0xCF; FLAG_NZ(g_cpu.A);
label_99D0:;
    /* $99D0: 85 */ nes_instruction_boundary(0x99D0, 3); nes_write(0x3B, g_cpu.A);
label_99D2:;
    /* $99D2: A9 */ nes_instruction_boundary(0x99D2, 2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_99D4:;
    /* $99D4: 85 */ nes_instruction_boundary(0x99D4, 3); nes_write(0x3C, g_cpu.A);
label_99D6:;
    /* $99D6: A9 */ nes_instruction_boundary(0x99D6, 2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_99D8:;
    /* $99D8: 85 */ nes_instruction_boundary(0x99D8, 3); nes_write(0x3D, g_cpu.A);
label_99DA:;
    /* $99DA: A2 */ nes_instruction_boundary(0x99DA, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_99DC:;
    /* $99DC: 86 */ nes_instruction_boundary(0x99DC, 3); nes_write(0x4D, g_cpu.X);
label_99DE:;
    /* $99DE: 86 */ nes_instruction_boundary(0x99DE, 3); nes_write(0x4E, g_cpu.X);
label_99E0:;
    /* $99E0: 86 */ nes_instruction_boundary(0x99E0, 3); nes_write(0x4F, g_cpu.X);
label_99E2:;
    /* $99E2: E8 */ nes_instruction_boundary(0x99E2, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_99E3:;
    /* $99E3: 86 */ nes_instruction_boundary(0x99E3, 3); nes_write(0x4B, g_cpu.X);
label_99E5:;
    /* $99E5: 86 */ nes_instruction_boundary(0x99E5, 3); nes_write(0x75, g_cpu.X);
label_99E7:;
    /* $99E7: 60 */ nes_instruction_boundary(0x99E7, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9999_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9999_b7");
#endif
    func_9999_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99C1_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99C1_b7");
#endif
    func_9999_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9951_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9960;
    }
label_9951:;
    /* $9951: B5 */ nes_instruction_boundary(0x9951, 4); g_cpu.A = nes_read((0xE4 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9953:;
    /* $9953: A4 */ nes_instruction_boundary(0x9953, 3); g_cpu.Y = nes_read(0xFD); FLAG_NZ(g_cpu.Y);
label_9955:;
    /* $9955: B9 */ nes_instruction_boundary(0x9955, 4); g_cpu.A = nes_read((0xD9E8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9958:;
    /* $9958: 85 */ nes_instruction_boundary(0x9958, 3); nes_write(0x86, g_cpu.A);
label_995A:;
    /* $995A: A9 */ nes_instruction_boundary(0x995A, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_995C:;
    /* $995C: 85 */ nes_instruction_boundary(0x995C, 3); nes_write(0x8D, g_cpu.A);
label_995E:;
    /* $995E: A2 */ nes_instruction_boundary(0x995E, 2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_9960:;
    /* $9960: A9 */ nes_instruction_boundary(0x9960, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9962:;
    /* $9962: 95 */ nes_instruction_boundary(0x9962, 4); nes_write((0x7F + g_cpu.X) & 0xFF, g_cpu.A);
label_9964:;
    /* $9964: CA */ nes_instruction_boundary(0x9964, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9965:;
    /* $9965: 10 */ nes_instruction_boundary(0x9965, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x9962, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9962;
    }
label_9967:;
    /* $9967: A9 */ nes_instruction_boundary(0x9967, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9969:;
    /* $9969: 85 */ nes_instruction_boundary(0x9969, 3); nes_write(0x85, g_cpu.A);
label_996B:;
    /* $996B: A2 */ nes_instruction_boundary(0x996B, 2); g_cpu.X = 0x07; FLAG_NZ(g_cpu.X);
label_996D:;
    /* $996D: A9 */ nes_instruction_boundary(0x996D, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_996F:;
    /* $996F: 95 */ nes_instruction_boundary(0x996F, 4); nes_write((0x78 + g_cpu.X) & 0xFF, g_cpu.A);
label_9971:;
    /* $9971: CA */ nes_instruction_boundary(0x9971, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9972:;
    /* $9972: 10 */ nes_instruction_boundary(0x9972, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x996F, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_996F;
    }
label_9974:;
    /* $9974: A2 */ nes_instruction_boundary(0x9974, 2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_9976:;
    /* $9976: BD */ nes_instruction_boundary(0x9976, 4); g_cpu.A = nes_read((0xE9AB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9979:;
    /* $9979: 9D */ nes_instruction_boundary(0x9979, 5); nes_write((0x0172 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_997C:;
    /* $997C: 9D */ nes_instruction_boundary(0x997C, 5); nes_write((0x018B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_997F:;
    /* $997F: CA */ nes_instruction_boundary(0x997F, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9980:;
    /* $9980: 10 */ nes_instruction_boundary(0x9980, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x9976, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9976;
    }
label_9982:;
    /* $9982: A2 */ nes_instruction_boundary(0x9982, 2); g_cpu.X = 0x06; FLAG_NZ(g_cpu.X);
label_9984:;
    /* $9984: A9 */ nes_instruction_boundary(0x9984, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_9986:;
    /* $9986: 20 */ nes_instruction_boundary(0x9986, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E5F2(); g_code_window_base = _swb; }
label_9989:;
    /* $9989: 20 */ nes_instruction_boundary(0x9989, 6); nes_dispatch_call(0x800F, -1);
label_998C:;
    /* $998C: A9 */ nes_instruction_boundary(0x998C, 2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_998E:;
    /* $998E: 85 */ nes_instruction_boundary(0x998E, 3); nes_write(0x55, g_cpu.A);
label_9990:;
    /* $9990: A9 */ nes_instruction_boundary(0x9990, 2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_9992:;
    /* $9992: 85 */ nes_instruction_boundary(0x9992, 3); nes_write(0x56, g_cpu.A);
label_9994:;
    /* $9994: A9 */ nes_instruction_boundary(0x9994, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9996:;
    /* $9996: 85 */ nes_instruction_boundary(0x9996, 3); nes_write(0x57, g_cpu.A);
label_9998:;
    /* $9998: A9 */ nes_instruction_boundary(0x9998, 2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_999A:;
    /* $999A: 85 */ nes_instruction_boundary(0x999A, 3); nes_write(0x23, g_cpu.A);
label_999C:;
    /* $999C: A9 */ nes_instruction_boundary(0x999C, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_999E:;
    /* $999E: 85 */ nes_instruction_boundary(0x999E, 3); nes_write(0x24, g_cpu.A);
label_99A0:;
    /* $99A0: 20 */ nes_instruction_boundary(0x99A0, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E417(); g_code_window_base = _swb; }
label_99A3:;
    /* $99A3: 20 */ nes_instruction_boundary(0x99A3, 6); nes_dispatch_call(0x8012, -1);
label_99A6:;
    /* $99A6: A9 */ nes_instruction_boundary(0x99A6, 2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_99A8:;
    /* $99A8: 85 */ nes_instruction_boundary(0x99A8, 3); nes_write(0x55, g_cpu.A);
label_99AA:;
    /* $99AA: A9 */ nes_instruction_boundary(0x99AA, 2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_99AC:;
    /* $99AC: 85 */ nes_instruction_boundary(0x99AC, 3); nes_write(0x56, g_cpu.A);
label_99AE:;
    /* $99AE: A9 */ nes_instruction_boundary(0x99AE, 2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_99B0:;
    /* $99B0: 85 */ nes_instruction_boundary(0x99B0, 3); nes_write(0x57, g_cpu.A);
label_99B2:;
    /* $99B2: A9 */ nes_instruction_boundary(0x99B2, 2); g_cpu.A = 0x48; FLAG_NZ(g_cpu.A);
label_99B4:;
    /* $99B4: 85 */ nes_instruction_boundary(0x99B4, 3); nes_write(0x23, g_cpu.A);
label_99B6:;
    /* $99B6: A9 */ nes_instruction_boundary(0x99B6, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_99B8:;
    /* $99B8: 85 */ nes_instruction_boundary(0x99B8, 3); nes_write(0x24, g_cpu.A);
label_99BA:;
    /* $99BA: 20 */ nes_instruction_boundary(0x99BA, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E417(); g_code_window_base = _swb; }
label_99BD:;
    /* $99BD: A9 */ nes_instruction_boundary(0x99BD, 2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_99BF:;
    /* $99BF: 85 */ nes_instruction_boundary(0x99BF, 3); nes_write(0x55, g_cpu.A);
label_99C1:;
    /* $99C1: A9 */ nes_instruction_boundary(0x99C1, 2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_99C3:;
    /* $99C3: 85 */ nes_instruction_boundary(0x99C3, 3); nes_write(0x56, g_cpu.A);
label_99C5:;
    /* $99C5: A9 */ nes_instruction_boundary(0x99C5, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_99C7:;
    /* $99C7: 85 */ nes_instruction_boundary(0x99C7, 3); nes_write(0x57, g_cpu.A);
label_99C9:;
    /* $99C9: A9 */ nes_instruction_boundary(0x99C9, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_99CB:;
    /* $99CB: 20 */ nes_instruction_boundary(0x99CB, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E49D(); g_code_window_base = _swb; }
label_99CE:;
    /* $99CE: A9 */ nes_instruction_boundary(0x99CE, 2); g_cpu.A = 0xCF; FLAG_NZ(g_cpu.A);
label_99D0:;
    /* $99D0: 85 */ nes_instruction_boundary(0x99D0, 3); nes_write(0x3B, g_cpu.A);
label_99D2:;
    /* $99D2: A9 */ nes_instruction_boundary(0x99D2, 2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_99D4:;
    /* $99D4: 85 */ nes_instruction_boundary(0x99D4, 3); nes_write(0x3C, g_cpu.A);
label_99D6:;
    /* $99D6: A9 */ nes_instruction_boundary(0x99D6, 2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_99D8:;
    /* $99D8: 85 */ nes_instruction_boundary(0x99D8, 3); nes_write(0x3D, g_cpu.A);
label_99DA:;
    /* $99DA: A2 */ nes_instruction_boundary(0x99DA, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_99DC:;
    /* $99DC: 86 */ nes_instruction_boundary(0x99DC, 3); nes_write(0x4D, g_cpu.X);
label_99DE:;
    /* $99DE: 86 */ nes_instruction_boundary(0x99DE, 3); nes_write(0x4E, g_cpu.X);
label_99E0:;
    /* $99E0: 86 */ nes_instruction_boundary(0x99E0, 3); nes_write(0x4F, g_cpu.X);
label_99E2:;
    /* $99E2: E8 */ nes_instruction_boundary(0x99E2, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_99E3:;
    /* $99E3: 86 */ nes_instruction_boundary(0x99E3, 3); nes_write(0x4B, g_cpu.X);
label_99E5:;
    /* $99E5: 86 */ nes_instruction_boundary(0x99E5, 3); nes_write(0x75, g_cpu.X);
label_99E7:;
    /* $99E7: 60 */ nes_instruction_boundary(0x99E7, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9951_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9951_b7");
#endif
    func_9951_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9960_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9960_b7");
#endif
    func_9951_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E930(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E930");
#endif
label_E930:;
    /* $E930: 80 */ nes_instruction_boundary(0xE930, 2); /* NOP */
label_E932:;
    /* $E932: 64 */ nes_instruction_boundary(0xE932, 3); (void)nes_read(0x8E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E934:;
    /* $E934: 01 */ nes_instruction_boundary(0xE934, 6); g_cpu.A |= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E936:;
    /* $E936: AE */ nes_instruction_boundary(0xE936, 4); g_cpu.X = nes_read(0x01B3); FLAG_NZ(g_cpu.X);
label_E939:;
    /* $E939: F0 */ nes_instruction_boundary(0xE939, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E967; }
label_E93B:;
    /* $E93B: AC */ nes_instruction_boundary(0xE93B, 4); g_cpu.Y = nes_read(0x01B2); FLAG_NZ(g_cpu.Y);
label_E93E:;
    /* $E93E: AD */ nes_instruction_boundary(0xE93E, 4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_E941:;
    /* $E941: 8E */ nes_instruction_boundary(0xE941, 4); nes_write(0x2006, g_cpu.X);
label_E944:;
    /* $E944: 8C */ nes_instruction_boundary(0xE944, 4); nes_write(0x2006, g_cpu.Y);
label_E947:;
    /* $E947: AD */ nes_instruction_boundary(0xE947, 4); g_cpu.A = nes_read(0x2007); FLAG_NZ(g_cpu.A);
label_E94A:;
    /* $E94A: AD */ nes_instruction_boundary(0xE94A, 4); g_cpu.A = nes_read(0x2007); FLAG_NZ(g_cpu.A);
label_E94D:;
    /* $E94D: 85 */ nes_instruction_boundary(0xE94D, 3); nes_write(0x40, g_cpu.A);
label_E94F:;
    /* $E94F: AD */ nes_instruction_boundary(0xE94F, 4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_E952:;
    /* $E952: 8E */ nes_instruction_boundary(0xE952, 4); nes_write(0x2006, g_cpu.X);
label_E955:;
    /* $E955: 8C */ nes_instruction_boundary(0xE955, 4); nes_write(0x2006, g_cpu.Y);
label_E958:;
    /* $E958: AD */ nes_instruction_boundary(0xE958, 4); g_cpu.A = nes_read(0x2007); FLAG_NZ(g_cpu.A);
label_E95B:;
    /* $E95B: AC */ nes_instruction_boundary(0xE95B, 4); g_cpu.Y = nes_read(0x2007); FLAG_NZ(g_cpu.Y);
label_E95E:;
    /* $E95E: C4 */ nes_instruction_boundary(0xE95E, 3); { uint8_t m=nes_read(0x40); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E960:;
    /* $E960: F0 */ nes_instruction_boundary(0xE960, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E964; }
label_E962:;
    /* $E962: A0 */ nes_instruction_boundary(0xE962, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E964:;
    /* $E964: B1 */ nes_instruction_boundary(0xE964, 5); g_cpu.A = nes_read((nes_read16zp(0x6D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E966:;
    /* $E966: AA */ nes_instruction_boundary(0xE966, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E967:;
    /* $E967: 8E */ nes_instruction_boundary(0xE967, 4); nes_write(0x01B4, g_cpu.X);
label_E96A:;
    /* $E96A: A2 */ nes_instruction_boundary(0xE96A, 2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_E96C:;
    /* $E96C: B4 */ nes_instruction_boundary(0xE96C, 4); g_cpu.Y = nes_read((0xDF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_E96E:;
    /* $E96E: F0 */ nes_instruction_boundary(0xE96E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E98C; }
label_E970:;
    /* $E970: 8C */ nes_instruction_boundary(0xE970, 4); nes_write(0x2006, g_cpu.Y);
label_E973:;
    /* $E973: B4 */ nes_instruction_boundary(0xE973, 4); g_cpu.Y = nes_read((0xCF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_E975:;
    /* $E975: 8C */ nes_instruction_boundary(0xE975, 4); nes_write(0x2006, g_cpu.Y);
label_E978:;
    /* $E978: AC */ nes_instruction_boundary(0xE978, 4); g_cpu.Y = nes_read(0x2007); FLAG_NZ(g_cpu.Y);
label_E97B:;
    /* $E97B: AC */ nes_instruction_boundary(0xE97B, 4); g_cpu.Y = nes_read(0x2007); FLAG_NZ(g_cpu.Y);
label_E97E:;
    /* $E97E: B1 */ nes_instruction_boundary(0xE97E, 5); g_cpu.A = nes_read((nes_read16zp(0x6D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E980:;
    /* $E980: F0 */ nes_instruction_boundary(0xE980, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E98A; }
label_E982:;
    /* $E982: A9 */ nes_instruction_boundary(0xE982, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E984:;
    /* $E984: 9D */ nes_instruction_boundary(0xE984, 5); nes_write((0x03B0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E987:;
    /* $E987: 9D */ nes_instruction_boundary(0xE987, 5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E98A:;
    /* $E98A: 95 */ nes_instruction_boundary(0xE98A, 4); nes_write((0xDF + g_cpu.X) & 0xFF, g_cpu.A);
label_E98C:;
    /* $E98C: CA */ nes_instruction_boundary(0xE98C, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_E98D:;
    /* $E98D: D0 */ nes_instruction_boundary(0xE98D, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xE96C, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E96C;
    }
label_E98F:;
    /* $E98F: 86 */ nes_instruction_boundary(0xE98F, 3); nes_write(0x88, g_cpu.X);
label_E991:;
    /* $E991: 8E */ nes_instruction_boundary(0xE991, 4); nes_write(0x01B3, g_cpu.X);
label_E994:;
    /* $E994: A9 */ nes_instruction_boundary(0xE994, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_E996:;
    /* $E996: 8D */ nes_instruction_boundary(0xE996, 4); nes_write(0x8000, g_cpu.A);
label_E999:;
    /* $E999: A5 */ nes_instruction_boundary(0xE999, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_E99B:;
    /* $E99B: 8D */ nes_instruction_boundary(0xE99B, 4); nes_write(0x8001, g_cpu.A);
label_E99E:;
    /* $E99E: 60 */ nes_instruction_boundary(0xE99E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9918_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9918_b7");
#endif
label_9918:;
    /* $9918: E4 */ nes_instruction_boundary(0x9918, 3); { uint8_t m=nes_read(0x85); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_991A:;
    /* $991A: 3A */ nes_instruction_boundary(0x991A, 2); /* NOP */
label_991B:;
    /* $991B: A9 */ nes_instruction_boundary(0x991B, 2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_991D:;
    /* $991D: 85 */ nes_instruction_boundary(0x991D, 3); nes_write(0x37, g_cpu.A);
label_991F:;
    /* $991F: 60 */ nes_instruction_boundary(0x991F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D03_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D03_b7");
#endif
label_8D03:;
    /* $8D03: 0A */ nes_instruction_boundary(0x8D03, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8D04:;
    /* $8D04: A5 */ nes_instruction_boundary(0x8D04, 3); g_cpu.A = nes_read(0x0E); FLAG_NZ(g_cpu.A);
label_8D06:;
    /* $8D06: 99 */ nes_instruction_boundary(0x8D06, 5); nes_write((0x0373 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8D09:;
    /* $8D09: BD */ nes_instruction_boundary(0x8D09, 4); g_cpu.A = nes_read((0xD17E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D0C:;
    /* $8D0C: E9 */ nes_instruction_boundary(0x8D0C, 2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D0E:;
    /* $8D0E: A8 */ nes_instruction_boundary(0x8D0E, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D0F:;
    /* $8D0F: 68 */ nes_instruction_boundary(0x8D0F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8D10:;
    /* $8D10: B9 */ nes_instruction_boundary(0x8D10, 4); g_cpu.A = nes_read((0xD197 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D13:;
    /* $8D13: B0 */ nes_instruction_boundary(0x8D13, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8D19; }
label_8D15:;
    /* $8D15: 4A */ nes_instruction_boundary(0x8D15, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D16:;
    /* $8D16: 4A */ nes_instruction_boundary(0x8D16, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D17:;
    /* $8D17: 4A */ nes_instruction_boundary(0x8D17, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D18:;
    /* $8D18: 4A */ nes_instruction_boundary(0x8D18, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D19:;
    /* $8D19: 29 */ nes_instruction_boundary(0x8D19, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8D1B:;
    /* $8D1B: A0 */ nes_instruction_boundary(0x8D1B, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8D1D:;
    /* $8D1D: C9 */ nes_instruction_boundary(0x8D1D, 2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8D1F:;
    /* $8D1F: 90 */ nes_instruction_boundary(0x8D1F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8D24; }
label_8D21:;
    /* $8D21: 09 */ nes_instruction_boundary(0x8D21, 2); g_cpu.A |= 0xF0; FLAG_NZ(g_cpu.A);
label_8D23:;
    /* $8D23: 88 */ nes_instruction_boundary(0x8D23, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8D24:;
    /* $8D24: 84 */ nes_instruction_boundary(0x8D24, 3); nes_write(0x0F, g_cpu.Y);
label_8D26:;
    /* $8D26: 0A */ nes_instruction_boundary(0x8D26, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8D27:;
    /* $8D27: 26 */ nes_instruction_boundary(0x8D27, 5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D29:;
    /* $8D29: 85 */ nes_instruction_boundary(0x8D29, 3); nes_write(0x0E, g_cpu.A);
label_8D2B:;
    /* $8D2B: A4 */ nes_instruction_boundary(0x8D2B, 3); g_cpu.Y = nes_read(0x0C); FLAG_NZ(g_cpu.Y);
label_8D2D:;
    /* $8D2D: A6 */ nes_instruction_boundary(0x8D2D, 3); g_cpu.X = nes_read(0x0B); FLAG_NZ(g_cpu.X);
label_8D2F:;
    /* $8D2F: 60 */ nes_instruction_boundary(0x8D2F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B011_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B011_b7");
#endif
label_B011:;
    /* $B011: 26 */ nes_instruction_boundary(0xB011, 5); { uint16_t a=0xB9; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B013:;
    /* $B013: E1 */ nes_instruction_boundary(0xB013, 6); { uint8_t m=nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B015:;
    /* $B015: 0A */ nes_instruction_boundary(0xB015, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B016:;
    /* $B016: 26 */ nes_instruction_boundary(0xB016, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B018:;
    /* $B018: 0A */ nes_instruction_boundary(0xB018, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B019:;
    /* $B019: 26 */ nes_instruction_boundary(0xB019, 5); { uint16_t a=0x26; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B01B:;
    /* $B01B: 85 */ nes_instruction_boundary(0xB01B, 3); nes_write(0x25, g_cpu.A);
label_B01D:;
    /* $B01D: A4 */ nes_instruction_boundary(0xB01D, 3); g_cpu.Y = nes_read(0x34); FLAG_NZ(g_cpu.Y);
label_B01F:;
    /* $B01F: 60 */ nes_instruction_boundary(0xB01F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A905_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A905_b7");
#endif
label_A905:;
    /* $A905: 05 */ nes_instruction_boundary(0xA905, 3); g_cpu.A |= nes_read(0x20); FLAG_NZ(g_cpu.A);
label_A907:;
    /* $A907: 4C */ nes_instruction_boundary(0xA907, 3); nes_cpu_instruction_boundary(0xE613, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E613(); g_code_window_base = _swb; } return;
}

void func_8D02_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D02_b7");
#endif
label_8D02:;
    /* $8D02: 90 */ nes_instruction_boundary(0x8D02, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8D0E; }
label_8D04:;
    /* $8D04: A5 */ nes_instruction_boundary(0x8D04, 3); g_cpu.A = nes_read(0x0E); FLAG_NZ(g_cpu.A);
label_8D06:;
    /* $8D06: 99 */ nes_instruction_boundary(0x8D06, 5); nes_write((0x0373 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8D09:;
    /* $8D09: BD */ nes_instruction_boundary(0x8D09, 4); g_cpu.A = nes_read((0xD17E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D0C:;
    /* $8D0C: E9 */ nes_instruction_boundary(0x8D0C, 2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D0E:;
    /* $8D0E: A8 */ nes_instruction_boundary(0x8D0E, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D0F:;
    /* $8D0F: 68 */ nes_instruction_boundary(0x8D0F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8D10:;
    /* $8D10: B9 */ nes_instruction_boundary(0x8D10, 4); g_cpu.A = nes_read((0xD197 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D13:;
    /* $8D13: B0 */ nes_instruction_boundary(0x8D13, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8D19; }
label_8D15:;
    /* $8D15: 4A */ nes_instruction_boundary(0x8D15, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D16:;
    /* $8D16: 4A */ nes_instruction_boundary(0x8D16, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D17:;
    /* $8D17: 4A */ nes_instruction_boundary(0x8D17, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D18:;
    /* $8D18: 4A */ nes_instruction_boundary(0x8D18, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8D19:;
    /* $8D19: 29 */ nes_instruction_boundary(0x8D19, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8D1B:;
    /* $8D1B: A0 */ nes_instruction_boundary(0x8D1B, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8D1D:;
    /* $8D1D: C9 */ nes_instruction_boundary(0x8D1D, 2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8D1F:;
    /* $8D1F: 90 */ nes_instruction_boundary(0x8D1F, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8D24; }
label_8D21:;
    /* $8D21: 09 */ nes_instruction_boundary(0x8D21, 2); g_cpu.A |= 0xF0; FLAG_NZ(g_cpu.A);
label_8D23:;
    /* $8D23: 88 */ nes_instruction_boundary(0x8D23, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8D24:;
    /* $8D24: 84 */ nes_instruction_boundary(0x8D24, 3); nes_write(0x0F, g_cpu.Y);
label_8D26:;
    /* $8D26: 0A */ nes_instruction_boundary(0x8D26, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8D27:;
    /* $8D27: 26 */ nes_instruction_boundary(0x8D27, 5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D29:;
    /* $8D29: 85 */ nes_instruction_boundary(0x8D29, 3); nes_write(0x0E, g_cpu.A);
label_8D2B:;
    /* $8D2B: A4 */ nes_instruction_boundary(0x8D2B, 3); g_cpu.Y = nes_read(0x0C); FLAG_NZ(g_cpu.Y);
label_8D2D:;
    /* $8D2D: A6 */ nes_instruction_boundary(0x8D2D, 3); g_cpu.X = nes_read(0x0B); FLAG_NZ(g_cpu.X);
label_8D2F:;
    /* $8D2F: 60 */ nes_instruction_boundary(0x8D2F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A933_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A936;
        case 2: goto label_A941;
    }
label_A933:;
    /* $A933: 8E */ nes_instruction_boundary(0xA933, 4); nes_write(0x8001, g_cpu.X);
label_A936:;
    /* $A936: AE */ nes_instruction_boundary(0xA936, 4); g_cpu.X = nes_read(0x01B3); FLAG_NZ(g_cpu.X);
label_A939:;
    /* $A939: F0 */ nes_instruction_boundary(0xA939, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A967; }
label_A93B:;
    /* $A93B: AC */ nes_instruction_boundary(0xA93B, 4); g_cpu.Y = nes_read(0x01B2); FLAG_NZ(g_cpu.Y);
label_A93E:;
    /* $A93E: AD */ nes_instruction_boundary(0xA93E, 4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 8E */ nes_instruction_boundary(0xA941, 4); nes_write(0x2006, g_cpu.X);
label_A944:;
    /* $A944: 8C */ nes_instruction_boundary(0xA944, 4); nes_write(0x2006, g_cpu.Y);
label_A947:;
    /* $A947: AD */ nes_instruction_boundary(0xA947, 4); g_cpu.A = nes_read(0x2007); FLAG_NZ(g_cpu.A);
label_A94A:;
    /* $A94A: AD */ nes_instruction_boundary(0xA94A, 4); g_cpu.A = nes_read(0x2007); FLAG_NZ(g_cpu.A);
label_A94D:;
    /* $A94D: 85 */ nes_instruction_boundary(0xA94D, 3); nes_write(0x40, g_cpu.A);
label_A94F:;
    /* $A94F: AD */ nes_instruction_boundary(0xA94F, 4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_A952:;
    /* $A952: 8E */ nes_instruction_boundary(0xA952, 4); nes_write(0x2006, g_cpu.X);
label_A955:;
    /* $A955: 8C */ nes_instruction_boundary(0xA955, 4); nes_write(0x2006, g_cpu.Y);
label_A958:;
    /* $A958: AD */ nes_instruction_boundary(0xA958, 4); g_cpu.A = nes_read(0x2007); FLAG_NZ(g_cpu.A);
label_A95B:;
    /* $A95B: AC */ nes_instruction_boundary(0xA95B, 4); g_cpu.Y = nes_read(0x2007); FLAG_NZ(g_cpu.Y);
label_A95E:;
    /* $A95E: C4 */ nes_instruction_boundary(0xA95E, 3); { uint8_t m=nes_read(0x40); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A960:;
    /* $A960: F0 */ nes_instruction_boundary(0xA960, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A964; }
label_A962:;
    /* $A962: A0 */ nes_instruction_boundary(0xA962, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A964:;
    /* $A964: B1 */ nes_instruction_boundary(0xA964, 5); g_cpu.A = nes_read((nes_read16zp(0x6D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A966:;
    /* $A966: AA */ nes_instruction_boundary(0xA966, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A967:;
    /* $A967: 8E */ nes_instruction_boundary(0xA967, 4); nes_write(0x01B4, g_cpu.X);
label_A96A:;
    /* $A96A: A2 */ nes_instruction_boundary(0xA96A, 2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_A96C:;
    /* $A96C: B4 */ nes_instruction_boundary(0xA96C, 4); g_cpu.Y = nes_read((0xDF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A96E:;
    /* $A96E: F0 */ nes_instruction_boundary(0xA96E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A98C; }
label_A970:;
    /* $A970: 8C */ nes_instruction_boundary(0xA970, 4); nes_write(0x2006, g_cpu.Y);
label_A973:;
    /* $A973: B4 */ nes_instruction_boundary(0xA973, 4); g_cpu.Y = nes_read((0xCF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A975:;
    /* $A975: 8C */ nes_instruction_boundary(0xA975, 4); nes_write(0x2006, g_cpu.Y);
label_A978:;
    /* $A978: AC */ nes_instruction_boundary(0xA978, 4); g_cpu.Y = nes_read(0x2007); FLAG_NZ(g_cpu.Y);
label_A97B:;
    /* $A97B: AC */ nes_instruction_boundary(0xA97B, 4); g_cpu.Y = nes_read(0x2007); FLAG_NZ(g_cpu.Y);
label_A97E:;
    /* $A97E: B1 */ nes_instruction_boundary(0xA97E, 5); g_cpu.A = nes_read((nes_read16zp(0x6D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A980:;
    /* $A980: F0 */ nes_instruction_boundary(0xA980, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A98A; }
label_A982:;
    /* $A982: A9 */ nes_instruction_boundary(0xA982, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A984:;
    /* $A984: 9D */ nes_instruction_boundary(0xA984, 5); nes_write((0x03B0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A987:;
    /* $A987: 9D */ nes_instruction_boundary(0xA987, 5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A98A:;
    /* $A98A: 95 */ nes_instruction_boundary(0xA98A, 4); nes_write((0xDF + g_cpu.X) & 0xFF, g_cpu.A);
label_A98C:;
    /* $A98C: CA */ nes_instruction_boundary(0xA98C, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A98D:;
    /* $A98D: D0 */ nes_instruction_boundary(0xA98D, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xA96C, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A96C;
    }
label_A98F:;
    /* $A98F: 86 */ nes_instruction_boundary(0xA98F, 3); nes_write(0x88, g_cpu.X);
label_A991:;
    /* $A991: 8E */ nes_instruction_boundary(0xA991, 4); nes_write(0x01B3, g_cpu.X);
label_A994:;
    /* $A994: A9 */ nes_instruction_boundary(0xA994, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A996:;
    /* $A996: 8D */ nes_instruction_boundary(0xA996, 4); nes_write(0x8000, g_cpu.A);
label_A999:;
    /* $A999: A5 */ nes_instruction_boundary(0xA999, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A99B:;
    /* $A99B: 8D */ nes_instruction_boundary(0xA99B, 4); nes_write(0x8001, g_cpu.A);
label_A99E:;
    /* $A99E: 60 */ nes_instruction_boundary(0xA99E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A933_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A933_b7");
#endif
    func_A933_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A936_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A936_b7");
#endif
    func_A933_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A941_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A941_b7");
#endif
    func_A933_b7_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD24_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD24_b7");
#endif
label_AD24:;
    /* $AD24: 91 */ nes_instruction_boundary(0xAD24, 6); nes_write((nes_read16zp(0x07) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AD26:;
    /* $AD26: A5 */ nes_instruction_boundary(0xAD26, 3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_AD28:;
    /* $AD28: 99 */ nes_instruction_boundary(0xAD28, 5); nes_write((0x07B1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AD2B:;
    /* $AD2B: A5 */ nes_instruction_boundary(0xAD2B, 3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_AD2D:;
    /* $AD2D: 99 */ nes_instruction_boundary(0xAD2D, 5); nes_write((0x0711 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AD30:;
    /* $AD30: A5 */ nes_instruction_boundary(0xAD30, 3); g_cpu.A = nes_read(0x26); FLAG_NZ(g_cpu.A);
label_AD32:;
    /* $AD32: 99 */ nes_instruction_boundary(0xAD32, 5); nes_write((0x0731 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AD35:;
    /* $AD35: 60 */ nes_instruction_boundary(0xAD35, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A526_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A526_b7");
#endif
label_A526:;
    /* $A526: 4A */ nes_instruction_boundary(0xA526, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A527:;
    /* $A527: F0 */ nes_instruction_boundary(0xA527, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0510), -1); return; }
label_A529:;
    /* $A529: A9 */ nes_instruction_boundary(0xA529, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A52B:;
    /* $A52B: 85 */ nes_instruction_boundary(0xA52B, 3); nes_write(0x4A, g_cpu.A);
label_A52D:;
    /* $A52D: E6 */ nes_instruction_boundary(0xA52D, 5); { uint16_t a=0x52; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A52F:;
    /* $A52F: A5 */ nes_instruction_boundary(0xA52F, 3); g_cpu.A = nes_read(0x52); FLAG_NZ(g_cpu.A);
label_A531:;
    /* $A531: 0A */ nes_instruction_boundary(0xA531, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A532:;
    /* $A532: 0A */ nes_instruction_boundary(0xA532, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A533:;
    /* $A533: 0A */ nes_instruction_boundary(0xA533, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A534:;
    /* $A534: 38 */ nes_instruction_boundary(0xA534, 2); g_cpu.C = 1;
label_A535:;
    /* $A535: E5 */ nes_instruction_boundary(0xA535, 3); { uint8_t m=nes_read(0x52); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A537:;
    /* $A537: 85 */ nes_instruction_boundary(0xA537, 3); nes_write(0x50, g_cpu.A);
label_A539:;
    /* $A539: 18 */ nes_instruction_boundary(0xA539, 2); g_cpu.C = 0;
label_A53A:;
    /* $A53A: 69 */ nes_instruction_boundary(0xA53A, 2); { uint16_t r = g_cpu.A + 0x40 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x40); g_cpu.A=r&0xFF; }
label_A53C:;
    /* $A53C: 85 */ nes_instruction_boundary(0xA53C, 3); nes_write(0x51, g_cpu.A);
label_A53E:;
    /* $A53E: 20 */ nes_instruction_boundary(0xA53E, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E544(); g_code_window_base = _swb; }
label_A541:;
    /* $A541: 4C */ nes_instruction_boundary(0xA541, 3); nes_cpu_instruction_boundary(0xD9F0, 2); call_by_address_tail(0xD9F0, -1); return;
}

void func_A5EE_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5EE_b7");
#endif
label_A5EE:;
    /* $A5EE: 60 */ nes_instruction_boundary(0xA5EE, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9848_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9848_b7");
#endif
label_9848:;
    /* $9848: 85 */ nes_instruction_boundary(0x9848, 3); nes_write(0x65, g_cpu.A);
label_984A:;
    /* $984A: A9 */ nes_instruction_boundary(0x984A, 2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_984C:;
    /* $984C: 85 */ nes_instruction_boundary(0x984C, 3); nes_write(0x66, g_cpu.A);
label_984E:;
    /* $984E: A9 */ nes_instruction_boundary(0x984E, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9850:;
    /* $9850: 85 */ nes_instruction_boundary(0x9850, 3); nes_write(0x67, g_cpu.A);
label_9852:;
    /* $9852: A9 */ nes_instruction_boundary(0x9852, 2); g_cpu.A = 0xA1; FLAG_NZ(g_cpu.A);
label_9854:;
    /* $9854: 85 */ nes_instruction_boundary(0x9854, 3); nes_write(0x68, g_cpu.A);
label_9856:;
    /* $9856: A9 */ nes_instruction_boundary(0x9856, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9858:;
    /* $9858: 85 */ nes_instruction_boundary(0x9858, 3); nes_write(0x69, g_cpu.A);
label_985A:;
    /* $985A: A9 */ nes_instruction_boundary(0x985A, 2); g_cpu.A = 0xA7; FLAG_NZ(g_cpu.A);
label_985C:;
    /* $985C: 85 */ nes_instruction_boundary(0x985C, 3); nes_write(0x6A, g_cpu.A);
label_985E:;
    /* $985E: A9 */ nes_instruction_boundary(0x985E, 2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9860:;
    /* $9860: 85 */ nes_instruction_boundary(0x9860, 3); nes_write(0x6B, g_cpu.A);
label_9862:;
    /* $9862: A9 */ nes_instruction_boundary(0x9862, 2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_9864:;
    /* $9864: 85 */ nes_instruction_boundary(0x9864, 3); nes_write(0x6C, g_cpu.A);
label_9866:;
    /* $9866: A9 */ nes_instruction_boundary(0x9866, 2); g_cpu.A = 0x96; FLAG_NZ(g_cpu.A);
label_9868:;
    /* $9868: 85 */ nes_instruction_boundary(0x9868, 3); nes_write(0x6D, g_cpu.A);
label_986A:;
    /* $986A: A9 */ nes_instruction_boundary(0x986A, 2); g_cpu.A = 0xFE; FLAG_NZ(g_cpu.A);
label_986C:;
    /* $986C: 85 */ nes_instruction_boundary(0x986C, 3); nes_write(0x6E, g_cpu.A);
label_986E:;
    /* $986E: A9 */ nes_instruction_boundary(0x986E, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_9870:;
    /* $9870: 85 */ nes_instruction_boundary(0x9870, 3); nes_write(0x42, g_cpu.A);
label_9872:;
    /* $9872: A9 */ nes_instruction_boundary(0x9872, 2); g_cpu.A = 0x42; FLAG_NZ(g_cpu.A);
label_9874:;
    /* $9874: 85 */ nes_instruction_boundary(0x9874, 3); nes_write(0x43, g_cpu.A);
label_9876:;
    /* $9876: A9 */ nes_instruction_boundary(0x9876, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9878:;
    /* $9878: 85 */ nes_instruction_boundary(0x9878, 3); nes_write(0x61, g_cpu.A);
label_987A:;
    /* $987A: A9 */ nes_instruction_boundary(0x987A, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_987C:;
    /* $987C: 85 */ nes_instruction_boundary(0x987C, 3); nes_write(0x62, g_cpu.A);
label_987E:;
    /* $987E: A2 */ nes_instruction_boundary(0x987E, 2); g_cpu.X = 0x06; FLAG_NZ(g_cpu.X);
label_9880:;
    /* $9880: A9 */ nes_instruction_boundary(0x9880, 2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_9882:;
    /* $9882: 20 */ nes_instruction_boundary(0x9882, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E5F2(); g_code_window_base = _swb; }
label_9885:;
    /* $9885: E8 */ nes_instruction_boundary(0x9885, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9886:;
    /* $9886: A5 */ nes_instruction_boundary(0x9886, 3); g_cpu.A = nes_read(0x64); FLAG_NZ(g_cpu.A);
label_9888:;
    /* $9888: 20 */ nes_instruction_boundary(0x9888, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E5F2(); g_code_window_base = _swb; }
label_988B:;
    /* $988B: A9 */ nes_instruction_boundary(0x988B, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_988D:;
    /* $988D: 8D */ nes_instruction_boundary(0x988D, 4); nes_write(0x0168, g_cpu.A);
label_9890:;
    /* $9890: A0 */ nes_instruction_boundary(0x9890, 2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_9892:;
    /* $9892: B9 */ nes_instruction_boundary(0x9892, 4); g_cpu.A = nes_read((0xA972 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9895:;
    /* $9895: 99 */ nes_instruction_boundary(0x9895, 5); nes_write((0x0169 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9898:;
    /* $9898: 88 */ nes_instruction_boundary(0x9898, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9899:;
    /* $9899: 10 */ nes_instruction_boundary(0x9899, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x9892, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9892;
    }
label_989B:;
    /* $989B: A5 */ nes_instruction_boundary(0x989B, 3); g_cpu.A = nes_read(0x62); FLAG_NZ(g_cpu.A);
label_989D:;
    /* $989D: 48 */ nes_instruction_boundary(0x989D, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_989E:;
    /* $989E: A5 */ nes_instruction_boundary(0x989E, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_98A0:;
    /* $98A0: 48 */ nes_instruction_boundary(0x98A0, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_98A1:;
    /* $98A1: 38 */ nes_instruction_boundary(0x98A1, 2); g_cpu.C = 1;
label_98A2:;
    /* $98A2: E9 */ nes_instruction_boundary(0x98A2, 2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_98A4:;
    /* $98A4: 85 */ nes_instruction_boundary(0x98A4, 3); nes_write(0x61, g_cpu.A);
label_98A6:;
    /* $98A6: B0 */ nes_instruction_boundary(0x98A6, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_98AA; }
label_98A8:;
    /* $98A8: C6 */ nes_instruction_boundary(0x98A8, 5); { uint16_t a=0x62; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98AA:;
    /* $98AA: A9 */ nes_instruction_boundary(0x98AA, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_98AC:;
    /* $98AC: 85 */ nes_instruction_boundary(0x98AC, 3); nes_write(0x39, g_cpu.A);
label_98AE:;
    /* $98AE: A9 */ nes_instruction_boundary(0x98AE, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98B0:;
    /* $98B0: 85 */ nes_instruction_boundary(0x98B0, 3); nes_write(0x59, g_cpu.A);
label_98B2:;
    /* $98B2: A5 */ nes_instruction_boundary(0x98B2, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_98B4:;
    /* $98B4: 38 */ nes_instruction_boundary(0x98B4, 2); g_cpu.C = 1;
label_98B5:;
    /* $98B5: E9 */ nes_instruction_boundary(0x98B5, 2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_98B7:;
    /* $98B7: 85 */ nes_instruction_boundary(0x98B7, 3); nes_write(0x27, g_cpu.A);
label_98B9:;
    /* $98B9: A8 */ nes_instruction_boundary(0x98B9, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_98BA:;
    /* $98BA: A5 */ nes_instruction_boundary(0x98BA, 3); g_cpu.A = nes_read(0x62); FLAG_NZ(g_cpu.A);
label_98BC:;
    /* $98BC: E9 */ nes_instruction_boundary(0x98BC, 2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_98BE:;
    /* $98BE: 85 */ nes_instruction_boundary(0x98BE, 3); nes_write(0x28, g_cpu.A);
label_98C0:;
    /* $98C0: 20 */ nes_instruction_boundary(0x98C0, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_98C3:;
    /* $98C3: 85 */ nes_instruction_boundary(0x98C3, 3); nes_write(0x29, g_cpu.A);
label_98C5:;
    /* $98C5: 20 */ nes_instruction_boundary(0x98C5, 6); nes_dispatch_call(0x8003, -1);
label_98C8:;
    /* $98C8: A9 */ nes_instruction_boundary(0x98C8, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98CA:;
    /* $98CA: 85 */ nes_instruction_boundary(0x98CA, 3); nes_write(0x23, g_cpu.A);
label_98CC:;
    /* $98CC: A9 */ nes_instruction_boundary(0x98CC, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98CE:;
    /* $98CE: 85 */ nes_instruction_boundary(0x98CE, 3); nes_write(0x24, g_cpu.A);
label_98D0:;
    /* $98D0: A9 */ nes_instruction_boundary(0x98D0, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_98D2:;
    /* $98D2: 85 */ nes_instruction_boundary(0x98D2, 3); nes_write(0x57, g_cpu.A);
label_98D4:;
    /* $98D4: 20 */ nes_instruction_boundary(0x98D4, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E417(); g_code_window_base = _swb; }
label_98D7:;
    /* $98D7: A4 */ nes_instruction_boundary(0x98D7, 3); g_cpu.Y = nes_read(0x61); FLAG_NZ(g_cpu.Y);
label_98D9:;
    /* $98D9: A5 */ nes_instruction_boundary(0x98D9, 3); g_cpu.A = nes_read(0x62); FLAG_NZ(g_cpu.A);
label_98DB:;
    /* $98DB: 20 */ nes_instruction_boundary(0x98DB, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_98DE:;
    /* $98DE: 29 */ nes_instruction_boundary(0x98DE, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_98E0:;
    /* $98E0: F0 */ nes_instruction_boundary(0x98E0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_98FC; }
label_98E2:;
    /* $98E2: 20 */ nes_instruction_boundary(0x98E2, 6); nes_dispatch_call(0x8006, -1);
label_98E5:;
    /* $98E5: A9 */ nes_instruction_boundary(0x98E5, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_98E7:;
    /* $98E7: 85 */ nes_instruction_boundary(0x98E7, 3); nes_write(0x23, g_cpu.A);
label_98E9:;
    /* $98E9: A9 */ nes_instruction_boundary(0x98E9, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98EB:;
    /* $98EB: 85 */ nes_instruction_boundary(0x98EB, 3); nes_write(0x24, g_cpu.A);
label_98ED:;
    /* $98ED: A5 */ nes_instruction_boundary(0x98ED, 3); g_cpu.A = nes_read(0x58); FLAG_NZ(g_cpu.A);
label_98EF:;
    /* $98EF: 85 */ nes_instruction_boundary(0x98EF, 3); nes_write(0x55, g_cpu.A);
label_98F1:;
    /* $98F1: A5 */ nes_instruction_boundary(0x98F1, 3); g_cpu.A = nes_read(0x59); FLAG_NZ(g_cpu.A);
label_98F3:;
    /* $98F3: 85 */ nes_instruction_boundary(0x98F3, 3); nes_write(0x56, g_cpu.A);
label_98F5:;
    /* $98F5: A9 */ nes_instruction_boundary(0x98F5, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_98F7:;
    /* $98F7: 85 */ nes_instruction_boundary(0x98F7, 3); nes_write(0x57, g_cpu.A);
label_98F9:;
    /* $98F9: 20 */ nes_instruction_boundary(0x98F9, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E417(); g_code_window_base = _swb; }
label_98FC:;
    /* $98FC: A5 */ nes_instruction_boundary(0x98FC, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_98FE:;
    /* $98FE: 18 */ nes_instruction_boundary(0x98FE, 2); g_cpu.C = 0;
label_98FF:;
    /* $98FF: 69 */ nes_instruction_boundary(0x98FF, 2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_9901:;
    /* $9901: 85 */ nes_instruction_boundary(0x9901, 3); nes_write(0x61, g_cpu.A);
label_9903:;
    /* $9903: 90 */ nes_instruction_boundary(0x9903, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9907; }
label_9905:;
    /* $9905: E6 */ nes_instruction_boundary(0x9905, 5); { uint16_t a=0x62; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9907:;
    /* $9907: C6 */ nes_instruction_boundary(0x9907, 5); { uint16_t a=0x39; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9909:;
    /* $9909: D0 */ nes_instruction_boundary(0x9909, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0x98AE, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_98AE;
    }
label_990B:;
    /* $990B: A9 */ nes_instruction_boundary(0x990B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_990D:;
    /* $990D: 85 */ nes_instruction_boundary(0x990D, 3); nes_write(0x59, g_cpu.A);
label_990F:;
    /* $990F: 68 */ nes_instruction_boundary(0x990F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9910:;
    /* $9910: 85 */ nes_instruction_boundary(0x9910, 3); nes_write(0x61, g_cpu.A);
label_9912:;
    /* $9912: A8 */ nes_instruction_boundary(0x9912, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9913:;
    /* $9913: 68 */ nes_instruction_boundary(0x9913, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9914:;
    /* $9914: 85 */ nes_instruction_boundary(0x9914, 3); nes_write(0x62, g_cpu.A);
label_9916:;
    /* $9916: 20 */ nes_instruction_boundary(0x9916, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_9919:;
    /* $9919: 85 */ nes_instruction_boundary(0x9919, 3); nes_write(0x3A, g_cpu.A);
label_991B:;
    /* $991B: A9 */ nes_instruction_boundary(0x991B, 2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_991D:;
    /* $991D: 85 */ nes_instruction_boundary(0x991D, 3); nes_write(0x37, g_cpu.A);
label_991F:;
    /* $991F: 60 */ nes_instruction_boundary(0x991F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A80A_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A80A_b7");
#endif
label_A80A:;
    /* $A80A: 0A */ nes_instruction_boundary(0xA80A, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A80B:;
    /* $A80B: A8 */ nes_instruction_boundary(0xA80B, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A80C:;
    /* $A80C: B9 */ nes_instruction_boundary(0xA80C, 4); g_cpu.A = nes_read((0xE827 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A80F:;
    /* $A80F: 8D */ nes_instruction_boundary(0xA80F, 4); nes_write(0x2006, g_cpu.A);
label_A812:;
    /* $A812: B9 */ nes_instruction_boundary(0xA812, 4); g_cpu.A = nes_read((0xE826 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A815:;
    /* $A815: 8D */ nes_instruction_boundary(0xA815, 4); nes_write(0x2006, g_cpu.A);
label_A818:;
    /* $A818: 8E */ nes_instruction_boundary(0xA818, 4); nes_write(0x2005, g_cpu.X);
label_A81B:;
    /* $A81B: 8E */ nes_instruction_boundary(0xA81B, 4); nes_write(0x2005, g_cpu.X);
label_A81E:;
    /* $A81E: E6 */ nes_instruction_boundary(0xA81E, 5); { uint16_t a=0x60; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A820:;
    /* $A820: 68 */ nes_instruction_boundary(0xA820, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A821:;
    /* $A821: A8 */ nes_instruction_boundary(0xA821, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A822:;
    /* $A822: 68 */ nes_instruction_boundary(0xA822, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A823:;
    /* $A823: AA */ nes_instruction_boundary(0xA823, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A824:;
    /* $A824: 68 */ nes_instruction_boundary(0xA824, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A825:;
    /* $A825: 40 */ nes_instruction_boundary(0xA825, 6); /* RTI */ g_rti_source = 0xA825; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A1B9_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1B9_b7");
#endif
label_A1B9:;
    /* $A1B9: A9 */ nes_instruction_boundary(0xA1B9, 2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_A1BB:;
    /* $A1BB: 8D */ nes_instruction_boundary(0xA1BB, 4); nes_write(0x2006, g_cpu.A);
label_A1BE:;
    /* $A1BE: A9 */ nes_instruction_boundary(0xA1BE, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1C0:;
    /* $A1C0: 8D */ nes_instruction_boundary(0xA1C0, 4); nes_write(0x2006, g_cpu.A);
label_A1C3:;
    /* $A1C3: BA */ nes_instruction_boundary(0xA1C3, 2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A1C4:;
    /* $A1C4: 86 */ nes_instruction_boundary(0xA1C4, 3); nes_write(0xFF, g_cpu.X);
label_A1C6:;
    /* $A1C6: A2 */ nes_instruction_boundary(0xA1C6, 2); g_cpu.X = 0x81; FLAG_NZ(g_cpu.X);
label_A1C8:;
    /* $A1C8: 9A */ nes_instruction_boundary(0xA1C8, 2); g_cpu.S = g_cpu.X;
label_A1C9:;
    /* $A1C9: AC */ nes_instruction_boundary(0xA1C9, 4); g_cpu.Y = nes_read(0x0181); FLAG_NZ(g_cpu.Y);
label_A1CC:;
    /* $A1CC: A5 */ nes_instruction_boundary(0xA1CC, 3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A1CE:;
    /* $A1CE: D0 */ nes_instruction_boundary(0xA1CE, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A20E; }
label_A1D0:;
    /* $A1D0: 8C */ nes_instruction_boundary(0xA1D0, 4); nes_write(0x2007, g_cpu.Y);
label_A1D3:;
    /* $A1D3: 68 */ nes_instruction_boundary(0xA1D3, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A1D4:;
    /* $A1D4: 8D */ nes_instruction_boundary(0xA1D4, 4); nes_write(0x2007, g_cpu.A);
label_A1D7:;
    /* $A1D7: 68 */ nes_instruction_boundary(0xA1D7, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A1D8:;
    /* $A1D8: 8D */ nes_instruction_boundary(0xA1D8, 4); nes_write(0x2007, g_cpu.A);
label_A1DB:;
    /* $A1DB: 68 */ nes_instruction_boundary(0xA1DB, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A1DC:;
    /* $A1DC: 8D */ nes_instruction_boundary(0xA1DC, 4); nes_write(0x2007, g_cpu.A);
label_A1DF:;
    /* $A1DF: 8C */ nes_instruction_boundary(0xA1DF, 4); nes_write(0x2007, g_cpu.Y);
label_A1E2:;
    /* $A1E2: 68 */ nes_instruction_boundary(0xA1E2, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A1E3:;
    /* $A1E3: 8D */ nes_instruction_boundary(0xA1E3, 4); nes_write(0x2007, g_cpu.A);
label_A1E6:;
    /* $A1E6: 68 */ nes_instruction_boundary(0xA1E6, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A1E7:;
    /* $A1E7: 8D */ nes_instruction_boundary(0xA1E7, 4); nes_write(0x2007, g_cpu.A);
label_A1EA:;
    /* $A1EA: 68 */ nes_instruction_boundary(0xA1EA, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A1EB:;
    /* $A1EB: 8D */ nes_instruction_boundary(0xA1EB, 4); nes_write(0x2007, g_cpu.A);
label_A1EE:;
    /* $A1EE: 8C */ nes_instruction_boundary(0xA1EE, 4); nes_write(0x2007, g_cpu.Y);
label_A1F1:;
    /* $A1F1: 68 */ nes_instruction_boundary(0xA1F1, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A1F2:;
    /* $A1F2: 8D */ nes_instruction_boundary(0xA1F2, 4); nes_write(0x2007, g_cpu.A);
label_A1F5:;
    /* $A1F5: 68 */ nes_instruction_boundary(0xA1F5, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A1F6:;
    /* $A1F6: 8D */ nes_instruction_boundary(0xA1F6, 4); nes_write(0x2007, g_cpu.A);
label_A1F9:;
    /* $A1F9: 68 */ nes_instruction_boundary(0xA1F9, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A1FA:;
    /* $A1FA: 8D */ nes_instruction_boundary(0xA1FA, 4); nes_write(0x2007, g_cpu.A);
label_A1FD:;
    /* $A1FD: 8C */ nes_instruction_boundary(0xA1FD, 4); nes_write(0x2007, g_cpu.Y);
label_A200:;
    /* $A200: 8C */ nes_instruction_boundary(0xA200, 4); nes_write(0x2007, g_cpu.Y);
label_A203:;
    /* $A203: 8C */ nes_instruction_boundary(0xA203, 4); nes_write(0x2007, g_cpu.Y);
label_A206:;
    /* $A206: 8C */ nes_instruction_boundary(0xA206, 4); nes_write(0x2007, g_cpu.Y);
label_A209:;
    /* $A209: A2 */ nes_instruction_boundary(0xA209, 2); g_cpu.X = 0x8D; FLAG_NZ(g_cpu.X);
label_A20B:;
    /* $A20B: 9A */ nes_instruction_boundary(0xA20B, 2); g_cpu.S = g_cpu.X;
label_A20C:;
    /* $A20C: D0 */ nes_instruction_boundary(0xA20C, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A24A; }
label_A20E:;
    /* $A20E: 8C */ nes_instruction_boundary(0xA20E, 4); nes_write(0x2007, g_cpu.Y);
label_A211:;
    /* $A211: 68 */ nes_instruction_boundary(0xA211, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A212:;
    /* $A212: 8D */ nes_instruction_boundary(0xA212, 4); nes_write(0x2007, g_cpu.A);
label_A215:;
    /* $A215: 68 */ nes_instruction_boundary(0xA215, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A216:;
    /* $A216: 8D */ nes_instruction_boundary(0xA216, 4); nes_write(0x2007, g_cpu.A);
label_A219:;
    /* $A219: 68 */ nes_instruction_boundary(0xA219, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A21A:;
    /* $A21A: 8D */ nes_instruction_boundary(0xA21A, 4); nes_write(0x2007, g_cpu.A);
label_A21D:;
    /* $A21D: 8C */ nes_instruction_boundary(0xA21D, 4); nes_write(0x2007, g_cpu.Y);
label_A220:;
    /* $A220: 68 */ nes_instruction_boundary(0xA220, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A221:;
    /* $A221: 8D */ nes_instruction_boundary(0xA221, 4); nes_write(0x2007, g_cpu.A);
label_A224:;
    /* $A224: 68 */ nes_instruction_boundary(0xA224, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A225:;
    /* $A225: 8D */ nes_instruction_boundary(0xA225, 4); nes_write(0x2007, g_cpu.A);
label_A228:;
    /* $A228: 68 */ nes_instruction_boundary(0xA228, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A229:;
    /* $A229: 8D */ nes_instruction_boundary(0xA229, 4); nes_write(0x2007, g_cpu.A);
label_A22C:;
    /* $A22C: 8C */ nes_instruction_boundary(0xA22C, 4); nes_write(0x2007, g_cpu.Y);
label_A22F:;
    /* $A22F: 68 */ nes_instruction_boundary(0xA22F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A230:;
    /* $A230: 8D */ nes_instruction_boundary(0xA230, 4); nes_write(0x2007, g_cpu.A);
label_A233:;
    /* $A233: 68 */ nes_instruction_boundary(0xA233, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A234:;
    /* $A234: 8D */ nes_instruction_boundary(0xA234, 4); nes_write(0x2007, g_cpu.A);
label_A237:;
    /* $A237: 68 */ nes_instruction_boundary(0xA237, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A238:;
    /* $A238: 8D */ nes_instruction_boundary(0xA238, 4); nes_write(0x2007, g_cpu.A);
label_A23B:;
    /* $A23B: 8C */ nes_instruction_boundary(0xA23B, 4); nes_write(0x2007, g_cpu.Y);
label_A23E:;
    /* $A23E: 68 */ nes_instruction_boundary(0xA23E, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A23F:;
    /* $A23F: 8D */ nes_instruction_boundary(0xA23F, 4); nes_write(0x2007, g_cpu.A);
label_A242:;
    /* $A242: 68 */ nes_instruction_boundary(0xA242, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A243:;
    /* $A243: 8D */ nes_instruction_boundary(0xA243, 4); nes_write(0x2007, g_cpu.A);
label_A246:;
    /* $A246: 68 */ nes_instruction_boundary(0xA246, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A247:;
    /* $A247: 8D */ nes_instruction_boundary(0xA247, 4); nes_write(0x2007, g_cpu.A);
label_A24A:;
    /* $A24A: 8C */ nes_instruction_boundary(0xA24A, 4); nes_write(0x2007, g_cpu.Y);
label_A24D:;
    /* $A24D: 68 */ nes_instruction_boundary(0xA24D, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: 8D */ nes_instruction_boundary(0xA24E, 4); nes_write(0x2007, g_cpu.A);
label_A251:;
    /* $A251: 68 */ nes_instruction_boundary(0xA251, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A252:;
    /* $A252: 8D */ nes_instruction_boundary(0xA252, 4); nes_write(0x2007, g_cpu.A);
label_A255:;
    /* $A255: 68 */ nes_instruction_boundary(0xA255, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A256:;
    /* $A256: 8D */ nes_instruction_boundary(0xA256, 4); nes_write(0x2007, g_cpu.A);
label_A259:;
    /* $A259: 8C */ nes_instruction_boundary(0xA259, 4); nes_write(0x2007, g_cpu.Y);
label_A25C:;
    /* $A25C: 68 */ nes_instruction_boundary(0xA25C, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A25D:;
    /* $A25D: 8D */ nes_instruction_boundary(0xA25D, 4); nes_write(0x2007, g_cpu.A);
label_A260:;
    /* $A260: 68 */ nes_instruction_boundary(0xA260, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A261:;
    /* $A261: 8D */ nes_instruction_boundary(0xA261, 4); nes_write(0x2007, g_cpu.A);
label_A264:;
    /* $A264: 68 */ nes_instruction_boundary(0xA264, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A265:;
    /* $A265: 8D */ nes_instruction_boundary(0xA265, 4); nes_write(0x2007, g_cpu.A);
label_A268:;
    /* $A268: 8C */ nes_instruction_boundary(0xA268, 4); nes_write(0x2007, g_cpu.Y);
label_A26B:;
    /* $A26B: 68 */ nes_instruction_boundary(0xA26B, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A26C:;
    /* $A26C: 8D */ nes_instruction_boundary(0xA26C, 4); nes_write(0x2007, g_cpu.A);
label_A26F:;
    /* $A26F: 68 */ nes_instruction_boundary(0xA26F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A270:;
    /* $A270: 8D */ nes_instruction_boundary(0xA270, 4); nes_write(0x2007, g_cpu.A);
label_A273:;
    /* $A273: 68 */ nes_instruction_boundary(0xA273, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A274:;
    /* $A274: 8D */ nes_instruction_boundary(0xA274, 4); nes_write(0x2007, g_cpu.A);
label_A277:;
    /* $A277: 8C */ nes_instruction_boundary(0xA277, 4); nes_write(0x2007, g_cpu.Y);
label_A27A:;
    /* $A27A: 68 */ nes_instruction_boundary(0xA27A, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A27B:;
    /* $A27B: 8D */ nes_instruction_boundary(0xA27B, 4); nes_write(0x2007, g_cpu.A);
label_A27E:;
    /* $A27E: 68 */ nes_instruction_boundary(0xA27E, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A27F:;
    /* $A27F: 8D */ nes_instruction_boundary(0xA27F, 4); nes_write(0x2007, g_cpu.A);
label_A282:;
    /* $A282: 68 */ nes_instruction_boundary(0xA282, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A283:;
    /* $A283: 8D */ nes_instruction_boundary(0xA283, 4); nes_write(0x2007, g_cpu.A);
label_A286:;
    /* $A286: A9 */ nes_instruction_boundary(0xA286, 2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_A288:;
    /* $A288: 8D */ nes_instruction_boundary(0xA288, 4); nes_write(0x2006, g_cpu.A);
label_A28B:;
    /* $A28B: A9 */ nes_instruction_boundary(0xA28B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A28D:;
    /* $A28D: 8D */ nes_instruction_boundary(0xA28D, 4); nes_write(0x2006, g_cpu.A);
label_A290:;
    /* $A290: 8D */ nes_instruction_boundary(0xA290, 4); nes_write(0x2006, g_cpu.A);
label_A293:;
    /* $A293: 8D */ nes_instruction_boundary(0xA293, 4); nes_write(0x2006, g_cpu.A);
label_A296:;
    /* $A296: A6 */ nes_instruction_boundary(0xA296, 3); g_cpu.X = nes_read(0xFF); FLAG_NZ(g_cpu.X);
label_A298:;
    /* $A298: 9A */ nes_instruction_boundary(0xA298, 2); g_cpu.S = g_cpu.X;
label_A299:;
    /* $A299: 60 */ nes_instruction_boundary(0xA299, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B925_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B925_b7");
#endif
label_B925:;
    /* $B925: 01 */ nes_instruction_boundary(0xB925, 6); g_cpu.A |= nes_read(nes_read16zp((0x9D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B927:;
    /* $B927: AB */ nes_instruction_boundary(0xB927, 2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: 60 */ nes_instruction_boundary(0xB929, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B924_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B924_b7");
#endif
label_B924:;
    /* $B924: A7 */ nes_instruction_boundary(0xB924, 3); g_cpu.A = g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_B926:;
    /* $B926: 9D */ nes_instruction_boundary(0xB926, 5); nes_write((0x01AB + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B929:;
    /* $B929: 60 */ nes_instruction_boundary(0xB929, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9033_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9033_b7");
#endif
label_9033:;
    /* $9033: 01 */ nes_instruction_boundary(0x9033, 6); g_cpu.A |= nes_read(nes_read16zp((0x93 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9035:;
    /* $9035: 01 */ nes_instruction_boundary(0x9035, 6); g_cpu.A |= nes_read(nes_read16zp((0x7C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9037:;
    /* $9037: 01 */ nes_instruction_boundary(0x9037, 6); g_cpu.A |= nes_read(nes_read16zp((0x67 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9039:;
    /* $9039: 01 */ nes_instruction_boundary(0x9039, 6); g_cpu.A |= nes_read(nes_read16zp((0x53 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_903B:;
    /* $903B: 01 */ nes_instruction_boundary(0x903B, 6); g_cpu.A |= nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_903D:;
    /* $903D: 01 */ nes_instruction_boundary(0x903D, 6); g_cpu.A |= nes_read(nes_read16zp((0x2E + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_903F:;
    /* $903F: 01 */ nes_instruction_boundary(0x903F, 6); g_cpu.A |= nes_read(nes_read16zp((0x1D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9041:;
    /* $9041: 01 */ nes_instruction_boundary(0x9041, 6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9043:;
    /* $9043: 01 */ nes_instruction_boundary(0x9043, 6); g_cpu.A |= nes_read(nes_read16zp((0xFE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9045:;
    /* $9045: 00 */ nes_instruction_boundary(0x9045, 7); nes_brk_executed(0x9045); return;
}

void func_F617_body(int _entry) {
    switch (_entry) {
        case 1: goto label_F621;
        case 2: goto label_F630;
        case 3: goto label_F660;
    }
label_F617:;
    /* $F617: A0 */ nes_instruction_boundary(0xF617, 2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_F619:;
    /* $F619: B9 */ nes_instruction_boundary(0xF619, 4); g_cpu.A = nes_read((0x00A0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F61C:;
    /* $F61C: 10 */ nes_instruction_boundary(0xF61C, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_F622; }
label_F61E:;
    /* $F61E: 88 */ nes_instruction_boundary(0xF61E, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F61F:;
    /* $F61F: 10 */ nes_instruction_boundary(0xF61F, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xF619, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F619;
    }
label_F621:;
    /* $F621: 60 */ nes_instruction_boundary(0xF621, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F622:;
    /* $F622: A9 */ nes_instruction_boundary(0xF622, 2); g_cpu.A = 0x8E; FLAG_NZ(g_cpu.A);
label_F624:;
    /* $F624: 99 */ nes_instruction_boundary(0xF624, 5); nes_write((0x00A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F627:;
    /* $F627: AD */ nes_instruction_boundary(0xF627, 4); g_cpu.A = nes_read(0x019E); FLAG_NZ(g_cpu.A);
label_F62A:;
    /* $F62A: 99 */ nes_instruction_boundary(0xF62A, 5); nes_write((0x03E1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F62D:;
    /* $F62D: AD */ nes_instruction_boundary(0xF62D, 4); g_cpu.A = nes_read(0x01A2); FLAG_NZ(g_cpu.A);
label_F630:;
    /* $F630: 99 */ nes_instruction_boundary(0xF630, 5); nes_write((0x0421 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F633:;
    /* $F633: A5 */ nes_instruction_boundary(0xF633, 3); g_cpu.A = nes_read(0x8A); FLAG_NZ(g_cpu.A);
label_F635:;
    /* $F635: C9 */ nes_instruction_boundary(0xF635, 2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_F637:;
    /* $F637: D0 */ nes_instruction_boundary(0xF637, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F63B; }
label_F639:;
    /* $F639: A9 */ nes_instruction_boundary(0xF639, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_F63B:;
    /* $F63B: 99 */ nes_instruction_boundary(0xF63B, 5); nes_write((0x03C1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F63E:;
    /* $F63E: A9 */ nes_instruction_boundary(0xF63E, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F640:;
    /* $F640: 99 */ nes_instruction_boundary(0xF640, 5); nes_write((0x0401 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F643:;
    /* $F643: 99 */ nes_instruction_boundary(0xF643, 5); nes_write((0x03F1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F646:;
    /* $F646: 99 */ nes_instruction_boundary(0xF646, 5); nes_write((0x0431 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F649:;
    /* $F649: A9 */ nes_instruction_boundary(0xF649, 2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_F64B:;
    /* $F64B: 99 */ nes_instruction_boundary(0xF64B, 5); nes_write((0x0441 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F64E:;
    /* $F64E: A9 */ nes_instruction_boundary(0xF64E, 2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_F650:;
    /* $F650: 99 */ nes_instruction_boundary(0xF650, 5); nes_write((0x03B1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F653:;
    /* $F653: A9 */ nes_instruction_boundary(0xF653, 2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_F655:;
    /* $F655: 99 */ nes_instruction_boundary(0xF655, 5); nes_write((0x0451 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F658:;
    /* $F658: 99 */ nes_instruction_boundary(0xF658, 5); nes_write((0x0461 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F65B:;
    /* $F65B: A9 */ nes_instruction_boundary(0xF65B, 2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_F65D:;
    /* $F65D: 8D */ nes_instruction_boundary(0xF65D, 4); nes_write(0x0001, g_cpu.A);
label_F660:;
    /* $F660: 60 */ nes_instruction_boundary(0xF660, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F617(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F617");
#endif
    func_F617_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F621(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F621");
#endif
    func_F617_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F630(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F630");
#endif
    func_F617_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F660(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F660");
#endif
    func_F617_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A404_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A404_b7");
#endif
label_A404:;
    /* $A404: 06 */ nes_instruction_boundary(0xA404, 5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A406:;
    /* $A406: AD */ nes_instruction_boundary(0xA406, 4); g_cpu.A = nes_read(0x2007); FLAG_NZ(g_cpu.A);
label_A409:;
    /* $A409: A2 */ nes_instruction_boundary(0xA409, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A40B:;
    /* $A40B: AD */ nes_instruction_boundary(0xA40B, 4); g_cpu.A = nes_read(0x2007); FLAG_NZ(g_cpu.A);
label_A40E:;
    /* $A40E: 9D */ nes_instruction_boundary(0xA40E, 5); nes_write((0x0100 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A411:;
    /* $A411: E8 */ nes_instruction_boundary(0xA411, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A412:;
    /* $A412: E4 */ nes_instruction_boundary(0xA412, 3); { uint8_t m=nes_read(0x57); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A414:;
    /* $A414: D0 */ nes_instruction_boundary(0xA414, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xA40B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A40B;
    }
label_A416:;
    /* $A416: 60 */ nes_instruction_boundary(0xA416, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D28A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D28A");
#endif
label_D28A:;
    /* $D28A: 20 */ nes_instruction_boundary(0xD28A, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FB30(); g_code_window_base = _swb; }
label_D28D:;
    /* $D28D: CA */ nes_instruction_boundary(0xD28D, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_D28E:;
    /* $D28E: D0 */ nes_instruction_boundary(0xD28E, 2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1283), -1); return; }
label_D290:;
    /* $D290: A2 */ nes_instruction_boundary(0xD290, 2); g_cpu.X = 0x06; FLAG_NZ(g_cpu.X);
label_D292:;
    /* $D292: A0 */ nes_instruction_boundary(0xD292, 2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_D294:;
    /* $D294: 8E */ nes_instruction_boundary(0xD294, 4); nes_write(0x8000, g_cpu.X);
label_D297:;
    /* $D297: 8C */ nes_instruction_boundary(0xD297, 4); nes_write(0x8001, g_cpu.Y);
label_D29A:;
    /* $D29A: E8 */ nes_instruction_boundary(0xD29A, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_D29B:;
    /* $D29B: C8 */ nes_instruction_boundary(0xD29B, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D29C:;
    /* $D29C: 8E */ nes_instruction_boundary(0xD29C, 4); nes_write(0x8000, g_cpu.X);
label_D29F:;
    /* $D29F: 8C */ nes_instruction_boundary(0xD29F, 4); nes_write(0x8001, g_cpu.Y);
label_D2A2:;
    /* $D2A2: A2 */ nes_instruction_boundary(0xD2A2, 2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_D2A4:;
    /* $D2A4: 8E */ nes_instruction_boundary(0xD2A4, 4); nes_write(0x2005, g_cpu.X);
label_D2A7:;
    /* $D2A7: 8E */ nes_instruction_boundary(0xD2A7, 4); nes_write(0x2005, g_cpu.X);
label_D2AA:;
    /* $D2AA: 8E */ nes_instruction_boundary(0xD2AA, 4); nes_write(0xE000, g_cpu.X);
label_D2AD:;
    /* $D2AD: 8E */ nes_instruction_boundary(0xD2AD, 4); nes_write(0x4010, g_cpu.X);
label_D2B0:;
    /* $D2B0: 8E */ nes_instruction_boundary(0xD2B0, 4); nes_write(0xA000, g_cpu.X);
label_D2B3:;
    /* $D2B3: E8 */ nes_instruction_boundary(0xD2B3, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_D2B4:;
    /* $D2B4: A9 */ nes_instruction_boundary(0xD2B4, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_D2B6:;
    /* $D2B6: 8D */ nes_instruction_boundary(0xD2B6, 4); nes_write(0x4015, g_cpu.A);
label_D2B9:;
    /* $D2B9: A9 */ nes_instruction_boundary(0xD2B9, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_D2BB:;
    /* $D2BB: 8D */ nes_instruction_boundary(0xD2BB, 4); nes_write(0x4017, g_cpu.A);
label_D2BE:;
    /* $D2BE: 8E */ nes_instruction_boundary(0xD2BE, 4); nes_write(0xA001, g_cpu.X);
label_D2C1:;
    /* $D2C1: AD */ nes_instruction_boundary(0xD2C1, 4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_D2C4:;
    /* $D2C4: A9 */ nes_instruction_boundary(0xD2C4, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_D2C6:;
    /* $D2C6: AA */ nes_instruction_boundary(0xD2C6, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_D2C7:;
    /* $D2C7: 8D */ nes_instruction_boundary(0xD2C7, 4); nes_write(0x2006, g_cpu.A);
label_D2CA:;
    /* $D2CA: 8D */ nes_instruction_boundary(0xD2CA, 4); nes_write(0x2006, g_cpu.A);
label_D2CD:;
    /* $D2CD: 49 */ nes_instruction_boundary(0xD2CD, 2); g_cpu.A ^= 0x10; FLAG_NZ(g_cpu.A);
label_D2CF:;
    /* $D2CF: CA */ nes_instruction_boundary(0xD2CF, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_D2D0:;
    /* $D2D0: D0 */ nes_instruction_boundary(0xD2D0, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xD2C7, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D2C7;
    }
label_D2D2:;
    /* $D2D2: 20 */ nes_instruction_boundary(0xD2D2, 6); nes_dispatch_call(0xD2F6, -1);
label_D2D5:;
    /* $D2D5: A9 */ nes_instruction_boundary(0xD2D5, 2); g_cpu.A = 0x88; FLAG_NZ(g_cpu.A);
label_D2D7:;
    /* $D2D7: 85 */ nes_instruction_boundary(0xD2D7, 3); nes_write(0x37, g_cpu.A);
label_D2D9:;
    /* $D2D9: A9 */ nes_instruction_boundary(0xD2D9, 2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_D2DB:;
    /* $D2DB: 85 */ nes_instruction_boundary(0xD2DB, 3); nes_write(0x38, g_cpu.A);
label_D2DD:;
    /* $D2DD: A9 */ nes_instruction_boundary(0xD2DD, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_D2DF:;
    /* $D2DF: A0 */ nes_instruction_boundary(0xD2DF, 2); g_cpu.Y = 0x18; FLAG_NZ(g_cpu.Y);
label_D2E1:;
    /* $D2E1: 99 */ nes_instruction_boundary(0xD2E1, 5); nes_write((0x0181 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D2E4:;
    /* $D2E4: 88 */ nes_instruction_boundary(0xD2E4, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D2E5:;
    /* $D2E5: 10 */ nes_instruction_boundary(0xD2E5, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xD2E1, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D2E1;
    }
label_D2E7:;
    /* $D2E7: 20 */ nes_instruction_boundary(0xD2E7, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E1B9(); g_code_window_base = _swb; }
label_D2EA:;
    /* $D2EA: 58 */ nes_instruction_boundary(0xD2EA, 2); g_cpu.I = 0;
label_D2EB:;
    /* $D2EB: A2 */ nes_instruction_boundary(0xD2EB, 2); g_cpu.X = 0x06; FLAG_NZ(g_cpu.X);
label_D2ED:;
    /* $D2ED: 20 */ nes_instruction_boundary(0xD2ED, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E5D1(); g_code_window_base = _swb; }
label_D2F0:;
    /* $D2F0: 20 */ nes_instruction_boundary(0xD2F0, 6); nes_dispatch_call(0xCFBF, -1);
label_D2F3:;
    /* $D2F3: 4C */ nes_instruction_boundary(0xD2F3, 3); nes_cpu_instruction_boundary(0xD406, 2); call_by_address_tail(0xD406, -1); return;
}

void func_A420_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A420_b7");
#endif
label_A420:;
    /* $A420: 56 */ nes_instruction_boundary(0xA420, 6); { uint16_t a=(0x8D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A422:;
    /* $A422: 06 */ nes_instruction_boundary(0xA422, 5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A424:;
    /* $A424: A5 */ nes_instruction_boundary(0xA424, 3); g_cpu.A = nes_read(0x55); FLAG_NZ(g_cpu.A);
label_A426:;
    /* $A426: 8D */ nes_instruction_boundary(0xA426, 4); nes_write(0x2006, g_cpu.A);
label_A429:;
    /* $A429: A0 */ nes_instruction_boundary(0xA429, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A42B:;
    /* $A42B: B1 */ nes_instruction_boundary(0xA42B, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A42D:;
    /* $A42D: 8D */ nes_instruction_boundary(0xA42D, 4); nes_write(0x2007, g_cpu.A);
label_A430:;
    /* $A430: C8 */ nes_instruction_boundary(0xA430, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A431:;
    /* $A431: C4 */ nes_instruction_boundary(0xA431, 3); { uint8_t m=nes_read(0x57); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A433:;
    /* $A433: D0 */ nes_instruction_boundary(0xA433, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xA42B, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A42B;
    }
label_A435:;
    /* $A435: 60 */ nes_instruction_boundary(0xA435, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4A4_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4A4_b7");
#endif
label_B4A4:;
    /* $B4A4: A0 */ nes_instruction_boundary(0xB4A4, 2); g_cpu.Y = 0x9C; FLAG_NZ(g_cpu.Y);
label_B4A6:;
    /* $B4A6: 84 */ nes_instruction_boundary(0xB4A6, 3); nes_write(0x01, g_cpu.Y);
label_B4A8:;
    /* $B4A8: 60 */ nes_instruction_boundary(0xB4A8, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9BE_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9BE_b7");
#endif
label_A9BE:;
    /* $A9BE: 8E */ nes_instruction_boundary(0xA9BE, 4); nes_write(0x8000, g_cpu.X);
label_A9C1:;
    /* $A9C1: 8E */ nes_instruction_boundary(0xA9C1, 4); nes_write(0x8001, g_cpu.X);
label_A9C4:;
    /* $A9C4: 4C */ nes_instruction_boundary(0xA9C4, 3); nes_cpu_instruction_boundary(0xE613, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E613(); g_code_window_base = _swb; } return;
}

void func_99F5_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F5_b7");
#endif
label_99F5:;
    /* $99F5: A5 */ nes_instruction_boundary(0x99F5, 3); g_cpu.A = nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_99F7:;
    /* $99F7: 85 */ nes_instruction_boundary(0x99F7, 3); nes_write(0x21, g_cpu.A);
label_99F9:;
    /* $99F9: A5 */ nes_instruction_boundary(0x99F9, 3); g_cpu.A = nes_read(0x20); FLAG_NZ(g_cpu.A);
label_99FB:;
    /* $99FB: 85 */ nes_instruction_boundary(0x99FB, 3); nes_write(0x22, g_cpu.A);
label_99FD:;
    /* $99FD: 60 */ nes_instruction_boundary(0x99FD, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0B4_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0B4_b7");
#endif
label_A0B4:;
    /* $A0B4: 20 */ nes_instruction_boundary(0xA0B4, 6); nes_dispatch_call(0x11BD, -1);
label_A0B7:;
    /* $A0B7: AF */ nes_instruction_boundary(0xA0B7, 4); g_cpu.A = g_cpu.X = nes_read(0x068D); FLAG_NZ(g_cpu.A);
label_A0BA:;
    /* $A0BA: 20 */ nes_instruction_boundary(0xA0BA, 6); nes_dispatch_call(0x40B1, -1);
label_A0BD:;
    /* $A0BD: 8D */ nes_instruction_boundary(0xA0BD, 4); nes_write(0x2007, g_cpu.A);
label_A0C0:;
    /* $A0C0: C8 */ nes_instruction_boundary(0xA0C0, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0C1:;
    /* $A0C1: B1 */ nes_instruction_boundary(0xA0C1, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: 8D */ nes_instruction_boundary(0xA0C3, 4); nes_write(0x2007, g_cpu.A);
label_A0C6:;
    /* $A0C6: C8 */ nes_instruction_boundary(0xA0C6, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0C7:;
    /* $A0C7: B1 */ nes_instruction_boundary(0xA0C7, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C9:;
    /* $A0C9: 8D */ nes_instruction_boundary(0xA0C9, 4); nes_write(0x2007, g_cpu.A);
label_A0CC:;
    /* $A0CC: C8 */ nes_instruction_boundary(0xA0CC, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0CD:;
    /* $A0CD: B1 */ nes_instruction_boundary(0xA0CD, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 8D */ nes_instruction_boundary(0xA0CF, 4); nes_write(0x2007, g_cpu.A);
label_A0D2:;
    /* $A0D2: C8 */ nes_instruction_boundary(0xA0D2, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0D3:;
    /* $A0D3: B1 */ nes_instruction_boundary(0xA0D3, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0D5:;
    /* $A0D5: 8D */ nes_instruction_boundary(0xA0D5, 4); nes_write(0x2007, g_cpu.A);
label_A0D8:;
    /* $A0D8: C8 */ nes_instruction_boundary(0xA0D8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0D9:;
    /* $A0D9: B1 */ nes_instruction_boundary(0xA0D9, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 8D */ nes_instruction_boundary(0xA0DB, 4); nes_write(0x2007, g_cpu.A);
label_A0DE:;
    /* $A0DE: C8 */ nes_instruction_boundary(0xA0DE, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0DF:;
    /* $A0DF: B1 */ nes_instruction_boundary(0xA0DF, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 8D */ nes_instruction_boundary(0xA0E1, 4); nes_write(0x2007, g_cpu.A);
label_A0E4:;
    /* $A0E4: C8 */ nes_instruction_boundary(0xA0E4, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0E5:;
    /* $A0E5: B1 */ nes_instruction_boundary(0xA0E5, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 8D */ nes_instruction_boundary(0xA0E7, 4); nes_write(0x2007, g_cpu.A);
label_A0EA:;
    /* $A0EA: C8 */ nes_instruction_boundary(0xA0EA, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0EB:;
    /* $A0EB: B1 */ nes_instruction_boundary(0xA0EB, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 8D */ nes_instruction_boundary(0xA0ED, 4); nes_write(0x2007, g_cpu.A);
label_A0F0:;
    /* $A0F0: C8 */ nes_instruction_boundary(0xA0F0, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0F1:;
    /* $A0F1: B1 */ nes_instruction_boundary(0xA0F1, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0F3:;
    /* $A0F3: 8D */ nes_instruction_boundary(0xA0F3, 4); nes_write(0x2007, g_cpu.A);
label_A0F6:;
    /* $A0F6: C8 */ nes_instruction_boundary(0xA0F6, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0F7:;
    /* $A0F7: B1 */ nes_instruction_boundary(0xA0F7, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0F9:;
    /* $A0F9: 8D */ nes_instruction_boundary(0xA0F9, 4); nes_write(0x2007, g_cpu.A);
label_A0FC:;
    /* $A0FC: C8 */ nes_instruction_boundary(0xA0FC, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0FD:;
    /* $A0FD: B1 */ nes_instruction_boundary(0xA0FD, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0FF:;
    /* $A0FF: 8D */ nes_instruction_boundary(0xA0FF, 4); nes_write(0x2007, g_cpu.A);
label_A102:;
    /* $A102: C8 */ nes_instruction_boundary(0xA102, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A103:;
    /* $A103: B1 */ nes_instruction_boundary(0xA103, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 8D */ nes_instruction_boundary(0xA105, 4); nes_write(0x2007, g_cpu.A);
label_A108:;
    /* $A108: C8 */ nes_instruction_boundary(0xA108, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A109:;
    /* $A109: B1 */ nes_instruction_boundary(0xA109, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10B:;
    /* $A10B: 8D */ nes_instruction_boundary(0xA10B, 4); nes_write(0x2007, g_cpu.A);
label_A10E:;
    /* $A10E: C8 */ nes_instruction_boundary(0xA10E, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A10F:;
    /* $A10F: E8 */ nes_instruction_boundary(0xA10F, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A110:;
    /* $A110: E0 */ nes_instruction_boundary(0xA110, 2); { int r=g_cpu.X-0x0E; g_cpu.C=(g_cpu.X>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A112:;
    /* $A112: D0 */ nes_instruction_boundary(0xA112, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x00AC), -1); return; }
label_A114:;
    /* $A114: A9 */ nes_instruction_boundary(0xA114, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A116:;
    /* $A116: 8D */ nes_instruction_boundary(0xA116, 4); nes_write(0x8000, g_cpu.A);
label_A119:;
    /* $A119: A5 */ nes_instruction_boundary(0xA119, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: 8D */ nes_instruction_boundary(0xA11B, 4); nes_write(0x8001, g_cpu.A);
label_A11E:;
    /* $A11E: 60 */ nes_instruction_boundary(0xA11E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD16_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD16_b7");
#endif
label_AD16:;
    /* $AD16: A5 */ nes_instruction_boundary(0xAD16, 3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_AD18:;
    /* $AD18: 9D */ nes_instruction_boundary(0xAD18, 5); nes_write((0x0711 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD1B:;
    /* $AD1B: A5 */ nes_instruction_boundary(0xAD1B, 3); g_cpu.A = nes_read(0x26); FLAG_NZ(g_cpu.A);
label_AD1D:;
    /* $AD1D: 9D */ nes_instruction_boundary(0xAD1D, 5); nes_write((0x0731 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD20:;
    /* $AD20: 60 */ nes_instruction_boundary(0xAD20, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9EF5_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9F14;
    }
label_9EF5:;
    /* $9EF5: C8 */ nes_instruction_boundary(0x9EF5, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9EF6:;
    /* $9EF6: B1 */ nes_instruction_boundary(0x9EF6, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9EF8:;
    /* $9EF8: 8D */ nes_instruction_boundary(0x9EF8, 4); nes_write(0x2007, g_cpu.A);
label_9EFB:;
    /* $9EFB: C8 */ nes_instruction_boundary(0x9EFB, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9EFC:;
    /* $9EFC: B1 */ nes_instruction_boundary(0x9EFC, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9EFE:;
    /* $9EFE: 8D */ nes_instruction_boundary(0x9EFE, 4); nes_write(0x2007, g_cpu.A);
label_9F01:;
    /* $9F01: C8 */ nes_instruction_boundary(0x9F01, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9F02:;
    /* $9F02: B1 */ nes_instruction_boundary(0x9F02, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F04:;
    /* $9F04: 8D */ nes_instruction_boundary(0x9F04, 4); nes_write(0x2007, g_cpu.A);
label_9F07:;
    /* $9F07: C8 */ nes_instruction_boundary(0x9F07, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9F08:;
    /* $9F08: B1 */ nes_instruction_boundary(0x9F08, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F0A:;
    /* $9F0A: 8D */ nes_instruction_boundary(0x9F0A, 4); nes_write(0x2007, g_cpu.A);
label_9F0D:;
    /* $9F0D: C8 */ nes_instruction_boundary(0x9F0D, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9F0E:;
    /* $9F0E: B1 */ nes_instruction_boundary(0x9F0E, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F10:;
    /* $9F10: 8D */ nes_instruction_boundary(0x9F10, 4); nes_write(0x2007, g_cpu.A);
label_9F13:;
    /* $9F13: C8 */ nes_instruction_boundary(0x9F13, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9F14:;
    /* $9F14: B1 */ nes_instruction_boundary(0x9F14, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F16:;
    /* $9F16: 8D */ nes_instruction_boundary(0x9F16, 4); nes_write(0x2007, g_cpu.A);
label_9F19:;
    /* $9F19: C8 */ nes_instruction_boundary(0x9F19, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9F1A:;
    /* $9F1A: B1 */ nes_instruction_boundary(0x9F1A, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F1C:;
    /* $9F1C: 8D */ nes_instruction_boundary(0x9F1C, 4); nes_write(0x2007, g_cpu.A);
label_9F1F:;
    /* $9F1F: C8 */ nes_instruction_boundary(0x9F1F, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9F20:;
    /* $9F20: B1 */ nes_instruction_boundary(0x9F20, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F22:;
    /* $9F22: 8D */ nes_instruction_boundary(0x9F22, 4); nes_write(0x2007, g_cpu.A);
label_9F25:;
    /* $9F25: C8 */ nes_instruction_boundary(0x9F25, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9F26:;
    /* $9F26: B1 */ nes_instruction_boundary(0x9F26, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F28:;
    /* $9F28: 8D */ nes_instruction_boundary(0x9F28, 4); nes_write(0x2007, g_cpu.A);
label_9F2B:;
    /* $9F2B: C8 */ nes_instruction_boundary(0x9F2B, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9F2C:;
    /* $9F2C: E8 */ nes_instruction_boundary(0x9F2C, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9F2D:;
    /* $9F2D: E0 */ nes_instruction_boundary(0x9F2D, 2); { int r=g_cpu.X-0x0A; g_cpu.C=(g_cpu.X>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9F2F:;
    /* $9F2F: F0 */ nes_instruction_boundary(0x9F2F, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F34; }
label_9F31:;
    /* $9F31: 4C */ nes_instruction_boundary(0x9F31, 3); nes_cpu_instruction_boundary(0xDEA8, 2); call_by_address_tail(0xDEA8, -1); return;
label_9F34:;
    /* $9F34: A9 */ nes_instruction_boundary(0x9F34, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_9F36:;
    /* $9F36: 8D */ nes_instruction_boundary(0x9F36, 4); nes_write(0x8000, g_cpu.A);
label_9F39:;
    /* $9F39: 68 */ nes_instruction_boundary(0x9F39, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9F3A:;
    /* $9F3A: 8D */ nes_instruction_boundary(0x9F3A, 4); nes_write(0x8001, g_cpu.A);
label_9F3D:;
    /* $9F3D: 60 */ nes_instruction_boundary(0x9F3D, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9EF5_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9EF5_b7");
#endif
    func_9EF5_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9F14_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9F14_b7");
#endif
    func_9EF5_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9920_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9920_b7");
#endif
label_9920:;
    /* $9920: AD */ nes_instruction_boundary(0x9920, 4); g_cpu.A = nes_read(0x07FE); FLAG_NZ(g_cpu.A);
label_9923:;
    /* $9923: 0A */ nes_instruction_boundary(0x9923, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9924:;
    /* $9924: A9 */ nes_instruction_boundary(0x9924, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9926:;
    /* $9926: 2A */ nes_instruction_boundary(0x9926, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9927:;
    /* $9927: A8 */ nes_instruction_boundary(0x9927, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9928:;
    /* $9928: B9 */ nes_instruction_boundary(0x9928, 4); g_cpu.A = nes_read((0xD94E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_992B:;
    /* $992B: 85 */ nes_instruction_boundary(0x992B, 3); nes_write(0x46, g_cpu.A);
label_992D:;
    /* $992D: A9 */ nes_instruction_boundary(0x992D, 2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_992F:;
    /* $992F: 85 */ nes_instruction_boundary(0x992F, 3); nes_write(0x47, g_cpu.A);
label_9931:;
    /* $9931: A2 */ nes_instruction_boundary(0x9931, 2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_9933:;
    /* $9933: A9 */ nes_instruction_boundary(0x9933, 2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_9935:;
    /* $9935: 9D */ nes_instruction_boundary(0x9935, 5); nes_write((0x018E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9938:;
    /* $9938: 9D */ nes_instruction_boundary(0x9938, 5); nes_write((0x0175 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_993B:;
    /* $993B: BD */ nes_instruction_boundary(0x993B, 4); g_cpu.A = nes_read((0xD948 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_993E:;
    /* $993E: 9D */ nes_instruction_boundary(0x993E, 5); nes_write((0x0194 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9941:;
    /* $9941: 9D */ nes_instruction_boundary(0x9941, 5); nes_write((0x017B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9944:;
    /* $9944: CA */ nes_instruction_boundary(0x9944, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9945:;
    /* $9945: 10 */ nes_instruction_boundary(0x9945, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x9933, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9933;
    }
label_9947:;
    /* $9947: 60 */ nes_instruction_boundary(0x9947, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9F6_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9F6_b7");
#endif
label_A9F6:;
    /* $A9F6: 84 */ nes_instruction_boundary(0xA9F6, 3); nes_write(0x95, g_cpu.Y);
label_A9F8:;
    /* $A9F8: 60 */ nes_instruction_boundary(0xA9F8, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4E9_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A505;
        case 2: goto label_A503;
        case 3: goto label_A501;
        case 4: goto label_A50D;
    }
label_A4E9:;
    /* $A4E9: A5 */ nes_instruction_boundary(0xA4E9, 3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A4EB:;
    /* $A4EB: 4A */ nes_instruction_boundary(0xA4EB, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4EC:;
    /* $A4EC: 4A */ nes_instruction_boundary(0xA4EC, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4ED:;
    /* $A4ED: 4A */ nes_instruction_boundary(0xA4ED, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4EE:;
    /* $A4EE: 4A */ nes_instruction_boundary(0xA4EE, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4EF:;
    /* $A4EF: 18 */ nes_instruction_boundary(0xA4EF, 2); g_cpu.C = 0;
label_A4F0:;
    /* $A4F0: 65 */ nes_instruction_boundary(0xA4F0, 3); { uint8_t m=nes_read(0x23); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4F2:;
    /* $A4F2: 85 */ nes_instruction_boundary(0xA4F2, 3); nes_write(0x23, g_cpu.A);
label_A4F4:;
    /* $A4F4: 98 */ nes_instruction_boundary(0xA4F4, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A4F5:;
    /* $A4F5: 29 */ nes_instruction_boundary(0xA4F5, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A4F7:;
    /* $A4F7: 85 */ nes_instruction_boundary(0xA4F7, 3); nes_write(0x24, g_cpu.A);
label_A4F9:;
    /* $A4F9: 98 */ nes_instruction_boundary(0xA4F9, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A4FA:;
    /* $A4FA: 4A */ nes_instruction_boundary(0xA4FA, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4FB:;
    /* $A4FB: 4A */ nes_instruction_boundary(0xA4FB, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4FC:;
    /* $A4FC: 4A */ nes_instruction_boundary(0xA4FC, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4FD:;
    /* $A4FD: 4A */ nes_instruction_boundary(0xA4FD, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4FE:;
    /* $A4FE: 18 */ nes_instruction_boundary(0xA4FE, 2); g_cpu.C = 0;
label_A4FF:;
    /* $A4FF: 65 */ nes_instruction_boundary(0xA4FF, 3); { uint8_t m=nes_read(0x23); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A501:;
    /* $A501: C9 */ nes_instruction_boundary(0xA501, 2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_A503:;
    /* $A503: 90 */ nes_instruction_boundary(0xA503, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A509; }
label_A505:;
    /* $A505: E9 */ nes_instruction_boundary(0xA505, 2); { uint8_t m=0x0F; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A507:;
    /* $A507: 10 */ nes_instruction_boundary(0xA507, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xA501, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A501;
    }
label_A509:;
    /* $A509: 0A */ nes_instruction_boundary(0xA509, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A50A:;
    /* $A50A: 0A */ nes_instruction_boundary(0xA50A, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A50B:;
    /* $A50B: 0A */ nes_instruction_boundary(0xA50B, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A50C:;
    /* $A50C: 0A */ nes_instruction_boundary(0xA50C, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A50D:;
    /* $A50D: 05 */ nes_instruction_boundary(0xA50D, 3); g_cpu.A |= nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A50F:;
    /* $A50F: 60 */ nes_instruction_boundary(0xA50F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4E9_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4E9_b7");
#endif
    func_A4E9_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A505_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A505_b7");
#endif
    func_A4E9_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A503_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A503_b7");
#endif
    func_A4E9_b7_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A501_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A501_b7");
#endif
    func_A4E9_b7_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A50D_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A50D_b7");
#endif
    func_A4E9_b7_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9E20_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9E20_b7");
#endif
label_9E20:;
    /* $9E20: 80 */ nes_instruction_boundary(0x9E20, 2); /* NOP */
label_9E22:;
    /* $9E22: 45 */ nes_instruction_boundary(0x9E22, 3); g_cpu.A ^= nes_read(0x8D); FLAG_NZ(g_cpu.A);
label_9E24:;
    /* $9E24: 01 */ nes_instruction_boundary(0x9E24, 6); g_cpu.A |= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9E26:;
    /* $9E26: E8 */ nes_instruction_boundary(0x9E26, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9E27:;
    /* $9E27: 8E */ nes_instruction_boundary(0x9E27, 4); nes_write(0x8000, g_cpu.X);
label_9E2A:;
    /* $9E2A: A5 */ nes_instruction_boundary(0x9E2A, 3); g_cpu.A = nes_read(0x46); FLAG_NZ(g_cpu.A);
label_9E2C:;
    /* $9E2C: 8D */ nes_instruction_boundary(0x9E2C, 4); nes_write(0x8001, g_cpu.A);
label_9E2F:;
    /* $9E2F: E8 */ nes_instruction_boundary(0x9E2F, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9E30:;
    /* $9E30: 8E */ nes_instruction_boundary(0x9E30, 4); nes_write(0x8000, g_cpu.X);
label_9E33:;
    /* $9E33: A5 */ nes_instruction_boundary(0x9E33, 3); g_cpu.A = nes_read(0x47); FLAG_NZ(g_cpu.A);
label_9E35:;
    /* $9E35: 8D */ nes_instruction_boundary(0x9E35, 4); nes_write(0x8001, g_cpu.A);
label_9E38:;
    /* $9E38: 60 */ nes_instruction_boundary(0x9E38, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E118_body(int _entry) {
    switch (_entry) {
        case 1: goto label_E11C;
    }
label_E118:;
    /* $E118: 80 */ nes_instruction_boundary(0xE118, 2); /* NOP */
label_E11A:;
    /* $E11A: 49 */ nes_instruction_boundary(0xE11A, 2); g_cpu.A ^= 0x8D; FLAG_NZ(g_cpu.A);
label_E11C:;
    /* $E11C: 01 */ nes_instruction_boundary(0xE11C, 6); g_cpu.A |= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E11E:;
    /* $E11E: 60 */ nes_instruction_boundary(0xE11E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E118(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E118");
#endif
    func_E118_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E11C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E11C");
#endif
    func_E118_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A951_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A951_b7");
#endif
label_A951:;
    /* $A951: 20 */ nes_instruction_boundary(0xA951, 6); nes_dispatch_call(0x068E, -1);
label_A954:;
    /* $A954: 20 */ nes_instruction_boundary(0xA954, 6); nes_dispatch_call(0x068C, -1);
label_A957:;
    /* $A957: 20 */ nes_instruction_boundary(0xA957, 6); nes_dispatch_call(0x07AD, -1);
label_A95A:;
    /* $A95A: 20 */ nes_instruction_boundary(0xA95A, 6); nes_dispatch_call(0x07AC, -1);
label_A95D:;
    /* $A95D: 20 */ nes_instruction_boundary(0xA95D, 6); nes_dispatch_call(0x40C4, -1);
label_A960:;
    /* $A960: F0 */ nes_instruction_boundary(0xA960, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A964; }
label_A962:;
    /* $A962: A0 */ nes_instruction_boundary(0xA962, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A964:;
    /* $A964: B1 */ nes_instruction_boundary(0xA964, 5); g_cpu.A = nes_read((nes_read16zp(0x6D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A966:;
    /* $A966: AA */ nes_instruction_boundary(0xA966, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A967:;
    /* $A967: 8E */ nes_instruction_boundary(0xA967, 4); nes_write(0x01B4, g_cpu.X);
label_A96A:;
    /* $A96A: A2 */ nes_instruction_boundary(0xA96A, 2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_A96C:;
    /* $A96C: B4 */ nes_instruction_boundary(0xA96C, 4); g_cpu.Y = nes_read((0xDF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A96E:;
    /* $A96E: F0 */ nes_instruction_boundary(0xA96E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A98C; }
label_A970:;
    /* $A970: 8C */ nes_instruction_boundary(0xA970, 4); nes_write(0x2006, g_cpu.Y);
label_A973:;
    /* $A973: B4 */ nes_instruction_boundary(0xA973, 4); g_cpu.Y = nes_read((0xCF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A975:;
    /* $A975: 8C */ nes_instruction_boundary(0xA975, 4); nes_write(0x2006, g_cpu.Y);
label_A978:;
    /* $A978: AC */ nes_instruction_boundary(0xA978, 4); g_cpu.Y = nes_read(0x2007); FLAG_NZ(g_cpu.Y);
label_A97B:;
    /* $A97B: AC */ nes_instruction_boundary(0xA97B, 4); g_cpu.Y = nes_read(0x2007); FLAG_NZ(g_cpu.Y);
label_A97E:;
    /* $A97E: B1 */ nes_instruction_boundary(0xA97E, 5); g_cpu.A = nes_read((nes_read16zp(0x6D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A980:;
    /* $A980: F0 */ nes_instruction_boundary(0xA980, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A98A; }
label_A982:;
    /* $A982: A9 */ nes_instruction_boundary(0xA982, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A984:;
    /* $A984: 9D */ nes_instruction_boundary(0xA984, 5); nes_write((0x03B0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A987:;
    /* $A987: 9D */ nes_instruction_boundary(0xA987, 5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A98A:;
    /* $A98A: 95 */ nes_instruction_boundary(0xA98A, 4); nes_write((0xDF + g_cpu.X) & 0xFF, g_cpu.A);
label_A98C:;
    /* $A98C: CA */ nes_instruction_boundary(0xA98C, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A98D:;
    /* $A98D: D0 */ nes_instruction_boundary(0xA98D, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xA96C, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A96C;
    }
label_A98F:;
    /* $A98F: 86 */ nes_instruction_boundary(0xA98F, 3); nes_write(0x88, g_cpu.X);
label_A991:;
    /* $A991: 8E */ nes_instruction_boundary(0xA991, 4); nes_write(0x01B3, g_cpu.X);
label_A994:;
    /* $A994: A9 */ nes_instruction_boundary(0xA994, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A996:;
    /* $A996: 8D */ nes_instruction_boundary(0xA996, 4); nes_write(0x8000, g_cpu.A);
label_A999:;
    /* $A999: A5 */ nes_instruction_boundary(0xA999, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A99B:;
    /* $A99B: 8D */ nes_instruction_boundary(0xA99B, 4); nes_write(0x8001, g_cpu.A);
label_A99E:;
    /* $A99E: 60 */ nes_instruction_boundary(0xA99E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CC9_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8CD2;
    }
label_8CC9:;
    /* $8CC9: 01 */ nes_instruction_boundary(0x8CC9, 6); g_cpu.A |= nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CCB:;
    /* $8CCB: 68 */ nes_instruction_boundary(0x8CCB, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8CCC:;
    /* $8CCC: B9 */ nes_instruction_boundary(0x8CCC, 4); g_cpu.A = nes_read((0xD100 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CCF:;
    /* $8CCF: B0 */ nes_instruction_boundary(0x8CCF, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8CD5; }
label_8CD1:;
    /* $8CD1: 4A */ nes_instruction_boundary(0x8CD1, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CD2:;
    /* $8CD2: 4A */ nes_instruction_boundary(0x8CD2, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CD3:;
    /* $8CD3: 4A */ nes_instruction_boundary(0x8CD3, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CD4:;
    /* $8CD4: 4A */ nes_instruction_boundary(0x8CD4, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CD5:;
    /* $8CD5: 29 */ nes_instruction_boundary(0x8CD5, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8CD7:;
    /* $8CD7: A6 */ nes_instruction_boundary(0x8CD7, 3); g_cpu.X = nes_read(0x0A); FLAG_NZ(g_cpu.X);
label_8CD9:;
    /* $8CD9: 60 */ nes_instruction_boundary(0x8CD9, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CC9_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CC9_b7");
#endif
    func_8CC9_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8CD2_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CD2_b7");
#endif
    func_8CC9_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A560_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A560_b7");
#endif
label_A560:;
    /* $A560: 21 */ nes_instruction_boundary(0xA560, 6); g_cpu.A &= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A562:;
    /* $A562: 01 */ nes_instruction_boundary(0xA562, 6); g_cpu.A |= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A564:;
    /* $A564: 46 */ nes_instruction_boundary(0xA564, 5); { uint16_t a=0x22; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A566:;
    /* $A566: 90 */ nes_instruction_boundary(0xA566, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A569; }
label_A568:;
    /* $A568: C8 */ nes_instruction_boundary(0xA568, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A569:;
    /* $A569: C0 */ nes_instruction_boundary(0xA569, 2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A56B:;
    /* $A56B: 6A */ nes_instruction_boundary(0xA56B, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A56C:;
    /* $A56C: CA */ nes_instruction_boundary(0xA56C, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A56D:;
    /* $A56D: 10 */ nes_instruction_boundary(0xA56D, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0553), -1); return; }
label_A56F:;
    /* $A56F: 85 */ nes_instruction_boundary(0xA56F, 3); nes_write(0x22, g_cpu.A);
label_A571:;
    /* $A571: 68 */ nes_instruction_boundary(0xA571, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A572:;
    /* $A572: 49 */ nes_instruction_boundary(0xA572, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_A574:;
    /* $A574: 25 */ nes_instruction_boundary(0xA574, 3); g_cpu.A &= nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: A6 */ nes_instruction_boundary(0xA576, 3); g_cpu.X = nes_read(0x22); FLAG_NZ(g_cpu.X);
label_A578:;
    /* $A578: 85 */ nes_instruction_boundary(0xA578, 3); nes_write(0x1F, g_cpu.A);
label_A57A:;
    /* $A57A: 86 */ nes_instruction_boundary(0xA57A, 3); nes_write(0x20, g_cpu.X);
label_A57C:;
    /* $A57C: 60 */ nes_instruction_boundary(0xA57C, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8CA5_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CA5_b7");
#endif
label_8CA5:;
    /* $8CA5: BD */ nes_instruction_boundary(0x8CA5, 4); g_cpu.A = nes_read((0x0369 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CA8:;
    /* $8CA8: 85 */ nes_instruction_boundary(0x8CA8, 3); nes_write(0x0E, g_cpu.A);
label_8CAA:;
    /* $8CAA: 79 */ nes_instruction_boundary(0x8CAA, 4); { uint8_t m=nes_read((0xD0AD + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8CAD:;
    /* $8CAD: 9D */ nes_instruction_boundary(0x8CAD, 5); nes_write((0x0369 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8CB0:;
    /* $8CB0: A5 */ nes_instruction_boundary(0x8CB0, 3); g_cpu.A = nes_read(0x0E); FLAG_NZ(g_cpu.A);
label_8CB2:;
    /* $8CB2: 4A */ nes_instruction_boundary(0x8CB2, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CB3:;
    /* $8CB3: 4A */ nes_instruction_boundary(0x8CB3, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CB4:;
    /* $8CB4: 4A */ nes_instruction_boundary(0x8CB4, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CB5:;
    /* $8CB5: 4A */ nes_instruction_boundary(0x8CB5, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CB6:;
    /* $8CB6: 48 */ nes_instruction_boundary(0x8CB6, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8CB7:;
    /* $8CB7: 18 */ nes_instruction_boundary(0x8CB7, 2); g_cpu.C = 0;
label_8CB8:;
    /* $8CB8: 79 */ nes_instruction_boundary(0x8CB8, 4); { uint8_t m=nes_read((0xD0AC + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8CBB:;
    /* $8CBB: D9 */ nes_instruction_boundary(0x8CBB, 4); { uint8_t m=nes_read((0xD0AE + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8CBE:;
    /* $8CBE: 90 */ nes_instruction_boundary(0x8CBE, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8CCA; }
label_8CC0:;
    /* $8CC0: A5 */ nes_instruction_boundary(0x8CC0, 3); g_cpu.A = nes_read(0x0E); FLAG_NZ(g_cpu.A);
label_8CC2:;
    /* $8CC2: 9D */ nes_instruction_boundary(0x8CC2, 5); nes_write((0x0369 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8CC5:;
    /* $8CC5: B9 */ nes_instruction_boundary(0x8CC5, 4); g_cpu.A = nes_read((0xD0AE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CC8:;
    /* $8CC8: E9 */ nes_instruction_boundary(0x8CC8, 2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8CCA:;
    /* $8CCA: A8 */ nes_instruction_boundary(0x8CCA, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8CCB:;
    /* $8CCB: 68 */ nes_instruction_boundary(0x8CCB, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8CCC:;
    /* $8CCC: B9 */ nes_instruction_boundary(0x8CCC, 4); g_cpu.A = nes_read((0xD100 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CCF:;
    /* $8CCF: B0 */ nes_instruction_boundary(0x8CCF, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8CD5; }
label_8CD1:;
    /* $8CD1: 4A */ nes_instruction_boundary(0x8CD1, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CD2:;
    /* $8CD2: 4A */ nes_instruction_boundary(0x8CD2, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CD3:;
    /* $8CD3: 4A */ nes_instruction_boundary(0x8CD3, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CD4:;
    /* $8CD4: 4A */ nes_instruction_boundary(0x8CD4, 2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8CD5:;
    /* $8CD5: 29 */ nes_instruction_boundary(0x8CD5, 2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8CD7:;
    /* $8CD7: A6 */ nes_instruction_boundary(0x8CD7, 3); g_cpu.X = nes_read(0x0A); FLAG_NZ(g_cpu.X);
label_8CD9:;
    /* $8CD9: 60 */ nes_instruction_boundary(0x8CD9, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9D0_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9D0_b7");
#endif
label_A9D0:;
    /* $A9D0: F8 */ nes_instruction_boundary(0xA9D0, 2); g_cpu.D = 1;
label_A9D1:;
    /* $A9D1: 60 */ nes_instruction_boundary(0xA9D1, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EA28(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EA28");
#endif
label_EA28:;
    /* $EA28: B9 */ nes_instruction_boundary(0xEA28, 4); g_cpu.A = nes_read((0x0671 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EA2B:;
    /* $EA2B: 30 */ nes_instruction_boundary(0xEA2B, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_EA38; }
label_EA2D:;
    /* $EA2D: 98 */ nes_instruction_boundary(0xEA2D, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_EA2E:;
    /* $EA2E: A4 */ nes_instruction_boundary(0xEA2E, 3); g_cpu.Y = nes_read(0x33); FLAG_NZ(g_cpu.Y);
label_EA30:;
    /* $EA30: 99 */ nes_instruction_boundary(0xEA30, 5); nes_write((0x002A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EA33:;
    /* $EA33: A8 */ nes_instruction_boundary(0xEA33, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_EA34:;
    /* $EA34: C6 */ nes_instruction_boundary(0xEA34, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EA36:;
    /* $EA36: F0 */ nes_instruction_boundary(0xEA36, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EA3B; }
label_EA38:;
    /* $EA38: 88 */ nes_instruction_boundary(0xEA38, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_EA39:;
    /* $EA39: 10 */ nes_instruction_boundary(0xEA39, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xEA28, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EA28;
    }
label_EA3B:;
    /* $EA3B: 60 */ nes_instruction_boundary(0xEA3B, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EA50(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EA50");
#endif
label_EA50:;
    /* $EA50: 20 */ nes_instruction_boundary(0xEA50, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA5C(); g_code_window_base = _swb; }
label_EA53:;
    /* $EA53: E8 */ nes_instruction_boundary(0xEA53, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_EA54:;
    /* $EA54: 88 */ nes_instruction_boundary(0xEA54, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_EA55:;
    /* $EA55: D0 */ nes_instruction_boundary(0xEA55, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xEA50, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EA50;
    }
label_EA57:;
    /* $EA57: 68 */ nes_instruction_boundary(0xEA57, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_EA58:;
    /* $EA58: AA */ nes_instruction_boundary(0xEA58, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_EA59:;
    /* $EA59: 4C */ nes_instruction_boundary(0xEA59, 3); nes_cpu_instruction_boundary(0xEA8C, 2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EA8C(); g_code_window_base = _swb; } return;
}

void func_EA30(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EA30");
#endif
label_EA30:;
    /* $EA30: 99 */ nes_instruction_boundary(0xEA30, 5); nes_write((0x002A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_EA33:;
    /* $EA33: A8 */ nes_instruction_boundary(0xEA33, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_EA34:;
    /* $EA34: C6 */ nes_instruction_boundary(0xEA34, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EA36:;
    /* $EA36: F0 */ nes_instruction_boundary(0xEA36, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EA3B; }
label_EA38:;
    /* $EA38: 88 */ nes_instruction_boundary(0xEA38, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_EA39:;
    /* $EA39: 10 */ nes_instruction_boundary(0xEA39, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0A28), -1); return; }
label_EA3B:;
    /* $EA3B: 60 */ nes_instruction_boundary(0xEA3B, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9C9_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9C9_b7");
#endif
label_A9C9:;
    /* $A9C9: B9 */ nes_instruction_boundary(0xA9C9, 4); g_cpu.A = nes_read((0x00B0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9CC:;
    /* $A9CC: 10 */ nes_instruction_boundary(0xA9CC, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A9D1; }
label_A9CE:;
    /* $A9CE: 88 */ nes_instruction_boundary(0xA9CE, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A9CF:;
    /* $A9CF: 10 */ nes_instruction_boundary(0xA9CF, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xA9C9, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A9C9;
    }
label_A9D1:;
    /* $A9D1: 60 */ nes_instruction_boundary(0xA9D1, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A5D8_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5D8_b7");
#endif
label_A5D8:;
    /* $A5D8: 84 */ nes_instruction_boundary(0xA5D8, 3); nes_write(0x60, g_cpu.Y);
label_A5DA:;
    /* $A5DA: A2 */ nes_instruction_boundary(0xA5DA, 2); g_cpu.X = 0x06; FLAG_NZ(g_cpu.X);
label_A5DC:;
    /* $A5DC: 8E */ nes_instruction_boundary(0xA5DC, 4); nes_write(0x8000, g_cpu.X);
label_A5DF:;
    /* $A5DF: A5 */ nes_instruction_boundary(0xA5DF, 3); g_cpu.A = nes_read(0x48); FLAG_NZ(g_cpu.A);
label_A5E1:;
    /* $A5E1: 8D */ nes_instruction_boundary(0xA5E1, 4); nes_write(0x8001, g_cpu.A);
label_A5E4:;
    /* $A5E4: E8 */ nes_instruction_boundary(0xA5E4, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A5E5:;
    /* $A5E5: 8E */ nes_instruction_boundary(0xA5E5, 4); nes_write(0x8000, g_cpu.X);
label_A5E8:;
    /* $A5E8: A5 */ nes_instruction_boundary(0xA5E8, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A5EA:;
    /* $A5EA: 8D */ nes_instruction_boundary(0xA5EA, 4); nes_write(0x8001, g_cpu.A);
label_A5ED:;
    /* $A5ED: C4 */ nes_instruction_boundary(0xA5ED, 3); { uint8_t m=nes_read(0x60); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5EF:;
    /* $A5EF: D0 */ nes_instruction_boundary(0xA5EF, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xA5D8, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A5D8;
    }
label_A5F1:;
    /* $A5F1: 60 */ nes_instruction_boundary(0xA5F1, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A510_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A520;
    }
label_A510:;
    /* $A510: AD */ nes_instruction_boundary(0xA510, 4); g_cpu.A = nes_read(0x07F2); FLAG_NZ(g_cpu.A);
label_A513:;
    /* $A513: 18 */ nes_instruction_boundary(0xA513, 2); g_cpu.C = 0;
label_A514:;
    /* $A514: 69 */ nes_instruction_boundary(0xA514, 2); { uint16_t r = g_cpu.A + 0x13 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x13); g_cpu.A=r&0xFF; }
label_A516:;
    /* $A516: 4D */ nes_instruction_boundary(0xA516, 4); g_cpu.A ^= nes_read(0x07F3); FLAG_NZ(g_cpu.A);
label_A519:;
    /* $A519: 8D */ nes_instruction_boundary(0xA519, 4); nes_write(0x07F2, g_cpu.A);
label_A51C:;
    /* $A51C: 18 */ nes_instruction_boundary(0xA51C, 2); g_cpu.C = 0;
label_A51D:;
    /* $A51D: 6D */ nes_instruction_boundary(0xA51D, 4); { uint8_t m=nes_read(0x07F3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A520:;
    /* $A520: 69 */ nes_instruction_boundary(0xA520, 2); { uint16_t r = g_cpu.A + 0x61 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x61); g_cpu.A=r&0xFF; }
label_A522:;
    /* $A522: 8D */ nes_instruction_boundary(0xA522, 4); nes_write(0x07F3, g_cpu.A);
label_A525:;
    /* $A525: A5 */ nes_instruction_boundary(0xA525, 3); g_cpu.A = nes_read(0x4A); FLAG_NZ(g_cpu.A);
label_A527:;
    /* $A527: F0 */ nes_instruction_boundary(0xA527, 2); if (g_cpu.Z) {
    nes_instruction_boundary(0xA510, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A510;
    }
label_A529:;
    /* $A529: A9 */ nes_instruction_boundary(0xA529, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A52B:;
    /* $A52B: 85 */ nes_instruction_boundary(0xA52B, 3); nes_write(0x4A, g_cpu.A);
label_A52D:;
    /* $A52D: E6 */ nes_instruction_boundary(0xA52D, 5); { uint16_t a=0x52; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A52F:;
    /* $A52F: A5 */ nes_instruction_boundary(0xA52F, 3); g_cpu.A = nes_read(0x52); FLAG_NZ(g_cpu.A);
label_A531:;
    /* $A531: 0A */ nes_instruction_boundary(0xA531, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A532:;
    /* $A532: 0A */ nes_instruction_boundary(0xA532, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A533:;
    /* $A533: 0A */ nes_instruction_boundary(0xA533, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A534:;
    /* $A534: 38 */ nes_instruction_boundary(0xA534, 2); g_cpu.C = 1;
label_A535:;
    /* $A535: E5 */ nes_instruction_boundary(0xA535, 3); { uint8_t m=nes_read(0x52); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A537:;
    /* $A537: 85 */ nes_instruction_boundary(0xA537, 3); nes_write(0x50, g_cpu.A);
label_A539:;
    /* $A539: 18 */ nes_instruction_boundary(0xA539, 2); g_cpu.C = 0;
label_A53A:;
    /* $A53A: 69 */ nes_instruction_boundary(0xA53A, 2); { uint16_t r = g_cpu.A + 0x40 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x40); g_cpu.A=r&0xFF; }
label_A53C:;
    /* $A53C: 85 */ nes_instruction_boundary(0xA53C, 3); nes_write(0x51, g_cpu.A);
label_A53E:;
    /* $A53E: 20 */ nes_instruction_boundary(0xA53E, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E544(); g_code_window_base = _swb; }
label_A541:;
    /* $A541: 4C */ nes_instruction_boundary(0xA541, 3); nes_cpu_instruction_boundary(0xD9F0, 2); call_by_address_tail(0xD9F0, -1); return;
}

void func_A510_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A510_b7");
#endif
    func_A510_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A520_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A520_b7");
#endif
    func_A510_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9FF_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AA0A;
    }
label_A9FF:;
    /* $A9FF: B9 */ nes_instruction_boundary(0xA9FF, 4); g_cpu.A = nes_read((0x00B0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA02:;
    /* $AA02: 30 */ nes_instruction_boundary(0xAA02, 2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_AA0F; }
label_AA04:;
    /* $AA04: 98 */ nes_instruction_boundary(0xAA04, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AA05:;
    /* $AA05: A4 */ nes_instruction_boundary(0xAA05, 3); g_cpu.Y = nes_read(0x33); FLAG_NZ(g_cpu.Y);
label_AA07:;
    /* $AA07: 99 */ nes_instruction_boundary(0xAA07, 5); nes_write((0x002A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AA0A:;
    /* $AA0A: A8 */ nes_instruction_boundary(0xAA0A, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AA0B:;
    /* $AA0B: C6 */ nes_instruction_boundary(0xAA0B, 5); { uint16_t a=0x33; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA0D:;
    /* $AA0D: F0 */ nes_instruction_boundary(0xAA0D, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA12; }
label_AA0F:;
    /* $AA0F: 88 */ nes_instruction_boundary(0xAA0F, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AA10:;
    /* $AA10: 10 */ nes_instruction_boundary(0xAA10, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xA9FF, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A9FF;
    }
label_AA12:;
    /* $AA12: 60 */ nes_instruction_boundary(0xAA12, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9FF_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9FF_b7");
#endif
    func_A9FF_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA0A_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA0A_b7");
#endif
    func_A9FF_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0AC_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0AC_b7");
#endif
label_A0AC:;
    /* $A0AC: AD */ nes_instruction_boundary(0xA0AC, 4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_A0AF:;
    /* $A0AF: BD */ nes_instruction_boundary(0xA0AF, 4); g_cpu.A = nes_read((0xAF1F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0B2:;
    /* $A0B2: 8D */ nes_instruction_boundary(0xA0B2, 4); nes_write(0x2006, g_cpu.A);
label_A0B5:;
    /* $A0B5: BD */ nes_instruction_boundary(0xA0B5, 4); g_cpu.A = nes_read((0xAF11 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 8D */ nes_instruction_boundary(0xA0B8, 4); nes_write(0x2006, g_cpu.A);
label_A0BB:;
    /* $A0BB: B1 */ nes_instruction_boundary(0xA0BB, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BD:;
    /* $A0BD: 8D */ nes_instruction_boundary(0xA0BD, 4); nes_write(0x2007, g_cpu.A);
label_A0C0:;
    /* $A0C0: C8 */ nes_instruction_boundary(0xA0C0, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0C1:;
    /* $A0C1: B1 */ nes_instruction_boundary(0xA0C1, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: 8D */ nes_instruction_boundary(0xA0C3, 4); nes_write(0x2007, g_cpu.A);
label_A0C6:;
    /* $A0C6: C8 */ nes_instruction_boundary(0xA0C6, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0C7:;
    /* $A0C7: B1 */ nes_instruction_boundary(0xA0C7, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C9:;
    /* $A0C9: 8D */ nes_instruction_boundary(0xA0C9, 4); nes_write(0x2007, g_cpu.A);
label_A0CC:;
    /* $A0CC: C8 */ nes_instruction_boundary(0xA0CC, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0CD:;
    /* $A0CD: B1 */ nes_instruction_boundary(0xA0CD, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 8D */ nes_instruction_boundary(0xA0CF, 4); nes_write(0x2007, g_cpu.A);
label_A0D2:;
    /* $A0D2: C8 */ nes_instruction_boundary(0xA0D2, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0D3:;
    /* $A0D3: B1 */ nes_instruction_boundary(0xA0D3, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0D5:;
    /* $A0D5: 8D */ nes_instruction_boundary(0xA0D5, 4); nes_write(0x2007, g_cpu.A);
label_A0D8:;
    /* $A0D8: C8 */ nes_instruction_boundary(0xA0D8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0D9:;
    /* $A0D9: B1 */ nes_instruction_boundary(0xA0D9, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0DB:;
    /* $A0DB: 8D */ nes_instruction_boundary(0xA0DB, 4); nes_write(0x2007, g_cpu.A);
label_A0DE:;
    /* $A0DE: C8 */ nes_instruction_boundary(0xA0DE, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0DF:;
    /* $A0DF: B1 */ nes_instruction_boundary(0xA0DF, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0E1:;
    /* $A0E1: 8D */ nes_instruction_boundary(0xA0E1, 4); nes_write(0x2007, g_cpu.A);
label_A0E4:;
    /* $A0E4: C8 */ nes_instruction_boundary(0xA0E4, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0E5:;
    /* $A0E5: B1 */ nes_instruction_boundary(0xA0E5, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: 8D */ nes_instruction_boundary(0xA0E7, 4); nes_write(0x2007, g_cpu.A);
label_A0EA:;
    /* $A0EA: C8 */ nes_instruction_boundary(0xA0EA, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0EB:;
    /* $A0EB: B1 */ nes_instruction_boundary(0xA0EB, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 8D */ nes_instruction_boundary(0xA0ED, 4); nes_write(0x2007, g_cpu.A);
label_A0F0:;
    /* $A0F0: C8 */ nes_instruction_boundary(0xA0F0, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0F1:;
    /* $A0F1: B1 */ nes_instruction_boundary(0xA0F1, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0F3:;
    /* $A0F3: 8D */ nes_instruction_boundary(0xA0F3, 4); nes_write(0x2007, g_cpu.A);
label_A0F6:;
    /* $A0F6: C8 */ nes_instruction_boundary(0xA0F6, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0F7:;
    /* $A0F7: B1 */ nes_instruction_boundary(0xA0F7, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0F9:;
    /* $A0F9: 8D */ nes_instruction_boundary(0xA0F9, 4); nes_write(0x2007, g_cpu.A);
label_A0FC:;
    /* $A0FC: C8 */ nes_instruction_boundary(0xA0FC, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0FD:;
    /* $A0FD: B1 */ nes_instruction_boundary(0xA0FD, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0FF:;
    /* $A0FF: 8D */ nes_instruction_boundary(0xA0FF, 4); nes_write(0x2007, g_cpu.A);
label_A102:;
    /* $A102: C8 */ nes_instruction_boundary(0xA102, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A103:;
    /* $A103: B1 */ nes_instruction_boundary(0xA103, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 8D */ nes_instruction_boundary(0xA105, 4); nes_write(0x2007, g_cpu.A);
label_A108:;
    /* $A108: C8 */ nes_instruction_boundary(0xA108, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A109:;
    /* $A109: B1 */ nes_instruction_boundary(0xA109, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10B:;
    /* $A10B: 8D */ nes_instruction_boundary(0xA10B, 4); nes_write(0x2007, g_cpu.A);
label_A10E:;
    /* $A10E: C8 */ nes_instruction_boundary(0xA10E, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A10F:;
    /* $A10F: E8 */ nes_instruction_boundary(0xA10F, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A110:;
    /* $A110: E0 */ nes_instruction_boundary(0xA110, 2); { int r=g_cpu.X-0x0E; g_cpu.C=(g_cpu.X>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A112:;
    /* $A112: D0 */ nes_instruction_boundary(0xA112, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xA0AC, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0AC;
    }
label_A114:;
    /* $A114: A9 */ nes_instruction_boundary(0xA114, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A116:;
    /* $A116: 8D */ nes_instruction_boundary(0xA116, 4); nes_write(0x8000, g_cpu.A);
label_A119:;
    /* $A119: A5 */ nes_instruction_boundary(0xA119, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A11B:;
    /* $A11B: 8D */ nes_instruction_boundary(0xA11B, 4); nes_write(0x8001, g_cpu.A);
label_A11E:;
    /* $A11E: 60 */ nes_instruction_boundary(0xA11E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_98AE_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_98F5;
    }
label_98AE:;
    /* $98AE: A9 */ nes_instruction_boundary(0x98AE, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98B0:;
    /* $98B0: 85 */ nes_instruction_boundary(0x98B0, 3); nes_write(0x59, g_cpu.A);
label_98B2:;
    /* $98B2: A5 */ nes_instruction_boundary(0x98B2, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_98B4:;
    /* $98B4: 38 */ nes_instruction_boundary(0x98B4, 2); g_cpu.C = 1;
label_98B5:;
    /* $98B5: E9 */ nes_instruction_boundary(0x98B5, 2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_98B7:;
    /* $98B7: 85 */ nes_instruction_boundary(0x98B7, 3); nes_write(0x27, g_cpu.A);
label_98B9:;
    /* $98B9: A8 */ nes_instruction_boundary(0x98B9, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_98BA:;
    /* $98BA: A5 */ nes_instruction_boundary(0x98BA, 3); g_cpu.A = nes_read(0x62); FLAG_NZ(g_cpu.A);
label_98BC:;
    /* $98BC: E9 */ nes_instruction_boundary(0x98BC, 2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_98BE:;
    /* $98BE: 85 */ nes_instruction_boundary(0x98BE, 3); nes_write(0x28, g_cpu.A);
label_98C0:;
    /* $98C0: 20 */ nes_instruction_boundary(0x98C0, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_98C3:;
    /* $98C3: 85 */ nes_instruction_boundary(0x98C3, 3); nes_write(0x29, g_cpu.A);
label_98C5:;
    /* $98C5: 20 */ nes_instruction_boundary(0x98C5, 6); nes_dispatch_call(0x8003, -1);
label_98C8:;
    /* $98C8: A9 */ nes_instruction_boundary(0x98C8, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_98CA:;
    /* $98CA: 85 */ nes_instruction_boundary(0x98CA, 3); nes_write(0x23, g_cpu.A);
label_98CC:;
    /* $98CC: A9 */ nes_instruction_boundary(0x98CC, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98CE:;
    /* $98CE: 85 */ nes_instruction_boundary(0x98CE, 3); nes_write(0x24, g_cpu.A);
label_98D0:;
    /* $98D0: A9 */ nes_instruction_boundary(0x98D0, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_98D2:;
    /* $98D2: 85 */ nes_instruction_boundary(0x98D2, 3); nes_write(0x57, g_cpu.A);
label_98D4:;
    /* $98D4: 20 */ nes_instruction_boundary(0x98D4, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E417(); g_code_window_base = _swb; }
label_98D7:;
    /* $98D7: A4 */ nes_instruction_boundary(0x98D7, 3); g_cpu.Y = nes_read(0x61); FLAG_NZ(g_cpu.Y);
label_98D9:;
    /* $98D9: A5 */ nes_instruction_boundary(0x98D9, 3); g_cpu.A = nes_read(0x62); FLAG_NZ(g_cpu.A);
label_98DB:;
    /* $98DB: 20 */ nes_instruction_boundary(0x98DB, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_98DE:;
    /* $98DE: 29 */ nes_instruction_boundary(0x98DE, 2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_98E0:;
    /* $98E0: F0 */ nes_instruction_boundary(0x98E0, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_98FC; }
label_98E2:;
    /* $98E2: 20 */ nes_instruction_boundary(0x98E2, 6); nes_dispatch_call(0x8006, -1);
label_98E5:;
    /* $98E5: A9 */ nes_instruction_boundary(0x98E5, 2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_98E7:;
    /* $98E7: 85 */ nes_instruction_boundary(0x98E7, 3); nes_write(0x23, g_cpu.A);
label_98E9:;
    /* $98E9: A9 */ nes_instruction_boundary(0x98E9, 2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_98EB:;
    /* $98EB: 85 */ nes_instruction_boundary(0x98EB, 3); nes_write(0x24, g_cpu.A);
label_98ED:;
    /* $98ED: A5 */ nes_instruction_boundary(0x98ED, 3); g_cpu.A = nes_read(0x58); FLAG_NZ(g_cpu.A);
label_98EF:;
    /* $98EF: 85 */ nes_instruction_boundary(0x98EF, 3); nes_write(0x55, g_cpu.A);
label_98F1:;
    /* $98F1: A5 */ nes_instruction_boundary(0x98F1, 3); g_cpu.A = nes_read(0x59); FLAG_NZ(g_cpu.A);
label_98F3:;
    /* $98F3: 85 */ nes_instruction_boundary(0x98F3, 3); nes_write(0x56, g_cpu.A);
label_98F5:;
    /* $98F5: A9 */ nes_instruction_boundary(0x98F5, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_98F7:;
    /* $98F7: 85 */ nes_instruction_boundary(0x98F7, 3); nes_write(0x57, g_cpu.A);
label_98F9:;
    /* $98F9: 20 */ nes_instruction_boundary(0x98F9, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E417(); g_code_window_base = _swb; }
label_98FC:;
    /* $98FC: A5 */ nes_instruction_boundary(0x98FC, 3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_98FE:;
    /* $98FE: 18 */ nes_instruction_boundary(0x98FE, 2); g_cpu.C = 0;
label_98FF:;
    /* $98FF: 69 */ nes_instruction_boundary(0x98FF, 2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_9901:;
    /* $9901: 85 */ nes_instruction_boundary(0x9901, 3); nes_write(0x61, g_cpu.A);
label_9903:;
    /* $9903: 90 */ nes_instruction_boundary(0x9903, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9907; }
label_9905:;
    /* $9905: E6 */ nes_instruction_boundary(0x9905, 5); { uint16_t a=0x62; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9907:;
    /* $9907: C6 */ nes_instruction_boundary(0x9907, 5); { uint16_t a=0x39; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9909:;
    /* $9909: D0 */ nes_instruction_boundary(0x9909, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0x98AE, 2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_98AE;
    }
label_990B:;
    /* $990B: A9 */ nes_instruction_boundary(0x990B, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_990D:;
    /* $990D: 85 */ nes_instruction_boundary(0x990D, 3); nes_write(0x59, g_cpu.A);
label_990F:;
    /* $990F: 68 */ nes_instruction_boundary(0x990F, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9910:;
    /* $9910: 85 */ nes_instruction_boundary(0x9910, 3); nes_write(0x61, g_cpu.A);
label_9912:;
    /* $9912: A8 */ nes_instruction_boundary(0x9912, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9913:;
    /* $9913: 68 */ nes_instruction_boundary(0x9913, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9914:;
    /* $9914: 85 */ nes_instruction_boundary(0x9914, 3); nes_write(0x62, g_cpu.A);
label_9916:;
    /* $9916: 20 */ nes_instruction_boundary(0x9916, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4E3(); g_code_window_base = _swb; }
label_9919:;
    /* $9919: 85 */ nes_instruction_boundary(0x9919, 3); nes_write(0x3A, g_cpu.A);
label_991B:;
    /* $991B: A9 */ nes_instruction_boundary(0x991B, 2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_991D:;
    /* $991D: 85 */ nes_instruction_boundary(0x991D, 3); nes_write(0x37, g_cpu.A);
label_991F:;
    /* $991F: 60 */ nes_instruction_boundary(0x991F, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_98AE_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98AE_b7");
#endif
    func_98AE_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_98F5_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98F5_b7");
#endif
    func_98AE_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A553_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A553_b7");
#endif
label_A553:;
    /* $A553: A0 */ nes_instruction_boundary(0xA553, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A555:;
    /* $A555: 46 */ nes_instruction_boundary(0xA555, 5); { uint16_t a=0x1F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A557:;
    /* $A557: 90 */ nes_instruction_boundary(0xA557, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A55A; }
label_A559:;
    /* $A559: C8 */ nes_instruction_boundary(0xA559, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A55A:;
    /* $A55A: 46 */ nes_instruction_boundary(0xA55A, 5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A55C:;
    /* $A55C: 90 */ nes_instruction_boundary(0xA55C, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A55F; }
label_A55E:;
    /* $A55E: C8 */ nes_instruction_boundary(0xA55E, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A55F:;
    /* $A55F: 46 */ nes_instruction_boundary(0xA55F, 5); { uint16_t a=0x21; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A561:;
    /* $A561: 90 */ nes_instruction_boundary(0xA561, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A564; }
label_A563:;
    /* $A563: C8 */ nes_instruction_boundary(0xA563, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A564:;
    /* $A564: 46 */ nes_instruction_boundary(0xA564, 5); { uint16_t a=0x22; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A566:;
    /* $A566: 90 */ nes_instruction_boundary(0xA566, 2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A569; }
label_A568:;
    /* $A568: C8 */ nes_instruction_boundary(0xA568, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A569:;
    /* $A569: C0 */ nes_instruction_boundary(0xA569, 2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A56B:;
    /* $A56B: 6A */ nes_instruction_boundary(0xA56B, 2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A56C:;
    /* $A56C: CA */ nes_instruction_boundary(0xA56C, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A56D:;
    /* $A56D: 10 */ nes_instruction_boundary(0xA56D, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xA553, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A553;
    }
label_A56F:;
    /* $A56F: 85 */ nes_instruction_boundary(0xA56F, 3); nes_write(0x22, g_cpu.A);
label_A571:;
    /* $A571: 68 */ nes_instruction_boundary(0xA571, 4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A572:;
    /* $A572: 49 */ nes_instruction_boundary(0xA572, 2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_A574:;
    /* $A574: 25 */ nes_instruction_boundary(0xA574, 3); g_cpu.A &= nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: A6 */ nes_instruction_boundary(0xA576, 3); g_cpu.X = nes_read(0x22); FLAG_NZ(g_cpu.X);
label_A578:;
    /* $A578: 85 */ nes_instruction_boundary(0xA578, 3); nes_write(0x1F, g_cpu.A);
label_A57A:;
    /* $A57A: 86 */ nes_instruction_boundary(0xA57A, 3); nes_write(0x20, g_cpu.X);
label_A57C:;
    /* $A57C: 60 */ nes_instruction_boundary(0xA57C, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A96C_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A999;
        case 2: goto label_A98C;
    }
label_A96C:;
    /* $A96C: B4 */ nes_instruction_boundary(0xA96C, 4); g_cpu.Y = nes_read((0xDF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A96E:;
    /* $A96E: F0 */ nes_instruction_boundary(0xA96E, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A98C; }
label_A970:;
    /* $A970: 8C */ nes_instruction_boundary(0xA970, 4); nes_write(0x2006, g_cpu.Y);
label_A973:;
    /* $A973: B4 */ nes_instruction_boundary(0xA973, 4); g_cpu.Y = nes_read((0xCF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A975:;
    /* $A975: 8C */ nes_instruction_boundary(0xA975, 4); nes_write(0x2006, g_cpu.Y);
label_A978:;
    /* $A978: AC */ nes_instruction_boundary(0xA978, 4); g_cpu.Y = nes_read(0x2007); FLAG_NZ(g_cpu.Y);
label_A97B:;
    /* $A97B: AC */ nes_instruction_boundary(0xA97B, 4); g_cpu.Y = nes_read(0x2007); FLAG_NZ(g_cpu.Y);
label_A97E:;
    /* $A97E: B1 */ nes_instruction_boundary(0xA97E, 5); g_cpu.A = nes_read((nes_read16zp(0x6D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A980:;
    /* $A980: F0 */ nes_instruction_boundary(0xA980, 2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A98A; }
label_A982:;
    /* $A982: A9 */ nes_instruction_boundary(0xA982, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A984:;
    /* $A984: 9D */ nes_instruction_boundary(0xA984, 5); nes_write((0x03B0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A987:;
    /* $A987: 9D */ nes_instruction_boundary(0xA987, 5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A98A:;
    /* $A98A: 95 */ nes_instruction_boundary(0xA98A, 4); nes_write((0xDF + g_cpu.X) & 0xFF, g_cpu.A);
label_A98C:;
    /* $A98C: CA */ nes_instruction_boundary(0xA98C, 2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A98D:;
    /* $A98D: D0 */ nes_instruction_boundary(0xA98D, 2); if (!g_cpu.Z) {
    nes_instruction_boundary(0xA96C, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A96C;
    }
label_A98F:;
    /* $A98F: 86 */ nes_instruction_boundary(0xA98F, 3); nes_write(0x88, g_cpu.X);
label_A991:;
    /* $A991: 8E */ nes_instruction_boundary(0xA991, 4); nes_write(0x01B3, g_cpu.X);
label_A994:;
    /* $A994: A9 */ nes_instruction_boundary(0xA994, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A996:;
    /* $A996: 8D */ nes_instruction_boundary(0xA996, 4); nes_write(0x8000, g_cpu.A);
label_A999:;
    /* $A999: A5 */ nes_instruction_boundary(0xA999, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_A99B:;
    /* $A99B: 8D */ nes_instruction_boundary(0xA99B, 4); nes_write(0x8001, g_cpu.A);
label_A99E:;
    /* $A99E: 60 */ nes_instruction_boundary(0xA99E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A96C_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A96C_b7");
#endif
    func_A96C_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A999_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A999_b7");
#endif
    func_A96C_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A98C_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A98C_b7");
#endif
    func_A96C_b7_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E0B9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0B9");
#endif
label_E0B9:;
    /* $E0B9: 06 */ nes_instruction_boundary(0xE0B9, 5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E0BB:;
    /* $E0BB: B1 */ nes_instruction_boundary(0xE0BB, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0BD:;
    /* $E0BD: 8D */ nes_instruction_boundary(0xE0BD, 4); nes_write(0x2007, g_cpu.A);
label_E0C0:;
    /* $E0C0: C8 */ nes_instruction_boundary(0xE0C0, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0C1:;
    /* $E0C1: B1 */ nes_instruction_boundary(0xE0C1, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0C3:;
    /* $E0C3: 8D */ nes_instruction_boundary(0xE0C3, 4); nes_write(0x2007, g_cpu.A);
label_E0C6:;
    /* $E0C6: C8 */ nes_instruction_boundary(0xE0C6, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0C7:;
    /* $E0C7: B1 */ nes_instruction_boundary(0xE0C7, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0C9:;
    /* $E0C9: 8D */ nes_instruction_boundary(0xE0C9, 4); nes_write(0x2007, g_cpu.A);
label_E0CC:;
    /* $E0CC: C8 */ nes_instruction_boundary(0xE0CC, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0CD:;
    /* $E0CD: B1 */ nes_instruction_boundary(0xE0CD, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0CF:;
    /* $E0CF: 8D */ nes_instruction_boundary(0xE0CF, 4); nes_write(0x2007, g_cpu.A);
label_E0D2:;
    /* $E0D2: C8 */ nes_instruction_boundary(0xE0D2, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0D3:;
    /* $E0D3: B1 */ nes_instruction_boundary(0xE0D3, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0D5:;
    /* $E0D5: 8D */ nes_instruction_boundary(0xE0D5, 4); nes_write(0x2007, g_cpu.A);
label_E0D8:;
    /* $E0D8: C8 */ nes_instruction_boundary(0xE0D8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0D9:;
    /* $E0D9: B1 */ nes_instruction_boundary(0xE0D9, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0DB:;
    /* $E0DB: 8D */ nes_instruction_boundary(0xE0DB, 4); nes_write(0x2007, g_cpu.A);
label_E0DE:;
    /* $E0DE: C8 */ nes_instruction_boundary(0xE0DE, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0DF:;
    /* $E0DF: B1 */ nes_instruction_boundary(0xE0DF, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0E1:;
    /* $E0E1: 8D */ nes_instruction_boundary(0xE0E1, 4); nes_write(0x2007, g_cpu.A);
label_E0E4:;
    /* $E0E4: C8 */ nes_instruction_boundary(0xE0E4, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0E5:;
    /* $E0E5: B1 */ nes_instruction_boundary(0xE0E5, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0E7:;
    /* $E0E7: 8D */ nes_instruction_boundary(0xE0E7, 4); nes_write(0x2007, g_cpu.A);
label_E0EA:;
    /* $E0EA: C8 */ nes_instruction_boundary(0xE0EA, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0EB:;
    /* $E0EB: B1 */ nes_instruction_boundary(0xE0EB, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0ED:;
    /* $E0ED: 8D */ nes_instruction_boundary(0xE0ED, 4); nes_write(0x2007, g_cpu.A);
label_E0F0:;
    /* $E0F0: C8 */ nes_instruction_boundary(0xE0F0, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0F1:;
    /* $E0F1: B1 */ nes_instruction_boundary(0xE0F1, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0F3:;
    /* $E0F3: 8D */ nes_instruction_boundary(0xE0F3, 4); nes_write(0x2007, g_cpu.A);
label_E0F6:;
    /* $E0F6: C8 */ nes_instruction_boundary(0xE0F6, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0F7:;
    /* $E0F7: B1 */ nes_instruction_boundary(0xE0F7, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0F9:;
    /* $E0F9: 8D */ nes_instruction_boundary(0xE0F9, 4); nes_write(0x2007, g_cpu.A);
label_E0FC:;
    /* $E0FC: C8 */ nes_instruction_boundary(0xE0FC, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E0FD:;
    /* $E0FD: B1 */ nes_instruction_boundary(0xE0FD, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E0FF:;
    /* $E0FF: 8D */ nes_instruction_boundary(0xE0FF, 4); nes_write(0x2007, g_cpu.A);
label_E102:;
    /* $E102: C8 */ nes_instruction_boundary(0xE102, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E103:;
    /* $E103: B1 */ nes_instruction_boundary(0xE103, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E105:;
    /* $E105: 8D */ nes_instruction_boundary(0xE105, 4); nes_write(0x2007, g_cpu.A);
label_E108:;
    /* $E108: C8 */ nes_instruction_boundary(0xE108, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E109:;
    /* $E109: B1 */ nes_instruction_boundary(0xE109, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E10B:;
    /* $E10B: 8D */ nes_instruction_boundary(0xE10B, 4); nes_write(0x2007, g_cpu.A);
label_E10E:;
    /* $E10E: C8 */ nes_instruction_boundary(0xE10E, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E10F:;
    /* $E10F: E8 */ nes_instruction_boundary(0xE10F, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_E110:;
    /* $E110: E0 */ nes_instruction_boundary(0xE110, 2); { int r=g_cpu.X-0x0E; g_cpu.C=(g_cpu.X>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_E112:;
    /* $E112: D0 */ nes_instruction_boundary(0xE112, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x00AC), -1); return; }
label_E114:;
    /* $E114: A9 */ nes_instruction_boundary(0xE114, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_E116:;
    /* $E116: 8D */ nes_instruction_boundary(0xE116, 4); nes_write(0x8000, g_cpu.A);
label_E119:;
    /* $E119: A5 */ nes_instruction_boundary(0xE119, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_E11B:;
    /* $E11B: 8D */ nes_instruction_boundary(0xE11B, 4); nes_write(0x8001, g_cpu.A);
label_E11E:;
    /* $E11E: 60 */ nes_instruction_boundary(0xE11E, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E001(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E001");
#endif
label_E001:;
    /* $E001: 07 */ nes_instruction_boundary(0xE001, 5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_E003:;
    /* $E003: C8 */ nes_instruction_boundary(0xE003, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E004:;
    /* $E004: B1 */ nes_instruction_boundary(0xE004, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E006:;
    /* $E006: 8D */ nes_instruction_boundary(0xE006, 4); nes_write(0x2007, g_cpu.A);
label_E009:;
    /* $E009: C8 */ nes_instruction_boundary(0xE009, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E00A:;
    /* $E00A: B1 */ nes_instruction_boundary(0xE00A, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E00C:;
    /* $E00C: 8D */ nes_instruction_boundary(0xE00C, 4); nes_write(0x2007, g_cpu.A);
label_E00F:;
    /* $E00F: C8 */ nes_instruction_boundary(0xE00F, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E010:;
    /* $E010: B1 */ nes_instruction_boundary(0xE010, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E012:;
    /* $E012: 8D */ nes_instruction_boundary(0xE012, 4); nes_write(0x2007, g_cpu.A);
label_E015:;
    /* $E015: C8 */ nes_instruction_boundary(0xE015, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E016:;
    /* $E016: B1 */ nes_instruction_boundary(0xE016, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E018:;
    /* $E018: 8D */ nes_instruction_boundary(0xE018, 4); nes_write(0x2007, g_cpu.A);
label_E01B:;
    /* $E01B: C8 */ nes_instruction_boundary(0xE01B, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E01C:;
    /* $E01C: B1 */ nes_instruction_boundary(0xE01C, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E01E:;
    /* $E01E: 8D */ nes_instruction_boundary(0xE01E, 4); nes_write(0x2007, g_cpu.A);
label_E021:;
    /* $E021: C8 */ nes_instruction_boundary(0xE021, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E022:;
    /* $E022: B1 */ nes_instruction_boundary(0xE022, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E024:;
    /* $E024: 8D */ nes_instruction_boundary(0xE024, 4); nes_write(0x2007, g_cpu.A);
label_E027:;
    /* $E027: C8 */ nes_instruction_boundary(0xE027, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E028:;
    /* $E028: B1 */ nes_instruction_boundary(0xE028, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E02A:;
    /* $E02A: 8D */ nes_instruction_boundary(0xE02A, 4); nes_write(0x2007, g_cpu.A);
label_E02D:;
    /* $E02D: C8 */ nes_instruction_boundary(0xE02D, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E02E:;
    /* $E02E: B1 */ nes_instruction_boundary(0xE02E, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E030:;
    /* $E030: 8D */ nes_instruction_boundary(0xE030, 4); nes_write(0x2007, g_cpu.A);
label_E033:;
    /* $E033: C8 */ nes_instruction_boundary(0xE033, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E034:;
    /* $E034: B1 */ nes_instruction_boundary(0xE034, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E036:;
    /* $E036: 8D */ nes_instruction_boundary(0xE036, 4); nes_write(0x2007, g_cpu.A);
label_E039:;
    /* $E039: C8 */ nes_instruction_boundary(0xE039, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E03A:;
    /* $E03A: B1 */ nes_instruction_boundary(0xE03A, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E03C:;
    /* $E03C: 8D */ nes_instruction_boundary(0xE03C, 4); nes_write(0x2007, g_cpu.A);
label_E03F:;
    /* $E03F: C8 */ nes_instruction_boundary(0xE03F, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E040:;
    /* $E040: B1 */ nes_instruction_boundary(0xE040, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E042:;
    /* $E042: 8D */ nes_instruction_boundary(0xE042, 4); nes_write(0x2007, g_cpu.A);
label_E045:;
    /* $E045: C8 */ nes_instruction_boundary(0xE045, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E046:;
    /* $E046: B1 */ nes_instruction_boundary(0xE046, 5); g_cpu.A = nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E048:;
    /* $E048: 8D */ nes_instruction_boundary(0xE048, 4); nes_write(0x2007, g_cpu.A);
label_E04B:;
    /* $E04B: C8 */ nes_instruction_boundary(0xE04B, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E04C:;
    /* $E04C: E8 */ nes_instruction_boundary(0xE04C, 2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_E04D:;
    /* $E04D: E4 */ nes_instruction_boundary(0xE04D, 3); { uint8_t m=nes_read(0x5A); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E04F:;
    /* $E04F: D0 */ nes_instruction_boundary(0xE04F, 2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base - 0x0017), -1); return; }
label_E051:;
    /* $E051: AD */ nes_instruction_boundary(0xE051, 4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_E054:;
    /* $E054: A9 */ nes_instruction_boundary(0xE054, 2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_E056:;
    /* $E056: 8D */ nes_instruction_boundary(0xE056, 4); nes_write(0x2006, g_cpu.A);
label_E059:;
    /* $E059: A9 */ nes_instruction_boundary(0xE059, 2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_E05B:;
    /* $E05B: 8D */ nes_instruction_boundary(0xE05B, 4); nes_write(0x2006, g_cpu.A);
label_E05E:;
    /* $E05E: A9 */ nes_instruction_boundary(0xE05E, 2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_E060:;
    /* $E060: A0 */ nes_instruction_boundary(0xE060, 2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_E062:;
    /* $E062: 8D */ nes_instruction_boundary(0xE062, 4); nes_write(0x2007, g_cpu.A);
label_E065:;
    /* $E065: 8D */ nes_instruction_boundary(0xE065, 4); nes_write(0x2007, g_cpu.A);
label_E068:;
    /* $E068: 8D */ nes_instruction_boundary(0xE068, 4); nes_write(0x2007, g_cpu.A);
label_E06B:;
    /* $E06B: 8D */ nes_instruction_boundary(0xE06B, 4); nes_write(0x2007, g_cpu.A);
label_E06E:;
    /* $E06E: 8D */ nes_instruction_boundary(0xE06E, 4); nes_write(0x2007, g_cpu.A);
label_E071:;
    /* $E071: 8D */ nes_instruction_boundary(0xE071, 4); nes_write(0x2007, g_cpu.A);
label_E074:;
    /* $E074: 8D */ nes_instruction_boundary(0xE074, 4); nes_write(0x2007, g_cpu.A);
label_E077:;
    /* $E077: 8D */ nes_instruction_boundary(0xE077, 4); nes_write(0x2007, g_cpu.A);
label_E07A:;
    /* $E07A: 88 */ nes_instruction_boundary(0xE07A, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E07B:;
    /* $E07B: 10 */ nes_instruction_boundary(0xE07B, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0xE062, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E062;
    }
label_E07D:;
    /* $E07D: A9 */ nes_instruction_boundary(0xE07D, 2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_E07F:;
    /* $E07F: 8D */ nes_instruction_boundary(0xE07F, 4); nes_write(0x8000, g_cpu.A);
label_E082:;
    /* $E082: A5 */ nes_instruction_boundary(0xE082, 3); g_cpu.A = nes_read(0x49); FLAG_NZ(g_cpu.A);
label_E084:;
    /* $E084: 8D */ nes_instruction_boundary(0xE084, 4); nes_write(0x8001, g_cpu.A);
label_E087:;
    /* $E087: 60 */ nes_instruction_boundary(0xE087, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

