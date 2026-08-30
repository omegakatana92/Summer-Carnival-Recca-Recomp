/* Summer-Carnival-92---Recca-Japan_full_bank04_part02.c — PRG bank 4 function bodies (sub-part 2).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella Summer-Carnival-92---Recca-Japan_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "Summer-Carnival-92---Recca-Japan_full_decls.h"

void func_A973_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A973_b4");
#endif
label_A973:;
    /* $A973: FC */ nes_instruction_boundary(0xA973, 4); (void)nes_read((0x047C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A976:;
    /* $A976: 60 */ nes_instruction_boundary(0xA976, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A909_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A924;
    }
label_A909:;
    /* $A909: 04 */ nes_instruction_boundary(0xA909, 3); (void)nes_read(0x3D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A90B:;
    /* $A90B: 01 */ nes_instruction_boundary(0xA90B, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A90D:;
    /* $A90D: 3D */ nes_instruction_boundary(0xA90D, 4); g_cpu.A &= nes_read((0x0002 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A910:;
    /* $A910: 3D */ nes_instruction_boundary(0xA910, 4); g_cpu.A &= nes_read((0x0004 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A913:;
    /* $A913: 3D */ nes_instruction_boundary(0xA913, 4); g_cpu.A &= nes_read((0x0008 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A916:;
    /* $A916: 3D */ nes_instruction_boundary(0xA916, 4); g_cpu.A &= nes_read((0x0010 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: 3D */ nes_instruction_boundary(0xA919, 4); g_cpu.A &= nes_read((0x0020 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A91C:;
    /* $A91C: 3D */ nes_instruction_boundary(0xA91C, 4); g_cpu.A &= nes_read((0x0040 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A91F:;
    /* $A91F: 3D */ nes_instruction_boundary(0xA91F, 4); g_cpu.A &= nes_read((0x0080 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A922:;
    /* $A922: 67 */ nes_instruction_boundary(0xA922, 5); { uint16_t a=0x04; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A924:;
    /* $A924: 70 */ nes_instruction_boundary(0xA924, 2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_A929; }
label_A926:;
    /* $A926: 0A */ nes_instruction_boundary(0xA926, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A927:;
    /* $A927: 08 */ nes_instruction_boundary(0xA927, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A928:;
    /* $A928: 00 */ nes_instruction_boundary(0xA928, 7); nes_brk_executed(0xA928); return;
label_A929:;
    /* $A929: 0A */ nes_instruction_boundary(0xA929, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A92A:;
    /* $A92A: 04 */ nes_instruction_boundary(0xA92A, 3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A92C:;
    /* $A92C: 0A */ nes_instruction_boundary(0xA92C, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A92D:;
    /* $A92D: 02 */ nes_instruction_boundary(0xA92D, 2); /* ILLEGAL $02 — skip 1 */
label_A92E:;
    /* $A92E: 00 */ nes_instruction_boundary(0xA92E, 7); nes_brk_executed(0xA92E); return;
}

void func_A909_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A909_b4");
#endif
    func_A909_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A924_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A924_b4");
#endif
    func_A909_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_856F_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8598;
        case 2: goto label_85CE;
        case 3: goto label_85D9;
        case 4: goto label_8571;
    }
label_856F:;
    /* $856F: 50 */ nes_instruction_boundary(0x856F, 2); if (!g_cpu.V) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04F1), 4); return; }
label_8571:;
    /* $8571: B1 */ nes_instruction_boundary(0x8571, 5); g_cpu.A = nes_read((nes_read16zp(0x6F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8573:;
    /* $8573: 0A */ nes_instruction_boundary(0x8573, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8574:;
    /* $8574: A8 */ nes_instruction_boundary(0x8574, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8575:;
    /* $8575: B9 */ nes_instruction_boundary(0x8575, 4); g_cpu.A = nes_read((0x85F5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8578:;
    /* $8578: 85 */ nes_instruction_boundary(0x8578, 3); nes_write(0x23, g_cpu.A);
label_857A:;
    /* $857A: B9 */ nes_instruction_boundary(0x857A, 4); g_cpu.A = nes_read((0x85F6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_857D:;
    /* $857D: 85 */ nes_instruction_boundary(0x857D, 3); nes_write(0x24, g_cpu.A);
label_857F:;
    /* $857F: A0 */ nes_instruction_boundary(0x857F, 2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8581:;
    /* $8581: B1 */ nes_instruction_boundary(0x8581, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8583:;
    /* $8583: 85 */ nes_instruction_boundary(0x8583, 3); nes_write(0x64, g_cpu.A);
label_8585:;
    /* $8585: A2 */ nes_instruction_boundary(0x8585, 2); g_cpu.X = 0x07; FLAG_NZ(g_cpu.X);
label_8587:;
    /* $8587: 20 */ nes_instruction_boundary(0x8587, 6); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E5F2(); g_code_window_base = _swb; }
label_858A:;
    /* $858A: A0 */ nes_instruction_boundary(0x858A, 2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_858C:;
    /* $858C: B1 */ nes_instruction_boundary(0x858C, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_858E:;
    /* $858E: 85 */ nes_instruction_boundary(0x858E, 3); nes_write(0x65, g_cpu.A);
label_8590:;
    /* $8590: C8 */ nes_instruction_boundary(0x8590, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8591:;
    /* $8591: B1 */ nes_instruction_boundary(0x8591, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8593:;
    /* $8593: 85 */ nes_instruction_boundary(0x8593, 3); nes_write(0x66, g_cpu.A);
label_8595:;
    /* $8595: C8 */ nes_instruction_boundary(0x8595, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8596:;
    /* $8596: B1 */ nes_instruction_boundary(0x8596, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8598:;
    /* $8598: 85 */ nes_instruction_boundary(0x8598, 3); nes_write(0x67, g_cpu.A);
label_859A:;
    /* $859A: C8 */ nes_instruction_boundary(0x859A, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_859B:;
    /* $859B: B1 */ nes_instruction_boundary(0x859B, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_859D:;
    /* $859D: 85 */ nes_instruction_boundary(0x859D, 3); nes_write(0x68, g_cpu.A);
label_859F:;
    /* $859F: C8 */ nes_instruction_boundary(0x859F, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85A0:;
    /* $85A0: B1 */ nes_instruction_boundary(0x85A0, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85A2:;
    /* $85A2: 85 */ nes_instruction_boundary(0x85A2, 3); nes_write(0x69, g_cpu.A);
label_85A4:;
    /* $85A4: C8 */ nes_instruction_boundary(0x85A4, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85A5:;
    /* $85A5: B1 */ nes_instruction_boundary(0x85A5, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85A7:;
    /* $85A7: 85 */ nes_instruction_boundary(0x85A7, 3); nes_write(0x6A, g_cpu.A);
label_85A9:;
    /* $85A9: C8 */ nes_instruction_boundary(0x85A9, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85AA:;
    /* $85AA: B1 */ nes_instruction_boundary(0x85AA, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85AC:;
    /* $85AC: 85 */ nes_instruction_boundary(0x85AC, 3); nes_write(0x6B, g_cpu.A);
label_85AE:;
    /* $85AE: C8 */ nes_instruction_boundary(0x85AE, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85AF:;
    /* $85AF: B1 */ nes_instruction_boundary(0x85AF, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B1:;
    /* $85B1: 85 */ nes_instruction_boundary(0x85B1, 3); nes_write(0x6C, g_cpu.A);
label_85B3:;
    /* $85B3: C8 */ nes_instruction_boundary(0x85B3, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85B4:;
    /* $85B4: B1 */ nes_instruction_boundary(0x85B4, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B6:;
    /* $85B6: 85 */ nes_instruction_boundary(0x85B6, 3); nes_write(0x6D, g_cpu.A);
label_85B8:;
    /* $85B8: C8 */ nes_instruction_boundary(0x85B8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85B9:;
    /* $85B9: B1 */ nes_instruction_boundary(0x85B9, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85BB:;
    /* $85BB: 85 */ nes_instruction_boundary(0x85BB, 3); nes_write(0x6E, g_cpu.A);
label_85BD:;
    /* $85BD: C8 */ nes_instruction_boundary(0x85BD, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85BE:;
    /* $85BE: B1 */ nes_instruction_boundary(0x85BE, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85C0:;
    /* $85C0: 85 */ nes_instruction_boundary(0x85C0, 3); nes_write(0x42, g_cpu.A);
label_85C2:;
    /* $85C2: C8 */ nes_instruction_boundary(0x85C2, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85C3:;
    /* $85C3: B1 */ nes_instruction_boundary(0x85C3, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85C5:;
    /* $85C5: 85 */ nes_instruction_boundary(0x85C5, 3); nes_write(0x43, g_cpu.A);
label_85C7:;
    /* $85C7: C8 */ nes_instruction_boundary(0x85C7, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85C8:;
    /* $85C8: A9 */ nes_instruction_boundary(0x85C8, 2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_85CA:;
    /* $85CA: 85 */ nes_instruction_boundary(0x85CA, 3); nes_write(0x61, g_cpu.A);
label_85CC:;
    /* $85CC: 85 */ nes_instruction_boundary(0x85CC, 3); nes_write(0x39, g_cpu.A);
label_85CE:;
    /* $85CE: A5 */ nes_instruction_boundary(0x85CE, 3); g_cpu.A = nes_read(0x37); FLAG_NZ(g_cpu.A);
label_85D0:;
    /* $85D0: 29 */ nes_instruction_boundary(0x85D0, 2); g_cpu.A &= 0xFE; FLAG_NZ(g_cpu.A);
label_85D2:;
    /* $85D2: 85 */ nes_instruction_boundary(0x85D2, 3); nes_write(0x37, g_cpu.A);
label_85D4:;
    /* $85D4: B1 */ nes_instruction_boundary(0x85D4, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85D6:;
    /* $85D6: 85 */ nes_instruction_boundary(0x85D6, 3); nes_write(0x62, g_cpu.A);
label_85D8:;
    /* $85D8: C8 */ nes_instruction_boundary(0x85D8, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85D9:;
    /* $85D9: B1 */ nes_instruction_boundary(0x85D9, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 85 */ nes_instruction_boundary(0x85DB, 3); nes_write(0x25, g_cpu.A);
label_85DD:;
    /* $85DD: C8 */ nes_instruction_boundary(0x85DD, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85DE:;
    /* $85DE: B1 */ nes_instruction_boundary(0x85DE, 5); g_cpu.A = nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85E0:;
    /* $85E0: 85 */ nes_instruction_boundary(0x85E0, 3); nes_write(0x26, g_cpu.A);
label_85E2:;
    /* $85E2: A0 */ nes_instruction_boundary(0x85E2, 2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_85E4:;
    /* $85E4: B1 */ nes_instruction_boundary(0x85E4, 5); g_cpu.A = nes_read((nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85E6:;
    /* $85E6: 99 */ nes_instruction_boundary(0x85E6, 5); nes_write((0x0169 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_85E9:;
    /* $85E9: 88 */ nes_instruction_boundary(0x85E9, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85EA:;
    /* $85EA: 10 */ nes_instruction_boundary(0x85EA, 2); if (!g_cpu.N) {
    nes_instruction_boundary(0x85E4, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_85E4;
    }
label_85EC:;
    /* $85EC: A9 */ nes_instruction_boundary(0x85EC, 2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_85EE:;
    /* $85EE: 85 */ nes_instruction_boundary(0x85EE, 3); nes_write(0x63, g_cpu.A);
label_85F0:;
    /* $85F0: A9 */ nes_instruction_boundary(0x85F0, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_85F2:;
    /* $85F2: 4C */ nes_instruction_boundary(0x85F2, 3); nes_cpu_instruction_boundary(0x8050, 2); call_by_address_tail(0x8050, 4); return;
}

void func_856F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_856F_b4");
#endif
    func_856F_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8598_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8598_b4");
#endif
    func_856F_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85CE_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85CE_b4");
#endif
    func_856F_b4_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85D9_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85D9_b4");
#endif
    func_856F_b4_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8571_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8571_b4");
#endif
    func_856F_b4_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95B4_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95B4_b4");
#endif
label_95B4:;
    /* $95B4: A9 */ nes_instruction_boundary(0x95B4, 2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_95B6:;
    /* $95B6: 9D */ nes_instruction_boundary(0x95B6, 5); nes_write((0x04D1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_95B9:;
    /* $95B9: A5 */ nes_instruction_boundary(0x95B9, 3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_95BB:;
    /* $95BB: 0A */ nes_instruction_boundary(0x95BB, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95BC:;
    /* $95BC: 0A */ nes_instruction_boundary(0x95BC, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95BD:;
    /* $95BD: 0A */ nes_instruction_boundary(0x95BD, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95BE:;
    /* $95BE: 0A */ nes_instruction_boundary(0x95BE, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95BF:;
    /* $95BF: 69 */ nes_instruction_boundary(0x95BF, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_95C1:;
    /* $95C1: 9D */ nes_instruction_boundary(0x95C1, 5); nes_write((0x0551 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_95C4:;
    /* $95C4: 60 */ nes_instruction_boundary(0x95C4, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95C5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95C5_b4");
#endif
label_95C5:;
    /* $95C5: A9 */ nes_instruction_boundary(0x95C5, 2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_95C7:;
    /* $95C7: 9D */ nes_instruction_boundary(0x95C7, 5); nes_write((0x04D1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_95CA:;
    /* $95CA: A5 */ nes_instruction_boundary(0x95CA, 3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_95CC:;
    /* $95CC: 0A */ nes_instruction_boundary(0x95CC, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95CD:;
    /* $95CD: 0A */ nes_instruction_boundary(0x95CD, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95CE:;
    /* $95CE: 0A */ nes_instruction_boundary(0x95CE, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95CF:;
    /* $95CF: 0A */ nes_instruction_boundary(0x95CF, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95D0:;
    /* $95D0: 69 */ nes_instruction_boundary(0x95D0, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_95D2:;
    /* $95D2: 9D */ nes_instruction_boundary(0x95D2, 5); nes_write((0x0551 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_95D5:;
    /* $95D5: 60 */ nes_instruction_boundary(0x95D5, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95D6_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95D6_b4");
#endif
label_95D6:;
    /* $95D6: A5 */ nes_instruction_boundary(0x95D6, 3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_95D8:;
    /* $95D8: 0A */ nes_instruction_boundary(0x95D8, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95D9:;
    /* $95D9: 0A */ nes_instruction_boundary(0x95D9, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95DA:;
    /* $95DA: 0A */ nes_instruction_boundary(0x95DA, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95DB:;
    /* $95DB: 0A */ nes_instruction_boundary(0x95DB, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_95DC:;
    /* $95DC: 69 */ nes_instruction_boundary(0x95DC, 2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_95DE:;
    /* $95DE: 9D */ nes_instruction_boundary(0x95DE, 5); nes_write((0x04D1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_95E1:;
    /* $95E1: A5 */ nes_instruction_boundary(0x95E1, 3); g_cpu.A = nes_read(0x25); FLAG_NZ(g_cpu.A);
label_95E3:;
    /* $95E3: 9D */ nes_instruction_boundary(0x95E3, 5); nes_write((0x0551 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_95E6:;
    /* $95E6: 60 */ nes_instruction_boundary(0x95E6, 6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_84F1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84F1_b4");
#endif
label_84F1:;
    /* $84F1: 51 */ nes_instruction_boundary(0x84F1, 5); g_cpu.A ^= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84F3:;
    /* $84F3: A9 */ nes_instruction_boundary(0x84F3, 2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_84F5:;
    /* $84F5: 4C */ nes_instruction_boundary(0x84F5, 3); nes_cpu_instruction_boundary(0x8050, 2); call_by_address_tail(0x8050, 4); return;
}

