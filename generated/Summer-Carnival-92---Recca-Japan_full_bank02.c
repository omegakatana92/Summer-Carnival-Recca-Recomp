/* Summer-Carnival-92---Recca-Japan_full_bank02_part00.c — PRG bank 2 function bodies (sub-part 0).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella Summer-Carnival-92---Recca-Japan_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "Summer-Carnival-92---Recca-Japan_full_decls.h"

void func_93D0_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93D0_b2");
#endif
label_93D0:;
    /* $93D0: 81 */ nes_instruction_boundary(0x93D0, 6); nes_write(nes_read16zp((0x7B + g_cpu.X) & 0xFF), g_cpu.A);
label_93D2:;
    /* $93D2: 81 */ nes_instruction_boundary(0x93D2, 6); nes_write(nes_read16zp((0x82 + g_cpu.X) & 0xFF), g_cpu.A);
label_93D4:;
    /* $93D4: 82 */ nes_instruction_boundary(0x93D4, 2); /* NOP */
label_93D6:;
    /* $93D6: 88 */ nes_instruction_boundary(0x93D6, 2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_93D7:;
    /* $93D7: 84 */ nes_instruction_boundary(0x93D7, 3); nes_write(0x89, g_cpu.Y);
label_93D9:;
    /* $93D9: 85 */ nes_instruction_boundary(0x93D9, 3); nes_write(0x81, g_cpu.A);
label_93DB:;
    /* $93DB: 86 */ nes_instruction_boundary(0x93DB, 3); nes_write(0x8A, g_cpu.X);
label_93DD:;
    /* $93DD: 87 */ nes_instruction_boundary(0x93DD, 3); nes_write(0x7F, g_cpu.A & g_cpu.X); /* SAX */
label_93DF:;
    /* $93DF: 81 */ nes_instruction_boundary(0x93DF, 6); nes_write(nes_read16zp((0x80 + g_cpu.X) & 0xFF), g_cpu.A);
label_93E1:;
    /* $93E1: 81 */ nes_instruction_boundary(0x93E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_93E3:;
    /* $93E3: 81 */ nes_instruction_boundary(0x93E3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_93E5:;
    /* $93E5: 81 */ nes_instruction_boundary(0x93E5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_93E7:;
    /* $93E7: 82 */ nes_instruction_boundary(0x93E7, 2); /* NOP */
label_93E9:;
    /* $93E9: 8B */ nes_instruction_boundary(0x93E9, 2); /* ILLEGAL $8B — skip 2 */
label_93EB:;
    /* $93EB: 8C */ nes_instruction_boundary(0x93EB, 4); nes_write(0x8189, g_cpu.Y);
label_93EE:;
    /* $93EE: 81 */ nes_instruction_boundary(0x93EE, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_93F0:;
    /* $93F0: 81 */ nes_instruction_boundary(0x93F0, 6); nes_write(nes_read16zp((0x85 + g_cpu.X) & 0xFF), g_cpu.A);
label_93F2:;
    /* $93F2: 81 */ nes_instruction_boundary(0x93F2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_93F4:;
    /* $93F4: 81 */ nes_instruction_boundary(0x93F4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_93F6:;
    /* $93F6: 8D */ nes_instruction_boundary(0x93F6, 4); nes_write(0x908E, g_cpu.A);
label_93F9:;
    /* $93F9: 8F */ nes_instruction_boundary(0x93F9, 4); nes_write(0x7691, g_cpu.A & g_cpu.X); /* SAX */
label_93FC:;
    /* $93FC: 7D */ nes_instruction_boundary(0x93FC, 4); { uint8_t m=nes_read((0x9392 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_93FF:;
    /* $93FF: 82 */ nes_instruction_boundary(0x93FF, 2); /* NOP */
label_9401:;
    /* $9401: 94 */ nes_instruction_boundary(0x9401, 4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.Y);
label_9403:;
    /* $9403: 95 */ nes_instruction_boundary(0x9403, 4); nes_write((0x81 + g_cpu.X) & 0xFF, g_cpu.A);
label_9405:;
    /* $9405: 81 */ nes_instruction_boundary(0x9405, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9407:;
    /* $9407: 82 */ nes_instruction_boundary(0x9407, 2); /* NOP */
label_9409:;
    /* $9409: 96 */ nes_instruction_boundary(0x9409, 4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_940B:;
    /* $940B: 82 */ nes_instruction_boundary(0x940B, 2); /* NOP */
label_940D:;
    /* $940D: 8B */ nes_instruction_boundary(0x940D, 2); /* ILLEGAL $8B — skip 2 */
label_940F:;
    /* $940F: 8C */ nes_instruction_boundary(0x940F, 4); nes_write(0x8184, g_cpu.Y);
label_9412:;
    /* $9412: 8D */ nes_instruction_boundary(0x9412, 4); nes_write(0x9C99, g_cpu.A);
label_9415:;
    /* $9415: 9A */ nes_instruction_boundary(0x9415, 2); g_cpu.S = g_cpu.X;
label_9416:;
    /* $9416: 9D */ nes_instruction_boundary(0x9416, 5); nes_write((0x9C99 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9419:;
    /* $9419: 9B */ nes_instruction_boundary(0x9419, 5); /* ILLEGAL $9B — skip 3 */
label_941C:;
    /* $941C: 9F */ nes_instruction_boundary(0x941C, 5); /* ILLEGAL $9F — skip 3 */
label_941F:;
    /* $941F: 95 */ nes_instruction_boundary(0x941F, 4); nes_write((0xA0 + g_cpu.X) & 0xFF, g_cpu.A);
label_9421:;
    /* $9421: 81 */ nes_instruction_boundary(0x9421, 6); nes_write(nes_read16zp((0xA1 + g_cpu.X) & 0xFF), g_cpu.A);
label_9423:;
    /* $9423: 81 */ nes_instruction_boundary(0x9423, 6); nes_write(nes_read16zp((0xA2 + g_cpu.X) & 0xFF), g_cpu.A);
label_9425:;
    /* $9425: 81 */ nes_instruction_boundary(0x9425, 6); nes_write(nes_read16zp((0xA1 + g_cpu.X) & 0xFF), g_cpu.A);
label_9427:;
    /* $9427: A3 */ nes_instruction_boundary(0x9427, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9429:;
    /* $9429: A4 */ nes_instruction_boundary(0x9429, 3); g_cpu.Y = nes_read(0xA9); FLAG_NZ(g_cpu.Y);
label_942B:;
    /* $942B: A5 */ nes_instruction_boundary(0x942B, 3); g_cpu.A = nes_read(0xAA); FLAG_NZ(g_cpu.A);
label_942D:;
    /* $942D: A6 */ nes_instruction_boundary(0x942D, 3); g_cpu.X = nes_read(0xAA); FLAG_NZ(g_cpu.X);
label_942F:;
    /* $942F: A7 */ nes_instruction_boundary(0x942F, 3); g_cpu.A = g_cpu.X = nes_read(0xAA); FLAG_NZ(g_cpu.A);
label_9431:;
    /* $9431: A6 */ nes_instruction_boundary(0x9431, 3); g_cpu.X = nes_read(0xAA); FLAG_NZ(g_cpu.X);
label_9433:;
    /* $9433: 63 */ nes_instruction_boundary(0x9433, 8); { uint16_t a=nes_read16zp((0x69 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9435:;
    /* $9435: AB */ nes_instruction_boundary(0x9435, 2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_9437:;
    /* $9437: 78 */ nes_instruction_boundary(0x9437, 2); g_cpu.I = 1;
label_9438:;
    /* $9438: 79 */ nes_instruction_boundary(0x9438, 4); { uint8_t m=nes_read((0xAC79 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_943B:;
    /* $943B: 7A */ nes_instruction_boundary(0x943B, 2); /* NOP */
label_943C:;
    /* $943C: AD */ nes_instruction_boundary(0x943C, 4); g_cpu.A = nes_read(0x817B); FLAG_NZ(g_cpu.A);
label_943F:;
    /* $943F: 84 */ nes_instruction_boundary(0x943F, 3); nes_write(0x89, g_cpu.Y);
label_9441:;
    /* $9441: AE */ nes_instruction_boundary(0x9441, 4); g_cpu.X = nes_read(0xAF81); FLAG_NZ(g_cpu.X);
label_9444:;
    /* $9444: B1 */ nes_instruction_boundary(0x9444, 5); g_cpu.A = nes_read((nes_read16zp(0xB0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9446:;
    /* $9446: AC */ nes_instruction_boundary(0x9446, 4); g_cpu.Y = nes_read(0xAD81); FLAG_NZ(g_cpu.Y);
label_9449:;
    /* $9449: 81 */ nes_instruction_boundary(0x9449, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_944B:;
    /* $944B: 81 */ nes_instruction_boundary(0x944B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_944D:;
    /* $944D: AE */ nes_instruction_boundary(0x944D, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9450:;
    /* $9450: 81 */ nes_instruction_boundary(0x9450, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9452:;
    /* $9452: B2 */ nes_instruction_boundary(0x9452, 2); /* ILLEGAL $B2 — skip 1 */
label_9453:;
    /* $9453: B3 */ nes_instruction_boundary(0x9453, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9455:;
    /* $9455: B4 */ nes_instruction_boundary(0x9455, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9457:;
    /* $9457: B7 */ nes_instruction_boundary(0x9457, 4); g_cpu.A = g_cpu.X = nes_read((0x81 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_9459:;
    /* $9459: 81 */ nes_instruction_boundary(0x9459, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_945B:;
    /* $945B: 8C */ nes_instruction_boundary(0x945B, 4); nes_write(0x8184, g_cpu.Y);
label_945E:;
    /* $945E: B2 */ nes_instruction_boundary(0x945E, 2); /* ILLEGAL $B2 — skip 1 */
label_945F:;
    /* $945F: 79 */ nes_instruction_boundary(0x945F, 4); { uint8_t m=nes_read((0xB49F + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9462:;
    /* $9462: 79 */ nes_instruction_boundary(0x9462, 4); { uint8_t m=nes_read((0xA0B7 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9465:;
    /* $9465: 81 */ nes_instruction_boundary(0x9465, 6); nes_write(nes_read16zp((0xA1 + g_cpu.X) & 0xFF), g_cpu.A);
label_9467:;
    /* $9467: 59 */ nes_instruction_boundary(0x9467, 4); g_cpu.A ^= nes_read((0x5A5E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_946A:;
    /* $946A: 5F */ nes_instruction_boundary(0x946A, 7); { uint16_t a=(0x756D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_946D:;
    /* $946D: 6D */ nes_instruction_boundary(0x946D, 4); { uint8_t m=nes_read(0x65B8); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9470:;
    /* $9470: B9 */ nes_instruction_boundary(0x9470, 4); g_cpu.A = nes_read((0xBA66 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9473:;
    /* $9473: 7C */ nes_instruction_boundary(0x9473, 4); (void)nes_read((0x7A81 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9476:;
    /* $9476: 8D */ nes_instruction_boundary(0x9476, 4); nes_write(0x9079, g_cpu.A);
label_9479:;
    /* $9479: BB */ nes_instruction_boundary(0x9479, 4); /* ILLEGAL $BB — skip 3 */
label_947C:;
    /* $947C: BE */ nes_instruction_boundary(0x947C, 4); g_cpu.X = nes_read((0xBFBD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_947F:;
    /* $947F: 76 */ nes_instruction_boundary(0x947F, 6); { uint16_t a=(0xC0 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9481:;
    /* $9481: 92 */ nes_instruction_boundary(0x9481, 2); /* ILLEGAL $92 — skip 1 */
label_9482:;
    /* $9482: BF */ nes_instruction_boundary(0x9482, 4); g_cpu.A = g_cpu.X = nes_read((0x8195 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9485:;
    /* $9485: 84 */ nes_instruction_boundary(0x9485, 3); nes_write(0xC4, g_cpu.Y);
label_9487:;
    /* $9487: C1 */ nes_instruction_boundary(0x9487, 6); { uint8_t m=nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9489:;
    /* $9489: C2 */ nes_instruction_boundary(0x9489, 2); /* NOP */
label_948B:;
    /* $948B: C3 */ nes_instruction_boundary(0x948B, 8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_948D:;
    /* $948D: C2 */ nes_instruction_boundary(0x948D, 2); /* NOP */
label_948F:;
    /* $948F: 81 */ nes_instruction_boundary(0x948F, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9491:;
    /* $9491: C7 */ nes_instruction_boundary(0x9491, 5); { uint16_t a=0xC4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9493:;
    /* $9493: C8 */ nes_instruction_boundary(0x9493, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9494:;
    /* $9494: C5 */ nes_instruction_boundary(0x9494, 3); { uint8_t m=nes_read(0xC2); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9496:;
    /* $9496: C2 */ nes_instruction_boundary(0x9496, 2); /* NOP */
label_9498:;
    /* $9498: C9 */ nes_instruction_boundary(0x9498, 2); { int r=g_cpu.A-0xC2; g_cpu.C=(g_cpu.A>=0xC2)?1:0; FLAG_NZ(r&0xFF); }
label_949A:;
    /* $949A: C2 */ nes_instruction_boundary(0x949A, 2); /* NOP */
label_949C:;
    /* $949C: 9C */ nes_instruction_boundary(0x949C, 5); /* ILLEGAL $9C — skip 3 */
label_949F:;
    /* $949F: 81 */ nes_instruction_boundary(0x949F, 6); nes_write(nes_read16zp((0x80 + g_cpu.X) & 0xFF), g_cpu.A);
label_94A1:;
    /* $94A1: C7 */ nes_instruction_boundary(0x94A1, 5); { uint16_t a=0x84; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_94A3:;
    /* $94A3: C8 */ nes_instruction_boundary(0x94A3, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_94A4:;
    /* $94A4: CC */ nes_instruction_boundary(0x94A4, 4); { uint8_t m=nes_read(0xC2C2); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_94A7:;
    /* $94A7: 81 */ nes_instruction_boundary(0x94A7, 6); nes_write(nes_read16zp((0xA2 + g_cpu.X) & 0xFF), g_cpu.A);
label_94A9:;
    /* $94A9: 85 */ nes_instruction_boundary(0x94A9, 3); nes_write(0xA0, g_cpu.A);
label_94AB:;
    /* $94AB: 86 */ nes_instruction_boundary(0x94AB, 3); nes_write(0x79, g_cpu.X);
label_94AD:;
    /* $94AD: 79 */ nes_instruction_boundary(0x94AD, 4); { uint8_t m=nes_read((0xCDCE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_94B0:;
    /* $94B0: CF */ nes_instruction_boundary(0x94B0, 6); { uint16_t a=0xD0CB; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_94B3:;
    /* $94B3: A7 */ nes_instruction_boundary(0x94B3, 3); g_cpu.A = g_cpu.X = nes_read(0xAA); FLAG_NZ(g_cpu.A);
label_94B5:;
    /* $94B5: D1 */ nes_instruction_boundary(0x94B5, 5); { uint8_t m=nes_read((nes_read16zp(0xAA) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_94B7:;
    /* $94B7: D2 */ nes_instruction_boundary(0x94B7, 2); /* ILLEGAL $D2 — skip 1 */
label_94B8:;
    /* $94B8: D4 */ nes_instruction_boundary(0x94B8, 4); (void)nes_read((0xD3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_94BA:;
    /* $94BA: D5 */ nes_instruction_boundary(0x94BA, 4); { uint8_t m=nes_read((0xD6 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_94BC:;
    /* $94BC: AA */ nes_instruction_boundary(0x94BC, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_94BD:;
    /* $94BD: D7 */ nes_instruction_boundary(0x94BD, 6); { uint16_t a=(0xAA + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_94BF:;
    /* $94BF: D7 */ nes_instruction_boundary(0x94BF, 6); { uint16_t a=(0xAA + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_94C1:;
    /* $94C1: D8 */ nes_instruction_boundary(0x94C1, 2); g_cpu.D = 0;
label_94C2:;
    /* $94C2: AA */ nes_instruction_boundary(0x94C2, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_94C3:;
    /* $94C3: D9 */ nes_instruction_boundary(0x94C3, 4); { uint8_t m=nes_read((0x66D4 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_94C6:;
    /* $94C6: 6C */ nes_instruction_boundary(0x94C6, 5); { uint16_t _jt = nes_read16zp(0x01); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_AFF3_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFF3_b2");
#endif
label_AFF3:;
    /* $AFF3: 3E */ nes_instruction_boundary(0xAFF3, 7); { uint16_t a=(0x3628 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFF6:;
    /* $AFF6: 20 */ nes_instruction_boundary(0xAFF6, 6); nes_dispatch_call(0x2020, -1);
label_AFF9:;
    /* $AFF9: 20 */ nes_instruction_boundary(0xAFF9, 6); nes_dispatch_call(0x3E3D, -1);
label_AFFC:;
    /* $AFFC: 28 */ nes_instruction_boundary(0xAFFC, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AFFD:;
    /* $AFFD: 3E */ nes_instruction_boundary(0xAFFD, 7); { uint16_t a=(0x3E28 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B000:;
    /* $B000: 1E */ nes_instruction_boundary(0xB000, 7); { uint16_t a=(0x201F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B003:;
    /* $B003: 20 */ nes_instruction_boundary(0xB003, 6); nes_dispatch_call(0x2937, -1);
label_B006:;
    /* $B006: 22 */ nes_instruction_boundary(0xB006, 2); /* ILLEGAL $22 — skip 1 */
label_B007:;
    /* $B007: 29 */ nes_instruction_boundary(0xB007, 2); g_cpu.A &= 0x22; FLAG_NZ(g_cpu.A);
label_B009:;
    /* $B009: 29 */ nes_instruction_boundary(0xB009, 2); g_cpu.A &= 0x22; FLAG_NZ(g_cpu.A);
label_B00B:;
    /* $B00B: 30 */ nes_instruction_boundary(0xB00B, 2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x102D), 2); return; }
label_B00D:;
    /* $B00D: 20 */ nes_instruction_boundary(0xB00D, 6); nes_dispatch_call(0x1F1E, -1);
label_B010:;
    /* $B010: 19 */ nes_instruction_boundary(0xB010, 4); g_cpu.A |= nes_read((0x201B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B013:;
    /* $B013: 20 */ nes_instruction_boundary(0xB013, 6); nes_dispatch_call(0x2A38, -1);
label_B016:;
    /* $B016: 23 */ nes_instruction_boundary(0xB016, 8); { uint16_t a=nes_read16zp((0x2A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B018:;
    /* $B018: 23 */ nes_instruction_boundary(0xB018, 8); { uint16_t a=nes_read16zp((0x2A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B01A:;
    /* $B01A: 23 */ nes_instruction_boundary(0xB01A, 8); { uint16_t a=nes_read16zp((0x31 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B01C:;
    /* $B01C: 20 */ nes_instruction_boundary(0xB01C, 6); nes_dispatch_call(0x1920, -1);
label_B01F:;
    /* $B01F: 1B */ nes_instruction_boundary(0xB01F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B022:;
    /* $B022: 20 */ nes_instruction_boundary(0xB022, 6); nes_dispatch_call(0x3920, -1);
label_B025:;
    /* $B025: 2B */ nes_instruction_boundary(0xB025, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B027:;
    /* $B027: 2B */ nes_instruction_boundary(0xB027, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B029:;
    /* $B029: 2B */ nes_instruction_boundary(0xB029, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B02B:;
    /* $B02B: 32 */ nes_instruction_boundary(0xB02B, 2); /* ILLEGAL $32 — skip 1 */
label_B02C:;
    /* $B02C: 20 */ nes_instruction_boundary(0xB02C, 6); nes_dispatch_call(0x1820, -1);
label_B02F:;
    /* $B02F: 1A */ nes_instruction_boundary(0xB02F, 2); /* NOP */
label_B030:;
    /* $B030: 19 */ nes_instruction_boundary(0xB030, 4); g_cpu.A |= nes_read((0x201B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B033:;
    /* $B033: 20 */ nes_instruction_boundary(0xB033, 6); nes_dispatch_call(0x2C3A, -1);
label_B036:;
    /* $B036: 25 */ nes_instruction_boundary(0xB036, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B038:;
    /* $B038: 25 */ nes_instruction_boundary(0xB038, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B03A:;
    /* $B03A: 25 */ nes_instruction_boundary(0xB03A, 3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_B03C:;
    /* $B03C: 20 */ nes_instruction_boundary(0xB03C, 6); nes_dispatch_call(0x1920, -1);
label_B03F:;
    /* $B03F: 1B */ nes_instruction_boundary(0xB03F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B042:;
    /* $B042: 21 */ nes_instruction_boundary(0xB042, 6); g_cpu.A &= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B044:;
    /* $B044: 39 */ nes_instruction_boundary(0xB044, 4); g_cpu.A &= nes_read((0x242B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B047:;
    /* $B047: 2B */ nes_instruction_boundary(0xB047, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B049:;
    /* $B049: 2B */ nes_instruction_boundary(0xB049, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B04B:;
    /* $B04B: 32 */ nes_instruction_boundary(0xB04B, 2); /* ILLEGAL $32 — skip 1 */
label_B04C:;
    /* $B04C: 1E */ nes_instruction_boundary(0xB04C, 7); { uint16_t a=(0x181F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B04F:;
    /* $B04F: 1A */ nes_instruction_boundary(0xB04F, 2); /* NOP */
label_B050:;
    /* $B050: 19 */ nes_instruction_boundary(0xB050, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B053:;
    /* $B053: 1B */ nes_instruction_boundary(0xB053, 7); { uint16_t a=(0x2C3A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B056:;
    /* $B056: 25 */ nes_instruction_boundary(0xB056, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B058:;
    /* $B058: 25 */ nes_instruction_boundary(0xB058, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B05A:;
    /* $B05A: 25 */ nes_instruction_boundary(0xB05A, 3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_B05C:;
    /* $B05C: 19 */ nes_instruction_boundary(0xB05C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B05F:;
    /* $B05F: 1B */ nes_instruction_boundary(0xB05F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B062:;
    /* $B062: 18 */ nes_instruction_boundary(0xB062, 2); g_cpu.C = 0;
label_B063:;
    /* $B063: 1A */ nes_instruction_boundary(0xB063, 2); /* NOP */
label_B064:;
    /* $B064: 39 */ nes_instruction_boundary(0xB064, 4); g_cpu.A &= nes_read((0x242B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B067:;
    /* $B067: 2B */ nes_instruction_boundary(0xB067, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B069:;
    /* $B069: 2B */ nes_instruction_boundary(0xB069, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B06B:;
    /* $B06B: 32 */ nes_instruction_boundary(0xB06B, 2); /* ILLEGAL $32 — skip 1 */
label_B06C:;
    /* $B06C: 18 */ nes_instruction_boundary(0xB06C, 2); g_cpu.C = 0;
label_B06D:;
    /* $B06D: 1A */ nes_instruction_boundary(0xB06D, 2); /* NOP */
label_B06E:;
    /* $B06E: 18 */ nes_instruction_boundary(0xB06E, 2); g_cpu.C = 0;
label_B06F:;
    /* $B06F: 1A */ nes_instruction_boundary(0xB06F, 2); /* NOP */
label_B070:;
    /* $B070: 19 */ nes_instruction_boundary(0xB070, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B073:;
    /* $B073: 1B */ nes_instruction_boundary(0xB073, 7); { uint16_t a=(0x2C3A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B076:;
    /* $B076: 25 */ nes_instruction_boundary(0xB076, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B078:;
    /* $B078: 25 */ nes_instruction_boundary(0xB078, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B07A:;
    /* $B07A: 25 */ nes_instruction_boundary(0xB07A, 3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_B07C:;
    /* $B07C: 19 */ nes_instruction_boundary(0xB07C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B07F:;
    /* $B07F: 1B */ nes_instruction_boundary(0xB07F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B082:;
    /* $B082: 18 */ nes_instruction_boundary(0xB082, 2); g_cpu.C = 0;
label_B083:;
    /* $B083: 1A */ nes_instruction_boundary(0xB083, 2); /* NOP */
label_B084:;
    /* $B084: 39 */ nes_instruction_boundary(0xB084, 4); g_cpu.A &= nes_read((0x242B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B087:;
    /* $B087: 2B */ nes_instruction_boundary(0xB087, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B089:;
    /* $B089: 2B */ nes_instruction_boundary(0xB089, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B08B:;
    /* $B08B: 32 */ nes_instruction_boundary(0xB08B, 2); /* ILLEGAL $32 — skip 1 */
label_B08C:;
    /* $B08C: 18 */ nes_instruction_boundary(0xB08C, 2); g_cpu.C = 0;
label_B08D:;
    /* $B08D: 1A */ nes_instruction_boundary(0xB08D, 2); /* NOP */
label_B08E:;
    /* $B08E: 18 */ nes_instruction_boundary(0xB08E, 2); g_cpu.C = 0;
label_B08F:;
    /* $B08F: 1A */ nes_instruction_boundary(0xB08F, 2); /* NOP */
label_B090:;
    /* $B090: 19 */ nes_instruction_boundary(0xB090, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B093:;
    /* $B093: 1B */ nes_instruction_boundary(0xB093, 7); { uint16_t a=(0x2C3A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B096:;
    /* $B096: 25 */ nes_instruction_boundary(0xB096, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B098:;
    /* $B098: 25 */ nes_instruction_boundary(0xB098, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B09A:;
    /* $B09A: 25 */ nes_instruction_boundary(0xB09A, 3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_B09C:;
    /* $B09C: 19 */ nes_instruction_boundary(0xB09C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B09F:;
    /* $B09F: 1B */ nes_instruction_boundary(0xB09F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B0A2:;
    /* $B0A2: 18 */ nes_instruction_boundary(0xB0A2, 2); g_cpu.C = 0;
label_B0A3:;
    /* $B0A3: 40 */ nes_instruction_boundary(0xB0A3, 6); /* RTI */ g_rti_source = 0xB0A3; g_rti_bank = 2; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B0A4:; return;
label_B0A7:; return;
label_B0A9:; return;
label_B0AB:; return;
label_B0AC:; return;
label_B0AD:; return;
label_B0AE:; return;
label_B0AF:; return;
label_B0B0:; return;
label_B0B3:; return;
label_B0B5:; return;
label_B0B8:; return;
label_B0BA:; return;
label_B0BC:; return;
label_B0BF:; return;
label_B0C2:; return;
label_B0C5:; return;
label_B0C7:; return;
label_B0C9:; return;
label_B0CB:; return;
label_B0CC:; return;
label_B0CF:; return;
label_B0D0:; return;
label_B0D3:; return;
label_B0D6:; return;
label_B0D8:; return;
label_B0DA:; return;
label_B0DC:; return;
label_B0DF:; return;
label_B0E2:; return;
label_B0E5:; return;
label_B0E8:; return;
label_B0EA:; return;
label_B0EC:; return;
label_B0EF:; return;
label_B0F0:; return;
label_B0F3:; return;
label_B0F6:; return;
label_B0F7:; return;
label_B0FA:; return;
label_B0FB:; return;
label_B0FD:; return;
label_B100:; return;
label_B101:; return;
label_B102:; return;
label_B103:; return;
label_B104:; return;
label_B106:; return;
label_B107:; return;
label_B108:; return;
label_B109:; return;
label_B10B:; return;
label_B10C:; return;
label_B10E:; return;
label_B110:; return;
label_B112:; return;
label_B113:; return;
label_B114:; return;
label_B117:; return;
label_B119:; return;
label_B11B:; return;
label_B11D:; return;
label_B11E:; return;
label_B120:; return;
label_B121:; return;
label_B122:; return;
label_B124:; return;
label_B126:; return;
label_B128:; return;
label_B129:; return;
label_B12C:; return;
label_B12F:; return;
label_B132:; return;
label_B134:; return;
label_B137:; return;
label_B138:; return;
label_B139:; return;
label_B13A:; return;
label_B13B:; return;
label_B13C:; return;
label_B13E:; return;
label_B141:; return;
label_B143:; return;
label_B144:; return;
label_B145:; return;
label_B147:; return;
label_B149:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B151:; return;
label_B153:; return;
label_B155:; return;
label_B157:; return;
label_B158:; return;
label_B159:; return;
label_B15B:; return;
label_B15C:; return;
label_B15F:; return;
label_B162:; return;
label_B164:; return;
label_B165:; return;
label_B167:; return;
label_B169:; return;
label_B16C:; return;
label_B16D:; return;
label_B170:; return;
label_B171:; return;
label_B173:; return;
label_B174:; return;
label_B175:; return;
label_B178:; return;
label_B17A:; return;
label_B17C:; return;
label_B17D:; return;
label_B17E:; return;
label_B180:; return;
label_B182:; return;
label_B184:; return;
label_B186:; return;
label_B188:; return;
label_B18B:; return;
label_B18E:; return;
label_B191:; return;
label_B194:; return;
label_B195:; return;
label_B196:; return;
label_B198:; return;
label_B19A:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AC:; return;
label_B1AF:; return;
label_B1B0:; return;
label_B1B3:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1B9:; return;
label_B1BC:; return;
label_B1BE:; return;
label_B1C0:; return;
label_B1C2:; return;
label_B1C4:; return;
label_B1C6:; return;
label_B1C8:; return;
label_B1CB:; return;
label_B1CD:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D5:; return;
label_B1D8:; return;
label_B1D9:; return;
label_B1DC:; return;
label_B1DE:; return;
label_B1E0:; return;
label_B1E1:; return;
label_B1E2:; return;
label_B1E4:; return;
label_B1E6:; return;
label_B1E8:; return;
label_B1E9:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1F0:; return;
label_B1F1:; return;
label_B1F4:; return;
label_B1F6:; return;
label_B1F8:; return;
label_B1FA:; return;
label_B1FC:; return;
label_B1FE:; return;
label_B200:; return;
label_B202:; return;
label_B204:; return;
label_B206:; return;
label_B208:; return;
label_B209:; return;
label_B20A:; return;
label_B20C:; return;
label_B20E:; return;
label_B210:; return;
label_B212:; return;
label_B214:; return;
label_B216:; return;
label_B218:; return;
label_B21A:; return;
label_B21C:; return;
label_B21E:; return;
label_B220:; return;
label_B222:; return;
label_B224:; return;
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
label_B234:; return;
label_B235:; return;
label_B236:; return;
label_B237:; return;
label_B238:; return;
label_B239:; return;
label_B23A:; return;
label_B23B:; return;
label_B23C:; return;
label_B23D:; return;
label_B23E:; return;
label_B23F:; return;
label_B240:; return;
label_B241:; return;
label_B242:; return;
label_B243:; return;
label_B244:; return;
label_B245:; return;
label_B246:; return;
label_B247:; return;
label_B249:; return;
label_B24B:; return;
label_B24D:; return;
label_B24F:; return;
label_B251:; return;
label_B252:; return;
label_B253:; return;
label_B254:; return;
label_B255:; return;
label_B256:; return;
label_B257:; return;
label_B258:; return;
label_B259:; return;
label_B25A:; return;
label_B25B:; return;
label_B25C:; return;
label_B25D:; return;
label_B25E:; return;
label_B25F:; return;
label_B260:; return;
label_B261:; return;
label_B262:; return;
label_B263:; return;
label_B264:; return;
label_B265:; return;
label_B266:; return;
label_B267:; return;
label_B268:; return;
label_B269:; return;
label_B26A:; return;
label_B26B:; return;
label_B26C:; return;
label_B26D:; return;
label_B26E:; return;
label_B26F:; return;
label_B270:; return;
label_B271:; return;
label_B272:; return;
label_B273:; return;
label_B274:; return;
label_B275:; return;
label_B276:; return;
label_B277:; return;
label_B278:; return;
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
label_B283:; return;
label_B284:; return;
label_B285:; return;
label_B286:; return;
label_B287:; return;
label_B288:; return;
label_B289:; return;
label_B28A:; return;
label_B28B:; return;
label_B28C:; return;
label_B28D:; return;
label_B28E:; return;
label_B28F:; return;
label_B290:; return;
label_B291:; return;
label_B292:; return;
label_B293:; return;
label_B294:; return;
label_B295:; return;
label_B296:; return;
label_B297:; return;
label_B298:; return;
label_B299:; return;
label_B29A:; return;
label_B29B:; return;
label_B29C:; return;
label_B29D:; return;
label_B29E:; return;
label_B29F:; return;
label_B2A0:; return;
label_B2A1:; return;
label_B2A2:; return;
label_B2A3:; return;
label_B2A4:; return;
label_B2A5:; return;
label_B2A6:; return;
label_B2A7:; return;
label_B2A8:; return;
label_B2A9:; return;
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
label_B2B4:; return;
label_B2B5:; return;
label_B2B6:; return;
label_B2B7:; return;
label_B2B8:; return;
label_B2B9:; return;
label_B2BA:; return;
label_B2BB:; return;
label_B2BC:; return;
label_B2BD:; return;
label_B2BE:; return;
label_B2BF:; return;
label_B2C0:; return;
label_B2C1:; return;
label_B2C2:; return;
label_B2C3:; return;
label_B2C4:; return;
label_B2C5:; return;
label_B2C6:; return;
label_B2C7:; return;
label_B2C8:; return;
label_B2CA:; return;
label_B2CC:; return;
label_B2CE:; return;
label_B2CF:; return;
label_B2D0:; return;
label_B2D1:; return;
label_B2D2:; return;
label_B2D3:; return;
label_B2D4:; return;
label_B2D5:; return;
label_B2D6:; return;
label_B2D7:; return;
label_B2D8:; return;
label_B2D9:; return;
label_B2DA:; return;
label_B2DB:; return;
label_B2DC:; return;
label_B2DD:; return;
label_B2DE:; return;
label_B2DF:; return;
label_B2E0:; return;
label_B2E1:; return;
label_B2E2:; return;
label_B2E3:; return;
label_B2E4:; return;
label_B2E5:; return;
label_B2E6:; return;
label_B2E7:; return;
label_B2E8:; return;
label_B2E9:; return;
label_B2EA:; return;
label_B2EB:; return;
label_B2EC:; return;
label_B2ED:; return;
label_B2EE:; return;
label_B2EF:; return;
label_B2F0:; return;
label_B2F1:; return;
label_B2F2:; return;
label_B2F3:; return;
label_B2F4:; return;
label_B2F5:; return;
label_B2F6:; return;
label_B2F7:; return;
label_B2F8:; return;
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
label_B303:; return;
label_B304:; return;
label_B305:; return;
label_B306:; return;
label_B307:; return;
label_B308:; return;
label_B309:; return;
label_B30A:; return;
label_B30B:; return;
label_B30C:; return;
label_B30D:; return;
label_B30E:; return;
label_B30F:; return;
label_B310:; return;
label_B311:; return;
label_B312:; return;
label_B313:; return;
label_B314:; return;
label_B315:; return;
label_B316:; return;
label_B317:; return;
label_B318:; return;
label_B319:; return;
label_B31A:; return;
label_B31B:; return;
label_B31C:; return;
label_B31D:; return;
label_B31E:; return;
label_B31F:; return;
label_B320:; return;
label_B321:; return;
label_B322:; return;
label_B323:; return;
label_B324:; return;
label_B325:; return;
label_B326:; return;
label_B327:; return;
label_B328:; return;
label_B329:; return;
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
label_B334:; return;
label_B335:; return;
label_B336:; return;
label_B337:; return;
label_B338:; return;
label_B339:; return;
label_B33A:; return;
label_B33B:; return;
label_B33C:; return;
label_B33D:; return;
label_B33E:; return;
label_B33F:; return;
label_B340:; return;
label_B341:; return;
label_B342:; return;
label_B343:; return;
label_B344:; return;
label_B345:; return;
label_B346:; return;
label_B347:; return;
label_B348:; return;
label_B349:; return;
label_B34A:; return;
label_B34B:; return;
label_B34C:; return;
label_B34D:; return;
label_B34E:; return;
label_B34F:; return;
label_B350:; return;
label_B351:; return;
label_B352:; return;
label_B353:; return;
label_B354:; return;
label_B355:; return;
label_B356:; return;
label_B357:; return;
label_B358:; return;
label_B359:; return;
label_B35A:; return;
label_B35B:; return;
label_B35C:; return;
label_B35D:; return;
label_B35E:; return;
label_B35F:; return;
label_B360:; return;
label_B361:; return;
label_B362:; return;
label_B363:; return;
label_B364:; return;
label_B365:; return;
label_B366:; return;
label_B367:; return;
label_B368:; return;
label_B369:; return;
label_B36A:; return;
label_B36B:; return;
label_B36C:; return;
label_B36D:; return;
label_B36E:; return;
label_B36F:; return;
label_B370:; return;
label_B371:; return;
label_B372:; return;
label_B373:; return;
label_B374:; return;
label_B375:; return;
label_B376:; return;
label_B377:; return;
label_B378:; return;
label_B379:; return;
label_B37A:; return;
label_B37B:; return;
label_B37C:; return;
label_B37D:; return;
label_B37E:; return;
label_B37F:; return;
label_B380:; return;
label_B381:; return;
label_B382:; return;
label_B383:; return;
label_B384:; return;
label_B385:; return;
label_B386:; return;
label_B387:; return;
label_B388:; return;
label_B389:; return;
label_B38A:; return;
label_B38B:; return;
label_B38C:; return;
label_B38D:; return;
label_B38E:; return;
label_B38F:; return;
label_B390:; return;
label_B391:; return;
label_B392:; return;
label_B393:; return;
label_B394:; return;
label_B395:; return;
label_B396:; return;
label_B397:; return;
label_B398:; return;
label_B399:; return;
label_B39A:; return;
label_B39B:; return;
label_B39C:; return;
label_B39D:; return;
label_B39E:; return;
label_B39F:; return;
label_B3A0:; return;
label_B3A1:; return;
label_B3A2:; return;
label_B3A3:; return;
label_B3A4:; return;
label_B3A5:; return;
label_B3A6:; return;
label_B3A7:; return;
label_B3A8:; return;
label_B3A9:; return;
label_B3AA:; return;
label_B3AB:; return;
label_B3AC:; return;
label_B3AD:; return;
label_B3AE:; return;
label_B3AF:; return;
label_B3B0:; return;
label_B3B1:; return;
label_B3B2:; return;
label_B3B3:; return;
label_B3B4:; return;
label_B3B6:; return;
label_B3B7:; return;
label_B3BA:; return;
label_B3BC:; return;
label_B3BE:; return;
label_B3C1:; return;
label_B3C4:; return;
label_B3C5:; return;
label_B3C6:; return;
label_B3C8:; return;
label_B3CB:; return;
label_B3CD:; return;
label_B3CE:; return;
label_B3CF:; return;
label_B3D2:; return;
label_B3D3:; return;
label_B3D4:; return;
label_B3D5:; return;
label_B3D6:; return;
label_B3D7:; return;
label_B3D9:; return;
label_B3DB:; return;
label_B3DD:; return;
label_B3DF:; return;
label_B3E0:; return;
label_B3E1:; return;
label_B3E2:; return;
label_B3E3:; return;
label_B3E4:; return;
label_B3E5:; return;
label_B3E6:; return;
label_B3E7:; return;
label_B3E8:; return;
label_B3E9:; return;
label_B3EA:; return;
label_B3EB:; return;
label_B3EC:; return;
label_B3ED:; return;
label_B3EE:; return;
label_B3EF:; return;
label_B3F0:; return;
label_B3F1:; return;
label_B3F2:; return;
label_B3F3:; return;
label_B3F4:; return;
label_B3F5:; return;
label_B3F6:; return;
label_B3F7:; return;
label_B3F8:; return;
label_B3F9:; return;
label_B3FA:; return;
label_B3FB:; return;
label_B3FC:; return;
label_B3FD:; return;
label_B3FE:; return;
label_B3FF:; return;
label_B400:; return;
label_B401:; return;
label_B402:; return;
label_B403:; return;
label_B404:; return;
label_B405:; return;
label_B406:; return;
label_B407:; return;
label_B408:; return;
label_B409:; return;
label_B40A:; return;
label_B40B:; return;
label_B40C:; return;
label_B40D:; return;
label_B40E:; return;
label_B40F:; return;
label_B410:; return;
label_B411:; return;
label_B412:; return;
label_B413:; return;
label_B414:; return;
label_B415:; return;
label_B416:; return;
label_B417:; return;
label_B418:; return;
label_B419:; return;
label_B41A:; return;
label_B41B:; return;
label_B41C:; return;
label_B41D:; return;
label_B41E:; return;
label_B41F:; return;
label_B420:; return;
label_B421:; return;
label_B422:; return;
label_B423:; return;
label_B424:; return;
label_B425:; return;
label_B426:; return;
label_B427:; return;
label_B428:; return;
label_B429:; return;
label_B42A:; return;
label_B42B:; return;
label_B42C:; return;
label_B42D:; return;
label_B42E:; return;
label_B42F:; return;
label_B430:; return;
label_B431:; return;
label_B432:; return;
label_B433:; return;
label_B434:; return;
label_B435:; return;
label_B436:; return;
label_B437:; return;
label_B438:; return;
label_B439:; return;
label_B43A:; return;
label_B43B:; return;
label_B43C:; return;
label_B43D:; return;
label_B43E:; return;
label_B43F:; return;
label_B440:; return;
label_B441:; return;
label_B442:; return;
label_B443:; return;
label_B444:; return;
label_B445:; return;
label_B446:; return;
label_B447:; return;
label_B448:; return;
label_B449:; return;
label_B44A:; return;
label_B44B:; return;
label_B44C:; return;
label_B44D:; return;
label_B44E:; return;
label_B44F:; return;
label_B450:; return;
label_B451:; return;
label_B452:; return;
label_B453:; return;
label_B454:; return;
label_B455:; return;
label_B456:; return;
label_B457:; return;
label_B458:; return;
label_B459:; return;
label_B45A:; return;
label_B45B:; return;
label_B45C:; return;
label_B45D:; return;
label_B45E:; return;
label_B45F:; return;
label_B460:; return;
label_B461:; return;
label_B462:; return;
label_B463:; return;
label_B464:; return;
label_B465:; return;
label_B466:; return;
label_B467:; return;
label_B468:; return;
label_B469:; return;
label_B46A:; return;
label_B46B:; return;
label_B46C:; return;
label_B46D:; return;
label_B46E:; return;
label_B46F:; return;
label_B470:; return;
label_B471:; return;
label_B472:; return;
label_B473:; return;
label_B474:; return;
label_B475:; return;
label_B476:; return;
label_B477:; return;
label_B478:; return;
label_B479:; return;
label_B47A:; return;
label_B47B:; return;
label_B47C:; return;
label_B47D:; return;
label_B47E:; return;
label_B47F:; return;
label_B480:; return;
label_B481:; return;
label_B482:; return;
label_B483:; return;
label_B484:; return;
label_B485:; return;
label_B486:; return;
label_B487:; return;
label_B488:; return;
label_B489:; return;
label_B48A:; return;
label_B48B:; return;
label_B48C:; return;
label_B48D:; return;
label_B48E:; return;
label_B48F:; return;
label_B490:; return;
label_B491:; return;
label_B492:; return;
label_B493:; return;
label_B494:; return;
label_B495:; return;
label_B496:; return;
label_B497:; return;
label_B498:; return;
label_B499:; return;
label_B49A:; return;
label_B49B:; return;
label_B49C:; return;
label_B49D:; return;
label_B49E:; return;
label_B49F:; return;
label_B4A0:; return;
label_B4A1:; return;
label_B4A2:; return;
label_B4A3:; return;
label_B4A4:; return;
label_B4A5:; return;
label_B4A6:; return;
label_B4A7:; return;
label_B4A8:; return;
label_B4A9:; return;
label_B4AA:; return;
label_B4AB:; return;
label_B4AC:; return;
label_B4AD:; return;
label_B4AE:; return;
label_B4AF:; return;
label_B4B0:; return;
label_B4B1:; return;
label_B4B2:; return;
label_B4B3:; return;
label_B4B4:; return;
label_B4B5:; return;
label_B4B6:; return;
label_B4B7:; return;
label_B4B8:; return;
label_B4B9:; return;
label_B4BA:; return;
label_B4BB:; return;
label_B4BC:; return;
label_B4BD:; return;
label_B4BE:; return;
label_B4BF:; return;
label_B4C0:; return;
label_B4C1:; return;
label_B4C2:; return;
label_B4C3:; return;
label_B4C4:; return;
label_B4C5:; return;
label_B4C6:; return;
label_B4C7:; return;
label_B4C8:; return;
label_B4CA:; return;
label_B4CC:; return;
label_B4CF:; return;
label_B4D0:; return;
label_B4D1:; return;
label_B4D2:; return;
label_B4D3:; return;
label_B4D4:; return;
label_B4D5:; return;
label_B4D6:; return;
label_B4D7:; return;
label_B4D8:; return;
label_B4D9:; return;
label_B4DA:; return;
label_B4DB:; return;
label_B4DC:; return;
label_B4DD:; return;
label_B4DE:; return;
label_B4DF:; return;
label_B4E0:; return;
label_B4E1:; return;
label_B4E2:; return;
label_B4E3:; return;
label_B4E4:; return;
label_B4E5:; return;
label_B4E6:; return;
label_B4E7:; return;
label_B4E8:; return;
label_B4E9:; return;
label_B4EA:; return;
label_B4EB:; return;
label_B4EC:; return;
label_B4ED:; return;
label_B4EE:; return;
label_B4EF:; return;
label_B4F0:; return;
label_B4F1:; return;
label_B4F2:; return;
label_B4F3:; return;
label_B4F4:; return;
label_B4F5:; return;
label_B4F6:; return;
label_B4F7:; return;
label_B4F8:; return;
label_B4F9:; return;
label_B4FA:; return;
label_B4FB:; return;
label_B4FC:; return;
label_B4FD:; return;
label_B4FE:; return;
label_B4FF:; return;
label_B500:; return;
label_B501:; return;
label_B502:; return;
label_B503:; return;
label_B504:; return;
label_B505:; return;
label_B506:; return;
label_B507:; return;
label_B508:; return;
label_B509:; return;
label_B50A:; return;
label_B50B:; return;
label_B50C:; return;
label_B50D:; return;
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
label_B54A:; return;
label_B54B:; return;
label_B54C:; return;
label_B54D:; return;
label_B54E:; return;
label_B54F:; return;
label_B550:; return;
label_B551:; return;
label_B552:; return;
label_B553:; return;
label_B554:; return;
label_B555:; return;
label_B556:; return;
label_B557:; return;
label_B558:; return;
label_B55A:; return;
label_B55B:; return;
label_B55C:; return;
label_B55E:; return;
label_B560:; return;
label_B562:; return;
label_B563:; return;
label_B564:; return;
label_B565:; return;
label_B567:; return;
label_B569:; return;
label_B56B:; return;
label_B56D:; return;
label_B56E:; return;
label_B56F:; return;
label_B570:; return;
label_B571:; return;
label_B572:; return;
label_B575:; return;
label_B578:; return;
label_B579:; return;
label_B57B:; return;
label_B57D:; return;
label_B57E:; return;
label_B580:; return;
label_B582:; return;
label_B583:; return;
label_B586:; return;
label_B587:; return;
label_B589:; return;
label_B58A:; return;
label_B58B:; return;
label_B58E:; return;
label_B591:; return;
label_B592:; return;
label_B594:; return;
label_B596:; return;
label_B598:; return;
label_B59A:; return;
label_B59B:; return;
label_B59C:; return;
label_B59E:; return;
label_B5A1:; return;
label_B5A2:; return;
label_B5A3:; return;
label_B5A6:; return;
label_B5A7:; return;
label_B5A9:; return;
label_B5AA:; return;
label_B5AB:; return;
label_B5AD:; return;
label_B5AF:; return;
label_B5B2:; return;
label_B5B3:; return;
label_B5B4:; return;
label_B5B7:; return;
label_B5BA:; return;
label_B5BB:; return;
label_B5BC:; return;
label_B5BD:; return;
label_B5BF:; return;
label_B5C0:; return;
label_B5C1:; return;
label_B5C3:; return;
label_B5C5:; return;
label_B5C7:; return;
label_B5C8:; return;
label_B5C9:; return;
label_B5CA:; return;
label_B5CD:; return;
label_B5D0:; return;
label_B5D1:; return;
label_B5D3:; return;
label_B5D5:; return;
label_B5D6:; return;
label_B5D8:; return;
label_B5D9:; return;
label_B5DA:; return;
label_B5DC:; return;
label_B5DD:; return;
label_B5DF:; return;
label_B5E0:; return;
label_B5E1:; return;
label_B5E2:; return;
label_B5E5:; return;
label_B5E6:; return;
label_B5E7:; return;
label_B5E8:; return;
label_B5E9:; return;
label_B5EC:; return;
label_B5ED:; return;
label_B5F0:; return;
label_B5F1:; return;
label_B5F3:; return;
label_B5F6:; return;
label_B5F7:; return;
label_B5F8:; return;
label_B5F9:; return;
label_B5FA:; return;
label_B5FC:; return;
label_B5FE:; return;
label_B600:; return;
label_B601:; return;
label_B603:; return;
label_B604:; return;
label_B605:; return;
label_B607:; return;
label_B608:; return;
label_B609:; return;
label_B60B:; return;
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
label_B640:; return;
label_B641:; return;
label_B643:; return;
label_B644:; return;
label_B646:; return;
label_B647:; return;
label_B649:; return;
label_B64A:; return;
label_B64C:; return;
label_B64D:; return;
label_B64F:; return;
label_B650:; return;
label_B652:; return;
label_B653:; return;
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
label_B66C:; return;
label_B66F:; return;
label_B670:; return;
label_B671:; return;
label_B674:; return;
label_B675:; return;
label_B676:; return;
label_B677:; return;
label_B678:; return;
label_B679:; return;
label_B67A:; return;
label_B67B:; return;
label_B67C:; return;
label_B67E:; return;
label_B67F:; return;
label_B681:; return;
label_B682:; return;
label_B683:; return;
label_B684:; return;
label_B685:; return;
label_B686:; return;
label_B687:; return;
label_B688:; return;
label_B689:; return;
label_B68A:; return;
label_B68B:; return;
label_B68C:; return;
label_B68E:; return;
label_B691:; return;
label_B694:; return;
label_B695:; return;
label_B696:; return;
label_B697:; return;
label_B698:; return;
label_B699:; return;
label_B69A:; return;
label_B69C:; return;
label_B69D:; return;
label_B6A0:; return;
label_B6A2:; return;
label_B6A3:; return;
label_B6A4:; return;
label_B6A5:; return;
label_B6A6:; return;
label_B6A7:; return;
label_B6A8:; return;
label_B6A9:; return;
label_B6AB:; return;
label_B6AE:; return;
label_B6B1:; return;
label_B6B3:; return;
label_B6B4:; return;
label_B6B5:; return;
label_B6B6:; return;
label_B6B7:; return;
label_B6B8:; return;
label_B6B9:; return;
label_B6BA:; return;
label_B6BC:; return;
label_B6BE:; return;
label_B6C0:; return;
label_B6C3:; return;
label_B6C4:; return;
label_B6C5:; return;
label_B6C6:; return;
label_B6C7:; return;
label_B6C8:; return;
label_B6C9:; return;
label_B6CB:; return;
label_B6CE:; return;
label_B6CF:; return;
label_B6D0:; return;
label_B6D1:; return;
label_B6D3:; return;
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
label_B6EF:; return;
label_B6F0:; return;
label_B6F1:; return;
label_B6F2:; return;
label_B6F3:; return;
label_B6F4:; return;
label_B6F5:; return;
label_B6F6:; return;
label_B6F7:; return;
label_B6F8:; return;
label_B6F9:; return;
label_B6FA:; return;
label_B6FB:; return;
label_B6FC:; return;
label_B6FD:; return;
label_B6FE:; return;
label_B6FF:; return;
label_B700:; return;
label_B701:; return;
label_B702:; return;
label_B703:; return;
label_B704:; return;
label_B705:; return;
label_B706:; return;
label_B707:; return;
label_B708:; return;
label_B709:; return;
label_B70A:; return;
label_B70B:; return;
label_B70C:; return;
label_B70D:; return;
label_B70E:; return;
label_B70F:; return;
label_B710:; return;
label_B711:; return;
label_B712:; return;
label_B713:; return;
label_B714:; return;
label_B715:; return;
label_B716:; return;
label_B717:; return;
label_B718:; return;
label_B719:; return;
label_B71A:; return;
label_B71B:; return;
label_B71C:; return;
label_B71D:; return;
label_B71E:; return;
label_B71F:; return;
label_B720:; return;
label_B721:; return;
label_B722:; return;
label_B723:; return;
label_B724:; return;
label_B725:; return;
label_B726:; return;
label_B727:; return;
label_B728:; return;
label_B729:; return;
label_B72A:; return;
label_B72B:; return;
label_B72C:; return;
label_B72D:; return;
label_B72E:; return;
label_B72F:; return;
label_B730:; return;
label_B731:; return;
label_B732:; return;
label_B733:; return;
label_B734:; return;
label_B735:; return;
label_B736:; return;
label_B737:; return;
label_B738:; return;
label_B739:; return;
label_B73A:; return;
label_B73B:; return;
label_B73C:; return;
label_B73D:; return;
label_B73E:; return;
label_B73F:; return;
label_B740:; return;
label_B741:; return;
label_B742:; return;
label_B743:; return;
label_B744:; return;
label_B745:; return;
label_B746:; return;
label_B747:; return;
label_B748:; return;
label_B749:; return;
label_B74A:; return;
label_B74B:; return;
label_B74C:; return;
label_B74D:; return;
label_B74E:; return;
label_B74F:; return;
label_B750:; return;
label_B751:; return;
label_B752:; return;
label_B753:; return;
label_B754:; return;
label_B755:; return;
label_B756:; return;
label_B757:; return;
label_B758:; return;
label_B759:; return;
label_B75A:; return;
label_B75B:; return;
label_B75D:; return;
label_B75F:; return;
label_B761:; return;
label_B763:; return;
label_B764:; return;
label_B765:; return;
label_B766:; return;
label_B767:; return;
label_B768:; return;
label_B769:; return;
label_B76B:; return;
label_B76D:; return;
label_B76E:; return;
label_B770:; return;
label_B773:; return;
label_B775:; return;
label_B777:; return;
label_B779:; return;
label_B77A:; return;
label_B77B:; return;
label_B77C:; return;
label_B77E:; return;
label_B77F:; return;
label_B781:; return;
label_B782:; return;
label_B785:; return;
label_B787:; return;
label_B789:; return;
label_B78B:; return;
label_B78D:; return;
label_B78E:; return;
label_B791:; return;
label_B792:; return;
label_B793:; return;
label_B794:; return;
label_B795:; return;
label_B797:; return;
label_B798:; return;
label_B799:; return;
label_B79B:; return;
label_B79D:; return;
label_B79F:; return;
label_B7A1:; return;
label_B7A2:; return;
label_B7A5:; return;
label_B7A6:; return;
label_B7A8:; return;
label_B7A9:; return;
label_B7AC:; return;
label_B7AD:; return;
label_B7AE:; return;
label_B7AF:; return;
label_B7B0:; return;
label_B7B3:; return;
label_B7B4:; return;
label_B7B7:; return;
label_B7B8:; return;
label_B7BA:; return;
label_B7BB:; return;
label_B7BE:; return;
label_B7C0:; return;
label_B7C2:; return;
label_B7C4:; return;
label_B7C6:; return;
label_B7C7:; return;
label_B7C8:; return;
label_B7C9:; return;
label_B7CA:; return;
label_B7CB:; return;
label_B7CC:; return;
label_B7CD:; return;
label_B7D0:; return;
label_B7D2:; return;
label_B7D4:; return;
label_B7D6:; return;
label_B7D8:; return;
label_B7D9:; return;
label_B7DA:; return;
label_B7DD:; return;
label_B7DE:; return;
label_B7DF:; return;
label_B7E0:; return;
label_B7E1:; return;
label_B7E3:; return;
label_B7E4:; return;
label_B7E5:; return;
label_B7E6:; return;
label_B7E7:; return;
label_B7E9:; return;
label_B7EB:; return;
label_B7EE:; return;
label_B7F0:; return;
label_B7F2:; return;
label_B7F3:; return;
label_B7F5:; return;
label_B7F6:; return;
label_B7F7:; return;
label_B7F8:; return;
label_B7FA:; return;
label_B7FB:; return;
label_B7FC:; return;
label_B7FD:; return;
label_B7FE:; return;
label_B800:; return;
label_B802:; return;
label_B804:; return;
label_B806:; return;
label_B808:; return;
label_B80A:; return;
label_B80B:; return;
label_B80D:; return;
label_B80E:; return;
label_B80F:; return;
label_B810:; return;
label_B812:; return;
label_B814:; return;
label_B816:; return;
label_B818:; return;
label_B81A:; return;
label_B81C:; return;
label_B81E:; return;
label_B81F:; return;
label_B822:; return;
label_B823:; return;
label_B825:; return;
label_B826:; return;
label_B829:; return;
label_B82A:; return;
label_B82B:; return;
label_B82C:; return;
label_B82E:; return;
label_B830:; return;
label_B831:; return;
label_B832:; return;
label_B834:; return;
label_B835:; return;
label_B836:; return;
label_B838:; return;
label_B839:; return;
label_B83A:; return;
label_B83C:; return;
label_B83D:; return;
label_B83E:; return;
label_B83F:; return;
label_B841:; return;
label_B842:; return;
label_B843:; return;
label_B844:; return;
label_B845:; return;
label_B847:; return;
label_B848:; return;
label_B849:; return;
label_B84A:; return;
label_B84B:; return;
label_B84C:; return;
label_B84E:; return;
label_B84F:; return;
label_B850:; return;
label_B851:; return;
label_B852:; return;
label_B853:; return;
label_B855:; return;
label_B856:; return;
label_B857:; return;
label_B858:; return;
label_B85A:; return;
label_B85B:; return;
label_B85C:; return;
label_B85D:; return;
label_B85E:; return;
label_B860:; return;
label_B861:; return;
label_B862:; return;
label_B863:; return;
label_B864:; return;
label_B866:; return;
label_B867:; return;
label_B868:; return;
label_B869:; return;
label_B86A:; return;
label_B86B:; return;
label_B86C:; return;
label_B86D:; return;
label_B86E:; return;
label_B870:; return;
label_B872:; return;
label_B874:; return;
label_B876:; return;
label_B878:; return;
label_B87A:; return;
label_B87C:; return;
label_B87D:; return;
label_B87F:; return;
label_B881:; return;
label_B883:; return;
label_B885:; return;
label_B887:; return;
label_B889:; return;
label_B88C:; return;
label_B88E:; return;
label_B890:; return;
label_B892:; return;
label_B894:; return;
label_B895:; return;
label_B897:; return;
label_B899:; return;
label_B89B:; return;
label_B89D:; return;
label_B89F:; return;
label_B8A1:; return;
label_B8A4:; return;
label_B8A6:; return;
label_B8A8:; return;
label_B8AA:; return;
label_B8AC:; return;
label_B8AD:; return;
label_B8AF:; return;
label_B8B1:; return;
label_B8B3:; return;
label_B8B5:; return;
label_B8B7:; return;
label_B8B8:; return;
label_B8B9:; return;
label_B8BA:; return;
label_B8BB:; return;
label_B8BC:; return;
label_B8BD:; return;
label_B8BE:; return;
label_B8BF:; return;
label_B8C0:; return;
label_B8C1:; return;
label_B8C2:; return;
label_B8C3:; return;
label_B8C4:; return;
label_B8C5:; return;
label_B8C6:; return;
label_B8C7:; return;
label_B8C8:; return;
label_B8C9:; return;
label_B8CA:; return;
label_B8CB:; return;
label_B8CC:; return;
label_B8CD:; return;
label_B8CE:; return;
label_B8CF:; return;
label_B8D0:; return;
label_B8D1:; return;
label_B8D2:; return;
label_B8D3:; return;
label_B8D4:; return;
label_B8D5:; return;
label_B8D6:; return;
label_B8D7:; return;
label_B8D8:; return;
label_B8D9:; return;
label_B8DA:; return;
label_B8DB:; return;
label_B8DC:; return;
label_B8DD:; return;
label_B8DE:; return;
label_B8DF:; return;
label_B8E0:; return;
label_B8E1:; return;
label_B8E2:; return;
label_B8E3:; return;
label_B8E4:; return;
label_B8E5:; return;
label_B8E6:; return;
label_B8E7:; return;
label_B8E8:; return;
label_B8E9:; return;
label_B8EA:; return;
label_B8EB:; return;
label_B8EC:; return;
label_B8ED:; return;
label_B8EE:; return;
label_B8EF:; return;
label_B8F0:; return;
label_B8F1:; return;
label_B8F2:; return;
label_B8F3:; return;
label_B8F4:; return;
label_B8F5:; return;
label_B8F6:; return;
label_B8F7:; return;
label_B8F8:; return;
label_B8F9:; return;
label_B8FA:; return;
label_B8FB:; return;
label_B8FC:; return;
label_B8FD:; return;
label_B8FE:; return;
label_B8FF:; return;
label_B900:; return;
label_B901:; return;
label_B902:; return;
label_B903:; return;
label_B904:; return;
label_B905:; return;
label_B906:; return;
label_B909:; return;
label_B90A:; return;
label_B90D:; return;
label_B90E:; return;
label_B911:; return;
label_B912:; return;
label_B915:; return;
label_B916:; return;
label_B919:; return;
label_B91A:; return;
label_B91D:; return;
label_B91E:; return;
label_B921:; return;
label_B922:; return;
label_B925:; return;
label_B926:; return;
label_B929:; return;
label_B92A:; return;
label_B92D:; return;
label_B92E:; return;
label_B931:; return;
label_B932:; return;
label_B935:; return;
label_B936:; return;
label_B937:; return;
label_B939:; return;
label_B93A:; return;
label_B93B:; return;
label_B93D:; return;
label_B93F:; return;
label_B941:; return;
label_B942:; return;
label_B943:; return;
label_B945:; return;
label_B947:; return;
label_B949:; return;
label_B94A:; return;
label_B94C:; return;
label_B94F:; return;
label_B951:; return;
label_B952:; return;
label_B954:; return;
label_B957:; return;
label_B95A:; return;
label_B95C:; return;
label_B95D:; return;
label_B95F:; return;
label_B962:; return;
label_B964:; return;
label_B965:; return;
label_B967:; return;
label_B969:; return;
label_B96B:; return;
label_B96D:; return;
label_B96F:; return;
label_B971:; return;
label_B973:; return;
label_B975:; return;
label_B977:; return;
label_B979:; return;
label_B97B:; return;
label_B97D:; return;
label_B980:; return;
label_B983:; return;
label_B985:; return;
label_B988:; return;
label_B989:; return;
label_B98B:; return;
label_B98C:; return;
label_B98D:; return;
label_B98F:; return;
label_B990:; return;
label_B991:; return;
label_B993:; return;
label_B994:; return;
label_B995:; return;
label_B997:; return;
label_B999:; return;
label_B99B:; return;
label_B99D:; return;
label_B99F:; return;
label_B9A1:; return;
label_B9A3:; return;
label_B9A5:; return;
label_B9A7:; return;
label_B9A9:; return;
label_B9AC:; return;
label_B9AD:; return;
label_B9AE:; return;
label_B9AF:; return;
label_B9B1:; return;
label_B9B4:; return;
label_B9B5:; return;
label_B9B6:; return;
label_B9B7:; return;
label_B9B8:; return;
label_B9B9:; return;
label_B9BA:; return;
label_B9BB:; return;
label_B9BC:; return;
label_B9BD:; return;
label_B9BF:; return;
label_B9C0:; return;
label_B9C1:; return;
label_B9C2:; return;
label_B9C4:; return;
label_B9C5:; return;
label_B9C6:; return;
label_B9C8:; return;
label_B9CA:; return;
label_B9CC:; return;
label_B9CD:; return;
label_B9CE:; return;
label_B9CF:; return;
label_B9D0:; return;
label_B9D2:; return;
label_B9D5:; return;
label_B9D6:; return;
label_B9D7:; return;
label_B9D8:; return;
label_B9D9:; return;
label_B9DB:; return;
label_B9DD:; return;
label_B9DF:; return;
label_B9E1:; return;
label_B9E3:; return;
label_B9E4:; return;
label_B9E5:; return;
label_B9E8:; return;
label_B9E9:; return;
label_B9EC:; return;
label_B9ED:; return;
label_B9EE:; return;
label_B9F1:; return;
label_B9F3:; return;
label_B9F5:; return;
label_B9F7:; return;
label_B9F8:; return;
label_B9FA:; return;
label_B9FC:; return;
label_B9FD:; return;
label_B9FF:; return;
label_BA01:; return;
label_BA03:; return;
label_BA05:; return;
label_BA07:; return;
label_BA08:; return;
label_BA0B:; return;
label_BA0C:; return;
label_BA0E:; return;
label_BA0F:; return;
label_BA10:; return;
label_BA13:; return;
label_BA15:; return;
label_BA17:; return;
label_BA18:; return;
label_BA1B:; return;
label_BA1C:; return;
label_BA1E:; return;
label_BA1F:; return;
label_BA49:; return;
label_BA4B:; return;
label_BA4D:; return;
label_BA4E:; return;
label_BA4F:; return;
label_BA50:; return;
label_BA52:; return;
label_BAB3:; return;
label_BAB5:; return;
label_BAB7:; return;
label_BAB8:; return;
label_BABB:; return;
label_BABC:; return;
label_BABE:; return;
label_BABF:; return;
label_BAC0:; return;
label_BAC3:; return;
label_BAC4:; return;
label_BAC7:; return;
label_BAC9:; return;
label_BACB:; return;
label_BACC:; return;
label_BACE:; return;
label_BAD0:; return;
label_BAD2:; return;
label_BAD5:; return;
label_BAD7:; return;
label_BAD9:; return;
label_BADB:; return;
label_BADC:; return;
label_BADE:; return;
label_BADF:; return;
label_BAE0:; return;
label_BAE2:; return;
label_BAE4:; return;
label_BAE6:; return;
label_BAE7:; return;
label_BAEA:; return;
label_BAEC:; return;
label_BAEE:; return;
label_BAEF:; return;
label_BAF2:; return;
label_BAF5:; return;
label_BAF8:; return;
label_BAFA:; return;
label_BAFC:; return;
label_BAFE:; return;
label_BB00:; return;
label_BB02:; return;
label_BB04:; return;
label_BB05:; return;
label_BB07:; return;
label_BB09:; return;
label_BB0B:; return;
label_BB0C:; return;
label_BB0E:; return;
label_BB10:; return;
label_BB12:; return;
label_BB14:; return;
label_BB16:; return;
label_BB17:; return;
label_BB18:; return;
label_BB19:; return;
label_BB1B:; return;
label_BB1C:; return;
label_BB1D:; return;
label_BB1E:; return;
label_BB20:; return;
label_BB21:; return;
label_BB22:; return;
label_BB23:; return;
label_BB24:; return;
label_BB26:; return;
label_BB27:; return;
label_BB28:; return;
label_BB29:; return;
label_BB2A:; return;
label_BB2C:; return;
label_BB2D:; return;
label_BB2E:; return;
label_BB2F:; return;
label_BB30:; return;
label_BB32:; return;
label_BB33:; return;
label_BB34:; return;
label_BB35:; return;
label_BB36:; return;
label_BB38:; return;
label_BB39:; return;
label_BB3A:; return;
label_BB3B:; return;
label_BB3D:; return;
label_BB3E:; return;
label_BB3F:; return;
label_BB40:; return;
label_BB41:; return;
label_BB42:; return;
label_BB43:; return;
label_BB44:; return;
label_BB45:; return;
label_BB46:; return;
label_BB48:; return;
label_BB49:; return;
label_BB4A:; return;
label_BB4B:; return;
label_BB4C:; return;
label_BB4D:; return;
label_BB4E:; return;
label_BB4F:; return;
label_BB50:; return;
label_BB51:; return;
label_BB52:; return;
label_BB53:; return;
label_BB54:; return;
label_BB55:; return;
label_BB56:; return;
label_BB57:; return;
label_BB58:; return;
label_BB59:; return;
label_BB5A:; return;
label_BB5B:; return;
label_BB5C:; return;
label_BB5D:; return;
label_BB5E:; return;
label_BB5F:; return;
label_BB60:; return;
label_BB61:; return;
label_BB62:; return;
label_BB63:; return;
label_BB64:; return;
label_BB65:; return;
label_BB66:; return;
label_BB67:; return;
label_BB68:; return;
label_BB69:; return;
label_BB6A:; return;
label_BB6B:; return;
label_BB6C:; return;
label_BB6D:; return;
}

void func_AD30_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD30_b2");
#endif
label_AD30:;
    /* $AD30: 25 */ nes_instruction_boundary(0xAD30, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_AD32:;
    /* $AD32: 25 */ nes_instruction_boundary(0xAD32, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_AD34:;
    /* $AD34: 25 */ nes_instruction_boundary(0xAD34, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_AD36:;
    /* $AD36: 25 */ nes_instruction_boundary(0xAD36, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_AD38:;
    /* $AD38: 25 */ nes_instruction_boundary(0xAD38, 3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_AD3A:;
    /* $AD3A: 20 */ nes_instruction_boundary(0xAD3A, 6); nes_dispatch_call(0x2020, -1);
label_AD3D:;
    /* $AD3D: 20 */ nes_instruction_boundary(0xAD3D, 6); nes_dispatch_call(0x2C3A, -1);
label_AD40:;
    /* $AD40: 26 */ nes_instruction_boundary(0xAD40, 5); { uint16_t a=0x2D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD42:;
    /* $AD42: 26 */ nes_instruction_boundary(0xAD42, 5); { uint16_t a=0x2D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD44:;
    /* $AD44: 26 */ nes_instruction_boundary(0xAD44, 5); { uint16_t a=0x2D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD46:;
    /* $AD46: 26 */ nes_instruction_boundary(0xAD46, 5); { uint16_t a=0x2D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD48:;
    /* $AD48: 26 */ nes_instruction_boundary(0xAD48, 5); { uint16_t a=0x34; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD4A:;
    /* $AD4A: 20 */ nes_instruction_boundary(0xAD4A, 6); nes_dispatch_call(0x1E20, -1);
label_AD4D:;
    /* $AD4D: 1F */ nes_instruction_boundary(0xAD4D, 7); { uint16_t a=(0x2D3B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD50:;
    /* $AD50: 27 */ nes_instruction_boundary(0xAD50, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AD52:;
    /* $AD52: 27 */ nes_instruction_boundary(0xAD52, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AD54:;
    /* $AD54: 27 */ nes_instruction_boundary(0xAD54, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AD56:;
    /* $AD56: 27 */ nes_instruction_boundary(0xAD56, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AD58:;
    /* $AD58: 27 */ nes_instruction_boundary(0xAD58, 5); { uint16_t a=0x35; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AD5A:;
    /* $AD5A: 20 */ nes_instruction_boundary(0xAD5A, 6); nes_dispatch_call(0x1920, -1);
label_AD5D:;
    /* $AD5D: 1B */ nes_instruction_boundary(0xAD5D, 7); { uint16_t a=(0x2E3C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD60:;
    /* $AD60: 28 */ nes_instruction_boundary(0xAD60, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD61:;
    /* $AD61: 3E */ nes_instruction_boundary(0xAD61, 7); { uint16_t a=(0x3E28 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD64:;
    /* $AD64: 28 */ nes_instruction_boundary(0xAD64, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD65:;
    /* $AD65: 3E */ nes_instruction_boundary(0xAD65, 7); { uint16_t a=(0x2F28 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD68:;
    /* $AD68: 28 */ nes_instruction_boundary(0xAD68, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD69:;
    /* $AD69: 36 */ nes_instruction_boundary(0xAD69, 6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD6B:;
    /* $AD6B: 1F */ nes_instruction_boundary(0xAD6B, 7); { uint16_t a=(0x1A18 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD6E:;
    /* $AD6E: 3D */ nes_instruction_boundary(0xAD6E, 4); g_cpu.A &= nes_read((0x193E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD71:;
    /* $AD71: 1B */ nes_instruction_boundary(0xAD71, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD74:;
    /* $AD74: 19 */ nes_instruction_boundary(0xAD74, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD77:;
    /* $AD77: 1B */ nes_instruction_boundary(0xAD77, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD7A:;
    /* $AD7A: 19 */ nes_instruction_boundary(0xAD7A, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD7D:;
    /* $AD7D: 1B */ nes_instruction_boundary(0xAD7D, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD80:;
    /* $AD80: 18 */ nes_instruction_boundary(0xAD80, 2); g_cpu.C = 0;
label_AD81:;
    /* $AD81: 1A */ nes_instruction_boundary(0xAD81, 2); /* NOP */
label_AD82:;
    /* $AD82: 18 */ nes_instruction_boundary(0xAD82, 2); g_cpu.C = 0;
label_AD83:;
    /* $AD83: 1A */ nes_instruction_boundary(0xAD83, 2); /* NOP */
label_AD84:;
    /* $AD84: 18 */ nes_instruction_boundary(0xAD84, 2); g_cpu.C = 0;
label_AD85:;
    /* $AD85: 1A */ nes_instruction_boundary(0xAD85, 2); /* NOP */
label_AD86:;
    /* $AD86: 18 */ nes_instruction_boundary(0xAD86, 2); g_cpu.C = 0;
label_AD87:;
    /* $AD87: 1A */ nes_instruction_boundary(0xAD87, 2); /* NOP */
label_AD88:;
    /* $AD88: 18 */ nes_instruction_boundary(0xAD88, 2); g_cpu.C = 0;
label_AD89:;
    /* $AD89: 1A */ nes_instruction_boundary(0xAD89, 2); /* NOP */
label_AD8A:;
    /* $AD8A: 18 */ nes_instruction_boundary(0xAD8A, 2); g_cpu.C = 0;
label_AD8B:;
    /* $AD8B: 1A */ nes_instruction_boundary(0xAD8B, 2); /* NOP */
label_AD8C:;
    /* $AD8C: 18 */ nes_instruction_boundary(0xAD8C, 2); g_cpu.C = 0;
label_AD8D:;
    /* $AD8D: 1A */ nes_instruction_boundary(0xAD8D, 2); /* NOP */
label_AD8E:;
    /* $AD8E: 18 */ nes_instruction_boundary(0xAD8E, 2); g_cpu.C = 0;
label_AD8F:;
    /* $AD8F: 1A */ nes_instruction_boundary(0xAD8F, 2); /* NOP */
label_AD90:;
    /* $AD90: 19 */ nes_instruction_boundary(0xAD90, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD93:;
    /* $AD93: 1B */ nes_instruction_boundary(0xAD93, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD96:;
    /* $AD96: 19 */ nes_instruction_boundary(0xAD96, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD99:;
    /* $AD99: 1B */ nes_instruction_boundary(0xAD99, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD9C:;
    /* $AD9C: 19 */ nes_instruction_boundary(0xAD9C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD9F:;
    /* $AD9F: 1B */ nes_instruction_boundary(0xAD9F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ADA2:;
    /* $ADA2: 18 */ nes_instruction_boundary(0xADA2, 2); g_cpu.C = 0;
label_ADA3:;
    /* $ADA3: 40 */ nes_instruction_boundary(0xADA3, 6); /* RTI */ g_rti_source = 0xADA3; g_rti_bank = 2; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_960D_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_960D_b2");
#endif
label_960D:;
    /* $960D: 81 */ nes_instruction_boundary(0x960D, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_960F:;
    /* $960F: 81 */ nes_instruction_boundary(0x960F, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9611:;
    /* $9611: 81 */ nes_instruction_boundary(0x9611, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9613:;
    /* $9613: 80 */ nes_instruction_boundary(0x9613, 2); /* NOP */
label_9615:;
    /* $9615: AC */ nes_instruction_boundary(0x9615, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9618:;
    /* $9618: 81 */ nes_instruction_boundary(0x9618, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961A:;
    /* $961A: 81 */ nes_instruction_boundary(0x961A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961C:;
    /* $961C: 81 */ nes_instruction_boundary(0x961C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961E:;
    /* $961E: 81 */ nes_instruction_boundary(0x961E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9620:;
    /* $9620: 81 */ nes_instruction_boundary(0x9620, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_9622:;
    /* $9622: B4 */ nes_instruction_boundary(0x9622, 4); g_cpu.Y = nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9624:;
    /* $9624: AF */ nes_instruction_boundary(0x9624, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9627:;
    /* $9627: 81 */ nes_instruction_boundary(0x9627, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9629:;
    /* $9629: 81 */ nes_instruction_boundary(0x9629, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_962B:;
    /* $962B: 81 */ nes_instruction_boundary(0x962B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_962D:;
    /* $962D: 81 */ nes_instruction_boundary(0x962D, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_962F:;
    /* $962F: B5 */ nes_instruction_boundary(0x962F, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9631:;
    /* $9631: 81 */ nes_instruction_boundary(0x9631, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9633:;
    /* $9633: AC */ nes_instruction_boundary(0x9633, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9636:;
    /* $9636: 81 */ nes_instruction_boundary(0x9636, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9638:;
    /* $9638: 81 */ nes_instruction_boundary(0x9638, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_963A:;
    /* $963A: 81 */ nes_instruction_boundary(0x963A, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_963C:;
    /* $963C: B4 */ nes_instruction_boundary(0x963C, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_963E:;
    /* $963E: 81 */ nes_instruction_boundary(0x963E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9640:;
    /* $9640: 81 */ nes_instruction_boundary(0x9640, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9642:;
    /* $9642: AF */ nes_instruction_boundary(0x9642, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9645:;
    /* $9645: 81 */ nes_instruction_boundary(0x9645, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9647:;
    /* $9647: 81 */ nes_instruction_boundary(0x9647, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9649:;
    /* $9649: B5 */ nes_instruction_boundary(0x9649, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_964B:;
    /* $964B: 81 */ nes_instruction_boundary(0x964B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964D:;
    /* $964D: 81 */ nes_instruction_boundary(0x964D, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964F:;
    /* $964F: 81 */ nes_instruction_boundary(0x964F, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9651:;
    /* $9651: AC */ nes_instruction_boundary(0x9651, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9654:;
    /* $9654: 81 */ nes_instruction_boundary(0x9654, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_9656:;
    /* $9656: B4 */ nes_instruction_boundary(0x9656, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9658:;
    /* $9658: 81 */ nes_instruction_boundary(0x9658, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965A:;
    /* $965A: 81 */ nes_instruction_boundary(0x965A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965C:;
    /* $965C: 81 */ nes_instruction_boundary(0x965C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965E:;
    /* $965E: 81 */ nes_instruction_boundary(0x965E, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9660:;
    /* $9660: AF */ nes_instruction_boundary(0x9660, 4); g_cpu.A = g_cpu.X = nes_read(0xB3B1); FLAG_NZ(g_cpu.A);
label_9663:;
    /* $9663: B5 */ nes_instruction_boundary(0x9663, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9665:;
    /* $9665: 81 */ nes_instruction_boundary(0x9665, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9667:;
    /* $9667: 81 */ nes_instruction_boundary(0x9667, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9669:;
    /* $9669: 81 */ nes_instruction_boundary(0x9669, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966B:;
    /* $966B: 81 */ nes_instruction_boundary(0x966B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966D:;
    /* $966D: 81 */ nes_instruction_boundary(0x966D, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_966F:;
    /* $966F: AC */ nes_instruction_boundary(0x966F, 4); g_cpu.Y = nes_read(0xB6B4); FLAG_NZ(g_cpu.Y);
label_9672:;
    /* $9672: 81 */ nes_instruction_boundary(0x9672, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9674:;
    /* $9674: 81 */ nes_instruction_boundary(0x9674, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9676:;
    /* $9676: 81 */ nes_instruction_boundary(0x9676, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9678:;
    /* $9678: 81 */ nes_instruction_boundary(0x9678, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967A:;
    /* $967A: 81 */ nes_instruction_boundary(0x967A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967C:;
    /* $967C: B3 */ nes_instruction_boundary(0x967C, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_967E:;
    /* $967E: AF */ nes_instruction_boundary(0x967E, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9681:;
    /* $9681: 81 */ nes_instruction_boundary(0x9681, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9683:;
    /* $9683: 81 */ nes_instruction_boundary(0x9683, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9685:;
    /* $9685: 81 */ nes_instruction_boundary(0x9685, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9687:;
    /* $9687: 81 */ nes_instruction_boundary(0x9687, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9689:;
    /* $9689: B2 */ nes_instruction_boundary(0x9689, 2); /* ILLEGAL $B2 — skip 1 */
label_968A:;
    /* $968A: B4 */ nes_instruction_boundary(0x968A, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_968C:;
    /* $968C: B0 */ nes_instruction_boundary(0x968C, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x963A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_963A;
    }
label_968E:;
    /* $968E: AE */ nes_instruction_boundary(0x968E, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9691:;
    /* $9691: 81 */ nes_instruction_boundary(0x9691, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9693:;
    /* $9693: 81 */ nes_instruction_boundary(0x9693, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9695:;
    /* $9695: 81 */ nes_instruction_boundary(0x9695, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9697:;
    /* $9697: B5 */ nes_instruction_boundary(0x9697, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: 81 */ nes_instruction_boundary(0x9699, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_969B:;
    /* $969B: AD */ nes_instruction_boundary(0x969B, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 81 */ nes_instruction_boundary(0x969E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A0:;
    /* $96A0: 81 */ nes_instruction_boundary(0x96A0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A2:;
    /* $96A2: 81 */ nes_instruction_boundary(0x96A2, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A4:;
    /* $96A4: B4 */ nes_instruction_boundary(0x96A4, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96A6:;
    /* $96A6: 81 */ nes_instruction_boundary(0x96A6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A8:;
    /* $96A8: 81 */ nes_instruction_boundary(0x96A8, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96AA:;
    /* $96AA: B0 */ nes_instruction_boundary(0x96AA, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9658, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9658;
    }
label_96AC:;
    /* $96AC: AE */ nes_instruction_boundary(0x96AC, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_96AF:;
    /* $96AF: 81 */ nes_instruction_boundary(0x96AF, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B1:;
    /* $96B1: B5 */ nes_instruction_boundary(0x96B1, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B3:;
    /* $96B3: 81 */ nes_instruction_boundary(0x96B3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B5:;
    /* $96B5: 81 */ nes_instruction_boundary(0x96B5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B7:;
    /* $96B7: 81 */ nes_instruction_boundary(0x96B7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B9:;
    /* $96B9: AD */ nes_instruction_boundary(0x96B9, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 81 */ nes_instruction_boundary(0x96BC, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96BE:;
    /* $96BE: B4 */ nes_instruction_boundary(0x96BE, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96C0:;
    /* $96C0: 81 */ nes_instruction_boundary(0x96C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C2:;
    /* $96C2: 81 */ nes_instruction_boundary(0x96C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C4:;
    /* $96C4: 81 */ nes_instruction_boundary(0x96C4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C6:;
    /* $96C6: 81 */ nes_instruction_boundary(0x96C6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C8:;
    /* $96C8: B0 */ nes_instruction_boundary(0x96C8, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9676, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9676;
    }
label_96CA:;
    /* $96CA: AE */ nes_instruction_boundary(0x96CA, 4); g_cpu.X = nes_read(0xB7B5); FLAG_NZ(g_cpu.X);
label_96CD:;
    /* $96CD: 81 */ nes_instruction_boundary(0x96CD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96CF:;
    /* $96CF: 81 */ nes_instruction_boundary(0x96CF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D1:;
    /* $96D1: 81 */ nes_instruction_boundary(0x96D1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D3:;
    /* $96D3: 81 */ nes_instruction_boundary(0x96D3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D5:;
    /* $96D5: 81 */ nes_instruction_boundary(0x96D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D7:;
    /* $96D7: AD */ nes_instruction_boundary(0x96D7, 4); g_cpu.A = nes_read(0x00AF); FLAG_NZ(g_cpu.A);
label_96DA:;
    /* $96DA: DB */ nes_instruction_boundary(0x96DA, 7); { uint16_t a=(0x81B1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96DD:;
    /* $96DD: 81 */ nes_instruction_boundary(0x96DD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96DF:;
    /* $96DF: 81 */ nes_instruction_boundary(0x96DF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E1:;
    /* $96E1: 81 */ nes_instruction_boundary(0x96E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E3:;
    /* $96E3: 81 */ nes_instruction_boundary(0x96E3, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E5:;
    /* $96E5: DF */ nes_instruction_boundary(0x96E5, 7); { uint16_t a=(0xDA00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96E8:;
    /* $96E8: 00 */ nes_instruction_boundary(0x96E8, 7); nes_brk_executed(0x96E8); return;
}

void func_9662_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9662_b2");
#endif
label_9662:;
    /* $9662: B3 */ nes_instruction_boundary(0x9662, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9664:;
    /* $9664: B7 */ nes_instruction_boundary(0x9664, 4); g_cpu.A = g_cpu.X = nes_read((0x81 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_9666:;
    /* $9666: 81 */ nes_instruction_boundary(0x9666, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9668:;
    /* $9668: 81 */ nes_instruction_boundary(0x9668, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966A:;
    /* $966A: 81 */ nes_instruction_boundary(0x966A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966C:;
    /* $966C: 81 */ nes_instruction_boundary(0x966C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966E:;
    /* $966E: B0 */ nes_instruction_boundary(0x966E, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x161C), 2); return; }
label_9670:;
    /* $9670: B4 */ nes_instruction_boundary(0x9670, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9672:;
    /* $9672: 81 */ nes_instruction_boundary(0x9672, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9674:;
    /* $9674: 81 */ nes_instruction_boundary(0x9674, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9676:;
    /* $9676: 81 */ nes_instruction_boundary(0x9676, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9678:;
    /* $9678: 81 */ nes_instruction_boundary(0x9678, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967A:;
    /* $967A: 81 */ nes_instruction_boundary(0x967A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967C:;
    /* $967C: B3 */ nes_instruction_boundary(0x967C, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_967E:;
    /* $967E: AF */ nes_instruction_boundary(0x967E, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9681:;
    /* $9681: 81 */ nes_instruction_boundary(0x9681, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9683:;
    /* $9683: 81 */ nes_instruction_boundary(0x9683, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9685:;
    /* $9685: 81 */ nes_instruction_boundary(0x9685, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9687:;
    /* $9687: 81 */ nes_instruction_boundary(0x9687, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9689:;
    /* $9689: B2 */ nes_instruction_boundary(0x9689, 2); /* ILLEGAL $B2 — skip 1 */
label_968A:;
    /* $968A: B4 */ nes_instruction_boundary(0x968A, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_968C:;
    /* $968C: B0 */ nes_instruction_boundary(0x968C, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x163A), 2); return; }
label_968E:;
    /* $968E: AE */ nes_instruction_boundary(0x968E, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9691:;
    /* $9691: 81 */ nes_instruction_boundary(0x9691, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9693:;
    /* $9693: 81 */ nes_instruction_boundary(0x9693, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9695:;
    /* $9695: 81 */ nes_instruction_boundary(0x9695, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9697:;
    /* $9697: B5 */ nes_instruction_boundary(0x9697, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: 81 */ nes_instruction_boundary(0x9699, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_969B:;
    /* $969B: AD */ nes_instruction_boundary(0x969B, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 81 */ nes_instruction_boundary(0x969E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A0:;
    /* $96A0: 81 */ nes_instruction_boundary(0x96A0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A2:;
    /* $96A2: 81 */ nes_instruction_boundary(0x96A2, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A4:;
    /* $96A4: B4 */ nes_instruction_boundary(0x96A4, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96A6:;
    /* $96A6: 81 */ nes_instruction_boundary(0x96A6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A8:;
    /* $96A8: 81 */ nes_instruction_boundary(0x96A8, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96AA:;
    /* $96AA: B0 */ nes_instruction_boundary(0x96AA, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1658), 2); return; }
label_96AC:;
    /* $96AC: AE */ nes_instruction_boundary(0x96AC, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_96AF:;
    /* $96AF: 81 */ nes_instruction_boundary(0x96AF, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B1:;
    /* $96B1: B5 */ nes_instruction_boundary(0x96B1, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B3:;
    /* $96B3: 81 */ nes_instruction_boundary(0x96B3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B5:;
    /* $96B5: 81 */ nes_instruction_boundary(0x96B5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B7:;
    /* $96B7: 81 */ nes_instruction_boundary(0x96B7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B9:;
    /* $96B9: AD */ nes_instruction_boundary(0x96B9, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 81 */ nes_instruction_boundary(0x96BC, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96BE:;
    /* $96BE: B4 */ nes_instruction_boundary(0x96BE, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96C0:;
    /* $96C0: 81 */ nes_instruction_boundary(0x96C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C2:;
    /* $96C2: 81 */ nes_instruction_boundary(0x96C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C4:;
    /* $96C4: 81 */ nes_instruction_boundary(0x96C4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C6:;
    /* $96C6: 81 */ nes_instruction_boundary(0x96C6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C8:;
    /* $96C8: B0 */ nes_instruction_boundary(0x96C8, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9676, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9676;
    }
label_96CA:;
    /* $96CA: AE */ nes_instruction_boundary(0x96CA, 4); g_cpu.X = nes_read(0xB7B5); FLAG_NZ(g_cpu.X);
label_96CD:;
    /* $96CD: 81 */ nes_instruction_boundary(0x96CD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96CF:;
    /* $96CF: 81 */ nes_instruction_boundary(0x96CF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D1:;
    /* $96D1: 81 */ nes_instruction_boundary(0x96D1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D3:;
    /* $96D3: 81 */ nes_instruction_boundary(0x96D3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D5:;
    /* $96D5: 81 */ nes_instruction_boundary(0x96D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D7:;
    /* $96D7: AD */ nes_instruction_boundary(0x96D7, 4); g_cpu.A = nes_read(0x00AF); FLAG_NZ(g_cpu.A);
label_96DA:;
    /* $96DA: DB */ nes_instruction_boundary(0x96DA, 7); { uint16_t a=(0x81B1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96DD:;
    /* $96DD: 81 */ nes_instruction_boundary(0x96DD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96DF:;
    /* $96DF: 81 */ nes_instruction_boundary(0x96DF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E1:;
    /* $96E1: 81 */ nes_instruction_boundary(0x96E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E3:;
    /* $96E3: 81 */ nes_instruction_boundary(0x96E3, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E5:;
    /* $96E5: DF */ nes_instruction_boundary(0x96E5, 7); { uint16_t a=(0xDA00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96E8:;
    /* $96E8: 00 */ nes_instruction_boundary(0x96E8, 7); nes_brk_executed(0x96E8); return;
}

void func_A825_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A825_b2");
#endif
label_A825:;
    /* $A825: 1A */ nes_instruction_boundary(0xA825, 2); /* NOP */
label_A826:;
    /* $A826: 18 */ nes_instruction_boundary(0xA826, 2); g_cpu.C = 0;
label_A827:;
    /* $A827: 1A */ nes_instruction_boundary(0xA827, 2); /* NOP */
label_A828:;
    /* $A828: 18 */ nes_instruction_boundary(0xA828, 2); g_cpu.C = 0;
label_A829:;
    /* $A829: 1A */ nes_instruction_boundary(0xA829, 2); /* NOP */
label_A82A:;
    /* $A82A: 18 */ nes_instruction_boundary(0xA82A, 2); g_cpu.C = 0;
label_A82B:;
    /* $A82B: 1A */ nes_instruction_boundary(0xA82B, 2); /* NOP */
label_A82C:;
    /* $A82C: 18 */ nes_instruction_boundary(0xA82C, 2); g_cpu.C = 0;
label_A82D:;
    /* $A82D: 1A */ nes_instruction_boundary(0xA82D, 2); /* NOP */
label_A82E:;
    /* $A82E: 18 */ nes_instruction_boundary(0xA82E, 2); g_cpu.C = 0;
label_A82F:;
    /* $A82F: 1A */ nes_instruction_boundary(0xA82F, 2); /* NOP */
label_A830:;
    /* $A830: 19 */ nes_instruction_boundary(0xA830, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A833:;
    /* $A833: 1B */ nes_instruction_boundary(0xA833, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A836:;
    /* $A836: 19 */ nes_instruction_boundary(0xA836, 4); g_cpu.A |= nes_read((0x1C1B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A839:;
    /* $A839: 1D */ nes_instruction_boundary(0xA839, 4); g_cpu.A |= nes_read((0x1B19 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A83C:;
    /* $A83C: 19 */ nes_instruction_boundary(0xA83C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A83F:;
    /* $A83F: 1B */ nes_instruction_boundary(0xA83F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A842:;
    /* $A842: 18 */ nes_instruction_boundary(0xA842, 2); g_cpu.C = 0;
label_A843:;
    /* $A843: 1A */ nes_instruction_boundary(0xA843, 2); /* NOP */
label_A844:;
    /* $A844: 18 */ nes_instruction_boundary(0xA844, 2); g_cpu.C = 0;
label_A845:;
    /* $A845: 1A */ nes_instruction_boundary(0xA845, 2); /* NOP */
label_A846:;
    /* $A846: 18 */ nes_instruction_boundary(0xA846, 2); g_cpu.C = 0;
label_A847:;
    /* $A847: 1A */ nes_instruction_boundary(0xA847, 2); /* NOP */
label_A848:;
    /* $A848: 02 */ nes_instruction_boundary(0xA848, 2); /* ILLEGAL $02 — skip 1 */
label_A849:;
    /* $A849: 05 */ nes_instruction_boundary(0xA849, 3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A84B:;
    /* $A84B: 1A */ nes_instruction_boundary(0xA84B, 2); /* NOP */
label_A84C:;
    /* $A84C: 18 */ nes_instruction_boundary(0xA84C, 2); g_cpu.C = 0;
label_A84D:;
    /* $A84D: 1A */ nes_instruction_boundary(0xA84D, 2); /* NOP */
label_A84E:;
    /* $A84E: 18 */ nes_instruction_boundary(0xA84E, 2); g_cpu.C = 0;
label_A84F:;
    /* $A84F: 1A */ nes_instruction_boundary(0xA84F, 2); /* NOP */
label_A850:;
    /* $A850: 19 */ nes_instruction_boundary(0xA850, 4); g_cpu.A |= nes_read((0x1C1B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A853:;
    /* $A853: 1D */ nes_instruction_boundary(0xA853, 4); g_cpu.A |= nes_read((0x1B19 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A856:;
    /* $A856: 19 */ nes_instruction_boundary(0xA856, 4); g_cpu.A |= nes_read((0x031B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A859:;
    /* $A859: 06 */ nes_instruction_boundary(0xA859, 5); { uint16_t a=0x19; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A85B:;
    /* $A85B: 1B */ nes_instruction_boundary(0xA85B, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A85E:;
    /* $A85E: 19 */ nes_instruction_boundary(0xA85E, 4); g_cpu.A |= nes_read((0x181B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A861:;
    /* $A861: 1A */ nes_instruction_boundary(0xA861, 2); /* NOP */
label_A862:;
    /* $A862: 02 */ nes_instruction_boundary(0xA862, 2); /* ILLEGAL $02 — skip 1 */
label_A863:;
    /* $A863: 05 */ nes_instruction_boundary(0xA863, 3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A865:;
    /* $A865: 1A */ nes_instruction_boundary(0xA865, 2); /* NOP */
label_A866:;
    /* $A866: 18 */ nes_instruction_boundary(0xA866, 2); g_cpu.C = 0;
label_A867:;
    /* $A867: 1A */ nes_instruction_boundary(0xA867, 2); /* NOP */
label_A868:;
    /* $A868: 02 */ nes_instruction_boundary(0xA868, 2); /* ILLEGAL $02 — skip 1 */
label_A869:;
    /* $A869: 05 */ nes_instruction_boundary(0xA869, 3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A86B:;
    /* $A86B: 1A */ nes_instruction_boundary(0xA86B, 2); /* NOP */
label_A86C:;
    /* $A86C: 18 */ nes_instruction_boundary(0xA86C, 2); g_cpu.C = 0;
label_A86D:;
    /* $A86D: 1A */ nes_instruction_boundary(0xA86D, 2); /* NOP */
label_A86E:;
    /* $A86E: 18 */ nes_instruction_boundary(0xA86E, 2); g_cpu.C = 0;
label_A86F:;
    /* $A86F: 1A */ nes_instruction_boundary(0xA86F, 2); /* NOP */
label_A870:;
    /* $A870: 19 */ nes_instruction_boundary(0xA870, 4); g_cpu.A |= nes_read((0x031B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A873:;
    /* $A873: 06 */ nes_instruction_boundary(0xA873, 5); { uint16_t a=0x19; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A875:;
    /* $A875: 1B */ nes_instruction_boundary(0xA875, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A878:;
    /* $A878: 03 */ nes_instruction_boundary(0xA878, 8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A87A:;
    /* $A87A: 1C */ nes_instruction_boundary(0xA87A, 4); (void)nes_read((0x191D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A87D:;
    /* $A87D: 1B */ nes_instruction_boundary(0xA87D, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A880:;
    /* $A880: 18 */ nes_instruction_boundary(0xA880, 2); g_cpu.C = 0;
label_A881:;
    /* $A881: 1A */ nes_instruction_boundary(0xA881, 2); /* NOP */
label_A882:;
    /* $A882: 02 */ nes_instruction_boundary(0xA882, 2); /* ILLEGAL $02 — skip 1 */
label_A883:;
    /* $A883: 05 */ nes_instruction_boundary(0xA883, 3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A885:;
    /* $A885: 1A */ nes_instruction_boundary(0xA885, 2); /* NOP */
label_A886:;
    /* $A886: 18 */ nes_instruction_boundary(0xA886, 2); g_cpu.C = 0;
label_A887:;
    /* $A887: 1A */ nes_instruction_boundary(0xA887, 2); /* NOP */
label_A888:;
    /* $A888: 02 */ nes_instruction_boundary(0xA888, 2); /* ILLEGAL $02 — skip 1 */
label_A889:;
    /* $A889: 05 */ nes_instruction_boundary(0xA889, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A88B:;
    /* $A88B: 05 */ nes_instruction_boundary(0xA88B, 3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A88D:;
    /* $A88D: 1A */ nes_instruction_boundary(0xA88D, 2); /* NOP */
label_A88E:;
    /* $A88E: 18 */ nes_instruction_boundary(0xA88E, 2); g_cpu.C = 0;
label_A88F:;
    /* $A88F: 1A */ nes_instruction_boundary(0xA88F, 2); /* NOP */
label_A890:;
    /* $A890: 1C */ nes_instruction_boundary(0xA890, 4); (void)nes_read((0x031D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A893:;
    /* $A893: 06 */ nes_instruction_boundary(0xA893, 5); { uint16_t a=0x19; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A895:;
    /* $A895: 1B */ nes_instruction_boundary(0xA895, 7); { uint16_t a=(0x1D1C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A898:;
    /* $A898: 03 */ nes_instruction_boundary(0xA898, 8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A89A:;
    /* $A89A: 03 */ nes_instruction_boundary(0xA89A, 8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A89C:;
    /* $A89C: 19 */ nes_instruction_boundary(0xA89C, 4); g_cpu.A |= nes_read((0x1C1B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A89F:;
    /* $A89F: 1D */ nes_instruction_boundary(0xA89F, 4); g_cpu.A |= nes_read((0x0502 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A2:;
    /* $A8A2: 02 */ nes_instruction_boundary(0xA8A2, 2); /* ILLEGAL $02 — skip 1 */
label_A8A3:;
    /* $A8A3: 05 */ nes_instruction_boundary(0xA8A3, 3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A8A5:;
    /* $A8A5: 1A */ nes_instruction_boundary(0xA8A5, 2); /* NOP */
label_A8A6:;
    /* $A8A6: 02 */ nes_instruction_boundary(0xA8A6, 2); /* ILLEGAL $02 — skip 1 */
label_A8A7:;
    /* $A8A7: 05 */ nes_instruction_boundary(0xA8A7, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A8A9:;
    /* $A8A9: 05 */ nes_instruction_boundary(0xA8A9, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A8AB:;
    /* $A8AB: 05 */ nes_instruction_boundary(0xA8AB, 3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A8AD:;
    /* $A8AD: 1A */ nes_instruction_boundary(0xA8AD, 2); /* NOP */
label_A8AE:;
    /* $A8AE: 02 */ nes_instruction_boundary(0xA8AE, 2); /* ILLEGAL $02 — skip 1 */
label_A8AF:;
    /* $A8AF: 05 */ nes_instruction_boundary(0xA8AF, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A8B1:;
    /* $A8B1: 06 */ nes_instruction_boundary(0xA8B1, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8B3:;
    /* $A8B3: 06 */ nes_instruction_boundary(0xA8B3, 5); { uint16_t a=0x19; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8B5:;
    /* $A8B5: 1B */ nes_instruction_boundary(0xA8B5, 7); { uint16_t a=(0x0603 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8B8:;
    /* $A8B8: 03 */ nes_instruction_boundary(0xA8B8, 8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8BA:;
    /* $A8BA: 03 */ nes_instruction_boundary(0xA8BA, 8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8BC:;
    /* $A8BC: 19 */ nes_instruction_boundary(0xA8BC, 4); g_cpu.A |= nes_read((0x031B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8BF:;
    /* $A8BF: 06 */ nes_instruction_boundary(0xA8BF, 5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8C1:;
    /* $A8C1: 05 */ nes_instruction_boundary(0xA8C1, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A8C3:;
    /* $A8C3: 05 */ nes_instruction_boundary(0xA8C3, 3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A8C5:;
    /* $A8C5: 1A */ nes_instruction_boundary(0xA8C5, 2); /* NOP */
label_A8C6:;
    /* $A8C6: 02 */ nes_instruction_boundary(0xA8C6, 2); /* ILLEGAL $02 — skip 1 */
label_A8C7:;
    /* $A8C7: 05 */ nes_instruction_boundary(0xA8C7, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A8C9:;
    /* $A8C9: 05 */ nes_instruction_boundary(0xA8C9, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A8CB:;
    /* $A8CB: 05 */ nes_instruction_boundary(0xA8CB, 3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A8CD:;
    /* $A8CD: 1A */ nes_instruction_boundary(0xA8CD, 2); /* NOP */
label_A8CE:;
    /* $A8CE: 02 */ nes_instruction_boundary(0xA8CE, 2); /* ILLEGAL $02 — skip 1 */
label_A8CF:;
    /* $A8CF: 05 */ nes_instruction_boundary(0xA8CF, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A8D1:;
    /* $A8D1: 06 */ nes_instruction_boundary(0xA8D1, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8D3:;
    /* $A8D3: 06 */ nes_instruction_boundary(0xA8D3, 5); { uint16_t a=0x1C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8D5:;
    /* $A8D5: 1D */ nes_instruction_boundary(0xA8D5, 4); g_cpu.A |= nes_read((0x0603 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D8:;
    /* $A8D8: 03 */ nes_instruction_boundary(0xA8D8, 8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8DA:;
    /* $A8DA: 03 */ nes_instruction_boundary(0xA8DA, 8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A8DC:;
    /* $A8DC: 19 */ nes_instruction_boundary(0xA8DC, 4); g_cpu.A |= nes_read((0x031B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8DF:;
    /* $A8DF: 06 */ nes_instruction_boundary(0xA8DF, 5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8E1:;
    /* $A8E1: 05 */ nes_instruction_boundary(0xA8E1, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A8E3:;
    /* $A8E3: 05 */ nes_instruction_boundary(0xA8E3, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A8E5:;
    /* $A8E5: 05 */ nes_instruction_boundary(0xA8E5, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A8E7:;
    /* $A8E7: 05 */ nes_instruction_boundary(0xA8E7, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A8E9:;
    /* $A8E9: 05 */ nes_instruction_boundary(0xA8E9, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A8EB:;
    /* $A8EB: 05 */ nes_instruction_boundary(0xA8EB, 3); g_cpu.A |= nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A8ED:;
    /* $A8ED: 1A */ nes_instruction_boundary(0xA8ED, 2); /* NOP */
label_A8EE:;
    /* $A8EE: 02 */ nes_instruction_boundary(0xA8EE, 2); /* ILLEGAL $02 — skip 1 */
label_A8EF:;
    /* $A8EF: 05 */ nes_instruction_boundary(0xA8EF, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A8F1:;
    /* $A8F1: 06 */ nes_instruction_boundary(0xA8F1, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F3:;
    /* $A8F3: 06 */ nes_instruction_boundary(0xA8F3, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F5:;
    /* $A8F5: 06 */ nes_instruction_boundary(0xA8F5, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F7:;
    /* $A8F7: 06 */ nes_instruction_boundary(0xA8F7, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F9:;
    /* $A8F9: 06 */ nes_instruction_boundary(0xA8F9, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8FB:;
    /* $A8FB: 06 */ nes_instruction_boundary(0xA8FB, 5); { uint16_t a=0x1C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8FD:;
    /* $A8FD: 1D */ nes_instruction_boundary(0xA8FD, 4); g_cpu.A |= nes_read((0x0603 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A900:;
    /* $A900: 1E */ nes_instruction_boundary(0xA900, 7); { uint16_t a=(0x201F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A903:;
    /* $A903: 20 */ nes_instruction_boundary(0xA903, 6); nes_dispatch_call(0x2020, -1);
label_A906:;
    /* $A906: 20 */ nes_instruction_boundary(0xA906, 6); nes_dispatch_call(0x2020, -1);
label_A909:;
    /* $A909: 20 */ nes_instruction_boundary(0xA909, 6); nes_dispatch_call(0x2020, -1);
label_A90C:;
    /* $A90C: 20 */ nes_instruction_boundary(0xA90C, 6); nes_dispatch_call(0x1E20, -1);
label_A90F:;
    /* $A90F: 1F */ nes_instruction_boundary(0xA90F, 7); { uint16_t a=(0x1B19 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A912:;
    /* $A912: 20 */ nes_instruction_boundary(0xA912, 6); nes_dispatch_call(0x2020, -1);
label_A915:;
    /* $A915: 20 */ nes_instruction_boundary(0xA915, 6); nes_dispatch_call(0x2020, -1);
label_A918:;
    /* $A918: 20 */ nes_instruction_boundary(0xA918, 6); nes_dispatch_call(0x2020, -1);
label_A91B:;
    /* $A91B: 20 */ nes_instruction_boundary(0xA91B, 6); nes_dispatch_call(0x2020, -1);
label_A91E:;
    /* $A91E: 19 */ nes_instruction_boundary(0xA91E, 4); g_cpu.A |= nes_read((0x181B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A921:;
    /* $A921: 1A */ nes_instruction_boundary(0xA921, 2); /* NOP */
label_A922:;
    /* $A922: 20 */ nes_instruction_boundary(0xA922, 6); nes_dispatch_call(0x2020, -1);
label_A925:;
    /* $A925: 20 */ nes_instruction_boundary(0xA925, 6); nes_dispatch_call(0x2020, -1);
label_A928:;
    /* $A928: 20 */ nes_instruction_boundary(0xA928, 6); nes_dispatch_call(0x2020, -1);
label_A92B:;
    /* $A92B: 20 */ nes_instruction_boundary(0xA92B, 6); nes_dispatch_call(0x2020, -1);
label_A92E:;
    /* $A92E: 18 */ nes_instruction_boundary(0xA92E, 2); g_cpu.C = 0;
label_A92F:;
    /* $A92F: 1A */ nes_instruction_boundary(0xA92F, 2); /* NOP */
label_A930:;
    /* $A930: 19 */ nes_instruction_boundary(0xA930, 4); g_cpu.A |= nes_read((0x201B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A933:;
    /* $A933: 20 */ nes_instruction_boundary(0xA933, 6); nes_dispatch_call(0x2020, -1);
label_A936:;
    /* $A936: 20 */ nes_instruction_boundary(0xA936, 6); nes_dispatch_call(0x2020, -1);
label_A939:;
    /* $A939: 20 */ nes_instruction_boundary(0xA939, 6); nes_dispatch_call(0x2020, -1);
label_A93C:;
    /* $A93C: 20 */ nes_instruction_boundary(0xA93C, 6); nes_dispatch_call(0x1920, -1);
label_A93F:;
    /* $A93F: 1B */ nes_instruction_boundary(0xA93F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A942:;
    /* $A942: 21 */ nes_instruction_boundary(0xA942, 6); g_cpu.A &= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A944:;
    /* $A944: 20 */ nes_instruction_boundary(0xA944, 6); nes_dispatch_call(0x1E20, -1);
label_A947:;
    /* $A947: 1F */ nes_instruction_boundary(0xA947, 7); { uint16_t a=(0x1F1E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A94A:;
    /* $A94A: 20 */ nes_instruction_boundary(0xA94A, 6); nes_dispatch_call(0x1E20, -1);
label_A94D:;
    /* $A94D: 1F */ nes_instruction_boundary(0xA94D, 7); { uint16_t a=(0x1A18 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A950:;
    /* $A950: 19 */ nes_instruction_boundary(0xA950, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A953:;
    /* $A953: 1B */ nes_instruction_boundary(0xA953, 7); { uint16_t a=(0x2020 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A956:;
    /* $A956: 19 */ nes_instruction_boundary(0xA956, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A959:;
    /* $A959: 1B */ nes_instruction_boundary(0xA959, 7); { uint16_t a=(0x2020 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A95C:;
    /* $A95C: 19 */ nes_instruction_boundary(0xA95C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A95F:;
    /* $A95F: 1B */ nes_instruction_boundary(0xA95F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A962:;
    /* $A962: 18 */ nes_instruction_boundary(0xA962, 2); g_cpu.C = 0;
label_A963:;
    /* $A963: 1A */ nes_instruction_boundary(0xA963, 2); /* NOP */
label_A964:;
    /* $A964: 1E */ nes_instruction_boundary(0xA964, 7); { uint16_t a=(0x181F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A967:;
    /* $A967: 1A */ nes_instruction_boundary(0xA967, 2); /* NOP */
label_A968:;
    /* $A968: 18 */ nes_instruction_boundary(0xA968, 2); g_cpu.C = 0;
label_A969:;
    /* $A969: 1A */ nes_instruction_boundary(0xA969, 2); /* NOP */
label_A96A:;
    /* $A96A: 1E */ nes_instruction_boundary(0xA96A, 7); { uint16_t a=(0x181F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A96D:;
    /* $A96D: 1A */ nes_instruction_boundary(0xA96D, 2); /* NOP */
label_A96E:;
    /* $A96E: 18 */ nes_instruction_boundary(0xA96E, 2); g_cpu.C = 0;
label_A96F:;
    /* $A96F: 1A */ nes_instruction_boundary(0xA96F, 2); /* NOP */
label_A970:;
    /* $A970: 19 */ nes_instruction_boundary(0xA970, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A973:;
    /* $A973: 1B */ nes_instruction_boundary(0xA973, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A976:;
    /* $A976: 19 */ nes_instruction_boundary(0xA976, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A979:;
    /* $A979: 1B */ nes_instruction_boundary(0xA979, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A97C:;
    /* $A97C: 19 */ nes_instruction_boundary(0xA97C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A97F:;
    /* $A97F: 1B */ nes_instruction_boundary(0xA97F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A982:;
    /* $A982: 18 */ nes_instruction_boundary(0xA982, 2); g_cpu.C = 0;
label_A983:;
    /* $A983: 1A */ nes_instruction_boundary(0xA983, 2); /* NOP */
label_A984:;
    /* $A984: 18 */ nes_instruction_boundary(0xA984, 2); g_cpu.C = 0;
label_A985:;
    /* $A985: 1A */ nes_instruction_boundary(0xA985, 2); /* NOP */
label_A986:;
    /* $A986: 18 */ nes_instruction_boundary(0xA986, 2); g_cpu.C = 0;
label_A987:;
    /* $A987: 1A */ nes_instruction_boundary(0xA987, 2); /* NOP */
label_A988:;
    /* $A988: 18 */ nes_instruction_boundary(0xA988, 2); g_cpu.C = 0;
label_A989:;
    /* $A989: 1A */ nes_instruction_boundary(0xA989, 2); /* NOP */
label_A98A:;
    /* $A98A: 18 */ nes_instruction_boundary(0xA98A, 2); g_cpu.C = 0;
label_A98B:;
    /* $A98B: 1A */ nes_instruction_boundary(0xA98B, 2); /* NOP */
label_A98C:;
    /* $A98C: 18 */ nes_instruction_boundary(0xA98C, 2); g_cpu.C = 0;
label_A98D:;
    /* $A98D: 1A */ nes_instruction_boundary(0xA98D, 2); /* NOP */
label_A98E:;
    /* $A98E: 18 */ nes_instruction_boundary(0xA98E, 2); g_cpu.C = 0;
label_A98F:;
    /* $A98F: 1A */ nes_instruction_boundary(0xA98F, 2); /* NOP */
label_A990:;
    /* $A990: 19 */ nes_instruction_boundary(0xA990, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A993:;
    /* $A993: 1B */ nes_instruction_boundary(0xA993, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A996:;
    /* $A996: 19 */ nes_instruction_boundary(0xA996, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A999:;
    /* $A999: 1B */ nes_instruction_boundary(0xA999, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A99C:;
    /* $A99C: 19 */ nes_instruction_boundary(0xA99C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A99F:;
    /* $A99F: 1B */ nes_instruction_boundary(0xA99F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9A2:;
    /* $A9A2: 18 */ nes_instruction_boundary(0xA9A2, 2); g_cpu.C = 0;
label_A9A3:;
    /* $A9A3: 40 */ nes_instruction_boundary(0xA9A3, 6); /* RTI */ g_rti_source = 0xA9A3; g_rti_bank = 2; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B02D_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B02D_b2");
#endif
label_B02D:;
    /* $B02D: 20 */ nes_instruction_boundary(0xB02D, 6); nes_dispatch_call(0x1A18, -1);
label_B030:;
    /* $B030: 19 */ nes_instruction_boundary(0xB030, 4); g_cpu.A |= nes_read((0x201B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B033:;
    /* $B033: 20 */ nes_instruction_boundary(0xB033, 6); nes_dispatch_call(0x2C3A, -1);
label_B036:;
    /* $B036: 25 */ nes_instruction_boundary(0xB036, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B038:;
    /* $B038: 25 */ nes_instruction_boundary(0xB038, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B03A:;
    /* $B03A: 25 */ nes_instruction_boundary(0xB03A, 3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_B03C:;
    /* $B03C: 20 */ nes_instruction_boundary(0xB03C, 6); nes_dispatch_call(0x1920, -1);
label_B03F:;
    /* $B03F: 1B */ nes_instruction_boundary(0xB03F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B042:;
    /* $B042: 21 */ nes_instruction_boundary(0xB042, 6); g_cpu.A &= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B044:;
    /* $B044: 39 */ nes_instruction_boundary(0xB044, 4); g_cpu.A &= nes_read((0x242B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B047:;
    /* $B047: 2B */ nes_instruction_boundary(0xB047, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B049:;
    /* $B049: 2B */ nes_instruction_boundary(0xB049, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B04B:;
    /* $B04B: 32 */ nes_instruction_boundary(0xB04B, 2); /* ILLEGAL $32 — skip 1 */
label_B04C:;
    /* $B04C: 1E */ nes_instruction_boundary(0xB04C, 7); { uint16_t a=(0x181F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B04F:;
    /* $B04F: 1A */ nes_instruction_boundary(0xB04F, 2); /* NOP */
label_B050:;
    /* $B050: 19 */ nes_instruction_boundary(0xB050, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B053:;
    /* $B053: 1B */ nes_instruction_boundary(0xB053, 7); { uint16_t a=(0x2C3A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B056:;
    /* $B056: 25 */ nes_instruction_boundary(0xB056, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B058:;
    /* $B058: 25 */ nes_instruction_boundary(0xB058, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B05A:;
    /* $B05A: 25 */ nes_instruction_boundary(0xB05A, 3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_B05C:;
    /* $B05C: 19 */ nes_instruction_boundary(0xB05C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B05F:;
    /* $B05F: 1B */ nes_instruction_boundary(0xB05F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B062:;
    /* $B062: 18 */ nes_instruction_boundary(0xB062, 2); g_cpu.C = 0;
label_B063:;
    /* $B063: 1A */ nes_instruction_boundary(0xB063, 2); /* NOP */
label_B064:;
    /* $B064: 39 */ nes_instruction_boundary(0xB064, 4); g_cpu.A &= nes_read((0x242B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B067:;
    /* $B067: 2B */ nes_instruction_boundary(0xB067, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B069:;
    /* $B069: 2B */ nes_instruction_boundary(0xB069, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B06B:;
    /* $B06B: 32 */ nes_instruction_boundary(0xB06B, 2); /* ILLEGAL $32 — skip 1 */
label_B06C:;
    /* $B06C: 18 */ nes_instruction_boundary(0xB06C, 2); g_cpu.C = 0;
label_B06D:;
    /* $B06D: 1A */ nes_instruction_boundary(0xB06D, 2); /* NOP */
label_B06E:;
    /* $B06E: 18 */ nes_instruction_boundary(0xB06E, 2); g_cpu.C = 0;
label_B06F:;
    /* $B06F: 1A */ nes_instruction_boundary(0xB06F, 2); /* NOP */
label_B070:;
    /* $B070: 19 */ nes_instruction_boundary(0xB070, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B073:;
    /* $B073: 1B */ nes_instruction_boundary(0xB073, 7); { uint16_t a=(0x2C3A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B076:;
    /* $B076: 25 */ nes_instruction_boundary(0xB076, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B078:;
    /* $B078: 25 */ nes_instruction_boundary(0xB078, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B07A:;
    /* $B07A: 25 */ nes_instruction_boundary(0xB07A, 3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_B07C:;
    /* $B07C: 19 */ nes_instruction_boundary(0xB07C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B07F:;
    /* $B07F: 1B */ nes_instruction_boundary(0xB07F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B082:;
    /* $B082: 18 */ nes_instruction_boundary(0xB082, 2); g_cpu.C = 0;
label_B083:;
    /* $B083: 1A */ nes_instruction_boundary(0xB083, 2); /* NOP */
label_B084:;
    /* $B084: 39 */ nes_instruction_boundary(0xB084, 4); g_cpu.A &= nes_read((0x242B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B087:;
    /* $B087: 2B */ nes_instruction_boundary(0xB087, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B089:;
    /* $B089: 2B */ nes_instruction_boundary(0xB089, 2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B08B:;
    /* $B08B: 32 */ nes_instruction_boundary(0xB08B, 2); /* ILLEGAL $32 — skip 1 */
label_B08C:;
    /* $B08C: 18 */ nes_instruction_boundary(0xB08C, 2); g_cpu.C = 0;
label_B08D:;
    /* $B08D: 1A */ nes_instruction_boundary(0xB08D, 2); /* NOP */
label_B08E:;
    /* $B08E: 18 */ nes_instruction_boundary(0xB08E, 2); g_cpu.C = 0;
label_B08F:;
    /* $B08F: 1A */ nes_instruction_boundary(0xB08F, 2); /* NOP */
label_B090:;
    /* $B090: 19 */ nes_instruction_boundary(0xB090, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B093:;
    /* $B093: 1B */ nes_instruction_boundary(0xB093, 7); { uint16_t a=(0x2C3A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B096:;
    /* $B096: 25 */ nes_instruction_boundary(0xB096, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B098:;
    /* $B098: 25 */ nes_instruction_boundary(0xB098, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B09A:;
    /* $B09A: 25 */ nes_instruction_boundary(0xB09A, 3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_B09C:;
    /* $B09C: 19 */ nes_instruction_boundary(0xB09C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B09F:;
    /* $B09F: 1B */ nes_instruction_boundary(0xB09F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B0A2:;
    /* $B0A2: 18 */ nes_instruction_boundary(0xB0A2, 2); g_cpu.C = 0;
label_B0A3:;
    /* $B0A3: 40 */ nes_instruction_boundary(0xB0A3, 6); /* RTI */ g_rti_source = 0xB0A3; g_rti_bank = 2; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8788_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8788_b2");
#endif
label_8788:;
    /* $8788: 94 */ nes_instruction_boundary(0x8788, 4); nes_write((0x9F + g_cpu.X) & 0xFF, g_cpu.Y);
label_878A:;
    /* $878A: 95 */ nes_instruction_boundary(0x878A, 4); nes_write((0xA0 + g_cpu.X) & 0xFF, g_cpu.A);
label_878C:;
    /* $878C: 96 */ nes_instruction_boundary(0x878C, 4); nes_write((0xA1 + g_cpu.Y) & 0xFF, g_cpu.X);
label_878E:;
    /* $878E: 97 */ nes_instruction_boundary(0x878E, 4); nes_write((0xA2 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8790:;
    /* $8790: 98 */ nes_instruction_boundary(0x8790, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8791:;
    /* $8791: A3 */ nes_instruction_boundary(0x8791, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x99 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8793:;
    /* $8793: A4 */ nes_instruction_boundary(0x8793, 3); g_cpu.Y = nes_read(0x9A); FLAG_NZ(g_cpu.Y);
label_8795:;
    /* $8795: A5 */ nes_instruction_boundary(0x8795, 3); g_cpu.A = nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_8797:;
    /* $8797: A6 */ nes_instruction_boundary(0x8797, 3); g_cpu.X = nes_read(0x9C); FLAG_NZ(g_cpu.X);
label_8799:;
    /* $8799: A7 */ nes_instruction_boundary(0x8799, 3); g_cpu.A = g_cpu.X = nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_879B:;
    /* $879B: A8 */ nes_instruction_boundary(0x879B, 2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_879C:;
    /* $879C: 00 */ nes_instruction_boundary(0x879C, 7); nes_brk_executed(0x879C); return;
}

void func_A711_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A711_b2");
#endif
label_A711:;
    /* $A711: 06 */ nes_instruction_boundary(0xA711, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A713:;
    /* $A713: 06 */ nes_instruction_boundary(0xA713, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A715:;
    /* $A715: 06 */ nes_instruction_boundary(0xA715, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A717:;
    /* $A717: 06 */ nes_instruction_boundary(0xA717, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A719:;
    /* $A719: 06 */ nes_instruction_boundary(0xA719, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71B:;
    /* $A71B: 06 */ nes_instruction_boundary(0xA71B, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71D:;
    /* $A71D: 06 */ nes_instruction_boundary(0xA71D, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A71F:;
    /* $A71F: 06 */ nes_instruction_boundary(0xA71F, 5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A721:;
    /* $A721: 05 */ nes_instruction_boundary(0xA721, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A723:;
    /* $A723: 05 */ nes_instruction_boundary(0xA723, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A725:;
    /* $A725: 07 */ nes_instruction_boundary(0xA725, 5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A727:;
    /* $A727: 05 */ nes_instruction_boundary(0xA727, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A729:;
    /* $A729: 07 */ nes_instruction_boundary(0xA729, 5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A72B:;
    /* $A72B: 05 */ nes_instruction_boundary(0xA72B, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A72D:;
    /* $A72D: 05 */ nes_instruction_boundary(0xA72D, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A72F:;
    /* $A72F: 05 */ nes_instruction_boundary(0xA72F, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A731:;
    /* $A731: 06 */ nes_instruction_boundary(0xA731, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A733:;
    /* $A733: 0B */ nes_instruction_boundary(0xA733, 2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A735:;
    /* $A735: 0E */ nes_instruction_boundary(0xA735, 6); { uint16_t a=0x0B0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A738:;
    /* $A738: 04 */ nes_instruction_boundary(0xA738, 3); (void)nes_read(0x0E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A73A:;
    /* $A73A: 0F */ nes_instruction_boundary(0xA73A, 6); { uint16_t a=0x0306; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A73D:;
    /* $A73D: 06 */ nes_instruction_boundary(0xA73D, 5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A73F:;
    /* $A73F: 06 */ nes_instruction_boundary(0xA73F, 5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A741:;
    /* $A741: 05 */ nes_instruction_boundary(0xA741, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A743:;
    /* $A743: 0C */ nes_instruction_boundary(0xA743, 4); (void)nes_read(0x0001); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A746:;
    /* $A746: 10 */ nes_instruction_boundary(0xA746, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A754; }
label_A748:;
    /* $A748: 00 */ nes_instruction_boundary(0xA748, 7); nes_brk_executed(0xA748); return;
label_A749:;
    /* $A749: 00 */ nes_instruction_boundary(0xA749, 7); nes_brk_executed(0xA749); return;
label_A74A:;
    /* $A74A: 10 */ nes_instruction_boundary(0xA74A, 2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A751; }
label_A74C:;
    /* $A74C: 02 */ nes_instruction_boundary(0xA74C, 2); /* ILLEGAL $02 — skip 1 */
label_A74D:;
    /* $A74D: 05 */ nes_instruction_boundary(0xA74D, 3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A74F:;
    /* $A74F: 05 */ nes_instruction_boundary(0xA74F, 3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A751:;
    /* $A751: 06 */ nes_instruction_boundary(0xA751, 5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A753:;
    /* $A753: 08 */ nes_instruction_boundary(0xA753, 3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A754:;
    /* $A754: 00 */ nes_instruction_boundary(0xA754, 7); nes_brk_executed(0xA754); return;
}

void func_95F5_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95F5_b2");
#endif
label_95F5:;
    /* $95F5: 80 */ nes_instruction_boundary(0x95F5, 2); /* NOP */
label_95F7:;
    /* $95F7: 8A */ nes_instruction_boundary(0x95F7, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_95F8:;
    /* $95F8: 81 */ nes_instruction_boundary(0x95F8, 6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_95FA:;
    /* $95FA: 8F */ nes_instruction_boundary(0x95FA, 4); nes_write(0x8191, g_cpu.A & g_cpu.X); /* SAX */
label_95FD:;
    /* $95FD: 81 */ nes_instruction_boundary(0x95FD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95FF:;
    /* $95FF: 81 */ nes_instruction_boundary(0x95FF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9601:;
    /* $9601: 81 */ nes_instruction_boundary(0x9601, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9603:;
    /* $9603: 81 */ nes_instruction_boundary(0x9603, 6); nes_write(nes_read16zp((0x87 + g_cpu.X) & 0xFF), g_cpu.A);
label_9605:;
    /* $9605: 7F */ nes_instruction_boundary(0x9605, 7); { uint16_t a=(0x9085 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9608:;
    /* $9608: 95 */ nes_instruction_boundary(0x9608, 4); nes_write((0x81 + g_cpu.X) & 0xFF, g_cpu.A);
label_960A:;
    /* $960A: 81 */ nes_instruction_boundary(0x960A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_960C:;
    /* $960C: 81 */ nes_instruction_boundary(0x960C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_960E:;
    /* $960E: 81 */ nes_instruction_boundary(0x960E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9610:;
    /* $9610: 81 */ nes_instruction_boundary(0x9610, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9612:;
    /* $9612: 81 */ nes_instruction_boundary(0x9612, 6); nes_write(nes_read16zp((0x80 + g_cpu.X) & 0xFF), g_cpu.A);
label_9614:;
    /* $9614: 86 */ nes_instruction_boundary(0x9614, 3); nes_write(0xAC, g_cpu.X);
label_9616:;
    /* $9616: AE */ nes_instruction_boundary(0x9616, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9619:;
    /* $9619: 81 */ nes_instruction_boundary(0x9619, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961B:;
    /* $961B: 81 */ nes_instruction_boundary(0x961B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961D:;
    /* $961D: 81 */ nes_instruction_boundary(0x961D, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961F:;
    /* $961F: 81 */ nes_instruction_boundary(0x961F, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9621:;
    /* $9621: B2 */ nes_instruction_boundary(0x9621, 2); /* ILLEGAL $B2 — skip 1 */
label_9622:;
    /* $9622: B4 */ nes_instruction_boundary(0x9622, 4); g_cpu.Y = nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9624:;
    /* $9624: AF */ nes_instruction_boundary(0x9624, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9627:;
    /* $9627: 81 */ nes_instruction_boundary(0x9627, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9629:;
    /* $9629: 81 */ nes_instruction_boundary(0x9629, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_962B:;
    /* $962B: 81 */ nes_instruction_boundary(0x962B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_962D:;
    /* $962D: 81 */ nes_instruction_boundary(0x962D, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_962F:;
    /* $962F: B5 */ nes_instruction_boundary(0x962F, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9631:;
    /* $9631: 81 */ nes_instruction_boundary(0x9631, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9633:;
    /* $9633: AC */ nes_instruction_boundary(0x9633, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9636:;
    /* $9636: 81 */ nes_instruction_boundary(0x9636, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9638:;
    /* $9638: 81 */ nes_instruction_boundary(0x9638, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_963A:;
    /* $963A: 81 */ nes_instruction_boundary(0x963A, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_963C:;
    /* $963C: B4 */ nes_instruction_boundary(0x963C, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_963E:;
    /* $963E: 81 */ nes_instruction_boundary(0x963E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9640:;
    /* $9640: 81 */ nes_instruction_boundary(0x9640, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9642:;
    /* $9642: AF */ nes_instruction_boundary(0x9642, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9645:;
    /* $9645: 81 */ nes_instruction_boundary(0x9645, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9647:;
    /* $9647: 81 */ nes_instruction_boundary(0x9647, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9649:;
    /* $9649: B5 */ nes_instruction_boundary(0x9649, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_964B:;
    /* $964B: 81 */ nes_instruction_boundary(0x964B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964D:;
    /* $964D: 81 */ nes_instruction_boundary(0x964D, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964F:;
    /* $964F: 81 */ nes_instruction_boundary(0x964F, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9651:;
    /* $9651: AC */ nes_instruction_boundary(0x9651, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9654:;
    /* $9654: 81 */ nes_instruction_boundary(0x9654, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_9656:;
    /* $9656: B4 */ nes_instruction_boundary(0x9656, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9658:;
    /* $9658: 81 */ nes_instruction_boundary(0x9658, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965A:;
    /* $965A: 81 */ nes_instruction_boundary(0x965A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965C:;
    /* $965C: 81 */ nes_instruction_boundary(0x965C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965E:;
    /* $965E: 81 */ nes_instruction_boundary(0x965E, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9660:;
    /* $9660: AF */ nes_instruction_boundary(0x9660, 4); g_cpu.A = g_cpu.X = nes_read(0xB3B1); FLAG_NZ(g_cpu.A);
label_9663:;
    /* $9663: B5 */ nes_instruction_boundary(0x9663, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9665:;
    /* $9665: 81 */ nes_instruction_boundary(0x9665, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9667:;
    /* $9667: 81 */ nes_instruction_boundary(0x9667, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9669:;
    /* $9669: 81 */ nes_instruction_boundary(0x9669, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966B:;
    /* $966B: 81 */ nes_instruction_boundary(0x966B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966D:;
    /* $966D: 81 */ nes_instruction_boundary(0x966D, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_966F:;
    /* $966F: AC */ nes_instruction_boundary(0x966F, 4); g_cpu.Y = nes_read(0xB6B4); FLAG_NZ(g_cpu.Y);
label_9672:;
    /* $9672: 81 */ nes_instruction_boundary(0x9672, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9674:;
    /* $9674: 81 */ nes_instruction_boundary(0x9674, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9676:;
    /* $9676: 81 */ nes_instruction_boundary(0x9676, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9678:;
    /* $9678: 81 */ nes_instruction_boundary(0x9678, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967A:;
    /* $967A: 81 */ nes_instruction_boundary(0x967A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967C:;
    /* $967C: B3 */ nes_instruction_boundary(0x967C, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_967E:;
    /* $967E: AF */ nes_instruction_boundary(0x967E, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9681:;
    /* $9681: 81 */ nes_instruction_boundary(0x9681, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9683:;
    /* $9683: 81 */ nes_instruction_boundary(0x9683, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9685:;
    /* $9685: 81 */ nes_instruction_boundary(0x9685, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9687:;
    /* $9687: 81 */ nes_instruction_boundary(0x9687, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9689:;
    /* $9689: B2 */ nes_instruction_boundary(0x9689, 2); /* ILLEGAL $B2 — skip 1 */
label_968A:;
    /* $968A: B4 */ nes_instruction_boundary(0x968A, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_968C:;
    /* $968C: B0 */ nes_instruction_boundary(0x968C, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x963A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_963A;
    }
label_968E:;
    /* $968E: AE */ nes_instruction_boundary(0x968E, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9691:;
    /* $9691: 81 */ nes_instruction_boundary(0x9691, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9693:;
    /* $9693: 81 */ nes_instruction_boundary(0x9693, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9695:;
    /* $9695: 81 */ nes_instruction_boundary(0x9695, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9697:;
    /* $9697: B5 */ nes_instruction_boundary(0x9697, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: 81 */ nes_instruction_boundary(0x9699, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_969B:;
    /* $969B: AD */ nes_instruction_boundary(0x969B, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 81 */ nes_instruction_boundary(0x969E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A0:;
    /* $96A0: 81 */ nes_instruction_boundary(0x96A0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A2:;
    /* $96A2: 81 */ nes_instruction_boundary(0x96A2, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A4:;
    /* $96A4: B4 */ nes_instruction_boundary(0x96A4, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96A6:;
    /* $96A6: 81 */ nes_instruction_boundary(0x96A6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A8:;
    /* $96A8: 81 */ nes_instruction_boundary(0x96A8, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96AA:;
    /* $96AA: B0 */ nes_instruction_boundary(0x96AA, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9658, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9658;
    }
label_96AC:;
    /* $96AC: AE */ nes_instruction_boundary(0x96AC, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_96AF:;
    /* $96AF: 81 */ nes_instruction_boundary(0x96AF, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B1:;
    /* $96B1: B5 */ nes_instruction_boundary(0x96B1, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B3:;
    /* $96B3: 81 */ nes_instruction_boundary(0x96B3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B5:;
    /* $96B5: 81 */ nes_instruction_boundary(0x96B5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B7:;
    /* $96B7: 81 */ nes_instruction_boundary(0x96B7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B9:;
    /* $96B9: AD */ nes_instruction_boundary(0x96B9, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 81 */ nes_instruction_boundary(0x96BC, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96BE:;
    /* $96BE: B4 */ nes_instruction_boundary(0x96BE, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96C0:;
    /* $96C0: 81 */ nes_instruction_boundary(0x96C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C2:;
    /* $96C2: 81 */ nes_instruction_boundary(0x96C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C4:;
    /* $96C4: 81 */ nes_instruction_boundary(0x96C4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C6:;
    /* $96C6: 81 */ nes_instruction_boundary(0x96C6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C8:;
    /* $96C8: B0 */ nes_instruction_boundary(0x96C8, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9676, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9676;
    }
label_96CA:;
    /* $96CA: AE */ nes_instruction_boundary(0x96CA, 4); g_cpu.X = nes_read(0xB7B5); FLAG_NZ(g_cpu.X);
label_96CD:;
    /* $96CD: 81 */ nes_instruction_boundary(0x96CD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96CF:;
    /* $96CF: 81 */ nes_instruction_boundary(0x96CF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D1:;
    /* $96D1: 81 */ nes_instruction_boundary(0x96D1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D3:;
    /* $96D3: 81 */ nes_instruction_boundary(0x96D3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D5:;
    /* $96D5: 81 */ nes_instruction_boundary(0x96D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D7:;
    /* $96D7: AD */ nes_instruction_boundary(0x96D7, 4); g_cpu.A = nes_read(0x00AF); FLAG_NZ(g_cpu.A);
label_96DA:;
    /* $96DA: DB */ nes_instruction_boundary(0x96DA, 7); { uint16_t a=(0x81B1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96DD:;
    /* $96DD: 81 */ nes_instruction_boundary(0x96DD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96DF:;
    /* $96DF: 81 */ nes_instruction_boundary(0x96DF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E1:;
    /* $96E1: 81 */ nes_instruction_boundary(0x96E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E3:;
    /* $96E3: 81 */ nes_instruction_boundary(0x96E3, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E5:;
    /* $96E5: DF */ nes_instruction_boundary(0x96E5, 7); { uint16_t a=(0xDA00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96E8:;
    /* $96E8: 00 */ nes_instruction_boundary(0x96E8, 7); nes_brk_executed(0x96E8); return;
}

void func_961C_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_961C_b2");
#endif
label_961C:;
    /* $961C: 81 */ nes_instruction_boundary(0x961C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961E:;
    /* $961E: 81 */ nes_instruction_boundary(0x961E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9620:;
    /* $9620: 81 */ nes_instruction_boundary(0x9620, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_9622:;
    /* $9622: B4 */ nes_instruction_boundary(0x9622, 4); g_cpu.Y = nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9624:;
    /* $9624: AF */ nes_instruction_boundary(0x9624, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9627:;
    /* $9627: 81 */ nes_instruction_boundary(0x9627, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9629:;
    /* $9629: 81 */ nes_instruction_boundary(0x9629, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_962B:;
    /* $962B: 81 */ nes_instruction_boundary(0x962B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_962D:;
    /* $962D: 81 */ nes_instruction_boundary(0x962D, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_962F:;
    /* $962F: B5 */ nes_instruction_boundary(0x962F, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9631:;
    /* $9631: 81 */ nes_instruction_boundary(0x9631, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9633:;
    /* $9633: AC */ nes_instruction_boundary(0x9633, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9636:;
    /* $9636: 81 */ nes_instruction_boundary(0x9636, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9638:;
    /* $9638: 81 */ nes_instruction_boundary(0x9638, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_963A:;
    /* $963A: 81 */ nes_instruction_boundary(0x963A, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_963C:;
    /* $963C: B4 */ nes_instruction_boundary(0x963C, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_963E:;
    /* $963E: 81 */ nes_instruction_boundary(0x963E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9640:;
    /* $9640: 81 */ nes_instruction_boundary(0x9640, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9642:;
    /* $9642: AF */ nes_instruction_boundary(0x9642, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9645:;
    /* $9645: 81 */ nes_instruction_boundary(0x9645, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9647:;
    /* $9647: 81 */ nes_instruction_boundary(0x9647, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9649:;
    /* $9649: B5 */ nes_instruction_boundary(0x9649, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_964B:;
    /* $964B: 81 */ nes_instruction_boundary(0x964B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964D:;
    /* $964D: 81 */ nes_instruction_boundary(0x964D, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964F:;
    /* $964F: 81 */ nes_instruction_boundary(0x964F, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9651:;
    /* $9651: AC */ nes_instruction_boundary(0x9651, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9654:;
    /* $9654: 81 */ nes_instruction_boundary(0x9654, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_9656:;
    /* $9656: B4 */ nes_instruction_boundary(0x9656, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9658:;
    /* $9658: 81 */ nes_instruction_boundary(0x9658, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965A:;
    /* $965A: 81 */ nes_instruction_boundary(0x965A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965C:;
    /* $965C: 81 */ nes_instruction_boundary(0x965C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965E:;
    /* $965E: 81 */ nes_instruction_boundary(0x965E, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9660:;
    /* $9660: AF */ nes_instruction_boundary(0x9660, 4); g_cpu.A = g_cpu.X = nes_read(0xB3B1); FLAG_NZ(g_cpu.A);
label_9663:;
    /* $9663: B5 */ nes_instruction_boundary(0x9663, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9665:;
    /* $9665: 81 */ nes_instruction_boundary(0x9665, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9667:;
    /* $9667: 81 */ nes_instruction_boundary(0x9667, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9669:;
    /* $9669: 81 */ nes_instruction_boundary(0x9669, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966B:;
    /* $966B: 81 */ nes_instruction_boundary(0x966B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966D:;
    /* $966D: 81 */ nes_instruction_boundary(0x966D, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_966F:;
    /* $966F: AC */ nes_instruction_boundary(0x966F, 4); g_cpu.Y = nes_read(0xB6B4); FLAG_NZ(g_cpu.Y);
label_9672:;
    /* $9672: 81 */ nes_instruction_boundary(0x9672, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9674:;
    /* $9674: 81 */ nes_instruction_boundary(0x9674, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9676:;
    /* $9676: 81 */ nes_instruction_boundary(0x9676, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9678:;
    /* $9678: 81 */ nes_instruction_boundary(0x9678, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967A:;
    /* $967A: 81 */ nes_instruction_boundary(0x967A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967C:;
    /* $967C: B3 */ nes_instruction_boundary(0x967C, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_967E:;
    /* $967E: AF */ nes_instruction_boundary(0x967E, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9681:;
    /* $9681: 81 */ nes_instruction_boundary(0x9681, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9683:;
    /* $9683: 81 */ nes_instruction_boundary(0x9683, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9685:;
    /* $9685: 81 */ nes_instruction_boundary(0x9685, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9687:;
    /* $9687: 81 */ nes_instruction_boundary(0x9687, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9689:;
    /* $9689: B2 */ nes_instruction_boundary(0x9689, 2); /* ILLEGAL $B2 — skip 1 */
label_968A:;
    /* $968A: B4 */ nes_instruction_boundary(0x968A, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_968C:;
    /* $968C: B0 */ nes_instruction_boundary(0x968C, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x963A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_963A;
    }
label_968E:;
    /* $968E: AE */ nes_instruction_boundary(0x968E, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9691:;
    /* $9691: 81 */ nes_instruction_boundary(0x9691, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9693:;
    /* $9693: 81 */ nes_instruction_boundary(0x9693, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9695:;
    /* $9695: 81 */ nes_instruction_boundary(0x9695, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9697:;
    /* $9697: B5 */ nes_instruction_boundary(0x9697, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: 81 */ nes_instruction_boundary(0x9699, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_969B:;
    /* $969B: AD */ nes_instruction_boundary(0x969B, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 81 */ nes_instruction_boundary(0x969E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A0:;
    /* $96A0: 81 */ nes_instruction_boundary(0x96A0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A2:;
    /* $96A2: 81 */ nes_instruction_boundary(0x96A2, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A4:;
    /* $96A4: B4 */ nes_instruction_boundary(0x96A4, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96A6:;
    /* $96A6: 81 */ nes_instruction_boundary(0x96A6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A8:;
    /* $96A8: 81 */ nes_instruction_boundary(0x96A8, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96AA:;
    /* $96AA: B0 */ nes_instruction_boundary(0x96AA, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9658, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9658;
    }
label_96AC:;
    /* $96AC: AE */ nes_instruction_boundary(0x96AC, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_96AF:;
    /* $96AF: 81 */ nes_instruction_boundary(0x96AF, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B1:;
    /* $96B1: B5 */ nes_instruction_boundary(0x96B1, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B3:;
    /* $96B3: 81 */ nes_instruction_boundary(0x96B3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B5:;
    /* $96B5: 81 */ nes_instruction_boundary(0x96B5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B7:;
    /* $96B7: 81 */ nes_instruction_boundary(0x96B7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B9:;
    /* $96B9: AD */ nes_instruction_boundary(0x96B9, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 81 */ nes_instruction_boundary(0x96BC, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96BE:;
    /* $96BE: B4 */ nes_instruction_boundary(0x96BE, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96C0:;
    /* $96C0: 81 */ nes_instruction_boundary(0x96C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C2:;
    /* $96C2: 81 */ nes_instruction_boundary(0x96C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C4:;
    /* $96C4: 81 */ nes_instruction_boundary(0x96C4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C6:;
    /* $96C6: 81 */ nes_instruction_boundary(0x96C6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C8:;
    /* $96C8: B0 */ nes_instruction_boundary(0x96C8, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9676, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9676;
    }
label_96CA:;
    /* $96CA: AE */ nes_instruction_boundary(0x96CA, 4); g_cpu.X = nes_read(0xB7B5); FLAG_NZ(g_cpu.X);
label_96CD:;
    /* $96CD: 81 */ nes_instruction_boundary(0x96CD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96CF:;
    /* $96CF: 81 */ nes_instruction_boundary(0x96CF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D1:;
    /* $96D1: 81 */ nes_instruction_boundary(0x96D1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D3:;
    /* $96D3: 81 */ nes_instruction_boundary(0x96D3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D5:;
    /* $96D5: 81 */ nes_instruction_boundary(0x96D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D7:;
    /* $96D7: AD */ nes_instruction_boundary(0x96D7, 4); g_cpu.A = nes_read(0x00AF); FLAG_NZ(g_cpu.A);
label_96DA:;
    /* $96DA: DB */ nes_instruction_boundary(0x96DA, 7); { uint16_t a=(0x81B1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96DD:;
    /* $96DD: 81 */ nes_instruction_boundary(0x96DD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96DF:;
    /* $96DF: 81 */ nes_instruction_boundary(0x96DF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E1:;
    /* $96E1: 81 */ nes_instruction_boundary(0x96E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E3:;
    /* $96E3: 81 */ nes_instruction_boundary(0x96E3, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E5:;
    /* $96E5: DF */ nes_instruction_boundary(0x96E5, 7); { uint16_t a=(0xDA00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96E8:;
    /* $96E8: 00 */ nes_instruction_boundary(0x96E8, 7); nes_brk_executed(0x96E8); return;
}

void func_963A_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_963A_b2");
#endif
label_963A:;
    /* $963A: 81 */ nes_instruction_boundary(0x963A, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_963C:;
    /* $963C: B4 */ nes_instruction_boundary(0x963C, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_963E:;
    /* $963E: 81 */ nes_instruction_boundary(0x963E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9640:;
    /* $9640: 81 */ nes_instruction_boundary(0x9640, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9642:;
    /* $9642: AF */ nes_instruction_boundary(0x9642, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9645:;
    /* $9645: 81 */ nes_instruction_boundary(0x9645, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9647:;
    /* $9647: 81 */ nes_instruction_boundary(0x9647, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9649:;
    /* $9649: B5 */ nes_instruction_boundary(0x9649, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_964B:;
    /* $964B: 81 */ nes_instruction_boundary(0x964B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964D:;
    /* $964D: 81 */ nes_instruction_boundary(0x964D, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964F:;
    /* $964F: 81 */ nes_instruction_boundary(0x964F, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9651:;
    /* $9651: AC */ nes_instruction_boundary(0x9651, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9654:;
    /* $9654: 81 */ nes_instruction_boundary(0x9654, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_9656:;
    /* $9656: B4 */ nes_instruction_boundary(0x9656, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9658:;
    /* $9658: 81 */ nes_instruction_boundary(0x9658, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965A:;
    /* $965A: 81 */ nes_instruction_boundary(0x965A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965C:;
    /* $965C: 81 */ nes_instruction_boundary(0x965C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965E:;
    /* $965E: 81 */ nes_instruction_boundary(0x965E, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9660:;
    /* $9660: AF */ nes_instruction_boundary(0x9660, 4); g_cpu.A = g_cpu.X = nes_read(0xB3B1); FLAG_NZ(g_cpu.A);
label_9663:;
    /* $9663: B5 */ nes_instruction_boundary(0x9663, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9665:;
    /* $9665: 81 */ nes_instruction_boundary(0x9665, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9667:;
    /* $9667: 81 */ nes_instruction_boundary(0x9667, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9669:;
    /* $9669: 81 */ nes_instruction_boundary(0x9669, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966B:;
    /* $966B: 81 */ nes_instruction_boundary(0x966B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966D:;
    /* $966D: 81 */ nes_instruction_boundary(0x966D, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_966F:;
    /* $966F: AC */ nes_instruction_boundary(0x966F, 4); g_cpu.Y = nes_read(0xB6B4); FLAG_NZ(g_cpu.Y);
label_9672:;
    /* $9672: 81 */ nes_instruction_boundary(0x9672, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9674:;
    /* $9674: 81 */ nes_instruction_boundary(0x9674, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9676:;
    /* $9676: 81 */ nes_instruction_boundary(0x9676, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9678:;
    /* $9678: 81 */ nes_instruction_boundary(0x9678, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967A:;
    /* $967A: 81 */ nes_instruction_boundary(0x967A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967C:;
    /* $967C: B3 */ nes_instruction_boundary(0x967C, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_967E:;
    /* $967E: AF */ nes_instruction_boundary(0x967E, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9681:;
    /* $9681: 81 */ nes_instruction_boundary(0x9681, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9683:;
    /* $9683: 81 */ nes_instruction_boundary(0x9683, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9685:;
    /* $9685: 81 */ nes_instruction_boundary(0x9685, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9687:;
    /* $9687: 81 */ nes_instruction_boundary(0x9687, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9689:;
    /* $9689: B2 */ nes_instruction_boundary(0x9689, 2); /* ILLEGAL $B2 — skip 1 */
label_968A:;
    /* $968A: B4 */ nes_instruction_boundary(0x968A, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_968C:;
    /* $968C: B0 */ nes_instruction_boundary(0x968C, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x963A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_963A;
    }
label_968E:;
    /* $968E: AE */ nes_instruction_boundary(0x968E, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9691:;
    /* $9691: 81 */ nes_instruction_boundary(0x9691, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9693:;
    /* $9693: 81 */ nes_instruction_boundary(0x9693, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9695:;
    /* $9695: 81 */ nes_instruction_boundary(0x9695, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9697:;
    /* $9697: B5 */ nes_instruction_boundary(0x9697, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: 81 */ nes_instruction_boundary(0x9699, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_969B:;
    /* $969B: AD */ nes_instruction_boundary(0x969B, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 81 */ nes_instruction_boundary(0x969E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A0:;
    /* $96A0: 81 */ nes_instruction_boundary(0x96A0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A2:;
    /* $96A2: 81 */ nes_instruction_boundary(0x96A2, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A4:;
    /* $96A4: B4 */ nes_instruction_boundary(0x96A4, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96A6:;
    /* $96A6: 81 */ nes_instruction_boundary(0x96A6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A8:;
    /* $96A8: 81 */ nes_instruction_boundary(0x96A8, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96AA:;
    /* $96AA: B0 */ nes_instruction_boundary(0x96AA, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9658, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9658;
    }
label_96AC:;
    /* $96AC: AE */ nes_instruction_boundary(0x96AC, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_96AF:;
    /* $96AF: 81 */ nes_instruction_boundary(0x96AF, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B1:;
    /* $96B1: B5 */ nes_instruction_boundary(0x96B1, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B3:;
    /* $96B3: 81 */ nes_instruction_boundary(0x96B3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B5:;
    /* $96B5: 81 */ nes_instruction_boundary(0x96B5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B7:;
    /* $96B7: 81 */ nes_instruction_boundary(0x96B7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B9:;
    /* $96B9: AD */ nes_instruction_boundary(0x96B9, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 81 */ nes_instruction_boundary(0x96BC, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96BE:;
    /* $96BE: B4 */ nes_instruction_boundary(0x96BE, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96C0:;
    /* $96C0: 81 */ nes_instruction_boundary(0x96C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C2:;
    /* $96C2: 81 */ nes_instruction_boundary(0x96C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C4:;
    /* $96C4: 81 */ nes_instruction_boundary(0x96C4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C6:;
    /* $96C6: 81 */ nes_instruction_boundary(0x96C6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C8:;
    /* $96C8: B0 */ nes_instruction_boundary(0x96C8, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9676, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9676;
    }
label_96CA:;
    /* $96CA: AE */ nes_instruction_boundary(0x96CA, 4); g_cpu.X = nes_read(0xB7B5); FLAG_NZ(g_cpu.X);
label_96CD:;
    /* $96CD: 81 */ nes_instruction_boundary(0x96CD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96CF:;
    /* $96CF: 81 */ nes_instruction_boundary(0x96CF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D1:;
    /* $96D1: 81 */ nes_instruction_boundary(0x96D1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D3:;
    /* $96D3: 81 */ nes_instruction_boundary(0x96D3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D5:;
    /* $96D5: 81 */ nes_instruction_boundary(0x96D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D7:;
    /* $96D7: AD */ nes_instruction_boundary(0x96D7, 4); g_cpu.A = nes_read(0x00AF); FLAG_NZ(g_cpu.A);
label_96DA:;
    /* $96DA: DB */ nes_instruction_boundary(0x96DA, 7); { uint16_t a=(0x81B1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96DD:;
    /* $96DD: 81 */ nes_instruction_boundary(0x96DD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96DF:;
    /* $96DF: 81 */ nes_instruction_boundary(0x96DF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E1:;
    /* $96E1: 81 */ nes_instruction_boundary(0x96E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E3:;
    /* $96E3: 81 */ nes_instruction_boundary(0x96E3, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E5:;
    /* $96E5: DF */ nes_instruction_boundary(0x96E5, 7); { uint16_t a=(0xDA00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96E8:;
    /* $96E8: 00 */ nes_instruction_boundary(0x96E8, 7); nes_brk_executed(0x96E8); return;
}

void func_9658_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9658_b2");
#endif
label_9658:;
    /* $9658: 81 */ nes_instruction_boundary(0x9658, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965A:;
    /* $965A: 81 */ nes_instruction_boundary(0x965A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965C:;
    /* $965C: 81 */ nes_instruction_boundary(0x965C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965E:;
    /* $965E: 81 */ nes_instruction_boundary(0x965E, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9660:;
    /* $9660: AF */ nes_instruction_boundary(0x9660, 4); g_cpu.A = g_cpu.X = nes_read(0xB3B1); FLAG_NZ(g_cpu.A);
label_9663:;
    /* $9663: B5 */ nes_instruction_boundary(0x9663, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9665:;
    /* $9665: 81 */ nes_instruction_boundary(0x9665, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9667:;
    /* $9667: 81 */ nes_instruction_boundary(0x9667, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9669:;
    /* $9669: 81 */ nes_instruction_boundary(0x9669, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966B:;
    /* $966B: 81 */ nes_instruction_boundary(0x966B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966D:;
    /* $966D: 81 */ nes_instruction_boundary(0x966D, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_966F:;
    /* $966F: AC */ nes_instruction_boundary(0x966F, 4); g_cpu.Y = nes_read(0xB6B4); FLAG_NZ(g_cpu.Y);
label_9672:;
    /* $9672: 81 */ nes_instruction_boundary(0x9672, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9674:;
    /* $9674: 81 */ nes_instruction_boundary(0x9674, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9676:;
    /* $9676: 81 */ nes_instruction_boundary(0x9676, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9678:;
    /* $9678: 81 */ nes_instruction_boundary(0x9678, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967A:;
    /* $967A: 81 */ nes_instruction_boundary(0x967A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967C:;
    /* $967C: B3 */ nes_instruction_boundary(0x967C, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_967E:;
    /* $967E: AF */ nes_instruction_boundary(0x967E, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9681:;
    /* $9681: 81 */ nes_instruction_boundary(0x9681, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9683:;
    /* $9683: 81 */ nes_instruction_boundary(0x9683, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9685:;
    /* $9685: 81 */ nes_instruction_boundary(0x9685, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9687:;
    /* $9687: 81 */ nes_instruction_boundary(0x9687, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9689:;
    /* $9689: B2 */ nes_instruction_boundary(0x9689, 2); /* ILLEGAL $B2 — skip 1 */
label_968A:;
    /* $968A: B4 */ nes_instruction_boundary(0x968A, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_968C:;
    /* $968C: B0 */ nes_instruction_boundary(0x968C, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x163A), 2); return; }
label_968E:;
    /* $968E: AE */ nes_instruction_boundary(0x968E, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9691:;
    /* $9691: 81 */ nes_instruction_boundary(0x9691, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9693:;
    /* $9693: 81 */ nes_instruction_boundary(0x9693, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9695:;
    /* $9695: 81 */ nes_instruction_boundary(0x9695, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9697:;
    /* $9697: B5 */ nes_instruction_boundary(0x9697, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: 81 */ nes_instruction_boundary(0x9699, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_969B:;
    /* $969B: AD */ nes_instruction_boundary(0x969B, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 81 */ nes_instruction_boundary(0x969E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A0:;
    /* $96A0: 81 */ nes_instruction_boundary(0x96A0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A2:;
    /* $96A2: 81 */ nes_instruction_boundary(0x96A2, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A4:;
    /* $96A4: B4 */ nes_instruction_boundary(0x96A4, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96A6:;
    /* $96A6: 81 */ nes_instruction_boundary(0x96A6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A8:;
    /* $96A8: 81 */ nes_instruction_boundary(0x96A8, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96AA:;
    /* $96AA: B0 */ nes_instruction_boundary(0x96AA, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9658, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9658;
    }
label_96AC:;
    /* $96AC: AE */ nes_instruction_boundary(0x96AC, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_96AF:;
    /* $96AF: 81 */ nes_instruction_boundary(0x96AF, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B1:;
    /* $96B1: B5 */ nes_instruction_boundary(0x96B1, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B3:;
    /* $96B3: 81 */ nes_instruction_boundary(0x96B3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B5:;
    /* $96B5: 81 */ nes_instruction_boundary(0x96B5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B7:;
    /* $96B7: 81 */ nes_instruction_boundary(0x96B7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B9:;
    /* $96B9: AD */ nes_instruction_boundary(0x96B9, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 81 */ nes_instruction_boundary(0x96BC, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96BE:;
    /* $96BE: B4 */ nes_instruction_boundary(0x96BE, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96C0:;
    /* $96C0: 81 */ nes_instruction_boundary(0x96C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C2:;
    /* $96C2: 81 */ nes_instruction_boundary(0x96C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C4:;
    /* $96C4: 81 */ nes_instruction_boundary(0x96C4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C6:;
    /* $96C6: 81 */ nes_instruction_boundary(0x96C6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C8:;
    /* $96C8: B0 */ nes_instruction_boundary(0x96C8, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9676, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9676;
    }
label_96CA:;
    /* $96CA: AE */ nes_instruction_boundary(0x96CA, 4); g_cpu.X = nes_read(0xB7B5); FLAG_NZ(g_cpu.X);
label_96CD:;
    /* $96CD: 81 */ nes_instruction_boundary(0x96CD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96CF:;
    /* $96CF: 81 */ nes_instruction_boundary(0x96CF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D1:;
    /* $96D1: 81 */ nes_instruction_boundary(0x96D1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D3:;
    /* $96D3: 81 */ nes_instruction_boundary(0x96D3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D5:;
    /* $96D5: 81 */ nes_instruction_boundary(0x96D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D7:;
    /* $96D7: AD */ nes_instruction_boundary(0x96D7, 4); g_cpu.A = nes_read(0x00AF); FLAG_NZ(g_cpu.A);
label_96DA:;
    /* $96DA: DB */ nes_instruction_boundary(0x96DA, 7); { uint16_t a=(0x81B1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96DD:;
    /* $96DD: 81 */ nes_instruction_boundary(0x96DD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96DF:;
    /* $96DF: 81 */ nes_instruction_boundary(0x96DF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E1:;
    /* $96E1: 81 */ nes_instruction_boundary(0x96E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E3:;
    /* $96E3: 81 */ nes_instruction_boundary(0x96E3, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E5:;
    /* $96E5: DF */ nes_instruction_boundary(0x96E5, 7); { uint16_t a=(0xDA00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96E8:;
    /* $96E8: 00 */ nes_instruction_boundary(0x96E8, 7); nes_brk_executed(0x96E8); return;
}

void func_9676_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9676_b2");
#endif
label_9676:;
    /* $9676: 81 */ nes_instruction_boundary(0x9676, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9678:;
    /* $9678: 81 */ nes_instruction_boundary(0x9678, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967A:;
    /* $967A: 81 */ nes_instruction_boundary(0x967A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967C:;
    /* $967C: B3 */ nes_instruction_boundary(0x967C, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_967E:;
    /* $967E: AF */ nes_instruction_boundary(0x967E, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9681:;
    /* $9681: 81 */ nes_instruction_boundary(0x9681, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9683:;
    /* $9683: 81 */ nes_instruction_boundary(0x9683, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9685:;
    /* $9685: 81 */ nes_instruction_boundary(0x9685, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9687:;
    /* $9687: 81 */ nes_instruction_boundary(0x9687, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9689:;
    /* $9689: B2 */ nes_instruction_boundary(0x9689, 2); /* ILLEGAL $B2 — skip 1 */
label_968A:;
    /* $968A: B4 */ nes_instruction_boundary(0x968A, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_968C:;
    /* $968C: B0 */ nes_instruction_boundary(0x968C, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x163A), 2); return; }
label_968E:;
    /* $968E: AE */ nes_instruction_boundary(0x968E, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9691:;
    /* $9691: 81 */ nes_instruction_boundary(0x9691, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9693:;
    /* $9693: 81 */ nes_instruction_boundary(0x9693, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9695:;
    /* $9695: 81 */ nes_instruction_boundary(0x9695, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9697:;
    /* $9697: B5 */ nes_instruction_boundary(0x9697, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: 81 */ nes_instruction_boundary(0x9699, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_969B:;
    /* $969B: AD */ nes_instruction_boundary(0x969B, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 81 */ nes_instruction_boundary(0x969E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A0:;
    /* $96A0: 81 */ nes_instruction_boundary(0x96A0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A2:;
    /* $96A2: 81 */ nes_instruction_boundary(0x96A2, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A4:;
    /* $96A4: B4 */ nes_instruction_boundary(0x96A4, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96A6:;
    /* $96A6: 81 */ nes_instruction_boundary(0x96A6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A8:;
    /* $96A8: 81 */ nes_instruction_boundary(0x96A8, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96AA:;
    /* $96AA: B0 */ nes_instruction_boundary(0x96AA, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1658), 2); return; }
label_96AC:;
    /* $96AC: AE */ nes_instruction_boundary(0x96AC, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_96AF:;
    /* $96AF: 81 */ nes_instruction_boundary(0x96AF, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B1:;
    /* $96B1: B5 */ nes_instruction_boundary(0x96B1, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B3:;
    /* $96B3: 81 */ nes_instruction_boundary(0x96B3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B5:;
    /* $96B5: 81 */ nes_instruction_boundary(0x96B5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B7:;
    /* $96B7: 81 */ nes_instruction_boundary(0x96B7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B9:;
    /* $96B9: AD */ nes_instruction_boundary(0x96B9, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 81 */ nes_instruction_boundary(0x96BC, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96BE:;
    /* $96BE: B4 */ nes_instruction_boundary(0x96BE, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96C0:;
    /* $96C0: 81 */ nes_instruction_boundary(0x96C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C2:;
    /* $96C2: 81 */ nes_instruction_boundary(0x96C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C4:;
    /* $96C4: 81 */ nes_instruction_boundary(0x96C4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C6:;
    /* $96C6: 81 */ nes_instruction_boundary(0x96C6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C8:;
    /* $96C8: B0 */ nes_instruction_boundary(0x96C8, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9676, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9676;
    }
label_96CA:;
    /* $96CA: AE */ nes_instruction_boundary(0x96CA, 4); g_cpu.X = nes_read(0xB7B5); FLAG_NZ(g_cpu.X);
label_96CD:;
    /* $96CD: 81 */ nes_instruction_boundary(0x96CD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96CF:;
    /* $96CF: 81 */ nes_instruction_boundary(0x96CF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D1:;
    /* $96D1: 81 */ nes_instruction_boundary(0x96D1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D3:;
    /* $96D3: 81 */ nes_instruction_boundary(0x96D3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D5:;
    /* $96D5: 81 */ nes_instruction_boundary(0x96D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D7:;
    /* $96D7: AD */ nes_instruction_boundary(0x96D7, 4); g_cpu.A = nes_read(0x00AF); FLAG_NZ(g_cpu.A);
label_96DA:;
    /* $96DA: DB */ nes_instruction_boundary(0x96DA, 7); { uint16_t a=(0x81B1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96DD:;
    /* $96DD: 81 */ nes_instruction_boundary(0x96DD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96DF:;
    /* $96DF: 81 */ nes_instruction_boundary(0x96DF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E1:;
    /* $96E1: 81 */ nes_instruction_boundary(0x96E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E3:;
    /* $96E3: 81 */ nes_instruction_boundary(0x96E3, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E5:;
    /* $96E5: DF */ nes_instruction_boundary(0x96E5, 7); { uint16_t a=(0xDA00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96E8:;
    /* $96E8: 00 */ nes_instruction_boundary(0x96E8, 7); nes_brk_executed(0x96E8); return;
}

void func_AE2D_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE2D_b2");
#endif
label_AE2D:;
    /* $AE2D: 20 */ nes_instruction_boundary(0xAE2D, 6); nes_dispatch_call(0x1A18, -1);
label_AE30:;
    /* $AE30: 25 */ nes_instruction_boundary(0xAE30, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_AE32:;
    /* $AE32: 25 */ nes_instruction_boundary(0xAE32, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_AE34:;
    /* $AE34: 25 */ nes_instruction_boundary(0xAE34, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_AE36:;
    /* $AE36: 25 */ nes_instruction_boundary(0xAE36, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_AE38:;
    /* $AE38: 25 */ nes_instruction_boundary(0xAE38, 3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_AE3A:;
    /* $AE3A: 25 */ nes_instruction_boundary(0xAE3A, 3); g_cpu.A &= nes_read(0x33); FLAG_NZ(g_cpu.A);
label_AE3C:;
    /* $AE3C: 20 */ nes_instruction_boundary(0xAE3C, 6); nes_dispatch_call(0x1920, -1);
label_AE3F:;
    /* $AE3F: 1B */ nes_instruction_boundary(0xAE3F, 7); { uint16_t a=(0x2D26 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE42:;
    /* $AE42: 26 */ nes_instruction_boundary(0xAE42, 5); { uint16_t a=0x2D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE44:;
    /* $AE44: 26 */ nes_instruction_boundary(0xAE44, 5); { uint16_t a=0x2D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE46:;
    /* $AE46: 26 */ nes_instruction_boundary(0xAE46, 5); { uint16_t a=0x2D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE48:;
    /* $AE48: 26 */ nes_instruction_boundary(0xAE48, 5); { uint16_t a=0x2D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE4A:;
    /* $AE4A: 26 */ nes_instruction_boundary(0xAE4A, 5); { uint16_t a=0x34; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE4C:;
    /* $AE4C: 1E */ nes_instruction_boundary(0xAE4C, 7); { uint16_t a=(0x181F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE4F:;
    /* $AE4F: 1A */ nes_instruction_boundary(0xAE4F, 2); /* NOP */
label_AE50:;
    /* $AE50: 27 */ nes_instruction_boundary(0xAE50, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE52:;
    /* $AE52: 27 */ nes_instruction_boundary(0xAE52, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE54:;
    /* $AE54: 27 */ nes_instruction_boundary(0xAE54, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE56:;
    /* $AE56: 27 */ nes_instruction_boundary(0xAE56, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE58:;
    /* $AE58: 27 */ nes_instruction_boundary(0xAE58, 5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE5A:;
    /* $AE5A: 27 */ nes_instruction_boundary(0xAE5A, 5); { uint16_t a=0x35; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE5C:;
    /* $AE5C: 19 */ nes_instruction_boundary(0xAE5C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE5F:;
    /* $AE5F: 1B */ nes_instruction_boundary(0xAE5F, 7); { uint16_t a=(0x3E28 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE62:;
    /* $AE62: 28 */ nes_instruction_boundary(0xAE62, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AE63:;
    /* $AE63: 3E */ nes_instruction_boundary(0xAE63, 7); { uint16_t a=(0x3E28 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE66:;
    /* $AE66: 28 */ nes_instruction_boundary(0xAE66, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AE67:;
    /* $AE67: 3E */ nes_instruction_boundary(0xAE67, 7); { uint16_t a=(0x2F28 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE6A:;
    /* $AE6A: 28 */ nes_instruction_boundary(0xAE6A, 4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AE6B:;
    /* $AE6B: 36 */ nes_instruction_boundary(0xAE6B, 6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE6D:;
    /* $AE6D: 1A */ nes_instruction_boundary(0xAE6D, 2); /* NOP */
label_AE6E:;
    /* $AE6E: 18 */ nes_instruction_boundary(0xAE6E, 2); g_cpu.C = 0;
label_AE6F:;
    /* $AE6F: 1A */ nes_instruction_boundary(0xAE6F, 2); /* NOP */
label_AE70:;
    /* $AE70: 19 */ nes_instruction_boundary(0xAE70, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE73:;
    /* $AE73: 1B */ nes_instruction_boundary(0xAE73, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE76:;
    /* $AE76: 19 */ nes_instruction_boundary(0xAE76, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE79:;
    /* $AE79: 1B */ nes_instruction_boundary(0xAE79, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE7C:;
    /* $AE7C: 19 */ nes_instruction_boundary(0xAE7C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE7F:;
    /* $AE7F: 1B */ nes_instruction_boundary(0xAE7F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE82:;
    /* $AE82: 18 */ nes_instruction_boundary(0xAE82, 2); g_cpu.C = 0;
label_AE83:;
    /* $AE83: 1A */ nes_instruction_boundary(0xAE83, 2); /* NOP */
label_AE84:;
    /* $AE84: 18 */ nes_instruction_boundary(0xAE84, 2); g_cpu.C = 0;
label_AE85:;
    /* $AE85: 1A */ nes_instruction_boundary(0xAE85, 2); /* NOP */
label_AE86:;
    /* $AE86: 18 */ nes_instruction_boundary(0xAE86, 2); g_cpu.C = 0;
label_AE87:;
    /* $AE87: 1A */ nes_instruction_boundary(0xAE87, 2); /* NOP */
label_AE88:;
    /* $AE88: 18 */ nes_instruction_boundary(0xAE88, 2); g_cpu.C = 0;
label_AE89:;
    /* $AE89: 1A */ nes_instruction_boundary(0xAE89, 2); /* NOP */
label_AE8A:;
    /* $AE8A: 18 */ nes_instruction_boundary(0xAE8A, 2); g_cpu.C = 0;
label_AE8B:;
    /* $AE8B: 1A */ nes_instruction_boundary(0xAE8B, 2); /* NOP */
label_AE8C:;
    /* $AE8C: 18 */ nes_instruction_boundary(0xAE8C, 2); g_cpu.C = 0;
label_AE8D:;
    /* $AE8D: 1A */ nes_instruction_boundary(0xAE8D, 2); /* NOP */
label_AE8E:;
    /* $AE8E: 18 */ nes_instruction_boundary(0xAE8E, 2); g_cpu.C = 0;
label_AE8F:;
    /* $AE8F: 1A */ nes_instruction_boundary(0xAE8F, 2); /* NOP */
label_AE90:;
    /* $AE90: 19 */ nes_instruction_boundary(0xAE90, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE93:;
    /* $AE93: 1B */ nes_instruction_boundary(0xAE93, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE96:;
    /* $AE96: 19 */ nes_instruction_boundary(0xAE96, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE99:;
    /* $AE99: 1B */ nes_instruction_boundary(0xAE99, 7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE9C:;
    /* $AE9C: 19 */ nes_instruction_boundary(0xAE9C, 4); g_cpu.A |= nes_read((0x191B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE9F:;
    /* $AE9F: 1B */ nes_instruction_boundary(0xAE9F, 7); { uint16_t a=(0x1A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEA2:;
    /* $AEA2: 18 */ nes_instruction_boundary(0xAEA2, 2); g_cpu.C = 0;
label_AEA3:;
    /* $AEA3: 40 */ nes_instruction_boundary(0xAEA3, 6); /* RTI */ g_rti_source = 0xAEA3; g_rti_bank = 2; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1C8_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1C8_b2");
#endif
label_B1C8:;
    /* $B1C8: 6C */ nes_instruction_boundary(0xB1C8, 5); { uint16_t _jt = nes_read16_jmpbug(0x6D8E); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_959B_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_959B_b2");
#endif
label_959B:;
    /* $959B: 80 */ nes_instruction_boundary(0x959B, 2); /* NOP */
label_959D:;
    /* $959D: 8A */ nes_instruction_boundary(0x959D, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_959E:;
    /* $959E: 8E */ nes_instruction_boundary(0x959E, 4); nes_write(0x9590, g_cpu.X);
label_95A1:;
    /* $95A1: 81 */ nes_instruction_boundary(0x95A1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95A3:;
    /* $95A3: 81 */ nes_instruction_boundary(0x95A3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95A5:;
    /* $95A5: 81 */ nes_instruction_boundary(0x95A5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95A7:;
    /* $95A7: 81 */ nes_instruction_boundary(0x95A7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95A9:;
    /* $95A9: 81 */ nes_instruction_boundary(0x95A9, 6); nes_write(nes_read16zp((0x87 + g_cpu.X) & 0xFF), g_cpu.A);
label_95AB:;
    /* $95AB: 7F */ nes_instruction_boundary(0x95AB, 7); { uint16_t a=(0x918F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_95AE:;
    /* $95AE: 81 */ nes_instruction_boundary(0x95AE, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95B0:;
    /* $95B0: 81 */ nes_instruction_boundary(0x95B0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95B2:;
    /* $95B2: 81 */ nes_instruction_boundary(0x95B2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95B4:;
    /* $95B4: 81 */ nes_instruction_boundary(0x95B4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95B6:;
    /* $95B6: 81 */ nes_instruction_boundary(0x95B6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95B8:;
    /* $95B8: 8E */ nes_instruction_boundary(0x95B8, 4); nes_write(0x8690, g_cpu.X);
label_95BB:;
    /* $95BB: 8A */ nes_instruction_boundary(0x95BB, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_95BC:;
    /* $95BC: 81 */ nes_instruction_boundary(0x95BC, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95BE:;
    /* $95BE: 81 */ nes_instruction_boundary(0x95BE, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95C0:;
    /* $95C0: 81 */ nes_instruction_boundary(0x95C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95C2:;
    /* $95C2: 81 */ nes_instruction_boundary(0x95C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95C4:;
    /* $95C4: 81 */ nes_instruction_boundary(0x95C4, 6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_95C6:;
    /* $95C6: 8F */ nes_instruction_boundary(0x95C6, 4); nes_write(0x8791, g_cpu.A & g_cpu.X); /* SAX */
label_95C9:;
    /* $95C9: 7F */ nes_instruction_boundary(0x95C9, 7); { uint16_t a=(0x8185 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_95CC:;
    /* $95CC: 81 */ nes_instruction_boundary(0x95CC, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95CE:;
    /* $95CE: 81 */ nes_instruction_boundary(0x95CE, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95D0:;
    /* $95D0: 81 */ nes_instruction_boundary(0x95D0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95D2:;
    /* $95D2: 8E */ nes_instruction_boundary(0x95D2, 4); nes_write(0x9590, g_cpu.X);
label_95D5:;
    /* $95D5: 81 */ nes_instruction_boundary(0x95D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95D7:;
    /* $95D7: 80 */ nes_instruction_boundary(0x95D7, 2); /* NOP */
label_95D9:;
    /* $95D9: 8A */ nes_instruction_boundary(0x95D9, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_95DA:;
    /* $95DA: 81 */ nes_instruction_boundary(0x95DA, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95DC:;
    /* $95DC: 81 */ nes_instruction_boundary(0x95DC, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95DE:;
    /* $95DE: 81 */ nes_instruction_boundary(0x95DE, 6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_95E0:;
    /* $95E0: 8F */ nes_instruction_boundary(0x95E0, 4); nes_write(0x8191, g_cpu.A & g_cpu.X); /* SAX */
label_95E3:;
    /* $95E3: 81 */ nes_instruction_boundary(0x95E3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95E5:;
    /* $95E5: 81 */ nes_instruction_boundary(0x95E5, 6); nes_write(nes_read16zp((0x87 + g_cpu.X) & 0xFF), g_cpu.A);
label_95E7:;
    /* $95E7: 7F */ nes_instruction_boundary(0x95E7, 7); { uint16_t a=(0x8185 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_95EA:;
    /* $95EA: 81 */ nes_instruction_boundary(0x95EA, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95EC:;
    /* $95EC: 8E */ nes_instruction_boundary(0x95EC, 4); nes_write(0x9590, g_cpu.X);
label_95EF:;
    /* $95EF: 81 */ nes_instruction_boundary(0x95EF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95F1:;
    /* $95F1: 81 */ nes_instruction_boundary(0x95F1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95F3:;
    /* $95F3: 81 */ nes_instruction_boundary(0x95F3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95F5:;
    /* $95F5: 80 */ nes_instruction_boundary(0x95F5, 2); /* NOP */
label_95F7:;
    /* $95F7: 8A */ nes_instruction_boundary(0x95F7, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_95F8:;
    /* $95F8: 81 */ nes_instruction_boundary(0x95F8, 6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_95FA:;
    /* $95FA: 8F */ nes_instruction_boundary(0x95FA, 4); nes_write(0x8191, g_cpu.A & g_cpu.X); /* SAX */
label_95FD:;
    /* $95FD: 81 */ nes_instruction_boundary(0x95FD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95FF:;
    /* $95FF: 81 */ nes_instruction_boundary(0x95FF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9601:;
    /* $9601: 81 */ nes_instruction_boundary(0x9601, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9603:;
    /* $9603: 81 */ nes_instruction_boundary(0x9603, 6); nes_write(nes_read16zp((0x87 + g_cpu.X) & 0xFF), g_cpu.A);
label_9605:;
    /* $9605: 7F */ nes_instruction_boundary(0x9605, 7); { uint16_t a=(0x9085 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9608:;
    /* $9608: 95 */ nes_instruction_boundary(0x9608, 4); nes_write((0x81 + g_cpu.X) & 0xFF, g_cpu.A);
label_960A:;
    /* $960A: 81 */ nes_instruction_boundary(0x960A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_960C:;
    /* $960C: 81 */ nes_instruction_boundary(0x960C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_960E:;
    /* $960E: 81 */ nes_instruction_boundary(0x960E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9610:;
    /* $9610: 81 */ nes_instruction_boundary(0x9610, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9612:;
    /* $9612: 81 */ nes_instruction_boundary(0x9612, 6); nes_write(nes_read16zp((0x80 + g_cpu.X) & 0xFF), g_cpu.A);
label_9614:;
    /* $9614: 86 */ nes_instruction_boundary(0x9614, 3); nes_write(0xAC, g_cpu.X);
label_9616:;
    /* $9616: AE */ nes_instruction_boundary(0x9616, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9619:;
    /* $9619: 81 */ nes_instruction_boundary(0x9619, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961B:;
    /* $961B: 81 */ nes_instruction_boundary(0x961B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961D:;
    /* $961D: 81 */ nes_instruction_boundary(0x961D, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961F:;
    /* $961F: 81 */ nes_instruction_boundary(0x961F, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9621:;
    /* $9621: B2 */ nes_instruction_boundary(0x9621, 2); /* ILLEGAL $B2 — skip 1 */
label_9622:;
    /* $9622: B4 */ nes_instruction_boundary(0x9622, 4); g_cpu.Y = nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9624:;
    /* $9624: AF */ nes_instruction_boundary(0x9624, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9627:;
    /* $9627: 81 */ nes_instruction_boundary(0x9627, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9629:;
    /* $9629: 81 */ nes_instruction_boundary(0x9629, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_962B:;
    /* $962B: 81 */ nes_instruction_boundary(0x962B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_962D:;
    /* $962D: 81 */ nes_instruction_boundary(0x962D, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_962F:;
    /* $962F: B5 */ nes_instruction_boundary(0x962F, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9631:;
    /* $9631: 81 */ nes_instruction_boundary(0x9631, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9633:;
    /* $9633: AC */ nes_instruction_boundary(0x9633, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9636:;
    /* $9636: 81 */ nes_instruction_boundary(0x9636, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9638:;
    /* $9638: 81 */ nes_instruction_boundary(0x9638, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_963A:;
    /* $963A: 81 */ nes_instruction_boundary(0x963A, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_963C:;
    /* $963C: B4 */ nes_instruction_boundary(0x963C, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_963E:;
    /* $963E: 81 */ nes_instruction_boundary(0x963E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9640:;
    /* $9640: 81 */ nes_instruction_boundary(0x9640, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9642:;
    /* $9642: AF */ nes_instruction_boundary(0x9642, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9645:;
    /* $9645: 81 */ nes_instruction_boundary(0x9645, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9647:;
    /* $9647: 81 */ nes_instruction_boundary(0x9647, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9649:;
    /* $9649: B5 */ nes_instruction_boundary(0x9649, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_964B:;
    /* $964B: 81 */ nes_instruction_boundary(0x964B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964D:;
    /* $964D: 81 */ nes_instruction_boundary(0x964D, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964F:;
    /* $964F: 81 */ nes_instruction_boundary(0x964F, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9651:;
    /* $9651: AC */ nes_instruction_boundary(0x9651, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9654:;
    /* $9654: 81 */ nes_instruction_boundary(0x9654, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_9656:;
    /* $9656: B4 */ nes_instruction_boundary(0x9656, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9658:;
    /* $9658: 81 */ nes_instruction_boundary(0x9658, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965A:;
    /* $965A: 81 */ nes_instruction_boundary(0x965A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965C:;
    /* $965C: 81 */ nes_instruction_boundary(0x965C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965E:;
    /* $965E: 81 */ nes_instruction_boundary(0x965E, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9660:;
    /* $9660: AF */ nes_instruction_boundary(0x9660, 4); g_cpu.A = g_cpu.X = nes_read(0xB3B1); FLAG_NZ(g_cpu.A);
label_9663:;
    /* $9663: B5 */ nes_instruction_boundary(0x9663, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9665:;
    /* $9665: 81 */ nes_instruction_boundary(0x9665, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9667:;
    /* $9667: 81 */ nes_instruction_boundary(0x9667, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9669:;
    /* $9669: 81 */ nes_instruction_boundary(0x9669, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966B:;
    /* $966B: 81 */ nes_instruction_boundary(0x966B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966D:;
    /* $966D: 81 */ nes_instruction_boundary(0x966D, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_966F:;
    /* $966F: AC */ nes_instruction_boundary(0x966F, 4); g_cpu.Y = nes_read(0xB6B4); FLAG_NZ(g_cpu.Y);
label_9672:;
    /* $9672: 81 */ nes_instruction_boundary(0x9672, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9674:;
    /* $9674: 81 */ nes_instruction_boundary(0x9674, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9676:;
    /* $9676: 81 */ nes_instruction_boundary(0x9676, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9678:;
    /* $9678: 81 */ nes_instruction_boundary(0x9678, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967A:;
    /* $967A: 81 */ nes_instruction_boundary(0x967A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967C:;
    /* $967C: B3 */ nes_instruction_boundary(0x967C, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_967E:;
    /* $967E: AF */ nes_instruction_boundary(0x967E, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9681:;
    /* $9681: 81 */ nes_instruction_boundary(0x9681, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9683:;
    /* $9683: 81 */ nes_instruction_boundary(0x9683, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9685:;
    /* $9685: 81 */ nes_instruction_boundary(0x9685, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9687:;
    /* $9687: 81 */ nes_instruction_boundary(0x9687, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9689:;
    /* $9689: B2 */ nes_instruction_boundary(0x9689, 2); /* ILLEGAL $B2 — skip 1 */
label_968A:;
    /* $968A: B4 */ nes_instruction_boundary(0x968A, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_968C:;
    /* $968C: B0 */ nes_instruction_boundary(0x968C, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x963A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_963A;
    }
label_968E:;
    /* $968E: AE */ nes_instruction_boundary(0x968E, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9691:;
    /* $9691: 81 */ nes_instruction_boundary(0x9691, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9693:;
    /* $9693: 81 */ nes_instruction_boundary(0x9693, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9695:;
    /* $9695: 81 */ nes_instruction_boundary(0x9695, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9697:;
    /* $9697: B5 */ nes_instruction_boundary(0x9697, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: 81 */ nes_instruction_boundary(0x9699, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_969B:;
    /* $969B: AD */ nes_instruction_boundary(0x969B, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 81 */ nes_instruction_boundary(0x969E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A0:;
    /* $96A0: 81 */ nes_instruction_boundary(0x96A0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A2:;
    /* $96A2: 81 */ nes_instruction_boundary(0x96A2, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A4:;
    /* $96A4: B4 */ nes_instruction_boundary(0x96A4, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96A6:;
    /* $96A6: 81 */ nes_instruction_boundary(0x96A6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A8:;
    /* $96A8: 81 */ nes_instruction_boundary(0x96A8, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96AA:;
    /* $96AA: B0 */ nes_instruction_boundary(0x96AA, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9658, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9658;
    }
label_96AC:;
    /* $96AC: AE */ nes_instruction_boundary(0x96AC, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_96AF:;
    /* $96AF: 81 */ nes_instruction_boundary(0x96AF, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B1:;
    /* $96B1: B5 */ nes_instruction_boundary(0x96B1, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B3:;
    /* $96B3: 81 */ nes_instruction_boundary(0x96B3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B5:;
    /* $96B5: 81 */ nes_instruction_boundary(0x96B5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B7:;
    /* $96B7: 81 */ nes_instruction_boundary(0x96B7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B9:;
    /* $96B9: AD */ nes_instruction_boundary(0x96B9, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 81 */ nes_instruction_boundary(0x96BC, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96BE:;
    /* $96BE: B4 */ nes_instruction_boundary(0x96BE, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96C0:;
    /* $96C0: 81 */ nes_instruction_boundary(0x96C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C2:;
    /* $96C2: 81 */ nes_instruction_boundary(0x96C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C4:;
    /* $96C4: 81 */ nes_instruction_boundary(0x96C4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C6:;
    /* $96C6: 81 */ nes_instruction_boundary(0x96C6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C8:;
    /* $96C8: B0 */ nes_instruction_boundary(0x96C8, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9676, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9676;
    }
label_96CA:;
    /* $96CA: AE */ nes_instruction_boundary(0x96CA, 4); g_cpu.X = nes_read(0xB7B5); FLAG_NZ(g_cpu.X);
label_96CD:;
    /* $96CD: 81 */ nes_instruction_boundary(0x96CD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96CF:;
    /* $96CF: 81 */ nes_instruction_boundary(0x96CF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D1:;
    /* $96D1: 81 */ nes_instruction_boundary(0x96D1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D3:;
    /* $96D3: 81 */ nes_instruction_boundary(0x96D3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D5:;
    /* $96D5: 81 */ nes_instruction_boundary(0x96D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D7:;
    /* $96D7: AD */ nes_instruction_boundary(0x96D7, 4); g_cpu.A = nes_read(0x00AF); FLAG_NZ(g_cpu.A);
label_96DA:;
    /* $96DA: DB */ nes_instruction_boundary(0x96DA, 7); { uint16_t a=(0x81B1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96DD:;
    /* $96DD: 81 */ nes_instruction_boundary(0x96DD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96DF:;
    /* $96DF: 81 */ nes_instruction_boundary(0x96DF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E1:;
    /* $96E1: 81 */ nes_instruction_boundary(0x96E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E3:;
    /* $96E3: 81 */ nes_instruction_boundary(0x96E3, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E5:;
    /* $96E5: DF */ nes_instruction_boundary(0x96E5, 7); { uint16_t a=(0xDA00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96E8:;
    /* $96E8: 00 */ nes_instruction_boundary(0x96E8, 7); nes_brk_executed(0x96E8); return;
}

void func_9576_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9576_b2");
#endif
label_9576:;
    /* $9576: 81 */ nes_instruction_boundary(0x9576, 6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_9578:;
    /* $9578: 8F */ nes_instruction_boundary(0x9578, 4); nes_write(0x8191, g_cpu.A & g_cpu.X); /* SAX */
label_957B:;
    /* $957B: 81 */ nes_instruction_boundary(0x957B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_957D:;
    /* $957D: 80 */ nes_instruction_boundary(0x957D, 2); /* NOP */
label_957F:;
    /* $957F: 8A */ nes_instruction_boundary(0x957F, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_9580:;
    /* $9580: 81 */ nes_instruction_boundary(0x9580, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9582:;
    /* $9582: 81 */ nes_instruction_boundary(0x9582, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9584:;
    /* $9584: 8E */ nes_instruction_boundary(0x9584, 4); nes_write(0x9590, g_cpu.X);
label_9587:;
    /* $9587: 81 */ nes_instruction_boundary(0x9587, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9589:;
    /* $9589: 81 */ nes_instruction_boundary(0x9589, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_958B:;
    /* $958B: 81 */ nes_instruction_boundary(0x958B, 6); nes_write(nes_read16zp((0x87 + g_cpu.X) & 0xFF), g_cpu.A);
label_958D:;
    /* $958D: 7F */ nes_instruction_boundary(0x958D, 7); { uint16_t a=(0x8185 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9590:;
    /* $9590: 81 */ nes_instruction_boundary(0x9590, 6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_9592:;
    /* $9592: 8F */ nes_instruction_boundary(0x9592, 4); nes_write(0x8191, g_cpu.A & g_cpu.X); /* SAX */
label_9595:;
    /* $9595: 81 */ nes_instruction_boundary(0x9595, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9597:;
    /* $9597: 81 */ nes_instruction_boundary(0x9597, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9599:;
    /* $9599: 81 */ nes_instruction_boundary(0x9599, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_959B:;
    /* $959B: 80 */ nes_instruction_boundary(0x959B, 2); /* NOP */
label_959D:;
    /* $959D: 8A */ nes_instruction_boundary(0x959D, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_959E:;
    /* $959E: 8E */ nes_instruction_boundary(0x959E, 4); nes_write(0x9590, g_cpu.X);
label_95A1:;
    /* $95A1: 81 */ nes_instruction_boundary(0x95A1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95A3:;
    /* $95A3: 81 */ nes_instruction_boundary(0x95A3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95A5:;
    /* $95A5: 81 */ nes_instruction_boundary(0x95A5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95A7:;
    /* $95A7: 81 */ nes_instruction_boundary(0x95A7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95A9:;
    /* $95A9: 81 */ nes_instruction_boundary(0x95A9, 6); nes_write(nes_read16zp((0x87 + g_cpu.X) & 0xFF), g_cpu.A);
label_95AB:;
    /* $95AB: 7F */ nes_instruction_boundary(0x95AB, 7); { uint16_t a=(0x918F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_95AE:;
    /* $95AE: 81 */ nes_instruction_boundary(0x95AE, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95B0:;
    /* $95B0: 81 */ nes_instruction_boundary(0x95B0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95B2:;
    /* $95B2: 81 */ nes_instruction_boundary(0x95B2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95B4:;
    /* $95B4: 81 */ nes_instruction_boundary(0x95B4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95B6:;
    /* $95B6: 81 */ nes_instruction_boundary(0x95B6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95B8:;
    /* $95B8: 8E */ nes_instruction_boundary(0x95B8, 4); nes_write(0x8690, g_cpu.X);
label_95BB:;
    /* $95BB: 8A */ nes_instruction_boundary(0x95BB, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_95BC:;
    /* $95BC: 81 */ nes_instruction_boundary(0x95BC, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95BE:;
    /* $95BE: 81 */ nes_instruction_boundary(0x95BE, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95C0:;
    /* $95C0: 81 */ nes_instruction_boundary(0x95C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95C2:;
    /* $95C2: 81 */ nes_instruction_boundary(0x95C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95C4:;
    /* $95C4: 81 */ nes_instruction_boundary(0x95C4, 6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_95C6:;
    /* $95C6: 8F */ nes_instruction_boundary(0x95C6, 4); nes_write(0x8791, g_cpu.A & g_cpu.X); /* SAX */
label_95C9:;
    /* $95C9: 7F */ nes_instruction_boundary(0x95C9, 7); { uint16_t a=(0x8185 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_95CC:;
    /* $95CC: 81 */ nes_instruction_boundary(0x95CC, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95CE:;
    /* $95CE: 81 */ nes_instruction_boundary(0x95CE, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95D0:;
    /* $95D0: 81 */ nes_instruction_boundary(0x95D0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95D2:;
    /* $95D2: 8E */ nes_instruction_boundary(0x95D2, 4); nes_write(0x9590, g_cpu.X);
label_95D5:;
    /* $95D5: 81 */ nes_instruction_boundary(0x95D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95D7:;
    /* $95D7: 80 */ nes_instruction_boundary(0x95D7, 2); /* NOP */
label_95D9:;
    /* $95D9: 8A */ nes_instruction_boundary(0x95D9, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_95DA:;
    /* $95DA: 81 */ nes_instruction_boundary(0x95DA, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95DC:;
    /* $95DC: 81 */ nes_instruction_boundary(0x95DC, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95DE:;
    /* $95DE: 81 */ nes_instruction_boundary(0x95DE, 6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_95E0:;
    /* $95E0: 8F */ nes_instruction_boundary(0x95E0, 4); nes_write(0x8191, g_cpu.A & g_cpu.X); /* SAX */
label_95E3:;
    /* $95E3: 81 */ nes_instruction_boundary(0x95E3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95E5:;
    /* $95E5: 81 */ nes_instruction_boundary(0x95E5, 6); nes_write(nes_read16zp((0x87 + g_cpu.X) & 0xFF), g_cpu.A);
label_95E7:;
    /* $95E7: 7F */ nes_instruction_boundary(0x95E7, 7); { uint16_t a=(0x8185 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_95EA:;
    /* $95EA: 81 */ nes_instruction_boundary(0x95EA, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95EC:;
    /* $95EC: 8E */ nes_instruction_boundary(0x95EC, 4); nes_write(0x9590, g_cpu.X);
label_95EF:;
    /* $95EF: 81 */ nes_instruction_boundary(0x95EF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95F1:;
    /* $95F1: 81 */ nes_instruction_boundary(0x95F1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95F3:;
    /* $95F3: 81 */ nes_instruction_boundary(0x95F3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95F5:;
    /* $95F5: 80 */ nes_instruction_boundary(0x95F5, 2); /* NOP */
label_95F7:;
    /* $95F7: 8A */ nes_instruction_boundary(0x95F7, 2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_95F8:;
    /* $95F8: 81 */ nes_instruction_boundary(0x95F8, 6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_95FA:;
    /* $95FA: 8F */ nes_instruction_boundary(0x95FA, 4); nes_write(0x8191, g_cpu.A & g_cpu.X); /* SAX */
label_95FD:;
    /* $95FD: 81 */ nes_instruction_boundary(0x95FD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_95FF:;
    /* $95FF: 81 */ nes_instruction_boundary(0x95FF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9601:;
    /* $9601: 81 */ nes_instruction_boundary(0x9601, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9603:;
    /* $9603: 81 */ nes_instruction_boundary(0x9603, 6); nes_write(nes_read16zp((0x87 + g_cpu.X) & 0xFF), g_cpu.A);
label_9605:;
    /* $9605: 7F */ nes_instruction_boundary(0x9605, 7); { uint16_t a=(0x9085 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9608:;
    /* $9608: 95 */ nes_instruction_boundary(0x9608, 4); nes_write((0x81 + g_cpu.X) & 0xFF, g_cpu.A);
label_960A:;
    /* $960A: 81 */ nes_instruction_boundary(0x960A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_960C:;
    /* $960C: 81 */ nes_instruction_boundary(0x960C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_960E:;
    /* $960E: 81 */ nes_instruction_boundary(0x960E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9610:;
    /* $9610: 81 */ nes_instruction_boundary(0x9610, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9612:;
    /* $9612: 81 */ nes_instruction_boundary(0x9612, 6); nes_write(nes_read16zp((0x80 + g_cpu.X) & 0xFF), g_cpu.A);
label_9614:;
    /* $9614: 86 */ nes_instruction_boundary(0x9614, 3); nes_write(0xAC, g_cpu.X);
label_9616:;
    /* $9616: AE */ nes_instruction_boundary(0x9616, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9619:;
    /* $9619: 81 */ nes_instruction_boundary(0x9619, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961B:;
    /* $961B: 81 */ nes_instruction_boundary(0x961B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961D:;
    /* $961D: 81 */ nes_instruction_boundary(0x961D, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_961F:;
    /* $961F: 81 */ nes_instruction_boundary(0x961F, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9621:;
    /* $9621: B2 */ nes_instruction_boundary(0x9621, 2); /* ILLEGAL $B2 — skip 1 */
label_9622:;
    /* $9622: B4 */ nes_instruction_boundary(0x9622, 4); g_cpu.Y = nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9624:;
    /* $9624: AF */ nes_instruction_boundary(0x9624, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9627:;
    /* $9627: 81 */ nes_instruction_boundary(0x9627, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9629:;
    /* $9629: 81 */ nes_instruction_boundary(0x9629, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_962B:;
    /* $962B: 81 */ nes_instruction_boundary(0x962B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_962D:;
    /* $962D: 81 */ nes_instruction_boundary(0x962D, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_962F:;
    /* $962F: B5 */ nes_instruction_boundary(0x962F, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9631:;
    /* $9631: 81 */ nes_instruction_boundary(0x9631, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9633:;
    /* $9633: AC */ nes_instruction_boundary(0x9633, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9636:;
    /* $9636: 81 */ nes_instruction_boundary(0x9636, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9638:;
    /* $9638: 81 */ nes_instruction_boundary(0x9638, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_963A:;
    /* $963A: 81 */ nes_instruction_boundary(0x963A, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_963C:;
    /* $963C: B4 */ nes_instruction_boundary(0x963C, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_963E:;
    /* $963E: 81 */ nes_instruction_boundary(0x963E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9640:;
    /* $9640: 81 */ nes_instruction_boundary(0x9640, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9642:;
    /* $9642: AF */ nes_instruction_boundary(0x9642, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9645:;
    /* $9645: 81 */ nes_instruction_boundary(0x9645, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9647:;
    /* $9647: 81 */ nes_instruction_boundary(0x9647, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9649:;
    /* $9649: B5 */ nes_instruction_boundary(0x9649, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_964B:;
    /* $964B: 81 */ nes_instruction_boundary(0x964B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964D:;
    /* $964D: 81 */ nes_instruction_boundary(0x964D, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_964F:;
    /* $964F: 81 */ nes_instruction_boundary(0x964F, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_9651:;
    /* $9651: AC */ nes_instruction_boundary(0x9651, 4); g_cpu.Y = nes_read(0x81AE); FLAG_NZ(g_cpu.Y);
label_9654:;
    /* $9654: 81 */ nes_instruction_boundary(0x9654, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_9656:;
    /* $9656: B4 */ nes_instruction_boundary(0x9656, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9658:;
    /* $9658: 81 */ nes_instruction_boundary(0x9658, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965A:;
    /* $965A: 81 */ nes_instruction_boundary(0x965A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965C:;
    /* $965C: 81 */ nes_instruction_boundary(0x965C, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_965E:;
    /* $965E: 81 */ nes_instruction_boundary(0x965E, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_9660:;
    /* $9660: AF */ nes_instruction_boundary(0x9660, 4); g_cpu.A = g_cpu.X = nes_read(0xB3B1); FLAG_NZ(g_cpu.A);
label_9663:;
    /* $9663: B5 */ nes_instruction_boundary(0x9663, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9665:;
    /* $9665: 81 */ nes_instruction_boundary(0x9665, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9667:;
    /* $9667: 81 */ nes_instruction_boundary(0x9667, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9669:;
    /* $9669: 81 */ nes_instruction_boundary(0x9669, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966B:;
    /* $966B: 81 */ nes_instruction_boundary(0x966B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_966D:;
    /* $966D: 81 */ nes_instruction_boundary(0x966D, 6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_966F:;
    /* $966F: AC */ nes_instruction_boundary(0x966F, 4); g_cpu.Y = nes_read(0xB6B4); FLAG_NZ(g_cpu.Y);
label_9672:;
    /* $9672: 81 */ nes_instruction_boundary(0x9672, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9674:;
    /* $9674: 81 */ nes_instruction_boundary(0x9674, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9676:;
    /* $9676: 81 */ nes_instruction_boundary(0x9676, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9678:;
    /* $9678: 81 */ nes_instruction_boundary(0x9678, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967A:;
    /* $967A: 81 */ nes_instruction_boundary(0x967A, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_967C:;
    /* $967C: B3 */ nes_instruction_boundary(0x967C, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_967E:;
    /* $967E: AF */ nes_instruction_boundary(0x967E, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_9681:;
    /* $9681: 81 */ nes_instruction_boundary(0x9681, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9683:;
    /* $9683: 81 */ nes_instruction_boundary(0x9683, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9685:;
    /* $9685: 81 */ nes_instruction_boundary(0x9685, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9687:;
    /* $9687: 81 */ nes_instruction_boundary(0x9687, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9689:;
    /* $9689: B2 */ nes_instruction_boundary(0x9689, 2); /* ILLEGAL $B2 — skip 1 */
label_968A:;
    /* $968A: B4 */ nes_instruction_boundary(0x968A, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_968C:;
    /* $968C: B0 */ nes_instruction_boundary(0x968C, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x963A, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_963A;
    }
label_968E:;
    /* $968E: AE */ nes_instruction_boundary(0x968E, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9691:;
    /* $9691: 81 */ nes_instruction_boundary(0x9691, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9693:;
    /* $9693: 81 */ nes_instruction_boundary(0x9693, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9695:;
    /* $9695: 81 */ nes_instruction_boundary(0x9695, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_9697:;
    /* $9697: B5 */ nes_instruction_boundary(0x9697, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: 81 */ nes_instruction_boundary(0x9699, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_969B:;
    /* $969B: AD */ nes_instruction_boundary(0x969B, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 81 */ nes_instruction_boundary(0x969E, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A0:;
    /* $96A0: 81 */ nes_instruction_boundary(0x96A0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A2:;
    /* $96A2: 81 */ nes_instruction_boundary(0x96A2, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A4:;
    /* $96A4: B4 */ nes_instruction_boundary(0x96A4, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96A6:;
    /* $96A6: 81 */ nes_instruction_boundary(0x96A6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A8:;
    /* $96A8: 81 */ nes_instruction_boundary(0x96A8, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96AA:;
    /* $96AA: B0 */ nes_instruction_boundary(0x96AA, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9658, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9658;
    }
label_96AC:;
    /* $96AC: AE */ nes_instruction_boundary(0x96AC, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_96AF:;
    /* $96AF: 81 */ nes_instruction_boundary(0x96AF, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B1:;
    /* $96B1: B5 */ nes_instruction_boundary(0x96B1, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B3:;
    /* $96B3: 81 */ nes_instruction_boundary(0x96B3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B5:;
    /* $96B5: 81 */ nes_instruction_boundary(0x96B5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B7:;
    /* $96B7: 81 */ nes_instruction_boundary(0x96B7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B9:;
    /* $96B9: AD */ nes_instruction_boundary(0x96B9, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 81 */ nes_instruction_boundary(0x96BC, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96BE:;
    /* $96BE: B4 */ nes_instruction_boundary(0x96BE, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96C0:;
    /* $96C0: 81 */ nes_instruction_boundary(0x96C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C2:;
    /* $96C2: 81 */ nes_instruction_boundary(0x96C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C4:;
    /* $96C4: 81 */ nes_instruction_boundary(0x96C4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C6:;
    /* $96C6: 81 */ nes_instruction_boundary(0x96C6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C8:;
    /* $96C8: B0 */ nes_instruction_boundary(0x96C8, 2); if (g_cpu.C) {
    nes_instruction_boundary(0x9676, 1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9676;
    }
label_96CA:;
    /* $96CA: AE */ nes_instruction_boundary(0x96CA, 4); g_cpu.X = nes_read(0xB7B5); FLAG_NZ(g_cpu.X);
label_96CD:;
    /* $96CD: 81 */ nes_instruction_boundary(0x96CD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96CF:;
    /* $96CF: 81 */ nes_instruction_boundary(0x96CF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D1:;
    /* $96D1: 81 */ nes_instruction_boundary(0x96D1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D3:;
    /* $96D3: 81 */ nes_instruction_boundary(0x96D3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D5:;
    /* $96D5: 81 */ nes_instruction_boundary(0x96D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D7:;
    /* $96D7: AD */ nes_instruction_boundary(0x96D7, 4); g_cpu.A = nes_read(0x00AF); FLAG_NZ(g_cpu.A);
label_96DA:;
    /* $96DA: DB */ nes_instruction_boundary(0x96DA, 7); { uint16_t a=(0x81B1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96DD:;
    /* $96DD: 81 */ nes_instruction_boundary(0x96DD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96DF:;
    /* $96DF: 81 */ nes_instruction_boundary(0x96DF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E1:;
    /* $96E1: 81 */ nes_instruction_boundary(0x96E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E3:;
    /* $96E3: 81 */ nes_instruction_boundary(0x96E3, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E5:;
    /* $96E5: DF */ nes_instruction_boundary(0x96E5, 7); { uint16_t a=(0xDA00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96E8:;
    /* $96E8: 00 */ nes_instruction_boundary(0x96E8, 7); nes_brk_executed(0x96E8); return;
}

void func_9406_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9406_b2");
#endif
label_9406:;
    /* $9406: 81 */ nes_instruction_boundary(0x9406, 6); nes_write(nes_read16zp((0x82 + g_cpu.X) & 0xFF), g_cpu.A);
label_9408:;
    /* $9408: 82 */ nes_instruction_boundary(0x9408, 2); /* NOP */
label_940A:;
    /* $940A: 97 */ nes_instruction_boundary(0x940A, 4); nes_write((0x82 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_940C:;
    /* $940C: 82 */ nes_instruction_boundary(0x940C, 2); /* NOP */
label_940E:;
    /* $940E: 98 */ nes_instruction_boundary(0x940E, 2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_940F:;
    /* $940F: 8C */ nes_instruction_boundary(0x940F, 4); nes_write(0x8184, g_cpu.Y);
label_9412:;
    /* $9412: 8D */ nes_instruction_boundary(0x9412, 4); nes_write(0x9C99, g_cpu.A);
label_9415:;
    /* $9415: 9A */ nes_instruction_boundary(0x9415, 2); g_cpu.S = g_cpu.X;
label_9416:;
    /* $9416: 9D */ nes_instruction_boundary(0x9416, 5); nes_write((0x9C99 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9419:;
    /* $9419: 9B */ nes_instruction_boundary(0x9419, 5); /* ILLEGAL $9B — skip 3 */
label_941C:;
    /* $941C: 9F */ nes_instruction_boundary(0x941C, 5); /* ILLEGAL $9F — skip 3 */
label_941F:;
    /* $941F: 95 */ nes_instruction_boundary(0x941F, 4); nes_write((0xA0 + g_cpu.X) & 0xFF, g_cpu.A);
label_9421:;
    /* $9421: 81 */ nes_instruction_boundary(0x9421, 6); nes_write(nes_read16zp((0xA1 + g_cpu.X) & 0xFF), g_cpu.A);
label_9423:;
    /* $9423: 81 */ nes_instruction_boundary(0x9423, 6); nes_write(nes_read16zp((0xA2 + g_cpu.X) & 0xFF), g_cpu.A);
label_9425:;
    /* $9425: 81 */ nes_instruction_boundary(0x9425, 6); nes_write(nes_read16zp((0xA1 + g_cpu.X) & 0xFF), g_cpu.A);
label_9427:;
    /* $9427: A3 */ nes_instruction_boundary(0x9427, 6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9429:;
    /* $9429: A4 */ nes_instruction_boundary(0x9429, 3); g_cpu.Y = nes_read(0xA9); FLAG_NZ(g_cpu.Y);
label_942B:;
    /* $942B: A5 */ nes_instruction_boundary(0x942B, 3); g_cpu.A = nes_read(0xAA); FLAG_NZ(g_cpu.A);
label_942D:;
    /* $942D: A6 */ nes_instruction_boundary(0x942D, 3); g_cpu.X = nes_read(0xAA); FLAG_NZ(g_cpu.X);
label_942F:;
    /* $942F: A7 */ nes_instruction_boundary(0x942F, 3); g_cpu.A = g_cpu.X = nes_read(0xAA); FLAG_NZ(g_cpu.A);
label_9431:;
    /* $9431: A6 */ nes_instruction_boundary(0x9431, 3); g_cpu.X = nes_read(0xAA); FLAG_NZ(g_cpu.X);
label_9433:;
    /* $9433: 63 */ nes_instruction_boundary(0x9433, 8); { uint16_t a=nes_read16zp((0x69 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9435:;
    /* $9435: AB */ nes_instruction_boundary(0x9435, 2); g_cpu.A = g_cpu.X = 0xA9; FLAG_NZ(g_cpu.A);
label_9437:;
    /* $9437: 78 */ nes_instruction_boundary(0x9437, 2); g_cpu.I = 1;
label_9438:;
    /* $9438: 79 */ nes_instruction_boundary(0x9438, 4); { uint8_t m=nes_read((0xAC79 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_943B:;
    /* $943B: 7A */ nes_instruction_boundary(0x943B, 2); /* NOP */
label_943C:;
    /* $943C: AD */ nes_instruction_boundary(0x943C, 4); g_cpu.A = nes_read(0x817B); FLAG_NZ(g_cpu.A);
label_943F:;
    /* $943F: 84 */ nes_instruction_boundary(0x943F, 3); nes_write(0x89, g_cpu.Y);
label_9441:;
    /* $9441: AE */ nes_instruction_boundary(0x9441, 4); g_cpu.X = nes_read(0xAF81); FLAG_NZ(g_cpu.X);
label_9444:;
    /* $9444: B1 */ nes_instruction_boundary(0x9444, 5); g_cpu.A = nes_read((nes_read16zp(0xB0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9446:;
    /* $9446: AC */ nes_instruction_boundary(0x9446, 4); g_cpu.Y = nes_read(0xAD81); FLAG_NZ(g_cpu.Y);
label_9449:;
    /* $9449: 81 */ nes_instruction_boundary(0x9449, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_944B:;
    /* $944B: 81 */ nes_instruction_boundary(0x944B, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_944D:;
    /* $944D: AE */ nes_instruction_boundary(0x944D, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_9450:;
    /* $9450: 81 */ nes_instruction_boundary(0x9450, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9452:;
    /* $9452: B2 */ nes_instruction_boundary(0x9452, 2); /* ILLEGAL $B2 — skip 1 */
label_9453:;
    /* $9453: B3 */ nes_instruction_boundary(0x9453, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9455:;
    /* $9455: B4 */ nes_instruction_boundary(0x9455, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9457:;
    /* $9457: B7 */ nes_instruction_boundary(0x9457, 4); g_cpu.A = g_cpu.X = nes_read((0x81 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_9459:;
    /* $9459: 81 */ nes_instruction_boundary(0x9459, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_945B:;
    /* $945B: 8C */ nes_instruction_boundary(0x945B, 4); nes_write(0x8184, g_cpu.Y);
label_945E:;
    /* $945E: B2 */ nes_instruction_boundary(0x945E, 2); /* ILLEGAL $B2 — skip 1 */
label_945F:;
    /* $945F: 79 */ nes_instruction_boundary(0x945F, 4); { uint8_t m=nes_read((0xB49F + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9462:;
    /* $9462: 79 */ nes_instruction_boundary(0x9462, 4); { uint8_t m=nes_read((0xA0B7 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9465:;
    /* $9465: 81 */ nes_instruction_boundary(0x9465, 6); nes_write(nes_read16zp((0xA1 + g_cpu.X) & 0xFF), g_cpu.A);
label_9467:;
    /* $9467: 59 */ nes_instruction_boundary(0x9467, 4); g_cpu.A ^= nes_read((0x5A5E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_946A:;
    /* $946A: 5F */ nes_instruction_boundary(0x946A, 7); { uint16_t a=(0x756D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_946D:;
    /* $946D: 6D */ nes_instruction_boundary(0x946D, 4); { uint8_t m=nes_read(0x65B8); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9470:;
    /* $9470: B9 */ nes_instruction_boundary(0x9470, 4); g_cpu.A = nes_read((0xBA66 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9473:;
    /* $9473: 7C */ nes_instruction_boundary(0x9473, 4); (void)nes_read((0x7A81 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9476:;
    /* $9476: 8D */ nes_instruction_boundary(0x9476, 4); nes_write(0x9079, g_cpu.A);
label_9479:;
    /* $9479: BB */ nes_instruction_boundary(0x9479, 4); /* ILLEGAL $BB — skip 3 */
label_947C:;
    /* $947C: BE */ nes_instruction_boundary(0x947C, 4); g_cpu.X = nes_read((0xBFBD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_947F:;
    /* $947F: 76 */ nes_instruction_boundary(0x947F, 6); { uint16_t a=(0xC0 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9481:;
    /* $9481: 92 */ nes_instruction_boundary(0x9481, 2); /* ILLEGAL $92 — skip 1 */
label_9482:;
    /* $9482: BF */ nes_instruction_boundary(0x9482, 4); g_cpu.A = g_cpu.X = nes_read((0x8195 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9485:;
    /* $9485: 84 */ nes_instruction_boundary(0x9485, 3); nes_write(0xC4, g_cpu.Y);
label_9487:;
    /* $9487: C1 */ nes_instruction_boundary(0x9487, 6); { uint8_t m=nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9489:;
    /* $9489: C2 */ nes_instruction_boundary(0x9489, 2); /* NOP */
label_948B:;
    /* $948B: C3 */ nes_instruction_boundary(0x948B, 8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_948D:;
    /* $948D: C2 */ nes_instruction_boundary(0x948D, 2); /* NOP */
label_948F:;
    /* $948F: 81 */ nes_instruction_boundary(0x948F, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9491:;
    /* $9491: C7 */ nes_instruction_boundary(0x9491, 5); { uint16_t a=0xC4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9493:;
    /* $9493: C8 */ nes_instruction_boundary(0x9493, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9494:;
    /* $9494: C5 */ nes_instruction_boundary(0x9494, 3); { uint8_t m=nes_read(0xC2); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9496:;
    /* $9496: C2 */ nes_instruction_boundary(0x9496, 2); /* NOP */
label_9498:;
    /* $9498: C9 */ nes_instruction_boundary(0x9498, 2); { int r=g_cpu.A-0xC2; g_cpu.C=(g_cpu.A>=0xC2)?1:0; FLAG_NZ(r&0xFF); }
label_949A:;
    /* $949A: C2 */ nes_instruction_boundary(0x949A, 2); /* NOP */
label_949C:;
    /* $949C: 9C */ nes_instruction_boundary(0x949C, 5); /* ILLEGAL $9C — skip 3 */
label_949F:;
    /* $949F: 81 */ nes_instruction_boundary(0x949F, 6); nes_write(nes_read16zp((0x80 + g_cpu.X) & 0xFF), g_cpu.A);
label_94A1:;
    /* $94A1: C7 */ nes_instruction_boundary(0x94A1, 5); { uint16_t a=0x84; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_94A3:;
    /* $94A3: C8 */ nes_instruction_boundary(0x94A3, 2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_94A4:;
    /* $94A4: CC */ nes_instruction_boundary(0x94A4, 4); { uint8_t m=nes_read(0xC2C2); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_94A7:;
    /* $94A7: 81 */ nes_instruction_boundary(0x94A7, 6); nes_write(nes_read16zp((0xA2 + g_cpu.X) & 0xFF), g_cpu.A);
label_94A9:;
    /* $94A9: 85 */ nes_instruction_boundary(0x94A9, 3); nes_write(0xA0, g_cpu.A);
label_94AB:;
    /* $94AB: 86 */ nes_instruction_boundary(0x94AB, 3); nes_write(0x79, g_cpu.X);
label_94AD:;
    /* $94AD: 79 */ nes_instruction_boundary(0x94AD, 4); { uint8_t m=nes_read((0xCDCE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_94B0:;
    /* $94B0: CF */ nes_instruction_boundary(0x94B0, 6); { uint16_t a=0xD0CB; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_94B3:;
    /* $94B3: A7 */ nes_instruction_boundary(0x94B3, 3); g_cpu.A = g_cpu.X = nes_read(0xAA); FLAG_NZ(g_cpu.A);
label_94B5:;
    /* $94B5: D1 */ nes_instruction_boundary(0x94B5, 5); { uint8_t m=nes_read((nes_read16zp(0xAA) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_94B7:;
    /* $94B7: D2 */ nes_instruction_boundary(0x94B7, 2); /* ILLEGAL $D2 — skip 1 */
label_94B8:;
    /* $94B8: D4 */ nes_instruction_boundary(0x94B8, 4); (void)nes_read((0xD3 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_94BA:;
    /* $94BA: D5 */ nes_instruction_boundary(0x94BA, 4); { uint8_t m=nes_read((0xD6 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_94BC:;
    /* $94BC: AA */ nes_instruction_boundary(0x94BC, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_94BD:;
    /* $94BD: D7 */ nes_instruction_boundary(0x94BD, 6); { uint16_t a=(0xAA + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_94BF:;
    /* $94BF: D7 */ nes_instruction_boundary(0x94BF, 6); { uint16_t a=(0xAA + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_94C1:;
    /* $94C1: D8 */ nes_instruction_boundary(0x94C1, 2); g_cpu.D = 0;
label_94C2:;
    /* $94C2: AA */ nes_instruction_boundary(0x94C2, 2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_94C3:;
    /* $94C3: D9 */ nes_instruction_boundary(0x94C3, 4); { uint8_t m=nes_read((0x66D4 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_94C6:;
    /* $94C6: 6C */ nes_instruction_boundary(0x94C6, 5); { uint16_t _jt = nes_read16zp(0x01); nes_cpu_instruction_boundary(_jt, 2); call_by_address_tail(_jt, -1); return; }
}

void func_9690_b2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9690_b2");
#endif
label_9690:;
    /* $9690: 81 */ nes_instruction_boundary(0x9690, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9692:;
    /* $9692: 81 */ nes_instruction_boundary(0x9692, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9694:;
    /* $9694: 81 */ nes_instruction_boundary(0x9694, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_9696:;
    /* $9696: B3 */ nes_instruction_boundary(0x9696, 5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9698:;
    /* $9698: B7 */ nes_instruction_boundary(0x9698, 4); g_cpu.A = g_cpu.X = nes_read((0x81 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_969A:;
    /* $969A: 81 */ nes_instruction_boundary(0x969A, 6); nes_write(nes_read16zp((0xAD + g_cpu.X) & 0xFF), g_cpu.A);
label_969C:;
    /* $969C: AF */ nes_instruction_boundary(0x969C, 4); g_cpu.A = g_cpu.X = nes_read(0x81B1); FLAG_NZ(g_cpu.A);
label_969F:;
    /* $969F: 81 */ nes_instruction_boundary(0x969F, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A1:;
    /* $96A1: 81 */ nes_instruction_boundary(0x96A1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A3:;
    /* $96A3: B2 */ nes_instruction_boundary(0x96A3, 2); /* ILLEGAL $B2 — skip 1 */
label_96A4:;
    /* $96A4: B4 */ nes_instruction_boundary(0x96A4, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96A6:;
    /* $96A6: 81 */ nes_instruction_boundary(0x96A6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96A8:;
    /* $96A8: 81 */ nes_instruction_boundary(0x96A8, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96AA:;
    /* $96AA: B0 */ nes_instruction_boundary(0x96AA, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1658), 2); return; }
label_96AC:;
    /* $96AC: AE */ nes_instruction_boundary(0x96AC, 4); g_cpu.X = nes_read(0x8181); FLAG_NZ(g_cpu.X);
label_96AF:;
    /* $96AF: 81 */ nes_instruction_boundary(0x96AF, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B1:;
    /* $96B1: B5 */ nes_instruction_boundary(0x96B1, 4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B3:;
    /* $96B3: 81 */ nes_instruction_boundary(0x96B3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B5:;
    /* $96B5: 81 */ nes_instruction_boundary(0x96B5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B7:;
    /* $96B7: 81 */ nes_instruction_boundary(0x96B7, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96B9:;
    /* $96B9: AD */ nes_instruction_boundary(0x96B9, 4); g_cpu.A = nes_read(0xB1AF); FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 81 */ nes_instruction_boundary(0x96BC, 6); nes_write(nes_read16zp((0xB2 + g_cpu.X) & 0xFF), g_cpu.A);
label_96BE:;
    /* $96BE: B4 */ nes_instruction_boundary(0x96BE, 4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_96C0:;
    /* $96C0: 81 */ nes_instruction_boundary(0x96C0, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C2:;
    /* $96C2: 81 */ nes_instruction_boundary(0x96C2, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C4:;
    /* $96C4: 81 */ nes_instruction_boundary(0x96C4, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C6:;
    /* $96C6: 81 */ nes_instruction_boundary(0x96C6, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96C8:;
    /* $96C8: B0 */ nes_instruction_boundary(0x96C8, 2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1676), 2); return; }
label_96CA:;
    /* $96CA: AE */ nes_instruction_boundary(0x96CA, 4); g_cpu.X = nes_read(0xB7B5); FLAG_NZ(g_cpu.X);
label_96CD:;
    /* $96CD: 81 */ nes_instruction_boundary(0x96CD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96CF:;
    /* $96CF: 81 */ nes_instruction_boundary(0x96CF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D1:;
    /* $96D1: 81 */ nes_instruction_boundary(0x96D1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D3:;
    /* $96D3: 81 */ nes_instruction_boundary(0x96D3, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D5:;
    /* $96D5: 81 */ nes_instruction_boundary(0x96D5, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96D7:;
    /* $96D7: AD */ nes_instruction_boundary(0x96D7, 4); g_cpu.A = nes_read(0x00AF); FLAG_NZ(g_cpu.A);
label_96DA:;
    /* $96DA: DB */ nes_instruction_boundary(0x96DA, 7); { uint16_t a=(0x81B1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96DD:;
    /* $96DD: 81 */ nes_instruction_boundary(0x96DD, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96DF:;
    /* $96DF: 81 */ nes_instruction_boundary(0x96DF, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E1:;
    /* $96E1: 81 */ nes_instruction_boundary(0x96E1, 6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E3:;
    /* $96E3: 81 */ nes_instruction_boundary(0x96E3, 6); nes_write(nes_read16zp((0xB3 + g_cpu.X) & 0xFF), g_cpu.A);
label_96E5:;
    /* $96E5: DF */ nes_instruction_boundary(0x96E5, 7); { uint16_t a=(0xDA00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96E8:;
    /* $96E8: 00 */ nes_instruction_boundary(0x96E8, 7); nes_brk_executed(0x96E8); return;
}

