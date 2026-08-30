/* Summer-Carnival-92---Recca-Japan_full_bank00_part00.c — PRG bank 0 function bodies (sub-part 0).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella Summer-Carnival-92---Recca-Japan_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "Summer-Carnival-92---Recca-Japan_full_decls.h"

void func_BE39_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE39_b0");
#endif
label_BE39:;
    /* $BE39: 31 */ nes_instruction_boundary(0xBE39, 5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE3B:;
    /* $BE3B: 31 */ nes_instruction_boundary(0xBE3B, 5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE3D:;
    /* $BE3D: A5 */ nes_instruction_boundary(0xBE3D, 3); g_cpu.A = nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_BE3F:;
    /* $BE3F: A6 */ nes_instruction_boundary(0xBE3F, 3); g_cpu.X = nes_read(0x38); FLAG_NZ(g_cpu.X);
label_BE41:;
    /* $BE41: 58 */ nes_instruction_boundary(0xBE41, 2); g_cpu.I = 0;
label_BE42:;
    /* $BE42: AA */ nes_instruction_boundary(0xBE42, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BE43:;
    /* $BE43: AB */ nes_instruction_boundary(0xBE43, 2); g_cpu.A = g_cpu.X = 0x05; FLAG_NZ(g_cpu.A);
label_BE45:;
    /* $BE45: AC */ nes_instruction_boundary(0xBE45, 4); g_cpu.Y = nes_read(0xAD06); FLAG_NZ(g_cpu.Y);
label_BE48:;
    /* $BE48: B0 */ nes_instruction_boundary(0xBE48, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_BE7B; }
label_BE4A:;
    /* $BE4A: B1 */ nes_instruction_boundary(0xBE4A, 5); g_cpu.A = nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE4C:;
    /* $BE4C: B2 */ nes_instruction_boundary(0xBE4C, 2); /* ILLEGAL $B2 — skip 1 */
label_BE4D:;
    /* $BE4D: AE */ nes_instruction_boundary(0xBE4D, 4); g_cpu.X = nes_read(0xAFB3); FLAG_NZ(g_cpu.X);
label_BE50:;
    /* $BE50: B4 */ nes_instruction_boundary(0xBE50, 4); g_cpu.Y = nes_read((0x06 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BE52:;
    /* $BE52: 06 */ nes_instruction_boundary(0xBE52, 5); { uint16_t a=0x1E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE54:;
    /* $BE54: B0 */ nes_instruction_boundary(0xBE54, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1E0B), 0); return; }
label_BE56:;
    /* $BE56: B9 */ nes_instruction_boundary(0xBE56, 4); g_cpu.A = nes_read((0xBAB6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE59:;
    /* $BE59: 21 */ nes_instruction_boundary(0xBE59, 6); g_cpu.A &= nes_read(nes_read16zp((0x1B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BE5B:;
    /* $BE5B: B4 */ nes_instruction_boundary(0xBE5B, 4); g_cpu.Y = nes_read((0xB4 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BE5D:;
    /* $BE5D: 06 */ nes_instruction_boundary(0xBE5D, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE5F:;
    /* $BE5F: B7 */ nes_instruction_boundary(0xBE5F, 4); g_cpu.A = g_cpu.X = nes_read((0xB7 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_BE61:;
    /* $BE61: B8 */ nes_instruction_boundary(0xBE61, 2); g_cpu.V = 0;
label_BE62:;
    /* $BE62: BB */ nes_instruction_boundary(0xBE62, 4); /* ILLEGAL $BB — skip 3 */
label_BE65:;
    /* $BE65: BD */ nes_instruction_boundary(0xBE65, 4); g_cpu.A = nes_read((0xBE08 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE68:;
    /* $BE68: 08 */ nes_instruction_boundary(0xBE68, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BE69:;
    /* $BE69: BF */ nes_instruction_boundary(0xBE69, 4); g_cpu.A = g_cpu.X = nes_read((0xB709 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE6C:;
    /* $BE6C: B7 */ nes_instruction_boundary(0xBE6C, 4); g_cpu.A = g_cpu.X = nes_read((0xC0 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_BE6E:;
    /* $BE6E: C1 */ nes_instruction_boundary(0xBE6E, 6); { uint8_t m=nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE70:;
    /* $BE70: 00 */ nes_instruction_boundary(0xBE70, 7); nes_brk_executed(0xBE70); return;
label_BE71:;
    /* $BE71: 00 */ nes_instruction_boundary(0xBE71, 7); nes_brk_executed(0xBE71); return;
label_BE72:;
    /* $BE72: 00 */ nes_instruction_boundary(0xBE72, 7); nes_brk_executed(0xBE72); return;
label_BE73:;
    /* $BE73: 00 */ nes_instruction_boundary(0xBE73, 7); nes_brk_executed(0xBE73); return;
label_BE74:;
    /* $BE74: 00 */ nes_instruction_boundary(0xBE74, 7); nes_brk_executed(0xBE74); return;
label_BE75:;
    /* $BE75: 00 */ nes_instruction_boundary(0xBE75, 7); nes_brk_executed(0xBE75); return;
label_BE76:;
    /* $BE76: 00 */ nes_instruction_boundary(0xBE76, 7); nes_brk_executed(0xBE76); return;
label_BE77:;
    /* $BE77: 00 */ nes_instruction_boundary(0xBE77, 7); nes_brk_executed(0xBE77); return;
label_BE78:;
    /* $BE78: 00 */ nes_instruction_boundary(0xBE78, 7); nes_brk_executed(0xBE78); return;
label_BE79:;
    /* $BE79: 00 */ nes_instruction_boundary(0xBE79, 7); nes_brk_executed(0xBE79); return;
label_BE7A:;
    /* $BE7A: 00 */ nes_instruction_boundary(0xBE7A, 7); nes_brk_executed(0xBE7A); return;
label_BE7B:;
    /* $BE7B: 02 */ nes_instruction_boundary(0xBE7B, 2); /* ILLEGAL $02 — skip 1 */
label_BE7C:;
    /* $BE7C: 00 */ nes_instruction_boundary(0xBE7C, 7); nes_brk_executed(0xBE7C); return;
}

void func_BCCE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCCE_b0");
#endif
label_BCCE:;
    /* $BCCE: 06 */ nes_instruction_boundary(0xBCCE, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD0:;
    /* $BCD0: 06 */ nes_instruction_boundary(0xBCD0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD2:;
    /* $BCD2: 06 */ nes_instruction_boundary(0xBCD2, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD4:;
    /* $BCD4: 06 */ nes_instruction_boundary(0xBCD4, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD6:;
    /* $BCD6: 06 */ nes_instruction_boundary(0xBCD6, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD8:;
    /* $BCD8: 06 */ nes_instruction_boundary(0xBCD8, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCDA:;
    /* $BCDA: 06 */ nes_instruction_boundary(0xBCDA, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCDC:;
    /* $BCDC: 06 */ nes_instruction_boundary(0xBCDC, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCDE:;
    /* $BCDE: 06 */ nes_instruction_boundary(0xBCDE, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE0:;
    /* $BCE0: 06 */ nes_instruction_boundary(0xBCE0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE2:;
    /* $BCE2: 06 */ nes_instruction_boundary(0xBCE2, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE4:;
    /* $BCE4: 06 */ nes_instruction_boundary(0xBCE4, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE6:;
    /* $BCE6: 06 */ nes_instruction_boundary(0xBCE6, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE8:;
    /* $BCE8: 06 */ nes_instruction_boundary(0xBCE8, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCEA:;
    /* $BCEA: 06 */ nes_instruction_boundary(0xBCEA, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCEC:;
    /* $BCEC: 06 */ nes_instruction_boundary(0xBCEC, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCEE:;
    /* $BCEE: 06 */ nes_instruction_boundary(0xBCEE, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF0:;
    /* $BCF0: 06 */ nes_instruction_boundary(0xBCF0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 06 */ nes_instruction_boundary(0xBCF2, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF4:;
    /* $BCF4: 06 */ nes_instruction_boundary(0xBCF4, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF6:;
    /* $BCF6: 06 */ nes_instruction_boundary(0xBCF6, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF8:;
    /* $BCF8: 06 */ nes_instruction_boundary(0xBCF8, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCFA:;
    /* $BCFA: 06 */ nes_instruction_boundary(0xBCFA, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCFC:;
    /* $BCFC: 06 */ nes_instruction_boundary(0xBCFC, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCFE:;
    /* $BCFE: 06 */ nes_instruction_boundary(0xBCFE, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD00:;
    /* $BD00: 06 */ nes_instruction_boundary(0xBD00, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD02:;
    /* $BD02: 06 */ nes_instruction_boundary(0xBD02, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD04:;
    /* $BD04: 06 */ nes_instruction_boundary(0xBD04, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD06:;
    /* $BD06: 06 */ nes_instruction_boundary(0xBD06, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD08:;
    /* $BD08: 06 */ nes_instruction_boundary(0xBD08, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD0A:;
    /* $BD0A: 06 */ nes_instruction_boundary(0xBD0A, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD0C:;
    /* $BD0C: 06 */ nes_instruction_boundary(0xBD0C, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD0E:;
    /* $BD0E: 06 */ nes_instruction_boundary(0xBD0E, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD10:;
    /* $BD10: 06 */ nes_instruction_boundary(0xBD10, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD12:;
    /* $BD12: 06 */ nes_instruction_boundary(0xBD12, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD14:;
    /* $BD14: 06 */ nes_instruction_boundary(0xBD14, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD16:;
    /* $BD16: 06 */ nes_instruction_boundary(0xBD16, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD18:;
    /* $BD18: 06 */ nes_instruction_boundary(0xBD18, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1A:;
    /* $BD1A: 06 */ nes_instruction_boundary(0xBD1A, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1C:;
    /* $BD1C: 06 */ nes_instruction_boundary(0xBD1C, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1E:;
    /* $BD1E: 06 */ nes_instruction_boundary(0xBD1E, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD20:;
    /* $BD20: 06 */ nes_instruction_boundary(0xBD20, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD22:;
    /* $BD22: 06 */ nes_instruction_boundary(0xBD22, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD24:;
    /* $BD24: 06 */ nes_instruction_boundary(0xBD24, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD26:;
    /* $BD26: 06 */ nes_instruction_boundary(0xBD26, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD28:;
    /* $BD28: 06 */ nes_instruction_boundary(0xBD28, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD2A:;
    /* $BD2A: 06 */ nes_instruction_boundary(0xBD2A, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD2C:;
    /* $BD2C: 06 */ nes_instruction_boundary(0xBD2C, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD2E:;
    /* $BD2E: 06 */ nes_instruction_boundary(0xBD2E, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD30:;
    /* $BD30: 06 */ nes_instruction_boundary(0xBD30, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD32:;
    /* $BD32: 06 */ nes_instruction_boundary(0xBD32, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD34:;
    /* $BD34: 06 */ nes_instruction_boundary(0xBD34, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD36:;
    /* $BD36: 06 */ nes_instruction_boundary(0xBD36, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD38:;
    /* $BD38: 06 */ nes_instruction_boundary(0xBD38, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD3A:;
    /* $BD3A: 06 */ nes_instruction_boundary(0xBD3A, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD3C:;
    /* $BD3C: 0C */ nes_instruction_boundary(0xBD3C, 4); (void)nes_read(0x0D02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD3F:;
    /* $BD3F: 03 */ nes_instruction_boundary(0xBD3F, 8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BD41:;
    /* $BD41: 04 */ nes_instruction_boundary(0xBD41, 3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD43:;
    /* $BD43: 05 */ nes_instruction_boundary(0xBD43, 3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_BD45:;
    /* $BD45: 06 */ nes_instruction_boundary(0xBD45, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD47:;
    /* $BD47: 07 */ nes_instruction_boundary(0xBD47, 5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BD49:;
    /* $BD49: 08 */ nes_instruction_boundary(0xBD49, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BD4A:;
    /* $BD4A: 10 */ nes_instruction_boundary(0xBD4A, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BD54; }
label_BD4C:;
    /* $BD4C: 11 */ nes_instruction_boundary(0xBD4C, 5); g_cpu.A |= nes_read((nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD4E:;
    /* $BD4E: 12 */ nes_instruction_boundary(0xBD4E, 2); /* ILLEGAL $12 — skip 1 */
label_BD4F:;
    /* $BD4F: 0A */ nes_instruction_boundary(0xBD4F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BD50:;
    /* $BD50: 0A */ nes_instruction_boundary(0xBD50, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BD51:;
    /* $BD51: 0B */ nes_instruction_boundary(0xBD51, 2); g_cpu.A &= 0x13; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_BD53:;
    /* $BD53: 00 */ nes_instruction_boundary(0xBD53, 7); nes_brk_executed(0xBD53); return;
label_BD54:;
    /* $BD54: 00 */ nes_instruction_boundary(0xBD54, 7); nes_brk_executed(0xBD54); return;
}

void func_AFE4_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFE4_b0");
#endif
label_AFE4:;
    /* $AFE4: 16 */ nes_instruction_boundary(0xAFE4, 6); { uint16_t a=(0x15 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFE6:;
    /* $AFE6: 05 */ nes_instruction_boundary(0xAFE6, 3); g_cpu.A |= nes_read(0x30); FLAG_NZ(g_cpu.A);
label_AFE8:;
    /* $AFE8: 29 */ nes_instruction_boundary(0xAFE8, 2); g_cpu.A &= 0x19; FLAG_NZ(g_cpu.A);
label_AFEA:;
    /* $AFEA: 14 */ nes_instruction_boundary(0xAFEA, 4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFEC:;
    /* $AFEC: 28 */ nes_instruction_boundary(0xAFEC, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AFED:;
    /* $AFED: 06 */ nes_instruction_boundary(0xAFED, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFEF:;
    /* $AFEF: 06 */ nes_instruction_boundary(0xAFEF, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFF1:;
    /* $AFF1: 06 */ nes_instruction_boundary(0xAFF1, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFF3:;
    /* $AFF3: 06 */ nes_instruction_boundary(0xAFF3, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFF5:;
    /* $AFF5: 05 */ nes_instruction_boundary(0xAFF5, 3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_AFF7:;
    /* $AFF7: 03 */ nes_instruction_boundary(0xAFF7, 8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFF9:;
    /* $AFF9: 02 */ nes_instruction_boundary(0xAFF9, 2); /* ILLEGAL $02 — skip 1 */
label_AFFA:;
    /* $AFFA: 02 */ nes_instruction_boundary(0xAFFA, 2); /* ILLEGAL $02 — skip 1 */
label_AFFB:;
    /* $AFFB: 02 */ nes_instruction_boundary(0xAFFB, 2); /* ILLEGAL $02 — skip 1 */
label_AFFC:;
    /* $AFFC: 03 */ nes_instruction_boundary(0xAFFC, 8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFFE:;
    /* $AFFE: 02 */ nes_instruction_boundary(0xAFFE, 2); /* ILLEGAL $02 — skip 1 */
label_AFFF:;
    /* $AFFF: 02 */ nes_instruction_boundary(0xAFFF, 2); /* ILLEGAL $02 — skip 1 */
label_B000:;
    /* $B000: 03 */ nes_instruction_boundary(0xB000, 8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B002:;
    /* $B002: 02 */ nes_instruction_boundary(0xB002, 2); /* ILLEGAL $02 — skip 1 */
label_B003:;
    /* $B003: 01 */ nes_instruction_boundary(0xB003, 6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B005:;
    /* $B005: 06 */ nes_instruction_boundary(0xB005, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B007:;
    /* $B007: 06 */ nes_instruction_boundary(0xB007, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B009:;
    /* $B009: 06 */ nes_instruction_boundary(0xB009, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B00B:;
    /* $B00B: 06 */ nes_instruction_boundary(0xB00B, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B00D:;
    /* $B00D: 00 */ nes_instruction_boundary(0xB00D, 7); nes_brk_executed(0xB00D); return;
}

void func_AC71_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC71_b0");
#endif
label_AC71:;
    /* $AC71: 2D */ nes_instruction_boundary(0xAC71, 4); g_cpu.A &= nes_read(0x0103); FLAG_NZ(g_cpu.A);
label_AC74:;
    /* $AC74: 06 */ nes_instruction_boundary(0xAC74, 5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC76:;
    /* $AC76: 09 */ nes_instruction_boundary(0xAC76, 2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_AC78:;
    /* $AC78: 10 */ nes_instruction_boundary(0xAC78, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0C8E), 0); return; }
label_AC7A:;
    /* $AC7A: 18 */ nes_instruction_boundary(0xAC7A, 2); g_cpu.C = 0;
label_AC7B:;
    /* $AC7B: 1A */ nes_instruction_boundary(0xAC7B, 2); /* NOP */
label_AC7C:;
    /* $AC7C: 1D */ nes_instruction_boundary(0xAC7C, 4); g_cpu.A |= nes_read((0x2622 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC7F:;
    /* $AC7F: 2A */ nes_instruction_boundary(0xAC7F, 2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC80:;
    /* $AC80: 2C */ nes_instruction_boundary(0xAC80, 4); { uint8_t m=nes_read(0x032E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC83:;
    /* $AC83: 01 */ nes_instruction_boundary(0xAC83, 6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC85:;
    /* $AC85: 07 */ nes_instruction_boundary(0xAC85, 5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AC87:;
    /* $AC87: 0C */ nes_instruction_boundary(0xAC87, 4); (void)nes_read(0x130F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC8A:;
    /* $AC8A: 00 */ nes_instruction_boundary(0xAC8A, 7); nes_brk_executed(0xAC8A); return;
label_AC8B:; return;
label_AC8C:; return;
label_AC8F:; return;
label_AC90:; return;
label_AC92:; return;
label_AC94:; return;
label_AC96:; return;
label_AC98:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA3:; return;
label_ACA5:; return;
label_ACA7:; return;
label_ACA8:; return;
label_ACAB:; return;
label_ACAC:; return;
label_ACAF:; return;
label_ACB0:; return;
label_ACB2:; return;
label_ACB4:; return;
label_ACB6:; return;
label_ACB8:; return;
label_ACBA:; return;
label_ACBD:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC3:; return;
label_ACC5:; return;
label_ACC7:; return;
label_ACCA:; return;
label_ACCB:; return;
label_ACCC:; return;
label_ACCF:; return;
label_ACD0:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD6:; return;
label_ACD8:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE3:; return;
label_ACE5:; return;
label_ACE7:; return;
label_ACE8:; return;
label_ACEB:; return;
label_ACEC:; return;
label_ACEF:; return;
label_ACF0:; return;
label_ACF2:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFF:; return;
label_AD00:; return;
label_AD03:; return;
label_AD05:; return;
label_AD07:; return;
label_AD0A:; return;
label_AD0B:; return;
label_AD0C:; return;
label_AD0F:; return;
label_AD10:; return;
label_AD12:; return;
label_AD14:; return;
label_AD16:; return;
label_AD18:; return;
label_AD1B:; return;
label_AD1C:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD23:; return;
label_AD25:; return;
label_AD27:; return;
label_AD28:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2F:; return;
label_AD30:; return;
label_AD32:; return;
label_AD34:; return;
label_AD36:; return;
label_AD38:; return;
label_AD3A:; return;
label_AD3D:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD43:; return;
label_AD45:; return;
label_AD47:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4F:; return;
label_AD50:; return;
label_AD52:; return;
label_AD54:; return;
label_AD56:; return;
label_AD58:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD63:; return;
label_AD65:; return;
label_AD67:; return;
label_AD6A:; return;
label_AD6B:; return;
label_AD6C:; return;
label_AD6D:; return;
label_AD70:; return;
label_AD72:; return;
label_AD74:; return;
label_AD75:; return;
label_AD76:; return;
label_AD77:; return;
label_AD79:; return;
label_AD7B:; return;
label_AD7C:; return;
label_AD7F:; return;
label_AD81:; return;
label_AD83:; return;
label_AD85:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8B:; return;
label_AD8C:; return;
label_AD8D:; return;
label_AD90:; return;
label_AD92:; return;
label_AD93:; return;
label_AD95:; return;
label_AD96:; return;
label_AD98:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA3:; return;
label_ADA5:; return;
label_ADA7:; return;
label_ADA8:; return;
label_ADAB:; return;
label_ADAC:; return;
label_ADAF:; return;
label_ADB0:; return;
label_ADB2:; return;
label_ADB4:; return;
label_ADB6:; return;
label_ADB8:; return;
label_ADBA:; return;
label_ADBD:; return;
label_ADBF:; return;
label_ADC0:; return;
label_ADC3:; return;
label_ADC5:; return;
label_ADC7:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD2:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE3:; return;
label_ADE5:; return;
label_ADE7:; return;
label_ADE8:; return;
label_ADEB:; return;
label_ADEC:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF4:; return;
label_ADF6:; return;
label_ADF8:; return;
label_ADFA:; return;
label_ADFB:; return;
label_ADFC:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE03:; return;
label_AE05:; return;
label_AE07:; return;
label_AE0A:; return;
label_AE0B:; return;
label_AE0C:; return;
label_AE0F:; return;
label_AE10:; return;
label_AE12:; return;
label_AE14:; return;
label_AE16:; return;
label_AE18:; return;
label_AE1B:; return;
label_AE1C:; return;
label_AE1F:; return;
label_AE20:; return;
label_AE23:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE2B:; return;
label_AE2C:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE32:; return;
label_AE34:; return;
label_AE36:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3D:; return;
label_AE3F:; return;
label_AE40:; return;
label_AE43:; return;
label_AE45:; return;
label_AE47:; return;
label_AE4A:; return;
label_AE4B:; return;
label_AE4C:; return;
label_AE4F:; return;
label_AE50:; return;
label_AE52:; return;
label_AE54:; return;
label_AE56:; return;
label_AE58:; return;
label_AE5B:; return;
label_AE5C:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE63:; return;
label_AE64:; return;
label_AE65:; return;
label_AE66:; return;
label_AE67:; return;
label_AE69:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE70:; return;
label_AE73:; return;
label_AE74:; return;
label_AE77:; return;
label_AE7A:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE80:; return;
label_AE83:; return;
label_AE86:; return;
label_AE89:; return;
label_AE8C:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE91:; return;
label_AE93:; return;
label_AE95:; return;
label_AE97:; return;
label_AE98:; return;
label_AE9B:; return;
label_AE9C:; return;
label_AE9F:; return;
label_AEA1:; return;
label_AEA3:; return;
label_AEA4:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB0:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB7:; return;
label_AEB8:; return;
label_AED9:; return;
label_AEDC:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEB:; return;
label_AEEE:; return;
label_AEF0:; return;
label_AEF2:; return;
label_AEF4:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEF9:; return;
label_AEFA:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AF00:; return;
label_AF02:; return;
label_AF04:; return;
label_AF05:; return;
label_AF08:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF10:; return;
label_AF13:; return;
label_AF16:; return;
label_AF18:; return;
label_AF1A:; return;
label_AF1C:; return;
label_AF1E:; return;
label_AF20:; return;
label_AF23:; return;
label_AF26:; return;
label_AF28:; return;
label_AF2A:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF2F:; return;
label_AF31:; return;
label_AF33:; return;
label_AF35:; return;
label_AF37:; return;
label_AF3A:; return;
label_AF3B:; return;
label_AF3D:; return;
label_AF3F:; return;
label_AF41:; return;
label_AF43:; return;
label_AF45:; return;
label_AF47:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4F:; return;
label_AF52:; return;
label_AF54:; return;
label_AF56:; return;
label_AF58:; return;
label_AF5A:; return;
label_AF5C:; return;
label_AF5E:; return;
label_AF61:; return;
label_AF62:; return;
label_AF65:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6A:; return;
label_AF6C:; return;
label_AF6E:; return;
label_AF6F:; return;
label_AF72:; return;
label_AF75:; return;
label_AF78:; return;
label_AF7A:; return;
label_AF7C:; return;
label_AF7E:; return;
label_AF7F:; return;
label_AF81:; return;
label_AF82:; return;
label_AF85:; return;
label_AF88:; return;
label_AF89:; return;
label_AF8A:; return;
label_AF8C:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF96:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9B:; return;
label_AF9C:; return;
label_AF9D:; return;
label_AF9E:; return;
label_AF9F:; return;
label_AFA0:; return;
label_AFA1:; return;
label_AFA2:; return;
label_AFA3:; return;
label_AFA4:; return;
label_AFA5:; return;
label_AFA6:; return;
label_AFA7:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAA:; return;
label_AFAC:; return;
label_AFAD:; return;
label_AFAE:; return;
label_AFAF:; return;
label_AFB0:; return;
label_AFB1:; return;
label_AFB2:; return;
label_AFB3:; return;
label_AFB5:; return;
label_AFB6:; return;
label_AFB7:; return;
label_AFB8:; return;
label_AFB9:; return;
label_AFBA:; return;
label_AFBB:; return;
label_AFBC:; return;
label_AFBD:; return;
label_AFBE:; return;
label_AFBF:; return;
label_AFC0:; return;
label_AFC1:; return;
label_AFC2:; return;
label_AFC3:; return;
label_AFC4:; return;
label_AFC5:; return;
label_AFC6:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFC9:; return;
label_AFCA:; return;
label_AFCB:; return;
label_AFCC:; return;
label_AFCD:; return;
label_AFCE:; return;
label_AFCF:; return;
label_AFD0:; return;
label_AFD1:; return;
label_AFD2:; return;
label_AFD3:; return;
label_AFD4:; return;
label_AFD5:; return;
label_AFD6:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFD9:; return;
label_AFDA:; return;
label_AFDB:; return;
label_AFDC:; return;
label_AFDD:; return;
label_AFDE:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE1:; return;
label_AFE2:; return;
label_AFE3:; return;
label_AFE4:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEA:; return;
label_AFEC:; return;
label_AFED:; return;
label_AFEF:; return;
label_AFF1:; return;
label_AFF3:; return;
label_AFF5:; return;
label_AFF7:; return;
label_AFF9:; return;
label_AFFA:; return;
label_AFFB:; return;
label_AFFC:; return;
label_AFFE:; return;
label_AFFF:; return;
label_B000:; return;
label_B002:; return;
label_B003:; return;
label_B005:; return;
label_B007:; return;
label_B009:; return;
label_B00B:; return;
label_B00D:; return;
label_B00E:; return;
label_B00F:; return;
label_B010:; return;
label_B011:; return;
label_B012:; return;
label_B014:; return;
label_B015:; return;
label_B016:; return;
label_B017:; return;
label_B01A:; return;
label_B01B:; return;
label_B01C:; return;
label_B01D:; return;
label_B01E:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B022:; return;
label_B024:; return;
label_B025:; return;
label_B026:; return;
label_B027:; return;
label_B02A:; return;
label_B02B:; return;
label_B02C:; return;
label_B02D:; return;
label_B02F:; return;
label_B030:; return;
label_B031:; return;
label_B032:; return;
label_B034:; return;
label_B035:; return;
label_B036:; return;
label_B037:; return;
label_B03A:; return;
label_B03B:; return;
label_B03D:; return;
label_B03E:; return;
label_B03F:; return;
label_B040:; return;
label_B041:; return;
label_B042:; return;
label_B044:; return;
label_B045:; return;
label_B046:; return;
label_B047:; return;
label_B04A:; return;
label_B04B:; return;
label_B04C:; return;
label_B04D:; return;
label_B04E:; return;
label_B04F:; return;
label_B050:; return;
label_B051:; return;
label_B052:; return;
label_B054:; return;
label_B055:; return;
label_B056:; return;
label_B057:; return;
label_B05A:; return;
label_B05B:; return;
label_B05C:; return;
label_B05D:; return;
label_B05E:; return;
label_B05F:; return;
label_B060:; return;
label_B061:; return;
label_B063:; return;
label_B065:; return;
label_B067:; return;
label_B06A:; return;
label_B06B:; return;
label_B06C:; return;
label_B06D:; return;
label_B06E:; return;
label_B06F:; return;
label_B070:; return;
label_B071:; return;
label_B073:; return;
label_B074:; return;
label_B076:; return;
label_B079:; return;
label_B07A:; return;
label_B07B:; return;
label_B07C:; return;
label_B07D:; return;
label_B07E:; return;
label_B07F:; return;
label_B080:; return;
label_B081:; return;
label_B082:; return;
label_B083:; return;
label_B084:; return;
label_B085:; return;
label_B086:; return;
label_B087:; return;
label_B088:; return;
label_B089:; return;
label_B08A:; return;
label_B08B:; return;
label_B08C:; return;
label_B08D:; return;
label_B08E:; return;
label_B08F:; return;
label_B090:; return;
label_B091:; return;
label_B092:; return;
label_B093:; return;
label_B094:; return;
label_B095:; return;
label_B096:; return;
label_B097:; return;
label_B098:; return;
label_B099:; return;
label_B09A:; return;
label_B09B:; return;
label_B09C:; return;
label_B09D:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A0:; return;
label_B0A1:; return;
label_B0A2:; return;
label_B0A3:; return;
label_B0A4:; return;
label_B0A5:; return;
label_B0A6:; return;
label_B0A7:; return;
label_B0A8:; return;
label_B0A9:; return;
label_B0AA:; return;
label_B0AB:; return;
label_B0AC:; return;
label_B0AD:; return;
label_B0AE:; return;
label_B0AF:; return;
label_B0B0:; return;
label_B0B1:; return;
label_B0B2:; return;
label_B0B3:; return;
label_B0B4:; return;
label_B0B5:; return;
label_B0B6:; return;
label_B0B7:; return;
label_B0B8:; return;
label_B0B9:; return;
label_B0BA:; return;
label_B0BB:; return;
label_B0BC:; return;
label_B0BD:; return;
label_B0BE:; return;
label_B0BF:; return;
label_B0C0:; return;
label_B0C1:; return;
label_B0C2:; return;
label_B0C3:; return;
label_B0C4:; return;
label_B0C5:; return;
label_B0C6:; return;
label_B0C7:; return;
label_B0C8:; return;
label_B0C9:; return;
label_B0CA:; return;
label_B0CB:; return;
label_B0CC:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0CF:; return;
label_B0D0:; return;
label_B0D1:; return;
label_B0D2:; return;
label_B0D3:; return;
label_B0D4:; return;
label_B0D5:; return;
label_B0D6:; return;
label_B0D7:; return;
label_B0D8:; return;
label_B0D9:; return;
label_B0DA:; return;
label_B0DB:; return;
label_B0DC:; return;
label_B0DD:; return;
label_B0DE:; return;
label_B0DF:; return;
label_B0E0:; return;
label_B0E1:; return;
label_B0E2:; return;
label_B0E3:; return;
label_B0E4:; return;
label_B0E5:; return;
label_B0E6:; return;
label_B0E7:; return;
label_B0E8:; return;
label_B0E9:; return;
label_B0EA:; return;
label_B0EB:; return;
label_B0EC:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0EF:; return;
label_B0F0:; return;
label_B0F1:; return;
label_B0F2:; return;
label_B0F3:; return;
label_B0F4:; return;
label_B0F5:; return;
label_B0F6:; return;
label_B0F7:; return;
label_B0F8:; return;
label_B0F9:; return;
label_B0FA:; return;
label_B0FB:; return;
label_B0FC:; return;
label_B0FD:; return;
label_B0FE:; return;
label_B0FF:; return;
label_B100:; return;
label_B101:; return;
label_B102:; return;
label_B103:; return;
label_B104:; return;
label_B105:; return;
label_B106:; return;
label_B107:; return;
label_B108:; return;
label_B109:; return;
label_B10A:; return;
label_B10B:; return;
label_B10C:; return;
label_B10D:; return;
label_B10E:; return;
label_B10F:; return;
label_B111:; return;
label_B113:; return;
label_B114:; return;
label_B117:; return;
label_B118:; return;
label_B11A:; return;
label_B11B:; return;
label_B11C:; return;
label_B11D:; return;
label_B11E:; return;
label_B11F:; return;
label_B120:; return;
label_B121:; return;
label_B123:; return;
label_B126:; return;
label_B128:; return;
label_B12A:; return;
label_B12B:; return;
label_B12C:; return;
label_B12D:; return;
label_B12E:; return;
label_B12F:; return;
label_B130:; return;
label_B131:; return;
label_B132:; return;
label_B133:; return;
label_B134:; return;
label_B135:; return;
label_B136:; return;
label_B137:; return;
label_B139:; return;
label_B13A:; return;
label_B13B:; return;
label_B13D:; return;
label_B13E:; return;
label_B13F:; return;
label_B140:; return;
label_B141:; return;
label_B143:; return;
label_B144:; return;
label_B145:; return;
label_B146:; return;
label_B147:; return;
label_B149:; return;
label_B14A:; return;
label_B14B:; return;
label_B14C:; return;
label_B14D:; return;
label_B14E:; return;
label_B14F:; return;
label_B150:; return;
label_B151:; return;
label_B153:; return;
label_B154:; return;
label_B155:; return;
label_B156:; return;
label_B157:; return;
label_B159:; return;
label_B15A:; return;
label_B15B:; return;
label_B15C:; return;
label_B15D:; return;
label_B15E:; return;
label_B15F:; return;
label_B160:; return;
label_B162:; return;
label_B165:; return;
label_B166:; return;
label_B167:; return;
label_B169:; return;
label_B16A:; return;
label_B16B:; return;
label_B16C:; return;
label_B16D:; return;
label_B16E:; return;
label_B16F:; return;
label_B170:; return;
label_B171:; return;
label_B173:; return;
label_B174:; return;
label_B175:; return;
label_B176:; return;
label_B177:; return;
label_B179:; return;
label_B17A:; return;
label_B17B:; return;
label_B17C:; return;
label_B17D:; return;
label_B17E:; return;
label_B17F:; return;
label_B180:; return;
label_B181:; return;
label_B183:; return;
label_B184:; return;
label_B185:; return;
label_B186:; return;
label_B187:; return;
label_B189:; return;
label_B18A:; return;
label_B18B:; return;
label_B18C:; return;
label_B18D:; return;
label_B18E:; return;
label_B18F:; return;
label_B190:; return;
label_B191:; return;
label_B192:; return;
label_B194:; return;
label_B195:; return;
label_B196:; return;
label_B197:; return;
label_B19A:; return;
label_B19C:; return;
label_B19D:; return;
label_B19E:; return;
label_B19F:; return;
label_B1A0:; return;
label_B1A1:; return;
label_B1A2:; return;
label_B1A4:; return;
label_B1A5:; return;
label_B1A6:; return;
label_B1A7:; return;
label_B1AA:; return;
label_B1AB:; return;
label_B1AC:; return;
label_B1AD:; return;
label_B1AF:; return;
label_B1B0:; return;
label_B1B1:; return;
label_B1B2:; return;
label_B1B4:; return;
label_B1B5:; return;
label_B1B6:; return;
label_B1B7:; return;
label_B1BA:; return;
label_B1BB:; return;
label_B1BC:; return;
label_B1BD:; return;
label_B1BE:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C1:; return;
label_B1C2:; return;
label_B1C4:; return;
label_B1C5:; return;
label_B1C6:; return;
label_B1C7:; return;
label_B1CA:; return;
label_B1CB:; return;
label_B1CC:; return;
label_B1CD:; return;
label_B1CE:; return;
label_B1CF:; return;
label_B1D0:; return;
label_B1D1:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D5:; return;
label_B1D6:; return;
label_B1D7:; return;
label_B1DA:; return;
label_B1DB:; return;
label_B1DC:; return;
label_B1DD:; return;
label_B1DE:; return;
label_B1DF:; return;
label_B1E0:; return;
label_B1E1:; return;
label_B1E2:; return;
label_B1E4:; return;
label_B1E5:; return;
label_B1E6:; return;
label_B1E7:; return;
label_B1EA:; return;
label_B1EB:; return;
label_B1EC:; return;
label_B1ED:; return;
label_B1EE:; return;
label_B1EF:; return;
label_B1F0:; return;
label_B1F2:; return;
label_B1F4:; return;
label_B1F5:; return;
label_B1F6:; return;
label_B1F7:; return;
label_B1FA:; return;
label_B1FB:; return;
label_B1FC:; return;
label_B1FD:; return;
label_B1FE:; return;
label_B1FF:; return;
label_B200:; return;
label_B201:; return;
label_B202:; return;
label_B204:; return;
label_B205:; return;
label_B206:; return;
label_B207:; return;
label_B20A:; return;
label_B20B:; return;
label_B20C:; return;
label_B20D:; return;
label_B20E:; return;
label_B20F:; return;
label_B210:; return;
label_B211:; return;
label_B213:; return;
label_B216:; return;
label_B217:; return;
label_B219:; return;
label_B21B:; return;
label_B21D:; return;
label_B21E:; return;
label_B21F:; return;
label_B220:; return;
label_B221:; return;
label_B223:; return;
label_B226:; return;
label_B228:; return;
label_B22A:; return;
label_B22B:; return;
label_B22C:; return;
label_B22D:; return;
label_B22E:; return;
label_B22F:; return;
label_B230:; return;
label_B231:; return;
label_B232:; return;
label_B233:; return;
label_B236:; return;
label_B237:; return;
label_B239:; return;
label_B23A:; return;
label_B23B:; return;
label_B23C:; return;
label_B23D:; return;
label_B23E:; return;
label_B23F:; return;
label_B241:; return;
label_B242:; return;
label_B244:; return;
label_B247:; return;
label_B249:; return;
label_B24A:; return;
label_B24B:; return;
label_B24C:; return;
label_B24D:; return;
label_B24E:; return;
label_B24F:; return;
label_B250:; return;
label_B251:; return;
label_B253:; return;
label_B256:; return;
label_B257:; return;
label_B259:; return;
label_B25B:; return;
label_B25C:; return;
label_B25D:; return;
label_B25E:; return;
label_B25F:; return;
label_B260:; return;
label_B261:; return;
label_B263:; return;
label_B266:; return;
label_B268:; return;
label_B26A:; return;
label_B26B:; return;
label_B26C:; return;
label_B26D:; return;
label_B26E:; return;
label_B270:; return;
label_B271:; return;
label_B272:; return;
label_B273:; return;
label_B276:; return;
label_B277:; return;
label_B279:; return;
label_B27A:; return;
label_B27B:; return;
label_B27C:; return;
label_B27D:; return;
label_B27E:; return;
label_B27F:; return;
label_B280:; return;
label_B281:; return;
label_B282:; return;
label_B284:; return;
label_B287:; return;
label_B289:; return;
label_B28A:; return;
label_B28B:; return;
label_B28D:; return;
label_B28E:; return;
label_B28F:; return;
label_B290:; return;
label_B291:; return;
label_B293:; return;
label_B296:; return;
label_B297:; return;
label_B299:; return;
label_B29B:; return;
label_B29D:; return;
label_B29E:; return;
label_B29F:; return;
label_B2A0:; return;
label_B2A1:; return;
label_B2A3:; return;
label_B2A6:; return;
label_B2A8:; return;
label_B2AA:; return;
label_B2AB:; return;
label_B2AC:; return;
label_B2AD:; return;
label_B2AE:; return;
label_B2AF:; return;
label_B2B0:; return;
label_B2B1:; return;
label_B2B2:; return;
label_B2B3:; return;
label_B2B6:; return;
label_B2B7:; return;
label_B2B9:; return;
label_B2BA:; return;
label_B2BB:; return;
label_B2BC:; return;
label_B2BD:; return;
label_B2BE:; return;
label_B2BF:; return;
label_B2C1:; return;
label_B2C2:; return;
label_B2C4:; return;
label_B2C7:; return;
label_B2C9:; return;
label_B2CA:; return;
label_B2CB:; return;
label_B2CC:; return;
label_B2CD:; return;
label_B2CE:; return;
label_B2CF:; return;
label_B2D0:; return;
label_B2D1:; return;
label_B2D3:; return;
label_B2D6:; return;
label_B2D7:; return;
label_B2D9:; return;
label_B2DB:; return;
label_B2DC:; return;
label_B2DD:; return;
label_B2DE:; return;
label_B2DF:; return;
label_B2E0:; return;
label_B2E1:; return;
label_B2E3:; return;
label_B2E6:; return;
label_B2E8:; return;
label_B2EA:; return;
label_B2EB:; return;
label_B2EC:; return;
label_B2ED:; return;
label_B2EE:; return;
label_B2F0:; return;
label_B2F1:; return;
label_B2F2:; return;
label_B2F3:; return;
label_B2F6:; return;
label_B2F7:; return;
label_B2F9:; return;
label_B2FA:; return;
label_B2FB:; return;
label_B2FC:; return;
label_B2FD:; return;
label_B2FE:; return;
label_B2FF:; return;
label_B300:; return;
label_B301:; return;
label_B302:; return;
label_B304:; return;
label_B307:; return;
label_B309:; return;
label_B30A:; return;
label_B30B:; return;
label_B30D:; return;
label_B30E:; return;
label_B30F:; return;
label_B310:; return;
label_B311:; return;
label_B313:; return;
label_B316:; return;
label_B317:; return;
label_B319:; return;
label_B31A:; return;
label_B31B:; return;
label_B31C:; return;
label_B31D:; return;
label_B31E:; return;
label_B31F:; return;
label_B320:; return;
label_B321:; return;
label_B323:; return;
label_B326:; return;
label_B328:; return;
label_B32A:; return;
label_B32B:; return;
label_B32C:; return;
label_B32D:; return;
label_B32E:; return;
label_B32F:; return;
label_B330:; return;
label_B331:; return;
label_B332:; return;
label_B333:; return;
label_B336:; return;
label_B339:; return;
label_B33C:; return;
label_B33D:; return;
label_B33E:; return;
label_B33F:; return;
label_B341:; return;
label_B342:; return;
label_B344:; return;
label_B347:; return;
label_B348:; return;
label_B349:; return;
label_B34C:; return;
label_B34D:; return;
label_B34E:; return;
label_B34F:; return;
label_B350:; return;
label_B351:; return;
label_B353:; return;
label_B356:; return;
label_B359:; return;
label_B35C:; return;
label_B35D:; return;
label_B35E:; return;
label_B35F:; return;
label_B360:; return;
label_B361:; return;
label_B363:; return;
label_B366:; return;
label_B369:; return;
label_B36C:; return;
label_B36F:; return;
label_B370:; return;
label_B371:; return;
label_B372:; return;
label_B373:; return;
label_B376:; return;
label_B377:; return;
label_B379:; return;
label_B37B:; return;
label_B37E:; return;
label_B37F:; return;
label_B380:; return;
label_B381:; return;
label_B382:; return;
label_B384:; return;
label_B387:; return;
label_B389:; return;
label_B38B:; return;
label_B38E:; return;
label_B38F:; return;
label_B390:; return;
label_B391:; return;
label_B393:; return;
label_B396:; return;
label_B397:; return;
label_B399:; return;
label_B39B:; return;
label_B39D:; return;
label_B39E:; return;
label_B39F:; return;
label_B3A0:; return;
label_B3A1:; return;
label_B3A3:; return;
label_B3A6:; return;
label_B3A8:; return;
label_B3A9:; return;
label_B3AB:; return;
label_B3AD:; return;
label_B3AE:; return;
label_B3AF:; return;
label_B3B0:; return;
label_B3B1:; return;
label_B3B2:; return;
label_B3B3:; return;
label_B3B6:; return;
label_B3B7:; return;
label_B3B9:; return;
label_B3BB:; return;
label_B3BD:; return;
label_B3BE:; return;
label_B3BF:; return;
label_B3C0:; return;
label_B3C2:; return;
label_B3C4:; return;
label_B3C7:; return;
label_B3C9:; return;
label_B3CB:; return;
label_B3CD:; return;
label_B3CE:; return;
label_B3CF:; return;
label_B3D1:; return;
label_B3D3:; return;
label_B3D6:; return;
label_B3D7:; return;
label_B3D9:; return;
label_B3DB:; return;
label_B3DD:; return;
label_B3DE:; return;
label_B3DF:; return;
label_B3E0:; return;
label_B3E1:; return;
label_B3E3:; return;
label_B3E6:; return;
label_B3E8:; return;
label_B3EA:; return;
label_B3EC:; return;
label_B3ED:; return;
label_B3EE:; return;
label_B3EF:; return;
label_B3F0:; return;
label_B3F1:; return;
label_B3F2:; return;
label_B3F3:; return;
label_B3F6:; return;
label_B3F7:; return;
label_B3F9:; return;
label_B3FA:; return;
label_B3FB:; return;
label_B3FD:; return;
label_B3FE:; return;
label_B3FF:; return;
label_B400:; return;
label_B401:; return;
label_B402:; return;
label_B404:; return;
label_B407:; return;
label_B409:; return;
label_B40B:; return;
label_B40C:; return;
label_B40E:; return;
label_B411:; return;
label_B413:; return;
label_B416:; return;
label_B417:; return;
label_B418:; return;
label_B419:; return;
label_B41A:; return;
label_B41B:; return;
label_B41C:; return;
label_B41D:; return;
label_B420:; return;
label_B422:; return;
label_B424:; return;
label_B426:; return;
label_B428:; return;
label_B42A:; return;
label_B42B:; return;
label_B42C:; return;
label_B42D:; return;
label_B430:; return;
label_B431:; return;
label_B433:; return;
label_B436:; return;
label_B438:; return;
label_B43A:; return;
label_B43B:; return;
label_B43C:; return;
label_B43D:; return;
label_B440:; return;
label_B441:; return;
label_B442:; return;
label_B443:; return;
label_B446:; return;
label_B449:; return;
label_B44C:; return;
label_B44D:; return;
label_B450:; return;
label_B452:; return;
label_B454:; return;
label_B457:; return;
label_B458:; return;
label_B45A:; return;
label_B45D:; return;
label_B460:; return;
label_B462:; return;
label_B464:; return;
label_B467:; return;
label_B469:; return;
label_B46C:; return;
label_B499:; return;
label_B49B:; return;
label_B49D:; return;
label_B49F:; return;
label_B4A0:; return;
label_B4A1:; return;
label_B4A3:; return;
label_B4A6:; return;
label_B4A8:; return;
label_B4A9:; return;
label_B4AB:; return;
label_B4AD:; return;
label_B4AE:; return;
label_B4B1:; return;
label_B4B2:; return;
label_B4B3:; return;
label_B4B6:; return;
label_B4B7:; return;
label_B4B9:; return;
label_B4BB:; return;
label_B4BD:; return;
label_B4BF:; return;
label_B4C0:; return;
label_B4C2:; return;
label_B4C4:; return;
label_B4C7:; return;
label_B4C9:; return;
label_B4CB:; return;
label_B4CD:; return;
label_B4CE:; return;
label_B4D1:; return;
label_B4D3:; return;
label_B4D6:; return;
label_B4D7:; return;
label_B4D9:; return;
label_B4DB:; return;
label_B4DD:; return;
label_B4DF:; return;
label_B4E0:; return;
label_B4E1:; return;
label_B4E3:; return;
label_B4E6:; return;
label_B4E8:; return;
label_B4EA:; return;
label_B4EC:; return;
label_B4ED:; return;
label_B4EE:; return;
label_B4EF:; return;
label_B4F0:; return;
label_B4F1:; return;
label_B4F2:; return;
label_B4F3:; return;
label_B4F6:; return;
label_B4F7:; return;
label_B4F9:; return;
label_B4FA:; return;
label_B4FB:; return;
label_B4FD:; return;
label_B4FE:; return;
label_B4FF:; return;
label_B500:; return;
label_B501:; return;
label_B502:; return;
label_B504:; return;
label_B507:; return;
label_B509:; return;
label_B50B:; return;
label_B50C:; return;
label_B50E:; return;
label_B50F:; return;
label_B510:; return;
label_B511:; return;
label_B512:; return;
label_B513:; return;
label_B514:; return;
label_B515:; return;
label_B516:; return;
label_B517:; return;
label_B518:; return;
label_B519:; return;
label_B51A:; return;
label_B51B:; return;
label_B51C:; return;
label_B51D:; return;
label_B51E:; return;
label_B51F:; return;
label_B520:; return;
label_B521:; return;
label_B522:; return;
label_B523:; return;
label_B524:; return;
label_B525:; return;
label_B526:; return;
label_B527:; return;
label_B528:; return;
label_B529:; return;
label_B52A:; return;
label_B52B:; return;
label_B52C:; return;
label_B52D:; return;
label_B52E:; return;
label_B52F:; return;
label_B530:; return;
label_B531:; return;
label_B532:; return;
label_B533:; return;
label_B534:; return;
label_B535:; return;
label_B536:; return;
label_B537:; return;
label_B538:; return;
label_B539:; return;
label_B53A:; return;
label_B53B:; return;
label_B53C:; return;
label_B53D:; return;
label_B53E:; return;
label_B53F:; return;
label_B540:; return;
label_B541:; return;
label_B542:; return;
label_B543:; return;
label_B544:; return;
label_B545:; return;
label_B546:; return;
label_B547:; return;
label_B548:; return;
label_B549:; return;
label_B54B:; return;
label_B54C:; return;
label_B54D:; return;
label_B54E:; return;
label_B551:; return;
label_B552:; return;
label_B555:; return;
label_B556:; return;
label_B559:; return;
label_B55B:; return;
label_B55C:; return;
label_B55D:; return;
label_B55E:; return;
label_B55F:; return;
label_B560:; return;
label_B561:; return;
label_B562:; return;
label_B563:; return;
label_B564:; return;
label_B565:; return;
label_B568:; return;
label_B56B:; return;
label_B56C:; return;
label_B56D:; return;
label_B56E:; return;
label_B56F:; return;
label_B570:; return;
label_B571:; return;
label_B572:; return;
label_B573:; return;
label_B576:; return;
label_B578:; return;
label_B57A:; return;
label_B57B:; return;
label_B57C:; return;
label_B57D:; return;
label_B57E:; return;
label_B57F:; return;
label_B580:; return;
label_B581:; return;
label_B582:; return;
label_B583:; return;
label_B586:; return;
label_B589:; return;
label_B58A:; return;
label_B58C:; return;
label_B58E:; return;
label_B58F:; return;
label_B590:; return;
label_B591:; return;
label_B592:; return;
label_B593:; return;
label_B596:; return;
label_B599:; return;
label_B59B:; return;
label_B59C:; return;
label_B59D:; return;
label_B59F:; return;
label_B5A0:; return;
label_B5A1:; return;
label_B5A2:; return;
label_B5A3:; return;
label_B5A6:; return;
label_B5A9:; return;
label_B5AA:; return;
label_B5AB:; return;
label_B5AC:; return;
label_B5AE:; return;
label_B5B1:; return;
label_B5B2:; return;
label_B5B4:; return;
label_B5B6:; return;
label_B5B9:; return;
label_B5BA:; return;
label_B5BB:; return;
label_B5BC:; return;
label_B5BD:; return;
label_B5C0:; return;
label_B5C2:; return;
label_B5C4:; return;
label_B5C7:; return;
label_B5C9:; return;
label_B5CB:; return;
label_B5CD:; return;
label_B5D0:; return;
label_B5D2:; return;
label_B5D4:; return;
label_B5D7:; return;
label_B5D9:; return;
label_B5DB:; return;
label_B5DD:; return;
label_B5E0:; return;
label_B5E1:; return;
label_B5E3:; return;
label_B5E4:; return;
label_B5E5:; return;
label_B5E6:; return;
label_B5E7:; return;
label_B5E9:; return;
label_B5EB:; return;
label_B5ED:; return;
label_B5F0:; return;
label_B5F2:; return;
label_B5F5:; return;
label_B5F6:; return;
label_B5F7:; return;
label_B5F8:; return;
label_B5F9:; return;
label_B5FB:; return;
label_B5FD:; return;
label_B600:; return;
label_B601:; return;
label_B604:; return;
label_B607:; return;
label_B608:; return;
label_B609:; return;
label_B60A:; return;
label_B60B:; return;
label_B60C:; return;
label_B60D:; return;
label_B60E:; return;
label_B60F:; return;
label_B610:; return;
label_B611:; return;
label_B612:; return;
label_B614:; return;
label_B615:; return;
label_B616:; return;
label_B617:; return;
label_B618:; return;
label_B61A:; return;
label_B61B:; return;
label_B61C:; return;
label_B61D:; return;
label_B61E:; return;
label_B61F:; return;
label_B620:; return;
label_B621:; return;
label_B622:; return;
label_B623:; return;
label_B624:; return;
label_B625:; return;
label_B626:; return;
label_B627:; return;
label_B628:; return;
label_B629:; return;
label_B62A:; return;
label_B62B:; return;
label_B62C:; return;
label_B62D:; return;
label_B62E:; return;
label_B62F:; return;
label_B630:; return;
label_B631:; return;
label_B632:; return;
label_B633:; return;
label_B634:; return;
label_B635:; return;
label_B636:; return;
label_B637:; return;
label_B638:; return;
label_B639:; return;
label_B63A:; return;
label_B63B:; return;
label_B63C:; return;
label_B63D:; return;
label_B63E:; return;
label_B63F:; return;
label_B641:; return;
label_B642:; return;
label_B643:; return;
label_B644:; return;
label_B645:; return;
label_B647:; return;
label_B648:; return;
label_B649:; return;
label_B64A:; return;
label_B64B:; return;
label_B64C:; return;
label_B64E:; return;
label_B64F:; return;
label_B650:; return;
label_B651:; return;
label_B652:; return;
label_B653:; return;
label_B654:; return;
label_B655:; return;
label_B656:; return;
label_B657:; return;
label_B658:; return;
label_B659:; return;
label_B65A:; return;
label_B65B:; return;
label_B65C:; return;
label_B65D:; return;
label_B65E:; return;
label_B65F:; return;
label_B660:; return;
label_B661:; return;
label_B662:; return;
label_B663:; return;
label_B664:; return;
label_B665:; return;
label_B666:; return;
label_B667:; return;
label_B668:; return;
label_B669:; return;
label_B66A:; return;
label_B66B:; return;
label_B66C:; return;
label_B66D:; return;
label_B66E:; return;
label_B670:; return;
label_B671:; return;
label_B672:; return;
label_B673:; return;
label_B674:; return;
label_B676:; return;
label_B677:; return;
label_B678:; return;
label_B679:; return;
label_B67A:; return;
label_B67B:; return;
label_B67D:; return;
label_B67E:; return;
label_B67F:; return;
label_B680:; return;
label_B681:; return;
label_B682:; return;
label_B684:; return;
label_B685:; return;
label_B686:; return;
label_B687:; return;
label_B688:; return;
label_B68A:; return;
label_B68B:; return;
label_B68C:; return;
label_B68D:; return;
label_B68E:; return;
label_B68F:; return;
label_B690:; return;
label_B691:; return;
label_B692:; return;
label_B694:; return;
label_B695:; return;
label_B696:; return;
label_B697:; return;
label_B698:; return;
label_B69A:; return;
label_B69B:; return;
label_B69C:; return;
label_B69D:; return;
label_B69E:; return;
label_B69F:; return;
label_B6A0:; return;
label_B6A1:; return;
label_B6A2:; return;
label_B6A3:; return;
label_B6A4:; return;
label_B6A5:; return;
label_B6A6:; return;
label_B6A7:; return;
label_B6A8:; return;
label_B6A9:; return;
label_B6AA:; return;
label_B6AB:; return;
label_B6AC:; return;
label_B6AD:; return;
label_B6AE:; return;
label_B6AF:; return;
label_B6B0:; return;
label_B6B1:; return;
label_B6B2:; return;
label_B6B3:; return;
label_B6B4:; return;
label_B6B5:; return;
label_B6B6:; return;
label_B6B7:; return;
label_B6B8:; return;
label_B6B9:; return;
label_B6BA:; return;
label_B6BB:; return;
label_B6BC:; return;
label_B6BD:; return;
label_B6BE:; return;
label_B6BF:; return;
label_B6C1:; return;
label_B6C2:; return;
label_B6C3:; return;
label_B6C4:; return;
label_B6C5:; return;
label_B6C7:; return;
label_B6C8:; return;
label_B6C9:; return;
label_B6CA:; return;
label_B6CB:; return;
label_B6CC:; return;
label_B6CE:; return;
label_B6CF:; return;
label_B6D0:; return;
label_B6D1:; return;
label_B6D2:; return;
label_B6D3:; return;
label_B6D4:; return;
label_B6D5:; return;
label_B6D6:; return;
label_B6D7:; return;
label_B6D8:; return;
label_B6D9:; return;
label_B6DA:; return;
label_B6DB:; return;
label_B6DC:; return;
label_B6DD:; return;
label_B6DE:; return;
label_B6DF:; return;
label_B6E0:; return;
label_B6E1:; return;
label_B6E2:; return;
label_B6E3:; return;
label_B6E4:; return;
label_B6E5:; return;
label_B6E6:; return;
label_B6E7:; return;
label_B6E8:; return;
label_B6E9:; return;
label_B6EA:; return;
label_B6EB:; return;
label_B6EC:; return;
label_B6ED:; return;
label_B6EE:; return;
label_B6F0:; return;
label_B6F1:; return;
label_B6F2:; return;
label_B6F3:; return;
label_B6F4:; return;
label_B6F6:; return;
label_B6F7:; return;
label_B6F8:; return;
label_B6F9:; return;
label_B6FA:; return;
label_B6FB:; return;
label_B6FD:; return;
label_B6FE:; return;
label_B6FF:; return;
label_B700:; return;
label_B701:; return;
label_B702:; return;
label_B704:; return;
label_B705:; return;
label_B706:; return;
label_B707:; return;
label_B708:; return;
label_B70A:; return;
label_B70B:; return;
label_B70C:; return;
label_B70D:; return;
label_B70E:; return;
label_B70F:; return;
label_B710:; return;
label_B711:; return;
label_B713:; return;
label_B714:; return;
label_B715:; return;
label_B716:; return;
label_B717:; return;
label_B718:; return;
label_B719:; return;
label_B71A:; return;
label_B71C:; return;
label_B71E:; return;
label_B720:; return;
label_B722:; return;
label_B724:; return;
label_B726:; return;
label_B728:; return;
label_B72B:; return;
label_B72C:; return;
label_B72D:; return;
label_B72F:; return;
label_B731:; return;
label_B733:; return;
label_B736:; return;
label_B739:; return;
label_B73B:; return;
label_B73C:; return;
label_B73D:; return;
label_B73F:; return;
label_B740:; return;
label_B741:; return;
label_B743:; return;
label_B745:; return;
label_B747:; return;
label_B74A:; return;
label_B74C:; return;
label_B74D:; return;
label_B74F:; return;
label_B751:; return;
label_B753:; return;
label_B754:; return;
label_B755:; return;
label_B758:; return;
label_B759:; return;
label_B75A:; return;
label_B75B:; return;
label_B75C:; return;
label_B75F:; return;
label_B762:; return;
label_B765:; return;
label_B767:; return;
label_B768:; return;
label_B769:; return;
label_B76B:; return;
label_B76C:; return;
label_B76D:; return;
label_B76F:; return;
label_B771:; return;
label_B773:; return;
label_B775:; return;
label_B777:; return;
label_B77A:; return;
label_B77C:; return;
label_B77D:; return;
label_B77F:; return;
label_B781:; return;
label_B783:; return;
label_B785:; return;
label_B787:; return;
label_B78A:; return;
label_B78D:; return;
label_B790:; return;
label_B792:; return;
label_B794:; return;
label_B796:; return;
label_B798:; return;
label_B79B:; return;
label_B79C:; return;
label_B79D:; return;
label_B79F:; return;
label_B7A1:; return;
label_B7A3:; return;
label_B7A5:; return;
label_B7A6:; return;
label_B7A7:; return;
label_B7A9:; return;
label_B7AA:; return;
label_B7AC:; return;
label_B7AE:; return;
label_B7AF:; return;
label_B7B1:; return;
label_B7B3:; return;
label_B7B4:; return;
label_B7B5:; return;
label_B7B7:; return;
label_B7B9:; return;
label_B7BA:; return;
label_B7BD:; return;
label_B7BF:; return;
label_B7C2:; return;
label_B7C4:; return;
label_B7C5:; return;
label_B7C7:; return;
label_B7C9:; return;
label_B7CB:; return;
label_B7CE:; return;
label_B7CF:; return;
label_B7D1:; return;
label_B7D3:; return;
label_B7D5:; return;
label_B7D8:; return;
label_B7D9:; return;
label_B7DB:; return;
label_B7DE:; return;
label_B7E1:; return;
label_B7E4:; return;
label_B7E5:; return;
label_B7E7:; return;
label_B7E9:; return;
label_B7EB:; return;
label_B7ED:; return;
label_B7EF:; return;
label_B7F1:; return;
label_B7F3:; return;
label_B7F5:; return;
label_B7F7:; return;
label_B7F9:; return;
label_B7FB:; return;
label_B7FD:; return;
label_B7FE:; return;
label_B800:; return;
label_B802:; return;
label_B804:; return;
label_B806:; return;
label_B808:; return;
label_B80A:; return;
label_B80C:; return;
label_B80E:; return;
label_B810:; return;
label_B812:; return;
label_B814:; return;
label_B816:; return;
label_B818:; return;
label_B81A:; return;
label_B81C:; return;
label_B81E:; return;
label_B820:; return;
label_B822:; return;
label_B824:; return;
label_B826:; return;
label_B829:; return;
label_B82A:; return;
label_B82D:; return;
label_B82F:; return;
label_B831:; return;
label_B833:; return;
label_B835:; return;
label_B837:; return;
label_B839:; return;
label_B83C:; return;
label_B83E:; return;
label_B83F:; return;
label_B841:; return;
label_B843:; return;
label_B844:; return;
label_B847:; return;
label_B84A:; return;
label_B84B:; return;
label_B84E:; return;
label_B84F:; return;
label_B852:; return;
label_B854:; return;
label_B856:; return;
label_B858:; return;
label_B85A:; return;
label_B85B:; return;
label_B85E:; return;
label_B85F:; return;
label_B861:; return;
label_B863:; return;
label_B865:; return;
label_B866:; return;
label_B868:; return;
label_B86A:; return;
label_B86C:; return;
label_B86E:; return;
label_B870:; return;
label_B871:; return;
label_B873:; return;
label_B875:; return;
label_B877:; return;
label_B879:; return;
label_B87B:; return;
label_B87D:; return;
label_B87E:; return;
label_B881:; return;
label_B884:; return;
label_B887:; return;
label_B889:; return;
label_B88C:; return;
label_B88D:; return;
label_B88E:; return;
label_B890:; return;
label_B892:; return;
label_B893:; return;
label_B896:; return;
label_B897:; return;
label_B898:; return;
label_B899:; return;
label_B89C:; return;
label_B89D:; return;
label_B89F:; return;
label_B8A1:; return;
label_B8A3:; return;
label_B8A5:; return;
label_B8A7:; return;
label_B8A9:; return;
label_B8AB:; return;
label_B8AD:; return;
label_B8AF:; return;
label_B8B0:; return;
label_B8B1:; return;
label_B8B4:; return;
label_B8B7:; return;
label_B8BA:; return;
label_B8BD:; return;
label_B8C0:; return;
label_B8C3:; return;
label_B8C4:; return;
label_B8C7:; return;
label_B8CA:; return;
label_B8CD:; return;
label_B8D0:; return;
label_B8D3:; return;
label_B8D5:; return;
label_B8D7:; return;
label_B8DA:; return;
label_B8DD:; return;
label_B8E0:; return;
label_B8E1:; return;
label_B8E3:; return;
label_B8E6:; return;
label_B8E8:; return;
}

void func_AD7D_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD7D_b0");
#endif
label_AD7D:;
    /* $AD7D: 3C */ nes_instruction_boundary(0xAD7D, 4); (void)nes_read((0x463F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD80:;
    /* $AD80: 4C */ nes_instruction_boundary(0xAD80, 3); nes_cpu_instruction_boundary(0x4C46, 2); call_by_address_tail(0x4C46, -1); return;
}

void func_BA23_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA23_b0");
#endif
label_BA23:;
    /* $BA23: 01 */ nes_instruction_boundary(0xBA23, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA25:;
    /* $BA25: 01 */ nes_instruction_boundary(0xBA25, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA27:;
    /* $BA27: 01 */ nes_instruction_boundary(0xBA27, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA29:;
    /* $BA29: 01 */ nes_instruction_boundary(0xBA29, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA2B:;
    /* $BA2B: 01 */ nes_instruction_boundary(0xBA2B, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA2D:;
    /* $BA2D: 01 */ nes_instruction_boundary(0xBA2D, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA2F:;
    /* $BA2F: 01 */ nes_instruction_boundary(0xBA2F, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA31:;
    /* $BA31: 01 */ nes_instruction_boundary(0xBA31, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA33:;
    /* $BA33: 01 */ nes_instruction_boundary(0xBA33, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA35:;
    /* $BA35: 01 */ nes_instruction_boundary(0xBA35, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA37:;
    /* $BA37: 01 */ nes_instruction_boundary(0xBA37, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA39:;
    /* $BA39: 01 */ nes_instruction_boundary(0xBA39, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA3B:;
    /* $BA3B: 01 */ nes_instruction_boundary(0xBA3B, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA3D:;
    /* $BA3D: 01 */ nes_instruction_boundary(0xBA3D, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA3F:;
    /* $BA3F: 01 */ nes_instruction_boundary(0xBA3F, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA41:;
    /* $BA41: 02 */ nes_instruction_boundary(0xBA41, 2); /* ILLEGAL $02 — skip 1 */
label_BA42:;
    /* $BA42: 02 */ nes_instruction_boundary(0xBA42, 2); /* ILLEGAL $02 — skip 1 */
label_BA43:;
    /* $BA43: 02 */ nes_instruction_boundary(0xBA43, 2); /* ILLEGAL $02 — skip 1 */
label_BA44:;
    /* $BA44: 02 */ nes_instruction_boundary(0xBA44, 2); /* ILLEGAL $02 — skip 1 */
label_BA45:;
    /* $BA45: 01 */ nes_instruction_boundary(0xBA45, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA47:;
    /* $BA47: 01 */ nes_instruction_boundary(0xBA47, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA49:;
    /* $BA49: 01 */ nes_instruction_boundary(0xBA49, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA4B:;
    /* $BA4B: 01 */ nes_instruction_boundary(0xBA4B, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA4D:;
    /* $BA4D: 01 */ nes_instruction_boundary(0xBA4D, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA4F:;
    /* $BA4F: 01 */ nes_instruction_boundary(0xBA4F, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA51:;
    /* $BA51: 01 */ nes_instruction_boundary(0xBA51, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA53:;
    /* $BA53: 01 */ nes_instruction_boundary(0xBA53, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA55:;
    /* $BA55: 01 */ nes_instruction_boundary(0xBA55, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA57:;
    /* $BA57: 01 */ nes_instruction_boundary(0xBA57, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA59:;
    /* $BA59: 01 */ nes_instruction_boundary(0xBA59, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA5B:;
    /* $BA5B: 01 */ nes_instruction_boundary(0xBA5B, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA5D:;
    /* $BA5D: 01 */ nes_instruction_boundary(0xBA5D, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA5F:;
    /* $BA5F: 01 */ nes_instruction_boundary(0xBA5F, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA61:;
    /* $BA61: 01 */ nes_instruction_boundary(0xBA61, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA63:;
    /* $BA63: 01 */ nes_instruction_boundary(0xBA63, 6); g_cpu.A |= nes_read(nes_read16zp((0x26 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA65:;
    /* $BA65: 15 */ nes_instruction_boundary(0xBA65, 4); g_cpu.A |= nes_read((0x05 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BA67:;
    /* $BA67: 00 */ nes_instruction_boundary(0xBA67, 7); nes_brk_executed(0xBA67); return;
}

void func_BC95_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC95_b0");
#endif
label_BC95:;
    /* $BC95: 3A */ nes_instruction_boundary(0xBC95, 2); /* NOP */
label_BC96:;
    /* $BC96: 3D */ nes_instruction_boundary(0xBC96, 4); g_cpu.A &= nes_read((0x4541 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC99:;
    /* $BC99: 48 */ nes_instruction_boundary(0xBC99, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BC9A:;
    /* $BC9A: 48 */ nes_instruction_boundary(0xBC9A, 3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BC9B:;
    /* $BC9B: 05 */ nes_instruction_boundary(0xBC9B, 3); g_cpu.A |= nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_BC9D:;
    /* $BC9D: 06 */ nes_instruction_boundary(0xBC9D, 5); { uint16_t a=0x18; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC9F:;
    /* $BC9F: 1D */ nes_instruction_boundary(0xBC9F, 4); g_cpu.A |= nes_read((0x0622 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCA2:;
    /* $BCA2: 2C */ nes_instruction_boundary(0xBCA2, 4); { uint8_t m=nes_read(0x0632); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCA5:;
    /* $BCA5: 18 */ nes_instruction_boundary(0xBCA5, 2); g_cpu.C = 0;
label_BCA6:;
    /* $BCA6: 1D */ nes_instruction_boundary(0xBCA6, 4); g_cpu.A |= nes_read((0x0622 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCA9:;
    /* $BCA9: 49 */ nes_instruction_boundary(0xBCA9, 2); g_cpu.A ^= 0x4C; FLAG_NZ(g_cpu.A);
label_BCAB:;
    /* $BCAB: 06 */ nes_instruction_boundary(0xBCAB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCAD:;
    /* $BCAD: 06 */ nes_instruction_boundary(0xBCAD, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCAF:;
    /* $BCAF: 06 */ nes_instruction_boundary(0xBCAF, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCB1:;
    /* $BCB1: 06 */ nes_instruction_boundary(0xBCB1, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCB3:;
    /* $BCB3: 06 */ nes_instruction_boundary(0xBCB3, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCB5:;
    /* $BCB5: 06 */ nes_instruction_boundary(0xBCB5, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCB7:;
    /* $BCB7: 06 */ nes_instruction_boundary(0xBCB7, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCB9:;
    /* $BCB9: 06 */ nes_instruction_boundary(0xBCB9, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCBB:;
    /* $BCBB: 06 */ nes_instruction_boundary(0xBCBB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCBD:;
    /* $BCBD: 06 */ nes_instruction_boundary(0xBCBD, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCBF:;
    /* $BCBF: 06 */ nes_instruction_boundary(0xBCBF, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC1:;
    /* $BCC1: 06 */ nes_instruction_boundary(0xBCC1, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC3:;
    /* $BCC3: 06 */ nes_instruction_boundary(0xBCC3, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC5:;
    /* $BCC5: 06 */ nes_instruction_boundary(0xBCC5, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC7:;
    /* $BCC7: 06 */ nes_instruction_boundary(0xBCC7, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC9:;
    /* $BCC9: 06 */ nes_instruction_boundary(0xBCC9, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCCB:;
    /* $BCCB: 06 */ nes_instruction_boundary(0xBCCB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCCD:;
    /* $BCCD: 06 */ nes_instruction_boundary(0xBCCD, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCCF:;
    /* $BCCF: 06 */ nes_instruction_boundary(0xBCCF, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD1:;
    /* $BCD1: 06 */ nes_instruction_boundary(0xBCD1, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD3:;
    /* $BCD3: 06 */ nes_instruction_boundary(0xBCD3, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD5:;
    /* $BCD5: 06 */ nes_instruction_boundary(0xBCD5, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD7:;
    /* $BCD7: 06 */ nes_instruction_boundary(0xBCD7, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD9:;
    /* $BCD9: 06 */ nes_instruction_boundary(0xBCD9, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCDB:;
    /* $BCDB: 06 */ nes_instruction_boundary(0xBCDB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCDD:;
    /* $BCDD: 06 */ nes_instruction_boundary(0xBCDD, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCDF:;
    /* $BCDF: 06 */ nes_instruction_boundary(0xBCDF, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE1:;
    /* $BCE1: 06 */ nes_instruction_boundary(0xBCE1, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE3:;
    /* $BCE3: 06 */ nes_instruction_boundary(0xBCE3, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE5:;
    /* $BCE5: 06 */ nes_instruction_boundary(0xBCE5, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE7:;
    /* $BCE7: 06 */ nes_instruction_boundary(0xBCE7, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE9:;
    /* $BCE9: 06 */ nes_instruction_boundary(0xBCE9, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCEB:;
    /* $BCEB: 06 */ nes_instruction_boundary(0xBCEB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCED:;
    /* $BCED: 06 */ nes_instruction_boundary(0xBCED, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCEF:;
    /* $BCEF: 06 */ nes_instruction_boundary(0xBCEF, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF1:;
    /* $BCF1: 06 */ nes_instruction_boundary(0xBCF1, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF3:;
    /* $BCF3: 06 */ nes_instruction_boundary(0xBCF3, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF5:;
    /* $BCF5: 06 */ nes_instruction_boundary(0xBCF5, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF7:;
    /* $BCF7: 06 */ nes_instruction_boundary(0xBCF7, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF9:;
    /* $BCF9: 06 */ nes_instruction_boundary(0xBCF9, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCFB:;
    /* $BCFB: 06 */ nes_instruction_boundary(0xBCFB, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCFD:;
    /* $BCFD: 06 */ nes_instruction_boundary(0xBCFD, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCFF:;
    /* $BCFF: 06 */ nes_instruction_boundary(0xBCFF, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD01:;
    /* $BD01: 06 */ nes_instruction_boundary(0xBD01, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD03:;
    /* $BD03: 06 */ nes_instruction_boundary(0xBD03, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD05:;
    /* $BD05: 06 */ nes_instruction_boundary(0xBD05, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD07:;
    /* $BD07: 06 */ nes_instruction_boundary(0xBD07, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD09:;
    /* $BD09: 06 */ nes_instruction_boundary(0xBD09, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD0B:;
    /* $BD0B: 06 */ nes_instruction_boundary(0xBD0B, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD0D:;
    /* $BD0D: 06 */ nes_instruction_boundary(0xBD0D, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD0F:;
    /* $BD0F: 06 */ nes_instruction_boundary(0xBD0F, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD11:;
    /* $BD11: 06 */ nes_instruction_boundary(0xBD11, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD13:;
    /* $BD13: 06 */ nes_instruction_boundary(0xBD13, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD15:;
    /* $BD15: 06 */ nes_instruction_boundary(0xBD15, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD17:;
    /* $BD17: 06 */ nes_instruction_boundary(0xBD17, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD19:;
    /* $BD19: 06 */ nes_instruction_boundary(0xBD19, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1B:;
    /* $BD1B: 06 */ nes_instruction_boundary(0xBD1B, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1D:;
    /* $BD1D: 06 */ nes_instruction_boundary(0xBD1D, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1F:;
    /* $BD1F: 06 */ nes_instruction_boundary(0xBD1F, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD21:;
    /* $BD21: 06 */ nes_instruction_boundary(0xBD21, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD23:;
    /* $BD23: 06 */ nes_instruction_boundary(0xBD23, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD25:;
    /* $BD25: 06 */ nes_instruction_boundary(0xBD25, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD27:;
    /* $BD27: 06 */ nes_instruction_boundary(0xBD27, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD29:;
    /* $BD29: 06 */ nes_instruction_boundary(0xBD29, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD2B:;
    /* $BD2B: 06 */ nes_instruction_boundary(0xBD2B, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD2D:;
    /* $BD2D: 06 */ nes_instruction_boundary(0xBD2D, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD2F:;
    /* $BD2F: 06 */ nes_instruction_boundary(0xBD2F, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD31:;
    /* $BD31: 06 */ nes_instruction_boundary(0xBD31, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD33:;
    /* $BD33: 06 */ nes_instruction_boundary(0xBD33, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD35:;
    /* $BD35: 06 */ nes_instruction_boundary(0xBD35, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD37:;
    /* $BD37: 06 */ nes_instruction_boundary(0xBD37, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD39:;
    /* $BD39: 06 */ nes_instruction_boundary(0xBD39, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD3B:;
    /* $BD3B: 01 */ nes_instruction_boundary(0xBD3B, 6); g_cpu.A |= nes_read(nes_read16zp((0x0C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BD3D:;
    /* $BD3D: 02 */ nes_instruction_boundary(0xBD3D, 2); /* ILLEGAL $02 — skip 1 */
label_BD3E:;
    /* $BD3E: 0D */ nes_instruction_boundary(0xBD3E, 4); g_cpu.A |= nes_read(0x0E03); FLAG_NZ(g_cpu.A);
label_BD41:;
    /* $BD41: 04 */ nes_instruction_boundary(0xBD41, 3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD43:;
    /* $BD43: 05 */ nes_instruction_boundary(0xBD43, 3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_BD45:;
    /* $BD45: 06 */ nes_instruction_boundary(0xBD45, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD47:;
    /* $BD47: 07 */ nes_instruction_boundary(0xBD47, 5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BD49:;
    /* $BD49: 08 */ nes_instruction_boundary(0xBD49, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BD4A:;
    /* $BD4A: 10 */ nes_instruction_boundary(0xBD4A, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BD54; }
label_BD4C:;
    /* $BD4C: 11 */ nes_instruction_boundary(0xBD4C, 5); g_cpu.A |= nes_read((nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD4E:;
    /* $BD4E: 12 */ nes_instruction_boundary(0xBD4E, 2); /* ILLEGAL $12 — skip 1 */
label_BD4F:;
    /* $BD4F: 0A */ nes_instruction_boundary(0xBD4F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BD50:;
    /* $BD50: 0A */ nes_instruction_boundary(0xBD50, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BD51:;
    /* $BD51: 0B */ nes_instruction_boundary(0xBD51, 2); g_cpu.A &= 0x13; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_BD53:;
    /* $BD53: 00 */ nes_instruction_boundary(0xBD53, 7); nes_brk_executed(0xBD53); return;
label_BD54:;
    /* $BD54: 00 */ nes_instruction_boundary(0xBD54, 7); nes_brk_executed(0xBD54); return;
}

void func_BCBA_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCBA_b0");
#endif
label_BCBA:;
    /* $BCBA: 06 */ nes_instruction_boundary(0xBCBA, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCBC:;
    /* $BCBC: 06 */ nes_instruction_boundary(0xBCBC, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCBE:;
    /* $BCBE: 06 */ nes_instruction_boundary(0xBCBE, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC0:;
    /* $BCC0: 06 */ nes_instruction_boundary(0xBCC0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC2:;
    /* $BCC2: 06 */ nes_instruction_boundary(0xBCC2, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC4:;
    /* $BCC4: 06 */ nes_instruction_boundary(0xBCC4, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC6:;
    /* $BCC6: 06 */ nes_instruction_boundary(0xBCC6, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCC8:;
    /* $BCC8: 06 */ nes_instruction_boundary(0xBCC8, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCCA:;
    /* $BCCA: 06 */ nes_instruction_boundary(0xBCCA, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCCC:;
    /* $BCCC: 06 */ nes_instruction_boundary(0xBCCC, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCCE:;
    /* $BCCE: 06 */ nes_instruction_boundary(0xBCCE, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD0:;
    /* $BCD0: 06 */ nes_instruction_boundary(0xBCD0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD2:;
    /* $BCD2: 06 */ nes_instruction_boundary(0xBCD2, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD4:;
    /* $BCD4: 06 */ nes_instruction_boundary(0xBCD4, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD6:;
    /* $BCD6: 06 */ nes_instruction_boundary(0xBCD6, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD8:;
    /* $BCD8: 06 */ nes_instruction_boundary(0xBCD8, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCDA:;
    /* $BCDA: 06 */ nes_instruction_boundary(0xBCDA, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCDC:;
    /* $BCDC: 06 */ nes_instruction_boundary(0xBCDC, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCDE:;
    /* $BCDE: 06 */ nes_instruction_boundary(0xBCDE, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE0:;
    /* $BCE0: 06 */ nes_instruction_boundary(0xBCE0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE2:;
    /* $BCE2: 06 */ nes_instruction_boundary(0xBCE2, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE4:;
    /* $BCE4: 06 */ nes_instruction_boundary(0xBCE4, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE6:;
    /* $BCE6: 06 */ nes_instruction_boundary(0xBCE6, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE8:;
    /* $BCE8: 06 */ nes_instruction_boundary(0xBCE8, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCEA:;
    /* $BCEA: 06 */ nes_instruction_boundary(0xBCEA, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCEC:;
    /* $BCEC: 06 */ nes_instruction_boundary(0xBCEC, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCEE:;
    /* $BCEE: 06 */ nes_instruction_boundary(0xBCEE, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF0:;
    /* $BCF0: 06 */ nes_instruction_boundary(0xBCF0, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF2:;
    /* $BCF2: 06 */ nes_instruction_boundary(0xBCF2, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF4:;
    /* $BCF4: 06 */ nes_instruction_boundary(0xBCF4, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF6:;
    /* $BCF6: 06 */ nes_instruction_boundary(0xBCF6, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCF8:;
    /* $BCF8: 06 */ nes_instruction_boundary(0xBCF8, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCFA:;
    /* $BCFA: 06 */ nes_instruction_boundary(0xBCFA, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCFC:;
    /* $BCFC: 06 */ nes_instruction_boundary(0xBCFC, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCFE:;
    /* $BCFE: 06 */ nes_instruction_boundary(0xBCFE, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD00:;
    /* $BD00: 06 */ nes_instruction_boundary(0xBD00, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD02:;
    /* $BD02: 06 */ nes_instruction_boundary(0xBD02, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD04:;
    /* $BD04: 06 */ nes_instruction_boundary(0xBD04, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD06:;
    /* $BD06: 06 */ nes_instruction_boundary(0xBD06, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD08:;
    /* $BD08: 06 */ nes_instruction_boundary(0xBD08, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD0A:;
    /* $BD0A: 06 */ nes_instruction_boundary(0xBD0A, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD0C:;
    /* $BD0C: 06 */ nes_instruction_boundary(0xBD0C, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD0E:;
    /* $BD0E: 06 */ nes_instruction_boundary(0xBD0E, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD10:;
    /* $BD10: 06 */ nes_instruction_boundary(0xBD10, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD12:;
    /* $BD12: 06 */ nes_instruction_boundary(0xBD12, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD14:;
    /* $BD14: 06 */ nes_instruction_boundary(0xBD14, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD16:;
    /* $BD16: 06 */ nes_instruction_boundary(0xBD16, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD18:;
    /* $BD18: 06 */ nes_instruction_boundary(0xBD18, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1A:;
    /* $BD1A: 06 */ nes_instruction_boundary(0xBD1A, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1C:;
    /* $BD1C: 06 */ nes_instruction_boundary(0xBD1C, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1E:;
    /* $BD1E: 06 */ nes_instruction_boundary(0xBD1E, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD20:;
    /* $BD20: 06 */ nes_instruction_boundary(0xBD20, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD22:;
    /* $BD22: 06 */ nes_instruction_boundary(0xBD22, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD24:;
    /* $BD24: 06 */ nes_instruction_boundary(0xBD24, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD26:;
    /* $BD26: 06 */ nes_instruction_boundary(0xBD26, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD28:;
    /* $BD28: 06 */ nes_instruction_boundary(0xBD28, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD2A:;
    /* $BD2A: 06 */ nes_instruction_boundary(0xBD2A, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD2C:;
    /* $BD2C: 06 */ nes_instruction_boundary(0xBD2C, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD2E:;
    /* $BD2E: 06 */ nes_instruction_boundary(0xBD2E, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD30:;
    /* $BD30: 06 */ nes_instruction_boundary(0xBD30, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD32:;
    /* $BD32: 06 */ nes_instruction_boundary(0xBD32, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD34:;
    /* $BD34: 06 */ nes_instruction_boundary(0xBD34, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD36:;
    /* $BD36: 06 */ nes_instruction_boundary(0xBD36, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD38:;
    /* $BD38: 06 */ nes_instruction_boundary(0xBD38, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD3A:;
    /* $BD3A: 06 */ nes_instruction_boundary(0xBD3A, 5); { uint16_t a=0x01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD3C:;
    /* $BD3C: 0C */ nes_instruction_boundary(0xBD3C, 4); (void)nes_read(0x0D02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD3F:;
    /* $BD3F: 03 */ nes_instruction_boundary(0xBD3F, 8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BD41:;
    /* $BD41: 04 */ nes_instruction_boundary(0xBD41, 3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD43:;
    /* $BD43: 05 */ nes_instruction_boundary(0xBD43, 3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_BD45:;
    /* $BD45: 06 */ nes_instruction_boundary(0xBD45, 5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD47:;
    /* $BD47: 07 */ nes_instruction_boundary(0xBD47, 5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BD49:;
    /* $BD49: 08 */ nes_instruction_boundary(0xBD49, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BD4A:;
    /* $BD4A: 10 */ nes_instruction_boundary(0xBD4A, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BD54; }
label_BD4C:;
    /* $BD4C: 11 */ nes_instruction_boundary(0xBD4C, 5); g_cpu.A |= nes_read((nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD4E:;
    /* $BD4E: 12 */ nes_instruction_boundary(0xBD4E, 2); /* ILLEGAL $12 — skip 1 */
label_BD4F:;
    /* $BD4F: 0A */ nes_instruction_boundary(0xBD4F, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BD50:;
    /* $BD50: 0A */ nes_instruction_boundary(0xBD50, 2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BD51:;
    /* $BD51: 0B */ nes_instruction_boundary(0xBD51, 2); g_cpu.A &= 0x13; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_BD53:;
    /* $BD53: 00 */ nes_instruction_boundary(0xBD53, 7); nes_brk_executed(0xBD53); return;
label_BD54:;
    /* $BD54: 00 */ nes_instruction_boundary(0xBD54, 7); nes_brk_executed(0xBD54); return;
}

void func_BDF7_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDF7_b0");
#endif
label_BDF7:;
    /* $BDF7: 81 */ nes_instruction_boundary(0xBDF7, 6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_BDF9:;
    /* $BDF9: 82 */ nes_instruction_boundary(0xBDF9, 2); /* NOP */
label_BDFB:;
    /* $BDFB: 83 */ nes_instruction_boundary(0xBDFB, 6); nes_write(nes_read16zp((0x8F + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BDFD:;
    /* $BDFD: 84 */ nes_instruction_boundary(0xBDFD, 3); nes_write(0x90, g_cpu.Y);
label_BDFF:;
    /* $BDFF: 85 */ nes_instruction_boundary(0xBDFF, 3); nes_write(0x00, g_cpu.A);
label_BE01:;
    /* $BE01: 86 */ nes_instruction_boundary(0xBE01, 3); nes_write(0x00, g_cpu.X);
label_BE03:;
    /* $BE03: 87 */ nes_instruction_boundary(0xBE03, 3); nes_write(0x00, g_cpu.A & g_cpu.X); /* SAX */
label_BE05:;
    /* $BE05: 88 */ nes_instruction_boundary(0xBE05, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BE06:;
    /* $BE06: 00 */ nes_instruction_boundary(0xBE06, 7); nes_brk_executed(0xBE06); return;
}

void func_B9F0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F0_b0");
#endif
label_B9F0:;
    /* $B9F0: 01 */ nes_instruction_boundary(0xB9F0, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9F2:;
    /* $B9F2: 01 */ nes_instruction_boundary(0xB9F2, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9F4:;
    /* $B9F4: 01 */ nes_instruction_boundary(0xB9F4, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9F6:;
    /* $B9F6: 01 */ nes_instruction_boundary(0xB9F6, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9F8:;
    /* $B9F8: 01 */ nes_instruction_boundary(0xB9F8, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9FA:;
    /* $B9FA: 01 */ nes_instruction_boundary(0xB9FA, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9FC:;
    /* $B9FC: 01 */ nes_instruction_boundary(0xB9FC, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9FE:;
    /* $B9FE: 01 */ nes_instruction_boundary(0xB9FE, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA00:;
    /* $BA00: 01 */ nes_instruction_boundary(0xBA00, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA02:;
    /* $BA02: 01 */ nes_instruction_boundary(0xBA02, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA04:;
    /* $BA04: 01 */ nes_instruction_boundary(0xBA04, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA06:;
    /* $BA06: 01 */ nes_instruction_boundary(0xBA06, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA08:;
    /* $BA08: 01 */ nes_instruction_boundary(0xBA08, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA0A:;
    /* $BA0A: 01 */ nes_instruction_boundary(0xBA0A, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA0C:;
    /* $BA0C: 00 */ nes_instruction_boundary(0xBA0C, 7); nes_brk_executed(0xBA0C); return;
}

void func_8DF2_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DF2_b0");
#endif
label_8DF2:;
    /* $8DF2: 46 */ nes_instruction_boundary(0x8DF2, 5); { uint16_t a=0x66; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8DF4:;
    /* $8DF4: 20 */ nes_instruction_boundary(0x8DF4, 6); nes_dispatch_call(0x2020, -1);
label_8DF7:;
    /* $8DF7: 20 */ nes_instruction_boundary(0x8DF7, 6); nes_dispatch_call(0x2020, -1);
label_8DFA:;
    /* $8DFA: 21 */ nes_instruction_boundary(0x8DFA, 6); g_cpu.A &= nes_read(nes_read16zp((0x21 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DFC:;
    /* $8DFC: 21 */ nes_instruction_boundary(0x8DFC, 6); g_cpu.A &= nes_read(nes_read16zp((0x21 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DFE:;
    /* $8DFE: 06 */ nes_instruction_boundary(0x8DFE, 5); { uint16_t a=0xCE; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E00:;
    /* $8E00: 96 */ nes_instruction_boundary(0x8E00, 4); nes_write((0x5E + g_cpu.Y) & 0xFF, g_cpu.X);
label_8E02:;
    /* $8E02: AE */ nes_instruction_boundary(0x8E02, 4); g_cpu.X = nes_read(0xAFAE); FLAG_NZ(g_cpu.X);
label_8E05:;
    /* $8E05: B0 */ nes_instruction_boundary(0x8E05, 2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8E07; }
label_8E07:;
    /* $8E07: 00 */ nes_instruction_boundary(0x8E07, 7); nes_brk_executed(0x8E07); return;
}

void func_8C9B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C9B_b0");
#endif
label_8C9B:;
    /* $8C9B: 08 */ nes_instruction_boundary(0x8C9B, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8C9C:;
    /* $8C9C: 14 */ nes_instruction_boundary(0x8C9C, 4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8C9E:;
    /* $8C9E: 01 */ nes_instruction_boundary(0x8C9E, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CA0:;
    /* $8CA0: 01 */ nes_instruction_boundary(0x8CA0, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CA2:;
    /* $8CA2: 01 */ nes_instruction_boundary(0x8CA2, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CA4:;
    /* $8CA4: 01 */ nes_instruction_boundary(0x8CA4, 6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CA6:;
    /* $8CA6: 01 */ nes_instruction_boundary(0x8CA6, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CA8:;
    /* $8CA8: 01 */ nes_instruction_boundary(0x8CA8, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CAA:;
    /* $8CAA: 01 */ nes_instruction_boundary(0x8CAA, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CAC:;
    /* $8CAC: 01 */ nes_instruction_boundary(0x8CAC, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CAE:;
    /* $8CAE: 01 */ nes_instruction_boundary(0x8CAE, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CB0:;
    /* $8CB0: 02 */ nes_instruction_boundary(0x8CB0, 2); /* ILLEGAL $02 — skip 1 */
label_8CB1:;
    /* $8CB1: 02 */ nes_instruction_boundary(0x8CB1, 2); /* ILLEGAL $02 — skip 1 */
label_8CB2:;
    /* $8CB2: 02 */ nes_instruction_boundary(0x8CB2, 2); /* ILLEGAL $02 — skip 1 */
label_8CB3:;
    /* $8CB3: 01 */ nes_instruction_boundary(0x8CB3, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CB5:;
    /* $8CB5: 02 */ nes_instruction_boundary(0x8CB5, 2); /* ILLEGAL $02 — skip 1 */
label_8CB6:;
    /* $8CB6: 02 */ nes_instruction_boundary(0x8CB6, 2); /* ILLEGAL $02 — skip 1 */
label_8CB7:;
    /* $8CB7: 02 */ nes_instruction_boundary(0x8CB7, 2); /* ILLEGAL $02 — skip 1 */
label_8CB8:;
    /* $8CB8: 01 */ nes_instruction_boundary(0x8CB8, 6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CBA:;
    /* $8CBA: 01 */ nes_instruction_boundary(0x8CBA, 6); g_cpu.A |= nes_read(nes_read16zp((0x27 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8CBC:;
    /* $8CBC: 17 */ nes_instruction_boundary(0x8CBC, 6); { uint16_t a=(0x07 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8CBE:;
    /* $8CBE: 2B */ nes_instruction_boundary(0x8CBE, 2); g_cpu.A &= 0x1B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8CC0:;
    /* $8CC0: 0B */ nes_instruction_boundary(0x8CC0, 2); g_cpu.A &= 0x1B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8CC2:;
    /* $8CC2: 17 */ nes_instruction_boundary(0x8CC2, 6); { uint16_t a=(0x0B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8CC4:;
    /* $8CC4: 00 */ nes_instruction_boundary(0x8CC4, 7); nes_brk_executed(0x8CC4); return;
}

