/* AUTO-GENERATED dispatch table. DO NOT EDIT. */
#include "nes_runtime.h"
extern int g_current_bank;

/* Interpreter-fallback precondition flag (see runner/src/interp.c). */
int g_recomp_push_all_jsr = 0;

/* Forward declarations */
void func_DC80(void);
void func_E603(void);
void func_E610(void);
void func_E605(void);
void func_E60D(void);
void func_E608(void);
void func_E604(void);
void func_D269(void);
void func_DE39(void);
void func_9E39_b0(void);
void func_BE39_b0(void);
void func_9E39_b1(void);
void func_BE39_b1(void);
void func_9E39_b2(void);
void func_BE39_b2(void);
void func_9E39_b4(void);
void func_9E39_b5(void);
void func_BE39_b5(void);
void func_9E39_b6(void);
void func_BE39_b6(void);
void func_DCCE(void);
void func_9CCE_b0(void);
void func_BCCE_b0(void);
void func_9CCE_b1(void);
void func_BCCE_b1(void);
void func_9CCE_b2(void);
void func_BCCE_b2(void);
void func_9CCE_b3(void);
void func_9CCE_b4(void);
void func_BCCE_b4(void);
void func_BCCE_b5(void);
void func_9CCE_b6(void);
void func_BCCE_b6(void);
void func_CB25(void);
void func_8B25_b0(void);
void func_AB25_b0(void);
void func_8B25_b1(void);
void func_AB25_b1(void);
void func_8B25_b2(void);
void func_AB25_b2(void);
void func_8B25_b3(void);
void func_AB25_b3(void);
void func_8B25_b4(void);
void func_AB25_b4(void);
void func_8B25_b5(void);
void func_AB25_b5(void);
void func_8B25_b6(void);
void func_AB25_b6(void);
void func_D2F6(void);
void func_D305(void);
void func_D2F8(void);
void func_E1B9(void);
void func_E283(void);
void func_CFBF(void);
void func_D406(void);
void func_BE0B_b0(void);
void func_BEAF_b4(void);
void func_BE6B_b4(void);
void func_BE83_b4(void);
void func_BEE6_b4(void);
void func_BEBE_b4(void);
void func_BEDD_b4(void);
void func_BEF6_b4(void);
void func_BEFC_b4(void);
void func_BF20_b4(void);
void func_BF75_b4(void);
void func_BF24_b4(void);
void func_BF3D_b4(void);
void func_BF4A_b4(void);
void func_BF5E_b4(void);
void func_BF92_b4(void);
void func_BFA2_b4(void);
void func_BFC7_b4(void);
void func_BFD2_b4(void);
void func_BFE0_b4(void);
void func_BFFE_b4(void);
void func_C008(void);
void func_C00A(void);
void func_D02A(void);
void func_C020(void);
void func_C1B3(void);
void func_D04C(void);
void func_D100(void);
void func_D0AE(void);
void func_D17D(void);
void func_D17F(void);
void func_D121(void);
void func_D0F1(void);
void func_D0F8(void);
void func_D0FD(void);
void func_D03B(void);
void func_D199(void);
void func_D19A(void);
void func_D085(void);
void func_D086(void);
void func_D054(void);
void func_D0C5(void);
void func_D039(void);
void func_D07A(void);
void func_D05B(void);
void func_D09A(void);
void func_D058(void);
void func_D0C8(void);
void func_D060(void);
void func_D051(void);
void func_D19D(void);
void func_D0EC(void);
void func_D0EE(void);
void func_D0EF(void);
void func_D161(void);
void func_D08A(void);
void func_D093(void);
void func_D0B0(void);
void func_D090(void);
void func_D04A(void);
void func_C1DD(void);
void func_C1DF(void);
void func_C293(void);
void func_C313(void);
void func_C3ED(void);
void func_D342(void);
void func_D1D8(void);
void func_D3BD(void);
void func_D333(void);
void func_D3A9(void);
void func_D221(void);
void func_D2D0(void);
void func_D1F9(void);
void func_D1FA(void);
void func_D36C(void);
void func_D3AB(void);
void func_D2C7(void);
void func_D2D7(void);
void func_D3DA(void);
void func_D254(void);
void func_D27C(void);
void func_D2D5(void);
void func_D3D6(void);
void func_D3CD(void);
void func_D343(void);
void func_D3D4(void);
void func_D3C8(void);
void func_D2AA(void);
void func_D3B3(void);
void func_D2D9(void);
void func_D2DD(void);
void func_D3DE(void);
void func_D3B1(void);
void func_D28E(void);
void func_D288(void);
void func_D281(void);
void func_D28B(void);
void func_D28D(void);
void func_D383(void);
void func_D308(void);
void func_D393(void);
void func_D30A(void);
void func_D2B9(void);
void func_D3A5(void);
void func_D3C9(void);
void func_D3AD(void);
void func_C400(void);
void func_D3E4(void);
void func_D3E3(void);
void func_C496(void);
void func_D401(void);
void func_D3FF(void);
void func_D420(void);
void func_D479(void);
void func_D3F9(void);
void func_C47B(void);
void func_C56C(void);
void func_C5F4(void);
void func_D5BA(void);
void func_D589(void);
void func_D58A(void);
void func_D5CA(void);
void func_D5C0(void);
void func_D588(void);
void func_D578(void);
void func_D57C(void);
void func_D5C5(void);
void func_C647(void);
void func_C693(void);
void func_C697(void);
void func_D60A(void);
void func_D64A(void);
void func_D653(void);
void func_D656(void);
void func_D65A(void);
void func_D65B(void);
void func_D65E(void);
void func_D619(void);
void func_C73B(void);
void func_D6EE(void);
void func_D6FB(void);
void func_D6DD(void);
void func_D6C1(void);
void func_D6D9(void);
void func_D709(void);
void func_D677(void);
void func_D6B1(void);
void func_D70B(void);
void func_D6FD(void);
void func_D6CB(void);
void func_D67D(void);
void func_D6E1(void);
void func_D684(void);
void func_D6FF(void);
void func_D69F(void);
void func_D6A3(void);
void func_C744(void);
void func_D711(void);
void func_C746(void);
void func_C756(void);
void func_C75C(void);
void func_C7D4(void);
void func_D7B0(void);
void func_D75C(void);
void func_D78A(void);
void func_C836(void);
void func_D821(void);
void func_D7B1(void);
void func_D811(void);
void func_D80F(void);
void func_D814(void);
void func_C915(void);
void func_D8B9(void);
void func_D8BA(void);
void func_D8E0(void);
void func_D901(void);
void func_D8D9(void);
void func_D8E5(void);
void func_D8ED(void);
void func_D8B7(void);
void func_D8D2(void);
void func_D85E(void);
void func_D8D7(void);
void func_D8AA(void);
void func_D852(void);
void func_D8D0(void);
void func_D8FC(void);
void func_D8A1(void);
void func_D910(void);
void func_D89D(void);
void func_D880(void);
void func_D878(void);
void func_D890(void);
void func_D90F(void);
void func_D870(void);
void func_D87C(void);
void func_D898(void);
void func_D8A8(void);
void func_D868(void);
void func_D858(void);
void func_D907(void);
void func_D892(void);
void func_C920(void);
void func_CA16(void);
void func_DA20(void);
void func_D9D0(void);
void func_DA10(void);
void func_D951(void);
void func_D948(void);
void func_D9E8(void);
void func_DA00(void);
void func_DA09(void);
void func_D9C7(void);
void func_DA0B(void);
void func_D9D8(void);
void func_D9DE(void);
void func_D9A8(void);
void func_D98E(void);
void func_D9AA(void);
void func_D9F9(void);
void func_D9EC(void);
void func_D95C(void);
void func_D9C9(void);
void func_D9C5(void);
void func_D933(void);
void func_CAF5(void);
void func_D394(void);
void func_D3A0(void);
void func_9394_b0(void);
void func_B394_b0(void);
void func_9394_b1(void);
void func_B394_b1(void);
void func_9394_b2(void);
void func_B394_b2(void);
void func_9394_b3(void);
void func_B394_b3(void);
void func_9394_b4(void);
void func_B394_b4(void);
void func_B394_b5(void);
void func_9394_b6(void);
void func_B394_b6(void);
void func_D3D0(void);
void func_93D0_b0(void);
void func_B3D0_b0(void);
void func_93D0_b1(void);
void func_B3D0_b1(void);
void func_93D0_b2(void);
void func_B3D0_b2(void);
void func_B3D0_b3(void);
void func_93D0_b4(void);
void func_93D0_b5(void);
void func_B3D0_b5(void);
void func_93D0_b6(void);
void func_B3D0_b6(void);
void func_D341(void);
void func_9341_b0(void);
void func_B341_b0(void);
void func_9341_b1(void);
void func_B341_b1(void);
void func_9341_b2(void);
void func_B341_b2(void);
void func_9341_b3(void);
void func_B341_b3(void);
void func_9341_b4(void);
void func_B341_b4(void);
void func_B38D_b4(void);
void func_9341_b6(void);
void func_B341_b6(void);
void func_D377(void);
void func_9377_b0(void);
void func_B377_b0(void);
void func_9377_b1(void);
void func_B377_b1(void);
void func_9377_b2(void);
void func_B377_b2(void);
void func_9377_b3(void);
void func_B377_b3(void);
void func_9377_b4(void);
void func_B377_b4(void);
void func_B377_b5(void);
void func_9377_b6(void);
void func_B377_b6(void);
void func_D36F(void);
void func_936F_b0(void);
void func_B36F_b0(void);
void func_936F_b1(void);
void func_B36F_b1(void);
void func_936F_b2(void);
void func_B36F_b2(void);
void func_B36F_b3(void);
void func_936F_b4(void);
void func_B36F_b5(void);
void func_936F_b6(void);
void func_B36F_b6(void);
void func_D5E5(void);
void func_95E5_b0(void);
void func_B5E5_b0(void);
void func_95E5_b1(void);
void func_B5E5_b1(void);
void func_95E5_b2(void);
void func_B5E5_b2(void);
void func_B5E5_b3(void);
void func_95E5_b4(void);
void func_95E7_b4(void);
void func_B5E5_b4(void);
void func_B5E5_b5(void);
void func_95E5_b6(void);
void func_B5E5_b6(void);
void func_D77C(void);
void func_977C_b0(void);
void func_B77C_b0(void);
void func_977C_b1(void);
void func_B77C_b1(void);
void func_977C_b2(void);
void func_B77C_b2(void);
void func_977C_b3(void);
void func_B77C_b3(void);
void func_977C_b4(void);
void func_977C_b5(void);
void func_B77C_b5(void);
void func_B781_b5(void);
void func_977C_b6(void);
void func_B77C_b6(void);
void func_CF72(void);
void func_8F72_b0(void);
void func_AF72_b0(void);
void func_8F72_b1(void);
void func_AF72_b1(void);
void func_8F72_b2(void);
void func_AF72_b2(void);
void func_8F72_b3(void);
void func_AF72_b3(void);
void func_8F72_b4(void);
void func_AF72_b4(void);
void func_8F72_b5(void);
void func_AF72_b5(void);
void func_8F72_b6(void);
void func_AF72_b6(void);
void func_CFF3(void);
void func_8FF3_b0(void);
void func_AFF3_b0(void);
void func_8FF3_b1(void);
void func_AFF3_b1(void);
void func_8FF3_b2(void);
void func_AFF3_b2(void);
void func_8FF3_b3(void);
void func_AFF3_b3(void);
void func_8FF3_b4(void);
void func_AFF3_b4(void);
void func_8FF3_b5(void);
void func_8FF3_b6(void);
void func_AFF3_b6(void);
void func_CFE4(void);
void func_8FE4_b0(void);
void func_AFE4_b0(void);
void func_8FE4_b1(void);
void func_AFE4_b1(void);
void func_8FE4_b2(void);
void func_AFE4_b2(void);
void func_8FE4_b3(void);
void func_AFE4_b3(void);
void func_8FE4_b4(void);
void func_AFE4_b4(void);
void func_AFE4_b5(void);
void func_8FE4_b6(void);
void func_AFE4_b6(void);
void func_CD30(void);
void func_8D30_b0(void);
void func_AD30_b0(void);
void func_8D30_b1(void);
void func_AD30_b1(void);
void func_8D30_b2(void);
void func_AD30_b2(void);
void func_8D30_b3(void);
void func_8D30_b4(void);
void func_AD30_b4(void);
void func_AD30_b5(void);
void func_AD30_b6(void);
void func_CC71(void);
void func_8C71_b0(void);
void func_AC71_b0(void);
void func_8C71_b1(void);
void func_AC71_b1(void);
void func_8C71_b2(void);
void func_AC71_b2(void);
void func_8C71_b3(void);
void func_AC71_b3(void);
void func_8C71_b4(void);
void func_AC71_b4(void);
void func_8C71_b5(void);
void func_AC71_b5(void);
void func_8C71_b6(void);
void func_AC71_b6(void);
void func_CCDA(void);
void func_8CDA_b0(void);
void func_ACDA_b0(void);
void func_8CDA_b1(void);
void func_ACDA_b1(void);
void func_8CDA_b2(void);
void func_ACDA_b2(void);
void func_8CDA_b3(void);
void func_8CDA_b4(void);
void func_ACDA_b4(void);
void func_8CDA_b5(void);
void func_8CDA_b6(void);
void func_ACDA_b6(void);
void func_CD7D(void);
void func_DDB0(void);
void func_DC11(void);
void func_DCD0(void);
void func_DCD1(void);
void func_DB59(void);
void func_DB5A(void);
void func_DBA9(void);
void func_DBB0(void);
void func_DBA8(void);
void func_DBAC(void);
void func_DD7E(void);
void func_DC20(void);
void func_DCEF(void);
void func_DCEA(void);
void func_DCF1(void);
void func_DCDA(void);
void func_DCEC(void);
void func_DCF4(void);
void func_DAC0(void);
void func_DAC1(void);
void func_DCBE(void);
void func_DAF6(void);
void func_DCE2(void);
void func_DCD6(void);
void func_DCF7(void);
void func_DADC(void);
void func_DB4E(void);
void func_DBD7(void);
void func_DB7F(void);
void func_DBD9(void);
void func_DCA4(void);
void func_DD03(void);
void func_DBBF(void);
void func_DB00(void);
void func_DAAE(void);
void func_DACE(void);
void func_DA80(void);
void func_DAD0(void);
void func_DCDE(void);
void func_DCB0(void);
void func_DAE0(void);
void func_DB6F(void);
void func_DAD2(void);
void func_DBE7(void);
void func_DB60(void);
void func_DBB9(void);
void func_DDA9(void);
void func_DA89(void);
void func_DD08(void);
void func_DD01(void);
void func_DD10(void);
void func_DAA6(void);
void func_DD26(void);
void func_DD1A(void);
void func_DCBC(void);
void func_DAB4(void);
void func_DBB7(void);
void func_DD8F(void);
void func_DB43(void);
void func_DB1D(void);
void func_8D7D_b0(void);
void func_AD7D_b0(void);
void func_8D7D_b1(void);
void func_AD7D_b1(void);
void func_8D7D_b2(void);
void func_AD7D_b2(void);
void func_8D7D_b3(void);
void func_8D7D_b4(void);
void func_AD7D_b4(void);
void func_8D7D_b6(void);
void func_AD7D_b6(void);
void func_CDE7(void);
void func_CD5F(void);
void func_8D5F_b0(void);
void func_AD5F_b0(void);
void func_8D5F_b1(void);
void func_AD5F_b1(void);
void func_8D5F_b2(void);
void func_AD5F_b2(void);
void func_8D5F_b4(void);
void func_AD5F_b4(void);
void func_AD5F_b5(void);
void func_8D5F_b6(void);
void func_AD5F_b6(void);
void func_E11E(void);
void func_F524(void);
void func_BCE1_b4(void);
void func_BD1D_b4(void);
void func_BD26_b4(void);
void func_BD7F_b4(void);
void func_BDD0_b4(void);
void func_BDD6_b4(void);
void func_BE28_b4(void);
void func_BDC9_b4(void);
void func_BDDC_b4(void);
void func_BE42_b4(void);
void func_BDE7_b4(void);
void func_BDF4_b4(void);
void func_BE01_b4(void);
void func_BE07_b4(void);
void func_BE0E_b4(void);
void func_BE9A_b4(void);
void func_BC9D_b5(void);
void func_BCE1_b5(void);
void func_9AD3_b5(void);
void func_9AFF_b5(void);
void func_BAD3_b5(void);
void func_BCE3_b5(void);
void func_9B59_b5(void);
void func_9B65_b5(void);
void func_BB59_b5(void);
void func_98CE_b5(void);
void func_98F0_b5(void);
void func_98D0_b5(void);
void func_9901_b5(void);
void func_9905_b5(void);
void func_9906_b5(void);
void func_B8CE_b5(void);
void func_B8D0_b5(void);
void func_B9B7_b5(void);
void func_B9B9_b5(void);
void func_9224_b5(void);
void func_9229_b5(void);
void func_B224_b5(void);
void func_BDDE_b5(void);
void func_AC4D_b5(void);
void func_BF91_b5(void);
void func_BF12_b5(void);
void func_BF51_b5(void);
void func_C015(void);
void func_D031(void);
void func_D033(void);
void func_AB21_b3(void);
void func_9790_b4(void);
void func_9522_b4(void);
void func_8050_b4(void);
void func_E7D0(void);
void func_AB7B_b5(void);
void func_AB88_b5(void);
void func_AB8A_b5(void);
void func_ACE9_b6(void);
void func_AE27_b6(void);
void func_AE32_b6(void);
void func_AE37_b6(void);
void func_AE92_b6(void);
void func_AED2_b6(void);
void func_B42B_b6(void);
void func_B43B_b6(void);
void func_B453_b6(void);
void func_B45E_b6(void);
void func_B4C3_b6(void);
void func_B51F_b6(void);
void func_8009_b0(void);
void func_8009_b1(void);
void func_8009_b2(void);
void func_8009_b3(void);
void func_8009_b4(void);
void func_8009_b5(void);
void func_8009_b6(void);
void func_D46D(void);
void func_946D_b0(void);
void func_B46D_b0(void);
void func_946D_b1(void);
void func_B46D_b1(void);
void func_946D_b2(void);
void func_B46D_b2(void);
void func_946D_b3(void);
void func_B46D_b3(void);
void func_946D_b4(void);
void func_946D_b5(void);
void func_9471_b5(void);
void func_B46D_b5(void);
void func_946D_b6(void);
void func_B46D_b6(void);
void func_800C_b0(void);
void func_800C_b1(void);
void func_800C_b2(void);
void func_800C_b3(void);
void func_800C_b4(void);
void func_800C_b5(void);
void func_800C_b6(void);
void func_DA23(void);
void func_9A23_b0(void);
void func_BA23_b0(void);
void func_9A23_b1(void);
void func_BA23_b1(void);
void func_9A23_b2(void);
void func_BA23_b2(void);
void func_9A23_b3(void);
void func_BA23_b3(void);
void func_9A23_b4(void);
void func_BA23_b4(void);
void func_9A23_b5(void);
void func_BA23_b5(void);
void func_9A23_b6(void);
void func_BA23_b6(void);
void func_D444(void);
void func_9444_b0(void);
void func_B444_b0(void);
void func_9444_b1(void);
void func_B444_b1(void);
void func_9444_b2(void);
void func_B444_b2(void);
void func_B444_b3(void);
void func_9444_b4(void);
void func_9444_b6(void);
void func_9985_b6(void);
void func_9986_b6(void);
void func_B444_b6(void);
void func_CD93(void);
void func_DDCD(void);
void func_DDD0(void);
void func_DDCB(void);
void func_8D93_b0(void);
void func_AD93_b0(void);
void func_8D93_b1(void);
void func_AD93_b1(void);
void func_8D93_b2(void);
void func_AD93_b2(void);
void func_8D93_b3(void);
void func_8D93_b4(void);
void func_AD93_b4(void);
void func_8D93_b6(void);
void func_AD93_b6(void);
void func_BF2A_b4(void);
void func_BFFE_b7(void);
void func_C039(void);
void func_C053(void);
void func_D130(void);
void func_D195(void);
void func_D201(void);
void func_D278(void);
void func_D280(void);
void func_C452(void);
void func_8012_b2(void);
void func_8015_b2(void);
void func_D5F5(void);
void func_8000_b2(void);
void func_8003_b2(void);
void func_D796(void);
void func_D576(void);
void func_D59B(void);
void func_C5E6(void);
void func_D60D(void);
void func_D662(void);
void func_800F_b2(void);
void func_D6B8(void);
void func_D7E8(void);
void func_D6F4(void);
void func_D756(void);
void func_C74C(void);
void func_C74E(void);
void func_8006_b2(void);
void func_C736(void);
void func_C743(void);
void func_EDF6(void);
void func_C831(void);
void func_D920(void);
void func_C84B(void);
void func_C852(void);
void func_D83D(void);
void func_D832(void);
void func_D841(void);
void func_D835(void);
void func_D844(void);
void func_D842(void);
void func_CA11(void);
void func_D963(void);
void func_CA2B(void);
void func_CA32(void);
void func_9388_b5(void);
void func_BB90_b6(void);
void func_BBCA_b6(void);
void func_BCC0_b6(void);
void func_9352_b4(void);
void func_B3DA_b4(void);
void func_B3F7_b4(void);
void func_B409_b4(void);
void func_B412_b4(void);
void func_B424_b4(void);
void func_B436_b4(void);
void func_B467_b4(void);
void func_B488_b4(void);
void func_B50C_b4(void);
void func_B505_b4(void);
void func_B523_b4(void);
void func_B4F0_b4(void);
void func_B537_b4(void);
void func_B4DA_b4(void);
void func_B568_b4(void);
void func_B595_b4(void);
void func_B59B_b4(void);
void func_B59D_b4(void);
void func_B5D5_b4(void);
void func_B61B_b4(void);
void func_B624_b4(void);
void func_B62D_b4(void);
void func_B648_b4(void);
void func_B6B8_b4(void);
void func_B664_b4(void);
void func_B686_b4(void);
void func_B6A1_b4(void);
void func_B6D4_b4(void);
void func_B711_b4(void);
void func_B705_b4(void);
void func_B723_b4(void);
void func_B7AA_b4(void);
void func_B7B5_b4(void);
void func_B7BE_b4(void);
void func_B75C_b4(void);
void func_B767_b4(void);
void func_B772_b4(void);
void func_B77D_b4(void);
void func_B802_b4(void);
void func_B7D5_b4(void);
void func_B7DE_b4(void);
void func_B868_b4(void);
void func_B85B_b4(void);
void func_B8FA_b4(void);
void func_B920_b4(void);
void func_B953_b4(void);
void func_B95F_b4(void);
void func_BA01_b4(void);
void func_BA06_b4(void);
void func_BA58_b4(void);
void func_E035(void);
void func_BB12_b4(void);
void func_BABD_b4(void);
void func_BAD0_b4(void);
void func_BAE9_b4(void);
void func_BAFC_b4(void);
void func_BB5A_b4(void);
void func_BB73_b4(void);
void func_BB9F_b4(void);
void func_BBCB_b4(void);
void func_BBF7_b4(void);
void func_BC23_b4(void);
void func_BC3A_b4(void);
void func_BC5B_b4(void);
void func_94B6_b5(void);
void func_97C0_b5(void);
void func_97C7_b5(void);
void func_B7C0_b5(void);
void func_B3C8_b5(void);
void func_932F_b4(void);
void func_B34B_b4(void);
void func_803C_b4(void);
void func_A03C_b4(void);
void func_B365_b4(void);
void func_B3B3_b4(void);
void func_B3FE_b4(void);
void func_EC77(void);
void func_9324_b6(void);
void func_B2F2_b6(void);
void func_B2F8_b6(void);
void func_B3CA_b0(void);
void func_B4CA_b0(void);
void func_B74B_b0(void);
void func_BC95_b0(void);
void func_BCBA_b0(void);
void func_BDF7_b0(void);
void func_BF8B_b0(void);
void func_BFBD_b0(void);
void func_98C0_b5(void);
void func_B8C0_b5(void);
void func_92F3_b0(void);
void func_B459_b5(void);
void func_B460_b5(void);
void func_960D_b0(void);
void func_B60D_b0(void);
void func_960D_b1(void);
void func_B60D_b1(void);
void func_960D_b2(void);
void func_B60D_b2(void);
void func_960D_b3(void);
void func_B60D_b3(void);
void func_B801_b3(void);
void func_960D_b4(void);
void func_B60D_b4(void);
void func_B60D_b5(void);
void func_960D_b6(void);
void func_B60D_b6(void);
void func_9662_b0(void);
void func_B662_b0(void);
void func_9662_b1(void);
void func_B662_b1(void);
void func_9662_b2(void);
void func_B662_b2(void);
void func_9662_b3(void);
void func_B662_b3(void);
void func_9662_b4(void);
void func_B662_b4(void);
void func_9662_b5(void);
void func_B662_b5(void);
void func_9662_b6(void);
void func_B662_b6(void);
void func_800F_b0(void);
void func_800F_b1(void);
void func_800F_b3(void);
void func_800F_b4(void);
void func_800F_b5(void);
void func_800F_b6(void);
void func_9586_b4(void);
void func_959B_b4(void);
void func_95A3_b4(void);
void func_9615_b5(void);
void func_8006_b0(void);
void func_8006_b1(void);
void func_8006_b3(void);
void func_8006_b4(void);
void func_8006_b6(void);
void func_975A_b2(void);
void func_AF84_b4(void);
void func_AF9F_b4(void);
void func_AFBF_b4(void);
void func_B06A_b4(void);
void func_B071_b4(void);
void func_B072_b4(void);
void func_B09A_b4(void);
void func_B0A8_b4(void);
void func_B0AF_b4(void);
void func_B0D0_b4(void);
void func_B0D6_b4(void);
void func_B13E_b4(void);
void func_B0F2_b4(void);
void func_B131_b4(void);
void func_B144_b4(void);
void func_BFBF_b4(void);
void func_B152_b4(void);
void func_B154_b4(void);
void func_B16F_b4(void);
void func_B173_b4(void);
void func_B1AE_b4(void);
void func_B1B7_b4(void);
void func_B1C0_b4(void);
void func_B1C9_b4(void);
void func_B1D2_b4(void);
void func_B1DB_b4(void);
void func_B1F1_b4(void);
void func_B250_b4(void);
void func_B2BE_b4(void);
void func_B266_b4(void);
void func_B27D_b4(void);
void func_B28B_b4(void);
void func_B2AC_b4(void);
void func_B2D8_b4(void);
void func_B2E8_b4(void);
void func_8F9B_b5(void);
void func_8FBF_b5(void);
void func_8FA9_b5(void);
void func_8825_b0(void);
void func_A825_b0(void);
void func_8825_b1(void);
void func_A825_b1(void);
void func_8825_b2(void);
void func_A825_b2(void);
void func_8825_b3(void);
void func_A825_b3(void);
void func_8825_b4(void);
void func_A825_b4(void);
void func_A825_b5(void);
void func_A825_b6(void);
void func_8F89_b6(void);
void func_8FA5_b6(void);
void func_8F0A_b6(void);
void func_8F12_b6(void);
void func_8FB5_b6(void);
void func_9009_b0(void);
void func_B009_b0(void);
void func_9009_b1(void);
void func_B009_b1(void);
void func_9009_b2(void);
void func_B009_b2(void);
void func_9009_b3(void);
void func_B009_b3(void);
void func_9009_b4(void);
void func_B009_b4(void);
void func_9009_b5(void);
void func_B009_b5(void);
void func_9009_b6(void);
void func_B009_b6(void);
void func_9067_b6(void);
void func_9054_b6(void);
void func_9048_b6(void);
void func_90EC_b6(void);
void func_91FE_b6(void);
void func_9247_b6(void);
void func_9249_b6(void);
void func_926A_b6(void);
void func_929C_b6(void);
void func_92D4_b6(void);
void func_92EE_b6(void);
void func_931C_b6(void);
void func_93FD_b6(void);
void func_9418_b6(void);
void func_9456_b6(void);
void func_9507_b6(void);
void func_94F9_b6(void);
void func_94D9_b6(void);
void func_9521_b6(void);
void func_9549_b6(void);
void func_9612_b6(void);
void func_9646_b6(void);
void func_9666_b6(void);
void func_850F_b0(void);
void func_A50F_b0(void);
void func_850F_b1(void);
void func_A50F_b1(void);
void func_850F_b2(void);
void func_A50F_b2(void);
void func_850F_b3(void);
void func_A50F_b3(void);
void func_850F_b4(void);
void func_A50F_b4(void);
void func_850F_b5(void);
void func_A50F_b5(void);
void func_A50F_b6(void);
void func_96C3_b6(void);
void func_96EE_b6(void);
void func_972C_b6(void);
void func_97BC_b6(void);
void func_980F_b6(void);
void func_97F6_b6(void);
void func_982A_b6(void);
void func_98AC_b6(void);
void func_98FD_b6(void);
void func_990D_b6(void);
void func_FB10(void);
void func_9949_b6(void);
void func_9937_b6(void);
void func_9958_b6(void);
void func_9981_b6(void);
void func_9A47_b6(void);
void func_9A4B_b6(void);
void func_FB00(void);
void func_9AC6_b6(void);
void func_9AEB_b6(void);
void func_9B12_b6(void);
void func_9B6A_b6(void);
void func_9B9C_b6(void);
void func_9BA3_b6(void);
void func_9C63_b6(void);
void func_9CDB_b6(void);
void func_AF07_b6(void);
void func_B02D_b2(void);
void func_B774_b2(void);
void func_B9AF_b2(void);
void func_B9E2_b2(void);
void func_BA49_b2(void);
void func_BA85_b2(void);
void func_9087_b3(void);
void func_912C_b3(void);
void func_A0AD_b3(void);
void func_A0BC_b3(void);
void func_9163_b3(void);
void func_9174_b3(void);
void func_9264_b3(void);
void func_9436_b3(void);
void func_950F_b3(void);
void func_9528_b3(void);
void func_97A6_b3(void);
void func_8FE0_b4(void);
void func_AFC4_b6(void);
void func_AFDD_b6(void);
void func_9002_b5(void);
void func_94EA_b5(void);
void func_9514_b5(void);
void func_9500_b5(void);
void func_B4EA_b5(void);
void func_9AC2_b5(void);
void func_9ACA_b5(void);
void func_BAC2_b5(void);
void func_CC61(void);
void func_CC66(void);
void func_AC8E_b0(void);
void func_AD0E_b0(void);
void func_AE0E_b0(void);
void func_AD27_b3(void);
void func_F526(void);
void func_B264_b3(void);
void func_B33C_b3(void);
void func_B359_b3(void);
void func_B66E_b3(void);
void func_B656_b3(void);
void func_B3C4_b3(void);
void func_CDA4(void);
void func_CDAD(void);
void func_8DA4_b0(void);
void func_ADA4_b0(void);
void func_8DA4_b1(void);
void func_ADA4_b1(void);
void func_8DA4_b2(void);
void func_ADA4_b2(void);
void func_8DA4_b3(void);
void func_8DA4_b4(void);
void func_ADA4_b4(void);
void func_8DA4_b5(void);
void func_ADA4_b5(void);
void func_8DA4_b6(void);
void func_ADA4_b6(void);
void func_8097_b3(void);
void func_B76B_b3(void);
void func_8107_b3(void);
void func_A107_b3(void);
void func_8804_b3(void);
void func_A804_b3(void);
void func_B827_b3(void);
void func_B80A_b3(void);
void func_99BD_b3(void);
void func_B9BD_b3(void);
void func_B838_b3(void);
void func_B839_b3(void);
void func_C32C(void);
void func_832C_b0(void);
void func_A32C_b0(void);
void func_832C_b1(void);
void func_A32C_b1(void);
void func_832C_b2(void);
void func_A32C_b2(void);
void func_832C_b3(void);
void func_A32C_b3(void);
void func_832C_b4(void);
void func_A32C_b4(void);
void func_832C_b5(void);
void func_A32C_b5(void);
void func_A34C_b5(void);
void func_832C_b6(void);
void func_A32C_b6(void);
void func_B8FA_b3(void);
void func_E905(void);
void func_E907(void);
void func_C628(void);
void func_D5D1(void);
void func_D600(void);
void func_D601(void);
void func_D5E0(void);
void func_8628_b0(void);
void func_A628_b0(void);
void func_8628_b1(void);
void func_A628_b1(void);
void func_8628_b2(void);
void func_A628_b2(void);
void func_8628_b3(void);
void func_A628_b3(void);
void func_8628_b4(void);
void func_A628_b4(void);
void func_8628_b5(void);
void func_8D06_b5(void);
void func_9404_b5(void);
void func_8629_b5(void);
void func_96B8_b5(void);
void func_96F4_b5(void);
void func_96C0_b5(void);
void func_96EA_b5(void);
void func_9708_b5(void);
void func_9700_b5(void);
void func_A628_b5(void);
void func_8628_b6(void);
void func_A628_b6(void);
void func_B92B_b3(void);
void func_924A_b3(void);
void func_B24A_b3(void);
void func_BE39_b3(void);
void func_BCCE_b3(void);
void func_BEA8_b3(void);
void func_BE4C_b3(void);
void func_BFBF_b3(void);
void func_BF20_b3(void);
void func_C788(void);
void func_D71E(void);
void func_D731(void);
void func_D743(void);
void func_8788_b0(void);
void func_A788_b0(void);
void func_8788_b1(void);
void func_A788_b1(void);
void func_8788_b2(void);
void func_A788_b2(void);
void func_8788_b3(void);
void func_A788_b3(void);
void func_8788_b4(void);
void func_A788_b4(void);
void func_A788_b5(void);
void func_8788_b6(void);
void func_A788_b6(void);
void func_8D40_b3(void);
void func_8D5F_b3(void);
void func_AD40_b3(void);
void func_9001_b3(void);
void func_9E39_b3(void);
void func_93D0_b3(void);
void func_936F_b3(void);
void func_95E5_b3(void);
void func_9C75_b3(void);
void func_9CB6_b3(void);
void func_9444_b3(void);
void func_A097_b3(void);
void func_9C33_b3(void);
void func_9796_b3(void);
void func_9C27_b3(void);
void func_9A21_b3(void);
void func_9408_b3(void);
void func_99F0_b3(void);
void func_96F4_b3(void);
void func_9756_b3(void);
void func_9950_b3(void);
void func_9920_b3(void);
void func_99BB_b3(void);
void func_9EA8_b3(void);
void func_959B_b3(void);
void func_9576_b3(void);
void func_92F6_b3(void);
void func_9FBF_b3(void);
void func_93CD_b3(void);
void func_B001_b3(void);
void func_8358_b3(void);
void func_A358_b3(void);
void func_8C04_b3(void);
void func_AC04_b3(void);
void func_AD30_b3(void);
void func_ACDA_b3(void);
void func_AD7D_b3(void);
void func_AD5F_b3(void);
void func_AD93_b3(void);
void func_ADA4_b3(void);
void func_BB92_b3(void);
void func_BC27_b3(void);
void func_BB65_b3(void);
void func_B9F0_b3(void);
void func_B6B8_b3(void);
void func_B7E8_b3(void);
void func_B756_b3(void);
void func_B920_b3(void);
void func_B63A_b3(void);
void func_B757_b3(void);
void func_B81B_b3(void);
void func_BB62_b3(void);
void func_BB0F_b3(void);
void func_B406_b3(void);
void func_B38E_b3(void);
void func_C711(void);
void func_8711_b0(void);
void func_A711_b0(void);
void func_8711_b1(void);
void func_A711_b1(void);
void func_8711_b2(void);
void func_A711_b2(void);
void func_8711_b3(void);
void func_A711_b3(void);
void func_8711_b4(void);
void func_A711_b4(void);
void func_A80A_b4(void);
void func_A711_b5(void);
void func_A723_b5(void);
void func_8711_b6(void);
void func_A711_b6(void);
void func_9004_b3(void);
void func_B004_b3(void);
void func_BADB_b3(void);
void func_BAF8_b3(void);
void func_BB7F_b3(void);
void func_BB5A_b3(void);
void func_BB7C_b3(void);
void func_BBBF_b3(void);
void func_BB8C_b3(void);
void func_BBAE_b3(void);
void func_BBD7_b3(void);
void func_BC05_b3(void);
void func_BBED_b3(void);
void func_BC5E_b3(void);
void func_979E_b4(void);
void func_8C6F_b4(void);
void func_8D01_b6(void);
void func_AC3E_b6(void);
void func_AD43_b4(void);
void func_AD7C_b4(void);
void func_8001_b4(void);
void func_A001_b4(void);
void func_AE33_b4(void);
void func_AE2B_b4(void);
void func_AE46_b4(void);
void func_AE76_b4(void);
void func_AE21_b4(void);
void func_AE6F_b4(void);
void func_AE81_b4(void);
void func_AE94_b4(void);
void func_AE97_b4(void);
void func_AEA1_b4(void);
void func_AEBF_b4(void);
void func_AEE7_b4(void);
void func_AEDD_b4(void);
void func_AEE0_b4(void);
void func_AF05_b4(void);
void func_AF18_b4(void);
void func_AF1E_b4(void);
void func_AF27_b4(void);
void func_AF57_b4(void);
void func_AF66_b4(void);
void func_AF75_b4(void);
void func_ACD9_b6(void);
void func_CD50(void);
void func_DB92(void);
void func_DC27(void);
void func_DB65(void);
void func_801E_b2(void);
void func_AFB3_b1(void);
void func_8FB3_b1(void);
void func_8DB7_b3(void);
void func_8DB8_b3(void);
void func_A739_b3(void);
void func_8739_b3(void);
void func_94C7_b4(void);
void func_F04D(void);
void func_F05F(void);
void func_F05A(void);
void func_F055(void);
void func_F064(void);
void func_F062(void);
void func_F053(void);
void func_98A0_b5(void);
void func_98A9_b5(void);
void func_B8A0_b5(void);
void func_B920_b5(void);
void func_B8A6_b5(void);
void func_B8BA_b5(void);
void func_B8AA_b5(void);
void func_B937_b5(void);
void func_BD21_b4(void);
void func_BCA3_b5(void);
void func_BCA9_b5(void);
void func_BCE6_b5(void);
void func_BD10_b5(void);
void func_BD05_b5(void);
void func_BD24_b5(void);
void func_BCF1_b5(void);
void func_BD1F_b5(void);
void func_BD02_b5(void);
void func_BCFA_b5(void);
void func_EA8C(void);
void func_BA06_b5(void);
void func_BA08_b5(void);
void func_BA35_b5(void);
void func_9366_b5(void);
void func_9394_b5(void);
void func_9377_b5(void);
void func_936F_b5(void);
void func_B366_b5(void);
void func_9518_b5(void);
void func_9523_b5(void);
void func_9520_b5(void);
void func_B518_b5(void);
void func_E613(void);
void func_B42A_b6(void);
void func_B419_b6(void);
void func_998B_b6(void);
void func_B98B_b6(void);
void func_848F_b4(void);
void func_816C_b6(void);
void func_8000_b0(void);
void func_8000_b1(void);
void func_8000_b3(void);
void func_8000_b4(void);
void func_8000_b5(void);
void func_8000_b6(void);
void func_8003_b0(void);
void func_8003_b1(void);
void func_8003_b3(void);
void func_8003_b4(void);
void func_8003_b5(void);
void func_8003_b6(void);
void func_9796_b0(void);
void func_B796_b0(void);
void func_9796_b1(void);
void func_B796_b1(void);
void func_9796_b2(void);
void func_B796_b2(void);
void func_B796_b3(void);
void func_9796_b4(void);
void func_B796_b4(void);
void func_B796_b5(void);
void func_9796_b6(void);
void func_B796_b6(void);
void func_B440_b4(void);
void func_B470_b5(void);
void func_8478_b4(void);
void func_8005_b5(void);
void func_8BBE_b6(void);
void func_9B92_b0(void);
void func_BB92_b0(void);
void func_9B92_b1(void);
void func_BB92_b1(void);
void func_9B92_b2(void);
void func_BB92_b2(void);
void func_9B92_b3(void);
void func_9B92_b4(void);
void func_BB92_b5(void);
void func_9B92_b6(void);
void func_BB92_b6(void);
void func_9C27_b0(void);
void func_BC27_b0(void);
void func_9C27_b1(void);
void func_BC27_b1(void);
void func_9C27_b2(void);
void func_BC27_b2(void);
void func_9C27_b4(void);
void func_BC27_b4(void);
void func_9C27_b6(void);
void func_BC27_b6(void);
void func_9BAF_b0(void);
void func_BBAF_b0(void);
void func_9BAF_b1(void);
void func_BBAF_b1(void);
void func_9BAF_b2(void);
void func_BBAF_b2(void);
void func_9BAF_b3(void);
void func_BBAF_b3(void);
void func_9BAF_b4(void);
void func_BBAF_b4(void);
void func_9BAF_b5(void);
void func_9BAF_b6(void);
void func_BBAF_b6(void);
void func_9B65_b0(void);
void func_BB65_b0(void);
void func_9B65_b1(void);
void func_BB65_b1(void);
void func_9B65_b2(void);
void func_BB65_b2(void);
void func_9B65_b3(void);
void func_9B65_b4(void);
void func_BB65_b4(void);
void func_9B65_b6(void);
void func_BB65_b6(void);
void func_9AF7_b4(void);
void func_9AE4_b4(void);
void func_9B23_b4(void);
void func_9BD1_b4(void);
void func_9BD8_b4(void);
void func_9CBB_b4(void);
void func_9C8D_b4(void);
void func_9D0F_b4(void);
void func_9D2A_b4(void);
void func_9D5C_b4(void);
void func_9DD4_b4(void);
void func_9DC9_b4(void);
void func_9DED_b4(void);
void func_9ECE_b4(void);
void func_9EE5_b4(void);
void func_9F13_b4(void);
void func_9F2C_b4(void);
void func_A070_b4(void);
void func_A0C3_b4(void);
void func_A0F4_b4(void);
void func_A176_b4(void);
void func_A14E_b4(void);
void func_A22E_b4(void);
void func_A1E5_b4(void);
void func_A1E7_b4(void);
void func_A231_b4(void);
void func_A24A_b4(void);
void func_A257_b4(void);
void func_A279_b4(void);
void func_A2AB_b4(void);
void func_A2C4_b4(void);
void func_A316_b4(void);
void func_A33E_b4(void);
void func_A3CC_b4(void);
void func_A3E1_b4(void);
void func_A3BA_b4(void);
void func_A456_b4(void);
void func_A407_b4(void);
void func_A43B_b4(void);
void func_A46E_b4(void);
void func_A505_b4(void);
void func_A4A8_b4(void);
void func_A4B6_b4(void);
void func_A4EE_b4(void);
void func_A510_b4(void);
void func_A589_b4(void);
void func_A51E_b4(void);
void func_A534_b4(void);
void func_A548_b4(void);
void func_A591_b4(void);
void func_A5A6_b4(void);
void func_A5C2_b4(void);
void func_A5E3_b4(void);
void func_A60D_b4(void);
void func_A6DD_b4(void);
void func_A71C_b4(void);
void func_A737_b4(void);
void func_A753_b4(void);
void func_A7A9_b4(void);
void func_A7E9_b4(void);
void func_A80D_b4(void);
void func_A90A_b4(void);
void func_A829_b4(void);
void func_A83D_b4(void);
void func_A8B6_b4(void);
void func_A859_b4(void);
void func_A867_b4(void);
void func_A89C_b4(void);
void func_A8FB_b4(void);
void func_B9F4_b6(void);
void func_8012_b0(void);
void func_8012_b1(void);
void func_8012_b3(void);
void func_8012_b4(void);
void func_8012_b5(void);
void func_8012_b6(void);
void func_95F5_b0(void);
void func_B5F5_b0(void);
void func_95F5_b1(void);
void func_B5F5_b1(void);
void func_95F5_b2(void);
void func_B5F5_b2(void);
void func_95F5_b3(void);
void func_B5F5_b3(void);
void func_95F5_b4(void);
void func_B5F5_b4(void);
void func_95F5_b5(void);
void func_95F5_b6(void);
void func_B5F5_b6(void);
void func_9447_b4(void);
void func_94B4_b4(void);
void func_95F1_b4(void);
void func_965D_b4(void);
void func_95FE_b4(void);
void func_9615_b4(void);
void func_966F_b4(void);
void func_96C5_b4(void);
void func_9893_b4(void);
void func_98B0_b4(void);
void func_992F_b4(void);
void func_98CE_b4(void);
void func_98D0_b4(void);
void func_98DE_b4(void);
void func_98F2_b4(void);
void func_996C_b4(void);
void func_99FD_b4(void);
void func_99A7_b4(void);
void func_9A45_b4(void);
void func_99F2_b4(void);
void func_9A05_b4(void);
void func_943C_b6(void);
void func_9D07_b6(void);
void func_9E17_b6(void);
void func_A795_b6(void);
void func_8015_b6(void);
void func_A015_b6(void);
void func_8050_b6(void);
void func_A050_b6(void);
void func_A055_b6(void);
void func_A0F1_b6(void);
void func_A467_b6(void);
void func_8676_b6(void);
void func_A676_b6(void);
void func_CB10(void);
void func_8B10_b0(void);
void func_AB10_b0(void);
void func_8B10_b1(void);
void func_AB10_b1(void);
void func_8B10_b2(void);
void func_AB10_b2(void);
void func_8B10_b3(void);
void func_AB10_b3(void);
void func_8B10_b4(void);
void func_AB10_b4(void);
void func_AB10_b5(void);
void func_8B10_b6(void);
void func_AB10_b6(void);
void func_CB13(void);
void func_8B13_b0(void);
void func_AB13_b0(void);
void func_8B13_b1(void);
void func_AB13_b1(void);
void func_8B13_b2(void);
void func_AB13_b2(void);
void func_8B13_b3(void);
void func_AB13_b3(void);
void func_8B13_b4(void);
void func_AB13_b4(void);
void func_8B13_b5(void);
void func_AB13_b5(void);
void func_8B13_b6(void);
void func_AB13_b6(void);
void func_80C3_b6(void);
void func_80F1_b6(void);
void func_A0C3_b6(void);
void func_8082_b6(void);
void func_A082_b6(void);
void func_A091_b6(void);
void func_D0F5(void);
void func_DDF6(void);
void func_E00C(void);
void func_D0FF(void);
void func_E00A(void);
void func_E110(void);
void func_E02A(void);
void func_E000(void);
void func_E0C9(void);
void func_DEE9(void);
void func_DF01(void);
void func_DF02(void);
void func_E021(void);
void func_E0AA(void);
void func_DE72(void);
void func_E11F(void);
void func_DE8B(void);
void func_DF3E(void);
void func_E088(void);
void func_E121(void);
void func_E0C0(void);
void func_E0C1(void);
void func_E022(void);
void func_DE4C(void);
void func_DFBF(void);
void func_DFB5(void);
void func_DF95(void);
void func_E04C(void);
void func_E04D(void);
void func_E180(void);
void func_E040(void);
void func_DE61(void);
void func_DFD0(void);
void func_E095(void);
void func_E060(void);
void func_E0FF(void);
void func_E099(void);
void func_E0FC(void);
void func_E0ED(void);
void func_DED4(void);
void func_DEDE(void);
void func_E009(void);
void func_E0E4(void);
void func_E0E5(void);
void func_E0F6(void);
void func_E0F7(void);
void func_E0D5(void);
void func_DEB1(void);
void func_E010(void);
void func_DF59(void);
void func_DFE2(void);
void func_E012(void);
void func_E164(void);
void func_E0E1(void);
void func_DECB(void);
void func_DE5A(void);
void func_DDDC(void);
void func_DFDD(void);
void func_E0DE(void);
void func_DDD8(void);
void func_DED8(void);
void func_DEF5(void);
void func_DE65(void);
void func_DFA3(void);
void func_E140(void);
void func_E003(void);
void func_E004(void);
void func_E034(void);
void func_DEB6(void);
void func_DFD4(void);
void func_DDDF(void);
void func_DDE2(void);
void func_DEE3(void);
void func_DFB3(void);
void func_DEDD(void);
void func_DFE1(void);
void func_DED2(void);
void func_E103(void);
void func_DF89(void);
void func_E184(void);
void func_E18F(void);
void func_E08F(void);
void func_DF13(void);
void func_DF0E(void);
void func_DF16(void);
void func_E0FD(void);
void func_DEFC(void);
void func_DFF5(void);
void func_DDFD(void);
void func_E028(void);
void func_DF10(void);
void func_E006(void);
void func_E036(void);
void func_E188(void);
void func_E08A(void);
void func_DF8E(void);
void func_DF88(void);
void func_DF08(void);
void func_DFEF(void);
void func_DDED(void);
void func_DFA9(void);
void func_DE94(void);
void func_DE9A(void);
void func_DE08(void);
void func_DE03(void);
void func_DE11(void);
void func_DE0B(void);
void func_DEAB(void);
void func_DE06(void);
void func_DEEC(void);
void func_E14C(void);
void func_E02E(void);
void func_E0D8(void);
void func_E054(void);
void func_E030(void);
void func_E065(void);
void func_DEFB(void);
void func_DFB8(void);
void func_DFB2(void);
void func_DF04(void);
void func_E102(void);
void func_DDD9(void);
void func_DFD5(void);
void func_DDF8(void);
void func_DFF8(void);
void func_DF8F(void);
void func_E108(void);
void func_E062(void);
void func_D197(void);
void func_DEA8(void);
void func_C354(void);
void func_9ACA_b0(void);
void func_9ACA_b1(void);
void func_9ACA_b2(void);
void func_9ACA_b3(void);
void func_9ACA_b4(void);
void func_9ACA_b6(void);
void func_D9F0(void);
void func_99F0_b0(void);
void func_B9F0_b0(void);
void func_99F0_b1(void);
void func_B9F0_b1(void);
void func_99F0_b2(void);
void func_B9F0_b2(void);
void func_99F0_b4(void);
void func_99F0_b5(void);
void func_B9F0_b5(void);
void func_99F0_b6(void);
void func_B9F0_b6(void);
void func_C444(void);
void func_96B8_b0(void);
void func_B6B8_b0(void);
void func_96B8_b1(void);
void func_B6B8_b1(void);
void func_96B8_b2(void);
void func_B6B8_b2(void);
void func_96B8_b3(void);
void func_96B8_b4(void);
void func_96B8_b6(void);
void func_B6B8_b6(void);
void func_97E8_b0(void);
void func_B7E8_b0(void);
void func_97E8_b1(void);
void func_B7E8_b1(void);
void func_97E8_b2(void);
void func_B7E8_b2(void);
void func_97E8_b3(void);
void func_97E8_b4(void);
void func_97E8_b6(void);
void func_B7E8_b6(void);
void func_96F4_b0(void);
void func_B6F4_b0(void);
void func_96F4_b1(void);
void func_B6F4_b1(void);
void func_96F4_b2(void);
void func_B6F4_b2(void);
void func_B6F4_b3(void);
void func_96F4_b4(void);
void func_B6F4_b4(void);
void func_B6F4_b5(void);
void func_96F4_b6(void);
void func_B6F4_b6(void);
void func_9756_b0(void);
void func_B756_b0(void);
void func_9756_b1(void);
void func_B756_b1(void);
void func_9756_b2(void);
void func_B756_b2(void);
void func_9756_b4(void);
void func_9756_b6(void);
void func_B756_b6(void);
void func_9950_b0(void);
void func_B950_b0(void);
void func_9950_b1(void);
void func_B950_b1(void);
void func_9950_b2(void);
void func_B950_b2(void);
void func_B950_b3(void);
void func_9950_b4(void);
void func_9950_b6(void);
void func_B950_b6(void);
void func_9920_b0(void);
void func_B920_b0(void);
void func_9920_b1(void);
void func_B920_b1(void);
void func_9920_b2(void);
void func_B920_b2(void);
void func_9920_b4(void);
void func_9920_b5(void);
void func_9930_b5(void);
void func_9925_b5(void);
void func_9920_b6(void);
void func_B920_b6(void);
void func_9842_b0(void);
void func_B842_b0(void);
void func_9842_b1(void);
void func_B842_b1(void);
void func_9842_b2(void);
void func_B842_b2(void);
void func_9842_b3(void);
void func_B842_b3(void);
void func_9842_b4(void);
void func_B842_b5(void);
void func_9842_b6(void);
void func_B842_b6(void);
void func_881F_b4(void);
void func_A81F_b4(void);
void func_B5AB_b4(void);
void func_B875_b4(void);
void func_B851_b4(void);
void func_B9A0_b4(void);
void func_BB67_b4(void);
void func_BBA7_b4(void);
void func_BBD5_b4(void);
void func_9802_b5(void);
void func_9803_b5(void);
void func_9806_b5(void);
void func_9842_b5(void);
void func_B791_b5(void);
void func_9304_b6(void);
void func_930C_b6(void);
void func_B2A2_b6(void);
void func_B2A8_b6(void);
void func_B29E_b6(void);
void func_B2B6_b6(void);
void func_B2BC_b6(void);
void func_B2F5_b6(void);
void func_BFAD_b0(void);
void func_BF2E_b0(void);
void func_9649_b1(void);
void func_963B_b1(void);
void func_9672_b1(void);
void func_B420_b1(void);
void func_9420_b1(void);
void func_9717_b1(void);
void func_9727_b1(void);
void func_979E_b1(void);
void func_97D7_b1(void);
void func_8602_b1(void);
void func_988E_b1(void);
void func_993A_b1(void);
void func_9942_b1(void);
void func_99EA_b1(void);
void func_9A13_b1(void);
void func_9A05_b1(void);
void func_9A78_b1(void);
void func_9A8E_b1(void);
void func_9A9D_b1(void);
void func_9AB0_b1(void);
void func_A622_b1(void);
void func_8622_b1(void);
void func_9B30_b1(void);
void func_E900(void);
void func_9BB4_b1(void);
void func_8030_b1(void);
void func_9C25_b1(void);
void func_9C62_b1(void);
void func_9C71_b1(void);
void func_9300_b1(void);
void func_9E7F_b1(void);
void func_E868(void);
void func_BCD9_b3(void);
void func_BCCC_b3(void);
void func_BDF9_b3(void);
void func_960A_b4(void);
void func_961C_b2(void);
void func_963A_b2(void);
void func_9658_b2(void);
void func_8BCA_b6(void);
void func_8437_b4(void);
void func_9015_b5(void);
void func_8A5B_b6(void);
void func_8A88_b6(void);
void func_8A73_b6(void);
void func_B082_b4(void);
void func_B158_b4(void);
void func_B179_b4(void);
void func_9B6E_b5(void);
void func_9B92_b5(void);
void func_9C27_b5(void);
void func_9C11_b5(void);
void func_9C01_b5(void);
void func_9BB9_b5(void);
void func_9BCF_b5(void);
void func_8F8B_b5(void);
void func_8FC2_b5(void);
void func_9001_b5(void);
void func_8FE4_b5(void);
void func_8FC9_b5(void);
void func_9014_b5(void);
void func_FC13(void);
void func_FC41(void);
void func_FC74(void);
void func_FC30(void);
void func_FC39(void);
void func_FC25(void);
void func_FC37(void);
void func_FC4D(void);
void func_FC55(void);
void func_FC20(void);
void func_FC18(void);
void func_FC1C(void);
void func_FC3B(void);
void func_FC23(void);
void func_A835_b3(void);
void func_AB75_b3(void);
void func_ABAB_b3(void);
void func_8895_b6(void);
void func_A822_b6(void);
void func_A803_b6(void);
void func_AFBF_b5(void);
void func_AFC1_b5(void);
void func_92B8_b6(void);
void func_92D0_b6(void);
void func_92D8_b6(void);
void func_92E0_b6(void);
void func_9402_b6(void);
void func_940A_b6(void);
void func_9412_b6(void);
void func_84F2_b5(void);
void func_85E1_b6(void);
void func_E457(void);
void func_8390_b6(void);
void func_A390_b6(void);
void func_837D_b6(void);
void func_A37D_b6(void);
void func_8361_b6(void);
void func_A361_b6(void);
void func_83A8_b6(void);
void func_A3A8_b6(void);
void func_828F_b6(void);
void func_A28F_b6(void);
void func_A3E0_b6(void);
void func_832F_b6(void);
void func_A32F_b6(void);
void func_A3CA_b6(void);
void func_83D9_b6(void);
void func_A3D9_b6(void);
void func_EEF1(void);
void func_85BE_b6(void);
void func_A5BE_b6(void);
void func_A5EA_b6(void);
void func_A513_b6(void);
void func_A58E_b6(void);
void func_A596_b6(void);
void func_A5AB_b6(void);
void func_8B16_b0(void);
void func_AB16_b0(void);
void func_8B16_b1(void);
void func_AB16_b1(void);
void func_8B16_b2(void);
void func_AB16_b2(void);
void func_8B16_b3(void);
void func_AB16_b3(void);
void func_8B16_b4(void);
void func_AB16_b4(void);
void func_AB16_b5(void);
void func_AB18_b5(void);
void func_8B16_b6(void);
void func_AB16_b6(void);
void func_8607_b6(void);
void func_A607_b6(void);
void func_A609_b6(void);
void func_A619_b6(void);
void func_CB19(void);
void func_8B19_b0(void);
void func_AB19_b0(void);
void func_8B19_b1(void);
void func_AB19_b1(void);
void func_8B19_b2(void);
void func_AB19_b2(void);
void func_8B19_b3(void);
void func_AB19_b3(void);
void func_8B19_b4(void);
void func_AB19_b4(void);
void func_AB19_b5(void);
void func_8B19_b6(void);
void func_AB19_b6(void);
void func_8609_b6(void);
void func_8619_b6(void);
void func_A635_b6(void);
void func_A6A3_b6(void);
void func_A687_b6(void);
void func_A6C9_b6(void);
void func_8694_b6(void);
void func_A694_b6(void);
void func_A699_b6(void);
void func_9A5D_b6(void);
void func_CB1C(void);
void func_8B1C_b0(void);
void func_AB1C_b0(void);
void func_8B1C_b1(void);
void func_AB1C_b1(void);
void func_8B1C_b2(void);
void func_AB1C_b2(void);
void func_8B1C_b3(void);
void func_AB1C_b3(void);
void func_8B1C_b4(void);
void func_AB1C_b4(void);
void func_AB1C_b5(void);
void func_AB26_b5(void);
void func_8B1C_b6(void);
void func_AB1C_b6(void);
void func_884E_b6(void);
void func_A84E_b6(void);
void func_9B8E_b6(void);
void func_BA04_b2(void);
void func_FCA5(void);
void func_FBD9(void);
void func_FC0A(void);
void func_BB2C_b5(void);
void func_BB4A_b5(void);
void func_F9F2(void);
void func_FA00(void);
void func_FA10(void);
void func_FA0C(void);
void func_F9F7(void);
void func_F9F8(void);
void func_F9FA(void);
void func_F9FB(void);
void func_FA08(void);
void func_F9FE(void);
void func_F9F5(void);
void func_FA30(void);
void func_FA0E(void);
void func_A0EF_b3(void);
void func_A102_b3(void);
void func_B869_b3(void);
void func_B7DD_b3(void);
void func_C2CC(void);
void func_82E4_b5(void);
void func_8302_b5(void);
void func_EC72(void);
void func_A37D_b5(void);
void func_9A97_b5(void);
void func_BA97_b5(void);
void func_BA9B_b5(void);
void func_9AA4_b5(void);
void func_9AA9_b5(void);
void func_BAA4_b5(void);
void func_EB97(void);
void func_85E5_b3(void);
void func_A5D8_b3(void);
void func_A60E_b3(void);
void func_85D1_b4(void);
void func_86B3_b5(void);
void func_8788_b5(void);
void func_8711_b5(void);
void func_8774_b5(void);
void func_86C1_b5(void);
void func_870D_b5(void);
void func_8A27_b5(void);
void func_8C6D_b5(void);
void func_8F19_b5(void);
void func_8F29_b5(void);
void func_8F30_b5(void);
void func_8F4F_b5(void);
void func_904E_b5(void);
void func_9051_b5(void);
void func_9083_b5(void);
void func_9095_b5(void);
void func_9060_b5(void);
void func_90C3_b5(void);
void func_90C9_b5(void);
void func_910A_b5(void);
void func_913C_b5(void);
void func_9159_b5(void);
void func_914C_b5(void);
void func_9143_b5(void);
void func_911A_b5(void);
void func_911F_b5(void);
void func_9131_b5(void);
void func_917D_b5(void);
void func_9213_b5(void);
void func_943A_b5(void);
void func_9460_b5(void);
void func_9444_b5(void);
void func_9568_b5(void);
void func_9594_b5(void);
void func_959B_b5(void);
void func_97E1_b5(void);
void func_97E8_b5(void);
void func_9800_b5(void);
void func_EC48(void);
void func_EC51(void);
void func_96A0_b5(void);
void func_9912_b5(void);
void func_9918_b5(void);
void func_993A_b5(void);
void func_9950_b5(void);
void func_994A_b5(void);
void func_A65A_b5(void);
void func_A67F_b5(void);
void func_A68B_b5(void);
void func_87F1_b1(void);
void func_8811_b1(void);
void func_8841_b1(void);
void func_891F_b1(void);
void func_8ADF_b1(void);
void func_8AF1_b1(void);
void func_8B11_b1(void);
void func_8B3E_b1(void);
void func_8B57_b1(void);
void func_8BF2_b1(void);
void func_8FC9_b0(void);
void func_AFC9_b0(void);
void func_8FC9_b1(void);
void func_AFC9_b1(void);
void func_8FC9_b2(void);
void func_AFC9_b2(void);
void func_8FC9_b3(void);
void func_AFC9_b3(void);
void func_8FC9_b4(void);
void func_AFC9_b4(void);
void func_AFC9_b5(void);
void func_8FC9_b6(void);
void func_AFC9_b6(void);
void func_8FDF_b1(void);
void func_907B_b1(void);
void func_9150_b1(void);
void func_91BE_b1(void);
void func_91A2_b1(void);
void func_888E_b1(void);
void func_F19F(void);
void func_9223_b1(void);
void func_8DF2_b0(void);
void func_ADF2_b0(void);
void func_8DF2_b1(void);
void func_ADF2_b1(void);
void func_8DF2_b2(void);
void func_ADF2_b2(void);
void func_8DF2_b3(void);
void func_ADF2_b3(void);
void func_8DF2_b4(void);
void func_ADF2_b4(void);
void func_8DF2_b6(void);
void func_ADF2_b6(void);
void func_93ED_b1(void);
void func_94D2_b1(void);
void func_A73F_b3(void);
void func_876D_b5(void);
void func_876F_b5(void);
void func_8771_b5(void);
void func_8775_b5(void);
void func_8772_b5(void);
void func_8B66_b6(void);
void func_8703_b3(void);
void func_A78A_b3(void);
void func_A7FC_b3(void);
void func_A82C_b3(void);
void func_A8F1_b4(void);
void func_A9B5_b4(void);
void func_A95C_b4(void);
void func_A971_b4(void);
void func_A9F9_b4(void);
void func_AA05_b4(void);
void func_AA64_b4(void);
void func_AA5C_b4(void);
void func_AAE4_b4(void);
void func_AB76_b4(void);
void func_AB37_b4(void);
void func_AB65_b4(void);
void func_AB9F_b4(void);
void func_ABAD_b4(void);
void func_AC46_b4(void);
void func_ABFC_b4(void);
void func_AC37_b4(void);
void func_AC47_b4(void);
void func_BC31_b3(void);
void func_8CFA_b6(void);
void func_8D02_b6(void);
void func_8D30_b6(void);
void func_8D00_b6(void);
void func_8D07_b6(void);
void func_AEB3_b4(void);
void func_AED1_b4(void);
void func_AF0B_b4(void);
void func_8021_b0(void);
void func_8021_b1(void);
void func_8021_b2(void);
void func_8021_b3(void);
void func_8021_b4(void);
void func_8021_b5(void);
void func_80BD_b5(void);
void func_80BB_b5(void);
void func_80E9_b5(void);
void func_80E7_b5(void);
void func_80E5_b5(void);
void func_8021_b6(void);
void func_801E_b0(void);
void func_801E_b1(void);
void func_801E_b3(void);
void func_801E_b4(void);
void func_801E_b5(void);
void func_801E_b6(void);
void func_B514_b5(void);
void func_8707_b6(void);
void func_81B5_b6(void);
void func_84CE_b6(void);
void func_84EA_b6(void);
void func_850F_b6(void);
void func_84EC_b6(void);
void func_8513_b6(void);
void func_854E_b6(void);
void func_8500_b6(void);
void func_850B_b6(void);
void func_8522_b6(void);
void func_8531_b6(void);
void func_8515_b6(void);
void func_8502_b6(void);
void func_8520_b6(void);
void func_851E_b6(void);
void func_854C_b6(void);
void func_8523_b6(void);
void func_8506_b6(void);
void func_8504_b6(void);
void func_850D_b6(void);
void func_8538_b6(void);
void func_8542_b6(void);
void func_8527_b6(void);
void func_8549_b6(void);
void func_8501_b6(void);
void func_8536_b6(void);
void func_8525_b6(void);
void func_8534_b6(void);
void func_8561_b6(void);
void func_86B9_b6(void);
void func_86E3_b6(void);
void func_8023_b4(void);
void func_871D_b6(void);
void func_9778_b2(void);
void func_9794_b4(void);
void func_9EFC_b0(void);
void func_BC34_b1(void);
void func_BC38_b1(void);
void func_BC46_b1(void);
void func_BC5A_b1(void);
void func_BC76_b1(void);
void func_BC41_b1(void);
void func_BC97_b1(void);
void func_BD54_b1(void);
void func_BD66_b1(void);
void func_BD77_b1(void);
void func_BD97_b1(void);
void func_BDF0_b1(void);
void func_9C22_b0(void);
void func_9C5B_b0(void);
void func_9CB7_b0(void);
void func_9D35_b0(void);
void func_9D52_b0(void);
void func_9DD4_b0(void);
void func_9E46_b0(void);
void func_9E5C_b0(void);
void func_9EE4_b0(void);
void func_9F52_b0(void);
void func_9F2B_b0(void);
void func_8288_b0(void);
void func_9F5D_b0(void);
void func_8500_b0(void);
void func_9FB1_b0(void);
void func_A002_b0(void);
void func_A18E_b0(void);
void func_A20E_b0(void);
void func_A28E_b0(void);
void func_A38E_b0(void);
void func_A3C9_b0(void);
void func_A419_b0(void);
void func_A40E_b0(void);
void func_A469_b0(void);
void func_A48E_b0(void);
void func_A51A_b0(void);
void func_A56A_b0(void);
void func_A58E_b0(void);
void func_A68E_b0(void);
void func_A78E_b0(void);
void func_A88E_b0(void);
void func_A919_b0(void);
void func_A90E_b0(void);
void func_A96A_b0(void);
void func_A98E_b0(void);
void func_9C1B_b5(void);
void func_9C1D_b5(void);
void func_98AF_b5(void);
void func_B8AF_b5(void);
void func_A3E1_b1(void);
void func_A5E1_b1(void);
void func_A23D_b4(void);
void func_A4BC_b4(void);
void func_A4F4_b4(void);
void func_A526_b4(void);
void func_A53A_b4(void);
void func_A741_b4(void);
void func_A7F1_b4(void);
void func_A813_b4(void);
void func_A82F_b4(void);
void func_A8A6_b4(void);
void func_A93A_b4(void);
void func_B9D5_b6(void);
void func_8049_b5(void);
void func_8C29_b6(void);
void func_98DC_b4(void);
void func_9A4F_b4(void);
void func_8227_b6(void);
void func_EDB2(void);
void func_95B3_b1(void);
void func_964D_b1(void);
void func_AB36_b5(void);
void func_AB4A_b5(void);
void func_AB11_b5(void);
void func_9EA8_b0(void);
void func_BEA8_b0(void);
void func_9EA8_b1(void);
void func_BEA8_b1(void);
void func_9EA8_b2(void);
void func_BEA8_b2(void);
void func_9EA8_b4(void);
void func_BEA8_b4(void);
void func_9EA8_b5(void);
void func_9EAA_b5(void);
void func_BEA8_b5(void);
void func_9EA8_b6(void);
void func_BEA8_b6(void);
void func_C32A(void);
void func_9A4C_b5(void);
void func_9A81_b5(void);
void func_9A69_b5(void);
void func_B9CE_b5(void);
void func_B9FE_b5(void);
void func_B9FD_b5(void);
void func_B9D0_b5(void);
void func_B9E9_b5(void);
void func_9676_b2(void);
void func_97D8_b4(void);
void func_97E5_b6(void);
void func_B7E0_b6(void);
void func_9686_b1(void);
void func_96F1_b2(void);
void func_A9E4_b1(void);
void func_98FE_b2(void);
void func_B8B3_b3(void);
void func_E4BF(void);
void func_B94C_b4(void);
void func_9851_b5(void);
void func_988B_b5(void);
void func_988D_b5(void);
void func_973A_b1(void);
void func_96ED_b1(void);
void func_8AAA_b6(void);
void func_8AE6_b6(void);
void func_EEF3(void);
void func_EDC0(void);
void func_EDD0(void);
void func_EDCD(void);
void func_EDEF(void);
void func_EDED(void);
void func_EDEA(void);
void func_EDE1(void);
void func_EDDD(void);
void func_858A_b6(void);
void func_8567_b6(void);
void func_8583_b6(void);
void func_8575_b6(void);
void func_8590_b6(void);
void func_8588_b6(void);
void func_85FF_b6(void);
void func_857F_b6(void);
void func_85E0_b6(void);
void func_8601_b6(void);
void func_85A0_b6(void);
void func_85CB_b6(void);
void func_85AE_b6(void);
void func_A944_b6(void);
void func_8302_b6(void);
void func_8873_b6(void);
void func_8888_b6(void);
void func_BD7F_b2(void);
void func_BD8B_b2(void);
void func_BD8E_b2(void);
void func_BD94_b2(void);
void func_C300(void);
void func_8300_b0(void);
void func_A300_b0(void);
void func_8300_b1(void);
void func_A300_b1(void);
void func_8300_b2(void);
void func_A300_b2(void);
void func_8300_b3(void);
void func_A300_b3(void);
void func_8300_b4(void);
void func_A300_b4(void);
void func_A300_b5(void);
void func_8300_b6(void);
void func_A300_b6(void);
void func_FAC8(void);
void func_FAD0(void);
void func_FAD5(void);
void func_FAD2(void);
void func_FAE1(void);
void func_A0AB_b3(void);
void func_827E_b5(void);
void func_829C_b5(void);
void func_82B0_b5(void);
void func_8300_b5(void);
void func_9AB5_b5(void);
void func_9AB9_b5(void);
void func_BAB5_b5(void);
void func_A5FB_b3(void);
void func_A5FE_b3(void);
void func_A5D0_b3(void);
void func_9734_b5(void);
void func_974C_b5(void);
void func_9760_b5(void);
void func_9756_b5(void);
void func_9790_b5(void);
void func_9796_b5(void);
void func_97A8_b5(void);
void func_97AE_b5(void);
void func_8F18_b5(void);
void func_8F88_b1(void);
void func_9171_b1(void);
void func_AE2D_b2(void);
void func_AF27_b2(void);
void func_AB3F_b4(void);
void func_AB6D_b4(void);
void func_BC45_b3(void);
void func_AEC5_b4(void);
void func_AEE3_b4(void);
void func_801D_b3(void);
void func_89BF_b6(void);
void func_89A4_b6(void);
void func_824E_b6(void);
void func_821F_b6(void);
void func_8261_b6(void);
void func_BC20_b1(void);
void func_82BC_b0(void);
void func_89B6_b0(void);
void func_89F6_b0(void);
void func_8A36_b0(void);
void func_8A76_b0(void);
void func_8C9B_b0(void);
void func_AA19_b0(void);
void func_AA0E_b0(void);
void func_AA8E_b0(void);
void func_AB0E_b0(void);
void func_AB8E_b0(void);
void func_AC19_b0(void);
void func_AC0E_b0(void);
void func_A7C8_b0(void);
void func_A4C4_b4(void);
void func_A4FC_b4(void);
void func_A7F7_b4(void);
void func_A81B_b4(void);
void func_B9B6_b6(void);
void func_9A5B_b4(void);
void func_8292_b6(void);
void func_EBE0(void);
void func_BE60_b6(void);
void func_96D3_b2(void);
void func_EB4A(void);
void func_BD2E_b2(void);
void func_8038_b4(void);
void func_825E_b5(void);
void func_8264_b5(void);
void func_ED51(void);
void func_AED7_b4(void);
void func_AED9_b4(void);
void func_8289_b6(void);
void func_81B7_b6(void);
void func_879E_b6(void);
void func_A4CA_b4(void);
void func_A7FF_b4(void);
void func_9A61_b4(void);
void func_81F6_b5(void);
void func_AEE9_b4(void);
void func_A4D2_b4(void);
void func_9A86_b4(void);
void func_8180_b5(void);
void func_81A4_b5(void);
void func_8206_b5(void);
void func_8282_b5(void);
void func_8200_b5(void);
void func_81BC_b5(void);
void func_A4D8_b4(void);
void func_8146_b5(void);
void func_8174_b5(void);
void func_F0FF(void);
void func_F100(void);
void func_F001(void);
void func_F060(void);
void func_F0F0(void);
void func_F0F1(void);
void func_F00F(void);
void func_F5FF(void);
void func_F7FF(void);
void func_F750(void);
void func_F0F7(void);
void func_F0F8(void);
void func_F5AB(void);
void func_F5AC(void);
void func_FA7F(void);
void func_FA80(void);
void func_F758(void);
void func_FA5B(void);
void func_FA5C(void);
void func_F460(void);
void func_F4F4(void);
void func_F4F5(void);
void func_F575(void);
void func_F500(void);
void func_F501(void);
void func_F900(void);
void func_F0AF(void);
void func_F0B0(void);
void func_F0BB(void);
void func_F0BC(void);
void func_F04F(void);
void func_F050(void);
void func_F400(void);
void func_F401(void);
void func_F440(void);
void func_F4FF(void);
void func_F00A(void);
void func_F4F0(void);
void func_F58F(void);
void func_F007(void);
void func_F0A4(void);
void func_F0A5(void);
void func_F0BF(void);
void func_F0C0(void);
void func_F508(void);
void func_F509(void);
void func_F5F6(void);
void func_F50A(void);
void func_F50B(void);
void func_F510(void);
void func_FAAF(void);
void func_F70A(void);
void func_F40F(void);
void func_F410(void);
void func_F85A(void);
void func_FA81(void);
void func_F80B(void);
void func_F546(void);
void func_F570(void);
void func_F84F(void);
void func_F0F9(void);
void func_F556(void);
void func_FA0F(void);
void func_FBB6(void);
void func_F480(void);
void func_FBF0(void);
void func_FBF1(void);
void func_FB71(void);
void func_F7F4(void);
void func_F40A(void);
void func_F40B(void);
void func_F05B(void);
void func_F44F(void);
void func_F450(void);
void func_F504(void);
void func_F505(void);
void func_F0F5(void);
void func_F0F6(void);
void func_FB8C(void);
void func_F88F(void);
void func_F740(void);
void func_F742(void);
void func_F74F(void);
void func_F760(void);
void func_F757(void);
void func_F751(void);
void func_F74A(void);
void func_F0A6(void);
void func_F408(void);
void func_F409(void);
void func_F47A(void);
void func_F47B(void);
void func_F478(void);
void func_FA7C(void);
void func_F55A(void);
void func_F5F0(void);
void func_F7AA(void);
void func_F5A8(void);
void func_F44B(void);
void func_F44C(void);
void func_F48C(void);
void func_F0AA(void);
void func_F0AB(void);
void func_F0B1(void);
void func_F4A1(void);
void func_F004(void);
void func_F801(void);
void func_F7F8(void);
void func_F4B0(void);
void func_F0A1(void);
void func_F056(void);
void func_F0F4(void);
void func_F471(void);
void func_F041(void);
void func_DDAF(void);
void func_F7FB(void);
void func_DD80(void);
void func_DD9A(void);
void func_F4DD(void);
void func_F4DE(void);
void func_F5BF(void);
void func_DDF5(void);
void func_DE18(void);
void func_F4FE(void);
void func_F0FA(void);
void func_F0FB(void);
void func_F57C(void);
void func_FA8F(void);
void func_FE4F(void);
void func_F551(void);
void func_F8A8(void);
void func_F0B7(void);
void func_F0B8(void);
void func_F856(void);
void func_F4F8(void);
void func_F4F9(void);
void func_F457(void);
void func_F459(void);
void func_F45F(void);
void func_F481(void);
void func_F477(void);
void func_F48B(void);
void func_F4A0(void);
void func_F4B1(void);
void func_F470(void);
void func_F4AB(void);
void func_F475(void);
void func_F4A9(void);
void func_F4BE(void);
void func_F4C1(void);
void func_F4AD(void);
void func_F497(void);
void func_F495(void);
void func_F486(void);
void func_F498(void);
void func_F489(void);
void func_F48E(void);
void func_F48F(void);
void func_F491(void);
void func_F493(void);
void func_F496(void);
void func_F49A(void);
void func_F49C(void);
void func_F49E(void);
void func_F4A2(void);
void func_F4A4(void);
void func_F4A8(void);
void func_F4B3(void);
void func_F4B6(void);
void func_F483(void);
void func_F458(void);
void func_F0B5(void);
void func_F0B6(void);
void func_F54B(void);
void func_F0AC(void);
void func_F0BA(void);
void func_F4AA(void);
void func_F474(void);
void func_F574(void);
void func_D04D(void);
void func_D3D1(void);
void func_D378(void);
void func_D385(void);
void func_D370(void);
void func_D5E6(void);
void func_D77D(void);
void func_C901(void);
void func_CF73(void);
void func_F321(void);
void func_CFF4(void);
void func_C5C0(void);
void func_E420(void);
void func_CD31(void);
void func_D6B9(void);
void func_D1D6(void);
void func_D1D7(void);
void func_D5B9(void);
void func_D7B9(void);
void func_D7BA(void);
void func_CC72(void);
void func_E00B(void);
void func_C90D(void);
void func_D003(void);
void func_D004(void);
void func_C510(void);
void func_F00E(void);
void func_E60B(void);
void func_E60C(void);
void func_C90A(void);
void func_CA12(void);
void func_E111(void);
void func_EAF0(void);
void func_E690(void);
void func_E691(void);
void func_D0AD(void);
void func_D0AC(void);
void func_D0AF(void);
void func_E9D0(void);
void func_E9D1(void);
void func_D101(void);
void func_CE6E(void);
void func_D17E(void);
void func_D17C(void);
void func_DDD1(void);
void func_DDD2(void);
void func_D198(void);
void func_CACD(void);
void func_E90A(void);
void func_E90B(void);
void func_C603(void);
void func_E029(void);
void func_F904(void);
void func_FA31(void);
void func_C9C8(void);
void func_C9ED(void);
void func_C9EB(void);
void func_CD60(void);
void func_D3BE(void);
void func_DDBE(void);
void func_CDDD(void);
void func_CDFF(void);
void func_CD94(void);
void func_CE11(void);
void func_CE4C(void);
void func_CE79(void);
void func_CE8D(void);
void func_CE9D(void);
void func_CEAD(void);
void func_CEB1(void);
void func_CF26(void);
void func_CEBF(void);
void func_C6CE(void);
void func_CEC7(void);
void func_CECF(void);
void func_D7CE(void);
void func_D7CF(void);
void func_CED8(void);
void func_EACF(void);
void func_CEEB(void);
void func_F0CD(void);
void func_F0CF(void);
void func_F0D1(void);
void func_F0D4(void);
void func_F0CE(void);
void func_CEF1(void);
void func_CF31(void);
void func_CF41(void);
void func_CF56(void);
void func_C081(void);
void func_E0C8(void);
void func_E8AA(void);
void func_E8AB(void);
void func_DEE8(void);
void func_F003(void);
void func_EDF0(void);
void func_EDF1(void);
void func_C80C(void);
void func_DC10(void);
void func_E806(void);
void func_E807(void);
void func_E0E9(void);
void func_F306(void);
void func_F307(void);
void func_FC02(void);
void func_C502(void);
void func_FE02(void);
void func_EF01(void);
void func_D501(void);
void func_CB00(void);
void func_DDEE(void);
void func_DDEF(void);
void func_CCDE(void);
void func_CCBC(void);
void func_DDCC(void);
void func_E020(void);
void func_D030(void);
void func_D8E1(void);
void func_CA20(void);
void func_CAFC(void);
void func_D0CB(void);
void func_E880(void);
void func_E881(void);
void func_E8A0(void);
void func_E8A1(void);
void func_F620(void);
void func_D2F7(void);
void func_FA11(void);
void func_D120(void);
void func_E5D2(void);
void func_CFC0(void);
void func_E803(void);
void func_E804(void);
void func_F0E0(void);
void func_F0E1(void);
void func_D0F0(void);
void func_F6D0(void);
void func_CD8D(void);
void func_D339(void);
void func_D33A(void);
void func_EF96(void);
void func_F39E(void);
void func_D334(void);
void func_F695(void);
void func_F0D0(void);
void func_FD87(void);
void func_FE87(void);
void func_FE8F(void);
void func_FF96(void);
void func_FF01(void);
void func_FC8E(void);
void func_C550(void);
void func_C555(void);
void func_D500(void);
void func_D4E3(void);
void func_D4E0(void);
void func_D4E1(void);
void func_D4D8(void);
void func_D4F5(void);
void func_D4F1(void);
void func_D4DB(void);
void func_D4E5(void);
void func_D4DD(void);
void func_D4FC(void);
void func_D4E7(void);
void func_D4F3(void);
void func_D4ED(void);
void func_D4EF(void);
void func_D4D5(void);
void func_D4CE(void);
void func_D4D3(void);
void func_D4C9(void);
void func_D4CC(void);
void func_D4A9(void);
void func_D49E(void);
void func_D4B9(void);
void func_D4BB(void);
void func_D4B1(void);
void func_D507(void);
void func_D49D(void);
void func_D4A1(void);
void func_D50B(void);
void func_E624(void);
void func_E625(void);
void func_E802(void);
void func_E8E8(void);
void func_E8E9(void);
void func_E538(void);
void func_F011(void);
void func_E938(void);
void func_C6E5(void);
void func_F221(void);
void func_D46E(void);
void func_F021(void);
void func_F8C9(void);
void func_F8CA(void);
void func_DA24(void);
void func_D445(void);
void func_D451(void);
void func_D0FE(void);
void func_FD85(void);
void func_F54D(void);
void func_D5F6(void);
void func_D797(void);
void func_D0D0(void);
void func_D0D1(void);
void func_EDD1(void);
void func_E410(void);
void func_E411(void);
void func_CAB1(void);
void func_F210(void);
void func_F211(void);
void func_D0A9(void);
void func_F0A2(void);
void func_F0A3(void);
void func_E0A9(void);
void func_C6D7(void);
void func_EA20(void);
void func_EA22(void);
void func_EA24(void);
void func_E9EB(void);
void func_D60E(void);
void func_D663(void);
void func_FE8D(void);
void func_D64E(void);
void func_D652(void);
void func_D657(void);
void func_CA01(void);
void func_D7E9(void);
void func_E6D3(void);
void func_E6D4(void);
void func_F420(void);
void func_F421(void);
void func_EA11(void);
void func_EEB9(void);
void func_EECE(void);
void func_D6EF(void);
void func_E67B(void);
void func_C981(void);
void func_F025(void);
void func_F086(void);
void func_ECF0(void);
void func_D000(void);
void func_D3AA(void);
void func_D055(void);
void func_F24C(void);
void func_F24D(void);
void func_C4B9(void);
void func_D7DC(void);
void func_D7DD(void);
void func_D7D7(void);
void func_D7D8(void);
void func_F711(void);
void func_D921(void);
void func_F811(void);
void func_CAA0(void);
void func_CC8F(void);
void func_E801(void);
void func_D843(void);
void func_F8AA(void);
void func_E8E5(void);
void func_E8E6(void);
void func_E963(void);
void func_E321(void);
void func_E4E4(void);
void func_E418(void);
void func_D94E(void);
void func_D950(void);
void func_D949(void);
void func_EC11(void);
void func_FDA4(void);
void func_E8B9(void);
void func_E8BA(void);
void func_D9E9(void);
void func_CA80(void);
void func_CA78(void);
void func_E9AB(void);
void func_E9AE(void);
void func_C0A9(void);
void func_E8A9(void);
void func_E84F(void);
void func_E850(void);
void func_C6E6(void);
void func_D07B(void);
void func_EAA9(void);
void func_EABD(void);
void func_EAAA(void);
void func_E437(void);
void func_CBAA(void);
void func_DCA9(void);
void func_DCAA(void);
void func_C94B(void);
void func_D032(void);
void func_D5D0(void);
void func_DBAD(void);
void func_DBAF(void);
void func_F0DB(void);
void func_F0DC(void);
void func_F310(void);
void func_F311(void);
void func_DE3A(void);
void func_DCCF(void);
void func_E8DC(void);
void func_CB26(void);
void func_E6EE(void);
void func_E6EF(void);
void func_E64A(void);
void func_E64B(void);
void func_C000(void);
void func_C001(void);
void func_C002(void);
void func_C004(void);
void func_C192(void);
void func_C3AD(void);
void func_C487(void);
void func_C5AF(void);
void func_C833(void);
void func_CA13(void);
void func_C825(void);
void func_D009(void);
void func_C50F(void);
void func_C361(void);
void func_C735(void);
void func_CB16(void);
void func_CFC9(void);
void func_CDF2(void);
void func_C314(void);
void func_C72C(void);
void func_C900(void);
void func_C902(void);
void func_D002(void);
void func_C904(void);
void func_C688(void);
void func_CE3E(void);
void func_CE3F(void);
void func_CE42(void);
void func_CE43(void);
void func_CE6C(void);
void func_CE6D(void);
void func_CE6F(void);
void func_CD73(void);
void func_CD7E(void);
void func_CACE(void);
void func_C6CA(void);
void func_C80B(void);
void func_C9C9(void);
void func_C8CD(void);
void func_C8CE(void);
void func_CDD3(void);
void func_CDD4(void);
void func_CDDE(void);
void func_CE78(void);
void func_CE9C(void);
void func_CEAC(void);
void func_CF25(void);
void func_CEBE(void);
void func_C6CF(void);
void func_CEC6(void);
void func_CECE(void);
void func_CED7(void);
void func_CEEA(void);
void func_CEF0(void);
void func_CF30(void);
void func_CF40(void);
void func_CF55(void);
void func_CE98(void);
void func_CE99(void);
void func_CA03(void);
void func_CA04(void);
void func_C803(void);
void func_C8C9(void);
void func_C816(void);
void func_CF03(void);
void func_C501(void);
void func_CCDD(void);
void func_CCBB(void);
void func_CA21(void);
void func_CAFB(void);
void func_C8E8(void);
void func_C8E9(void);
void func_CD39(void);
void func_CAF6(void);
void func_CAF7(void);
void func_C551(void);
void func_CAAA(void);
void func_CAB0(void);
void func_D024(void);
void func_D026(void);
void func_C600(void);
void func_CA02(void);
void func_D001(void);
void func_CFA9(void);
void func_CAA1(void);
void func_CA8E(void);
void func_CC8E(void);
void func_C662(void);
void func_CA79(void);
void func_C0AA(void);
void func_CBA9(void);
void func_C619(void);
void func_CE21(void);
void func_CEA9(void);
void func_D00F(void);
void func_C90C(void);
void func_CA1F(void);
void func_C801(void);
void func_CA6A(void);
void func_C480(void);
void func_C0A0(void);
void func_C0A1(void);
void func_CA09(void);
void func_CA05(void);
void func_C420(void);
void func_C421(void);
void func_CFB4(void);
void func_CFB5(void);
void func_CAE0(void);
void func_D011(void);
void func_CCAD(void);
void func_D007(void);
void func_CBEE(void);
void func_CBAE(void);
void func_CAAD(void);
void func_CAAE(void);
void func_C9FD(void);
void func_D005(void);
void func_CA77(void);
void func_CA0B(void);
void func_CC8D(void);
void func_C980(void);
void func_C061(void);
void func_C401(void);
void func_CC00(void);
void func_C01D(void);
void func_C014(void);
void func_C00C(void);
void func_C0ED(void);
void func_C0EB(void);
void func_C0E6(void);
void func_C0E1(void);
void func_C0E2(void);
void func_C0E4(void);
void func_C0E9(void);
void func_C0EF(void);
void func_C0F6(void);
void func_CE60(void);
void func_CE61(void);
void func_CC4C(void);
void func_C7C9(void);
void func_C7A9(void);
void func_C7AA(void);
void func_CCD9(void);
void func_C2B9(void);
void func_C7B9(void);
void func_C93F(void);
void func_C19A(void);
void func_CBD0(void);
void func_C98A(void);
void func_C98B(void);
void func_C1BC(void);
void func_C1BE(void);
void func_C934(void);
void func_C4F9(void);
void func_C6B9(void);
void func_C6BA(void);
void func_CFD0(void);
void func_C9F0(void);
void func_C041(void);
void func_C19D(void);
void func_C0F0(void);
void func_C0D8(void);
void func_C0F4(void);
void func_C8FE(void);
void func_CF1B(void);
void func_C069(void);
void func_C4F4(void);
void func_CA8B(void);
void func_CD34(void);
void func_C542(void);
void func_CF95(void);
void func_CA4E(void);
void func_CA46(void);
void func_C60D(void);
void func_CE06(void);
void func_CC49(void);
void func_CC41(void);
void func_C77D(void);
void func_C911(void);
void func_C4E9(void);
void func_CCCA(void);
void func_CF00(void);
void func_C3BB(void);
void func_CBC1(void);
void func_C3BF(void);
void func_CD58(void);
void func_CB3E(void);
void func_CD40(void);
void func_CF79(void);
void func_CDC7(void);
void func_CEC8(void);
void func_CCCB(void);
void func_CED3(void);
void func_CF52(void);
void func_CFCB(void);
void func_CEF7(void);
void func_CE7B(void);
void func_CF33(void);
void func_C3B4(void);
void func_C8BA(void);
void func_CBBD(void);
void func_C3B8(void);
void func_CB7A(void);
void func_CED9(void);
void func_CFDA(void);
void func_C028(void);
void func_CDBF(void);
void func_CEC0(void);
void func_CFC1(void);
void func_C8D2(void);
void func_CBD5(void);
void func_CBBF(void);
void func_CCC0(void);
void func_CB9C(void);
void func_CCC8(void);
void func_CEDE(void);
void func_C067(void);
void func_CFB9(void);
void func_CFDF(void);
void func_CFFF(void);
void func_C8C1(void);
void func_C3C9(void);
void func_CBC4(void);
void func_CFD6(void);
void func_C8BD(void);
void func_CDC2(void);
void func_C3CD(void);
void func_CEC3(void);
void func_CFC4(void);
void func_CEDC(void);
void func_CB40(void);
void func_CB96(void);
void func_CCA2(void);
void func_CBFC(void);
void func_CEF5(void);
void func_CCFC(void);
void func_C8D0(void);
void func_C0A6(void);
void func_CC60(void);
void func_C92D(void);
void func_CB88(void);
void func_CB82(void);
void func_CC85(void);
void func_CF80(void);
void func_CB86(void);
void func_CF04(void);
void func_C7B3(void);
void func_CD10(void);
void func_CBB9(void);
void func_C8B0(void);
void func_CD2B(void);
void func_C810(void);
void func_C808(void);
void func_C87A(void);
void func_CF89(void);
void func_CC88(void);
void func_CE8B(void);
void func_CE89(void);
void func_CBDB(void);
void func_C928(void);
void func_C0D0(void);
void func_CF29(void);
void func_C02B(void);
void func_CC04(void);
void func_CD04(void);
void func_C92B(void);
void func_CCB6(void);
void func_CDBD(void);
void func_CD06(void);
void func_CEB9(void);
void func_C3CB(void);
void func_C3C3(void);
void func_C3C4(void);
void func_C0A8(void);
void func_C8F8(void);
void func_C0D5(void);
void func_CC11(void);
void func_C80F(void);
void func_CDB8(void);
void func_CDB1(void);
void func_CFF7(void);
void func_CF10(void);
void func_CD02(void);
void func_CB42(void);
void func_C3CA(void);
void func_C86E(void);
void func_C866(void);
void func_E002(void);
void func_DE73(void);
void func_DE74(void);
void func_E2B7(void);
void func_E2B8(void);
void func_DE8A(void);
void func_E29A(void);
void func_E29B(void);
void func_FCE2(void);
void func_E3FC(void);
void func_E3FD(void);
void func_F4BD(void);
void func_C820(void);
void func_C821(void);
void func_E8C8(void);
void func_E8C9(void);
void func_DEA9(void);
void func_D00E(void);
void func_E120(void);
void func_E12F(void);
void func_E5D1(void);
void func_E9EA(void);
void func_E4E3(void);
void func_EA13(void);
void func_E5F2(void);
void func_E510(void);
void func_E4D8(void);
void func_E417(void);
void func_E49D(void);
void func_E436(void);
void func_ED21(void);
void func_E9F9(void);
void func_EF9B(void);
void func_EF6C(void);
void func_E544(void);
void func_E4B5(void);
void func_ED45(void);
void func_ED0C(void);
void func_EC91(void);
void func_EC36(void);
void func_E57D(void);
void func_EF26(void);
void func_ED68(void);
void func_ED36(void);
void func_E9D2(void);
void func_E928(void);
void func_EA5C(void);
void func_F068(void);
void func_EA76(void);
void func_EAC3(void);
void func_EA60(void);
void func_F0D9(void);
void func_EA78(void);
void func_EA62(void);
void func_F11B(void);
void func_F06A(void);
void func_EAA6(void);
void func_F000(void);
void func_F010(void);
void func_F07A(void);
void func_F076(void);
void func_F005(void);
void func_F006(void);
void func_F008(void);
void func_F009(void);
void func_F074(void);
void func_F08F(void);
void func_F090(void);
void func_F00B(void);
void func_F080(void);
void func_F0A0(void);
void func_F040(void);
void func_E54C(void);
void func_E421(void);
void func_F00D(void);
void func_EACE(void);
void func_E602(void);
void func_EF95(void);
void func_EFA9(void);
void func_EFAA(void);
void func_E4E9(void);
void func_E539(void);
void func_E4D9(void);
void func_E939(void);
void func_F020(void);
void func_EA21(void);
void func_EA10(void);
void func_EFBA(void);
void func_F024(void);
void func_F085(void);
void func_E962(void);
void func_E5D0(void);
void func_F04C(void);
void func_F077(void);
void func_F04A(void);
void func_E600(void);
void func_F088(void);
void func_F002(void);
void func_F033(void);
void func_ED11(void);
void func_F027(void);
void func_ECD1(void);
void func_ECCA(void);
void func_E980(void);
void func_E5F1(void);
void func_E4BD(void);
void func_F08A(void);
void func_E507(void);
void func_F029(void);
void func_EF27(void);
void func_E4F4(void);
void func_E4F5(void);
void func_EAD4(void);
void func_E4F2(void);
void func_ECE1(void);
void func_E4E2(void);
void func_ECD5(void);
void func_E4EC(void);
void func_E4ED(void);
void func_ECC1(void);
void func_E4E7(void);
void func_ECDD(void);
void func_E4EB(void);
void func_E4D4(void);
void func_E4D5(void);
void func_EF82(void);
void func_E5F6(void);
void func_EFF5(void);
void func_EFAD(void);
void func_ECB9(void);
void func_E96C(void);
void func_E501(void);
void func_ECD3(void);
void func_E4C8(void);
void func_E9E6(void);
void func_E435(void);
void func_EFF6(void);
void func_E5A4(void);
void func_EFA1(void);
void func_E5E1(void);
void func_EFEB(void);
void func_E9E9(void);
void func_EAE8(void);
void func_E9E7(void);
void func_F03C(void);
void func_E59F(void);
void func_EF32(void);
void func_E541(void);
void func_E9DB(void);
void func_E568(void);
void func_E5E5(void);
void func_EFE7(void);
void func_E4F7(void);
void func_EA0D(void);
void func_E429(void);
void func_E578(void);
void func_E50C(void);
void func_E964(void);
void func_EC68(void);
void func_E4DE(void);
void func_E5DF(void);
void func_EA6F(void);
void func_ED3F(void);
void func_ED48(void);
void func_E4FF(void);
void func_E5E4(void);
void func_EFB3(void);
void func_ECDF(void);
void func_E4F0(void);
void func_E9F6(void);
void func_E9F4(void);
void func_EFFB(void);
void func_ED61(void);
void func_E984(void);
void func_E98F(void);
void func_E4A2(void);
void func_EFFD(void);
void func_EC81(void);
void func_E9FD(void);
void func_E4FC(void);
void func_EC8F(void);
void func_E991(void);
void func_EA12(void);
void func_F095(void);
void func_F096(void);
void func_EA05(void);
void func_EA1C(void);
void func_ECA2(void);
void func_ECA6(void);
void func_E4FD(void);
void func_E9F8(void);
void func_EA0A(void);
void func_F099(void);
void func_F071(void);
void func_ECBD(void);
void func_F045(void);
void func_F023(void);
void func_ED78(void);
void func_EA85(void);
void func_E98A(void);
void func_F030(void);
void func_F02D(void);
void func_F01F(void);
void func_F03F(void);
void func_E4C7(void);
void func_F012(void);
void func_F035(void);
void func_EA84(void);
void func_EF70(void);
void func_F01B(void);
void func_F015(void);
void func_F048(void);
void func_EAE4(void);
void func_ECBB(void);
void func_EFD1(void);
void func_E9D9(void);
void func_EFDF(void);
void func_E5D8(void);
void func_EFCB(void);
void func_E553(void);
void func_E9EE(void);
void func_EF86(void);
void func_F1BD(void);
void func_F1BE(void);
void func_D1BD(void);
void func_D05A(void);
void func_C907(void);
void func_C620(void);
void func_D075(void);
void func_D09B(void);
void func_D057(void);
void func_F4D0(void);
void func_F4D1(void);
void func_EED1(void);
void func_F8D0(void);
void func_F8D5(void);
void func_E4C0(void);
void func_F1D0(void);
void func_F1D1(void);
void func_E904(void);
void func_F2AD(void);
void func_F2AE(void);
void func_F34E(void);
void func_F28D(void);
void func_F28E(void);
void func_F36D(void);
void func_F36E(void);
void func_F370(void);
void func_F39D(void);
void func_F38E(void);
void func_F37F(void);
void func_F37C(void);
void func_F38A(void);
void func_F387(void);
void func_F388(void);
void func_F390(void);
void func_F3A5(void);
void func_E7F0(void);
void func_E7F1(void);
void func_E545(void);
void func_D9F1(void);
void func_E57E(void);
void func_C802(void);
void func_C0C9(void);
void func_CA6B(void);
void func_E848(void);
void func_D061(void);
void func_E601(void);
void func_E661(void);
void func_FDD0(void);
void func_D028(void);
void func_E63F(void);
void func_E640(void);
void func_E642(void);
void func_E643(void);
void func_E6A8(void);
void func_E6A9(void);
void func_E6B8(void);
void func_FE00(void);
void func_FDFE(void);
void func_FCFD(void);
void func_FE20(void);
void func_FF5C(void);
void func_FE50(void);
void func_FE01(void);
void func_FD86(void);
void func_FE86(void);
void func_FE8E(void);
void func_FD8D(void);
void func_FD8E(void);
void func_FDA5(void);
void func_FDD3(void);
void func_FDFC(void);
void func_FDAC(void);
void func_FE14(void);
void func_FE80(void);
void func_FE81(void);
void func_FD01(void);
void func_FE03(void);
void func_FE60(void);
void func_FE61(void);
void func_FE92(void);
void func_FE5C(void);
void func_FE89(void);
void func_FE91(void);
void func_FD1A(void);
void func_FE5E(void);
void func_FE94(void);
void func_FCFC(void);
void func_E788(void);
void func_E799(void);
void func_E79A(void);
void func_E7A9(void);
void func_E7AA(void);
void func_D010(void);
void func_E64E(void);
void func_E64C(void);
void func_E64D(void);
void func_E797(void);
void func_E798(void);
void func_E75D(void);
void func_CA08(void);
void func_E614(void);
void func_E828(void);
void func_E826(void);
void func_E620(void);
void func_E621(void);
void func_E023(void);
void func_E8FD(void);
void func_D050(void);
void func_E854(void);
void func_E855(void);
void func_DE4D(void);
void func_E929(void);
void func_E931(void);
void func_DE5F(void);
void func_F089(void);
void func_DFB4(void);
void func_F0DF(void);
void func_F06D(void);
void func_F06E(void);
void func_C09E(void);
void func_DF96(void);
void func_CADF(void);
void func_C6A8(void);
void func_C6A9(void);
void func_F034(void);
void func_EA8A(void);
void func_EA5D(void);
void func_E8EA(void);
void func_E8EB(void);
void func_D089(void);
void func_EA8D(void);
void func_DF2A(void);
void func_D29D(void);
void func_D29E(void);
void func_F29D(void);
void func_F29E(void);
void func_E8B1(void);
void func_E8B2(void);
void func_EB4B(void);
void func_D18F(void);
void func_D191(void);
void func_E200(void);
void func_E1D0(void);
void func_E1BE(void);
void func_E1FD(void);
void func_E211(void);
void func_E1DC(void);
void func_E1DB(void);
void func_E1F5(void);
void func_E1F1(void);
void func_E1C9(void);
void func_E220(void);
void func_E1B0(void);
void func_E1BB(void);
void func_CCAE(void);
void func_C908(void);
void func_EE06(void);
void func_EE0F(void);
void func_EE11(void);
void func_EE20(void);
void func_EE32(void);
void func_EE46(void);
void func_EE41(void);
void func_EE26(void);
void func_EE22(void);
void func_CBEF(void);
void func_CBAD(void);
void func_FDAD(void);
void func_EB8F(void);
void func_EB90(void);
void func_F0EB(void);
void func_F0EC(void);
void func_EB7F(void);
void func_EB80(void);
void func_EB87(void);
void func_EB88(void);
void func_EBE1(void);
void func_C797(void);
void func_C798(void);
void func_EB98(void);
void func_EBAE(void);
void func_EC10(void);
void func_EBF1(void);
void func_EBEC(void);
void func_EC06(void);
void func_EC01(void);
void func_EBBD(void);
void func_EBEA(void);
void func_EBD3(void);
void func_EBF8(void);
void func_EBF6(void);
void func_EC0B(void);
void func_EC03(void);
void func_EC1F(void);
void func_EC25(void);
void func_EC0D(void);
void func_EBFB(void);
void func_EC2F(void);
void func_EBDB(void);
void func_EBEB(void);
void func_CE4F(void);
void func_CE51(void);
void func_CE50(void);
void func_CACF(void);
void func_F199(void);
void func_F661(void);
void func_F1A9(void);
void func_F691(void);
void func_F696(void);
void func_F6A9(void);
void func_F6AA(void);
void func_F67F(void);
void func_F6BE(void);
void func_F6BF(void);
void func_F670(void);
void func_F685(void);
void func_F683(void);
void func_F684(void);
void func_F6AD(void);
void func_F6AC(void);
void func_D018(void);
void func_C9FE(void);
void func_EF9C(void);
void func_EA14(void);
void func_ED37(void);
void func_D0ED(void);
void func_ED46(void);
void func_E901(void);
void func_D1FE(void);
void func_F026(void);
void func_E6B0(void);
void func_E6B1(void);
void func_C626(void);
void func_F19D(void);
void func_ED52(void);
void func_EDA5(void);
void func_EDA6(void);
void func_C978(void);
void func_E912(void);
void func_E915(void);
void func_E91D(void);
void func_E91A(void);
void func_E918(void);
void func_E913(void);
void func_ECD0(void);
void func_FBD0(void);
void func_F9BE(void);
void func_F9D5(void);
void func_EDF9(void);
void func_EDFA(void);
void func_FABD(void);
void func_EDFB(void);
void func_EE01(void);
void func_D022(void);
void func_F607(void);
void func_F67E(void);
void func_EE47(void);
void func_F2D1(void);
void func_EE4D(void);
void func_EE4E(void);
void func_EE4F(void);
void func_EE55(void);
void func_EE56(void);
void func_EE7E(void);
void func_EE7F(void);
void func_EE78(void);
void func_EE79(void);
void func_F610(void);
void func_F611(void);
void func_EC07(void);
void func_FBEC(void);
void func_ECCB(void);
void func_CD78(void);
void func_FCCD(void);
void func_F3AE(void);
void func_E906(void);
void func_F34C(void);
void func_EEF4(void);
void func_E1BD(void);
void func_F0E2(void);
void func_E2BD(void);
void func_F0E3(void);
void func_F1E1(void);
void func_F1E2(void);
void func_F1E3(void);
void func_F222(void);
void func_F223(void);
void func_E810(void);
void func_E811(void);
void func_E818(void);
void func_E820(void);
void func_E821(void);
void func_E2BA(void);
void func_C060(void);
void func_D710(void);
void func_CC01(void);
void func_CC21(void);
void func_D400(void);
void func_EC00(void);
void func_E8FF(void);
void func_DCFF(void);
void func_DD00(void);
void func_C2FF(void);
void func_C007(void);
void func_C010(void);
void func_C01C(void);
void func_C00D(void);
void func_FB81(void);
void func_F840(void);
void func_F841(void);
void func_C0F8(void);
void func_F6C0(void);
void func_F6C1(void);
void func_F712(void);
void func_F72D(void);
void func_F720(void);
void func_F540(void);
void func_F547(void);
void func_F280(void);
void func_F281(void);
void func_F101(void);
void func_EFC0(void);
void func_EFC1(void);
void func_EE40(void);
void func_ED00(void);
void func_C0EE(void);
void func_EBC0(void);
void func_EBC1(void);
void func_EBC7(void);
void func_EAC0(void);
void func_EAC1(void);
void func_E981(void);
void func_E99B(void);
void func_E780(void);
void func_E781(void);
void func_E680(void);
void func_E681(void);
void func_E580(void);
void func_E581(void);
void func_C0E5(void);
void func_E4C1(void);
void func_E400(void);
void func_E401(void);
void func_E341(void);
void func_E281(void);
void func_E101(void);
void func_E080(void);
void func_E081(void);
void func_E085(void);
void func_E041(void);
void func_C0E0(void);
void func_C0EA(void);
void func_C0F5(void);
void func_F35F(void);
void func_F360(void);
void func_F3F2(void);
void func_F3F3(void);
void func_F3B0(void);
void func_F6F0(void);
void func_F6F1(void);
void func_EE04(void);
void func_E4BE(void);
void func_EBBE(void);
void func_F3EC(void);
void func_E7BD(void);
void func_E7BE(void);
void func_F3E7(void);
void func_F3EE(void);
void func_F3EF(void);
void func_F45A(void);
void func_CE18(void);
void func_CE19(void);
void func_CC4D(void);
void func_F3CC(void);
void func_F3DE(void);
void func_DC21(void);
void func_F7DC(void);
void func_F800(void);
void func_F7F0(void);
void func_F7F1(void);
void func_F80C(void);
void func_F7F5(void);
void func_F7F9(void);
void func_F80F(void);
void func_F810(void);
void func_F7FC(void);
void func_F7F7(void);
void func_F7F3(void);
void func_F7EA(void);
void func_F7EE(void);
void func_F7FE(void);
void func_F7EB(void);
void func_F802(void);
void func_F804(void);
void func_F808(void);
void func_F806(void);
void func_F80A(void);
void func_F80D(void);
void func_F7E3(void);
void func_F7DD(void);
void func_F7EF(void);
void func_F260(void);
void func_F261(void);
void func_F359(void);
void func_E9A3(void);
void func_F4C9(void);
void func_EE03(void);
void func_CE03(void);
void func_C7CA(void);
void func_EE48(void);
void func_EE49(void);
void func_D902(void);
void func_F4CC(void);
void func_F4CD(void);
void func_D0F4(void);
void func_F4C2(void);
void func_F4C3(void);
void func_C7BA(void);
void func_F4C7(void);
void func_F4C8(void);
void func_EDC1(void);
void func_E6ED(void);
void func_C93E(void);
void func_F417(void);
void func_F418(void);
void func_F6F6(void);
void func_F7F6(void);
void func_F514(void);
void func_D220(void);
void func_F516(void);
void func_F517(void);
void func_E19A(void);
void func_F51C(void);
void func_F51D(void);
void func_D2D1(void);
void func_D08B(void);
void func_F533(void);
void func_F534(void);
void func_F538(void);
void func_F539(void);
void func_FC04(void);
void func_FC05(void);
void func_E641(void);
void func_F587(void);
void func_DEAA(void);
void func_F58A(void);
void func_F590(void);
void func_F58C(void);
void func_F58E(void);
void func_F592(void);
void func_F595(void);
void func_F597(void);
void func_F594(void);
void func_F58B(void);
void func_F599(void);
void func_F08B(void);
void func_F08D(void);
void func_F9A9(void);
void func_F7C6(void);
void func_F7D9(void);
void func_F7D5(void);
void func_F7C7(void);
void func_D1B9(void);
void func_F02A(void);
void func_F02B(void);
void func_F938(void);
void func_C933(void);
void func_C910(void);
void func_F615(void);
void func_F616(void);
void func_FE04(void);
void func_C1FE(void);
void func_FAAA(void);
void func_FA60(void);
void func_F9A0(void);
void func_F9A1(void);
void func_F9A5(void);
void func_C4FA(void);
void func_D092(void);
void func_F9A8(void);
void func_F9B5(void);
void func_F9D0(void);
void func_F9AA(void);
void func_F9B3(void);
void func_F9C7(void);
void func_F9ED(void);
void func_F9B1(void);
void func_F9B9(void);
void func_F9E1(void);
void func_F6C6(void);
void func_F6C7(void);
void func_F6C9(void);
void func_F700(void);
void func_F701(void);
void func_F70B(void);
void func_F709(void);
void func_F6D1(void);
void func_F6F7(void);
void func_F6F8(void);
void func_F6FD(void);
void func_F706(void);
void func_F6DF(void);
void func_F6E6(void);
void func_F6E1(void);
void func_F6EC(void);
void func_F6D8(void);
void func_F6DA(void);
void func_F6F4(void);
void func_F6E4(void);
void func_F70E(void);
void func_F707(void);
void func_F713(void);
void func_F723(void);
void func_CFD1(void);
void func_F72E(void);
void func_F81C(void);
void func_F72F(void);
void func_F739(void);
void func_FC11(void);
void func_FC08(void);
void func_FB9A(void);
void func_FBCC(void);
void func_F7AB(void);
void func_FBFF(void);
void func_F8FF(void);
void func_F7A1(void);
void func_F85F(void);
void func_FB05(void);
void func_FAB0(void);
void func_FBB0(void);
void func_F85B(void);
void func_F850(void);
void func_FBB5(void);
void func_FB70(void);
void func_FB01(void);
void func_FB8B(void);
void func_F741(void);
void func_FA7B(void);
void func_FA85(void);
void func_FA86(void);
void func_F7BC(void);
void func_FB0F(void);
void func_F8F1(void);
void func_FAFF(void);
void func_FA48(void);
void func_F851(void);
void func_FB09(void);
void func_FA7A(void);
void func_FAF5(void);
void func_F855(void);
void func_FA8C(void);
void func_F903(void);
void func_FC03(void);
void func_FB11(void);
void func_FB31(void);
void func_FB8D(void);
void func_FB8E(void);
void func_FC8D(void);
void func_FCE3(void);
void func_F8D1(void);
void func_FCFE(void);
void func_FBD1(void);
void func_FABE(void);
void func_FBED(void);
void func_FCCE(void);
void func_FC01(void);
void func_FD00(void);
void func_FB80(void);
void func_F918(void);
void func_F919(void);
void func_F8F7(void);
void func_F8F9(void);
void func_F939(void);
void func_FAA9(void);
void func_FA61(void);
void func_F732(void);
void func_F733(void);
void func_F861(void);
void func_F773(void);
void func_F79C(void);
void func_F798(void);
void func_F86E(void);
void func_F86F(void);
void func_F8AD(void);
void func_F8BD(void);
void func_F8BE(void);
void func_F8CE(void);
void func_F8CF(void);
void func_F902(void);
void func_FCAA(void);
void func_F99E(void);
void func_FB66(void);
void func_FB49(void);
void func_FB85(void);
void func_FB86(void);
void func_FB91(void);
void func_FB92(void);
void func_FBE0(void);
void func_FBA3(void);
void func_FBA4(void);
void func_FBB3(void);
void func_FBB4(void);
void func_FC0B(void);
void func_FCB1(void);
void func_FCF7(void);
void func_FCD5(void);
void func_FBC1(void);
void func_FBDE(void);
void func_FA75(void);
void func_FBD5(void);
void func_F8FB(void);
void func_FBFB(void);
void func_FB7A(void);
void func_F7BF(void);
void func_FAB2(void);
void func_F7C5(void);
void func_F832(void);
void func_F8EA(void);
void func_FAB6(void);
void func_F8F3(void);
void func_F864(void);
void func_FC06(void);
void func_F8FC(void);
void func_FCA6(void);
void func_F8B0(void);
void func_F826(void);
void func_F8B2(void);
void func_F8F5(void);
void func_FAB9(void);
void func_FA62(void);
void func_F7B6(void);
void func_FA83(void);
void func_F923(void);
void func_F8E0(void);
void func_F730(void);
void func_F7B9(void);
void func_FAAD(void);
void func_FAA5(void);
void func_FBA5(void);
void func_F848(void);
void func_F84A(void);
void func_FB78(void);
void func_FBD8(void);
void func_FA40(void);
void func_F8C8(void);
void func_F844(void);
void func_F838(void);
void func_F8E8(void);
void func_F8EF(void);
void func_F943(void);
void func_FB60(void);
void func_F731(void);
void func_F735(void);
void func_F736(void);
void func_F770(void);
void func_F772(void);
void func_F778(void);
void func_F781(void);
void func_F78B(void);
void func_F797(void);
void func_F791(void);
void func_F787(void);
void func_DFD1(void);
void func_F79D(void);
void func_F7AE(void);
void func_F7A7(void);
void func_F705(void);
void func_F9F9(void);
void func_D095(void);
void func_E096(void);
void func_F087(void);
void func_F0C9(void);
void func_F0CA(void);
void func_E909(void);
void func_F0E9(void);
void func_F0EA(void);
void func_C9F1(void);
void func_E902(void);
void func_E903(void);
void func_F829(void);
void func_F82A(void);
void func_F869(void);
void func_F86A(void);
void func_F873(void);
void func_F890(void);
void func_F87B(void);
void func_F8A9(void);
void func_F8AC(void);
void func_F883(void);
void func_F886(void);
void func_F88B(void);
void func_F892(void);
void func_F895(void);
void func_F897(void);
void func_F89D(void);
void func_F8A0(void);
void func_F8A3(void);
void func_F8A6(void);
void func_EC14(void);
void func_EC15(void);
void func_C2B1(void);
void func_D3C2(void);
void func_D3C3(void);
void func_F82B(void);
void func_C806(void);
void func_C040(void);
void func_F8BF(void);
void func_F8C0(void);
void func_CEBD(void);
void func_F906(void);
void func_FCA9(void);
void func_F9F3(void);
void func_C528(void);
void func_FAC9(void);
void func_C986(void);
void func_C987(void);
void func_F110(void);
void func_F111(void);
void func_FB4B(void);
void func_FB65(void);
void func_FB6E(void);
void func_FB76(void);
void func_FB77(void);
void func_D6FC(void);
void func_FBD6(void);
void func_E0FB(void);
void func_FBE1(void);
void func_E7FB(void);
void func_E7FC(void);
void func_FBE7(void);
void func_FBE8(void);
void func_F0FC(void);
void func_FC42(void);
void func_FC51(void);
void func_FC52(void);
void func_FBCA(void);
void func_FBCB(void);
void func_FC58(void);
void func_FC59(void);
void func_FC65(void);
void func_FC66(void);
void func_FC73(void);
void func_FBBA(void);
void func_FC31(void);
void func_FC3A(void);
void func_FC26(void);
void func_FC16(void);
void func_FC17(void);
void func_FC7E(void);
void func_FC7F(void);
void func_F205(void);
void func_EEF6(void);
void func_EEF7(void);
void func_DCEE(void);
void func_F0DD(void);
void func_F0D5(void);
void func_DAF0(void);
void func_F200(void);
void func_F201(void);
void func_E2F2(void);
void func_E2F3(void);
void func_C0E3(void);
void func_C0C0(void);
void func_C0C1(void);
void func_F4C0(void);
void func_ECE5(void);
void func_E0EC(void);
void func_EAD5(void);
void func_DCEB(void);
void func_D8DD(void);
void func_D8D8(void);
void func_F20D(void);
void func_F20E(void);
void func_F4F2(void);
void func_DEDF(void);
void func_E008(void);
void func_DCDB(void);
void func_F2DD(void);
void func_ECE0(void);
void func_ECE2(void);
void func_ECF1(void);
void func_ECE4(void);
void func_ECF6(void);
void func_ECEE(void);
void func_DCED(void);
void func_EE08(void);
void func_F0EE(void);
void func_F0EF(void);
void func_EAEB(void);
void func_EED5(void);
void func_E2EE(void);
void func_E2EF(void);
void func_D8E4(void);
void func_EA08(void);
void func_EA09(void);
void func_F6EA(void);
void func_F6EB(void);
void func_F2F7(void);
void func_D800(void);
void func_D801(void);
void func_C0D9(void);
void func_EEEB(void);
void func_F2C0(void);
void func_F2C1(void);
void func_DCF2(void);
void func_DCF3(void);
void func_DA08(void);
void func_D4DA(void);
void func_F4D4(void);
void func_F4D5(void);
void func_F2D4(void);
void func_F2D5(void);
void func_F208(void);
void func_F209(void);
void func_EEF2(void);
void func_D4E4(void);
void func_E8D4(void);
void func_E8D5(void);
void func_E2F5(void);
void func_E6EC(void);
void func_F2E7(void);
void func_D6DC(void);
void func_DCF5(void);
void func_D4DC(void);
void func_FCB0(void);
void func_D4FD(void);
void func_E0D4(void);
void func_FAD4(void);
void func_D4FA(void);
void func_D4FB(void);
void func_E6E4(void);
void func_E6E5(void);
void func_C0E7(void);
void func_ECC0(void);
void func_E6F6(void);
void func_E6F7(void);
void func_F2B0(void);
void func_F2B1(void);
void func_DCBF(void);
void func_D8EC(void);
void func_E2D9(void);
void func_D8B6(void);
void func_E611(void);
void func_D4E6(void);
void func_E4EA(void);
void func_F4E4(void);
void func_F4E5(void);
void func_DEB0(void);
void func_F6DE(void);
void func_F6E7(void);
void func_DAF7(void);
void func_D810(void);
void func_F2E4(void);
void func_F2E5(void);
void func_D4F2(void);
void func_E210(void);
void func_F0E4(void);
void func_F0E5(void);
void func_E6D5(void);
void func_FCD4(void);
void func_D4EC(void);
void func_F6E0(void);
void func_D6D4(void);
void func_D6D5(void);
void func_D4D6(void);
void func_D4D7(void);
void func_D4EE(void);
void func_F2F4(void);
void func_F2F5(void);
void func_E6B6(void);
void func_E6B7(void);
void func_E011(void);
void func_E2DA(void);
void func_E2DB(void);
void func_DAED(void);
void func_F2B6(void);
void func_F2B7(void);
void func_F40C(void);
void func_F4EC(void);
void func_F4ED(void);
void func_F6ED(void);
void func_DCF6(void);
void func_DADD(void);
void func_F748(void);
void func_F4E0(void);
void func_F402(void);
void func_8D68_b0(void);
void func_8D68_b1(void);
void func_8D68_b2(void);
void func_8D68_b3(void);
void func_8D68_b4(void);
void func_8D68_b6(void);
void func_FB06(void);
void func_86BA_b0(void);
void func_86BA_b1(void);
void func_86BA_b2(void);
void func_86BA_b3(void);
void func_86BA_b4(void);
void func_86BA_b5(void);
void func_86BA_b6(void);
void func_F920(void);
void func_FD8C(void);
void func_FDD2(void);
void func_E549(void);
void func_C55F(void);
void func_C5E0(void);
void func_D5A3(void);
void func_D8AE(void);
void func_DFE9(void);
void func_C98E(void);
void func_E0AC(void);
void func_D0B3(void);
void func_80A9_b0(void);
void func_80A9_b1(void);
void func_80A9_b2(void);
void func_80A9_b3(void);
void func_80A9_b4(void);
void func_80A9_b5(void);
void func_80A9_b6(void);
void func_CD1E(void);
void func_C6C6(void);
void func_9E5F_b0(void);
void func_BE5F_b0(void);
void func_9E5F_b1(void);
void func_BE5F_b1(void);
void func_9E5F_b2(void);
void func_BE5F_b2(void);
void func_9E5F_b3(void);
void func_BE5F_b3(void);
void func_9E5F_b4(void);
void func_BE5F_b4(void);
void func_BE5F_b5(void);
void func_9E5F_b6(void);
void func_BE5F_b6(void);
void func_C02C(void);
void func_B1C8_b0(void);
void func_B1C8_b1(void);
void func_B1C8_b2(void);
void func_B1C8_b3(void);
void func_B1C8_b5(void);
void func_B1D0_b5(void);
void func_B1C8_b6(void);
void func_C4F3(void);
void func_C4FD(void);
void func_C4FF(void);
void func_959B_b0(void);
void func_B59B_b0(void);
void func_959B_b1(void);
void func_B59B_b1(void);
void func_959B_b2(void);
void func_B59B_b2(void);
void func_B59B_b3(void);
void func_B59B_b5(void);
void func_B59D_b5(void);
void func_959B_b6(void);
void func_B59B_b6(void);
void func_9576_b0(void);
void func_B576_b0(void);
void func_9576_b1(void);
void func_B576_b1(void);
void func_9576_b2(void);
void func_B576_b2(void);
void func_B576_b3(void);
void func_9576_b4(void);
void func_9576_b5(void);
void func_B576_b5(void);
void func_9576_b6(void);
void func_B576_b6(void);
void func_8A48_b0(void);
void func_8A48_b1(void);
void func_8A48_b2(void);
void func_8A48_b3(void);
void func_8A48_b4(void);
void func_8A48_b5(void);
void func_8A48_b6(void);
void func_FE44(void);
void func_E552(void);
void func_8015_b3(void);
void func_8018_b3(void);
void func_801B_b3(void);
void func_F8C3(void);
void func_E40B(void);
void func_E9FF(void);
void func_CA45(void);
void func_CAFA(void);
void func_DB52(void);
void func_CE09(void);
void func_A9B9_b0(void);
void func_A9B9_b1(void);
void func_A9B9_b2(void);
void func_A9B9_b3(void);
void func_A9B9_b4(void);
void func_A9B9_b5(void);
void func_A9B9_b6(void);
void func_9E4C_b0(void);
void func_BE4C_b0(void);
void func_9E4C_b1(void);
void func_BE4C_b1(void);
void func_9E4C_b2(void);
void func_BE4C_b2(void);
void func_9E4C_b3(void);
void func_9E4C_b4(void);
void func_9E4C_b5(void);
void func_9E4C_b6(void);
void func_BE4C_b6(void);
void func_E14D(void);
void func_F8DA(void);
void func_F34B(void);
void func_A248_b0(void);
void func_A248_b1(void);
void func_A248_b2(void);
void func_A248_b3(void);
void func_A248_b4(void);
void func_A248_b5(void);
void func_A248_b6(void);
void func_CA22(void);
void func_FD6C(void);
void func_E61F(void);
void func_EA31(void);
void func_92F6_b0(void);
void func_B2F6_b0(void);
void func_92F6_b1(void);
void func_B2F6_b1(void);
void func_92F6_b2(void);
void func_B2F6_b2(void);
void func_B2F6_b3(void);
void func_92F6_b4(void);
void func_92F6_b5(void);
void func_92F6_b6(void);
void func_B2F6_b6(void);
void func_8FBF_b0(void);
void func_AFBF_b0(void);
void func_8FBF_b1(void);
void func_AFBF_b1(void);
void func_8FBF_b2(void);
void func_AFBF_b2(void);
void func_8FBF_b3(void);
void func_AFBF_b3(void);
void func_8FBF_b4(void);
void func_8FBF_b6(void);
void func_AFBF_b6(void);
void func_9406_b0(void);
void func_B406_b0(void);
void func_9406_b1(void);
void func_B406_b1(void);
void func_9406_b2(void);
void func_B406_b2(void);
void func_9406_b3(void);
void func_9406_b4(void);
void func_9406_b6(void);
void func_B406_b6(void);
void func_CBB2(void);
void func_FD43(void);
void func_CBA8(void);
void func_EF48(void);
void func_C1B6(void);
void func_FD1F(void);
void func_FB30(void);
void func_FC2B(void);
void func_FC54(void);
void func_FC1D(void);
void func_FC1F(void);
void func_FBFE(void);
void func_DAE7(void);
void func_D8D1(void);
void func_A2D9_b0(void);
void func_A2D9_b1(void);
void func_A2D9_b2(void);
void func_A2D9_b3(void);
void func_A2D9_b4(void);
void func_A2D9_b5(void);
void func_A2D9_b6(void);
void func_E8D3(void);
void func_D6D3(void);
void func_D473(void);
void func_D6BB(void);
void func_866E_b4(void);
void func_8671_b4(void);
void func_8679_b4(void);
void func_9DF1_b1(void);
void func_BE71_b4(void);
void func_BE5C_b5(void);
void func_B595_b5(void);
void func_B554_b6(void);
void func_B55A_b6(void);
void func_B571_b6(void);
void func_B568_b6(void);
void func_B570_b6(void);
void func_91A0_b5(void);
void func_91A9_b5(void);
void func_91A5_b5(void);
void func_91AC_b5(void);
void func_B1A0_b5(void);
void func_CB37(void);
void func_8611_b4(void);
void func_8619_b4(void);
void func_CBC9(void);
void func_CD00(void);
void func_D5D2(void);
void func_D3D5(void);
void func_D8DB(void);
void func_DCDF(void);
void func_E5E2(void);
void func_E3E5(void);
void func_CCC6(void);
void func_CECD(void);
void func_CFD4(void);
void func_D5CF(void);
void func_D6D0(void);
void func_E2DE(void);
void func_E6E8(void);
void func_E7E9(void);
void func_EB00(void);
void func_EFEC(void);
void func_F0ED(void);
void func_F5F3(void);
void func_D535(void);
void func_F063(void);
void func_F4BB(void);
void func_FC3E(void);
void func_EB06(void);
void func_EB08(void);
void func_EB58(void);
void func_EB62(void);
void func_EB1B(void);
void func_EB19(void);
void func_EB0A(void);
void func_EB0D(void);
void func_EB60(void);
void func_D402(void);
void func_D25B(void);
void func_DFDB(void);
void func_EC8C(void);
void func_EDFE(void);
void func_F1CF(void);
void func_EAAE(void);
void func_EAB0(void);
void func_DAEA(void);
void func_EEE3(void);
void func_EC04(void);
void func_F529(void);
void func_E75A(void);
void func_F54F(void);
void func_F83F(void);
void func_FB2B(void);
void func_F32F(void);
void func_E940(void);
void func_F448(void);
void func_C3BE(void);
void func_D6D2(void);
void func_D7D3(void);
void func_D8D4(void);
void func_DADB(void);
void func_E6E2(void);
void func_E8E4(void);
void func_E9E8(void);
void func_EDE9(void);
void func_ECEF(void);
void func_FBF7(void);
void func_F9FC(void);
void func_CBCB(void);
void func_D4D0(void);
void func_D2D2(void);
void func_D7D4(void);
void func_DBE0(void);
void func_E5E9(void);
void func_E6EA(void);
void func_ECE8(void);
void func_ECEC(void);
void func_E8EF(void);
void func_EFF0(void);
void func_E85E(void);
void func_F5CA(void);
void func_F3F5(void);
void func_FBFC(void);
void func_F330(void);
void func_EA3C(void);
void func_E800(void);
void func_EF3B(void);
void func_EF3D(void);
void func_EF5E(void);
void func_F82F(void);
void func_EF67(void);
void func_F3F9(void);
void func_F830(void);
void func_F3F6(void);
void func_D85F(void);
void func_D86C(void);
void func_D771(void);
void func_DA15(void);
void func_DAAF(void);
void func_EDCA(void);
void func_F67B(void);
void func_CF4A(void);
void func_F77D(void);
void func_D61B(void);
void func_EDFF(void);
void func_CEA2(void);
void func_F7B0(void);
void func_DFE4(void);
void func_EEA9(void);
void func_F3B5(void);
void func_EDB9(void);
void func_D2BF(void);
void func_D7DE(void);
void func_D3D8(void);
void func_DCD3(void);
void func_CCFE(void);
void func_E7B7(void);
void func_E6AD(void);
void func_E7EE(void);
void func_F1AD(void);
void func_EAD6(void);
void func_D52B(void);
void func_DD18(void);
void func_D4C0(void);
void func_E53F(void);
void func_C0DB(void);
void func_D908(void);
void func_E122(void);
void func_F49F(void);
void func_FA3C(void);
void func_C090(void);
void func_F924(void);
void func_F929(void);
void func_E622(void);
void func_E04A(void);
void func_F333(void);
void func_D559(void);
void func_F21B(void);
void func_E9D7(void);
void func_F676(void);
void func_E3F6(void);
void func_D4B3(void);
void func_EB27(void);
void func_DDCA(void);
void func_F795(void);
void func_EC20(void);
void func_F368(void);
void func_EE76(void);
void func_D02D(void);
void func_CCC9(void);
void func_C8C2(void);
void func_C3C8(void);
void func_CB68(void);
void func_CBCA(void);
void func_D25D(void);
void func_D7C4(void);
void func_D7B8(void);
void func_D4C5(void);
void func_CA9B(void);
void func_C8B5(void);
void func_D2DC(void);
void func_D6E0(void);
void func_D7E1(void);
void func_E2D7(void);
void func_D8E2(void);
void func_E3E4(void);
void func_E7E5(void);
void func_E6E7(void);
void func_EBE8(void);
void func_EAE9(void);
void func_EDEC(void);
void func_E9ED(void);
void func_EFEE(void);
void func_C3D0(void);
void func_D1C3(void);
void func_D1C5(void);
void func_CAD4(void);
void func_D7CC(void);
void func_DFDC(void);
void func_C8BC(void);
void func_E3DD(void);
void func_E9C9(void);
void func_D4D2(void);
void func_D5D3(void);
void func_D7AA(void);
void func_DEB2(void);
void func_DEF0(void);
void func_DEFE(void);
void func_F0FD(void);
void func_DCB2(void);
void func_F887(void);
void func_E7EF(void);
void func_E7FD(void);
void func_EBCF(void);
void func_E7DB(void);
void func_CFFE(void);
void func_EFBE(void);
void func_DFCD(void);
void func_DF44(void);
void func_DA8A(void);
void func_F7DA(void);
void func_D93F(void);
void func_EFDB(void);
void func_F10F(void);
void func_EF13(void);
void func_E97F(void);
void func_D5CD(void);
void func_EDE0(void);
void func_EFE2(void);
void func_E6F2(void);
void func_F4E7(void);
void func_E8F4(void);
void func_E7F5(void);
void func_F9EB(void);
void func_CBC0(void);
void func_D4DF(void);
void func_E2D6(void);
void func_D7E2(void);
void func_D8E3(void);
void func_E5D9(void);
void func_E6DA(void);
void func_E8CE(void);
void func_F8EC(void);
void func_EEFA(void);
void func_E2B2(void);
void func_E7E2(void);
void func_F988(void);
void func_D487(void);
void func_D682(void);
void func_E2AC(void);
void func_D2B2(void);
void func_F7B3(void);
void func_EA17(void);
void func_EA1D(void);
void func_EB05(void);
void func_ECFF(void);
void func_F413(void);
void func_EC17(void);
void func_F105(void);
void func_FC14(void);
void func_F584(void);
void func_C8F5(void);
void func_D2F5(void);
void func_EC1D(void);
void func_F884(void);
void func_F4FC(void);
void func_F8B1(void);
void func_F513(void);
void func_CEFC(void);
void func_EBFC(void);
void func_ED05(void);
void func_F4FB(void);
void func_E910(void);
void func_FC3C(void);
void func_F4FA(void);
void func_F5B1(void);
void func_F488(void);
void func_D8FD(void);
void func_EEF5(void);
void func_CBF5(void);
void func_EB10(void);
void func_F88A(void);
void func_F48A(void);
void func_F8C4(void);
void func_C40F(void);
void func_F5C4(void);
void func_F5C6(void);
void func_F5C9(void);
void func_F1B1(void);
void func_C40E(void);
void func_FE8B(void);
void func_EA1E(void);
void func_F88C(void);
void func_F407(void);
void func_D3FC(void);
void func_E6FC(void);
void func_F41D(void);
void func_EB1A(void);
void func_F88E(void);
void func_E88E(void);
void func_F591(void);
void func_F406(void);
void func_F503(void);
void func_F490(void);
void func_F291(void);
void func_F891(void);
void func_F593(void);
void func_F53D(void);
void func_F53E(void);
void func_F57F(void);
void func_F576(void);
void func_F581(void);
void func_F545(void);
void func_F571(void);
void func_F555(void);
void func_F55B(void);
void func_F57B(void);
void func_F550(void);
void func_F54C(void);
void func_F583(void);
void func_F586(void);
void func_F893(void);
void func_F50C(void);
void func_F405(void);
void func_F5B3(void);
void func_E8F8(void);
void func_F4E8(void);
void func_F494(void);
void func_EC94(void);
void func_E894(void);
void func_F50E(void);
void func_ECF5(void);
void func_ECF7(void);
void func_ED01(void);
void func_ECFE(void);
void func_ED08(void);
void func_ED06(void);
void func_ED03(void);
void func_ECFC(void);
void func_ED0B(void);
void func_EAFD(void);
void func_F5FC(void);
void func_F596(void);
void func_F598(void);
void func_F5A7(void);
void func_F5A4(void);
void func_F59A(void);
void func_F59C(void);
void func_F59E(void);
void func_F5A0(void);
void func_F5A2(void);
void func_F5A5(void);
void func_EC0A(void);
void func_F898(void);
void func_F3B1(void);
void func_F89C(void);
void func_EDFD(void);
void func_F424(void);
void func_F59D(void);
void func_F49D(void);
void func_EA16(void);
void func_F89E(void);
void func_FE5D(void);
void func_E917(void);
void func_F544(void);
void func_E91C(void);
void func_EB03(void);
void func_F81F(void);
void func_E8FC(void);
void func_F8A1(void);
void func_ED04(void);
void func_EDBA(void);
void func_EDBD(void);
void func_E805(void);
void func_E91E(void);
void func_F403(void);
void func_E8A3(void);
void func_F8A4(void);
void func_EA00(void);
void func_EA04(void);
void func_EA02(void);
void func_EAA3(void);
void func_F4A3(void);
void func_F107(void);
void func_F8A5(void);
void func_E4F8(void);
void func_F5AE(void);
void func_F4A7(void);
void func_E91B(void);
void func_EC21(void);
void func_EC23(void);
void func_EC1E(void);
void func_F531(void);
void func_F9AB(void);
void func_E921(void);
void func_F4AC(void);
void func_F5AD(void);
void func_FE54(void);
void func_EEF8(void);
void func_EC09(void);
void func_F4B2(void);
void func_F522(void);
void func_F4B4(void);
void func_F4B8(void);
void func_E90E(void);
void func_EC0F(void);
void func_EC0E(void);
void func_E90F(void);
void func_ED02(void);
void func_F8B3(void);
void func_F41E(void);
void func_E90C(void);
void func_F520(void);
void func_F560(void);
void func_F422(void);
void func_EC12(void);
void func_F8B4(void);
void func_F9B4(void);
void func_F3F8(void);
void func_E6F8(void);
void func_EC18(void);
void func_E890(void);
void func_E050(void);
void func_D8DF(void);
void func_D41D(void);
void func_DE02(void);
void func_CC22(void);
void func_E441(void);
void func_C4D8(void);
void func_D602(void);
void func_EB0B(void);
void func_E874(void);
void func_FB88(void);
void func_E88B(void);
void func_E392(void);
void func_D881(void);
void func_F381(void);
void func_F0B9(void);
void func_ED9B(void);
void func_E61D(void);
void func_E66F(void);
void func_E7B9(void);
void func_EC57(void);
void func_E7EC(void);
void func_E6C8(void);
void func_E717(void);
void func_F7D0(void);
void func_E673(void);
void func_F0A9(void);
void func_CA98(void);
void func_CE10(void);
void func_F5B9(void);
void func_F5BD(void);
void func_F5F5(void);
void func_F5F1(void);
void func_F5C0(void);
void func_F5FE(void);
void func_F5D0(void);
void func_F606(void);
void func_F5F4(void);
void func_F604(void);
void func_F5E9(void);
void func_F5F8(void);
void func_F5E5(void);
void func_F5E0(void);
void func_DB86(void);
void func_F8A7(void);
void func_E463(void);
void func_E485(void);
void func_E469(void);
void func_E2FE(void);
void func_D6FE(void);
void func_D6A5(void);
void func_F2A6(void);
void func_F8AB(void);
void func_D6A9(void);
void func_E6D0(void);
void func_D3B9(void);
void func_F5A9(void);
void func_E4B9(void);
void func_E8B0(void);
void func_D828(void);
void func_D6C5(void);
void func_E7D6(void);
void func_F044(void);
void func_F662(void);
void func_ED7A(void);
void func_D036(void);
void func_F33A(void);
void func_FAF3(void);
void func_F8FA(void);
void func_FA88(void);
void func_CF88(void);
void func_F688(void);
void func_EA88(void);
void func_EA89(void);
void func_EAA0(void);
void func_EA8E(void);
void func_EA90(void);
void func_EAA2(void);
void func_D687(void);
void func_F682(void);
void func_EE82(void);
void func_D283(void);
void func_EE84(void);
void func_EE8D(void);
void func_EEB3(void);
void func_EE91(void);
void func_EEB1(void);
void func_EE8F(void);
void func_E885(void);
void func_EC85(void);
void func_DE88(void);
void func_DB88(void);
void func_D888(void);
void func_ED88(void);
void func_F689(void);
void func_ED8A(void);
void func_CB8E(void);
void func_CB99(void);
void func_D88E(void);
void func_EA8B(void);
void func_D48C(void);
void func_E68C(void);
void func_EA87(void);
void func_D788(void);
void func_E68D(void);
void func_D689(void);
void func_E689(void);
void func_E289(void);
void func_F69C(void);
void func_F3A0(void);
void func_E4A4(void);
void func_DBBA(void);
void func_E590(void);
void func_E5B1(void);
void func_D993(void);
void func_D9BD(void);
void func_ED87(void);
void func_FB87(void);
void func_E7E7(void);
void func_CD0D(void);
void func_CF0F(void);
void func_E3F3(void);
void func_E7F7(void);
void func_E323(void);
void func_D595(void);
void func_D7E7(void);
void func_EFFF(void);
void func_F1B9(void);
void func_E526(void);
void func_EC60(void);
void func_F094(void);
void func_F3F0(void);
void func_E830(void);
void func_DD04(void);
void func_F0BD(void);
void func_EE0B(void);
void func_F0C7(void);
void func_F098(void);
void func_EF29(void);
void func_D7A9(void);
void func_E8EC(void);
void func_E8F0(void);
void func_F3A9(void);
void func_F3D1(void);
void func_F3AD(void);
void func_F3AF(void);
void func_F3B2(void);
void func_F3BD(void);
void func_F3B9(void);
void func_F3E0(void);
void func_F3E3(void);
void func_E6F0(void);
void func_DE98(void);
void func_D320(void);
void func_D329(void);
void func_D7D0(void);
void func_EA45(void);
void func_EA48(void);
void func_EA58(void);
void func_EA4C(void);
void func_EC6A(void);
void func_DE36(void);
void func_DE38(void);
void func_D610(void);
void func_EE33(void);
void func_EE3C(void);
void func_EE60(void);
void func_E4DC(void);
void func_DE05(void);
void func_F5B0(void);
void func_F028(void);
void func_CDB9(void);
void func_D510(void);
void func_E3C9(void);
void func_CE97(void);
void func_F014(void);
void func_F018(void);
void func_DE17(void);
void func_E80A(void);
void func_DE07(void);
void func_FA20(void);
void func_E8B8(void);
void func_F3F4(void);
void func_D2F0(void);
void func_E6D2(void);
void func_EEB2(void);
void func_EEB4(void);
void func_EEDD(void);
void func_EEDE(void);
void func_EEBA(void);
void func_EED0(void);
void func_EEBD(void);
void func_EED4(void);
void func_EEEA(void);
void func_EEC1(void);
void func_EEEC(void);
void func_EED2(void);
void func_EED7(void);
void func_EEB6(void);
void func_EEE6(void);
void func_EEEE(void);
void func_EEE8(void);
void func_EEF0(void);
void func_EEB8(void);
void func_EEE0(void);
void func_F4DC(void);
void func_D57D(void);
void func_F4EE(void);
void func_D299(void);
void func_EC9B(void);
void func_DD53(void);
void func_DE20(void);
void func_EE5D(void);
void func_EE5C(void);
void func_EAD0(void);
void func_EB83(void);
void func_EB84(void);
void func_EB14(void);
void func_D986(void);
void func_C92C(void);
void func_CDF0(void);
void func_F1CD(void);
void func_F04E(void);
void func_C8C0(void);
void func_DD49(void);
void func_DD20(void);
void func_D0E9(void);
void func_F6A5(void);
void func_F1A5(void);
void func_E7B0(void);
void func_F820(void);
void func_D6B6(void);
void func_F60F(void);
void func_D452(void);
void func_D425(void);
void func_F858(void);
void func_E84A(void);
void func_E444(void);
void func_DD27(void);
void func_D426(void);
void func_D427(void);
void func_D527(void);
void func_FB28(void);
void func_F854(void);
void func_DCB4(void);
void func_F9D8(void);
void func_F017(void);
void func_D5AB(void);
void func_F928(void);
void func_D048(void);
void func_D6A6(void);
void func_D456(void);
void func_C848(void);
void func_F294(void);
void func_E294(void);
void func_FBAC(void);
void func_E2FF(void);
void func_DCF8(void);
void func_D4EA(void);
void func_F60D(void);
void func_CDD0(void);
void func_E6F5(void);
void func_E6DD(void);
void func_DCB7(void);
void func_F3B8(void);
void func_FABA(void);
void func_E7B4(void);
void func_D8B1(void);
void func_F9B2(void);
void func_E1BC(void);
void func_F8BB(void);
void func_F9BC(void);
void func_D5BD(void);
void func_EDCC(void);
void func_E7CB(void);
void func_F7CC(void);
void func_E6DF(void);
void func_E8E1(void);
void func_F80E(void);
void func_F4DF(void);
void func_DFE0(void);
void func_F7D8(void);
void func_E404(void);
void func_D7C7(void);
void func_E702(void);
void func_E5D5(void);
void func_E7D7(void);
void func_CBB3(void);
void func_E9B9(void);
void func_EBBB(void);
void func_E8D0(void);
void func_C3C5(void);
void func_F9E9(void);
void func_DFC7(void);
void func_E302(void);
void func_EB42(void);
void func_CDF3(void);
void func_F542(void);
void func_E7C3(void);
void func_E942(void);
void func_E3F7(void);
void func_E742(void);
void func_FBF9(void);
void func_E508(void);
void func_DD02(void);
void func_D3E7(void);
void func_E808(void);
void func_D3E9(void);
void func_C3B3(void);
void func_CD03(void);
void func_F1C9(void);
void func_F1D5(void);
void func_F8DF(void);
void func_ED83(void);
void func_D7C3(void);
void func_E9D6(void);
void func_D51C(void);
void func_D526(void);
void func_D3EB(void);
void func_D28C(void);
void func_85E1_b0(void);
void func_85E1_b1(void);
void func_85E1_b2(void);
void func_85E1_b3(void);
void func_85E1_b4(void);
void func_EF53(void);
void func_EF60(void);
void func_F947(void);
void func_F99D(void);
void func_F958(void);
void func_F971(void);
void func_F982(void);
void func_F987(void);
void func_F978(void);
void func_F970(void);
void func_D495(void);
void func_EAD2(void);
void func_C865(void);
void func_D49A(void);
void func_9FBF_b0(void);
void func_BFBF_b0(void);
void func_9FBF_b1(void);
void func_BFBF_b1(void);
void func_9FBF_b2(void);
void func_BFBF_b2(void);
void func_9FBF_b4(void);
void func_9FBF_b5(void);
void func_BFBF_b5(void);
void func_9FBF_b6(void);
void func_BFBF_b6(void);
void func_D669(void);
void func_F439(void);
void func_EAB9(void);
void func_FE77(void);
void func_C4D6(void);
void func_801B_b0(void);
void func_801B_b1(void);
void func_801B_b2(void);
void func_801B_b4(void);
void func_801B_b5(void);
void func_801B_b6(void);
void func_BF20_b0(void);
void func_BF20_b1(void);
void func_BF20_b2(void);
void func_BF20_b5(void);
void func_BF20_b6(void);
void func_8015_b0(void);
void func_8015_b1(void);
void func_8015_b4(void);
void func_8015_b5(void);
void func_8018_b0(void);
void func_8018_b1(void);
void func_8018_b2(void);
void func_8018_b4(void);
void func_8018_b5(void);
void func_8018_b6(void);
void func_E7F6(void);
void func_EE57(void);
void func_D68B(void);
void func_D68D(void);
void func_8241_b6(void);
void func_8234_b6(void);
void func_9CCD_b1(void);
void func_8F89_b2(void);
void func_9690_b2(void);
void func_9791_b2(void);
void func_9892_b2(void);
void func_A8A8_b3(void);
void func_A9A8_b3(void);
void func_A9A9_b3(void);
void func_A901_b3(void);
void func_8D07_b3(void);
void func_87DB_b4(void);
void func_87F3_b4(void);
void func_880B_b4(void);
void func_8823_b4(void);
void func_883B_b4(void);
void func_8853_b4(void);
void func_886B_b4(void);
void func_8883_b4(void);
void func_889B_b4(void);
void func_88B3_b4(void);
void func_88CB_b4(void);
void func_88E3_b4(void);
void func_88FB_b4(void);
void func_8913_b4(void);
void func_892B_b4(void);
void func_8943_b4(void);
void func_895B_b4(void);
void func_8973_b4(void);
void func_898B_b4(void);
void func_89A3_b4(void);
void func_89BB_b4(void);
void func_89D3_b4(void);
void func_8A3E_b4(void);
void func_8AB7_b4(void);
void func_8B11_b4(void);
void func_8B4D_b4(void);
void func_8B65_b4(void);
void func_8B7D_b4(void);
void func_8BE8_b4(void);
void func_8C53_b4(void);
void func_8CEB_b4(void);
void func_8D03_b4(void);
void func_8D1B_b4(void);
void func_8D33_b4(void);
void func_8D4B_b4(void);
void func_8D63_b4(void);
void func_8D7B_b4(void);
void func_8DAB_b4(void);
void func_8DC3_b4(void);
void func_8DE4_b4(void);
void func_8E57_b4(void);
void func_8E6F_b4(void);
void func_8E8A_b4(void);
void func_8EA2_b4(void);
void func_8EBA_b4(void);
void func_8ED2_b4(void);
void func_8EEA_b4(void);
void func_805A_b4(void);
void func_8F02_b4(void);
void func_8F1A_b4(void);
void func_8F32_b4(void);
void func_8F4A_b4(void);
void func_8F62_b4(void);
void func_8F96_b4(void);
void func_8FCA_b4(void);
void func_9045_b4(void);
void func_905D_b4(void);
void func_9097_b4(void);
void func_90FB_b4(void);
void func_9113_b4(void);
void func_912B_b4(void);
void func_9143_b4(void);
void func_915B_b4(void);
void func_9176_b4(void);
void func_9191_b4(void);
void func_9226_b4(void);
void func_92E3_b4(void);
void func_9307_b4(void);
void func_9322_b4(void);
void func_937F_b4(void);
void func_939A_b4(void);
void func_9436_b4(void);
void func_9451_b4(void);
void func_946C_b4(void);
void func_9487_b4(void);
void func_8161_b4(void);
void func_949F_b4(void);
void func_8171_b4(void);
void func_81A9_b4(void);
void func_81C2_b4(void);
void func_81CF_b4(void);
void func_81D8_b4(void);
void func_81F3_b4(void);
void func_81FF_b4(void);
void func_8568_b4(void);
void func_8267_b4(void);
void func_8272_b4(void);
void func_827D_b4(void);
void func_8288_b4(void);
void func_8293_b4(void);
void func_829B_b4(void);
void func_82CB_b4(void);
void func_8329_b4(void);
void func_8333_b4(void);
void func_8352_b4(void);
void func_8371_b4(void);
void func_83AF_b4(void);
void func_8385_b4(void);
void func_84F8_b4(void);
void func_8501_b4(void);
void func_839A_b4(void);
void func_83D9_b4(void);
void func_83F4_b4(void);
void func_840F_b4(void);
void func_8402_b4(void);
void func_8425_b4(void);
void func_84CC_b4(void);
void func_854D_b4(void);
void func_82E2_b4(void);
void func_8311_b4(void);
void func_9812_b4(void);
void func_9815_b4(void);
void func_9818_b4(void);
void func_981B_b4(void);
void func_981E_b4(void);
void func_8518_b4(void);
void func_8542_b4(void);
void func_9600_b4(void);
void func_96FE_b4(void);
void func_B51C_b4(void);
void func_BD96_b4(void);
void func_925F_b4(void);
void func_919D_b4(void);
void func_927C_b4(void);
void func_93CD_b4(void);
void func_8460_b4(void);
void func_8534_b4(void);
void func_83DE_b5(void);
void func_B085_b5(void);
void func_B09A_b5(void);
void func_B08F_b5(void);
void func_B48B_b5(void);
void func_BD88_b5(void);
void func_AF8B_b5(void);
void func_AF9D_b5(void);
void func_958C_b5(void);
void func_958E_b5(void);
void func_9E8C_b5(void);
void func_A78C_b5(void);
void func_9688_b5(void);
void func_9F88_b5(void);
void func_BD8D_b5(void);
void func_9C5A_b5(void);
void func_9CF1_b5(void);
void func_A02C_b5(void);
void func_A328_b5(void);
void func_ABD3_b5(void);
void func_AC59_b5(void);
void func_AC91_b5(void);
void func_AC8D_b5(void);
void func_AD04_b5(void);
void func_AD06_b5(void);
void func_AD59_b5(void);
void func_AD60_b5(void);
void func_AD69_b5(void);
void func_AD7D_b5(void);
void func_AE05_b5(void);
void func_AE0C_b5(void);
void func_AFD3_b5(void);
void func_96A6_b5(void);
void func_AFF8_b5(void);
void func_B006_b5(void);
void func_B003_b5(void);
void func_AFFB_b5(void);
void func_B0A9_b5(void);
void func_B188_b5(void);
void func_B4A0_b5(void);
void func_BA48_b5(void);
void func_BA4A_b5(void);
void func_BBDB_b5(void);
void func_BBE6_b5(void);
void func_BD2E_b5(void);
void func_BE2C_b5(void);
void func_BEC8_b5(void);
void func_BFC9_b5(void);
void func_BFD0_b5(void);
void func_93E5_b5(void);
void func_93C5_b5(void);
void func_93D9_b5(void);
void func_A28E_b5(void);
void func_87B6_b5(void);
void func_8787_b5(void);
void func_8785_b5(void);
void func_9090_b5(void);
void func_9695_b5(void);
void func_9990_b5(void);
void func_9999_b5(void);
void func_999F_b5(void);
void func_99A5_b5(void);
void func_B7A7_b5(void);
void func_B5A5_b5(void);
void func_B5A9_b5(void);
void func_B099_b5(void);
void func_A533_b5(void);
void func_8527_b5(void);
void func_A524_b5(void);
void func_9948_b5(void);
void func_9DFF_b5(void);
void func_9E07_b5(void);
void func_A04C_b5(void);
void func_A13C_b5(void);
void func_A1A1_b5(void);
void func_BDA1_b5(void);
void func_BDA6_b5(void);
void func_BDA8_b5(void);
void func_A44C_b5(void);
void func_9949_b5(void);
void func_9960_b5(void);
void func_994B_b5(void);
void func_8E29_b5(void);
void func_8209_b5(void);
void func_823A_b5(void);
void func_B1AC_b5(void);
void func_B1B1_b5(void);
void func_B905_b5(void);
void func_AE6B_b5(void);
void func_AFAF_b5(void);
void func_AEAF_b5(void);
void func_98FA_b5(void);
void func_B00B_b5(void);
void func_B011_b5(void);
void func_B020_b5(void);
void func_B018_b5(void);
void func_B023_b5(void);
void func_B4D0_b5(void);
void func_AD01_b5(void);
void func_A2B9_b5(void);
void func_85B8_b5(void);
void func_85B9_b5(void);
void func_85BD_b5(void);
void func_85C7_b5(void);
void func_9673_b5(void);
void func_9681_b5(void);
void func_9686_b5(void);
void func_B923_b5(void);
void func_9B85_b5(void);
void func_9B99_b5(void);
void func_BAEC_b5(void);
void func_BB07_b5(void);
void func_BABA_b5(void);
void func_BABB_b5(void);
void func_ADBA_b5(void);
void func_ADBC_b5(void);
void func_9383_b5(void);
void func_9A8A_b5(void);
void func_9E8E_b5(void);
void func_B2A5_b5(void);
void func_B405_b5(void);
void func_BC05_b5(void);
void func_BD89_b5(void);
void func_BE83_b5(void);
void func_BCD0_b5(void);
void func_BD30_b5(void);
void func_BD9F_b5(void);
void func_BD4C_b5(void);
void func_BD99_b5(void);
void func_BC11_b5(void);
void func_BD49_b5(void);
void func_BD91_b5(void);
void func_BCD3_b5(void);
void func_BC21_b5(void);
void func_BD33_b5(void);
void func_BC97_b5(void);
void func_BDB4_b5(void);
void func_BF4A_b5(void);
void func_BC2A_b5(void);
void func_BC4C_b5(void);
void func_BC18_b5(void);
void func_BC45_b5(void);
void func_BD4F_b5(void);
void func_BDCF_b5(void);
void func_BEBA_b5(void);
void func_BE7A_b5(void);
void func_BD5D_b5(void);
void func_BDBD_b5(void);
void func_BDBF_b5(void);
void func_ADBD_b5(void);
void func_BDAA_b5(void);
void func_BDB0_b5(void);
void func_BDAE_b5(void);
void func_BE28_b5(void);
void func_BD00_b5(void);
void func_BE2A_b5(void);
void func_853A_b5(void);
void func_AFA9_b5(void);
void func_AFAE_b5(void);
void func_9971_b5(void);
void func_B4B0_b5(void);
void func_AF4B_b5(void);
void func_B745_b5(void);
void func_B74A_b5(void);
void func_AA88_b5(void);
void func_AA99_b5(void);
void func_850D_b5(void);
void func_9D10_b5(void);
void func_93CD_b5(void);
void func_9CCD_b5(void);
void func_ACCE_b5(void);
void func_ACD1_b5(void);
void func_ACDA_b5(void);
void func_AA03_b5(void);
void func_AA05_b5(void);
void func_98BD_b5(void);
void func_A6CE_b5(void);
void func_9D0E_b5(void);
void func_AA00_b5(void);
void func_850E_b5(void);
void func_A938_b5(void);
void func_A948_b5(void);
void func_A941_b5(void);
void func_A93A_b5(void);
void func_A942_b5(void);
void func_A945_b5(void);
void func_A00F_b5(void);
void func_A011_b5(void);
void func_85E0_b5(void);
void func_8510_b5(void);
void func_A96A_b5(void);
void func_A96B_b5(void);
void func_A96D_b5(void);
void func_A96F_b5(void);
void func_8558_b5(void);
void func_A555_b5(void);
void func_A55B_b5(void);
void func_853C_b5(void);
void func_8556_b5(void);
void func_A53E_b5(void);
void func_A546_b5(void);
void func_81AC_b5(void);
void func_8D56_b5(void);
void func_A8A8_b5(void);
void func_B48E_b5(void);
void func_B400_b5(void);
void func_BC00_b5(void);
void func_80EA_b5(void);
void func_80EF_b5(void);
void func_80E8_b5(void);
void func_80E6_b5(void);
void func_80E4_b5(void);
void func_9FA9_b5(void);
void func_9FB4_b5(void);
void func_A099_b5(void);
void func_9904_b5(void);
void func_9911_b5(void);
void func_990A_b5(void);
void func_990D_b5(void);
void func_A5D0_b5(void);
void func_9524_b5(void);
void func_8C68_b6(void);
void func_8C8C_b6(void);
void func_860F_b6(void);
void func_865D_b6(void);
void func_863C_b6(void);
void func_81B4_b6(void);
void func_869B_b6(void);
void func_8749_b6(void);
void func_8988_b6(void);
void func_A92B_b6(void);
void func_A926_b6(void);
void func_A523_b6(void);
void func_A9FA_b6(void);
void func_A576_b6(void);
void func_A901_b6(void);
void func_85A3_b6(void);
void func_8CB3_b6(void);
void func_8CEB_b6(void);
void func_8CF8_b6(void);
void func_8D4E_b6(void);
void func_8D34_b6(void);
void func_8040_b6(void);
void func_A955_b6(void);
void func_A956_b6(void);
void func_8510_b6(void);
void func_8516_b6(void);
void func_852E_b6(void);
void func_8596_b6(void);
void func_859F_b6(void);
void func_8D3D_b6(void);
void func_8D42_b6(void);
void func_8D4C_b6(void);
void func_8595_b6(void);
void func_A9FE_b6(void);
void func_8D63_b6(void);
void func_858B_b6(void);
void func_8565_b6(void);
void func_A938_b6(void);
void func_877B_b6(void);
void func_B2DF_b6(void);
void func_BC41_b6(void);
void func_BC47_b6(void);
void func_BC4D_b6(void);
void func_BC53_b6(void);
void func_BC59_b6(void);
void func_BC5F_b6(void);
void func_A1B1_b6(void);
void func_8191_b6(void);
void func_B302_b6(void);
void func_8102_b6(void);
void func_A191_b6(void);
void func_8702_b6(void);
void func_A797_b6(void);
void func_A142_b6(void);
void func_A302_b6(void);
void func_8393_b6(void);
void func_A742_b6(void);
void func_A902_b6(void);
void func_A240_b6(void);
void func_A001_b6(void);
void func_A003_b6(void);
void func_A909_b6(void);
void func_A90B_b6(void);
void func_A515_b6(void);
void func_A519_b6(void);
void func_A560_b6(void);
void func_850C_b6(void);
void func_A00A_b6(void);
void func_8440_b6(void);
void func_8442_b6(void);
void func_8404_b6(void);
void func_8802_b6(void);
void func_8807_b6(void);
void func_A000_b6(void);
void func_9700_b6(void);
void func_8E00_b6(void);
void func_8600_b6(void);
void func_AA00_b6(void);
void func_AAAA_b6(void);
void func_A937_b6(void);
void func_850E_b6(void);
void func_A00F_b6(void);
void func_A950_b6(void);
void func_8540_b6(void);
void func_A551_b6(void);
void func_85D0_b6(void);
void func_85DD_b6(void);
void func_A958_b6(void);
void func_A959_b6(void);
void func_A25D_b6(void);
void func_8654_b6(void);
void func_8696_b6(void);
void func_8693_b6(void);
void func_8652_b6(void);
void func_A942_b6(void);
void func_A943_b6(void);
void func_A957_b6(void);
void func_85E8_b6(void);
void func_A23D_b6(void);
void func_864D_b6(void);
void func_864E_b6(void);
void func_8DEA_b6(void);
void func_8DF6_b6(void);
void func_8D03_b6(void);
void func_8529_b6(void);
void func_852D_b6(void);
void func_852B_b6(void);
void func_8D5D_b6(void);
void func_8D6C_b6(void);
void func_A975_b6(void);
void func_852F_b6(void);
void func_A93B_b6(void);
void func_A93D_b6(void);
void func_A94B_b6(void);
void func_A500_b6(void);
void func_A506_b6(void);
void func_A50B_b6(void);
void func_A911_b6(void);
void func_A93A_b6(void);
void func_A84C_b6(void);
void func_A9DE_b6(void);
void func_8001_b6(void);
void func_A680_b6(void);
void func_8E64_b6(void);
void func_B3AE_b6(void);
void func_A948_b6(void);
void func_8524_b6(void);
void func_801A_b6(void);
void func_8019_b6(void);
void func_8017_b6(void);
void func_8533_b6(void);
void func_A924_b6(void);
void func_9CD0_b1(void);
void func_9CC3_b1(void);
void func_A736_b1(void);
void func_A7D5_b1(void);
void func_94F2_b4(void);
void func_831C_b4(void);
void func_91FD_b4(void);
void func_843D_b4(void);
void func_A7FD_b5(void);
void func_A806_b5(void);
void func_A800_b5(void);
void func_B069_b5(void);
void func_B4BB_b5(void);
void func_949A_b5(void);
void func_9099_b5(void);
void func_90A9_b5(void);
void func_90AF_b5(void);
void func_9191_b5(void);
void func_9195_b5(void);
void func_9192_b5(void);
void func_9D19_b5(void);
void func_998A_b5(void);
void func_9991_b5(void);
void func_9998_b5(void);
void func_B98A_b5(void);
void func_B912_b5(void);
void func_B93A_b5(void);
void func_A096_b5(void);
void func_9962_b5(void);
void func_B962_b5(void);
void func_9250_b5(void);
void func_9269_b5(void);
void func_B250_b5(void);
void func_92D1_b5(void);
void func_B2D1_b5(void);
void func_9B28_b5(void);
void func_BB28_b5(void);
void func_BB56_b5(void);
void func_BB4C_b5(void);
void func_BB65_b5(void);
void func_A28F_b5(void);
void func_A291_b5(void);
void func_A2B8_b5(void);
void func_92A7_b5(void);
void func_92D0_b5(void);
void func_B2A7_b5(void);
void func_B191_b5(void);
void func_A491_b5(void);
void func_A457_b5(void);
void func_A470_b5(void);
void func_A462_b5(void);
void func_A4F8_b5(void);
void func_A510_b5(void);
void func_A515_b5(void);
void func_A50B_b5(void);
void func_A501_b5(void);
void func_A51C_b5(void);
void func_A520_b5(void);
void func_A523_b5(void);
void func_A522_b5(void);
void func_A539_b5(void);
void func_A53F_b5(void);
void func_9EB4_b5(void);
void func_9EBD_b5(void);
void func_9ED1_b5(void);
void func_92FB_b5(void);
void func_9310_b5(void);
void func_9341_b5(void);
void func_932E_b5(void);
void func_B2FB_b5(void);
void func_A8AB_b5(void);
void func_A8F0_b5(void);
void func_A8B6_b5(void);
void func_A8BD_b5(void);
void func_927D_b5(void);
void func_9291_b5(void);
void func_9282_b5(void);
void func_B27D_b5(void);
void func_9639_b5(void);
void func_9650_b5(void);
void func_9653_b5(void);
void func_B639_b5(void);
void func_AB12_b5(void);
void func_ACF3_b5(void);
void func_9976_b5(void);
void func_B976_b5(void);
void func_AF74_b5(void);
void func_AF8E_b5(void);
void func_B8FA_b5(void);
void func_B05B_b5(void);
void func_B08C_b5(void);
void func_B196_b5(void);
void func_B19A_b5(void);
void func_B1B8_b5(void);
void func_B1B3_b5(void);
void func_B1D7_b5(void);
void func_B1F0_b5(void);
void func_B1E8_b5(void);
void func_B283_b5(void);
void func_B207_b5(void);
void func_B068_b5(void);
void func_A160_b5(void);
void func_A99D_b5(void);
void func_A99F_b5(void);
void func_A9A5_b5(void);
void func_BC0D_b5(void);
void func_BCE2_b5(void);
void func_BD3B_b5(void);
void func_BDBB_b5(void);
void func_AB41_b5(void);
void func_94AA_b5(void);
void func_B520_b5(void);
void func_A918_b6(void);
void func_A8F9_b6(void);
void func_A9CD_b6(void);
void func_A8FD_b6(void);
void func_A90A_b6(void);
void func_BC3B_b6(void);
void func_86E5_b6(void);
void func_8685_b6(void);
void func_A685_b6(void);
void func_8DFE_b6(void);
void func_A9A3_b6(void);
void func_AB36_b1(void);
void func_AB9C_b1(void);
void func_ABB6_b1(void);
void func_ACF4_b1(void);
void func_B9A9_b5(void);
void func_A78D_b6(void);
void func_B542_b1(void);
void func_B598_b1(void);
void func_ACAD_b1(void);
void func_B0B9_b4(void);
void func_8524_b4(void);
void func_8541_b4(void);
void func_8533_b4(void);
void func_B7BD_b4(void);
void func_A973_b4(void);
void func_A909_b4(void);
void func_A924_b4(void);
void func_856F_b4(void);
void func_8598_b4(void);
void func_85CE_b4(void);
void func_85D9_b4(void);
void func_8571_b4(void);
void func_95B4_b4(void);
void func_95C5_b4(void);
void func_95D6_b4(void);
void func_AE87_b5(void);
void func_A48B_b5(void);
void func_A688_b5(void);
void func_B290_b5(void);
void func_B385_b5(void);
void func_B6A8_b5(void);
void func_F761(void);
void func_88D5_b5(void);
void func_8935_b5(void);
void func_B489_b5(void);
void func_81F3_b5(void);
void func_82D6_b5(void);
void func_82DE_b5(void);
void func_9482_b5(void);
void func_8594_b5(void);
void func_8598_b5(void);
void func_95E5_b5(void);
void func_8D30_b5(void);
void func_8D7D_b5(void);
void func_8D5F_b5(void);
void func_8D93_b5(void);
void func_960D_b5(void);
void func_8F65_b5(void);
void func_8825_b5(void);
void func_90D6_b5(void);
void func_8B10_b5(void);
void func_8F86_b5(void);
void func_8B16_b5(void);
void func_8B19_b5(void);
void func_8B1C_b5(void);
void func_8DF2_b5(void);
void func_8F55_b5(void);
void func_863D_b5(void);
void func_8691_b5(void);
void func_93EC_b5(void);
void func_8D68_b5(void);
void func_9406_b5(void);
void func_85E1_b5(void);
void func_8890_b5(void);
void func_8914_b5(void);
void func_890E_b5(void);
void func_8905_b5(void);
void func_93F2_b5(void);
void func_93FF_b5(void);
void func_93B1_b5(void);
void func_9432_b5(void);
void func_9475_b5(void);
void func_9540_b5(void);
void func_954F_b5(void);
void func_9578_b5(void);
void func_9484_b5(void);
void func_85A7_b5(void);
void func_85A8_b5(void);
void func_8596_b5(void);
void func_8E00_b5(void);
void func_93EE_b5(void);
void func_AE83_b5(void);
void func_BA83_b5(void);
void func_BA85_b5(void);
void func_832A_b5(void);
void func_9E82_b5(void);
void func_819E_b5(void);
void func_841E_b5(void);
void func_84CA_b5(void);
void func_A848_b5(void);
void func_A84A_b5(void);
void func_9D6C_b5(void);
void func_BD9D_b5(void);
void func_BDA0_b5(void);
void func_9D90_b5(void);
void func_EAEC(void);
void func_EAF1(void);
void func_EAF7(void);
void func_EAF5(void);
void func_EAFC(void);
void func_EB02(void);
void func_9160_b5(void);
void func_B223_b5(void);
void func_A908_b5(void);
void func_A909_b5(void);
void func_A910_b5(void);
void func_D106(void);
void func_D109(void);
void func_9F3C_b5(void);
void func_99B5_b5(void);
void func_99BD_b5(void);
void func_99C9_b5(void);
void func_99B0_b5(void);
void func_99B4_b5(void);
void func_BD4A_b5(void);
void func_BD4D_b5(void);
void func_BD04_b5(void);
void func_BD06_b5(void);
void func_BD08_b5(void);
void func_99AA_b5(void);
void func_99AC_b5(void);
void func_9105_b5(void);
void func_9E85_b5(void);
void func_922F_b5(void);
void func_9E9E_b5(void);
void func_9108_b5(void);
void func_910B_b5(void);
void func_9110_b5(void);
void func_910D_b5(void);
void func_F047(void);
void func_F04B(void);
void func_EFFE(void);
void func_8F33_b5(void);
void func_A999_b5(void);
void func_9E2F_b5(void);
void func_9D06_b5(void);
void func_BDFE_b5(void);
void func_EA29(void);
void func_BDA9_b5(void);
void func_BDD1_b5(void);
void func_9DF0_b5(void);
void func_9DFD_b5(void);
void func_BDFF_b5(void);
void func_B101_b5(void);
void func_B103_b5(void);
void func_B105_b5(void);
void func_B1BD_b5(void);
void func_B0BD_b5(void);
void func_B0C9_b5(void);
void func_9405_b5(void);
void func_BC71_b5(void);
void func_A5F0_b5(void);
void func_A5FE_b5(void);
void func_9728_b5(void);
void func_B1C0_b5(void);
void func_B1C2_b5(void);
void func_A951_b5(void);
void func_A956_b5(void);
void func_A958_b5(void);
void func_9483_b5(void);
void func_9580_b5(void);
void func_959C_b5(void);
void func_95AC_b5(void);
void func_9623_b5(void);
void func_9703_b5(void);
void func_9CCE_b5(void);
void func_9E5F_b5(void);
void func_9D8B_b5(void);
void func_948B_b5(void);
void func_A588_b5(void);
void func_9C62_b5(void);
void func_9C93_b5(void);
void func_9CBB_b5(void);
void func_9CF6_b5(void);
void func_9D35_b5(void);
void func_9D7A_b5(void);
void func_9E15_b5(void);
void func_9E98_b5(void);
void func_9ED4_b5(void);
void func_9EF4_b5(void);
void func_9F01_b5(void);
void func_9F38_b5(void);
void func_9F4D_b5(void);
void func_9F73_b5(void);
void func_9F7D_b5(void);
void func_9F87_b5(void);
void func_A007_b5(void);
void func_A05C_b5(void);
void func_A0A1_b5(void);
void func_A0F3_b5(void);
void func_A15C_b5(void);
void func_A188_b5(void);
void func_A208_b5(void);
void func_A28D_b5(void);
void func_A2CC_b5(void);
void func_A313_b5(void);
void func_A38D_b5(void);
void func_A392_b5(void);
void func_A3A8_b5(void);
void func_A3FB_b5(void);
void func_A403_b5(void);
void func_A408_b5(void);
void func_A4C8_b5(void);
void func_A5E4_b5(void);
void func_9C92_b5(void);
void func_9764_b5(void);
void func_A560_b5(void);
void func_9F29_b5(void);
void func_9D80_b5(void);
void func_A4E8_b5(void);
void func_A5A8_b5(void);
void func_9D8D_b5(void);
void func_9787_b5(void);
void func_9488_b5(void);
void func_A2FF_b5(void);
void func_A620_b5(void);
void func_A002_b5(void);
void func_A200_b5(void);
void func_A5F7_b5(void);
void func_A1D9_b5(void);
void func_9D0D_b5(void);
void func_9D20_b5(void);
void func_B031_b5(void);
void func_95B0_b5(void);
void func_95EE_b5(void);
void func_9D18_b5(void);
void func_EC70(void);
void func_9177_b5(void);
void func_A020_b5(void);
void func_A029_b5(void);
void func_A024_b5(void);
void func_A04D_b5(void);
void func_BDBC_b5(void);
void func_BDBE_b5(void);
void func_A8FE_b5(void);
void func_A902_b5(void);
void func_BD51_b5(void);
void func_BD60_b5(void);
void func_BD62_b5(void);
void func_BD7D_b5(void);
void func_D331(void);
void func_9D98_b5(void);
void func_9DA1_b5(void);
void func_BD0B_b5(void);
void func_BD0F_b5(void);
void func_993B_b5(void);
void func_9702_b5(void);
void func_9704_b5(void);
void func_9723_b5(void);
void func_A4FD_b5(void);
void func_9651_b5(void);
void func_A09D_b5(void);
void func_A9A1_b5(void);
void func_A930_b5(void);
void func_A931_b5(void);
void func_9D0B_b5(void);
void func_EA51(void);
void func_B991_b5(void);
void func_B999_b5(void);
void func_B9A0_b5(void);
void func_A24D_b5(void);
void func_9D6D_b5(void);
void func_9D74_b5(void);
void func_9D79_b5(void);
void func_A9EA_b5(void);
void func_A9EE_b5(void);
void func_A9F0_b5(void);
void func_81E9_b5(void);
void func_B02E_b5(void);
void func_B030_b5(void);
void func_AD4A_b5(void);
void func_AD4C_b5(void);
void func_A940_b5(void);
void func_9931_b5(void);
void func_EFA0(void);
void func_EFA8(void);
void func_B027_b5(void);
void func_B029_b5(void);
void func_A98E_b5(void);
void func_A995_b5(void);
void func_A944_b5(void);
void func_F091(void);
void func_CD14(void);
void func_B9D1_b5(void);
void func_A7B6_b5(void);
void func_B1A7_b5(void);
void func_B1A9_b5(void);
void func_B1AB_b5(void);
void func_ADA7_b5(void);
void func_ADA9_b5(void);
void func_ADB0_b5(void);
void func_ADB3_b5(void);
void func_ADB8_b5(void);
void func_99D1_b5(void);
void func_A5D1_b5(void);
void func_A5E3_b5(void);
void func_99AD_b5(void);
void func_A851_b5(void);
void func_B906_b5(void);
void func_B911_b5(void);
void func_A7A5_b5(void);
void func_EA91(void);
void func_A518_b5(void);
void func_AD51_b5(void);
void func_A206_b5(void);
void func_A220_b5(void);
void func_A901_b5(void);
void func_A905_b5(void);
void func_A903_b5(void);
void func_A907_b5(void);
void func_A92C_b5(void);
void func_E9BD(void);
void func_82EA_b5(void);
void func_831E_b5(void);
void func_A982_b5(void);
void func_99A9_b5(void);
void func_99AB_b5(void);
void func_91BD_b5(void);
void func_91D1_b5(void);
void func_91D0_b5(void);
void func_91F1_b5(void);
void func_9203_b5(void);
void func_91C9_b5(void);
void func_9202_b5(void);
void func_A9DC_b5(void);
void func_A9FE_b5(void);
void func_A9DE_b5(void);
void func_A9E4_b5(void);
void func_EA9E(void);
void func_949E_b5(void);
void func_94A9_b5(void);
void func_A9A0_b5(void);
void func_A9A2_b5(void);
void func_E291(void);
void func_BDEA_b5(void);
void func_8004_b5(void);
void func_8006_b5(void);
void func_DE91(void);
void func_BD7F_b5(void);
void func_BDC9_b5(void);
void func_D1C9(void);
void func_D1EC(void);
void func_9D00_b5(void);
void func_9D04_b5(void);
void func_9D02_b5(void);
void func_9D07_b5(void);
void func_9138_b5(void);
void func_EC24(void);
void func_AAD9_b5(void);
void func_D8F0(void);
void func_D8F2(void);
void func_AA06_b5(void);
void func_AA30_b5(void);
void func_AA9E_b5(void);
void func_AABC_b5(void);
void func_B1D1_b5(void);
void func_9464_b5(void);
void func_AB99_b5(void);
void func_ABAB_b5(void);
void func_9DAB_b5(void);
void func_A231_b5(void);
void func_AB07_b5(void);
void func_A599_b5(void);
void func_A59D_b5(void);
void func_997D_b5(void);
void func_9DFE_b5(void);
void func_AB60_b5(void);
void func_BD25_b5(void);
void func_BD29_b5(void);
void func_E73F(void);
void func_E75C(void);
void func_A222_b5(void);
void func_A229_b5(void);
void func_B430_b5(void);
void func_B432_b5(void);
void func_9F48_b5(void);
void func_9909_b5(void);
void func_A5BD_b5(void);
void func_A57D_b5(void);
void func_A585_b5(void);
void func_9FE9_b5(void);
void func_9FF1_b5(void);
void func_8530_b5(void);
void func_B485_b5(void);
void func_A58A_b5(void);
void func_A504_b5(void);
void func_A506_b5(void);
void func_ABF2_b5(void);
void func_AC00_b5(void);
void func_AC08_b5(void);
void func_AC20_b5(void);
void func_AC4B_b5(void);
void func_A0D1_b5(void);
void func_A100_b5(void);
void func_A0D3_b5(void);
void func_A505_b5(void);
void func_8553_b5(void);
void func_FC33(void);
void func_F031(void);
void func_9130_b5(void);
void func_A5A9_b5(void);
void func_BDD0_b5(void);
void func_9DE1_b5(void);
void func_9DE6_b5(void);
void func_AE53_b5(void);
void func_AE88_b5(void);
void func_AE8D_b5(void);
void func_AEA7_b5(void);
void func_BCAE_b5(void);
void func_9DDE_b5(void);
void func_E460(void);
void func_E48E(void);
void func_E488(void);
void func_E48A(void);
void func_B99D_b5(void);
void func_AF06_b5(void);
void func_9DA0_b5(void);
void func_9DA2_b5(void);
void func_9DA9_b5(void);
void func_AED1_b5(void);
void func_AE39_b5(void);
void func_AF5C_b5(void);
void func_AFD9_b5(void);
void func_AF09_b5(void);
void func_AF18_b5(void);
void func_AF31_b5(void);
void func_AF6B_b5(void);
void func_BDAF_b5(void);
void func_9714_b5(void);
void func_90D0_b5(void);
void func_90D1_b5(void);
void func_8597_b5(void);
void func_B18A_b5(void);
void func_B195_b5(void);
void func_B190_b5(void);
void func_B18D_b5(void);
void func_B8B1_b5(void);
void func_B8BD_b5(void);
void func_B806_b5(void);
void func_B1C6_b5(void);
void func_BDF4_b5(void);
void func_ED33(void);
void func_AED9_b5(void);
void func_AF05_b5(void);
void func_AF39_b5(void);
void func_AF51_b5(void);
void func_AF44_b5(void);
void func_B833_b5(void);
void func_AFBC_b5(void);
void func_AA9D_b5(void);
void func_A010_b5(void);
void func_B58A_b5(void);
void func_B148_b5(void);
void func_B14C_b5(void);
void func_B151_b5(void);
void func_DE29(void);
void func_DE30(void);
void func_B160_b5(void);
void func_8EFD_b5(void);
void func_8EFF_b5(void);
void func_AFF1_b5(void);
void func_AFF3_b5(void);
void func_AFF7_b5(void);
void func_B02D_b5(void);
void func_B050_b5(void);
void func_90EE_b5(void);
void func_9100_b5(void);
void func_9104_b5(void);
void func_A94A_b5(void);
void func_A94C_b5(void);
void func_A971_b5(void);
void func_B9AC_b5(void);
void func_B9B1_b5(void);
void func_B9B4_b5(void);
void func_B9B0_b5(void);
void func_B116_b5(void);
void func_AD8D_b5(void);
void func_AD99_b5(void);
void func_B0D8_b5(void);
void func_B0EA_b5(void);
void func_B0F1_b5(void);
void func_B100_b5(void);
void func_B10B_b5(void);
void func_B10D_b5(void);
void func_B123_b5(void);
void func_B131_b5(void);
void func_CD11(void);
void func_9E06_b5(void);
void func_9499_b5(void);
void func_ADCE_b5(void);
void func_B0AD_b5(void);
void func_B0B0_b5(void);
void func_B0B5_b5(void);
void func_EA3A(void);
void func_AD33_b5(void);
void func_99D0_b5(void);
void func_A880_b5(void);
void func_99E7_b5(void);
void func_9D4D_b5(void);
void func_9D5D_b5(void);
void func_9D85_b5(void);
void func_A26C_b5(void);
void func_9D92_b5(void);
void func_9DB2_b5(void);
void func_AA4A_b5(void);
void func_9E51_b5(void);
void func_9E3D_b5(void);
void func_9E45_b5(void);
void func_9E8A_b5(void);
void func_9E92_b5(void);
void func_9DD0_b5(void);
void func_A004_b5(void);
void func_9DBD_b5(void);
void func_9F9D_b5(void);
void func_9FA8_b5(void);
void func_9FC2_b5(void);
void func_9A20_b5(void);
void func_9D7D_b5(void);
void func_A10F_b5(void);
void func_A121_b5(void);
void func_A132_b5(void);
void func_A13D_b5(void);
void func_A14C_b5(void);
void func_A118_b5(void);
void func_9D69_b5(void);
void func_A258_b5(void);
void func_A566_b5(void);
void func_A5A1_b5(void);
void func_A5AC_b5(void);
void func_99F7_b5(void);
void func_A07D_b5(void);
void func_A766_b5(void);
void func_A796_b5(void);
void func_A7CC_b5(void);
void func_A7C1_b5(void);
void func_A753_b5(void);
void func_A9A6_b5(void);
void func_99FE_b5(void);
void func_9EEC_b5(void);
void func_AAF7_b5(void);
void func_AA7F_b5(void);
void func_AA87_b5(void);
void func_A9B0_b5(void);
void func_9EF7_b5(void);
void func_AAEC_b5(void);
void func_AB30_b5(void);
void func_AB06_b5(void);
void func_AAF1_b5(void);
void func_A5B2_b5(void);
void func_AA33_b5(void);
void func_A5B1_b5(void);
void func_A2EA_b5(void);
void func_A2F9_b5(void);
void func_AA1F_b5(void);
void func_9C9B_b5(void);
void func_A91F_b5(void);
void func_A3FA_b5(void);
void func_9D38_b5(void);
void func_A9BF_b5(void);
void func_A0E4_b5(void);
void func_A97F_b5(void);
void func_A981_b5(void);
void func_B1A3_b5(void);
void func_B1A5_b5(void);
void func_B212_b5(void);
void func_B6A2_b5(void);
void func_B925_b5(void);
void func_B3F3_b5(void);
void func_B418_b5(void);
void func_B44E_b5(void);
void func_B431_b5(void);
void func_B7DE_b5(void);
void func_B83A_b5(void);
void func_B966_b5(void);
void func_BA71_b5(void);
void func_BACE_b5(void);
void func_B484_b5(void);
void func_B38C_b5(void);
void func_BA64_b5(void);
void func_B969_b5(void);
void func_BBF6_b5(void);
void func_B341_b5(void);
void func_B444_b5(void);
void func_BC27_b5(void);
void func_BBAF_b5(void);
void func_B5F5_b5(void);
void func_B6B8_b5(void);
void func_B7E8_b5(void);
void func_B756_b5(void);
void func_B950_b5(void);
void func_B6AC_b5(void);
void func_B2F6_b5(void);
void func_B406_b5(void);
void func_B788_b5(void);
void func_B362_b5(void);
void func_B659_b5(void);
void func_B892_b5(void);
void func_BC04_b5(void);
void func_B4E5_b5(void);
void func_BA8F_b5(void);
void func_B989_b5(void);
void func_B619_b5(void);
void func_ACBD_b5(void);
void func_AD9D_b5(void);
void func_ADA5_b5(void);
void func_F01A(void);
void func_F01E(void);
void func_AD72_b5(void);
void func_AD76_b5(void);
void func_B929_b5(void);
void func_B2A8_b5(void);
void func_B218_b5(void);
void func_A01F_b5(void);
void func_A026_b5(void);
void func_ADEE_b5(void);
void func_ADF0_b5(void);
void func_ADF2_b5(void);
void func_B102_b5(void);
void func_B104_b5(void);
void func_B106_b5(void);
void func_F13F(void);
void func_EE00(void);
void func_EE07(void);
void func_EE0E(void);
void func_EE02(void);
void func_EE10(void);
void func_EE05(void);
void func_EE09(void);
void func_EE0C(void);
void func_AD13_b5(void);
void func_ADB7_b5(void);
void func_F94D(void);
void func_8F08_b5(void);
void func_B02A_b5(void);
void func_A98F_b5(void);
void func_A994_b5(void);
void func_A991_b5(void);
void func_A998_b5(void);
void func_9805_b5(void);
void func_A820_b5(void);
void func_AD46_b5(void);
void func_AD48_b5(void);
void func_A0C9_b5(void);
void func_A0D0_b5(void);
void func_B807_b5(void);
void func_AA98_b5(void);
void func_AD07_b5(void);
void func_AD11_b5(void);
void func_AD08_b5(void);
void func_B979_b5(void);
void func_E9AD(void);
void func_A0AD_b5(void);
void func_A0B1_b5(void);
void func_A0B7_b5(void);
void func_A0BA_b5(void);
void func_AD24_b5(void);
void func_AD29_b5(void);
void func_93A9_b5(void);
void func_B120_b5(void);
void func_B293_b5(void);
void func_B738_b5(void);
void func_B985_b5(void);
void func_EEFC(void);
void func_EF00(void);
void func_EEFF(void);
void func_EF02(void);
void func_EF04(void);
void func_EF03(void);
void func_98B1_b5(void);
void func_A811_b5(void);
void func_A829_b5(void);
void func_A83A_b5(void);
void func_8525_b5(void);
void func_8535_b5(void);
void func_8528_b5(void);
void func_8562_b5(void);
void func_8561_b5(void);
void func_852A_b5(void);
void func_8559_b5(void);
void func_853D_b5(void);
void func_BB85_b5(void);
void func_90BA_b5(void);
void func_90BC_b5(void);
void func_90C0_b5(void);
void func_9281_b5(void);
void func_9283_b5(void);
void func_9392_b5(void);
void func_9A99_b5(void);
void func_9493_b5(void);
void func_9B9A_b5(void);
void func_9BA3_b5(void);
void func_AD85_b5(void);
void func_AD8C_b5(void);
void func_AD93_b5(void);
void func_AD86_b5(void);
void func_BB0A_b5(void);
void func_B97F_b5(void);
void func_B94A_b5(void);
void func_99A0_b5(void);
void func_99A2_b5(void);
void func_A78D_b5(void);
void func_A6A0_b5(void);
void func_A733_b5(void);
void func_A85B_b5(void);
void func_A873_b5(void);
void func_A8F6_b5(void);
void func_A90A_b5(void);
void func_A9C2_b5(void);
void func_AA02_b5(void);
void func_AA19_b5(void);
void func_AA52_b5(void);
void func_AABD_b5(void);
void func_A900_b5(void);
void func_A960_b5(void);
void func_A99A_b5(void);
void func_A740_b5(void);
void func_A7A7_b5(void);
void func_A9BD_b5(void);
void func_A9A9_b5(void);
void func_A934_b5(void);
void func_A953_b5(void);
void func_AA23_b5(void);
void func_AAA8_b5(void);
void func_AAAA_b5(void);
void func_AA8A_b5(void);
void func_A937_b5(void);
void func_A955_b5(void);
void func_A968_b5(void);
void func_A969_b5(void);
void func_A96C_b5(void);
void func_A659_b5(void);
void func_A840_b5(void);
void func_AA6D_b5(void);
void func_A985_b5(void);
void func_A98D_b5(void);
void func_A98A_b5(void);
void func_A085_b5(void);
void func_B505_b5(void);
void func_AD10_b5(void);
void func_F0AD(void);
void func_9206_b5(void);
void func_9892_b5(void);
void func_989A_b5(void);
void func_BCA8_b5(void);
void func_D845(void);
void func_BCD8_b5(void);
void func_B4A5_b5(void);
void func_A5C4_b5(void);
void func_BC98_b5(void);
void func_9BBC_b5(void);
void func_BC9B_b5(void);
void func_D405(void);
void func_D407(void);
void func_97A9_b5(void);
void func_A502_b5(void);
void func_B220_b5(void);
void func_BCB2_b5(void);
void func_92E9_b5(void);
void func_98FB_b5(void);
void func_BC59_b5(void);
void func_FF9D(void);
void func_BE44_b5(void);
void func_BE79_b5(void);
void func_BE4C_b5(void);
void func_BE49_b5(void);
void func_A0BE_b5(void);
void func_B9BD_b5(void);
void func_B1FA_b5(void);
void func_B1FF_b5(void);
void func_A5EE_b5(void);
void func_A869_b5(void);
void func_83AE_b6(void);
void func_83E0_b6(void);
void func_83CA_b6(void);
void func_83CC_b6(void);
void func_8403_b6(void);
void func_8431_b6(void);
void func_843C_b6(void);
void func_8445_b6(void);
void func_8467_b6(void);
void func_8450_b6(void);
void func_8478_b6(void);
void func_8460_b6(void);
void func_847B_b6(void);
void func_8488_b6(void);
void func_8493_b6(void);
void func_84A0_b6(void);
void func_84AB_b6(void);
void func_84C4_b6(void);
void func_85EB_b6(void);
void func_86EB_b6(void);
void func_9C99_b6(void);
void func_8801_b6(void);
void func_8825_b6(void);
void func_9885_b6(void);
void func_86E6_b6(void);
void func_873A_b6(void);
void func_8795_b6(void);
void func_874A_b6(void);
void func_8781_b6(void);
void func_8761_b6(void);
void func_876E_b6(void);
void func_8797_b6(void);
void func_8763_b6(void);
void func_878D_b6(void);
void func_A40F_b6(void);
void func_8811_b6(void);
void func_882F_b6(void);
void func_884B_b6(void);
void func_8860_b6(void);
void func_88FE_b6(void);
void func_88B4_b6(void);
void func_88C3_b6(void);
void func_8971_b6(void);
void func_8931_b6(void);
void func_8944_b6(void);
void func_8964_b6(void);
void func_8981_b6(void);
void func_8989_b6(void);
void func_8987_b6(void);
void func_8999_b6(void);
void func_AE80_b7(void);
void func_AE02_b7(void);
void func_8DAD_b7(void);
void func_8DCA_b7(void);
void func_A903_b7(void);
void func_A909_b7(void);
void func_A9E9_b7(void);
void func_990E_b7(void);
void func_9913_b7(void);
void func_9911_b7(void);
void func_A9CA_b7(void);
void func_A5E9_b7(void);
void func_8B30_b7(void);
void func_A910_b7(void);
void func_A901_b7(void);
void func_A904_b7(void);
void func_B085_b7(void);
void func_9999_b7(void);
void func_99C1_b7(void);
void func_9951_b7(void);
void func_9960_b7(void);
void func_E930(void);
void func_9918_b7(void);
void func_8D03_b7(void);
void func_B011_b7(void);
void func_A905_b7(void);
void func_8D02_b7(void);
void func_A933_b7(void);
void func_A936_b7(void);
void func_A941_b7(void);
void func_AD24_b7(void);
void func_A526_b7(void);
void func_A5EE_b7(void);
void func_9848_b7(void);
void func_A80A_b7(void);
void func_A1B9_b7(void);
void func_B925_b7(void);
void func_B924_b7(void);
void func_9033_b7(void);
void func_F617(void);
void func_F621(void);
void func_F630(void);
void func_F660(void);
void func_A404_b7(void);
void func_D28A(void);
void func_A420_b7(void);
void func_B4A4_b7(void);
void func_A9BE_b7(void);
void func_99F5_b7(void);
void func_A0B4_b7(void);
void func_AD16_b7(void);
void func_9EF5_b7(void);
void func_9F14_b7(void);
void func_9920_b7(void);
void func_A9F6_b7(void);
void func_A4E9_b7(void);
void func_A505_b7(void);
void func_A503_b7(void);
void func_A501_b7(void);
void func_A50D_b7(void);
void func_9E20_b7(void);
void func_E118(void);
void func_E11C(void);
void func_A951_b7(void);
void func_8CC9_b7(void);
void func_8CD2_b7(void);
void func_A560_b7(void);
void func_8CA5_b7(void);
void func_A9D0_b7(void);
void func_B0C6_b4(void);
void func_BE39_b4(void);
void func_B3D0_b4(void);
void func_B36F_b4(void);
void func_B77C_b4(void);
void func_B46D_b4(void);
void func_B444_b4(void);
void func_BD49_b4(void);
void func_BB92_b4(void);
void func_B9F0_b4(void);
void func_B7E8_b4(void);
void func_B756_b4(void);
void func_B950_b4(void);
void func_B842_b4(void);
void func_B1C8_b4(void);
void func_B576_b4(void);
void func_BE4C_b4(void);
void func_B2F6_b4(void);
void func_B406_b4(void);
void func_BD04_b4(void);
void func_84F1_b4(void);
void func_901B_b5(void);
void func_9028_b5(void);
void func_B285_b5(void);
void func_AE6C_b5(void);
void func_841C_b5(void);
void func_9D59_b5(void);
void func_90E6_b5(void);
void func_EA28(void);
void func_B13E_b5(void);
void func_A139_b5(void);
void func_EA50(void);
void func_EA30(void);
void func_AA7B_b5(void);
void func_AB8C_b5(void);
void func_BCC4_b5(void);
void func_9974_b5(void);
void func_9989_b5(void);
void func_9963_b5(void);
void func_ABFC_b5(void);
void func_ABFF_b5(void);
void func_B7D0_b5(void);
void func_AFB0_b5(void);
void func_B519_b5(void);
void func_B529_b5(void);
void func_B03F_b5(void);
void func_B04F_b5(void);
void func_B902_b5(void);
void func_B904_b5(void);
void func_BA41_b5(void);
void func_A49C_b5(void);
void func_A4A9_b5(void);
void func_B0ED_b5(void);
void func_B0F0_b5(void);
void func_99D7_b5(void);
void func_8F01_b5(void);
void func_B843_b5(void);
void func_B84A_b5(void);
void func_B885_b5(void);
void func_BAFC_b5(void);
void func_99CB_b5(void);
void func_9B72_b5(void);
void func_BEBD_b5(void);
void func_8415_b6(void);
void func_8B79_b6(void);
void func_8BA9_b6(void);
void func_A9C9_b7(void);
void func_A5D8_b7(void);
void func_A510_b7(void);
void func_A520_b7(void);
void func_A9FF_b7(void);
void func_AA0A_b7(void);
void func_A0AC_b7(void);
void func_98AE_b7(void);
void func_98F5_b7(void);
void func_A553_b7(void);
void func_A96C_b7(void);
void func_A999_b7(void);
void func_A98C_b7(void);
void func_BA3B_b5(void);
void func_99D5_b5(void);
void func_89DD_b6(void);
void func_A013_b3(void);
void func_8C01_b3(void);
void func_BC01_b3(void);
void func_BC03_b3(void);
void func_E0B9(void);
void func_E001(void);
void func_A0BF_b3(void);
void func_8801_b3(void);
void func_8886_b3(void);
void func_A0DC_b3(void);
void func_B401_b3(void);
void func_A1EB_b3(void);
void func_A009_b6(void);
void func_4801_b3(void);
void func_8BF9_b3(void);

int call_by_address_cb(uint16_t addr, int _caller_bank) {
    if (addr < 0x8000) { return nes_interp_dispatch(addr); }
    extern int g_mmc3_win_bank8k[4];
    /* MMC3: resolve the target through the live 8KB bank of its CPU
     * window ($8000/$A000/$C000/$E000).  g_mmc3_win_bank8k is mode-aware
     * (PRG mode 1 fixes $8000 to the second-to-last bank and swaps $C000
     * via R6 — e.g. SMB3), so this stays correct in both PRG modes.
     * Rebase addr into the recompiler's layout: switchable 16KB banks are
     * generated at $8000/$A000 offsets, the fixed pair at $C000/$E000. */
    uint16_t _cpu_addr = addr;
    int _w = (addr >> 13) & 3;
    int _b8 = g_mmc3_win_bank8k[_w];
    int _bank = _b8 >> 1;
    (void)_caller_bank; /* window resolution is authoritative; see miss default */
    addr = (uint16_t)(((_bank == 7) ? 0xC000 : 0x8000)
                      + ((_b8 & 1) ? 0x2000 : 0) + (addr & 0x1FFF));
_dispatch_retry:
    switch (addr) {
        case 0xDC80:
            func_DC80(); break;
        case 0xE603:
            func_E603(); break;
        case 0xE610:
            func_E610(); break;
        case 0xE605:
            func_E605(); break;
        case 0xE60D:
            func_E60D(); break;
        case 0xE608:
            func_E608(); break;
        case 0xE604:
            func_E604(); break;
        case 0xD269:
            func_D269(); break;
        case 0xDE39:
            func_DE39(); break;
        case 0x9E39:
            switch (_bank) {
                case 7: func_DE39(); break;
                case 0: func_9E39_b0(); break;
                case 1: func_9E39_b1(); break;
                case 2: func_9E39_b2(); break;
                case 4: func_9E39_b4(); break;
                case 5: func_9E39_b5(); break;
                case 6: func_9E39_b6(); break;
                case 3: func_9E39_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE39:
            switch (_bank) {
                case 0: func_BE39_b0(); break;
                case 1: func_BE39_b1(); break;
                case 2: func_BE39_b2(); break;
                case 5: func_BE39_b5(); break;
                case 6: func_BE39_b6(); break;
                case 3: func_BE39_b3(); break;
                case 4: func_BE39_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xDCCE:
            func_DCCE(); break;
        case 0x9CCE:
            switch (_bank) {
                case 7: func_DCCE(); break;
                case 0: func_9CCE_b0(); break;
                case 1: func_9CCE_b1(); break;
                case 2: func_9CCE_b2(); break;
                case 3: func_9CCE_b3(); break;
                case 4: func_9CCE_b4(); break;
                case 6: func_9CCE_b6(); break;
                case 5: func_9CCE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCCE:
            switch (_bank) {
                case 7: func_FCCE(); break;
                case 0: func_BCCE_b0(); break;
                case 1: func_BCCE_b1(); break;
                case 2: func_BCCE_b2(); break;
                case 4: func_BCCE_b4(); break;
                case 5: func_BCCE_b5(); break;
                case 6: func_BCCE_b6(); break;
                case 3: func_BCCE_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCB25:
            func_CB25(); break;
        case 0x8B25:
            switch (_bank) {
                case 7: func_CB25(); break;
                case 0: func_8B25_b0(); break;
                case 1: func_8B25_b1(); break;
                case 2: func_8B25_b2(); break;
                case 3: func_8B25_b3(); break;
                case 4: func_8B25_b4(); break;
                case 5: func_8B25_b5(); break;
                case 6: func_8B25_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB25:
            switch (_bank) {
                case 0: func_AB25_b0(); break;
                case 1: func_AB25_b1(); break;
                case 2: func_AB25_b2(); break;
                case 3: func_AB25_b3(); break;
                case 4: func_AB25_b4(); break;
                case 5: func_AB25_b5(); break;
                case 6: func_AB25_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD2F6:
            func_D2F6(); break;
        case 0xD305:
            func_D305(); break;
        case 0xD2F8:
            func_D2F8(); break;
        case 0xE1B9:
            func_E1B9(); break;
        case 0xE283:
            func_E283(); break;
        case 0xCFBF:
            func_CFBF(); break;
        case 0xD406:
            func_D406(); break;
        case 0xBE0B:
            switch (_bank) {
                case 0: func_BE0B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEAF:
            switch (_bank) {
                case 4: func_BEAF_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE6B:
            switch (_bank) {
                case 4: func_BE6B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE83:
            switch (_bank) {
                case 4: func_BE83_b4(); break;
                case 5: func_BE83_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEE6:
            switch (_bank) {
                case 4: func_BEE6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEBE:
            switch (_bank) {
                case 4: func_BEBE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEDD:
            switch (_bank) {
                case 4: func_BEDD_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEF6:
            switch (_bank) {
                case 4: func_BEF6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEFC:
            switch (_bank) {
                case 4: func_BEFC_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF20:
            switch (_bank) {
                case 4: func_BF20_b4(); break;
                case 3: func_BF20_b3(); break;
                case 0: func_BF20_b0(); break;
                case 1: func_BF20_b1(); break;
                case 2: func_BF20_b2(); break;
                case 5: func_BF20_b5(); break;
                case 6: func_BF20_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF75:
            switch (_bank) {
                case 4: func_BF75_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF24:
            switch (_bank) {
                case 4: func_BF24_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF3D:
            switch (_bank) {
                case 4: func_BF3D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF4A:
            switch (_bank) {
                case 4: func_BF4A_b4(); break;
                case 5: func_BF4A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF5E:
            switch (_bank) {
                case 4: func_BF5E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF92:
            switch (_bank) {
                case 4: func_BF92_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFA2:
            switch (_bank) {
                case 4: func_BFA2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFC7:
            switch (_bank) {
                case 4: func_BFC7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFD2:
            switch (_bank) {
                case 4: func_BFD2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFE0:
            switch (_bank) {
                case 4: func_BFE0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFFE:
            switch (_bank) {
                case 4: func_BFFE_b4(); break;
                case 7: func_BFFE_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC008:
            func_C008(); break;
        case 0xC00A:
            func_C00A(); break;
        case 0xD02A:
            func_D02A(); break;
        case 0xC020:
            func_C020(); break;
        case 0xC1B3:
            func_C1B3(); break;
        case 0xD04C:
            func_D04C(); break;
        case 0xD100:
            func_D100(); break;
        case 0xD0AE:
            func_D0AE(); break;
        case 0xD17D:
            func_D17D(); break;
        case 0xD17F:
            func_D17F(); break;
        case 0xD121:
            func_D121(); break;
        case 0xD0F1:
            func_D0F1(); break;
        case 0xD0F8:
            func_D0F8(); break;
        case 0xD0FD:
            func_D0FD(); break;
        case 0xD03B:
            func_D03B(); break;
        case 0xD199:
            func_D199(); break;
        case 0xD19A:
            func_D19A(); break;
        case 0xD085:
            func_D085(); break;
        case 0xD086:
            func_D086(); break;
        case 0xD054:
            func_D054(); break;
        case 0xD0C5:
            func_D0C5(); break;
        case 0xD039:
            func_D039(); break;
        case 0xD07A:
            func_D07A(); break;
        case 0xD05B:
            func_D05B(); break;
        case 0xD09A:
            func_D09A(); break;
        case 0xD058:
            func_D058(); break;
        case 0xD0C8:
            func_D0C8(); break;
        case 0xD060:
            func_D060(); break;
        case 0xD051:
            func_D051(); break;
        case 0xD19D:
            func_D19D(); break;
        case 0xD0EC:
            func_D0EC(); break;
        case 0xD0EE:
            func_D0EE(); break;
        case 0xD0EF:
            func_D0EF(); break;
        case 0xD161:
            func_D161(); break;
        case 0xD08A:
            func_D08A(); break;
        case 0xD093:
            func_D093(); break;
        case 0xD0B0:
            func_D0B0(); break;
        case 0xD090:
            func_D090(); break;
        case 0xD04A:
            func_D04A(); break;
        case 0xC1DD:
            func_C1DD(); break;
        case 0xC1DF:
            func_C1DF(); break;
        case 0xC293:
            func_C293(); break;
        case 0xC313:
            func_C313(); break;
        case 0xC3ED:
            func_C3ED(); break;
        case 0xD342:
            func_D342(); break;
        case 0xD1D8:
            func_D1D8(); break;
        case 0xD3BD:
            func_D3BD(); break;
        case 0xD333:
            func_D333(); break;
        case 0xD3A9:
            func_D3A9(); break;
        case 0xD221:
            func_D221(); break;
        case 0xD2D0:
            func_D2D0(); break;
        case 0xD1F9:
            func_D1F9(); break;
        case 0xD1FA:
            func_D1FA(); break;
        case 0xD36C:
            func_D36C(); break;
        case 0xD3AB:
            func_D3AB(); break;
        case 0xD2C7:
            func_D2C7(); break;
        case 0xD2D7:
            func_D2D7(); break;
        case 0xD3DA:
            func_D3DA(); break;
        case 0xD254:
            func_D254(); break;
        case 0xD27C:
            func_D27C(); break;
        case 0xD2D5:
            func_D2D5(); break;
        case 0xD3D6:
            func_D3D6(); break;
        case 0xD3CD:
            func_D3CD(); break;
        case 0xD343:
            func_D343(); break;
        case 0xD3D4:
            func_D3D4(); break;
        case 0xD3C8:
            func_D3C8(); break;
        case 0xD2AA:
            func_D2AA(); break;
        case 0xD3B3:
            func_D3B3(); break;
        case 0xD2D9:
            func_D2D9(); break;
        case 0xD2DD:
            func_D2DD(); break;
        case 0xD3DE:
            func_D3DE(); break;
        case 0xD3B1:
            func_D3B1(); break;
        case 0xD28E:
            func_D28E(); break;
        case 0xD288:
            func_D288(); break;
        case 0xD281:
            func_D281(); break;
        case 0xD28B:
            func_D28B(); break;
        case 0xD28D:
            func_D28D(); break;
        case 0xD383:
            func_D383(); break;
        case 0xD308:
            func_D308(); break;
        case 0xD393:
            func_D393(); break;
        case 0xD30A:
            func_D30A(); break;
        case 0xD2B9:
            func_D2B9(); break;
        case 0xD3A5:
            func_D3A5(); break;
        case 0xD3C9:
            func_D3C9(); break;
        case 0xD3AD:
            func_D3AD(); break;
        case 0xC400:
            func_C400(); break;
        case 0xD3E4:
            func_D3E4(); break;
        case 0xD3E3:
            func_D3E3(); break;
        case 0xC496:
            func_C496(); break;
        case 0xD401:
            func_D401(); break;
        case 0xD3FF:
            func_D3FF(); break;
        case 0xD420:
            func_D420(); break;
        case 0xD479:
            func_D479(); break;
        case 0xD3F9:
            func_D3F9(); break;
        case 0xC47B:
            func_C47B(); break;
        case 0xC56C:
            func_C56C(); break;
        case 0xC5F4:
            func_C5F4(); break;
        case 0xD5BA:
            func_D5BA(); break;
        case 0xD589:
            func_D589(); break;
        case 0xD58A:
            func_D58A(); break;
        case 0xD5CA:
            func_D5CA(); break;
        case 0xD5C0:
            func_D5C0(); break;
        case 0xD588:
            func_D588(); break;
        case 0xD578:
            func_D578(); break;
        case 0xD57C:
            func_D57C(); break;
        case 0xD5C5:
            func_D5C5(); break;
        case 0xC647:
            func_C647(); break;
        case 0xC693:
            func_C693(); break;
        case 0xC697:
            func_C697(); break;
        case 0xD60A:
            func_D60A(); break;
        case 0xD64A:
            func_D64A(); break;
        case 0xD653:
            func_D653(); break;
        case 0xD656:
            func_D656(); break;
        case 0xD65A:
            func_D65A(); break;
        case 0xD65B:
            func_D65B(); break;
        case 0xD65E:
            func_D65E(); break;
        case 0xD619:
            func_D619(); break;
        case 0xC73B:
            func_C73B(); break;
        case 0xD6EE:
            func_D6EE(); break;
        case 0xD6FB:
            func_D6FB(); break;
        case 0xD6DD:
            func_D6DD(); break;
        case 0xD6C1:
            func_D6C1(); break;
        case 0xD6D9:
            func_D6D9(); break;
        case 0xD709:
            func_D709(); break;
        case 0xD677:
            func_D677(); break;
        case 0xD6B1:
            func_D6B1(); break;
        case 0xD70B:
            func_D70B(); break;
        case 0xD6FD:
            func_D6FD(); break;
        case 0xD6CB:
            func_D6CB(); break;
        case 0xD67D:
            func_D67D(); break;
        case 0xD6E1:
            func_D6E1(); break;
        case 0xD684:
            func_D684(); break;
        case 0xD6FF:
            func_D6FF(); break;
        case 0xD69F:
            func_D69F(); break;
        case 0xD6A3:
            func_D6A3(); break;
        case 0xC744:
            func_C744(); break;
        case 0xD711:
            func_D711(); break;
        case 0xC746:
            func_C746(); break;
        case 0xC756:
            func_C756(); break;
        case 0xC75C:
            func_C75C(); break;
        case 0xC7D4:
            func_C7D4(); break;
        case 0xD7B0:
            func_D7B0(); break;
        case 0xD75C:
            func_D75C(); break;
        case 0xD78A:
            func_D78A(); break;
        case 0xC836:
            func_C836(); break;
        case 0xD821:
            func_D821(); break;
        case 0xD7B1:
            func_D7B1(); break;
        case 0xD811:
            func_D811(); break;
        case 0xD80F:
            func_D80F(); break;
        case 0xD814:
            func_D814(); break;
        case 0xC915:
            func_C915(); break;
        case 0xD8B9:
            func_D8B9(); break;
        case 0xD8BA:
            func_D8BA(); break;
        case 0xD8E0:
            func_D8E0(); break;
        case 0xD901:
            func_D901(); break;
        case 0xD8D9:
            func_D8D9(); break;
        case 0xD8E5:
            func_D8E5(); break;
        case 0xD8ED:
            func_D8ED(); break;
        case 0xD8B7:
            func_D8B7(); break;
        case 0xD8D2:
            func_D8D2(); break;
        case 0xD85E:
            func_D85E(); break;
        case 0xD8D7:
            func_D8D7(); break;
        case 0xD8AA:
            func_D8AA(); break;
        case 0xD852:
            func_D852(); break;
        case 0xD8D0:
            func_D8D0(); break;
        case 0xD8FC:
            func_D8FC(); break;
        case 0xD8A1:
            func_D8A1(); break;
        case 0xD910:
            func_D910(); break;
        case 0xD89D:
            func_D89D(); break;
        case 0xD880:
            func_D880(); break;
        case 0xD878:
            func_D878(); break;
        case 0xD890:
            func_D890(); break;
        case 0xD90F:
            func_D90F(); break;
        case 0xD870:
            func_D870(); break;
        case 0xD87C:
            func_D87C(); break;
        case 0xD898:
            func_D898(); break;
        case 0xD8A8:
            func_D8A8(); break;
        case 0xD868:
            func_D868(); break;
        case 0xD858:
            func_D858(); break;
        case 0xD907:
            func_D907(); break;
        case 0xD892:
            func_D892(); break;
        case 0xC920:
            func_C920(); break;
        case 0xCA16:
            func_CA16(); break;
        case 0xDA20:
            func_DA20(); break;
        case 0xD9D0:
            func_D9D0(); break;
        case 0xDA10:
            func_DA10(); break;
        case 0xD951:
            func_D951(); break;
        case 0xD948:
            func_D948(); break;
        case 0xD9E8:
            func_D9E8(); break;
        case 0xDA00:
            func_DA00(); break;
        case 0xDA09:
            func_DA09(); break;
        case 0xD9C7:
            func_D9C7(); break;
        case 0xDA0B:
            func_DA0B(); break;
        case 0xD9D8:
            func_D9D8(); break;
        case 0xD9DE:
            func_D9DE(); break;
        case 0xD9A8:
            func_D9A8(); break;
        case 0xD98E:
            func_D98E(); break;
        case 0xD9AA:
            func_D9AA(); break;
        case 0xD9F9:
            func_D9F9(); break;
        case 0xD9EC:
            func_D9EC(); break;
        case 0xD95C:
            func_D95C(); break;
        case 0xD9C9:
            func_D9C9(); break;
        case 0xD9C5:
            func_D9C5(); break;
        case 0xD933:
            func_D933(); break;
        case 0xCAF5:
            func_CAF5(); break;
        case 0xD394:
            func_D394(); break;
        case 0xD3A0:
            func_D3A0(); break;
        case 0x9394:
            switch (_bank) {
                case 7: func_D394(); break;
                case 0: func_9394_b0(); break;
                case 1: func_9394_b1(); break;
                case 2: func_9394_b2(); break;
                case 3: func_9394_b3(); break;
                case 4: func_9394_b4(); break;
                case 6: func_9394_b6(); break;
                case 5: func_9394_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB394:
            switch (_bank) {
                case 0: func_B394_b0(); break;
                case 1: func_B394_b1(); break;
                case 2: func_B394_b2(); break;
                case 3: func_B394_b3(); break;
                case 4: func_B394_b4(); break;
                case 5: func_B394_b5(); break;
                case 6: func_B394_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD3D0:
            func_D3D0(); break;
        case 0x93D0:
            switch (_bank) {
                case 7: func_D3D0(); break;
                case 0: func_93D0_b0(); break;
                case 1: func_93D0_b1(); break;
                case 2: func_93D0_b2(); break;
                case 4: func_93D0_b4(); break;
                case 5: func_93D0_b5(); break;
                case 6: func_93D0_b6(); break;
                case 3: func_93D0_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3D0:
            switch (_bank) {
                case 0: func_B3D0_b0(); break;
                case 1: func_B3D0_b1(); break;
                case 2: func_B3D0_b2(); break;
                case 3: func_B3D0_b3(); break;
                case 5: func_B3D0_b5(); break;
                case 6: func_B3D0_b6(); break;
                case 4: func_B3D0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD341:
            func_D341(); break;
        case 0x9341:
            switch (_bank) {
                case 7: func_D341(); break;
                case 0: func_9341_b0(); break;
                case 1: func_9341_b1(); break;
                case 2: func_9341_b2(); break;
                case 3: func_9341_b3(); break;
                case 4: func_9341_b4(); break;
                case 6: func_9341_b6(); break;
                case 5: func_9341_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB341:
            switch (_bank) {
                case 0: func_B341_b0(); break;
                case 1: func_B341_b1(); break;
                case 2: func_B341_b2(); break;
                case 3: func_B341_b3(); break;
                case 4: func_B341_b4(); break;
                case 6: func_B341_b6(); break;
                case 5: func_B341_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB38D:
            switch (_bank) {
                case 4: func_B38D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD377:
            func_D377(); break;
        case 0x9377:
            switch (_bank) {
                case 7: func_D377(); break;
                case 0: func_9377_b0(); break;
                case 1: func_9377_b1(); break;
                case 2: func_9377_b2(); break;
                case 3: func_9377_b3(); break;
                case 4: func_9377_b4(); break;
                case 6: func_9377_b6(); break;
                case 5: func_9377_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB377:
            switch (_bank) {
                case 0: func_B377_b0(); break;
                case 1: func_B377_b1(); break;
                case 2: func_B377_b2(); break;
                case 3: func_B377_b3(); break;
                case 4: func_B377_b4(); break;
                case 5: func_B377_b5(); break;
                case 6: func_B377_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD36F:
            func_D36F(); break;
        case 0x936F:
            switch (_bank) {
                case 7: func_D36F(); break;
                case 0: func_936F_b0(); break;
                case 1: func_936F_b1(); break;
                case 2: func_936F_b2(); break;
                case 4: func_936F_b4(); break;
                case 6: func_936F_b6(); break;
                case 3: func_936F_b3(); break;
                case 5: func_936F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB36F:
            switch (_bank) {
                case 0: func_B36F_b0(); break;
                case 1: func_B36F_b1(); break;
                case 2: func_B36F_b2(); break;
                case 3: func_B36F_b3(); break;
                case 5: func_B36F_b5(); break;
                case 6: func_B36F_b6(); break;
                case 4: func_B36F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD5E5:
            func_D5E5(); break;
        case 0x95E5:
            switch (_bank) {
                case 7: func_D5E5(); break;
                case 0: func_95E5_b0(); break;
                case 1: func_95E5_b1(); break;
                case 2: func_95E5_b2(); break;
                case 4: func_95E5_b4(); break;
                case 6: func_95E5_b6(); break;
                case 3: func_95E5_b3(); break;
                case 5: func_95E5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5E5:
            switch (_bank) {
                case 7: func_F5E5(); break;
                case 0: func_B5E5_b0(); break;
                case 1: func_B5E5_b1(); break;
                case 2: func_B5E5_b2(); break;
                case 3: func_B5E5_b3(); break;
                case 4: func_B5E5_b4(); break;
                case 5: func_B5E5_b5(); break;
                case 6: func_B5E5_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95E7:
            switch (_bank) {
                case 4: func_95E7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD77C:
            func_D77C(); break;
        case 0x977C:
            switch (_bank) {
                case 7: func_D77C(); break;
                case 0: func_977C_b0(); break;
                case 1: func_977C_b1(); break;
                case 2: func_977C_b2(); break;
                case 3: func_977C_b3(); break;
                case 4: func_977C_b4(); break;
                case 5: func_977C_b5(); break;
                case 6: func_977C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB77C:
            switch (_bank) {
                case 0: func_B77C_b0(); break;
                case 1: func_B77C_b1(); break;
                case 2: func_B77C_b2(); break;
                case 3: func_B77C_b3(); break;
                case 5: func_B77C_b5(); break;
                case 6: func_B77C_b6(); break;
                case 4: func_B77C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB781:
            switch (_bank) {
                case 5: func_B781_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCF72:
            func_CF72(); break;
        case 0x8F72:
            switch (_bank) {
                case 7: func_CF72(); break;
                case 0: func_8F72_b0(); break;
                case 1: func_8F72_b1(); break;
                case 2: func_8F72_b2(); break;
                case 3: func_8F72_b3(); break;
                case 4: func_8F72_b4(); break;
                case 5: func_8F72_b5(); break;
                case 6: func_8F72_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF72:
            switch (_bank) {
                case 0: func_AF72_b0(); break;
                case 1: func_AF72_b1(); break;
                case 2: func_AF72_b2(); break;
                case 3: func_AF72_b3(); break;
                case 4: func_AF72_b4(); break;
                case 5: func_AF72_b5(); break;
                case 6: func_AF72_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCFF3:
            func_CFF3(); break;
        case 0x8FF3:
            switch (_bank) {
                case 7: func_CFF3(); break;
                case 0: func_8FF3_b0(); break;
                case 1: func_8FF3_b1(); break;
                case 2: func_8FF3_b2(); break;
                case 3: func_8FF3_b3(); break;
                case 4: func_8FF3_b4(); break;
                case 5: func_8FF3_b5(); break;
                case 6: func_8FF3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFF3:
            switch (_bank) {
                case 0: func_AFF3_b0(); break;
                case 1: func_AFF3_b1(); break;
                case 2: func_AFF3_b2(); break;
                case 3: func_AFF3_b3(); break;
                case 4: func_AFF3_b4(); break;
                case 6: func_AFF3_b6(); break;
                case 5: func_AFF3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCFE4:
            func_CFE4(); break;
        case 0x8FE4:
            switch (_bank) {
                case 7: func_CFE4(); break;
                case 0: func_8FE4_b0(); break;
                case 1: func_8FE4_b1(); break;
                case 2: func_8FE4_b2(); break;
                case 3: func_8FE4_b3(); break;
                case 4: func_8FE4_b4(); break;
                case 6: func_8FE4_b6(); break;
                case 5: func_8FE4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFE4:
            switch (_bank) {
                case 0: func_AFE4_b0(); break;
                case 1: func_AFE4_b1(); break;
                case 2: func_AFE4_b2(); break;
                case 3: func_AFE4_b3(); break;
                case 4: func_AFE4_b4(); break;
                case 5: func_AFE4_b5(); break;
                case 6: func_AFE4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCD30:
            func_CD30(); break;
        case 0x8D30:
            switch (_bank) {
                case 7: func_CD30(); break;
                case 0: func_8D30_b0(); break;
                case 1: func_8D30_b1(); break;
                case 2: func_8D30_b2(); break;
                case 3: func_8D30_b3(); break;
                case 4: func_8D30_b4(); break;
                case 6: func_8D30_b6(); break;
                case 5: func_8D30_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD30:
            switch (_bank) {
                case 0: func_AD30_b0(); break;
                case 1: func_AD30_b1(); break;
                case 2: func_AD30_b2(); break;
                case 4: func_AD30_b4(); break;
                case 5: func_AD30_b5(); break;
                case 6: func_AD30_b6(); break;
                case 3: func_AD30_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCC71:
            func_CC71(); break;
        case 0x8C71:
            switch (_bank) {
                case 7: func_CC71(); break;
                case 0: func_8C71_b0(); break;
                case 1: func_8C71_b1(); break;
                case 2: func_8C71_b2(); break;
                case 3: func_8C71_b3(); break;
                case 4: func_8C71_b4(); break;
                case 5: func_8C71_b5(); break;
                case 6: func_8C71_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC71:
            switch (_bank) {
                case 0: func_AC71_b0(); break;
                case 1: func_AC71_b1(); break;
                case 2: func_AC71_b2(); break;
                case 3: func_AC71_b3(); break;
                case 4: func_AC71_b4(); break;
                case 5: func_AC71_b5(); break;
                case 6: func_AC71_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCCDA:
            func_CCDA(); break;
        case 0x8CDA:
            switch (_bank) {
                case 7: func_CCDA(); break;
                case 0: func_8CDA_b0(); break;
                case 1: func_8CDA_b1(); break;
                case 2: func_8CDA_b2(); break;
                case 3: func_8CDA_b3(); break;
                case 4: func_8CDA_b4(); break;
                case 5: func_8CDA_b5(); break;
                case 6: func_8CDA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACDA:
            switch (_bank) {
                case 0: func_ACDA_b0(); break;
                case 1: func_ACDA_b1(); break;
                case 2: func_ACDA_b2(); break;
                case 4: func_ACDA_b4(); break;
                case 6: func_ACDA_b6(); break;
                case 3: func_ACDA_b3(); break;
                case 5: func_ACDA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCD7D:
            func_CD7D(); break;
        case 0xDDB0:
            func_DDB0(); break;
        case 0xDC11:
            func_DC11(); break;
        case 0xDCD0:
            func_DCD0(); break;
        case 0xDCD1:
            func_DCD1(); break;
        case 0xDB59:
            func_DB59(); break;
        case 0xDB5A:
            func_DB5A(); break;
        case 0xDBA9:
            func_DBA9(); break;
        case 0xDBB0:
            func_DBB0(); break;
        case 0xDBA8:
            func_DBA8(); break;
        case 0xDBAC:
            func_DBAC(); break;
        case 0xDD7E:
            func_DD7E(); break;
        case 0xDC20:
            func_DC20(); break;
        case 0xDCEF:
            func_DCEF(); break;
        case 0xDCEA:
            func_DCEA(); break;
        case 0xDCF1:
            func_DCF1(); break;
        case 0xDCDA:
            func_DCDA(); break;
        case 0xDCEC:
            func_DCEC(); break;
        case 0xDCF4:
            func_DCF4(); break;
        case 0xDAC0:
            func_DAC0(); break;
        case 0xDAC1:
            func_DAC1(); break;
        case 0xDCBE:
            func_DCBE(); break;
        case 0xDAF6:
            func_DAF6(); break;
        case 0xDCE2:
            func_DCE2(); break;
        case 0xDCD6:
            func_DCD6(); break;
        case 0xDCF7:
            func_DCF7(); break;
        case 0xDADC:
            func_DADC(); break;
        case 0xDB4E:
            func_DB4E(); break;
        case 0xDBD7:
            func_DBD7(); break;
        case 0xDB7F:
            func_DB7F(); break;
        case 0xDBD9:
            func_DBD9(); break;
        case 0xDCA4:
            func_DCA4(); break;
        case 0xDD03:
            func_DD03(); break;
        case 0xDBBF:
            func_DBBF(); break;
        case 0xDB00:
            func_DB00(); break;
        case 0xDAAE:
            func_DAAE(); break;
        case 0xDACE:
            func_DACE(); break;
        case 0xDA80:
            func_DA80(); break;
        case 0xDAD0:
            func_DAD0(); break;
        case 0xDCDE:
            func_DCDE(); break;
        case 0xDCB0:
            func_DCB0(); break;
        case 0xDAE0:
            func_DAE0(); break;
        case 0xDB6F:
            func_DB6F(); break;
        case 0xDAD2:
            func_DAD2(); break;
        case 0xDBE7:
            func_DBE7(); break;
        case 0xDB60:
            func_DB60(); break;
        case 0xDBB9:
            func_DBB9(); break;
        case 0xDDA9:
            func_DDA9(); break;
        case 0xDA89:
            func_DA89(); break;
        case 0xDD08:
            func_DD08(); break;
        case 0xDD01:
            func_DD01(); break;
        case 0xDD10:
            func_DD10(); break;
        case 0xDAA6:
            func_DAA6(); break;
        case 0xDD26:
            func_DD26(); break;
        case 0xDD1A:
            func_DD1A(); break;
        case 0xDCBC:
            func_DCBC(); break;
        case 0xDAB4:
            func_DAB4(); break;
        case 0xDBB7:
            func_DBB7(); break;
        case 0xDD8F:
            func_DD8F(); break;
        case 0xDB43:
            func_DB43(); break;
        case 0xDB1D:
            func_DB1D(); break;
        case 0x8D7D:
            switch (_bank) {
                case 7: func_CD7D(); break;
                case 0: func_8D7D_b0(); break;
                case 1: func_8D7D_b1(); break;
                case 2: func_8D7D_b2(); break;
                case 3: func_8D7D_b3(); break;
                case 4: func_8D7D_b4(); break;
                case 6: func_8D7D_b6(); break;
                case 5: func_8D7D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD7D:
            switch (_bank) {
                case 0: func_AD7D_b0(); break;
                case 1: func_AD7D_b1(); break;
                case 2: func_AD7D_b2(); break;
                case 4: func_AD7D_b4(); break;
                case 6: func_AD7D_b6(); break;
                case 3: func_AD7D_b3(); break;
                case 5: func_AD7D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCDE7:
            func_CDE7(); break;
        case 0xCD5F:
            func_CD5F(); break;
        case 0x8D5F:
            switch (_bank) {
                case 7: func_CD5F(); break;
                case 0: func_8D5F_b0(); break;
                case 1: func_8D5F_b1(); break;
                case 2: func_8D5F_b2(); break;
                case 4: func_8D5F_b4(); break;
                case 6: func_8D5F_b6(); break;
                case 3: func_8D5F_b3(); break;
                case 5: func_8D5F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD5F:
            switch (_bank) {
                case 0: func_AD5F_b0(); break;
                case 1: func_AD5F_b1(); break;
                case 2: func_AD5F_b2(); break;
                case 4: func_AD5F_b4(); break;
                case 5: func_AD5F_b5(); break;
                case 6: func_AD5F_b6(); break;
                case 3: func_AD5F_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE11E:
            func_E11E(); break;
        case 0xF524:
            func_F524(); break;
        case 0xBCE1:
            switch (_bank) {
                case 4: func_BCE1_b4(); break;
                case 5: func_BCE1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD1D:
            switch (_bank) {
                case 4: func_BD1D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD26:
            switch (_bank) {
                case 4: func_BD26_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD7F:
            switch (_bank) {
                case 4: func_BD7F_b4(); break;
                case 2: func_BD7F_b2(); break;
                case 5: func_BD7F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDD0:
            switch (_bank) {
                case 7: func_FDD0(); break;
                case 4: func_BDD0_b4(); break;
                case 5: func_BDD0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDD6:
            switch (_bank) {
                case 4: func_BDD6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE28:
            switch (_bank) {
                case 4: func_BE28_b4(); break;
                case 5: func_BE28_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDC9:
            switch (_bank) {
                case 4: func_BDC9_b4(); break;
                case 5: func_BDC9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDDC:
            switch (_bank) {
                case 4: func_BDDC_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE42:
            switch (_bank) {
                case 4: func_BE42_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDE7:
            switch (_bank) {
                case 4: func_BDE7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDF4:
            switch (_bank) {
                case 4: func_BDF4_b4(); break;
                case 5: func_BDF4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE01:
            switch (_bank) {
                case 4: func_BE01_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE07:
            switch (_bank) {
                case 4: func_BE07_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE0E:
            switch (_bank) {
                case 4: func_BE0E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE9A:
            switch (_bank) {
                case 4: func_BE9A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC9D:
            switch (_bank) {
                case 5: func_BC9D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AD3:
            switch (_bank) {
                case 5: func_9AD3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AFF:
            switch (_bank) {
                case 5: func_9AFF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAD3:
            switch (_bank) {
                case 5: func_BAD3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCE3:
            switch (_bank) {
                case 5: func_BCE3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B59:
            switch (_bank) {
                case 5: func_9B59_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B65:
            switch (_bank) {
                case 7: func_DB65(); break;
                case 5: func_9B65_b5(); break;
                case 0: func_9B65_b0(); break;
                case 1: func_9B65_b1(); break;
                case 2: func_9B65_b2(); break;
                case 3: func_9B65_b3(); break;
                case 4: func_9B65_b4(); break;
                case 6: func_9B65_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB59:
            switch (_bank) {
                case 5: func_BB59_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98CE:
            switch (_bank) {
                case 5: func_98CE_b5(); break;
                case 4: func_98CE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98F0:
            switch (_bank) {
                case 5: func_98F0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98D0:
            switch (_bank) {
                case 7: func_D8D0(); break;
                case 5: func_98D0_b5(); break;
                case 4: func_98D0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9901:
            switch (_bank) {
                case 5: func_9901_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9905:
            switch (_bank) {
                case 5: func_9905_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9906:
            switch (_bank) {
                case 5: func_9906_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8CE:
            switch (_bank) {
                case 5: func_B8CE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8D0:
            switch (_bank) {
                case 5: func_B8D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9B7:
            switch (_bank) {
                case 5: func_B9B7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9B9:
            switch (_bank) {
                case 5: func_B9B9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9224:
            switch (_bank) {
                case 5: func_9224_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9229:
            switch (_bank) {
                case 5: func_9229_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB224:
            switch (_bank) {
                case 5: func_B224_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDDE:
            switch (_bank) {
                case 5: func_BDDE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC4D:
            switch (_bank) {
                case 5: func_AC4D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF91:
            switch (_bank) {
                case 5: func_BF91_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF12:
            switch (_bank) {
                case 5: func_BF12_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF51:
            switch (_bank) {
                case 5: func_BF51_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC015:
            func_C015(); break;
        case 0xD031:
            func_D031(); break;
        case 0xD033:
            func_D033(); break;
        case 0xAB21:
            switch (_bank) {
                case 3: func_AB21_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9790:
            switch (_bank) {
                case 4: func_9790_b4(); break;
                case 5: func_9790_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9522:
            switch (_bank) {
                case 4: func_9522_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8050:
            switch (_bank) {
                case 4: func_8050_b4(); break;
                case 6: func_8050_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE7D0:
            func_E7D0(); break;
        case 0xAB7B:
            switch (_bank) {
                case 5: func_AB7B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB88:
            switch (_bank) {
                case 5: func_AB88_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB8A:
            switch (_bank) {
                case 5: func_AB8A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACE9:
            switch (_bank) {
                case 6: func_ACE9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE27:
            switch (_bank) {
                case 6: func_AE27_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE32:
            switch (_bank) {
                case 6: func_AE32_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE37:
            switch (_bank) {
                case 6: func_AE37_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE92:
            switch (_bank) {
                case 6: func_AE92_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAED2:
            switch (_bank) {
                case 6: func_AED2_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB42B:
            switch (_bank) {
                case 6: func_B42B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB43B:
            switch (_bank) {
                case 6: func_B43B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB453:
            switch (_bank) {
                case 6: func_B453_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB45E:
            switch (_bank) {
                case 6: func_B45E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4C3:
            switch (_bank) {
                case 6: func_B4C3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB51F:
            switch (_bank) {
                case 6: func_B51F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8009:
            switch (_bank) {
                case 0: func_8009_b0(); break;
                case 1: func_8009_b1(); break;
                case 2: func_8009_b2(); break;
                case 3: func_8009_b3(); break;
                case 4: func_8009_b4(); break;
                case 5: func_8009_b5(); break;
                case 6: func_8009_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD46D:
            func_D46D(); break;
        case 0x946D:
            switch (_bank) {
                case 7: func_D46D(); break;
                case 0: func_946D_b0(); break;
                case 1: func_946D_b1(); break;
                case 2: func_946D_b2(); break;
                case 3: func_946D_b3(); break;
                case 4: func_946D_b4(); break;
                case 5: func_946D_b5(); break;
                case 6: func_946D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB46D:
            switch (_bank) {
                case 0: func_B46D_b0(); break;
                case 1: func_B46D_b1(); break;
                case 2: func_B46D_b2(); break;
                case 3: func_B46D_b3(); break;
                case 5: func_B46D_b5(); break;
                case 6: func_B46D_b6(); break;
                case 4: func_B46D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9471:
            switch (_bank) {
                case 5: func_9471_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x800C:
            switch (_bank) {
                case 7: func_C00C(); break;
                case 0: func_800C_b0(); break;
                case 1: func_800C_b1(); break;
                case 2: func_800C_b2(); break;
                case 3: func_800C_b3(); break;
                case 4: func_800C_b4(); break;
                case 5: func_800C_b5(); break;
                case 6: func_800C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xDA23:
            func_DA23(); break;
        case 0x9A23:
            switch (_bank) {
                case 7: func_DA23(); break;
                case 0: func_9A23_b0(); break;
                case 1: func_9A23_b1(); break;
                case 2: func_9A23_b2(); break;
                case 3: func_9A23_b3(); break;
                case 4: func_9A23_b4(); break;
                case 5: func_9A23_b5(); break;
                case 6: func_9A23_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA23:
            switch (_bank) {
                case 0: func_BA23_b0(); break;
                case 1: func_BA23_b1(); break;
                case 2: func_BA23_b2(); break;
                case 3: func_BA23_b3(); break;
                case 4: func_BA23_b4(); break;
                case 5: func_BA23_b5(); break;
                case 6: func_BA23_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD444:
            func_D444(); break;
        case 0x9444:
            switch (_bank) {
                case 7: func_D444(); break;
                case 0: func_9444_b0(); break;
                case 1: func_9444_b1(); break;
                case 2: func_9444_b2(); break;
                case 4: func_9444_b4(); break;
                case 6: func_9444_b6(); break;
                case 3: func_9444_b3(); break;
                case 5: func_9444_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB444:
            switch (_bank) {
                case 0: func_B444_b0(); break;
                case 1: func_B444_b1(); break;
                case 2: func_B444_b2(); break;
                case 3: func_B444_b3(); break;
                case 6: func_B444_b6(); break;
                case 5: func_B444_b5(); break;
                case 4: func_B444_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9985:
            switch (_bank) {
                case 6: func_9985_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9986:
            switch (_bank) {
                case 6: func_9986_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCD93:
            func_CD93(); break;
        case 0xDDCD:
            func_DDCD(); break;
        case 0xDDD0:
            func_DDD0(); break;
        case 0xDDCB:
            func_DDCB(); break;
        case 0x8D93:
            switch (_bank) {
                case 7: func_CD93(); break;
                case 0: func_8D93_b0(); break;
                case 1: func_8D93_b1(); break;
                case 2: func_8D93_b2(); break;
                case 3: func_8D93_b3(); break;
                case 4: func_8D93_b4(); break;
                case 6: func_8D93_b6(); break;
                case 5: func_8D93_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD93:
            switch (_bank) {
                case 0: func_AD93_b0(); break;
                case 1: func_AD93_b1(); break;
                case 2: func_AD93_b2(); break;
                case 4: func_AD93_b4(); break;
                case 6: func_AD93_b6(); break;
                case 3: func_AD93_b3(); break;
                case 5: func_AD93_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF2A:
            switch (_bank) {
                case 4: func_BF2A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC039:
            func_C039(); break;
        case 0xC053:
            func_C053(); break;
        case 0xD130:
            func_D130(); break;
        case 0xD195:
            func_D195(); break;
        case 0xD201:
            func_D201(); break;
        case 0xD278:
            func_D278(); break;
        case 0xD280:
            func_D280(); break;
        case 0xC452:
            func_C452(); break;
        case 0x8012:
            switch (_bank) {
                case 2: func_8012_b2(); break;
                case 0: func_8012_b0(); break;
                case 1: func_8012_b1(); break;
                case 3: func_8012_b3(); break;
                case 4: func_8012_b4(); break;
                case 5: func_8012_b5(); break;
                case 6: func_8012_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8015:
            switch (_bank) {
                case 7: func_C015(); break;
                case 2: func_8015_b2(); break;
                case 6: func_8015_b6(); break;
                case 3: func_8015_b3(); break;
                case 0: func_8015_b0(); break;
                case 1: func_8015_b1(); break;
                case 4: func_8015_b4(); break;
                case 5: func_8015_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD5F5:
            func_D5F5(); break;
        case 0x8000:
            switch (_bank) {
                case 7: func_C000(); break;
                case 2: func_8000_b2(); break;
                case 0: func_8000_b0(); break;
                case 1: func_8000_b1(); break;
                case 3: func_8000_b3(); break;
                case 4: func_8000_b4(); break;
                case 5: func_8000_b5(); break;
                case 6: func_8000_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8003:
            switch (_bank) {
                case 2: func_8003_b2(); break;
                case 0: func_8003_b0(); break;
                case 1: func_8003_b1(); break;
                case 3: func_8003_b3(); break;
                case 4: func_8003_b4(); break;
                case 5: func_8003_b5(); break;
                case 6: func_8003_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD796:
            func_D796(); break;
        case 0xD576:
            func_D576(); break;
        case 0xD59B:
            func_D59B(); break;
        case 0xC5E6:
            func_C5E6(); break;
        case 0xD60D:
            func_D60D(); break;
        case 0xD662:
            func_D662(); break;
        case 0x800F:
            switch (_bank) {
                case 2: func_800F_b2(); break;
                case 0: func_800F_b0(); break;
                case 1: func_800F_b1(); break;
                case 3: func_800F_b3(); break;
                case 4: func_800F_b4(); break;
                case 5: func_800F_b5(); break;
                case 6: func_800F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD6B8:
            func_D6B8(); break;
        case 0xD7E8:
            func_D7E8(); break;
        case 0xD6F4:
            func_D6F4(); break;
        case 0xD756:
            func_D756(); break;
        case 0xC74C:
            func_C74C(); break;
        case 0xC74E:
            func_C74E(); break;
        case 0x8006:
            switch (_bank) {
                case 2: func_8006_b2(); break;
                case 0: func_8006_b0(); break;
                case 1: func_8006_b1(); break;
                case 3: func_8006_b3(); break;
                case 4: func_8006_b4(); break;
                case 6: func_8006_b6(); break;
                case 5: func_8006_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC736:
            func_C736(); break;
        case 0xC743:
            func_C743(); break;
        case 0xEDF6:
            func_EDF6(); break;
        case 0xC831:
            func_C831(); break;
        case 0xD920:
            func_D920(); break;
        case 0xC84B:
            func_C84B(); break;
        case 0xC852:
            func_C852(); break;
        case 0xD83D:
            func_D83D(); break;
        case 0xD832:
            func_D832(); break;
        case 0xD841:
            func_D841(); break;
        case 0xD835:
            func_D835(); break;
        case 0xD844:
            func_D844(); break;
        case 0xD842:
            func_D842(); break;
        case 0xCA11:
            func_CA11(); break;
        case 0xD963:
            func_D963(); break;
        case 0xCA2B:
            func_CA2B(); break;
        case 0xCA32:
            func_CA32(); break;
        case 0x9388:
            switch (_bank) {
                case 5: func_9388_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB90:
            switch (_bank) {
                case 6: func_BB90_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBCA:
            switch (_bank) {
                case 6: func_BBCA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCC0:
            switch (_bank) {
                case 6: func_BCC0_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9352:
            switch (_bank) {
                case 4: func_9352_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3DA:
            switch (_bank) {
                case 4: func_B3DA_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3F7:
            switch (_bank) {
                case 4: func_B3F7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB409:
            switch (_bank) {
                case 4: func_B409_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB412:
            switch (_bank) {
                case 4: func_B412_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB424:
            switch (_bank) {
                case 4: func_B424_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB436:
            switch (_bank) {
                case 4: func_B436_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB467:
            switch (_bank) {
                case 4: func_B467_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB488:
            switch (_bank) {
                case 4: func_B488_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB50C:
            switch (_bank) {
                case 4: func_B50C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB505:
            switch (_bank) {
                case 7: func_F505(); break;
                case 4: func_B505_b4(); break;
                case 5: func_B505_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB523:
            switch (_bank) {
                case 4: func_B523_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4F0:
            switch (_bank) {
                case 4: func_B4F0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB537:
            switch (_bank) {
                case 4: func_B537_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4DA:
            switch (_bank) {
                case 4: func_B4DA_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB568:
            switch (_bank) {
                case 4: func_B568_b4(); break;
                case 6: func_B568_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB595:
            switch (_bank) {
                case 7: func_F595(); break;
                case 4: func_B595_b4(); break;
                case 5: func_B595_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB59B:
            switch (_bank) {
                case 4: func_B59B_b4(); break;
                case 0: func_B59B_b0(); break;
                case 1: func_B59B_b1(); break;
                case 2: func_B59B_b2(); break;
                case 3: func_B59B_b3(); break;
                case 5: func_B59B_b5(); break;
                case 6: func_B59B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB59D:
            switch (_bank) {
                case 7: func_F59D(); break;
                case 4: func_B59D_b4(); break;
                case 5: func_B59D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5D5:
            switch (_bank) {
                case 4: func_B5D5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB61B:
            switch (_bank) {
                case 4: func_B61B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB624:
            switch (_bank) {
                case 4: func_B624_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB62D:
            switch (_bank) {
                case 4: func_B62D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB648:
            switch (_bank) {
                case 4: func_B648_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6B8:
            switch (_bank) {
                case 4: func_B6B8_b4(); break;
                case 3: func_B6B8_b3(); break;
                case 0: func_B6B8_b0(); break;
                case 1: func_B6B8_b1(); break;
                case 2: func_B6B8_b2(); break;
                case 6: func_B6B8_b6(); break;
                case 5: func_B6B8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB664:
            switch (_bank) {
                case 4: func_B664_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB686:
            switch (_bank) {
                case 4: func_B686_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6A1:
            switch (_bank) {
                case 4: func_B6A1_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6D4:
            switch (_bank) {
                case 4: func_B6D4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB711:
            switch (_bank) {
                case 4: func_B711_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB705:
            switch (_bank) {
                case 4: func_B705_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB723:
            switch (_bank) {
                case 4: func_B723_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7AA:
            switch (_bank) {
                case 4: func_B7AA_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7B5:
            switch (_bank) {
                case 4: func_B7B5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7BE:
            switch (_bank) {
                case 4: func_B7BE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB75C:
            switch (_bank) {
                case 4: func_B75C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB767:
            switch (_bank) {
                case 4: func_B767_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB772:
            switch (_bank) {
                case 4: func_B772_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB77D:
            switch (_bank) {
                case 4: func_B77D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB802:
            switch (_bank) {
                case 4: func_B802_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7D5:
            switch (_bank) {
                case 4: func_B7D5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7DE:
            switch (_bank) {
                case 4: func_B7DE_b4(); break;
                case 5: func_B7DE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB868:
            switch (_bank) {
                case 4: func_B868_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB85B:
            switch (_bank) {
                case 4: func_B85B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8FA:
            switch (_bank) {
                case 7: func_F8FA(); break;
                case 4: func_B8FA_b4(); break;
                case 3: func_B8FA_b3(); break;
                case 5: func_B8FA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB920:
            switch (_bank) {
                case 7: func_F920(); break;
                case 4: func_B920_b4(); break;
                case 3: func_B920_b3(); break;
                case 5: func_B920_b5(); break;
                case 0: func_B920_b0(); break;
                case 1: func_B920_b1(); break;
                case 2: func_B920_b2(); break;
                case 6: func_B920_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB953:
            switch (_bank) {
                case 4: func_B953_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB95F:
            switch (_bank) {
                case 4: func_B95F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA01:
            switch (_bank) {
                case 4: func_BA01_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA06:
            switch (_bank) {
                case 4: func_BA06_b4(); break;
                case 5: func_BA06_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA58:
            switch (_bank) {
                case 4: func_BA58_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE035:
            func_E035(); break;
        case 0xBB12:
            switch (_bank) {
                case 4: func_BB12_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBABD:
            switch (_bank) {
                case 4: func_BABD_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAD0:
            switch (_bank) {
                case 4: func_BAD0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAE9:
            switch (_bank) {
                case 4: func_BAE9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAFC:
            switch (_bank) {
                case 4: func_BAFC_b4(); break;
                case 5: func_BAFC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB5A:
            switch (_bank) {
                case 4: func_BB5A_b4(); break;
                case 3: func_BB5A_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB73:
            switch (_bank) {
                case 4: func_BB73_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB9F:
            switch (_bank) {
                case 4: func_BB9F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBCB:
            switch (_bank) {
                case 4: func_BBCB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBF7:
            switch (_bank) {
                case 4: func_BBF7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC23:
            switch (_bank) {
                case 4: func_BC23_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC3A:
            switch (_bank) {
                case 4: func_BC3A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC5B:
            switch (_bank) {
                case 4: func_BC5B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94B6:
            switch (_bank) {
                case 5: func_94B6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97C0:
            switch (_bank) {
                case 5: func_97C0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97C7:
            switch (_bank) {
                case 5: func_97C7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7C0:
            switch (_bank) {
                case 5: func_B7C0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3C8:
            switch (_bank) {
                case 5: func_B3C8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x932F:
            switch (_bank) {
                case 4: func_932F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB34B:
            switch (_bank) {
                case 4: func_B34B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x803C:
            switch (_bank) {
                case 4: func_803C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA03C:
            switch (_bank) {
                case 4: func_A03C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB365:
            switch (_bank) {
                case 4: func_B365_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3B3:
            switch (_bank) {
                case 4: func_B3B3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3FE:
            switch (_bank) {
                case 4: func_B3FE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEC77:
            func_EC77(); break;
        case 0x9324:
            switch (_bank) {
                case 6: func_9324_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2F2:
            switch (_bank) {
                case 6: func_B2F2_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2F8:
            switch (_bank) {
                case 6: func_B2F8_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3CA:
            switch (_bank) {
                case 0: func_B3CA_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4CA:
            switch (_bank) {
                case 0: func_B4CA_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB74B:
            switch (_bank) {
                case 0: func_B74B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC95:
            switch (_bank) {
                case 0: func_BC95_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCBA:
            switch (_bank) {
                case 0: func_BCBA_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDF7:
            switch (_bank) {
                case 0: func_BDF7_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF8B:
            switch (_bank) {
                case 0: func_BF8B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFBD:
            switch (_bank) {
                case 0: func_BFBD_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98C0:
            switch (_bank) {
                case 5: func_98C0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8C0:
            switch (_bank) {
                case 5: func_B8C0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92F3:
            switch (_bank) {
                case 0: func_92F3_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB459:
            switch (_bank) {
                case 5: func_B459_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB460:
            switch (_bank) {
                case 5: func_B460_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x960D:
            switch (_bank) {
                case 7: func_D60D(); break;
                case 0: func_960D_b0(); break;
                case 1: func_960D_b1(); break;
                case 2: func_960D_b2(); break;
                case 3: func_960D_b3(); break;
                case 4: func_960D_b4(); break;
                case 6: func_960D_b6(); break;
                case 5: func_960D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB60D:
            switch (_bank) {
                case 7: func_F60D(); break;
                case 0: func_B60D_b0(); break;
                case 1: func_B60D_b1(); break;
                case 2: func_B60D_b2(); break;
                case 3: func_B60D_b3(); break;
                case 4: func_B60D_b4(); break;
                case 5: func_B60D_b5(); break;
                case 6: func_B60D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB801:
            switch (_bank) {
                case 3: func_B801_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9662:
            switch (_bank) {
                case 7: func_D662(); break;
                case 0: func_9662_b0(); break;
                case 1: func_9662_b1(); break;
                case 2: func_9662_b2(); break;
                case 3: func_9662_b3(); break;
                case 4: func_9662_b4(); break;
                case 5: func_9662_b5(); break;
                case 6: func_9662_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB662:
            switch (_bank) {
                case 7: func_F662(); break;
                case 0: func_B662_b0(); break;
                case 1: func_B662_b1(); break;
                case 2: func_B662_b2(); break;
                case 3: func_B662_b3(); break;
                case 4: func_B662_b4(); break;
                case 5: func_B662_b5(); break;
                case 6: func_B662_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9586:
            switch (_bank) {
                case 4: func_9586_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x959B:
            switch (_bank) {
                case 7: func_D59B(); break;
                case 4: func_959B_b4(); break;
                case 3: func_959B_b3(); break;
                case 5: func_959B_b5(); break;
                case 0: func_959B_b0(); break;
                case 1: func_959B_b1(); break;
                case 2: func_959B_b2(); break;
                case 6: func_959B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95A3:
            switch (_bank) {
                case 4: func_95A3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9615:
            switch (_bank) {
                case 5: func_9615_b5(); break;
                case 4: func_9615_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x975A:
            switch (_bank) {
                case 2: func_975A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF84:
            switch (_bank) {
                case 4: func_AF84_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF9F:
            switch (_bank) {
                case 4: func_AF9F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFBF:
            switch (_bank) {
                case 4: func_AFBF_b4(); break;
                case 5: func_AFBF_b5(); break;
                case 0: func_AFBF_b0(); break;
                case 1: func_AFBF_b1(); break;
                case 2: func_AFBF_b2(); break;
                case 3: func_AFBF_b3(); break;
                case 6: func_AFBF_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB06A:
            switch (_bank) {
                case 4: func_B06A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB071:
            switch (_bank) {
                case 4: func_B071_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB072:
            switch (_bank) {
                case 4: func_B072_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB09A:
            switch (_bank) {
                case 4: func_B09A_b4(); break;
                case 5: func_B09A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0A8:
            switch (_bank) {
                case 4: func_B0A8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0AF:
            switch (_bank) {
                case 4: func_B0AF_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0D0:
            switch (_bank) {
                case 4: func_B0D0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0D6:
            switch (_bank) {
                case 4: func_B0D6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB13E:
            switch (_bank) {
                case 4: func_B13E_b4(); break;
                case 5: func_B13E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0F2:
            switch (_bank) {
                case 4: func_B0F2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB131:
            switch (_bank) {
                case 4: func_B131_b4(); break;
                case 5: func_B131_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB144:
            switch (_bank) {
                case 4: func_B144_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFBF:
            switch (_bank) {
                case 4: func_BFBF_b4(); break;
                case 3: func_BFBF_b3(); break;
                case 0: func_BFBF_b0(); break;
                case 1: func_BFBF_b1(); break;
                case 2: func_BFBF_b2(); break;
                case 5: func_BFBF_b5(); break;
                case 6: func_BFBF_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB152:
            switch (_bank) {
                case 4: func_B152_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB154:
            switch (_bank) {
                case 4: func_B154_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB16F:
            switch (_bank) {
                case 4: func_B16F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB173:
            switch (_bank) {
                case 4: func_B173_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1AE:
            switch (_bank) {
                case 4: func_B1AE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1B7:
            switch (_bank) {
                case 4: func_B1B7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1C0:
            switch (_bank) {
                case 4: func_B1C0_b4(); break;
                case 5: func_B1C0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1C9:
            switch (_bank) {
                case 4: func_B1C9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1D2:
            switch (_bank) {
                case 4: func_B1D2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1DB:
            switch (_bank) {
                case 4: func_B1DB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1F1:
            switch (_bank) {
                case 4: func_B1F1_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB250:
            switch (_bank) {
                case 4: func_B250_b4(); break;
                case 5: func_B250_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2BE:
            switch (_bank) {
                case 4: func_B2BE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB266:
            switch (_bank) {
                case 4: func_B266_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB27D:
            switch (_bank) {
                case 4: func_B27D_b4(); break;
                case 5: func_B27D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB28B:
            switch (_bank) {
                case 4: func_B28B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2AC:
            switch (_bank) {
                case 4: func_B2AC_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2D8:
            switch (_bank) {
                case 4: func_B2D8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2E8:
            switch (_bank) {
                case 4: func_B2E8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F9B:
            switch (_bank) {
                case 5: func_8F9B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8FBF:
            switch (_bank) {
                case 7: func_CFBF(); break;
                case 5: func_8FBF_b5(); break;
                case 0: func_8FBF_b0(); break;
                case 1: func_8FBF_b1(); break;
                case 2: func_8FBF_b2(); break;
                case 3: func_8FBF_b3(); break;
                case 4: func_8FBF_b4(); break;
                case 6: func_8FBF_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8FA9:
            switch (_bank) {
                case 5: func_8FA9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8825:
            switch (_bank) {
                case 7: func_C825(); break;
                case 0: func_8825_b0(); break;
                case 1: func_8825_b1(); break;
                case 2: func_8825_b2(); break;
                case 3: func_8825_b3(); break;
                case 4: func_8825_b4(); break;
                case 5: func_8825_b5(); break;
                case 6: func_8825_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA825:
            switch (_bank) {
                case 0: func_A825_b0(); break;
                case 1: func_A825_b1(); break;
                case 2: func_A825_b2(); break;
                case 3: func_A825_b3(); break;
                case 4: func_A825_b4(); break;
                case 5: func_A825_b5(); break;
                case 6: func_A825_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F89:
            switch (_bank) {
                case 7: func_CF89(); break;
                case 6: func_8F89_b6(); break;
                case 2: func_8F89_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8FA5:
            switch (_bank) {
                case 6: func_8FA5_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F0A:
            switch (_bank) {
                case 6: func_8F0A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F12:
            switch (_bank) {
                case 6: func_8F12_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8FB5:
            switch (_bank) {
                case 6: func_8FB5_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9009:
            switch (_bank) {
                case 7: func_D009(); break;
                case 0: func_9009_b0(); break;
                case 1: func_9009_b1(); break;
                case 2: func_9009_b2(); break;
                case 3: func_9009_b3(); break;
                case 4: func_9009_b4(); break;
                case 5: func_9009_b5(); break;
                case 6: func_9009_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB009:
            switch (_bank) {
                case 7: func_F009(); break;
                case 0: func_B009_b0(); break;
                case 1: func_B009_b1(); break;
                case 2: func_B009_b2(); break;
                case 3: func_B009_b3(); break;
                case 4: func_B009_b4(); break;
                case 5: func_B009_b5(); break;
                case 6: func_B009_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9067:
            switch (_bank) {
                case 6: func_9067_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9054:
            switch (_bank) {
                case 6: func_9054_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9048:
            switch (_bank) {
                case 6: func_9048_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90EC:
            switch (_bank) {
                case 6: func_90EC_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91FE:
            switch (_bank) {
                case 6: func_91FE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9247:
            switch (_bank) {
                case 6: func_9247_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9249:
            switch (_bank) {
                case 6: func_9249_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x926A:
            switch (_bank) {
                case 6: func_926A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x929C:
            switch (_bank) {
                case 6: func_929C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92D4:
            switch (_bank) {
                case 6: func_92D4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92EE:
            switch (_bank) {
                case 6: func_92EE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x931C:
            switch (_bank) {
                case 6: func_931C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93FD:
            switch (_bank) {
                case 6: func_93FD_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9418:
            switch (_bank) {
                case 6: func_9418_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9456:
            switch (_bank) {
                case 6: func_9456_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9507:
            switch (_bank) {
                case 6: func_9507_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94F9:
            switch (_bank) {
                case 6: func_94F9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94D9:
            switch (_bank) {
                case 6: func_94D9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9521:
            switch (_bank) {
                case 6: func_9521_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9549:
            switch (_bank) {
                case 6: func_9549_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9612:
            switch (_bank) {
                case 6: func_9612_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9646:
            switch (_bank) {
                case 6: func_9646_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9666:
            switch (_bank) {
                case 6: func_9666_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x850F:
            switch (_bank) {
                case 7: func_C50F(); break;
                case 0: func_850F_b0(); break;
                case 1: func_850F_b1(); break;
                case 2: func_850F_b2(); break;
                case 3: func_850F_b3(); break;
                case 4: func_850F_b4(); break;
                case 5: func_850F_b5(); break;
                case 6: func_850F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA50F:
            switch (_bank) {
                case 0: func_A50F_b0(); break;
                case 1: func_A50F_b1(); break;
                case 2: func_A50F_b2(); break;
                case 3: func_A50F_b3(); break;
                case 4: func_A50F_b4(); break;
                case 5: func_A50F_b5(); break;
                case 6: func_A50F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96C3:
            switch (_bank) {
                case 6: func_96C3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96EE:
            switch (_bank) {
                case 6: func_96EE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x972C:
            switch (_bank) {
                case 6: func_972C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97BC:
            switch (_bank) {
                case 6: func_97BC_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x980F:
            switch (_bank) {
                case 6: func_980F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97F6:
            switch (_bank) {
                case 6: func_97F6_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x982A:
            switch (_bank) {
                case 6: func_982A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98AC:
            switch (_bank) {
                case 6: func_98AC_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98FD:
            switch (_bank) {
                case 6: func_98FD_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x990D:
            switch (_bank) {
                case 6: func_990D_b6(); break;
                case 5: func_990D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFB10:
            func_FB10(); break;
        case 0x9949:
            switch (_bank) {
                case 7: func_D949(); break;
                case 6: func_9949_b6(); break;
                case 5: func_9949_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9937:
            switch (_bank) {
                case 6: func_9937_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9958:
            switch (_bank) {
                case 6: func_9958_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9981:
            switch (_bank) {
                case 6: func_9981_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A47:
            switch (_bank) {
                case 6: func_9A47_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A4B:
            switch (_bank) {
                case 6: func_9A4B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFB00:
            func_FB00(); break;
        case 0x9AC6:
            switch (_bank) {
                case 6: func_9AC6_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AEB:
            switch (_bank) {
                case 6: func_9AEB_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B12:
            switch (_bank) {
                case 6: func_9B12_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B6A:
            switch (_bank) {
                case 6: func_9B6A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B9C:
            switch (_bank) {
                case 6: func_9B9C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BA3:
            switch (_bank) {
                case 6: func_9BA3_b6(); break;
                case 5: func_9BA3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C63:
            switch (_bank) {
                case 6: func_9C63_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CDB:
            switch (_bank) {
                case 6: func_9CDB_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF07:
            switch (_bank) {
                case 6: func_AF07_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB02D:
            switch (_bank) {
                case 7: func_F02D(); break;
                case 2: func_B02D_b2(); break;
                case 5: func_B02D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB774:
            switch (_bank) {
                case 2: func_B774_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9AF:
            switch (_bank) {
                case 2: func_B9AF_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9E2:
            switch (_bank) {
                case 2: func_B9E2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA49:
            switch (_bank) {
                case 2: func_BA49_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA85:
            switch (_bank) {
                case 7: func_FA85(); break;
                case 2: func_BA85_b2(); break;
                case 5: func_BA85_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9087:
            switch (_bank) {
                case 3: func_9087_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x912C:
            switch (_bank) {
                case 3: func_912C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0AD:
            switch (_bank) {
                case 3: func_A0AD_b3(); break;
                case 5: func_A0AD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0BC:
            switch (_bank) {
                case 3: func_A0BC_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9163:
            switch (_bank) {
                case 3: func_9163_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9174:
            switch (_bank) {
                case 3: func_9174_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9264:
            switch (_bank) {
                case 3: func_9264_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9436:
            switch (_bank) {
                case 3: func_9436_b3(); break;
                case 4: func_9436_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x950F:
            switch (_bank) {
                case 3: func_950F_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9528:
            switch (_bank) {
                case 3: func_9528_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97A6:
            switch (_bank) {
                case 3: func_97A6_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8FE0:
            switch (_bank) {
                case 4: func_8FE0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFC4:
            switch (_bank) {
                case 6: func_AFC4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFDD:
            switch (_bank) {
                case 6: func_AFDD_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9002:
            switch (_bank) {
                case 5: func_9002_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94EA:
            switch (_bank) {
                case 5: func_94EA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9514:
            switch (_bank) {
                case 5: func_9514_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9500:
            switch (_bank) {
                case 5: func_9500_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4EA:
            switch (_bank) {
                case 5: func_B4EA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AC2:
            switch (_bank) {
                case 5: func_9AC2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9ACA:
            switch (_bank) {
                case 5: func_9ACA_b5(); break;
                case 0: func_9ACA_b0(); break;
                case 1: func_9ACA_b1(); break;
                case 2: func_9ACA_b2(); break;
                case 3: func_9ACA_b3(); break;
                case 4: func_9ACA_b4(); break;
                case 6: func_9ACA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAC2:
            switch (_bank) {
                case 5: func_BAC2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCC61:
            func_CC61(); break;
        case 0xCC66:
            func_CC66(); break;
        case 0xAC8E:
            switch (_bank) {
                case 0: func_AC8E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD0E:
            switch (_bank) {
                case 0: func_AD0E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE0E:
            switch (_bank) {
                case 0: func_AE0E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD27:
            switch (_bank) {
                case 3: func_AD27_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF526:
            func_F526(); break;
        case 0xB264:
            switch (_bank) {
                case 3: func_B264_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB33C:
            switch (_bank) {
                case 3: func_B33C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB359:
            switch (_bank) {
                case 3: func_B359_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB66E:
            switch (_bank) {
                case 3: func_B66E_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB656:
            switch (_bank) {
                case 3: func_B656_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3C4:
            switch (_bank) {
                case 3: func_B3C4_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCDA4:
            func_CDA4(); break;
        case 0xCDAD:
            func_CDAD(); break;
        case 0x8DA4:
            switch (_bank) {
                case 7: func_CDA4(); break;
                case 0: func_8DA4_b0(); break;
                case 1: func_8DA4_b1(); break;
                case 2: func_8DA4_b2(); break;
                case 3: func_8DA4_b3(); break;
                case 4: func_8DA4_b4(); break;
                case 5: func_8DA4_b5(); break;
                case 6: func_8DA4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADA4:
            switch (_bank) {
                case 0: func_ADA4_b0(); break;
                case 1: func_ADA4_b1(); break;
                case 2: func_ADA4_b2(); break;
                case 4: func_ADA4_b4(); break;
                case 5: func_ADA4_b5(); break;
                case 6: func_ADA4_b6(); break;
                case 3: func_ADA4_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8097:
            switch (_bank) {
                case 3: func_8097_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB76B:
            switch (_bank) {
                case 3: func_B76B_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8107:
            switch (_bank) {
                case 3: func_8107_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA107:
            switch (_bank) {
                case 3: func_A107_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8804:
            switch (_bank) {
                case 3: func_8804_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA804:
            switch (_bank) {
                case 3: func_A804_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB827:
            switch (_bank) {
                case 3: func_B827_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB80A:
            switch (_bank) {
                case 3: func_B80A_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99BD:
            switch (_bank) {
                case 7: func_D9BD(); break;
                case 3: func_99BD_b3(); break;
                case 5: func_99BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9BD:
            switch (_bank) {
                case 3: func_B9BD_b3(); break;
                case 5: func_B9BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB838:
            switch (_bank) {
                case 3: func_B838_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB839:
            switch (_bank) {
                case 3: func_B839_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC32C:
            func_C32C(); break;
        case 0x832C:
            switch (_bank) {
                case 7: func_C32C(); break;
                case 0: func_832C_b0(); break;
                case 1: func_832C_b1(); break;
                case 2: func_832C_b2(); break;
                case 3: func_832C_b3(); break;
                case 4: func_832C_b4(); break;
                case 5: func_832C_b5(); break;
                case 6: func_832C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA32C:
            switch (_bank) {
                case 0: func_A32C_b0(); break;
                case 1: func_A32C_b1(); break;
                case 2: func_A32C_b2(); break;
                case 3: func_A32C_b3(); break;
                case 4: func_A32C_b4(); break;
                case 5: func_A32C_b5(); break;
                case 6: func_A32C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA34C:
            switch (_bank) {
                case 5: func_A34C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE905:
            func_E905(); break;
        case 0xE907:
            func_E907(); break;
        case 0xC628:
            func_C628(); break;
        case 0xD5D1:
            func_D5D1(); break;
        case 0xD600:
            func_D600(); break;
        case 0xD601:
            func_D601(); break;
        case 0xD5E0:
            func_D5E0(); break;
        case 0x8628:
            switch (_bank) {
                case 7: func_C628(); break;
                case 0: func_8628_b0(); break;
                case 1: func_8628_b1(); break;
                case 2: func_8628_b2(); break;
                case 3: func_8628_b3(); break;
                case 4: func_8628_b4(); break;
                case 5: func_8628_b5(); break;
                case 6: func_8628_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA628:
            switch (_bank) {
                case 0: func_A628_b0(); break;
                case 1: func_A628_b1(); break;
                case 2: func_A628_b2(); break;
                case 3: func_A628_b3(); break;
                case 4: func_A628_b4(); break;
                case 5: func_A628_b5(); break;
                case 6: func_A628_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D06:
            switch (_bank) {
                case 5: func_8D06_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9404:
            switch (_bank) {
                case 5: func_9404_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8629:
            switch (_bank) {
                case 5: func_8629_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96B8:
            switch (_bank) {
                case 7: func_D6B8(); break;
                case 5: func_96B8_b5(); break;
                case 0: func_96B8_b0(); break;
                case 1: func_96B8_b1(); break;
                case 2: func_96B8_b2(); break;
                case 3: func_96B8_b3(); break;
                case 4: func_96B8_b4(); break;
                case 6: func_96B8_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96F4:
            switch (_bank) {
                case 7: func_D6F4(); break;
                case 5: func_96F4_b5(); break;
                case 3: func_96F4_b3(); break;
                case 0: func_96F4_b0(); break;
                case 1: func_96F4_b1(); break;
                case 2: func_96F4_b2(); break;
                case 4: func_96F4_b4(); break;
                case 6: func_96F4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96C0:
            switch (_bank) {
                case 5: func_96C0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96EA:
            switch (_bank) {
                case 5: func_96EA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9708:
            switch (_bank) {
                case 5: func_9708_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9700:
            switch (_bank) {
                case 5: func_9700_b5(); break;
                case 6: func_9700_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB92B:
            switch (_bank) {
                case 3: func_B92B_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x924A:
            switch (_bank) {
                case 3: func_924A_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB24A:
            switch (_bank) {
                case 3: func_B24A_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEA8:
            switch (_bank) {
                case 3: func_BEA8_b3(); break;
                case 0: func_BEA8_b0(); break;
                case 1: func_BEA8_b1(); break;
                case 2: func_BEA8_b2(); break;
                case 4: func_BEA8_b4(); break;
                case 5: func_BEA8_b5(); break;
                case 6: func_BEA8_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE4C:
            switch (_bank) {
                case 3: func_BE4C_b3(); break;
                case 0: func_BE4C_b0(); break;
                case 1: func_BE4C_b1(); break;
                case 2: func_BE4C_b2(); break;
                case 6: func_BE4C_b6(); break;
                case 5: func_BE4C_b5(); break;
                case 4: func_BE4C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC788:
            func_C788(); break;
        case 0xD71E:
            func_D71E(); break;
        case 0xD731:
            func_D731(); break;
        case 0xD743:
            func_D743(); break;
        case 0x8788:
            switch (_bank) {
                case 7: func_C788(); break;
                case 0: func_8788_b0(); break;
                case 1: func_8788_b1(); break;
                case 2: func_8788_b2(); break;
                case 3: func_8788_b3(); break;
                case 4: func_8788_b4(); break;
                case 6: func_8788_b6(); break;
                case 5: func_8788_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA788:
            switch (_bank) {
                case 7: func_E788(); break;
                case 0: func_A788_b0(); break;
                case 1: func_A788_b1(); break;
                case 2: func_A788_b2(); break;
                case 3: func_A788_b3(); break;
                case 4: func_A788_b4(); break;
                case 5: func_A788_b5(); break;
                case 6: func_A788_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D40:
            switch (_bank) {
                case 3: func_8D40_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD40:
            switch (_bank) {
                case 3: func_AD40_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9001:
            switch (_bank) {
                case 7: func_D001(); break;
                case 3: func_9001_b3(); break;
                case 5: func_9001_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C75:
            switch (_bank) {
                case 3: func_9C75_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CB6:
            switch (_bank) {
                case 3: func_9CB6_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA097:
            switch (_bank) {
                case 3: func_A097_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C33:
            switch (_bank) {
                case 3: func_9C33_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9796:
            switch (_bank) {
                case 7: func_D796(); break;
                case 3: func_9796_b3(); break;
                case 0: func_9796_b0(); break;
                case 1: func_9796_b1(); break;
                case 2: func_9796_b2(); break;
                case 4: func_9796_b4(); break;
                case 6: func_9796_b6(); break;
                case 5: func_9796_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C27:
            switch (_bank) {
                case 7: func_DC27(); break;
                case 3: func_9C27_b3(); break;
                case 0: func_9C27_b0(); break;
                case 1: func_9C27_b1(); break;
                case 2: func_9C27_b2(); break;
                case 4: func_9C27_b4(); break;
                case 6: func_9C27_b6(); break;
                case 5: func_9C27_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A21:
            switch (_bank) {
                case 3: func_9A21_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9408:
            switch (_bank) {
                case 3: func_9408_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99F0:
            switch (_bank) {
                case 7: func_D9F0(); break;
                case 3: func_99F0_b3(); break;
                case 0: func_99F0_b0(); break;
                case 1: func_99F0_b1(); break;
                case 2: func_99F0_b2(); break;
                case 4: func_99F0_b4(); break;
                case 5: func_99F0_b5(); break;
                case 6: func_99F0_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9756:
            switch (_bank) {
                case 7: func_D756(); break;
                case 3: func_9756_b3(); break;
                case 0: func_9756_b0(); break;
                case 1: func_9756_b1(); break;
                case 2: func_9756_b2(); break;
                case 4: func_9756_b4(); break;
                case 6: func_9756_b6(); break;
                case 5: func_9756_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9950:
            switch (_bank) {
                case 7: func_D950(); break;
                case 3: func_9950_b3(); break;
                case 0: func_9950_b0(); break;
                case 1: func_9950_b1(); break;
                case 2: func_9950_b2(); break;
                case 4: func_9950_b4(); break;
                case 6: func_9950_b6(); break;
                case 5: func_9950_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9920:
            switch (_bank) {
                case 3: func_9920_b3(); break;
                case 0: func_9920_b0(); break;
                case 1: func_9920_b1(); break;
                case 2: func_9920_b2(); break;
                case 4: func_9920_b4(); break;
                case 5: func_9920_b5(); break;
                case 6: func_9920_b6(); break;
                case 7: func_9920_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99BB:
            switch (_bank) {
                case 3: func_99BB_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EA8:
            switch (_bank) {
                case 7: func_DEA8(); break;
                case 3: func_9EA8_b3(); break;
                case 0: func_9EA8_b0(); break;
                case 1: func_9EA8_b1(); break;
                case 2: func_9EA8_b2(); break;
                case 4: func_9EA8_b4(); break;
                case 5: func_9EA8_b5(); break;
                case 6: func_9EA8_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9576:
            switch (_bank) {
                case 7: func_D576(); break;
                case 3: func_9576_b3(); break;
                case 0: func_9576_b0(); break;
                case 1: func_9576_b1(); break;
                case 2: func_9576_b2(); break;
                case 4: func_9576_b4(); break;
                case 5: func_9576_b5(); break;
                case 6: func_9576_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92F6:
            switch (_bank) {
                case 7: func_D2F6(); break;
                case 3: func_92F6_b3(); break;
                case 0: func_92F6_b0(); break;
                case 1: func_92F6_b1(); break;
                case 2: func_92F6_b2(); break;
                case 4: func_92F6_b4(); break;
                case 5: func_92F6_b5(); break;
                case 6: func_92F6_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9FBF:
            switch (_bank) {
                case 7: func_DFBF(); break;
                case 3: func_9FBF_b3(); break;
                case 0: func_9FBF_b0(); break;
                case 1: func_9FBF_b1(); break;
                case 2: func_9FBF_b2(); break;
                case 4: func_9FBF_b4(); break;
                case 5: func_9FBF_b5(); break;
                case 6: func_9FBF_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93CD:
            switch (_bank) {
                case 7: func_D3CD(); break;
                case 3: func_93CD_b3(); break;
                case 4: func_93CD_b4(); break;
                case 5: func_93CD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB001:
            switch (_bank) {
                case 3: func_B001_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8358:
            switch (_bank) {
                case 3: func_8358_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA358:
            switch (_bank) {
                case 3: func_A358_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C04:
            switch (_bank) {
                case 3: func_8C04_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC04:
            switch (_bank) {
                case 3: func_AC04_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB92:
            switch (_bank) {
                case 7: func_FB92(); break;
                case 3: func_BB92_b3(); break;
                case 0: func_BB92_b0(); break;
                case 1: func_BB92_b1(); break;
                case 2: func_BB92_b2(); break;
                case 5: func_BB92_b5(); break;
                case 6: func_BB92_b6(); break;
                case 4: func_BB92_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC27:
            switch (_bank) {
                case 3: func_BC27_b3(); break;
                case 0: func_BC27_b0(); break;
                case 1: func_BC27_b1(); break;
                case 2: func_BC27_b2(); break;
                case 4: func_BC27_b4(); break;
                case 6: func_BC27_b6(); break;
                case 5: func_BC27_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB65:
            switch (_bank) {
                case 7: func_FB65(); break;
                case 3: func_BB65_b3(); break;
                case 0: func_BB65_b0(); break;
                case 1: func_BB65_b1(); break;
                case 2: func_BB65_b2(); break;
                case 4: func_BB65_b4(); break;
                case 6: func_BB65_b6(); break;
                case 5: func_BB65_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9F0:
            switch (_bank) {
                case 3: func_B9F0_b3(); break;
                case 0: func_B9F0_b0(); break;
                case 1: func_B9F0_b1(); break;
                case 2: func_B9F0_b2(); break;
                case 5: func_B9F0_b5(); break;
                case 6: func_B9F0_b6(); break;
                case 4: func_B9F0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7E8:
            switch (_bank) {
                case 3: func_B7E8_b3(); break;
                case 0: func_B7E8_b0(); break;
                case 1: func_B7E8_b1(); break;
                case 2: func_B7E8_b2(); break;
                case 6: func_B7E8_b6(); break;
                case 5: func_B7E8_b5(); break;
                case 4: func_B7E8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB756:
            switch (_bank) {
                case 3: func_B756_b3(); break;
                case 0: func_B756_b0(); break;
                case 1: func_B756_b1(); break;
                case 2: func_B756_b2(); break;
                case 6: func_B756_b6(); break;
                case 5: func_B756_b5(); break;
                case 4: func_B756_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB63A:
            switch (_bank) {
                case 3: func_B63A_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB757:
            switch (_bank) {
                case 3: func_B757_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB81B:
            switch (_bank) {
                case 3: func_B81B_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB62:
            switch (_bank) {
                case 3: func_BB62_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB0F:
            switch (_bank) {
                case 3: func_BB0F_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB406:
            switch (_bank) {
                case 7: func_F406(); break;
                case 3: func_B406_b3(); break;
                case 0: func_B406_b0(); break;
                case 1: func_B406_b1(); break;
                case 2: func_B406_b2(); break;
                case 6: func_B406_b6(); break;
                case 5: func_B406_b5(); break;
                case 4: func_B406_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB38E:
            switch (_bank) {
                case 3: func_B38E_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC711:
            func_C711(); break;
        case 0x8711:
            switch (_bank) {
                case 7: func_C711(); break;
                case 0: func_8711_b0(); break;
                case 1: func_8711_b1(); break;
                case 2: func_8711_b2(); break;
                case 3: func_8711_b3(); break;
                case 4: func_8711_b4(); break;
                case 6: func_8711_b6(); break;
                case 5: func_8711_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA711:
            switch (_bank) {
                case 0: func_A711_b0(); break;
                case 1: func_A711_b1(); break;
                case 2: func_A711_b2(); break;
                case 3: func_A711_b3(); break;
                case 4: func_A711_b4(); break;
                case 5: func_A711_b5(); break;
                case 6: func_A711_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA80A:
            switch (_bank) {
                case 4: func_A80A_b4(); break;
                case 7: func_A80A_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA723:
            switch (_bank) {
                case 5: func_A723_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9004:
            switch (_bank) {
                case 3: func_9004_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB004:
            switch (_bank) {
                case 3: func_B004_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBADB:
            switch (_bank) {
                case 3: func_BADB_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAF8:
            switch (_bank) {
                case 3: func_BAF8_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB7F:
            switch (_bank) {
                case 3: func_BB7F_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB7C:
            switch (_bank) {
                case 3: func_BB7C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBBF:
            switch (_bank) {
                case 3: func_BBBF_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB8C:
            switch (_bank) {
                case 3: func_BB8C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBAE:
            switch (_bank) {
                case 3: func_BBAE_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBD7:
            switch (_bank) {
                case 3: func_BBD7_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC05:
            switch (_bank) {
                case 7: func_FC05(); break;
                case 3: func_BC05_b3(); break;
                case 5: func_BC05_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBED:
            switch (_bank) {
                case 3: func_BBED_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC5E:
            switch (_bank) {
                case 3: func_BC5E_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x979E:
            switch (_bank) {
                case 4: func_979E_b4(); break;
                case 1: func_979E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C6F:
            switch (_bank) {
                case 4: func_8C6F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D01:
            switch (_bank) {
                case 6: func_8D01_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC3E:
            switch (_bank) {
                case 6: func_AC3E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD43:
            switch (_bank) {
                case 4: func_AD43_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD7C:
            switch (_bank) {
                case 4: func_AD7C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8001:
            switch (_bank) {
                case 7: func_C001(); break;
                case 4: func_8001_b4(); break;
                case 6: func_8001_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA001:
            switch (_bank) {
                case 7: func_E001(); break;
                case 4: func_A001_b4(); break;
                case 6: func_A001_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE33:
            switch (_bank) {
                case 4: func_AE33_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE2B:
            switch (_bank) {
                case 4: func_AE2B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE46:
            switch (_bank) {
                case 4: func_AE46_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE76:
            switch (_bank) {
                case 4: func_AE76_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE21:
            switch (_bank) {
                case 4: func_AE21_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE6F:
            switch (_bank) {
                case 4: func_AE6F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE81:
            switch (_bank) {
                case 4: func_AE81_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE94:
            switch (_bank) {
                case 4: func_AE94_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE97:
            switch (_bank) {
                case 4: func_AE97_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEA1:
            switch (_bank) {
                case 4: func_AEA1_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEBF:
            switch (_bank) {
                case 4: func_AEBF_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEE7:
            switch (_bank) {
                case 4: func_AEE7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEDD:
            switch (_bank) {
                case 4: func_AEDD_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEE0:
            switch (_bank) {
                case 4: func_AEE0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF05:
            switch (_bank) {
                case 4: func_AF05_b4(); break;
                case 5: func_AF05_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF18:
            switch (_bank) {
                case 4: func_AF18_b4(); break;
                case 5: func_AF18_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF1E:
            switch (_bank) {
                case 4: func_AF1E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF27:
            switch (_bank) {
                case 7: func_EF27(); break;
                case 4: func_AF27_b4(); break;
                case 2: func_AF27_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF57:
            switch (_bank) {
                case 4: func_AF57_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF66:
            switch (_bank) {
                case 4: func_AF66_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF75:
            switch (_bank) {
                case 4: func_AF75_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACD9:
            switch (_bank) {
                case 6: func_ACD9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCD50:
            func_CD50(); break;
        case 0xDB92:
            func_DB92(); break;
        case 0xDC27:
            func_DC27(); break;
        case 0xDB65:
            func_DB65(); break;
        case 0x801E:
            switch (_bank) {
                case 2: func_801E_b2(); break;
                case 0: func_801E_b0(); break;
                case 1: func_801E_b1(); break;
                case 3: func_801E_b3(); break;
                case 4: func_801E_b4(); break;
                case 5: func_801E_b5(); break;
                case 6: func_801E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFB3:
            switch (_bank) {
                case 1: func_AFB3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8FB3:
            switch (_bank) {
                case 1: func_8FB3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DB7:
            switch (_bank) {
                case 3: func_8DB7_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DB8:
            switch (_bank) {
                case 3: func_8DB8_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA739:
            switch (_bank) {
                case 3: func_A739_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8739:
            switch (_bank) {
                case 3: func_8739_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94C7:
            switch (_bank) {
                case 4: func_94C7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF04D:
            func_F04D(); break;
        case 0xF05F:
            func_F05F(); break;
        case 0xF05A:
            func_F05A(); break;
        case 0xF055:
            func_F055(); break;
        case 0xF064:
            func_F064(); break;
        case 0xF062:
            func_F062(); break;
        case 0xF053:
            func_F053(); break;
        case 0x98A0:
            switch (_bank) {
                case 5: func_98A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98A9:
            switch (_bank) {
                case 5: func_98A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8A0:
            switch (_bank) {
                case 5: func_B8A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8A6:
            switch (_bank) {
                case 5: func_B8A6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8BA:
            switch (_bank) {
                case 5: func_B8BA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8AA:
            switch (_bank) {
                case 5: func_B8AA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB937:
            switch (_bank) {
                case 5: func_B937_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD21:
            switch (_bank) {
                case 4: func_BD21_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCA3:
            switch (_bank) {
                case 5: func_BCA3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCA9:
            switch (_bank) {
                case 5: func_BCA9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCE6:
            switch (_bank) {
                case 5: func_BCE6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD10:
            switch (_bank) {
                case 5: func_BD10_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD05:
            switch (_bank) {
                case 5: func_BD05_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD24:
            switch (_bank) {
                case 5: func_BD24_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCF1:
            switch (_bank) {
                case 5: func_BCF1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD1F:
            switch (_bank) {
                case 5: func_BD1F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD02:
            switch (_bank) {
                case 5: func_BD02_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCFA:
            switch (_bank) {
                case 5: func_BCFA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEA8C:
            func_EA8C(); break;
        case 0xBA08:
            switch (_bank) {
                case 5: func_BA08_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA35:
            switch (_bank) {
                case 5: func_BA35_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9366:
            switch (_bank) {
                case 5: func_9366_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB366:
            switch (_bank) {
                case 5: func_B366_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9518:
            switch (_bank) {
                case 5: func_9518_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9523:
            switch (_bank) {
                case 5: func_9523_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9520:
            switch (_bank) {
                case 5: func_9520_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB518:
            switch (_bank) {
                case 5: func_B518_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE613:
            func_E613(); break;
        case 0xB42A:
            switch (_bank) {
                case 6: func_B42A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB419:
            switch (_bank) {
                case 6: func_B419_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x998B:
            switch (_bank) {
                case 6: func_998B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB98B:
            switch (_bank) {
                case 6: func_B98B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x848F:
            switch (_bank) {
                case 4: func_848F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x816C:
            switch (_bank) {
                case 6: func_816C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB796:
            switch (_bank) {
                case 0: func_B796_b0(); break;
                case 1: func_B796_b1(); break;
                case 2: func_B796_b2(); break;
                case 3: func_B796_b3(); break;
                case 4: func_B796_b4(); break;
                case 5: func_B796_b5(); break;
                case 6: func_B796_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB440:
            switch (_bank) {
                case 4: func_B440_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB470:
            switch (_bank) {
                case 5: func_B470_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8478:
            switch (_bank) {
                case 4: func_8478_b4(); break;
                case 6: func_8478_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8005:
            switch (_bank) {
                case 5: func_8005_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BBE:
            switch (_bank) {
                case 6: func_8BBE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B92:
            switch (_bank) {
                case 7: func_DB92(); break;
                case 0: func_9B92_b0(); break;
                case 1: func_9B92_b1(); break;
                case 2: func_9B92_b2(); break;
                case 3: func_9B92_b3(); break;
                case 4: func_9B92_b4(); break;
                case 6: func_9B92_b6(); break;
                case 5: func_9B92_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BAF:
            switch (_bank) {
                case 7: func_DBAF(); break;
                case 0: func_9BAF_b0(); break;
                case 1: func_9BAF_b1(); break;
                case 2: func_9BAF_b2(); break;
                case 3: func_9BAF_b3(); break;
                case 4: func_9BAF_b4(); break;
                case 5: func_9BAF_b5(); break;
                case 6: func_9BAF_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBAF:
            switch (_bank) {
                case 0: func_BBAF_b0(); break;
                case 1: func_BBAF_b1(); break;
                case 2: func_BBAF_b2(); break;
                case 3: func_BBAF_b3(); break;
                case 4: func_BBAF_b4(); break;
                case 6: func_BBAF_b6(); break;
                case 5: func_BBAF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AF7:
            switch (_bank) {
                case 4: func_9AF7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AE4:
            switch (_bank) {
                case 4: func_9AE4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B23:
            switch (_bank) {
                case 4: func_9B23_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BD1:
            switch (_bank) {
                case 4: func_9BD1_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BD8:
            switch (_bank) {
                case 4: func_9BD8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CBB:
            switch (_bank) {
                case 4: func_9CBB_b4(); break;
                case 5: func_9CBB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C8D:
            switch (_bank) {
                case 4: func_9C8D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D0F:
            switch (_bank) {
                case 4: func_9D0F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D2A:
            switch (_bank) {
                case 4: func_9D2A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D5C:
            switch (_bank) {
                case 4: func_9D5C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DD4:
            switch (_bank) {
                case 4: func_9DD4_b4(); break;
                case 0: func_9DD4_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DC9:
            switch (_bank) {
                case 4: func_9DC9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DED:
            switch (_bank) {
                case 4: func_9DED_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9ECE:
            switch (_bank) {
                case 4: func_9ECE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EE5:
            switch (_bank) {
                case 4: func_9EE5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F13:
            switch (_bank) {
                case 4: func_9F13_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F2C:
            switch (_bank) {
                case 4: func_9F2C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA070:
            switch (_bank) {
                case 4: func_A070_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0C3:
            switch (_bank) {
                case 4: func_A0C3_b4(); break;
                case 6: func_A0C3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0F4:
            switch (_bank) {
                case 4: func_A0F4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA176:
            switch (_bank) {
                case 4: func_A176_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA14E:
            switch (_bank) {
                case 4: func_A14E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA22E:
            switch (_bank) {
                case 4: func_A22E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1E5:
            switch (_bank) {
                case 4: func_A1E5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1E7:
            switch (_bank) {
                case 4: func_A1E7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA231:
            switch (_bank) {
                case 4: func_A231_b4(); break;
                case 5: func_A231_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA24A:
            switch (_bank) {
                case 4: func_A24A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA257:
            switch (_bank) {
                case 4: func_A257_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA279:
            switch (_bank) {
                case 4: func_A279_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2AB:
            switch (_bank) {
                case 4: func_A2AB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2C4:
            switch (_bank) {
                case 4: func_A2C4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA316:
            switch (_bank) {
                case 4: func_A316_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA33E:
            switch (_bank) {
                case 4: func_A33E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3CC:
            switch (_bank) {
                case 4: func_A3CC_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3E1:
            switch (_bank) {
                case 4: func_A3E1_b4(); break;
                case 1: func_A3E1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3BA:
            switch (_bank) {
                case 4: func_A3BA_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA456:
            switch (_bank) {
                case 4: func_A456_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA407:
            switch (_bank) {
                case 4: func_A407_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA43B:
            switch (_bank) {
                case 4: func_A43B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA46E:
            switch (_bank) {
                case 4: func_A46E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA505:
            switch (_bank) {
                case 4: func_A505_b4(); break;
                case 5: func_A505_b5(); break;
                case 7: func_A505_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4A8:
            switch (_bank) {
                case 4: func_A4A8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4B6:
            switch (_bank) {
                case 4: func_A4B6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4EE:
            switch (_bank) {
                case 4: func_A4EE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA510:
            switch (_bank) {
                case 4: func_A510_b4(); break;
                case 5: func_A510_b5(); break;
                case 7: func_A510_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA589:
            switch (_bank) {
                case 4: func_A589_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA51E:
            switch (_bank) {
                case 4: func_A51E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA534:
            switch (_bank) {
                case 4: func_A534_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA548:
            switch (_bank) {
                case 4: func_A548_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA591:
            switch (_bank) {
                case 4: func_A591_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5A6:
            switch (_bank) {
                case 4: func_A5A6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5C2:
            switch (_bank) {
                case 4: func_A5C2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5E3:
            switch (_bank) {
                case 4: func_A5E3_b4(); break;
                case 5: func_A5E3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA60D:
            switch (_bank) {
                case 4: func_A60D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6DD:
            switch (_bank) {
                case 4: func_A6DD_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA71C:
            switch (_bank) {
                case 4: func_A71C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA737:
            switch (_bank) {
                case 4: func_A737_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA753:
            switch (_bank) {
                case 4: func_A753_b4(); break;
                case 5: func_A753_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7A9:
            switch (_bank) {
                case 4: func_A7A9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7E9:
            switch (_bank) {
                case 4: func_A7E9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA80D:
            switch (_bank) {
                case 4: func_A80D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA90A:
            switch (_bank) {
                case 7: func_E90A(); break;
                case 4: func_A90A_b4(); break;
                case 6: func_A90A_b6(); break;
                case 5: func_A90A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA829:
            switch (_bank) {
                case 4: func_A829_b4(); break;
                case 5: func_A829_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA83D:
            switch (_bank) {
                case 4: func_A83D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8B6:
            switch (_bank) {
                case 4: func_A8B6_b4(); break;
                case 5: func_A8B6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA859:
            switch (_bank) {
                case 4: func_A859_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA867:
            switch (_bank) {
                case 4: func_A867_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA89C:
            switch (_bank) {
                case 4: func_A89C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8FB:
            switch (_bank) {
                case 4: func_A8FB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9F4:
            switch (_bank) {
                case 6: func_B9F4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95F5:
            switch (_bank) {
                case 7: func_D5F5(); break;
                case 0: func_95F5_b0(); break;
                case 1: func_95F5_b1(); break;
                case 2: func_95F5_b2(); break;
                case 3: func_95F5_b3(); break;
                case 4: func_95F5_b4(); break;
                case 5: func_95F5_b5(); break;
                case 6: func_95F5_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5F5:
            switch (_bank) {
                case 7: func_F5F5(); break;
                case 0: func_B5F5_b0(); break;
                case 1: func_B5F5_b1(); break;
                case 2: func_B5F5_b2(); break;
                case 3: func_B5F5_b3(); break;
                case 4: func_B5F5_b4(); break;
                case 6: func_B5F5_b6(); break;
                case 5: func_B5F5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9447:
            switch (_bank) {
                case 4: func_9447_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94B4:
            switch (_bank) {
                case 4: func_94B4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95F1:
            switch (_bank) {
                case 4: func_95F1_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x965D:
            switch (_bank) {
                case 4: func_965D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95FE:
            switch (_bank) {
                case 4: func_95FE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x966F:
            switch (_bank) {
                case 4: func_966F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96C5:
            switch (_bank) {
                case 4: func_96C5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9893:
            switch (_bank) {
                case 4: func_9893_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98B0:
            switch (_bank) {
                case 4: func_98B0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x992F:
            switch (_bank) {
                case 4: func_992F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98DE:
            switch (_bank) {
                case 4: func_98DE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98F2:
            switch (_bank) {
                case 4: func_98F2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x996C:
            switch (_bank) {
                case 4: func_996C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99FD:
            switch (_bank) {
                case 4: func_99FD_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99A7:
            switch (_bank) {
                case 4: func_99A7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A45:
            switch (_bank) {
                case 4: func_9A45_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99F2:
            switch (_bank) {
                case 4: func_99F2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A05:
            switch (_bank) {
                case 4: func_9A05_b4(); break;
                case 1: func_9A05_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x943C:
            switch (_bank) {
                case 6: func_943C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D07:
            switch (_bank) {
                case 6: func_9D07_b6(); break;
                case 5: func_9D07_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E17:
            switch (_bank) {
                case 6: func_9E17_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA795:
            switch (_bank) {
                case 6: func_A795_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA015:
            switch (_bank) {
                case 6: func_A015_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA050:
            switch (_bank) {
                case 6: func_A050_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA055:
            switch (_bank) {
                case 6: func_A055_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0F1:
            switch (_bank) {
                case 6: func_A0F1_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA467:
            switch (_bank) {
                case 6: func_A467_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8676:
            switch (_bank) {
                case 6: func_8676_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA676:
            switch (_bank) {
                case 6: func_A676_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCB10:
            func_CB10(); break;
        case 0x8B10:
            switch (_bank) {
                case 7: func_CB10(); break;
                case 0: func_8B10_b0(); break;
                case 1: func_8B10_b1(); break;
                case 2: func_8B10_b2(); break;
                case 3: func_8B10_b3(); break;
                case 4: func_8B10_b4(); break;
                case 6: func_8B10_b6(); break;
                case 5: func_8B10_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB10:
            switch (_bank) {
                case 7: func_EB10(); break;
                case 0: func_AB10_b0(); break;
                case 1: func_AB10_b1(); break;
                case 2: func_AB10_b2(); break;
                case 3: func_AB10_b3(); break;
                case 4: func_AB10_b4(); break;
                case 5: func_AB10_b5(); break;
                case 6: func_AB10_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCB13:
            func_CB13(); break;
        case 0x8B13:
            switch (_bank) {
                case 7: func_CB13(); break;
                case 0: func_8B13_b0(); break;
                case 1: func_8B13_b1(); break;
                case 2: func_8B13_b2(); break;
                case 3: func_8B13_b3(); break;
                case 4: func_8B13_b4(); break;
                case 5: func_8B13_b5(); break;
                case 6: func_8B13_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB13:
            switch (_bank) {
                case 0: func_AB13_b0(); break;
                case 1: func_AB13_b1(); break;
                case 2: func_AB13_b2(); break;
                case 3: func_AB13_b3(); break;
                case 4: func_AB13_b4(); break;
                case 5: func_AB13_b5(); break;
                case 6: func_AB13_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80C3:
            switch (_bank) {
                case 6: func_80C3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80F1:
            switch (_bank) {
                case 6: func_80F1_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8082:
            switch (_bank) {
                case 6: func_8082_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA082:
            switch (_bank) {
                case 6: func_A082_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA091:
            switch (_bank) {
                case 6: func_A091_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD0F5:
            func_D0F5(); break;
        case 0xDDF6:
            func_DDF6(); break;
        case 0xE00C:
            func_E00C(); break;
        case 0xD0FF:
            func_D0FF(); break;
        case 0xE00A:
            func_E00A(); break;
        case 0xE110:
            func_E110(); break;
        case 0xE02A:
            func_E02A(); break;
        case 0xE000:
            func_E000(); break;
        case 0xE0C9:
            func_E0C9(); break;
        case 0xDEE9:
            func_DEE9(); break;
        case 0xDF01:
            func_DF01(); break;
        case 0xDF02:
            func_DF02(); break;
        case 0xE021:
            func_E021(); break;
        case 0xE0AA:
            func_E0AA(); break;
        case 0xDE72:
            func_DE72(); break;
        case 0xE11F:
            func_E11F(); break;
        case 0xDE8B:
            func_DE8B(); break;
        case 0xDF3E:
            func_DF3E(); break;
        case 0xE088:
            func_E088(); break;
        case 0xE121:
            func_E121(); break;
        case 0xE0C0:
            func_E0C0(); break;
        case 0xE0C1:
            func_E0C1(); break;
        case 0xE022:
            func_E022(); break;
        case 0xDE4C:
            func_DE4C(); break;
        case 0xDFBF:
            func_DFBF(); break;
        case 0xDFB5:
            func_DFB5(); break;
        case 0xDF95:
            func_DF95(); break;
        case 0xE04C:
            func_E04C(); break;
        case 0xE04D:
            func_E04D(); break;
        case 0xE180:
            func_E180(); break;
        case 0xE040:
            func_E040(); break;
        case 0xDE61:
            func_DE61(); break;
        case 0xDFD0:
            func_DFD0(); break;
        case 0xE095:
            func_E095(); break;
        case 0xE060:
            func_E060(); break;
        case 0xE0FF:
            func_E0FF(); break;
        case 0xE099:
            func_E099(); break;
        case 0xE0FC:
            func_E0FC(); break;
        case 0xE0ED:
            func_E0ED(); break;
        case 0xDED4:
            func_DED4(); break;
        case 0xDEDE:
            func_DEDE(); break;
        case 0xE009:
            func_E009(); break;
        case 0xE0E4:
            func_E0E4(); break;
        case 0xE0E5:
            func_E0E5(); break;
        case 0xE0F6:
            func_E0F6(); break;
        case 0xE0F7:
            func_E0F7(); break;
        case 0xE0D5:
            func_E0D5(); break;
        case 0xDEB1:
            func_DEB1(); break;
        case 0xE010:
            func_E010(); break;
        case 0xDF59:
            func_DF59(); break;
        case 0xDFE2:
            func_DFE2(); break;
        case 0xE012:
            func_E012(); break;
        case 0xE164:
            func_E164(); break;
        case 0xE0E1:
            func_E0E1(); break;
        case 0xDECB:
            func_DECB(); break;
        case 0xDE5A:
            func_DE5A(); break;
        case 0xDDDC:
            func_DDDC(); break;
        case 0xDFDD:
            func_DFDD(); break;
        case 0xE0DE:
            func_E0DE(); break;
        case 0xDDD8:
            func_DDD8(); break;
        case 0xDED8:
            func_DED8(); break;
        case 0xDEF5:
            func_DEF5(); break;
        case 0xDE65:
            func_DE65(); break;
        case 0xDFA3:
            func_DFA3(); break;
        case 0xE140:
            func_E140(); break;
        case 0xE003:
            func_E003(); break;
        case 0xE004:
            func_E004(); break;
        case 0xE034:
            func_E034(); break;
        case 0xDEB6:
            func_DEB6(); break;
        case 0xDFD4:
            func_DFD4(); break;
        case 0xDDDF:
            func_DDDF(); break;
        case 0xDDE2:
            func_DDE2(); break;
        case 0xDEE3:
            func_DEE3(); break;
        case 0xDFB3:
            func_DFB3(); break;
        case 0xDEDD:
            func_DEDD(); break;
        case 0xDFE1:
            func_DFE1(); break;
        case 0xDED2:
            func_DED2(); break;
        case 0xE103:
            func_E103(); break;
        case 0xDF89:
            func_DF89(); break;
        case 0xE184:
            func_E184(); break;
        case 0xE18F:
            func_E18F(); break;
        case 0xE08F:
            func_E08F(); break;
        case 0xDF13:
            func_DF13(); break;
        case 0xDF0E:
            func_DF0E(); break;
        case 0xDF16:
            func_DF16(); break;
        case 0xE0FD:
            func_E0FD(); break;
        case 0xDEFC:
            func_DEFC(); break;
        case 0xDFF5:
            func_DFF5(); break;
        case 0xDDFD:
            func_DDFD(); break;
        case 0xE028:
            func_E028(); break;
        case 0xDF10:
            func_DF10(); break;
        case 0xE006:
            func_E006(); break;
        case 0xE036:
            func_E036(); break;
        case 0xE188:
            func_E188(); break;
        case 0xE08A:
            func_E08A(); break;
        case 0xDF8E:
            func_DF8E(); break;
        case 0xDF88:
            func_DF88(); break;
        case 0xDF08:
            func_DF08(); break;
        case 0xDFEF:
            func_DFEF(); break;
        case 0xDDED:
            func_DDED(); break;
        case 0xDFA9:
            func_DFA9(); break;
        case 0xDE94:
            func_DE94(); break;
        case 0xDE9A:
            func_DE9A(); break;
        case 0xDE08:
            func_DE08(); break;
        case 0xDE03:
            func_DE03(); break;
        case 0xDE11:
            func_DE11(); break;
        case 0xDE0B:
            func_DE0B(); break;
        case 0xDEAB:
            func_DEAB(); break;
        case 0xDE06:
            func_DE06(); break;
        case 0xDEEC:
            func_DEEC(); break;
        case 0xE14C:
            func_E14C(); break;
        case 0xE02E:
            func_E02E(); break;
        case 0xE0D8:
            func_E0D8(); break;
        case 0xE054:
            func_E054(); break;
        case 0xE030:
            func_E030(); break;
        case 0xE065:
            func_E065(); break;
        case 0xDEFB:
            func_DEFB(); break;
        case 0xDFB8:
            func_DFB8(); break;
        case 0xDFB2:
            func_DFB2(); break;
        case 0xDF04:
            func_DF04(); break;
        case 0xE102:
            func_E102(); break;
        case 0xDDD9:
            func_DDD9(); break;
        case 0xDFD5:
            func_DFD5(); break;
        case 0xDDF8:
            func_DDF8(); break;
        case 0xDFF8:
            func_DFF8(); break;
        case 0xDF8F:
            func_DF8F(); break;
        case 0xE108:
            func_E108(); break;
        case 0xE062:
            func_E062(); break;
        case 0xD197:
            func_D197(); break;
        case 0xDEA8:
            func_DEA8(); break;
        case 0xC354:
            func_C354(); break;
        case 0xD9F0:
            func_D9F0(); break;
        case 0xC444:
            func_C444(); break;
        case 0x97E8:
            switch (_bank) {
                case 7: func_D7E8(); break;
                case 0: func_97E8_b0(); break;
                case 1: func_97E8_b1(); break;
                case 2: func_97E8_b2(); break;
                case 3: func_97E8_b3(); break;
                case 4: func_97E8_b4(); break;
                case 6: func_97E8_b6(); break;
                case 5: func_97E8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6F4:
            switch (_bank) {
                case 7: func_F6F4(); break;
                case 0: func_B6F4_b0(); break;
                case 1: func_B6F4_b1(); break;
                case 2: func_B6F4_b2(); break;
                case 3: func_B6F4_b3(); break;
                case 4: func_B6F4_b4(); break;
                case 5: func_B6F4_b5(); break;
                case 6: func_B6F4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB950:
            switch (_bank) {
                case 0: func_B950_b0(); break;
                case 1: func_B950_b1(); break;
                case 2: func_B950_b2(); break;
                case 3: func_B950_b3(); break;
                case 6: func_B950_b6(); break;
                case 5: func_B950_b5(); break;
                case 4: func_B950_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9930:
            switch (_bank) {
                case 5: func_9930_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9925:
            switch (_bank) {
                case 5: func_9925_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9842:
            switch (_bank) {
                case 7: func_D842(); break;
                case 0: func_9842_b0(); break;
                case 1: func_9842_b1(); break;
                case 2: func_9842_b2(); break;
                case 3: func_9842_b3(); break;
                case 4: func_9842_b4(); break;
                case 6: func_9842_b6(); break;
                case 5: func_9842_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB842:
            switch (_bank) {
                case 0: func_B842_b0(); break;
                case 1: func_B842_b1(); break;
                case 2: func_B842_b2(); break;
                case 3: func_B842_b3(); break;
                case 5: func_B842_b5(); break;
                case 6: func_B842_b6(); break;
                case 4: func_B842_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x881F:
            switch (_bank) {
                case 4: func_881F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA81F:
            switch (_bank) {
                case 4: func_A81F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5AB:
            switch (_bank) {
                case 4: func_B5AB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB875:
            switch (_bank) {
                case 4: func_B875_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB851:
            switch (_bank) {
                case 4: func_B851_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9A0:
            switch (_bank) {
                case 7: func_F9A0(); break;
                case 4: func_B9A0_b4(); break;
                case 5: func_B9A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB67:
            switch (_bank) {
                case 4: func_BB67_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBA7:
            switch (_bank) {
                case 4: func_BBA7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBD5:
            switch (_bank) {
                case 4: func_BBD5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9802:
            switch (_bank) {
                case 5: func_9802_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9803:
            switch (_bank) {
                case 5: func_9803_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9806:
            switch (_bank) {
                case 5: func_9806_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB791:
            switch (_bank) {
                case 5: func_B791_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9304:
            switch (_bank) {
                case 6: func_9304_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x930C:
            switch (_bank) {
                case 6: func_930C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2A2:
            switch (_bank) {
                case 6: func_B2A2_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2A8:
            switch (_bank) {
                case 6: func_B2A8_b6(); break;
                case 5: func_B2A8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB29E:
            switch (_bank) {
                case 6: func_B29E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2B6:
            switch (_bank) {
                case 6: func_B2B6_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2BC:
            switch (_bank) {
                case 6: func_B2BC_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2F5:
            switch (_bank) {
                case 6: func_B2F5_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFAD:
            switch (_bank) {
                case 0: func_BFAD_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF2E:
            switch (_bank) {
                case 0: func_BF2E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9649:
            switch (_bank) {
                case 1: func_9649_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x963B:
            switch (_bank) {
                case 1: func_963B_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9672:
            switch (_bank) {
                case 1: func_9672_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB420:
            switch (_bank) {
                case 1: func_B420_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9420:
            switch (_bank) {
                case 1: func_9420_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9717:
            switch (_bank) {
                case 1: func_9717_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9727:
            switch (_bank) {
                case 1: func_9727_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97D7:
            switch (_bank) {
                case 1: func_97D7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8602:
            switch (_bank) {
                case 1: func_8602_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x988E:
            switch (_bank) {
                case 1: func_988E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x993A:
            switch (_bank) {
                case 1: func_993A_b1(); break;
                case 5: func_993A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9942:
            switch (_bank) {
                case 1: func_9942_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99EA:
            switch (_bank) {
                case 1: func_99EA_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A13:
            switch (_bank) {
                case 1: func_9A13_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A78:
            switch (_bank) {
                case 1: func_9A78_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A8E:
            switch (_bank) {
                case 1: func_9A8E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A9D:
            switch (_bank) {
                case 1: func_9A9D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AB0:
            switch (_bank) {
                case 1: func_9AB0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA622:
            switch (_bank) {
                case 1: func_A622_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8622:
            switch (_bank) {
                case 1: func_8622_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B30:
            switch (_bank) {
                case 1: func_9B30_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE900:
            func_E900(); break;
        case 0x9BB4:
            switch (_bank) {
                case 1: func_9BB4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8030:
            switch (_bank) {
                case 1: func_8030_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C25:
            switch (_bank) {
                case 1: func_9C25_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C62:
            switch (_bank) {
                case 1: func_9C62_b1(); break;
                case 5: func_9C62_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C71:
            switch (_bank) {
                case 1: func_9C71_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9300:
            switch (_bank) {
                case 1: func_9300_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E7F:
            switch (_bank) {
                case 1: func_9E7F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE868:
            func_E868(); break;
        case 0xBCD9:
            switch (_bank) {
                case 3: func_BCD9_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCCC:
            switch (_bank) {
                case 3: func_BCCC_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDF9:
            switch (_bank) {
                case 3: func_BDF9_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x960A:
            switch (_bank) {
                case 4: func_960A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x961C:
            switch (_bank) {
                case 2: func_961C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x963A:
            switch (_bank) {
                case 2: func_963A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9658:
            switch (_bank) {
                case 2: func_9658_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BCA:
            switch (_bank) {
                case 6: func_8BCA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8437:
            switch (_bank) {
                case 4: func_8437_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9015:
            switch (_bank) {
                case 5: func_9015_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A5B:
            switch (_bank) {
                case 6: func_8A5B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A88:
            switch (_bank) {
                case 6: func_8A88_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A73:
            switch (_bank) {
                case 6: func_8A73_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB082:
            switch (_bank) {
                case 4: func_B082_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB158:
            switch (_bank) {
                case 4: func_B158_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB179:
            switch (_bank) {
                case 4: func_B179_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B6E:
            switch (_bank) {
                case 5: func_9B6E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C11:
            switch (_bank) {
                case 5: func_9C11_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C01:
            switch (_bank) {
                case 5: func_9C01_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BB9:
            switch (_bank) {
                case 5: func_9BB9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BCF:
            switch (_bank) {
                case 5: func_9BCF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F8B:
            switch (_bank) {
                case 5: func_8F8B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8FC2:
            switch (_bank) {
                case 5: func_8FC2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8FC9:
            switch (_bank) {
                case 7: func_CFC9(); break;
                case 5: func_8FC9_b5(); break;
                case 0: func_8FC9_b0(); break;
                case 1: func_8FC9_b1(); break;
                case 2: func_8FC9_b2(); break;
                case 3: func_8FC9_b3(); break;
                case 4: func_8FC9_b4(); break;
                case 6: func_8FC9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9014:
            switch (_bank) {
                case 5: func_9014_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFC13:
            func_FC13(); break;
        case 0xFC41:
            func_FC41(); break;
        case 0xFC74:
            func_FC74(); break;
        case 0xFC30:
            func_FC30(); break;
        case 0xFC39:
            func_FC39(); break;
        case 0xFC25:
            func_FC25(); break;
        case 0xFC37:
            func_FC37(); break;
        case 0xFC4D:
            func_FC4D(); break;
        case 0xFC55:
            func_FC55(); break;
        case 0xFC20:
            func_FC20(); break;
        case 0xFC18:
            func_FC18(); break;
        case 0xFC1C:
            func_FC1C(); break;
        case 0xFC3B:
            func_FC3B(); break;
        case 0xFC23:
            func_FC23(); break;
        case 0xA835:
            switch (_bank) {
                case 3: func_A835_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB75:
            switch (_bank) {
                case 3: func_AB75_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABAB:
            switch (_bank) {
                case 3: func_ABAB_b3(); break;
                case 5: func_ABAB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8895:
            switch (_bank) {
                case 6: func_8895_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA822:
            switch (_bank) {
                case 6: func_A822_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA803:
            switch (_bank) {
                case 6: func_A803_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFC1:
            switch (_bank) {
                case 5: func_AFC1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92B8:
            switch (_bank) {
                case 6: func_92B8_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92D0:
            switch (_bank) {
                case 7: func_D2D0(); break;
                case 6: func_92D0_b6(); break;
                case 5: func_92D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92D8:
            switch (_bank) {
                case 6: func_92D8_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92E0:
            switch (_bank) {
                case 6: func_92E0_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9402:
            switch (_bank) {
                case 6: func_9402_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x940A:
            switch (_bank) {
                case 6: func_940A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9412:
            switch (_bank) {
                case 6: func_9412_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84F2:
            switch (_bank) {
                case 5: func_84F2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85E1:
            switch (_bank) {
                case 6: func_85E1_b6(); break;
                case 0: func_85E1_b0(); break;
                case 1: func_85E1_b1(); break;
                case 2: func_85E1_b2(); break;
                case 3: func_85E1_b3(); break;
                case 4: func_85E1_b4(); break;
                case 5: func_85E1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE457:
            func_E457(); break;
        case 0x8390:
            switch (_bank) {
                case 6: func_8390_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA390:
            switch (_bank) {
                case 6: func_A390_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x837D:
            switch (_bank) {
                case 6: func_837D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA37D:
            switch (_bank) {
                case 6: func_A37D_b6(); break;
                case 5: func_A37D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8361:
            switch (_bank) {
                case 6: func_8361_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA361:
            switch (_bank) {
                case 6: func_A361_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83A8:
            switch (_bank) {
                case 6: func_83A8_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3A8:
            switch (_bank) {
                case 6: func_A3A8_b6(); break;
                case 5: func_A3A8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x828F:
            switch (_bank) {
                case 6: func_828F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA28F:
            switch (_bank) {
                case 6: func_A28F_b6(); break;
                case 5: func_A28F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3E0:
            switch (_bank) {
                case 6: func_A3E0_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x832F:
            switch (_bank) {
                case 6: func_832F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA32F:
            switch (_bank) {
                case 6: func_A32F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3CA:
            switch (_bank) {
                case 6: func_A3CA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83D9:
            switch (_bank) {
                case 6: func_83D9_b6(); break;
                case 4: func_83D9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3D9:
            switch (_bank) {
                case 6: func_A3D9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEEF1:
            func_EEF1(); break;
        case 0x85BE:
            switch (_bank) {
                case 6: func_85BE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5BE:
            switch (_bank) {
                case 6: func_A5BE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5EA:
            switch (_bank) {
                case 6: func_A5EA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA513:
            switch (_bank) {
                case 6: func_A513_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA58E:
            switch (_bank) {
                case 6: func_A58E_b6(); break;
                case 0: func_A58E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA596:
            switch (_bank) {
                case 6: func_A596_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5AB:
            switch (_bank) {
                case 6: func_A5AB_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B16:
            switch (_bank) {
                case 7: func_CB16(); break;
                case 0: func_8B16_b0(); break;
                case 1: func_8B16_b1(); break;
                case 2: func_8B16_b2(); break;
                case 3: func_8B16_b3(); break;
                case 4: func_8B16_b4(); break;
                case 6: func_8B16_b6(); break;
                case 5: func_8B16_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB16:
            switch (_bank) {
                case 0: func_AB16_b0(); break;
                case 1: func_AB16_b1(); break;
                case 2: func_AB16_b2(); break;
                case 3: func_AB16_b3(); break;
                case 4: func_AB16_b4(); break;
                case 5: func_AB16_b5(); break;
                case 6: func_AB16_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB18:
            switch (_bank) {
                case 5: func_AB18_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8607:
            switch (_bank) {
                case 6: func_8607_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA607:
            switch (_bank) {
                case 6: func_A607_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA609:
            switch (_bank) {
                case 6: func_A609_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA619:
            switch (_bank) {
                case 6: func_A619_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCB19:
            func_CB19(); break;
        case 0x8B19:
            switch (_bank) {
                case 7: func_CB19(); break;
                case 0: func_8B19_b0(); break;
                case 1: func_8B19_b1(); break;
                case 2: func_8B19_b2(); break;
                case 3: func_8B19_b3(); break;
                case 4: func_8B19_b4(); break;
                case 6: func_8B19_b6(); break;
                case 5: func_8B19_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB19:
            switch (_bank) {
                case 7: func_EB19(); break;
                case 0: func_AB19_b0(); break;
                case 1: func_AB19_b1(); break;
                case 2: func_AB19_b2(); break;
                case 3: func_AB19_b3(); break;
                case 4: func_AB19_b4(); break;
                case 5: func_AB19_b5(); break;
                case 6: func_AB19_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8609:
            switch (_bank) {
                case 6: func_8609_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8619:
            switch (_bank) {
                case 7: func_C619(); break;
                case 6: func_8619_b6(); break;
                case 4: func_8619_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA635:
            switch (_bank) {
                case 6: func_A635_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6A3:
            switch (_bank) {
                case 6: func_A6A3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA687:
            switch (_bank) {
                case 6: func_A687_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6C9:
            switch (_bank) {
                case 6: func_A6C9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8694:
            switch (_bank) {
                case 6: func_8694_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA694:
            switch (_bank) {
                case 6: func_A694_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA699:
            switch (_bank) {
                case 6: func_A699_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A5D:
            switch (_bank) {
                case 6: func_9A5D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCB1C:
            func_CB1C(); break;
        case 0x8B1C:
            switch (_bank) {
                case 7: func_CB1C(); break;
                case 0: func_8B1C_b0(); break;
                case 1: func_8B1C_b1(); break;
                case 2: func_8B1C_b2(); break;
                case 3: func_8B1C_b3(); break;
                case 4: func_8B1C_b4(); break;
                case 6: func_8B1C_b6(); break;
                case 5: func_8B1C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB1C:
            switch (_bank) {
                case 0: func_AB1C_b0(); break;
                case 1: func_AB1C_b1(); break;
                case 2: func_AB1C_b2(); break;
                case 3: func_AB1C_b3(); break;
                case 4: func_AB1C_b4(); break;
                case 5: func_AB1C_b5(); break;
                case 6: func_AB1C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB26:
            switch (_bank) {
                case 5: func_AB26_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x884E:
            switch (_bank) {
                case 6: func_884E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA84E:
            switch (_bank) {
                case 6: func_A84E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B8E:
            switch (_bank) {
                case 6: func_9B8E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA04:
            switch (_bank) {
                case 2: func_BA04_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFCA5:
            func_FCA5(); break;
        case 0xFBD9:
            func_FBD9(); break;
        case 0xFC0A:
            func_FC0A(); break;
        case 0xBB2C:
            switch (_bank) {
                case 5: func_BB2C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB4A:
            switch (_bank) {
                case 5: func_BB4A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF9F2:
            func_F9F2(); break;
        case 0xFA00:
            func_FA00(); break;
        case 0xFA10:
            func_FA10(); break;
        case 0xFA0C:
            func_FA0C(); break;
        case 0xF9F7:
            func_F9F7(); break;
        case 0xF9F8:
            func_F9F8(); break;
        case 0xF9FA:
            func_F9FA(); break;
        case 0xF9FB:
            func_F9FB(); break;
        case 0xFA08:
            func_FA08(); break;
        case 0xF9FE:
            func_F9FE(); break;
        case 0xF9F5:
            func_F9F5(); break;
        case 0xFA30:
            func_FA30(); break;
        case 0xFA0E:
            func_FA0E(); break;
        case 0xA0EF:
            switch (_bank) {
                case 3: func_A0EF_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA102:
            switch (_bank) {
                case 3: func_A102_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB869:
            switch (_bank) {
                case 3: func_B869_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7DD:
            switch (_bank) {
                case 3: func_B7DD_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC2CC:
            func_C2CC(); break;
        case 0x82E4:
            switch (_bank) {
                case 5: func_82E4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8302:
            switch (_bank) {
                case 5: func_8302_b5(); break;
                case 6: func_8302_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEC72:
            func_EC72(); break;
        case 0x9A97:
            switch (_bank) {
                case 5: func_9A97_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA97:
            switch (_bank) {
                case 5: func_BA97_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA9B:
            switch (_bank) {
                case 5: func_BA9B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AA4:
            switch (_bank) {
                case 5: func_9AA4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AA9:
            switch (_bank) {
                case 5: func_9AA9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAA4:
            switch (_bank) {
                case 5: func_BAA4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEB97:
            func_EB97(); break;
        case 0x85E5:
            switch (_bank) {
                case 3: func_85E5_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5D8:
            switch (_bank) {
                case 3: func_A5D8_b3(); break;
                case 7: func_A5D8_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA60E:
            switch (_bank) {
                case 3: func_A60E_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85D1:
            switch (_bank) {
                case 4: func_85D1_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86B3:
            switch (_bank) {
                case 5: func_86B3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8774:
            switch (_bank) {
                case 5: func_8774_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86C1:
            switch (_bank) {
                case 5: func_86C1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x870D:
            switch (_bank) {
                case 5: func_870D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A27:
            switch (_bank) {
                case 5: func_8A27_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C6D:
            switch (_bank) {
                case 5: func_8C6D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F19:
            switch (_bank) {
                case 5: func_8F19_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F29:
            switch (_bank) {
                case 5: func_8F29_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F30:
            switch (_bank) {
                case 5: func_8F30_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F4F:
            switch (_bank) {
                case 5: func_8F4F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x904E:
            switch (_bank) {
                case 5: func_904E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9051:
            switch (_bank) {
                case 5: func_9051_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9083:
            switch (_bank) {
                case 5: func_9083_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9095:
            switch (_bank) {
                case 5: func_9095_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9060:
            switch (_bank) {
                case 5: func_9060_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90C3:
            switch (_bank) {
                case 5: func_90C3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90C9:
            switch (_bank) {
                case 5: func_90C9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x910A:
            switch (_bank) {
                case 5: func_910A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x913C:
            switch (_bank) {
                case 5: func_913C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9159:
            switch (_bank) {
                case 5: func_9159_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x914C:
            switch (_bank) {
                case 5: func_914C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9143:
            switch (_bank) {
                case 5: func_9143_b5(); break;
                case 4: func_9143_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x911A:
            switch (_bank) {
                case 5: func_911A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x911F:
            switch (_bank) {
                case 5: func_911F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9131:
            switch (_bank) {
                case 5: func_9131_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x917D:
            switch (_bank) {
                case 5: func_917D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9213:
            switch (_bank) {
                case 5: func_9213_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x943A:
            switch (_bank) {
                case 5: func_943A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9460:
            switch (_bank) {
                case 5: func_9460_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9568:
            switch (_bank) {
                case 5: func_9568_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9594:
            switch (_bank) {
                case 5: func_9594_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97E1:
            switch (_bank) {
                case 5: func_97E1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9800:
            switch (_bank) {
                case 5: func_9800_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEC48:
            func_EC48(); break;
        case 0xEC51:
            func_EC51(); break;
        case 0x96A0:
            switch (_bank) {
                case 5: func_96A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9912:
            switch (_bank) {
                case 5: func_9912_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9918:
            switch (_bank) {
                case 5: func_9918_b5(); break;
                case 7: func_9918_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x994A:
            switch (_bank) {
                case 5: func_994A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA65A:
            switch (_bank) {
                case 5: func_A65A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA67F:
            switch (_bank) {
                case 5: func_A67F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA68B:
            switch (_bank) {
                case 5: func_A68B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x87F1:
            switch (_bank) {
                case 1: func_87F1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8811:
            switch (_bank) {
                case 1: func_8811_b1(); break;
                case 6: func_8811_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8841:
            switch (_bank) {
                case 1: func_8841_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x891F:
            switch (_bank) {
                case 1: func_891F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8ADF:
            switch (_bank) {
                case 1: func_8ADF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8AF1:
            switch (_bank) {
                case 1: func_8AF1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B11:
            switch (_bank) {
                case 1: func_8B11_b1(); break;
                case 4: func_8B11_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B3E:
            switch (_bank) {
                case 1: func_8B3E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B57:
            switch (_bank) {
                case 1: func_8B57_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BF2:
            switch (_bank) {
                case 1: func_8BF2_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFC9:
            switch (_bank) {
                case 0: func_AFC9_b0(); break;
                case 1: func_AFC9_b1(); break;
                case 2: func_AFC9_b2(); break;
                case 3: func_AFC9_b3(); break;
                case 4: func_AFC9_b4(); break;
                case 5: func_AFC9_b5(); break;
                case 6: func_AFC9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8FDF:
            switch (_bank) {
                case 1: func_8FDF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x907B:
            switch (_bank) {
                case 1: func_907B_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9150:
            switch (_bank) {
                case 1: func_9150_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91BE:
            switch (_bank) {
                case 1: func_91BE_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91A2:
            switch (_bank) {
                case 1: func_91A2_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x888E:
            switch (_bank) {
                case 1: func_888E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF19F:
            func_F19F(); break;
        case 0x9223:
            switch (_bank) {
                case 1: func_9223_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DF2:
            switch (_bank) {
                case 7: func_CDF2(); break;
                case 0: func_8DF2_b0(); break;
                case 1: func_8DF2_b1(); break;
                case 2: func_8DF2_b2(); break;
                case 3: func_8DF2_b3(); break;
                case 4: func_8DF2_b4(); break;
                case 6: func_8DF2_b6(); break;
                case 5: func_8DF2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADF2:
            switch (_bank) {
                case 0: func_ADF2_b0(); break;
                case 1: func_ADF2_b1(); break;
                case 2: func_ADF2_b2(); break;
                case 3: func_ADF2_b3(); break;
                case 4: func_ADF2_b4(); break;
                case 6: func_ADF2_b6(); break;
                case 5: func_ADF2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93ED:
            switch (_bank) {
                case 1: func_93ED_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94D2:
            switch (_bank) {
                case 1: func_94D2_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA73F:
            switch (_bank) {
                case 3: func_A73F_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x876D:
            switch (_bank) {
                case 5: func_876D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x876F:
            switch (_bank) {
                case 5: func_876F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8771:
            switch (_bank) {
                case 5: func_8771_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8775:
            switch (_bank) {
                case 5: func_8775_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8772:
            switch (_bank) {
                case 5: func_8772_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B66:
            switch (_bank) {
                case 6: func_8B66_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8703:
            switch (_bank) {
                case 3: func_8703_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA78A:
            switch (_bank) {
                case 3: func_A78A_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7FC:
            switch (_bank) {
                case 3: func_A7FC_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA82C:
            switch (_bank) {
                case 3: func_A82C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8F1:
            switch (_bank) {
                case 4: func_A8F1_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9B5:
            switch (_bank) {
                case 4: func_A9B5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA95C:
            switch (_bank) {
                case 4: func_A95C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA971:
            switch (_bank) {
                case 4: func_A971_b4(); break;
                case 5: func_A971_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9F9:
            switch (_bank) {
                case 4: func_A9F9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA05:
            switch (_bank) {
                case 7: func_EA05(); break;
                case 4: func_AA05_b4(); break;
                case 5: func_AA05_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA64:
            switch (_bank) {
                case 4: func_AA64_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA5C:
            switch (_bank) {
                case 4: func_AA5C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAAE4:
            switch (_bank) {
                case 4: func_AAE4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB76:
            switch (_bank) {
                case 4: func_AB76_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB37:
            switch (_bank) {
                case 4: func_AB37_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB65:
            switch (_bank) {
                case 4: func_AB65_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB9F:
            switch (_bank) {
                case 4: func_AB9F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABAD:
            switch (_bank) {
                case 4: func_ABAD_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC46:
            switch (_bank) {
                case 4: func_AC46_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABFC:
            switch (_bank) {
                case 7: func_EBFC(); break;
                case 4: func_ABFC_b4(); break;
                case 5: func_ABFC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC37:
            switch (_bank) {
                case 4: func_AC37_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC47:
            switch (_bank) {
                case 4: func_AC47_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC31:
            switch (_bank) {
                case 3: func_BC31_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CFA:
            switch (_bank) {
                case 6: func_8CFA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D02:
            switch (_bank) {
                case 6: func_8D02_b6(); break;
                case 7: func_8D02_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D00:
            switch (_bank) {
                case 6: func_8D00_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D07:
            switch (_bank) {
                case 6: func_8D07_b6(); break;
                case 3: func_8D07_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEB3:
            switch (_bank) {
                case 4: func_AEB3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAED1:
            switch (_bank) {
                case 7: func_EED1(); break;
                case 4: func_AED1_b4(); break;
                case 5: func_AED1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF0B:
            switch (_bank) {
                case 4: func_AF0B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8021:
            switch (_bank) {
                case 0: func_8021_b0(); break;
                case 1: func_8021_b1(); break;
                case 2: func_8021_b2(); break;
                case 3: func_8021_b3(); break;
                case 4: func_8021_b4(); break;
                case 5: func_8021_b5(); break;
                case 6: func_8021_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80BD:
            switch (_bank) {
                case 5: func_80BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80BB:
            switch (_bank) {
                case 5: func_80BB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80E9:
            switch (_bank) {
                case 5: func_80E9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80E7:
            switch (_bank) {
                case 5: func_80E7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80E5:
            switch (_bank) {
                case 5: func_80E5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB514:
            switch (_bank) {
                case 5: func_B514_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8707:
            switch (_bank) {
                case 6: func_8707_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81B5:
            switch (_bank) {
                case 6: func_81B5_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84CE:
            switch (_bank) {
                case 6: func_84CE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84EA:
            switch (_bank) {
                case 6: func_84EA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84EC:
            switch (_bank) {
                case 6: func_84EC_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8513:
            switch (_bank) {
                case 6: func_8513_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x854E:
            switch (_bank) {
                case 6: func_854E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8500:
            switch (_bank) {
                case 6: func_8500_b6(); break;
                case 0: func_8500_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x850B:
            switch (_bank) {
                case 6: func_850B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8522:
            switch (_bank) {
                case 6: func_8522_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8531:
            switch (_bank) {
                case 6: func_8531_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8515:
            switch (_bank) {
                case 6: func_8515_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8502:
            switch (_bank) {
                case 6: func_8502_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8520:
            switch (_bank) {
                case 6: func_8520_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x851E:
            switch (_bank) {
                case 6: func_851E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x854C:
            switch (_bank) {
                case 6: func_854C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8523:
            switch (_bank) {
                case 6: func_8523_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8506:
            switch (_bank) {
                case 6: func_8506_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8504:
            switch (_bank) {
                case 6: func_8504_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x850D:
            switch (_bank) {
                case 6: func_850D_b6(); break;
                case 5: func_850D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8538:
            switch (_bank) {
                case 6: func_8538_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8542:
            switch (_bank) {
                case 7: func_C542(); break;
                case 6: func_8542_b6(); break;
                case 4: func_8542_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8527:
            switch (_bank) {
                case 6: func_8527_b6(); break;
                case 5: func_8527_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8549:
            switch (_bank) {
                case 6: func_8549_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8501:
            switch (_bank) {
                case 7: func_C501(); break;
                case 6: func_8501_b6(); break;
                case 4: func_8501_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8536:
            switch (_bank) {
                case 6: func_8536_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8525:
            switch (_bank) {
                case 6: func_8525_b6(); break;
                case 5: func_8525_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8534:
            switch (_bank) {
                case 6: func_8534_b6(); break;
                case 4: func_8534_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8561:
            switch (_bank) {
                case 6: func_8561_b6(); break;
                case 5: func_8561_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86B9:
            switch (_bank) {
                case 6: func_86B9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86E3:
            switch (_bank) {
                case 6: func_86E3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8023:
            switch (_bank) {
                case 4: func_8023_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x871D:
            switch (_bank) {
                case 6: func_871D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9778:
            switch (_bank) {
                case 2: func_9778_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9794:
            switch (_bank) {
                case 4: func_9794_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EFC:
            switch (_bank) {
                case 0: func_9EFC_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC34:
            switch (_bank) {
                case 1: func_BC34_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC38:
            switch (_bank) {
                case 1: func_BC38_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC46:
            switch (_bank) {
                case 1: func_BC46_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC5A:
            switch (_bank) {
                case 1: func_BC5A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC76:
            switch (_bank) {
                case 1: func_BC76_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC41:
            switch (_bank) {
                case 7: func_FC41(); break;
                case 1: func_BC41_b1(); break;
                case 6: func_BC41_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC97:
            switch (_bank) {
                case 1: func_BC97_b1(); break;
                case 5: func_BC97_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD54:
            switch (_bank) {
                case 1: func_BD54_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD66:
            switch (_bank) {
                case 1: func_BD66_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD77:
            switch (_bank) {
                case 1: func_BD77_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD97:
            switch (_bank) {
                case 1: func_BD97_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDF0:
            switch (_bank) {
                case 1: func_BDF0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C22:
            switch (_bank) {
                case 0: func_9C22_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C5B:
            switch (_bank) {
                case 0: func_9C5B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CB7:
            switch (_bank) {
                case 0: func_9CB7_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D35:
            switch (_bank) {
                case 0: func_9D35_b0(); break;
                case 5: func_9D35_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D52:
            switch (_bank) {
                case 0: func_9D52_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E46:
            switch (_bank) {
                case 0: func_9E46_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E5C:
            switch (_bank) {
                case 0: func_9E5C_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EE4:
            switch (_bank) {
                case 0: func_9EE4_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F52:
            switch (_bank) {
                case 0: func_9F52_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F2B:
            switch (_bank) {
                case 0: func_9F2B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8288:
            switch (_bank) {
                case 0: func_8288_b0(); break;
                case 4: func_8288_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F5D:
            switch (_bank) {
                case 0: func_9F5D_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9FB1:
            switch (_bank) {
                case 0: func_9FB1_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA002:
            switch (_bank) {
                case 7: func_E002(); break;
                case 0: func_A002_b0(); break;
                case 5: func_A002_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA18E:
            switch (_bank) {
                case 0: func_A18E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA20E:
            switch (_bank) {
                case 0: func_A20E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA28E:
            switch (_bank) {
                case 0: func_A28E_b0(); break;
                case 5: func_A28E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA38E:
            switch (_bank) {
                case 0: func_A38E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3C9:
            switch (_bank) {
                case 0: func_A3C9_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA419:
            switch (_bank) {
                case 0: func_A419_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA40E:
            switch (_bank) {
                case 0: func_A40E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA469:
            switch (_bank) {
                case 0: func_A469_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA48E:
            switch (_bank) {
                case 0: func_A48E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA51A:
            switch (_bank) {
                case 0: func_A51A_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA56A:
            switch (_bank) {
                case 0: func_A56A_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA68E:
            switch (_bank) {
                case 0: func_A68E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA78E:
            switch (_bank) {
                case 0: func_A78E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA88E:
            switch (_bank) {
                case 0: func_A88E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA919:
            switch (_bank) {
                case 0: func_A919_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA90E:
            switch (_bank) {
                case 0: func_A90E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA96A:
            switch (_bank) {
                case 0: func_A96A_b0(); break;
                case 5: func_A96A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA98E:
            switch (_bank) {
                case 0: func_A98E_b0(); break;
                case 5: func_A98E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C1B:
            switch (_bank) {
                case 5: func_9C1B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C1D:
            switch (_bank) {
                case 5: func_9C1D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98AF:
            switch (_bank) {
                case 5: func_98AF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8AF:
            switch (_bank) {
                case 5: func_B8AF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5E1:
            switch (_bank) {
                case 1: func_A5E1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA23D:
            switch (_bank) {
                case 4: func_A23D_b4(); break;
                case 6: func_A23D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4BC:
            switch (_bank) {
                case 4: func_A4BC_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4F4:
            switch (_bank) {
                case 4: func_A4F4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA526:
            switch (_bank) {
                case 4: func_A526_b4(); break;
                case 7: func_A526_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA53A:
            switch (_bank) {
                case 4: func_A53A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA741:
            switch (_bank) {
                case 4: func_A741_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7F1:
            switch (_bank) {
                case 4: func_A7F1_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA813:
            switch (_bank) {
                case 4: func_A813_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA82F:
            switch (_bank) {
                case 4: func_A82F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8A6:
            switch (_bank) {
                case 4: func_A8A6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA93A:
            switch (_bank) {
                case 4: func_A93A_b4(); break;
                case 5: func_A93A_b5(); break;
                case 6: func_A93A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9D5:
            switch (_bank) {
                case 6: func_B9D5_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8049:
            switch (_bank) {
                case 5: func_8049_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C29:
            switch (_bank) {
                case 6: func_8C29_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98DC:
            switch (_bank) {
                case 4: func_98DC_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A4F:
            switch (_bank) {
                case 4: func_9A4F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8227:
            switch (_bank) {
                case 6: func_8227_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEDB2:
            func_EDB2(); break;
        case 0x95B3:
            switch (_bank) {
                case 1: func_95B3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x964D:
            switch (_bank) {
                case 1: func_964D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB36:
            switch (_bank) {
                case 5: func_AB36_b5(); break;
                case 1: func_AB36_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB4A:
            switch (_bank) {
                case 5: func_AB4A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB11:
            switch (_bank) {
                case 5: func_AB11_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EAA:
            switch (_bank) {
                case 5: func_9EAA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC32A:
            func_C32A(); break;
        case 0x9A4C:
            switch (_bank) {
                case 5: func_9A4C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A81:
            switch (_bank) {
                case 5: func_9A81_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A69:
            switch (_bank) {
                case 5: func_9A69_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9CE:
            switch (_bank) {
                case 5: func_B9CE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9FE:
            switch (_bank) {
                case 5: func_B9FE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9FD:
            switch (_bank) {
                case 5: func_B9FD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9D0:
            switch (_bank) {
                case 5: func_B9D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9E9:
            switch (_bank) {
                case 5: func_B9E9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9676:
            switch (_bank) {
                case 2: func_9676_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97D8:
            switch (_bank) {
                case 4: func_97D8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97E5:
            switch (_bank) {
                case 6: func_97E5_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7E0:
            switch (_bank) {
                case 6: func_B7E0_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9686:
            switch (_bank) {
                case 1: func_9686_b1(); break;
                case 5: func_9686_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96F1:
            switch (_bank) {
                case 2: func_96F1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9E4:
            switch (_bank) {
                case 1: func_A9E4_b1(); break;
                case 5: func_A9E4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98FE:
            switch (_bank) {
                case 2: func_98FE_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8B3:
            switch (_bank) {
                case 3: func_B8B3_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE4BF:
            func_E4BF(); break;
        case 0xB94C:
            switch (_bank) {
                case 4: func_B94C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9851:
            switch (_bank) {
                case 5: func_9851_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x988B:
            switch (_bank) {
                case 5: func_988B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x988D:
            switch (_bank) {
                case 5: func_988D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x973A:
            switch (_bank) {
                case 1: func_973A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96ED:
            switch (_bank) {
                case 1: func_96ED_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8AAA:
            switch (_bank) {
                case 6: func_8AAA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8AE6:
            switch (_bank) {
                case 6: func_8AE6_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEEF3:
            func_EEF3(); break;
        case 0xEDC0:
            func_EDC0(); break;
        case 0xEDD0:
            func_EDD0(); break;
        case 0xEDCD:
            func_EDCD(); break;
        case 0xEDEF:
            func_EDEF(); break;
        case 0xEDED:
            func_EDED(); break;
        case 0xEDEA:
            func_EDEA(); break;
        case 0xEDE1:
            func_EDE1(); break;
        case 0xEDDD:
            func_EDDD(); break;
        case 0x858A:
            switch (_bank) {
                case 6: func_858A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8567:
            switch (_bank) {
                case 6: func_8567_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8583:
            switch (_bank) {
                case 6: func_8583_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8575:
            switch (_bank) {
                case 6: func_8575_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8590:
            switch (_bank) {
                case 6: func_8590_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8588:
            switch (_bank) {
                case 6: func_8588_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85FF:
            switch (_bank) {
                case 6: func_85FF_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x857F:
            switch (_bank) {
                case 6: func_857F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85E0:
            switch (_bank) {
                case 7: func_C5E0(); break;
                case 6: func_85E0_b6(); break;
                case 5: func_85E0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8601:
            switch (_bank) {
                case 6: func_8601_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85A0:
            switch (_bank) {
                case 6: func_85A0_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85CB:
            switch (_bank) {
                case 6: func_85CB_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85AE:
            switch (_bank) {
                case 6: func_85AE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA944:
            switch (_bank) {
                case 6: func_A944_b6(); break;
                case 5: func_A944_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8873:
            switch (_bank) {
                case 6: func_8873_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8888:
            switch (_bank) {
                case 6: func_8888_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD8B:
            switch (_bank) {
                case 2: func_BD8B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD8E:
            switch (_bank) {
                case 2: func_BD8E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD94:
            switch (_bank) {
                case 2: func_BD94_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC300:
            func_C300(); break;
        case 0x8300:
            switch (_bank) {
                case 7: func_C300(); break;
                case 0: func_8300_b0(); break;
                case 1: func_8300_b1(); break;
                case 2: func_8300_b2(); break;
                case 3: func_8300_b3(); break;
                case 4: func_8300_b4(); break;
                case 6: func_8300_b6(); break;
                case 5: func_8300_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA300:
            switch (_bank) {
                case 0: func_A300_b0(); break;
                case 1: func_A300_b1(); break;
                case 2: func_A300_b2(); break;
                case 3: func_A300_b3(); break;
                case 4: func_A300_b4(); break;
                case 5: func_A300_b5(); break;
                case 6: func_A300_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFAC8:
            func_FAC8(); break;
        case 0xFAD0:
            func_FAD0(); break;
        case 0xFAD5:
            func_FAD5(); break;
        case 0xFAD2:
            func_FAD2(); break;
        case 0xFAE1:
            func_FAE1(); break;
        case 0xA0AB:
            switch (_bank) {
                case 3: func_A0AB_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x827E:
            switch (_bank) {
                case 5: func_827E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x829C:
            switch (_bank) {
                case 5: func_829C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82B0:
            switch (_bank) {
                case 5: func_82B0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AB5:
            switch (_bank) {
                case 5: func_9AB5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AB9:
            switch (_bank) {
                case 5: func_9AB9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAB5:
            switch (_bank) {
                case 5: func_BAB5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5FB:
            switch (_bank) {
                case 3: func_A5FB_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5FE:
            switch (_bank) {
                case 3: func_A5FE_b3(); break;
                case 5: func_A5FE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5D0:
            switch (_bank) {
                case 7: func_E5D0(); break;
                case 3: func_A5D0_b3(); break;
                case 5: func_A5D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9734:
            switch (_bank) {
                case 5: func_9734_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x974C:
            switch (_bank) {
                case 5: func_974C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9760:
            switch (_bank) {
                case 5: func_9760_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97A8:
            switch (_bank) {
                case 5: func_97A8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97AE:
            switch (_bank) {
                case 5: func_97AE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F18:
            switch (_bank) {
                case 5: func_8F18_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F88:
            switch (_bank) {
                case 1: func_8F88_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9171:
            switch (_bank) {
                case 1: func_9171_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE2D:
            switch (_bank) {
                case 2: func_AE2D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB3F:
            switch (_bank) {
                case 4: func_AB3F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB6D:
            switch (_bank) {
                case 4: func_AB6D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC45:
            switch (_bank) {
                case 3: func_BC45_b3(); break;
                case 5: func_BC45_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEC5:
            switch (_bank) {
                case 4: func_AEC5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEE3:
            switch (_bank) {
                case 4: func_AEE3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x801D:
            switch (_bank) {
                case 3: func_801D_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x89BF:
            switch (_bank) {
                case 6: func_89BF_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x89A4:
            switch (_bank) {
                case 6: func_89A4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x824E:
            switch (_bank) {
                case 6: func_824E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x821F:
            switch (_bank) {
                case 6: func_821F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8261:
            switch (_bank) {
                case 6: func_8261_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC20:
            switch (_bank) {
                case 1: func_BC20_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82BC:
            switch (_bank) {
                case 0: func_82BC_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x89B6:
            switch (_bank) {
                case 0: func_89B6_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x89F6:
            switch (_bank) {
                case 0: func_89F6_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A36:
            switch (_bank) {
                case 0: func_8A36_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A76:
            switch (_bank) {
                case 0: func_8A76_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C9B:
            switch (_bank) {
                case 0: func_8C9B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA19:
            switch (_bank) {
                case 0: func_AA19_b0(); break;
                case 5: func_AA19_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA0E:
            switch (_bank) {
                case 0: func_AA0E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA8E:
            switch (_bank) {
                case 0: func_AA8E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB0E:
            switch (_bank) {
                case 0: func_AB0E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB8E:
            switch (_bank) {
                case 0: func_AB8E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC19:
            switch (_bank) {
                case 0: func_AC19_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC0E:
            switch (_bank) {
                case 0: func_AC0E_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7C8:
            switch (_bank) {
                case 0: func_A7C8_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4C4:
            switch (_bank) {
                case 4: func_A4C4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4FC:
            switch (_bank) {
                case 4: func_A4FC_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7F7:
            switch (_bank) {
                case 4: func_A7F7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA81B:
            switch (_bank) {
                case 4: func_A81B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9B6:
            switch (_bank) {
                case 6: func_B9B6_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A5B:
            switch (_bank) {
                case 4: func_9A5B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8292:
            switch (_bank) {
                case 6: func_8292_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEBE0:
            func_EBE0(); break;
        case 0xBE60:
            switch (_bank) {
                case 6: func_BE60_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96D3:
            switch (_bank) {
                case 2: func_96D3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEB4A:
            func_EB4A(); break;
        case 0xBD2E:
            switch (_bank) {
                case 2: func_BD2E_b2(); break;
                case 5: func_BD2E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8038:
            switch (_bank) {
                case 4: func_8038_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x825E:
            switch (_bank) {
                case 5: func_825E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8264:
            switch (_bank) {
                case 5: func_8264_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xED51:
            func_ED51(); break;
        case 0xAED7:
            switch (_bank) {
                case 4: func_AED7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAED9:
            switch (_bank) {
                case 4: func_AED9_b4(); break;
                case 5: func_AED9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8289:
            switch (_bank) {
                case 6: func_8289_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81B7:
            switch (_bank) {
                case 6: func_81B7_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x879E:
            switch (_bank) {
                case 6: func_879E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4CA:
            switch (_bank) {
                case 4: func_A4CA_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7FF:
            switch (_bank) {
                case 4: func_A7FF_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A61:
            switch (_bank) {
                case 4: func_9A61_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81F6:
            switch (_bank) {
                case 5: func_81F6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEE9:
            switch (_bank) {
                case 4: func_AEE9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4D2:
            switch (_bank) {
                case 4: func_A4D2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A86:
            switch (_bank) {
                case 4: func_9A86_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8180:
            switch (_bank) {
                case 5: func_8180_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81A4:
            switch (_bank) {
                case 5: func_81A4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8206:
            switch (_bank) {
                case 5: func_8206_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8282:
            switch (_bank) {
                case 5: func_8282_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8200:
            switch (_bank) {
                case 5: func_8200_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81BC:
            switch (_bank) {
                case 5: func_81BC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4D8:
            switch (_bank) {
                case 4: func_A4D8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8146:
            switch (_bank) {
                case 5: func_8146_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8174:
            switch (_bank) {
                case 5: func_8174_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF0FF:
            func_F0FF(); break;
        case 0xF100:
            func_F100(); break;
        case 0xF001:
            func_F001(); break;
        case 0xF060:
            func_F060(); break;
        case 0xF0F0:
            func_F0F0(); break;
        case 0xF0F1:
            func_F0F1(); break;
        case 0xF00F:
            func_F00F(); break;
        case 0xF5FF:
            func_F5FF(); break;
        case 0xF7FF:
            func_F7FF(); break;
        case 0xF750:
            func_F750(); break;
        case 0xF0F7:
            func_F0F7(); break;
        case 0xF0F8:
            func_F0F8(); break;
        case 0xF5AB:
            func_F5AB(); break;
        case 0xF5AC:
            func_F5AC(); break;
        case 0xFA7F:
            func_FA7F(); break;
        case 0xFA80:
            func_FA80(); break;
        case 0xF758:
            func_F758(); break;
        case 0xFA5B:
            func_FA5B(); break;
        case 0xFA5C:
            func_FA5C(); break;
        case 0xF460:
            func_F460(); break;
        case 0xF4F4:
            func_F4F4(); break;
        case 0xF4F5:
            func_F4F5(); break;
        case 0xF575:
            func_F575(); break;
        case 0xF500:
            func_F500(); break;
        case 0xF501:
            func_F501(); break;
        case 0xF900:
            func_F900(); break;
        case 0xF0AF:
            func_F0AF(); break;
        case 0xF0B0:
            func_F0B0(); break;
        case 0xF0BB:
            func_F0BB(); break;
        case 0xF0BC:
            func_F0BC(); break;
        case 0xF04F:
            func_F04F(); break;
        case 0xF050:
            func_F050(); break;
        case 0xF400:
            func_F400(); break;
        case 0xF401:
            func_F401(); break;
        case 0xF440:
            func_F440(); break;
        case 0xF4FF:
            func_F4FF(); break;
        case 0xF00A:
            func_F00A(); break;
        case 0xF4F0:
            func_F4F0(); break;
        case 0xF58F:
            func_F58F(); break;
        case 0xF007:
            func_F007(); break;
        case 0xF0A4:
            func_F0A4(); break;
        case 0xF0A5:
            func_F0A5(); break;
        case 0xF0BF:
            func_F0BF(); break;
        case 0xF0C0:
            func_F0C0(); break;
        case 0xF508:
            func_F508(); break;
        case 0xF509:
            func_F509(); break;
        case 0xF5F6:
            func_F5F6(); break;
        case 0xF50A:
            func_F50A(); break;
        case 0xF50B:
            func_F50B(); break;
        case 0xF510:
            func_F510(); break;
        case 0xFAAF:
            func_FAAF(); break;
        case 0xF70A:
            func_F70A(); break;
        case 0xF40F:
            func_F40F(); break;
        case 0xF410:
            func_F410(); break;
        case 0xF85A:
            func_F85A(); break;
        case 0xFA81:
            func_FA81(); break;
        case 0xF80B:
            func_F80B(); break;
        case 0xF546:
            func_F546(); break;
        case 0xF570:
            func_F570(); break;
        case 0xF84F:
            func_F84F(); break;
        case 0xF0F9:
            func_F0F9(); break;
        case 0xF556:
            func_F556(); break;
        case 0xFA0F:
            func_FA0F(); break;
        case 0xFBB6:
            func_FBB6(); break;
        case 0xF480:
            func_F480(); break;
        case 0xFBF0:
            func_FBF0(); break;
        case 0xFBF1:
            func_FBF1(); break;
        case 0xFB71:
            func_FB71(); break;
        case 0xF7F4:
            func_F7F4(); break;
        case 0xF40A:
            func_F40A(); break;
        case 0xF40B:
            func_F40B(); break;
        case 0xF05B:
            func_F05B(); break;
        case 0xF44F:
            func_F44F(); break;
        case 0xF450:
            func_F450(); break;
        case 0xF504:
            func_F504(); break;
        case 0xF505:
            func_F505(); break;
        case 0xF0F5:
            func_F0F5(); break;
        case 0xF0F6:
            func_F0F6(); break;
        case 0xFB8C:
            func_FB8C(); break;
        case 0xF88F:
            func_F88F(); break;
        case 0xF740:
            func_F740(); break;
        case 0xF742:
            func_F742(); break;
        case 0xF74F:
            func_F74F(); break;
        case 0xF760:
            func_F760(); break;
        case 0xF757:
            func_F757(); break;
        case 0xF751:
            func_F751(); break;
        case 0xF74A:
            func_F74A(); break;
        case 0xF0A6:
            func_F0A6(); break;
        case 0xF408:
            func_F408(); break;
        case 0xF409:
            func_F409(); break;
        case 0xF47A:
            func_F47A(); break;
        case 0xF47B:
            func_F47B(); break;
        case 0xF478:
            func_F478(); break;
        case 0xFA7C:
            func_FA7C(); break;
        case 0xF55A:
            func_F55A(); break;
        case 0xF5F0:
            func_F5F0(); break;
        case 0xF7AA:
            func_F7AA(); break;
        case 0xF5A8:
            func_F5A8(); break;
        case 0xF44B:
            func_F44B(); break;
        case 0xF44C:
            func_F44C(); break;
        case 0xF48C:
            func_F48C(); break;
        case 0xF0AA:
            func_F0AA(); break;
        case 0xF0AB:
            func_F0AB(); break;
        case 0xF0B1:
            func_F0B1(); break;
        case 0xF4A1:
            func_F4A1(); break;
        case 0xF004:
            func_F004(); break;
        case 0xF801:
            func_F801(); break;
        case 0xF7F8:
            func_F7F8(); break;
        case 0xF4B0:
            func_F4B0(); break;
        case 0xF0A1:
            func_F0A1(); break;
        case 0xF056:
            func_F056(); break;
        case 0xF0F4:
            func_F0F4(); break;
        case 0xF471:
            func_F471(); break;
        case 0xF041:
            func_F041(); break;
        case 0xDDAF:
            func_DDAF(); break;
        case 0xF7FB:
            func_F7FB(); break;
        case 0xDD80:
            func_DD80(); break;
        case 0xDD9A:
            func_DD9A(); break;
        case 0xF4DD:
            func_F4DD(); break;
        case 0xF4DE:
            func_F4DE(); break;
        case 0xF5BF:
            func_F5BF(); break;
        case 0xDDF5:
            func_DDF5(); break;
        case 0xDE18:
            func_DE18(); break;
        case 0xF4FE:
            func_F4FE(); break;
        case 0xF0FA:
            func_F0FA(); break;
        case 0xF0FB:
            func_F0FB(); break;
        case 0xF57C:
            func_F57C(); break;
        case 0xFA8F:
            func_FA8F(); break;
        case 0xFE4F:
            func_FE4F(); break;
        case 0xF551:
            func_F551(); break;
        case 0xF8A8:
            func_F8A8(); break;
        case 0xF0B7:
            func_F0B7(); break;
        case 0xF0B8:
            func_F0B8(); break;
        case 0xF856:
            func_F856(); break;
        case 0xF4F8:
            func_F4F8(); break;
        case 0xF4F9:
            func_F4F9(); break;
        case 0xF457:
            func_F457(); break;
        case 0xF459:
            func_F459(); break;
        case 0xF45F:
            func_F45F(); break;
        case 0xF481:
            func_F481(); break;
        case 0xF477:
            func_F477(); break;
        case 0xF48B:
            func_F48B(); break;
        case 0xF4A0:
            func_F4A0(); break;
        case 0xF4B1:
            func_F4B1(); break;
        case 0xF470:
            func_F470(); break;
        case 0xF4AB:
            func_F4AB(); break;
        case 0xF475:
            func_F475(); break;
        case 0xF4A9:
            func_F4A9(); break;
        case 0xF4BE:
            func_F4BE(); break;
        case 0xF4C1:
            func_F4C1(); break;
        case 0xF4AD:
            func_F4AD(); break;
        case 0xF497:
            func_F497(); break;
        case 0xF495:
            func_F495(); break;
        case 0xF486:
            func_F486(); break;
        case 0xF498:
            func_F498(); break;
        case 0xF489:
            func_F489(); break;
        case 0xF48E:
            func_F48E(); break;
        case 0xF48F:
            func_F48F(); break;
        case 0xF491:
            func_F491(); break;
        case 0xF493:
            func_F493(); break;
        case 0xF496:
            func_F496(); break;
        case 0xF49A:
            func_F49A(); break;
        case 0xF49C:
            func_F49C(); break;
        case 0xF49E:
            func_F49E(); break;
        case 0xF4A2:
            func_F4A2(); break;
        case 0xF4A4:
            func_F4A4(); break;
        case 0xF4A8:
            func_F4A8(); break;
        case 0xF4B3:
            func_F4B3(); break;
        case 0xF4B6:
            func_F4B6(); break;
        case 0xF483:
            func_F483(); break;
        case 0xF458:
            func_F458(); break;
        case 0xF0B5:
            func_F0B5(); break;
        case 0xF0B6:
            func_F0B6(); break;
        case 0xF54B:
            func_F54B(); break;
        case 0xF0AC:
            func_F0AC(); break;
        case 0xF0BA:
            func_F0BA(); break;
        case 0xF4AA:
            func_F4AA(); break;
        case 0xF474:
            func_F474(); break;
        case 0xF574:
            func_F574(); break;
        case 0xD04D:
            func_D04D(); break;
        case 0xD3D1:
            func_D3D1(); break;
        case 0xD378:
            func_D378(); break;
        case 0xD385:
            func_D385(); break;
        case 0xD370:
            func_D370(); break;
        case 0xD5E6:
            func_D5E6(); break;
        case 0xD77D:
            func_D77D(); break;
        case 0xC901:
            func_C901(); break;
        case 0xCF73:
            func_CF73(); break;
        case 0xF321:
            func_F321(); break;
        case 0xCFF4:
            func_CFF4(); break;
        case 0xC5C0:
            func_C5C0(); break;
        case 0xE420:
            func_E420(); break;
        case 0xCD31:
            func_CD31(); break;
        case 0xD6B9:
            func_D6B9(); break;
        case 0xD1D6:
            func_D1D6(); break;
        case 0xD1D7:
            func_D1D7(); break;
        case 0xD5B9:
            func_D5B9(); break;
        case 0xD7B9:
            func_D7B9(); break;
        case 0xD7BA:
            func_D7BA(); break;
        case 0xCC72:
            func_CC72(); break;
        case 0xE00B:
            func_E00B(); break;
        case 0xC90D:
            func_C90D(); break;
        case 0xD003:
            func_D003(); break;
        case 0xD004:
            func_D004(); break;
        case 0xC510:
            func_C510(); break;
        case 0xF00E:
            func_F00E(); break;
        case 0xE60B:
            func_E60B(); break;
        case 0xE60C:
            func_E60C(); break;
        case 0xC90A:
            func_C90A(); break;
        case 0xCA12:
            func_CA12(); break;
        case 0xE111:
            func_E111(); break;
        case 0xEAF0:
            func_EAF0(); break;
        case 0xE690:
            func_E690(); break;
        case 0xE691:
            func_E691(); break;
        case 0xD0AD:
            func_D0AD(); break;
        case 0xD0AC:
            func_D0AC(); break;
        case 0xD0AF:
            func_D0AF(); break;
        case 0xE9D0:
            func_E9D0(); break;
        case 0xE9D1:
            func_E9D1(); break;
        case 0xD101:
            func_D101(); break;
        case 0xCE6E:
            func_CE6E(); break;
        case 0xD17E:
            func_D17E(); break;
        case 0xD17C:
            func_D17C(); break;
        case 0xDDD1:
            func_DDD1(); break;
        case 0xDDD2:
            func_DDD2(); break;
        case 0xD198:
            func_D198(); break;
        case 0xCACD:
            func_CACD(); break;
        case 0xE90A:
            func_E90A(); break;
        case 0xE90B:
            func_E90B(); break;
        case 0xC603:
            func_C603(); break;
        case 0xE029:
            func_E029(); break;
        case 0xF904:
            func_F904(); break;
        case 0xFA31:
            func_FA31(); break;
        case 0xC9C8:
            func_C9C8(); break;
        case 0xC9ED:
            func_C9ED(); break;
        case 0xC9EB:
            func_C9EB(); break;
        case 0xCD60:
            func_CD60(); break;
        case 0xD3BE:
            func_D3BE(); break;
        case 0xDDBE:
            func_DDBE(); break;
        case 0xCDDD:
            func_CDDD(); break;
        case 0xCDFF:
            func_CDFF(); break;
        case 0xCD94:
            func_CD94(); break;
        case 0xCE11:
            func_CE11(); break;
        case 0xCE4C:
            func_CE4C(); break;
        case 0xCE79:
            func_CE79(); break;
        case 0xCE8D:
            func_CE8D(); break;
        case 0xCE9D:
            func_CE9D(); break;
        case 0xCEAD:
            func_CEAD(); break;
        case 0xCEB1:
            func_CEB1(); break;
        case 0xCF26:
            func_CF26(); break;
        case 0xCEBF:
            func_CEBF(); break;
        case 0xC6CE:
            func_C6CE(); break;
        case 0xCEC7:
            func_CEC7(); break;
        case 0xCECF:
            func_CECF(); break;
        case 0xD7CE:
            func_D7CE(); break;
        case 0xD7CF:
            func_D7CF(); break;
        case 0xCED8:
            func_CED8(); break;
        case 0xEACF:
            func_EACF(); break;
        case 0xCEEB:
            func_CEEB(); break;
        case 0xF0CD:
            func_F0CD(); break;
        case 0xF0CF:
            func_F0CF(); break;
        case 0xF0D1:
            func_F0D1(); break;
        case 0xF0D4:
            func_F0D4(); break;
        case 0xF0CE:
            func_F0CE(); break;
        case 0xCEF1:
            func_CEF1(); break;
        case 0xCF31:
            func_CF31(); break;
        case 0xCF41:
            func_CF41(); break;
        case 0xCF56:
            func_CF56(); break;
        case 0xC081:
            func_C081(); break;
        case 0xE0C8:
            func_E0C8(); break;
        case 0xE8AA:
            func_E8AA(); break;
        case 0xE8AB:
            func_E8AB(); break;
        case 0xDEE8:
            func_DEE8(); break;
        case 0xF003:
            func_F003(); break;
        case 0xEDF0:
            func_EDF0(); break;
        case 0xEDF1:
            func_EDF1(); break;
        case 0xC80C:
            func_C80C(); break;
        case 0xDC10:
            func_DC10(); break;
        case 0xE806:
            func_E806(); break;
        case 0xE807:
            func_E807(); break;
        case 0xE0E9:
            func_E0E9(); break;
        case 0xF306:
            func_F306(); break;
        case 0xF307:
            func_F307(); break;
        case 0xFC02:
            func_FC02(); break;
        case 0xC502:
            func_C502(); break;
        case 0xFE02:
            func_FE02(); break;
        case 0xEF01:
            func_EF01(); break;
        case 0xD501:
            func_D501(); break;
        case 0xCB00:
            func_CB00(); break;
        case 0xDDEE:
            func_DDEE(); break;
        case 0xDDEF:
            func_DDEF(); break;
        case 0xCCDE:
            func_CCDE(); break;
        case 0xCCBC:
            func_CCBC(); break;
        case 0xDDCC:
            func_DDCC(); break;
        case 0xE020:
            func_E020(); break;
        case 0xD030:
            func_D030(); break;
        case 0xD8E1:
            func_D8E1(); break;
        case 0xCA20:
            func_CA20(); break;
        case 0xCAFC:
            func_CAFC(); break;
        case 0xD0CB:
            func_D0CB(); break;
        case 0xE880:
            func_E880(); break;
        case 0xE881:
            func_E881(); break;
        case 0xE8A0:
            func_E8A0(); break;
        case 0xE8A1:
            func_E8A1(); break;
        case 0xF620:
            func_F620(); break;
        case 0xD2F7:
            func_D2F7(); break;
        case 0xFA11:
            func_FA11(); break;
        case 0xD120:
            func_D120(); break;
        case 0xE5D2:
            func_E5D2(); break;
        case 0xCFC0:
            func_CFC0(); break;
        case 0xE803:
            func_E803(); break;
        case 0xE804:
            func_E804(); break;
        case 0xF0E0:
            func_F0E0(); break;
        case 0xF0E1:
            func_F0E1(); break;
        case 0xD0F0:
            func_D0F0(); break;
        case 0xF6D0:
            func_F6D0(); break;
        case 0xCD8D:
            func_CD8D(); break;
        case 0xD339:
            func_D339(); break;
        case 0xD33A:
            func_D33A(); break;
        case 0xEF96:
            func_EF96(); break;
        case 0xF39E:
            func_F39E(); break;
        case 0xD334:
            func_D334(); break;
        case 0xF695:
            func_F695(); break;
        case 0xF0D0:
            func_F0D0(); break;
        case 0xFD87:
            func_FD87(); break;
        case 0xFE87:
            func_FE87(); break;
        case 0xFE8F:
            func_FE8F(); break;
        case 0xFF96:
            func_FF96(); break;
        case 0xFF01:
            func_FF01(); break;
        case 0xFC8E:
            func_FC8E(); break;
        case 0xC550:
            func_C550(); break;
        case 0xC555:
            func_C555(); break;
        case 0xD500:
            func_D500(); break;
        case 0xD4E3:
            func_D4E3(); break;
        case 0xD4E0:
            func_D4E0(); break;
        case 0xD4E1:
            func_D4E1(); break;
        case 0xD4D8:
            func_D4D8(); break;
        case 0xD4F5:
            func_D4F5(); break;
        case 0xD4F1:
            func_D4F1(); break;
        case 0xD4DB:
            func_D4DB(); break;
        case 0xD4E5:
            func_D4E5(); break;
        case 0xD4DD:
            func_D4DD(); break;
        case 0xD4FC:
            func_D4FC(); break;
        case 0xD4E7:
            func_D4E7(); break;
        case 0xD4F3:
            func_D4F3(); break;
        case 0xD4ED:
            func_D4ED(); break;
        case 0xD4EF:
            func_D4EF(); break;
        case 0xD4D5:
            func_D4D5(); break;
        case 0xD4CE:
            func_D4CE(); break;
        case 0xD4D3:
            func_D4D3(); break;
        case 0xD4C9:
            func_D4C9(); break;
        case 0xD4CC:
            func_D4CC(); break;
        case 0xD4A9:
            func_D4A9(); break;
        case 0xD49E:
            func_D49E(); break;
        case 0xD4B9:
            func_D4B9(); break;
        case 0xD4BB:
            func_D4BB(); break;
        case 0xD4B1:
            func_D4B1(); break;
        case 0xD507:
            func_D507(); break;
        case 0xD49D:
            func_D49D(); break;
        case 0xD4A1:
            func_D4A1(); break;
        case 0xD50B:
            func_D50B(); break;
        case 0xE624:
            func_E624(); break;
        case 0xE625:
            func_E625(); break;
        case 0xE802:
            func_E802(); break;
        case 0xE8E8:
            func_E8E8(); break;
        case 0xE8E9:
            func_E8E9(); break;
        case 0xE538:
            func_E538(); break;
        case 0xF011:
            func_F011(); break;
        case 0xE938:
            func_E938(); break;
        case 0xC6E5:
            func_C6E5(); break;
        case 0xF221:
            func_F221(); break;
        case 0xD46E:
            func_D46E(); break;
        case 0xF021:
            func_F021(); break;
        case 0xF8C9:
            func_F8C9(); break;
        case 0xF8CA:
            func_F8CA(); break;
        case 0xDA24:
            func_DA24(); break;
        case 0xD445:
            func_D445(); break;
        case 0xD451:
            func_D451(); break;
        case 0xD0FE:
            func_D0FE(); break;
        case 0xFD85:
            func_FD85(); break;
        case 0xF54D:
            func_F54D(); break;
        case 0xD5F6:
            func_D5F6(); break;
        case 0xD797:
            func_D797(); break;
        case 0xD0D0:
            func_D0D0(); break;
        case 0xD0D1:
            func_D0D1(); break;
        case 0xEDD1:
            func_EDD1(); break;
        case 0xE410:
            func_E410(); break;
        case 0xE411:
            func_E411(); break;
        case 0xCAB1:
            func_CAB1(); break;
        case 0xF210:
            func_F210(); break;
        case 0xF211:
            func_F211(); break;
        case 0xD0A9:
            func_D0A9(); break;
        case 0xF0A2:
            func_F0A2(); break;
        case 0xF0A3:
            func_F0A3(); break;
        case 0xE0A9:
            func_E0A9(); break;
        case 0xC6D7:
            func_C6D7(); break;
        case 0xEA20:
            func_EA20(); break;
        case 0xEA22:
            func_EA22(); break;
        case 0xEA24:
            func_EA24(); break;
        case 0xE9EB:
            func_E9EB(); break;
        case 0xD60E:
            func_D60E(); break;
        case 0xD663:
            func_D663(); break;
        case 0xFE8D:
            func_FE8D(); break;
        case 0xD64E:
            func_D64E(); break;
        case 0xD652:
            func_D652(); break;
        case 0xD657:
            func_D657(); break;
        case 0xCA01:
            func_CA01(); break;
        case 0xD7E9:
            func_D7E9(); break;
        case 0xE6D3:
            func_E6D3(); break;
        case 0xE6D4:
            func_E6D4(); break;
        case 0xF420:
            func_F420(); break;
        case 0xF421:
            func_F421(); break;
        case 0xEA11:
            func_EA11(); break;
        case 0xEEB9:
            func_EEB9(); break;
        case 0xEECE:
            func_EECE(); break;
        case 0xD6EF:
            func_D6EF(); break;
        case 0xE67B:
            func_E67B(); break;
        case 0xC981:
            func_C981(); break;
        case 0xF025:
            func_F025(); break;
        case 0xF086:
            func_F086(); break;
        case 0xECF0:
            func_ECF0(); break;
        case 0xD000:
            func_D000(); break;
        case 0xD3AA:
            func_D3AA(); break;
        case 0xD055:
            func_D055(); break;
        case 0xF24C:
            func_F24C(); break;
        case 0xF24D:
            func_F24D(); break;
        case 0xC4B9:
            func_C4B9(); break;
        case 0xD7DC:
            func_D7DC(); break;
        case 0xD7DD:
            func_D7DD(); break;
        case 0xD7D7:
            func_D7D7(); break;
        case 0xD7D8:
            func_D7D8(); break;
        case 0xF711:
            func_F711(); break;
        case 0xD921:
            func_D921(); break;
        case 0xF811:
            func_F811(); break;
        case 0xCAA0:
            func_CAA0(); break;
        case 0xCC8F:
            func_CC8F(); break;
        case 0xE801:
            func_E801(); break;
        case 0xD843:
            func_D843(); break;
        case 0xF8AA:
            func_F8AA(); break;
        case 0xE8E5:
            func_E8E5(); break;
        case 0xE8E6:
            func_E8E6(); break;
        case 0xE963:
            func_E963(); break;
        case 0xE321:
            func_E321(); break;
        case 0xE4E4:
            func_E4E4(); break;
        case 0xE418:
            func_E418(); break;
        case 0xD94E:
            func_D94E(); break;
        case 0xD950:
            func_D950(); break;
        case 0xD949:
            func_D949(); break;
        case 0xEC11:
            func_EC11(); break;
        case 0xFDA4:
            func_FDA4(); break;
        case 0xE8B9:
            func_E8B9(); break;
        case 0xE8BA:
            func_E8BA(); break;
        case 0xD9E9:
            func_D9E9(); break;
        case 0xCA80:
            func_CA80(); break;
        case 0xCA78:
            func_CA78(); break;
        case 0xE9AB:
            func_E9AB(); break;
        case 0xE9AE:
            func_E9AE(); break;
        case 0xC0A9:
            func_C0A9(); break;
        case 0xE8A9:
            func_E8A9(); break;
        case 0xE84F:
            func_E84F(); break;
        case 0xE850:
            func_E850(); break;
        case 0xC6E6:
            func_C6E6(); break;
        case 0xD07B:
            func_D07B(); break;
        case 0xEAA9:
            func_EAA9(); break;
        case 0xEABD:
            func_EABD(); break;
        case 0xEAAA:
            func_EAAA(); break;
        case 0xE437:
            func_E437(); break;
        case 0xCBAA:
            func_CBAA(); break;
        case 0xDCA9:
            func_DCA9(); break;
        case 0xDCAA:
            func_DCAA(); break;
        case 0xC94B:
            func_C94B(); break;
        case 0xD032:
            func_D032(); break;
        case 0xD5D0:
            func_D5D0(); break;
        case 0xDBAD:
            func_DBAD(); break;
        case 0xDBAF:
            func_DBAF(); break;
        case 0xF0DB:
            func_F0DB(); break;
        case 0xF0DC:
            func_F0DC(); break;
        case 0xF310:
            func_F310(); break;
        case 0xF311:
            func_F311(); break;
        case 0xDE3A:
            func_DE3A(); break;
        case 0xDCCF:
            func_DCCF(); break;
        case 0xE8DC:
            func_E8DC(); break;
        case 0xCB26:
            func_CB26(); break;
        case 0xE6EE:
            func_E6EE(); break;
        case 0xE6EF:
            func_E6EF(); break;
        case 0xE64A:
            func_E64A(); break;
        case 0xE64B:
            func_E64B(); break;
        case 0xC000:
            func_C000(); break;
        case 0xC001:
            func_C001(); break;
        case 0xC002:
            func_C002(); break;
        case 0xC004:
            func_C004(); break;
        case 0xC192:
            func_C192(); break;
        case 0xC3AD:
            func_C3AD(); break;
        case 0xC487:
            func_C487(); break;
        case 0xC5AF:
            func_C5AF(); break;
        case 0xC833:
            func_C833(); break;
        case 0xCA13:
            func_CA13(); break;
        case 0xC825:
            func_C825(); break;
        case 0xD009:
            func_D009(); break;
        case 0xC50F:
            func_C50F(); break;
        case 0xC361:
            func_C361(); break;
        case 0xC735:
            func_C735(); break;
        case 0xCB16:
            func_CB16(); break;
        case 0xCFC9:
            func_CFC9(); break;
        case 0xCDF2:
            func_CDF2(); break;
        case 0xC314:
            func_C314(); break;
        case 0xC72C:
            func_C72C(); break;
        case 0xC900:
            func_C900(); break;
        case 0xC902:
            func_C902(); break;
        case 0xD002:
            func_D002(); break;
        case 0xC904:
            func_C904(); break;
        case 0xC688:
            func_C688(); break;
        case 0xCE3E:
            func_CE3E(); break;
        case 0xCE3F:
            func_CE3F(); break;
        case 0xCE42:
            func_CE42(); break;
        case 0xCE43:
            func_CE43(); break;
        case 0xCE6C:
            func_CE6C(); break;
        case 0xCE6D:
            func_CE6D(); break;
        case 0xCE6F:
            func_CE6F(); break;
        case 0xCD73:
            func_CD73(); break;
        case 0xCD7E:
            func_CD7E(); break;
        case 0xCACE:
            func_CACE(); break;
        case 0xC6CA:
            func_C6CA(); break;
        case 0xC80B:
            func_C80B(); break;
        case 0xC9C9:
            func_C9C9(); break;
        case 0xC8CD:
            func_C8CD(); break;
        case 0xC8CE:
            func_C8CE(); break;
        case 0xCDD3:
            func_CDD3(); break;
        case 0xCDD4:
            func_CDD4(); break;
        case 0xCDDE:
            func_CDDE(); break;
        case 0xCE78:
            func_CE78(); break;
        case 0xCE9C:
            func_CE9C(); break;
        case 0xCEAC:
            func_CEAC(); break;
        case 0xCF25:
            func_CF25(); break;
        case 0xCEBE:
            func_CEBE(); break;
        case 0xC6CF:
            func_C6CF(); break;
        case 0xCEC6:
            func_CEC6(); break;
        case 0xCECE:
            func_CECE(); break;
        case 0xCED7:
            func_CED7(); break;
        case 0xCEEA:
            func_CEEA(); break;
        case 0xCEF0:
            func_CEF0(); break;
        case 0xCF30:
            func_CF30(); break;
        case 0xCF40:
            func_CF40(); break;
        case 0xCF55:
            func_CF55(); break;
        case 0xCE98:
            func_CE98(); break;
        case 0xCE99:
            func_CE99(); break;
        case 0xCA03:
            func_CA03(); break;
        case 0xCA04:
            func_CA04(); break;
        case 0xC803:
            func_C803(); break;
        case 0xC8C9:
            func_C8C9(); break;
        case 0xC816:
            func_C816(); break;
        case 0xCF03:
            func_CF03(); break;
        case 0xC501:
            func_C501(); break;
        case 0xCCDD:
            func_CCDD(); break;
        case 0xCCBB:
            func_CCBB(); break;
        case 0xCA21:
            func_CA21(); break;
        case 0xCAFB:
            func_CAFB(); break;
        case 0xC8E8:
            func_C8E8(); break;
        case 0xC8E9:
            func_C8E9(); break;
        case 0xCD39:
            func_CD39(); break;
        case 0xCAF6:
            func_CAF6(); break;
        case 0xCAF7:
            func_CAF7(); break;
        case 0xC551:
            func_C551(); break;
        case 0xCAAA:
            func_CAAA(); break;
        case 0xCAB0:
            func_CAB0(); break;
        case 0xD024:
            func_D024(); break;
        case 0xD026:
            func_D026(); break;
        case 0xC600:
            func_C600(); break;
        case 0xCA02:
            func_CA02(); break;
        case 0xD001:
            func_D001(); break;
        case 0xCFA9:
            func_CFA9(); break;
        case 0xCAA1:
            func_CAA1(); break;
        case 0xCA8E:
            func_CA8E(); break;
        case 0xCC8E:
            func_CC8E(); break;
        case 0xC662:
            func_C662(); break;
        case 0xCA79:
            func_CA79(); break;
        case 0xC0AA:
            func_C0AA(); break;
        case 0xCBA9:
            func_CBA9(); break;
        case 0xC619:
            func_C619(); break;
        case 0xCE21:
            func_CE21(); break;
        case 0xCEA9:
            func_CEA9(); break;
        case 0xD00F:
            func_D00F(); break;
        case 0xC90C:
            func_C90C(); break;
        case 0xCA1F:
            func_CA1F(); break;
        case 0xC801:
            func_C801(); break;
        case 0xCA6A:
            func_CA6A(); break;
        case 0xC480:
            func_C480(); break;
        case 0xC0A0:
            func_C0A0(); break;
        case 0xC0A1:
            func_C0A1(); break;
        case 0xCA09:
            func_CA09(); break;
        case 0xCA05:
            func_CA05(); break;
        case 0xC420:
            func_C420(); break;
        case 0xC421:
            func_C421(); break;
        case 0xCFB4:
            func_CFB4(); break;
        case 0xCFB5:
            func_CFB5(); break;
        case 0xCAE0:
            func_CAE0(); break;
        case 0xD011:
            func_D011(); break;
        case 0xCCAD:
            func_CCAD(); break;
        case 0xD007:
            func_D007(); break;
        case 0xCBEE:
            func_CBEE(); break;
        case 0xCBAE:
            func_CBAE(); break;
        case 0xCAAD:
            func_CAAD(); break;
        case 0xCAAE:
            func_CAAE(); break;
        case 0xC9FD:
            func_C9FD(); break;
        case 0xD005:
            func_D005(); break;
        case 0xCA77:
            func_CA77(); break;
        case 0xCA0B:
            func_CA0B(); break;
        case 0xCC8D:
            func_CC8D(); break;
        case 0xC980:
            func_C980(); break;
        case 0xC061:
            func_C061(); break;
        case 0xC401:
            func_C401(); break;
        case 0xCC00:
            func_CC00(); break;
        case 0xC01D:
            func_C01D(); break;
        case 0xC014:
            func_C014(); break;
        case 0xC00C:
            func_C00C(); break;
        case 0xC0ED:
            func_C0ED(); break;
        case 0xC0EB:
            func_C0EB(); break;
        case 0xC0E6:
            func_C0E6(); break;
        case 0xC0E1:
            func_C0E1(); break;
        case 0xC0E2:
            func_C0E2(); break;
        case 0xC0E4:
            func_C0E4(); break;
        case 0xC0E9:
            func_C0E9(); break;
        case 0xC0EF:
            func_C0EF(); break;
        case 0xC0F6:
            func_C0F6(); break;
        case 0xCE60:
            func_CE60(); break;
        case 0xCE61:
            func_CE61(); break;
        case 0xCC4C:
            func_CC4C(); break;
        case 0xC7C9:
            func_C7C9(); break;
        case 0xC7A9:
            func_C7A9(); break;
        case 0xC7AA:
            func_C7AA(); break;
        case 0xCCD9:
            func_CCD9(); break;
        case 0xC2B9:
            func_C2B9(); break;
        case 0xC7B9:
            func_C7B9(); break;
        case 0xC93F:
            func_C93F(); break;
        case 0xC19A:
            func_C19A(); break;
        case 0xCBD0:
            func_CBD0(); break;
        case 0xC98A:
            func_C98A(); break;
        case 0xC98B:
            func_C98B(); break;
        case 0xC1BC:
            func_C1BC(); break;
        case 0xC1BE:
            func_C1BE(); break;
        case 0xC934:
            func_C934(); break;
        case 0xC4F9:
            func_C4F9(); break;
        case 0xC6B9:
            func_C6B9(); break;
        case 0xC6BA:
            func_C6BA(); break;
        case 0xCFD0:
            func_CFD0(); break;
        case 0xC9F0:
            func_C9F0(); break;
        case 0xC041:
            func_C041(); break;
        case 0xC19D:
            func_C19D(); break;
        case 0xC0F0:
            func_C0F0(); break;
        case 0xC0D8:
            func_C0D8(); break;
        case 0xC0F4:
            func_C0F4(); break;
        case 0xC8FE:
            func_C8FE(); break;
        case 0xCF1B:
            func_CF1B(); break;
        case 0xC069:
            func_C069(); break;
        case 0xC4F4:
            func_C4F4(); break;
        case 0xCA8B:
            func_CA8B(); break;
        case 0xCD34:
            func_CD34(); break;
        case 0xC542:
            func_C542(); break;
        case 0xCF95:
            func_CF95(); break;
        case 0xCA4E:
            func_CA4E(); break;
        case 0xCA46:
            func_CA46(); break;
        case 0xC60D:
            func_C60D(); break;
        case 0xCE06:
            func_CE06(); break;
        case 0xCC49:
            func_CC49(); break;
        case 0xCC41:
            func_CC41(); break;
        case 0xC77D:
            func_C77D(); break;
        case 0xC911:
            func_C911(); break;
        case 0xC4E9:
            func_C4E9(); break;
        case 0xCCCA:
            func_CCCA(); break;
        case 0xCF00:
            func_CF00(); break;
        case 0xC3BB:
            func_C3BB(); break;
        case 0xCBC1:
            func_CBC1(); break;
        case 0xC3BF:
            func_C3BF(); break;
        case 0xCD58:
            func_CD58(); break;
        case 0xCB3E:
            func_CB3E(); break;
        case 0xCD40:
            func_CD40(); break;
        case 0xCF79:
            func_CF79(); break;
        case 0xCDC7:
            func_CDC7(); break;
        case 0xCEC8:
            func_CEC8(); break;
        case 0xCCCB:
            func_CCCB(); break;
        case 0xCED3:
            func_CED3(); break;
        case 0xCF52:
            func_CF52(); break;
        case 0xCFCB:
            func_CFCB(); break;
        case 0xCEF7:
            func_CEF7(); break;
        case 0xCE7B:
            func_CE7B(); break;
        case 0xCF33:
            func_CF33(); break;
        case 0xC3B4:
            func_C3B4(); break;
        case 0xC8BA:
            func_C8BA(); break;
        case 0xCBBD:
            func_CBBD(); break;
        case 0xC3B8:
            func_C3B8(); break;
        case 0xCB7A:
            func_CB7A(); break;
        case 0xCED9:
            func_CED9(); break;
        case 0xCFDA:
            func_CFDA(); break;
        case 0xC028:
            func_C028(); break;
        case 0xCDBF:
            func_CDBF(); break;
        case 0xCEC0:
            func_CEC0(); break;
        case 0xCFC1:
            func_CFC1(); break;
        case 0xC8D2:
            func_C8D2(); break;
        case 0xCBD5:
            func_CBD5(); break;
        case 0xCBBF:
            func_CBBF(); break;
        case 0xCCC0:
            func_CCC0(); break;
        case 0xCB9C:
            func_CB9C(); break;
        case 0xCCC8:
            func_CCC8(); break;
        case 0xCEDE:
            func_CEDE(); break;
        case 0xC067:
            func_C067(); break;
        case 0xCFB9:
            func_CFB9(); break;
        case 0xCFDF:
            func_CFDF(); break;
        case 0xCFFF:
            func_CFFF(); break;
        case 0xC8C1:
            func_C8C1(); break;
        case 0xC3C9:
            func_C3C9(); break;
        case 0xCBC4:
            func_CBC4(); break;
        case 0xCFD6:
            func_CFD6(); break;
        case 0xC8BD:
            func_C8BD(); break;
        case 0xCDC2:
            func_CDC2(); break;
        case 0xC3CD:
            func_C3CD(); break;
        case 0xCEC3:
            func_CEC3(); break;
        case 0xCFC4:
            func_CFC4(); break;
        case 0xCEDC:
            func_CEDC(); break;
        case 0xCB40:
            func_CB40(); break;
        case 0xCB96:
            func_CB96(); break;
        case 0xCCA2:
            func_CCA2(); break;
        case 0xCBFC:
            func_CBFC(); break;
        case 0xCEF5:
            func_CEF5(); break;
        case 0xCCFC:
            func_CCFC(); break;
        case 0xC8D0:
            func_C8D0(); break;
        case 0xC0A6:
            func_C0A6(); break;
        case 0xCC60:
            func_CC60(); break;
        case 0xC92D:
            func_C92D(); break;
        case 0xCB88:
            func_CB88(); break;
        case 0xCB82:
            func_CB82(); break;
        case 0xCC85:
            func_CC85(); break;
        case 0xCF80:
            func_CF80(); break;
        case 0xCB86:
            func_CB86(); break;
        case 0xCF04:
            func_CF04(); break;
        case 0xC7B3:
            func_C7B3(); break;
        case 0xCD10:
            func_CD10(); break;
        case 0xCBB9:
            func_CBB9(); break;
        case 0xC8B0:
            func_C8B0(); break;
        case 0xCD2B:
            func_CD2B(); break;
        case 0xC810:
            func_C810(); break;
        case 0xC808:
            func_C808(); break;
        case 0xC87A:
            func_C87A(); break;
        case 0xCF89:
            func_CF89(); break;
        case 0xCC88:
            func_CC88(); break;
        case 0xCE8B:
            func_CE8B(); break;
        case 0xCE89:
            func_CE89(); break;
        case 0xCBDB:
            func_CBDB(); break;
        case 0xC928:
            func_C928(); break;
        case 0xC0D0:
            func_C0D0(); break;
        case 0xCF29:
            func_CF29(); break;
        case 0xC02B:
            func_C02B(); break;
        case 0xCC04:
            func_CC04(); break;
        case 0xCD04:
            func_CD04(); break;
        case 0xC92B:
            func_C92B(); break;
        case 0xCCB6:
            func_CCB6(); break;
        case 0xCDBD:
            func_CDBD(); break;
        case 0xCD06:
            func_CD06(); break;
        case 0xCEB9:
            func_CEB9(); break;
        case 0xC3CB:
            func_C3CB(); break;
        case 0xC3C3:
            func_C3C3(); break;
        case 0xC3C4:
            func_C3C4(); break;
        case 0xC0A8:
            func_C0A8(); break;
        case 0xC8F8:
            func_C8F8(); break;
        case 0xC0D5:
            func_C0D5(); break;
        case 0xCC11:
            func_CC11(); break;
        case 0xC80F:
            func_C80F(); break;
        case 0xCDB8:
            func_CDB8(); break;
        case 0xCDB1:
            func_CDB1(); break;
        case 0xCFF7:
            func_CFF7(); break;
        case 0xCF10:
            func_CF10(); break;
        case 0xCD02:
            func_CD02(); break;
        case 0xCB42:
            func_CB42(); break;
        case 0xC3CA:
            func_C3CA(); break;
        case 0xC86E:
            func_C86E(); break;
        case 0xC866:
            func_C866(); break;
        case 0xE002:
            func_E002(); break;
        case 0xDE73:
            func_DE73(); break;
        case 0xDE74:
            func_DE74(); break;
        case 0xE2B7:
            func_E2B7(); break;
        case 0xE2B8:
            func_E2B8(); break;
        case 0xDE8A:
            func_DE8A(); break;
        case 0xE29A:
            func_E29A(); break;
        case 0xE29B:
            func_E29B(); break;
        case 0xFCE2:
            func_FCE2(); break;
        case 0xE3FC:
            func_E3FC(); break;
        case 0xE3FD:
            func_E3FD(); break;
        case 0xF4BD:
            func_F4BD(); break;
        case 0xC820:
            func_C820(); break;
        case 0xC821:
            func_C821(); break;
        case 0xE8C8:
            func_E8C8(); break;
        case 0xE8C9:
            func_E8C9(); break;
        case 0xDEA9:
            func_DEA9(); break;
        case 0xD00E:
            func_D00E(); break;
        case 0xE120:
            func_E120(); break;
        case 0xE12F:
            func_E12F(); break;
        case 0xE5D1:
            func_E5D1(); break;
        case 0xE9EA:
            func_E9EA(); break;
        case 0xE4E3:
            func_E4E3(); break;
        case 0xEA13:
            func_EA13(); break;
        case 0xE5F2:
            func_E5F2(); break;
        case 0xE510:
            func_E510(); break;
        case 0xE4D8:
            func_E4D8(); break;
        case 0xE417:
            func_E417(); break;
        case 0xE49D:
            func_E49D(); break;
        case 0xE436:
            func_E436(); break;
        case 0xED21:
            func_ED21(); break;
        case 0xE9F9:
            func_E9F9(); break;
        case 0xEF9B:
            func_EF9B(); break;
        case 0xEF6C:
            func_EF6C(); break;
        case 0xE544:
            func_E544(); break;
        case 0xE4B5:
            func_E4B5(); break;
        case 0xED45:
            func_ED45(); break;
        case 0xED0C:
            func_ED0C(); break;
        case 0xEC91:
            func_EC91(); break;
        case 0xEC36:
            func_EC36(); break;
        case 0xE57D:
            func_E57D(); break;
        case 0xEF26:
            func_EF26(); break;
        case 0xED68:
            func_ED68(); break;
        case 0xED36:
            func_ED36(); break;
        case 0xE9D2:
            func_E9D2(); break;
        case 0xE928:
            func_E928(); break;
        case 0xEA5C:
            func_EA5C(); break;
        case 0xF068:
            func_F068(); break;
        case 0xEA76:
            func_EA76(); break;
        case 0xEAC3:
            func_EAC3(); break;
        case 0xEA60:
            func_EA60(); break;
        case 0xF0D9:
            func_F0D9(); break;
        case 0xEA78:
            func_EA78(); break;
        case 0xEA62:
            func_EA62(); break;
        case 0xF11B:
            func_F11B(); break;
        case 0xF06A:
            func_F06A(); break;
        case 0xEAA6:
            func_EAA6(); break;
        case 0xF000:
            func_F000(); break;
        case 0xF010:
            func_F010(); break;
        case 0xF07A:
            func_F07A(); break;
        case 0xF076:
            func_F076(); break;
        case 0xF005:
            func_F005(); break;
        case 0xF006:
            func_F006(); break;
        case 0xF008:
            func_F008(); break;
        case 0xF009:
            func_F009(); break;
        case 0xF074:
            func_F074(); break;
        case 0xF08F:
            func_F08F(); break;
        case 0xF090:
            func_F090(); break;
        case 0xF00B:
            func_F00B(); break;
        case 0xF080:
            func_F080(); break;
        case 0xF0A0:
            func_F0A0(); break;
        case 0xF040:
            func_F040(); break;
        case 0xE54C:
            func_E54C(); break;
        case 0xE421:
            func_E421(); break;
        case 0xF00D:
            func_F00D(); break;
        case 0xEACE:
            func_EACE(); break;
        case 0xE602:
            func_E602(); break;
        case 0xEF95:
            func_EF95(); break;
        case 0xEFA9:
            func_EFA9(); break;
        case 0xEFAA:
            func_EFAA(); break;
        case 0xE4E9:
            func_E4E9(); break;
        case 0xE539:
            func_E539(); break;
        case 0xE4D9:
            func_E4D9(); break;
        case 0xE939:
            func_E939(); break;
        case 0xF020:
            func_F020(); break;
        case 0xEA21:
            func_EA21(); break;
        case 0xEA10:
            func_EA10(); break;
        case 0xEFBA:
            func_EFBA(); break;
        case 0xF024:
            func_F024(); break;
        case 0xF085:
            func_F085(); break;
        case 0xE962:
            func_E962(); break;
        case 0xE5D0:
            func_E5D0(); break;
        case 0xF04C:
            func_F04C(); break;
        case 0xF077:
            func_F077(); break;
        case 0xF04A:
            func_F04A(); break;
        case 0xE600:
            func_E600(); break;
        case 0xF088:
            func_F088(); break;
        case 0xF002:
            func_F002(); break;
        case 0xF033:
            func_F033(); break;
        case 0xED11:
            func_ED11(); break;
        case 0xF027:
            func_F027(); break;
        case 0xECD1:
            func_ECD1(); break;
        case 0xECCA:
            func_ECCA(); break;
        case 0xE980:
            func_E980(); break;
        case 0xE5F1:
            func_E5F1(); break;
        case 0xE4BD:
            func_E4BD(); break;
        case 0xF08A:
            func_F08A(); break;
        case 0xE507:
            func_E507(); break;
        case 0xF029:
            func_F029(); break;
        case 0xEF27:
            func_EF27(); break;
        case 0xE4F4:
            func_E4F4(); break;
        case 0xE4F5:
            func_E4F5(); break;
        case 0xEAD4:
            func_EAD4(); break;
        case 0xE4F2:
            func_E4F2(); break;
        case 0xECE1:
            func_ECE1(); break;
        case 0xE4E2:
            func_E4E2(); break;
        case 0xECD5:
            func_ECD5(); break;
        case 0xE4EC:
            func_E4EC(); break;
        case 0xE4ED:
            func_E4ED(); break;
        case 0xECC1:
            func_ECC1(); break;
        case 0xE4E7:
            func_E4E7(); break;
        case 0xECDD:
            func_ECDD(); break;
        case 0xE4EB:
            func_E4EB(); break;
        case 0xE4D4:
            func_E4D4(); break;
        case 0xE4D5:
            func_E4D5(); break;
        case 0xEF82:
            func_EF82(); break;
        case 0xE5F6:
            func_E5F6(); break;
        case 0xEFF5:
            func_EFF5(); break;
        case 0xEFAD:
            func_EFAD(); break;
        case 0xECB9:
            func_ECB9(); break;
        case 0xE96C:
            func_E96C(); break;
        case 0xE501:
            func_E501(); break;
        case 0xECD3:
            func_ECD3(); break;
        case 0xE4C8:
            func_E4C8(); break;
        case 0xE9E6:
            func_E9E6(); break;
        case 0xE435:
            func_E435(); break;
        case 0xEFF6:
            func_EFF6(); break;
        case 0xE5A4:
            func_E5A4(); break;
        case 0xEFA1:
            func_EFA1(); break;
        case 0xE5E1:
            func_E5E1(); break;
        case 0xEFEB:
            func_EFEB(); break;
        case 0xE9E9:
            func_E9E9(); break;
        case 0xEAE8:
            func_EAE8(); break;
        case 0xE9E7:
            func_E9E7(); break;
        case 0xF03C:
            func_F03C(); break;
        case 0xE59F:
            func_E59F(); break;
        case 0xEF32:
            func_EF32(); break;
        case 0xE541:
            func_E541(); break;
        case 0xE9DB:
            func_E9DB(); break;
        case 0xE568:
            func_E568(); break;
        case 0xE5E5:
            func_E5E5(); break;
        case 0xEFE7:
            func_EFE7(); break;
        case 0xE4F7:
            func_E4F7(); break;
        case 0xEA0D:
            func_EA0D(); break;
        case 0xE429:
            func_E429(); break;
        case 0xE578:
            func_E578(); break;
        case 0xE50C:
            func_E50C(); break;
        case 0xE964:
            func_E964(); break;
        case 0xEC68:
            func_EC68(); break;
        case 0xE4DE:
            func_E4DE(); break;
        case 0xE5DF:
            func_E5DF(); break;
        case 0xEA6F:
            func_EA6F(); break;
        case 0xED3F:
            func_ED3F(); break;
        case 0xED48:
            func_ED48(); break;
        case 0xE4FF:
            func_E4FF(); break;
        case 0xE5E4:
            func_E5E4(); break;
        case 0xEFB3:
            func_EFB3(); break;
        case 0xECDF:
            func_ECDF(); break;
        case 0xE4F0:
            func_E4F0(); break;
        case 0xE9F6:
            func_E9F6(); break;
        case 0xE9F4:
            func_E9F4(); break;
        case 0xEFFB:
            func_EFFB(); break;
        case 0xED61:
            func_ED61(); break;
        case 0xE984:
            func_E984(); break;
        case 0xE98F:
            func_E98F(); break;
        case 0xE4A2:
            func_E4A2(); break;
        case 0xEFFD:
            func_EFFD(); break;
        case 0xEC81:
            func_EC81(); break;
        case 0xE9FD:
            func_E9FD(); break;
        case 0xE4FC:
            func_E4FC(); break;
        case 0xEC8F:
            func_EC8F(); break;
        case 0xE991:
            func_E991(); break;
        case 0xEA12:
            func_EA12(); break;
        case 0xF095:
            func_F095(); break;
        case 0xF096:
            func_F096(); break;
        case 0xEA05:
            func_EA05(); break;
        case 0xEA1C:
            func_EA1C(); break;
        case 0xECA2:
            func_ECA2(); break;
        case 0xECA6:
            func_ECA6(); break;
        case 0xE4FD:
            func_E4FD(); break;
        case 0xE9F8:
            func_E9F8(); break;
        case 0xEA0A:
            func_EA0A(); break;
        case 0xF099:
            func_F099(); break;
        case 0xF071:
            func_F071(); break;
        case 0xECBD:
            func_ECBD(); break;
        case 0xF045:
            func_F045(); break;
        case 0xF023:
            func_F023(); break;
        case 0xED78:
            func_ED78(); break;
        case 0xEA85:
            func_EA85(); break;
        case 0xE98A:
            func_E98A(); break;
        case 0xF030:
            func_F030(); break;
        case 0xF02D:
            func_F02D(); break;
        case 0xF01F:
            func_F01F(); break;
        case 0xF03F:
            func_F03F(); break;
        case 0xE4C7:
            func_E4C7(); break;
        case 0xF012:
            func_F012(); break;
        case 0xF035:
            func_F035(); break;
        case 0xEA84:
            func_EA84(); break;
        case 0xEF70:
            func_EF70(); break;
        case 0xF01B:
            func_F01B(); break;
        case 0xF015:
            func_F015(); break;
        case 0xF048:
            func_F048(); break;
        case 0xEAE4:
            func_EAE4(); break;
        case 0xECBB:
            func_ECBB(); break;
        case 0xEFD1:
            func_EFD1(); break;
        case 0xE9D9:
            func_E9D9(); break;
        case 0xEFDF:
            func_EFDF(); break;
        case 0xE5D8:
            func_E5D8(); break;
        case 0xEFCB:
            func_EFCB(); break;
        case 0xE553:
            func_E553(); break;
        case 0xE9EE:
            func_E9EE(); break;
        case 0xEF86:
            func_EF86(); break;
        case 0xF1BD:
            func_F1BD(); break;
        case 0xF1BE:
            func_F1BE(); break;
        case 0xD1BD:
            func_D1BD(); break;
        case 0xD05A:
            func_D05A(); break;
        case 0xC907:
            func_C907(); break;
        case 0xC620:
            func_C620(); break;
        case 0xD075:
            func_D075(); break;
        case 0xD09B:
            func_D09B(); break;
        case 0xD057:
            func_D057(); break;
        case 0xF4D0:
            func_F4D0(); break;
        case 0xF4D1:
            func_F4D1(); break;
        case 0xEED1:
            func_EED1(); break;
        case 0xF8D0:
            func_F8D0(); break;
        case 0xF8D5:
            func_F8D5(); break;
        case 0xE4C0:
            func_E4C0(); break;
        case 0xF1D0:
            func_F1D0(); break;
        case 0xF1D1:
            func_F1D1(); break;
        case 0xE904:
            func_E904(); break;
        case 0xF2AD:
            func_F2AD(); break;
        case 0xF2AE:
            func_F2AE(); break;
        case 0xF34E:
            func_F34E(); break;
        case 0xF28D:
            func_F28D(); break;
        case 0xF28E:
            func_F28E(); break;
        case 0xF36D:
            func_F36D(); break;
        case 0xF36E:
            func_F36E(); break;
        case 0xF370:
            func_F370(); break;
        case 0xF39D:
            func_F39D(); break;
        case 0xF38E:
            func_F38E(); break;
        case 0xF37F:
            func_F37F(); break;
        case 0xF37C:
            func_F37C(); break;
        case 0xF38A:
            func_F38A(); break;
        case 0xF387:
            func_F387(); break;
        case 0xF388:
            func_F388(); break;
        case 0xF390:
            func_F390(); break;
        case 0xF3A5:
            func_F3A5(); break;
        case 0xE7F0:
            func_E7F0(); break;
        case 0xE7F1:
            func_E7F1(); break;
        case 0xE545:
            func_E545(); break;
        case 0xD9F1:
            func_D9F1(); break;
        case 0xE57E:
            func_E57E(); break;
        case 0xC802:
            func_C802(); break;
        case 0xC0C9:
            func_C0C9(); break;
        case 0xCA6B:
            func_CA6B(); break;
        case 0xE848:
            func_E848(); break;
        case 0xD061:
            func_D061(); break;
        case 0xE601:
            func_E601(); break;
        case 0xE661:
            func_E661(); break;
        case 0xFDD0:
            func_FDD0(); break;
        case 0xD028:
            func_D028(); break;
        case 0xE63F:
            func_E63F(); break;
        case 0xE640:
            func_E640(); break;
        case 0xE642:
            func_E642(); break;
        case 0xE643:
            func_E643(); break;
        case 0xE6A8:
            func_E6A8(); break;
        case 0xE6A9:
            func_E6A9(); break;
        case 0xE6B8:
            func_E6B8(); break;
        case 0xFE00:
            func_FE00(); break;
        case 0xFDFE:
            func_FDFE(); break;
        case 0xFCFD:
            func_FCFD(); break;
        case 0xFE20:
            func_FE20(); break;
        case 0xFF5C:
            func_FF5C(); break;
        case 0xFE50:
            func_FE50(); break;
        case 0xFE01:
            func_FE01(); break;
        case 0xFD86:
            func_FD86(); break;
        case 0xFE86:
            func_FE86(); break;
        case 0xFE8E:
            func_FE8E(); break;
        case 0xFD8D:
            func_FD8D(); break;
        case 0xFD8E:
            func_FD8E(); break;
        case 0xFDA5:
            func_FDA5(); break;
        case 0xFDD3:
            func_FDD3(); break;
        case 0xFDFC:
            func_FDFC(); break;
        case 0xFDAC:
            func_FDAC(); break;
        case 0xFE14:
            func_FE14(); break;
        case 0xFE80:
            func_FE80(); break;
        case 0xFE81:
            func_FE81(); break;
        case 0xFD01:
            func_FD01(); break;
        case 0xFE03:
            func_FE03(); break;
        case 0xFE60:
            func_FE60(); break;
        case 0xFE61:
            func_FE61(); break;
        case 0xFE92:
            func_FE92(); break;
        case 0xFE5C:
            func_FE5C(); break;
        case 0xFE89:
            func_FE89(); break;
        case 0xFE91:
            func_FE91(); break;
        case 0xFD1A:
            func_FD1A(); break;
        case 0xFE5E:
            func_FE5E(); break;
        case 0xFE94:
            func_FE94(); break;
        case 0xFCFC:
            func_FCFC(); break;
        case 0xE788:
            func_E788(); break;
        case 0xE799:
            func_E799(); break;
        case 0xE79A:
            func_E79A(); break;
        case 0xE7A9:
            func_E7A9(); break;
        case 0xE7AA:
            func_E7AA(); break;
        case 0xD010:
            func_D010(); break;
        case 0xE64E:
            func_E64E(); break;
        case 0xE64C:
            func_E64C(); break;
        case 0xE64D:
            func_E64D(); break;
        case 0xE797:
            func_E797(); break;
        case 0xE798:
            func_E798(); break;
        case 0xE75D:
            func_E75D(); break;
        case 0xCA08:
            func_CA08(); break;
        case 0xE614:
            func_E614(); break;
        case 0xE828:
            func_E828(); break;
        case 0xE826:
            func_E826(); break;
        case 0xE620:
            func_E620(); break;
        case 0xE621:
            func_E621(); break;
        case 0xE023:
            func_E023(); break;
        case 0xE8FD:
            func_E8FD(); break;
        case 0xD050:
            func_D050(); break;
        case 0xE854:
            func_E854(); break;
        case 0xE855:
            func_E855(); break;
        case 0xDE4D:
            func_DE4D(); break;
        case 0xE929:
            func_E929(); break;
        case 0xE931:
            func_E931(); break;
        case 0xDE5F:
            func_DE5F(); break;
        case 0xF089:
            func_F089(); break;
        case 0xDFB4:
            func_DFB4(); break;
        case 0xF0DF:
            func_F0DF(); break;
        case 0xF06D:
            func_F06D(); break;
        case 0xF06E:
            func_F06E(); break;
        case 0xC09E:
            func_C09E(); break;
        case 0xDF96:
            func_DF96(); break;
        case 0xCADF:
            func_CADF(); break;
        case 0xC6A8:
            func_C6A8(); break;
        case 0xC6A9:
            func_C6A9(); break;
        case 0xF034:
            func_F034(); break;
        case 0xEA8A:
            func_EA8A(); break;
        case 0xEA5D:
            func_EA5D(); break;
        case 0xE8EA:
            func_E8EA(); break;
        case 0xE8EB:
            func_E8EB(); break;
        case 0xD089:
            func_D089(); break;
        case 0xEA8D:
            func_EA8D(); break;
        case 0xDF2A:
            func_DF2A(); break;
        case 0xD29D:
            func_D29D(); break;
        case 0xD29E:
            func_D29E(); break;
        case 0xF29D:
            func_F29D(); break;
        case 0xF29E:
            func_F29E(); break;
        case 0xE8B1:
            func_E8B1(); break;
        case 0xE8B2:
            func_E8B2(); break;
        case 0xEB4B:
            func_EB4B(); break;
        case 0xD18F:
            func_D18F(); break;
        case 0xD191:
            func_D191(); break;
        case 0xE200:
            func_E200(); break;
        case 0xE1D0:
            func_E1D0(); break;
        case 0xE1BE:
            func_E1BE(); break;
        case 0xE1FD:
            func_E1FD(); break;
        case 0xE211:
            func_E211(); break;
        case 0xE1DC:
            func_E1DC(); break;
        case 0xE1DB:
            func_E1DB(); break;
        case 0xE1F5:
            func_E1F5(); break;
        case 0xE1F1:
            func_E1F1(); break;
        case 0xE1C9:
            func_E1C9(); break;
        case 0xE220:
            func_E220(); break;
        case 0xE1B0:
            func_E1B0(); break;
        case 0xE1BB:
            func_E1BB(); break;
        case 0xCCAE:
            func_CCAE(); break;
        case 0xC908:
            func_C908(); break;
        case 0xEE06:
            func_EE06(); break;
        case 0xEE0F:
            func_EE0F(); break;
        case 0xEE11:
            func_EE11(); break;
        case 0xEE20:
            func_EE20(); break;
        case 0xEE32:
            func_EE32(); break;
        case 0xEE46:
            func_EE46(); break;
        case 0xEE41:
            func_EE41(); break;
        case 0xEE26:
            func_EE26(); break;
        case 0xEE22:
            func_EE22(); break;
        case 0xCBEF:
            func_CBEF(); break;
        case 0xCBAD:
            func_CBAD(); break;
        case 0xFDAD:
            func_FDAD(); break;
        case 0xEB8F:
            func_EB8F(); break;
        case 0xEB90:
            func_EB90(); break;
        case 0xF0EB:
            func_F0EB(); break;
        case 0xF0EC:
            func_F0EC(); break;
        case 0xEB7F:
            func_EB7F(); break;
        case 0xEB80:
            func_EB80(); break;
        case 0xEB87:
            func_EB87(); break;
        case 0xEB88:
            func_EB88(); break;
        case 0xEBE1:
            func_EBE1(); break;
        case 0xC797:
            func_C797(); break;
        case 0xC798:
            func_C798(); break;
        case 0xEB98:
            func_EB98(); break;
        case 0xEBAE:
            func_EBAE(); break;
        case 0xEC10:
            func_EC10(); break;
        case 0xEBF1:
            func_EBF1(); break;
        case 0xEBEC:
            func_EBEC(); break;
        case 0xEC06:
            func_EC06(); break;
        case 0xEC01:
            func_EC01(); break;
        case 0xEBBD:
            func_EBBD(); break;
        case 0xEBEA:
            func_EBEA(); break;
        case 0xEBD3:
            func_EBD3(); break;
        case 0xEBF8:
            func_EBF8(); break;
        case 0xEBF6:
            func_EBF6(); break;
        case 0xEC0B:
            func_EC0B(); break;
        case 0xEC03:
            func_EC03(); break;
        case 0xEC1F:
            func_EC1F(); break;
        case 0xEC25:
            func_EC25(); break;
        case 0xEC0D:
            func_EC0D(); break;
        case 0xEBFB:
            func_EBFB(); break;
        case 0xEC2F:
            func_EC2F(); break;
        case 0xEBDB:
            func_EBDB(); break;
        case 0xEBEB:
            func_EBEB(); break;
        case 0xCE4F:
            func_CE4F(); break;
        case 0xCE51:
            func_CE51(); break;
        case 0xCE50:
            func_CE50(); break;
        case 0xCACF:
            func_CACF(); break;
        case 0xF199:
            func_F199(); break;
        case 0xF661:
            func_F661(); break;
        case 0xF1A9:
            func_F1A9(); break;
        case 0xF691:
            func_F691(); break;
        case 0xF696:
            func_F696(); break;
        case 0xF6A9:
            func_F6A9(); break;
        case 0xF6AA:
            func_F6AA(); break;
        case 0xF67F:
            func_F67F(); break;
        case 0xF6BE:
            func_F6BE(); break;
        case 0xF6BF:
            func_F6BF(); break;
        case 0xF670:
            func_F670(); break;
        case 0xF685:
            func_F685(); break;
        case 0xF683:
            func_F683(); break;
        case 0xF684:
            func_F684(); break;
        case 0xF6AD:
            func_F6AD(); break;
        case 0xF6AC:
            func_F6AC(); break;
        case 0xD018:
            func_D018(); break;
        case 0xC9FE:
            func_C9FE(); break;
        case 0xEF9C:
            func_EF9C(); break;
        case 0xEA14:
            func_EA14(); break;
        case 0xED37:
            func_ED37(); break;
        case 0xD0ED:
            func_D0ED(); break;
        case 0xED46:
            func_ED46(); break;
        case 0xE901:
            func_E901(); break;
        case 0xD1FE:
            func_D1FE(); break;
        case 0xF026:
            func_F026(); break;
        case 0xE6B0:
            func_E6B0(); break;
        case 0xE6B1:
            func_E6B1(); break;
        case 0xC626:
            func_C626(); break;
        case 0xF19D:
            func_F19D(); break;
        case 0xED52:
            func_ED52(); break;
        case 0xEDA5:
            func_EDA5(); break;
        case 0xEDA6:
            func_EDA6(); break;
        case 0xC978:
            func_C978(); break;
        case 0xE912:
            func_E912(); break;
        case 0xE915:
            func_E915(); break;
        case 0xE91D:
            func_E91D(); break;
        case 0xE91A:
            func_E91A(); break;
        case 0xE918:
            func_E918(); break;
        case 0xE913:
            func_E913(); break;
        case 0xECD0:
            func_ECD0(); break;
        case 0xFBD0:
            func_FBD0(); break;
        case 0xF9BE:
            func_F9BE(); break;
        case 0xF9D5:
            func_F9D5(); break;
        case 0xEDF9:
            func_EDF9(); break;
        case 0xEDFA:
            func_EDFA(); break;
        case 0xFABD:
            func_FABD(); break;
        case 0xEDFB:
            func_EDFB(); break;
        case 0xEE01:
            func_EE01(); break;
        case 0xD022:
            func_D022(); break;
        case 0xF607:
            func_F607(); break;
        case 0xF67E:
            func_F67E(); break;
        case 0xEE47:
            func_EE47(); break;
        case 0xF2D1:
            func_F2D1(); break;
        case 0xEE4D:
            func_EE4D(); break;
        case 0xEE4E:
            func_EE4E(); break;
        case 0xEE4F:
            func_EE4F(); break;
        case 0xEE55:
            func_EE55(); break;
        case 0xEE56:
            func_EE56(); break;
        case 0xEE7E:
            func_EE7E(); break;
        case 0xEE7F:
            func_EE7F(); break;
        case 0xEE78:
            func_EE78(); break;
        case 0xEE79:
            func_EE79(); break;
        case 0xF610:
            func_F610(); break;
        case 0xF611:
            func_F611(); break;
        case 0xEC07:
            func_EC07(); break;
        case 0xFBEC:
            func_FBEC(); break;
        case 0xECCB:
            func_ECCB(); break;
        case 0xCD78:
            func_CD78(); break;
        case 0xFCCD:
            func_FCCD(); break;
        case 0xF3AE:
            func_F3AE(); break;
        case 0xE906:
            func_E906(); break;
        case 0xF34C:
            func_F34C(); break;
        case 0xEEF4:
            func_EEF4(); break;
        case 0xE1BD:
            func_E1BD(); break;
        case 0xF0E2:
            func_F0E2(); break;
        case 0xE2BD:
            func_E2BD(); break;
        case 0xF0E3:
            func_F0E3(); break;
        case 0xF1E1:
            func_F1E1(); break;
        case 0xF1E2:
            func_F1E2(); break;
        case 0xF1E3:
            func_F1E3(); break;
        case 0xF222:
            func_F222(); break;
        case 0xF223:
            func_F223(); break;
        case 0xE810:
            func_E810(); break;
        case 0xE811:
            func_E811(); break;
        case 0xE818:
            func_E818(); break;
        case 0xE820:
            func_E820(); break;
        case 0xE821:
            func_E821(); break;
        case 0xE2BA:
            func_E2BA(); break;
        case 0xC060:
            func_C060(); break;
        case 0xD710:
            func_D710(); break;
        case 0xCC01:
            func_CC01(); break;
        case 0xCC21:
            func_CC21(); break;
        case 0xD400:
            func_D400(); break;
        case 0xEC00:
            func_EC00(); break;
        case 0xE8FF:
            func_E8FF(); break;
        case 0xDCFF:
            func_DCFF(); break;
        case 0xDD00:
            func_DD00(); break;
        case 0xC2FF:
            func_C2FF(); break;
        case 0xC007:
            func_C007(); break;
        case 0xC010:
            func_C010(); break;
        case 0xC01C:
            func_C01C(); break;
        case 0xC00D:
            func_C00D(); break;
        case 0xFB81:
            func_FB81(); break;
        case 0xF840:
            func_F840(); break;
        case 0xF841:
            func_F841(); break;
        case 0xC0F8:
            func_C0F8(); break;
        case 0xF6C0:
            func_F6C0(); break;
        case 0xF6C1:
            func_F6C1(); break;
        case 0xF712:
            func_F712(); break;
        case 0xF72D:
            func_F72D(); break;
        case 0xF720:
            func_F720(); break;
        case 0xF540:
            func_F540(); break;
        case 0xF547:
            func_F547(); break;
        case 0xF280:
            func_F280(); break;
        case 0xF281:
            func_F281(); break;
        case 0xF101:
            func_F101(); break;
        case 0xEFC0:
            func_EFC0(); break;
        case 0xEFC1:
            func_EFC1(); break;
        case 0xEE40:
            func_EE40(); break;
        case 0xED00:
            func_ED00(); break;
        case 0xC0EE:
            func_C0EE(); break;
        case 0xEBC0:
            func_EBC0(); break;
        case 0xEBC1:
            func_EBC1(); break;
        case 0xEBC7:
            func_EBC7(); break;
        case 0xEAC0:
            func_EAC0(); break;
        case 0xEAC1:
            func_EAC1(); break;
        case 0xE981:
            func_E981(); break;
        case 0xE99B:
            func_E99B(); break;
        case 0xE780:
            func_E780(); break;
        case 0xE781:
            func_E781(); break;
        case 0xE680:
            func_E680(); break;
        case 0xE681:
            func_E681(); break;
        case 0xE580:
            func_E580(); break;
        case 0xE581:
            func_E581(); break;
        case 0xC0E5:
            func_C0E5(); break;
        case 0xE4C1:
            func_E4C1(); break;
        case 0xE400:
            func_E400(); break;
        case 0xE401:
            func_E401(); break;
        case 0xE341:
            func_E341(); break;
        case 0xE281:
            func_E281(); break;
        case 0xE101:
            func_E101(); break;
        case 0xE080:
            func_E080(); break;
        case 0xE081:
            func_E081(); break;
        case 0xE085:
            func_E085(); break;
        case 0xE041:
            func_E041(); break;
        case 0xC0E0:
            func_C0E0(); break;
        case 0xC0EA:
            func_C0EA(); break;
        case 0xC0F5:
            func_C0F5(); break;
        case 0xF35F:
            func_F35F(); break;
        case 0xF360:
            func_F360(); break;
        case 0xF3F2:
            func_F3F2(); break;
        case 0xF3F3:
            func_F3F3(); break;
        case 0xF3B0:
            func_F3B0(); break;
        case 0xF6F0:
            func_F6F0(); break;
        case 0xF6F1:
            func_F6F1(); break;
        case 0xEE04:
            func_EE04(); break;
        case 0xE4BE:
            func_E4BE(); break;
        case 0xEBBE:
            func_EBBE(); break;
        case 0xF3EC:
            func_F3EC(); break;
        case 0xE7BD:
            func_E7BD(); break;
        case 0xE7BE:
            func_E7BE(); break;
        case 0xF3E7:
            func_F3E7(); break;
        case 0xF3EE:
            func_F3EE(); break;
        case 0xF3EF:
            func_F3EF(); break;
        case 0xF45A:
            func_F45A(); break;
        case 0xCE18:
            func_CE18(); break;
        case 0xCE19:
            func_CE19(); break;
        case 0xCC4D:
            func_CC4D(); break;
        case 0xF3CC:
            func_F3CC(); break;
        case 0xF3DE:
            func_F3DE(); break;
        case 0xDC21:
            func_DC21(); break;
        case 0xF7DC:
            func_F7DC(); break;
        case 0xF800:
            func_F800(); break;
        case 0xF7F0:
            func_F7F0(); break;
        case 0xF7F1:
            func_F7F1(); break;
        case 0xF80C:
            func_F80C(); break;
        case 0xF7F5:
            func_F7F5(); break;
        case 0xF7F9:
            func_F7F9(); break;
        case 0xF80F:
            func_F80F(); break;
        case 0xF810:
            func_F810(); break;
        case 0xF7FC:
            func_F7FC(); break;
        case 0xF7F7:
            func_F7F7(); break;
        case 0xF7F3:
            func_F7F3(); break;
        case 0xF7EA:
            func_F7EA(); break;
        case 0xF7EE:
            func_F7EE(); break;
        case 0xF7FE:
            func_F7FE(); break;
        case 0xF7EB:
            func_F7EB(); break;
        case 0xF802:
            func_F802(); break;
        case 0xF804:
            func_F804(); break;
        case 0xF808:
            func_F808(); break;
        case 0xF806:
            func_F806(); break;
        case 0xF80A:
            func_F80A(); break;
        case 0xF80D:
            func_F80D(); break;
        case 0xF7E3:
            func_F7E3(); break;
        case 0xF7DD:
            func_F7DD(); break;
        case 0xF7EF:
            func_F7EF(); break;
        case 0xF260:
            func_F260(); break;
        case 0xF261:
            func_F261(); break;
        case 0xF359:
            func_F359(); break;
        case 0xE9A3:
            func_E9A3(); break;
        case 0xF4C9:
            func_F4C9(); break;
        case 0xEE03:
            func_EE03(); break;
        case 0xCE03:
            func_CE03(); break;
        case 0xC7CA:
            func_C7CA(); break;
        case 0xEE48:
            func_EE48(); break;
        case 0xEE49:
            func_EE49(); break;
        case 0xD902:
            func_D902(); break;
        case 0xF4CC:
            func_F4CC(); break;
        case 0xF4CD:
            func_F4CD(); break;
        case 0xD0F4:
            func_D0F4(); break;
        case 0xF4C2:
            func_F4C2(); break;
        case 0xF4C3:
            func_F4C3(); break;
        case 0xC7BA:
            func_C7BA(); break;
        case 0xF4C7:
            func_F4C7(); break;
        case 0xF4C8:
            func_F4C8(); break;
        case 0xEDC1:
            func_EDC1(); break;
        case 0xE6ED:
            func_E6ED(); break;
        case 0xC93E:
            func_C93E(); break;
        case 0xF417:
            func_F417(); break;
        case 0xF418:
            func_F418(); break;
        case 0xF6F6:
            func_F6F6(); break;
        case 0xF7F6:
            func_F7F6(); break;
        case 0xF514:
            func_F514(); break;
        case 0xD220:
            func_D220(); break;
        case 0xF516:
            func_F516(); break;
        case 0xF517:
            func_F517(); break;
        case 0xE19A:
            func_E19A(); break;
        case 0xF51C:
            func_F51C(); break;
        case 0xF51D:
            func_F51D(); break;
        case 0xD2D1:
            func_D2D1(); break;
        case 0xD08B:
            func_D08B(); break;
        case 0xF533:
            func_F533(); break;
        case 0xF534:
            func_F534(); break;
        case 0xF538:
            func_F538(); break;
        case 0xF539:
            func_F539(); break;
        case 0xFC04:
            func_FC04(); break;
        case 0xFC05:
            func_FC05(); break;
        case 0xE641:
            func_E641(); break;
        case 0xF587:
            func_F587(); break;
        case 0xDEAA:
            func_DEAA(); break;
        case 0xF58A:
            func_F58A(); break;
        case 0xF590:
            func_F590(); break;
        case 0xF58C:
            func_F58C(); break;
        case 0xF58E:
            func_F58E(); break;
        case 0xF592:
            func_F592(); break;
        case 0xF595:
            func_F595(); break;
        case 0xF597:
            func_F597(); break;
        case 0xF594:
            func_F594(); break;
        case 0xF58B:
            func_F58B(); break;
        case 0xF599:
            func_F599(); break;
        case 0xF08B:
            func_F08B(); break;
        case 0xF08D:
            func_F08D(); break;
        case 0xF9A9:
            func_F9A9(); break;
        case 0xF7C6:
            func_F7C6(); break;
        case 0xF7D9:
            func_F7D9(); break;
        case 0xF7D5:
            func_F7D5(); break;
        case 0xF7C7:
            func_F7C7(); break;
        case 0xD1B9:
            func_D1B9(); break;
        case 0xF02A:
            func_F02A(); break;
        case 0xF02B:
            func_F02B(); break;
        case 0xF938:
            func_F938(); break;
        case 0xC933:
            func_C933(); break;
        case 0xC910:
            func_C910(); break;
        case 0xF615:
            func_F615(); break;
        case 0xF616:
            func_F616(); break;
        case 0xFE04:
            func_FE04(); break;
        case 0xC1FE:
            func_C1FE(); break;
        case 0xFAAA:
            func_FAAA(); break;
        case 0xFA60:
            func_FA60(); break;
        case 0xF9A0:
            func_F9A0(); break;
        case 0xF9A1:
            func_F9A1(); break;
        case 0xF9A5:
            func_F9A5(); break;
        case 0xC4FA:
            func_C4FA(); break;
        case 0xD092:
            func_D092(); break;
        case 0xF9A8:
            func_F9A8(); break;
        case 0xF9B5:
            func_F9B5(); break;
        case 0xF9D0:
            func_F9D0(); break;
        case 0xF9AA:
            func_F9AA(); break;
        case 0xF9B3:
            func_F9B3(); break;
        case 0xF9C7:
            func_F9C7(); break;
        case 0xF9ED:
            func_F9ED(); break;
        case 0xF9B1:
            func_F9B1(); break;
        case 0xF9B9:
            func_F9B9(); break;
        case 0xF9E1:
            func_F9E1(); break;
        case 0xF6C6:
            func_F6C6(); break;
        case 0xF6C7:
            func_F6C7(); break;
        case 0xF6C9:
            func_F6C9(); break;
        case 0xF700:
            func_F700(); break;
        case 0xF701:
            func_F701(); break;
        case 0xF70B:
            func_F70B(); break;
        case 0xF709:
            func_F709(); break;
        case 0xF6D1:
            func_F6D1(); break;
        case 0xF6F7:
            func_F6F7(); break;
        case 0xF6F8:
            func_F6F8(); break;
        case 0xF6FD:
            func_F6FD(); break;
        case 0xF706:
            func_F706(); break;
        case 0xF6DF:
            func_F6DF(); break;
        case 0xF6E6:
            func_F6E6(); break;
        case 0xF6E1:
            func_F6E1(); break;
        case 0xF6EC:
            func_F6EC(); break;
        case 0xF6D8:
            func_F6D8(); break;
        case 0xF6DA:
            func_F6DA(); break;
        case 0xF6F4:
            func_F6F4(); break;
        case 0xF6E4:
            func_F6E4(); break;
        case 0xF70E:
            func_F70E(); break;
        case 0xF707:
            func_F707(); break;
        case 0xF713:
            func_F713(); break;
        case 0xF723:
            func_F723(); break;
        case 0xCFD1:
            func_CFD1(); break;
        case 0xF72E:
            func_F72E(); break;
        case 0xF81C:
            func_F81C(); break;
        case 0xF72F:
            func_F72F(); break;
        case 0xF739:
            func_F739(); break;
        case 0xFC11:
            func_FC11(); break;
        case 0xFC08:
            func_FC08(); break;
        case 0xFB9A:
            func_FB9A(); break;
        case 0xFBCC:
            func_FBCC(); break;
        case 0xF7AB:
            func_F7AB(); break;
        case 0xFBFF:
            func_FBFF(); break;
        case 0xF8FF:
            func_F8FF(); break;
        case 0xF7A1:
            func_F7A1(); break;
        case 0xF85F:
            func_F85F(); break;
        case 0xFB05:
            func_FB05(); break;
        case 0xFAB0:
            func_FAB0(); break;
        case 0xFBB0:
            func_FBB0(); break;
        case 0xF85B:
            func_F85B(); break;
        case 0xF850:
            func_F850(); break;
        case 0xFBB5:
            func_FBB5(); break;
        case 0xFB70:
            func_FB70(); break;
        case 0xFB01:
            func_FB01(); break;
        case 0xFB8B:
            func_FB8B(); break;
        case 0xF741:
            func_F741(); break;
        case 0xFA7B:
            func_FA7B(); break;
        case 0xFA85:
            func_FA85(); break;
        case 0xFA86:
            func_FA86(); break;
        case 0xF7BC:
            func_F7BC(); break;
        case 0xFB0F:
            func_FB0F(); break;
        case 0xF8F1:
            func_F8F1(); break;
        case 0xFAFF:
            func_FAFF(); break;
        case 0xFA48:
            func_FA48(); break;
        case 0xF851:
            func_F851(); break;
        case 0xFB09:
            func_FB09(); break;
        case 0xFA7A:
            func_FA7A(); break;
        case 0xFAF5:
            func_FAF5(); break;
        case 0xF855:
            func_F855(); break;
        case 0xFA8C:
            func_FA8C(); break;
        case 0xF903:
            func_F903(); break;
        case 0xFC03:
            func_FC03(); break;
        case 0xFB11:
            func_FB11(); break;
        case 0xFB31:
            func_FB31(); break;
        case 0xFB8D:
            func_FB8D(); break;
        case 0xFB8E:
            func_FB8E(); break;
        case 0xFC8D:
            func_FC8D(); break;
        case 0xFCE3:
            func_FCE3(); break;
        case 0xF8D1:
            func_F8D1(); break;
        case 0xFCFE:
            func_FCFE(); break;
        case 0xFBD1:
            func_FBD1(); break;
        case 0xFABE:
            func_FABE(); break;
        case 0xFBED:
            func_FBED(); break;
        case 0xFCCE:
            func_FCCE(); break;
        case 0xFC01:
            func_FC01(); break;
        case 0xFD00:
            func_FD00(); break;
        case 0xFB80:
            func_FB80(); break;
        case 0xF918:
            func_F918(); break;
        case 0xF919:
            func_F919(); break;
        case 0xF8F7:
            func_F8F7(); break;
        case 0xF8F9:
            func_F8F9(); break;
        case 0xF939:
            func_F939(); break;
        case 0xFAA9:
            func_FAA9(); break;
        case 0xFA61:
            func_FA61(); break;
        case 0xF732:
            func_F732(); break;
        case 0xF733:
            func_F733(); break;
        case 0xF861:
            func_F861(); break;
        case 0xF773:
            func_F773(); break;
        case 0xF79C:
            func_F79C(); break;
        case 0xF798:
            func_F798(); break;
        case 0xF86E:
            func_F86E(); break;
        case 0xF86F:
            func_F86F(); break;
        case 0xF8AD:
            func_F8AD(); break;
        case 0xF8BD:
            func_F8BD(); break;
        case 0xF8BE:
            func_F8BE(); break;
        case 0xF8CE:
            func_F8CE(); break;
        case 0xF8CF:
            func_F8CF(); break;
        case 0xF902:
            func_F902(); break;
        case 0xFCAA:
            func_FCAA(); break;
        case 0xF99E:
            func_F99E(); break;
        case 0xFB66:
            func_FB66(); break;
        case 0xFB49:
            func_FB49(); break;
        case 0xFB85:
            func_FB85(); break;
        case 0xFB86:
            func_FB86(); break;
        case 0xFB91:
            func_FB91(); break;
        case 0xFB92:
            func_FB92(); break;
        case 0xFBE0:
            func_FBE0(); break;
        case 0xFBA3:
            func_FBA3(); break;
        case 0xFBA4:
            func_FBA4(); break;
        case 0xFBB3:
            func_FBB3(); break;
        case 0xFBB4:
            func_FBB4(); break;
        case 0xFC0B:
            func_FC0B(); break;
        case 0xFCB1:
            func_FCB1(); break;
        case 0xFCF7:
            func_FCF7(); break;
        case 0xFCD5:
            func_FCD5(); break;
        case 0xFBC1:
            func_FBC1(); break;
        case 0xFBDE:
            func_FBDE(); break;
        case 0xFA75:
            func_FA75(); break;
        case 0xFBD5:
            func_FBD5(); break;
        case 0xF8FB:
            func_F8FB(); break;
        case 0xFBFB:
            func_FBFB(); break;
        case 0xFB7A:
            func_FB7A(); break;
        case 0xF7BF:
            func_F7BF(); break;
        case 0xFAB2:
            func_FAB2(); break;
        case 0xF7C5:
            func_F7C5(); break;
        case 0xF832:
            func_F832(); break;
        case 0xF8EA:
            func_F8EA(); break;
        case 0xFAB6:
            func_FAB6(); break;
        case 0xF8F3:
            func_F8F3(); break;
        case 0xF864:
            func_F864(); break;
        case 0xFC06:
            func_FC06(); break;
        case 0xF8FC:
            func_F8FC(); break;
        case 0xFCA6:
            func_FCA6(); break;
        case 0xF8B0:
            func_F8B0(); break;
        case 0xF826:
            func_F826(); break;
        case 0xF8B2:
            func_F8B2(); break;
        case 0xF8F5:
            func_F8F5(); break;
        case 0xFAB9:
            func_FAB9(); break;
        case 0xFA62:
            func_FA62(); break;
        case 0xF7B6:
            func_F7B6(); break;
        case 0xFA83:
            func_FA83(); break;
        case 0xF923:
            func_F923(); break;
        case 0xF8E0:
            func_F8E0(); break;
        case 0xF730:
            func_F730(); break;
        case 0xF7B9:
            func_F7B9(); break;
        case 0xFAAD:
            func_FAAD(); break;
        case 0xFAA5:
            func_FAA5(); break;
        case 0xFBA5:
            func_FBA5(); break;
        case 0xF848:
            func_F848(); break;
        case 0xF84A:
            func_F84A(); break;
        case 0xFB78:
            func_FB78(); break;
        case 0xFBD8:
            func_FBD8(); break;
        case 0xFA40:
            func_FA40(); break;
        case 0xF8C8:
            func_F8C8(); break;
        case 0xF844:
            func_F844(); break;
        case 0xF838:
            func_F838(); break;
        case 0xF8E8:
            func_F8E8(); break;
        case 0xF8EF:
            func_F8EF(); break;
        case 0xF943:
            func_F943(); break;
        case 0xFB60:
            func_FB60(); break;
        case 0xF731:
            func_F731(); break;
        case 0xF735:
            func_F735(); break;
        case 0xF736:
            func_F736(); break;
        case 0xF770:
            func_F770(); break;
        case 0xF772:
            func_F772(); break;
        case 0xF778:
            func_F778(); break;
        case 0xF781:
            func_F781(); break;
        case 0xF78B:
            func_F78B(); break;
        case 0xF797:
            func_F797(); break;
        case 0xF791:
            func_F791(); break;
        case 0xF787:
            func_F787(); break;
        case 0xDFD1:
            func_DFD1(); break;
        case 0xF79D:
            func_F79D(); break;
        case 0xF7AE:
            func_F7AE(); break;
        case 0xF7A7:
            func_F7A7(); break;
        case 0xF705:
            func_F705(); break;
        case 0xF9F9:
            func_F9F9(); break;
        case 0xD095:
            func_D095(); break;
        case 0xE096:
            func_E096(); break;
        case 0xF087:
            func_F087(); break;
        case 0xF0C9:
            func_F0C9(); break;
        case 0xF0CA:
            func_F0CA(); break;
        case 0xE909:
            func_E909(); break;
        case 0xF0E9:
            func_F0E9(); break;
        case 0xF0EA:
            func_F0EA(); break;
        case 0xC9F1:
            func_C9F1(); break;
        case 0xE902:
            func_E902(); break;
        case 0xE903:
            func_E903(); break;
        case 0xF829:
            func_F829(); break;
        case 0xF82A:
            func_F82A(); break;
        case 0xF869:
            func_F869(); break;
        case 0xF86A:
            func_F86A(); break;
        case 0xF873:
            func_F873(); break;
        case 0xF890:
            func_F890(); break;
        case 0xF87B:
            func_F87B(); break;
        case 0xF8A9:
            func_F8A9(); break;
        case 0xF8AC:
            func_F8AC(); break;
        case 0xF883:
            func_F883(); break;
        case 0xF886:
            func_F886(); break;
        case 0xF88B:
            func_F88B(); break;
        case 0xF892:
            func_F892(); break;
        case 0xF895:
            func_F895(); break;
        case 0xF897:
            func_F897(); break;
        case 0xF89D:
            func_F89D(); break;
        case 0xF8A0:
            func_F8A0(); break;
        case 0xF8A3:
            func_F8A3(); break;
        case 0xF8A6:
            func_F8A6(); break;
        case 0xEC14:
            func_EC14(); break;
        case 0xEC15:
            func_EC15(); break;
        case 0xC2B1:
            func_C2B1(); break;
        case 0xD3C2:
            func_D3C2(); break;
        case 0xD3C3:
            func_D3C3(); break;
        case 0xF82B:
            func_F82B(); break;
        case 0xC806:
            func_C806(); break;
        case 0xC040:
            func_C040(); break;
        case 0xF8BF:
            func_F8BF(); break;
        case 0xF8C0:
            func_F8C0(); break;
        case 0xCEBD:
            func_CEBD(); break;
        case 0xF906:
            func_F906(); break;
        case 0xFCA9:
            func_FCA9(); break;
        case 0xF9F3:
            func_F9F3(); break;
        case 0xC528:
            func_C528(); break;
        case 0xFAC9:
            func_FAC9(); break;
        case 0xC986:
            func_C986(); break;
        case 0xC987:
            func_C987(); break;
        case 0xF110:
            func_F110(); break;
        case 0xF111:
            func_F111(); break;
        case 0xFB4B:
            func_FB4B(); break;
        case 0xFB65:
            func_FB65(); break;
        case 0xFB6E:
            func_FB6E(); break;
        case 0xFB76:
            func_FB76(); break;
        case 0xFB77:
            func_FB77(); break;
        case 0xD6FC:
            func_D6FC(); break;
        case 0xFBD6:
            func_FBD6(); break;
        case 0xE0FB:
            func_E0FB(); break;
        case 0xFBE1:
            func_FBE1(); break;
        case 0xE7FB:
            func_E7FB(); break;
        case 0xE7FC:
            func_E7FC(); break;
        case 0xFBE7:
            func_FBE7(); break;
        case 0xFBE8:
            func_FBE8(); break;
        case 0xF0FC:
            func_F0FC(); break;
        case 0xFC42:
            func_FC42(); break;
        case 0xFC51:
            func_FC51(); break;
        case 0xFC52:
            func_FC52(); break;
        case 0xFBCA:
            func_FBCA(); break;
        case 0xFBCB:
            func_FBCB(); break;
        case 0xFC58:
            func_FC58(); break;
        case 0xFC59:
            func_FC59(); break;
        case 0xFC65:
            func_FC65(); break;
        case 0xFC66:
            func_FC66(); break;
        case 0xFC73:
            func_FC73(); break;
        case 0xFBBA:
            func_FBBA(); break;
        case 0xFC31:
            func_FC31(); break;
        case 0xFC3A:
            func_FC3A(); break;
        case 0xFC26:
            func_FC26(); break;
        case 0xFC16:
            func_FC16(); break;
        case 0xFC17:
            func_FC17(); break;
        case 0xFC7E:
            func_FC7E(); break;
        case 0xFC7F:
            func_FC7F(); break;
        case 0xF205:
            func_F205(); break;
        case 0xEEF6:
            func_EEF6(); break;
        case 0xEEF7:
            func_EEF7(); break;
        case 0xDCEE:
            func_DCEE(); break;
        case 0xF0DD:
            func_F0DD(); break;
        case 0xF0D5:
            func_F0D5(); break;
        case 0xDAF0:
            func_DAF0(); break;
        case 0xF200:
            func_F200(); break;
        case 0xF201:
            func_F201(); break;
        case 0xE2F2:
            func_E2F2(); break;
        case 0xE2F3:
            func_E2F3(); break;
        case 0xC0E3:
            func_C0E3(); break;
        case 0xC0C0:
            func_C0C0(); break;
        case 0xC0C1:
            func_C0C1(); break;
        case 0xF4C0:
            func_F4C0(); break;
        case 0xECE5:
            func_ECE5(); break;
        case 0xE0EC:
            func_E0EC(); break;
        case 0xEAD5:
            func_EAD5(); break;
        case 0xDCEB:
            func_DCEB(); break;
        case 0xD8DD:
            func_D8DD(); break;
        case 0xD8D8:
            func_D8D8(); break;
        case 0xF20D:
            func_F20D(); break;
        case 0xF20E:
            func_F20E(); break;
        case 0xF4F2:
            func_F4F2(); break;
        case 0xDEDF:
            func_DEDF(); break;
        case 0xE008:
            func_E008(); break;
        case 0xDCDB:
            func_DCDB(); break;
        case 0xF2DD:
            func_F2DD(); break;
        case 0xECE0:
            func_ECE0(); break;
        case 0xECE2:
            func_ECE2(); break;
        case 0xECF1:
            func_ECF1(); break;
        case 0xECE4:
            func_ECE4(); break;
        case 0xECF6:
            func_ECF6(); break;
        case 0xECEE:
            func_ECEE(); break;
        case 0xDCED:
            func_DCED(); break;
        case 0xEE08:
            func_EE08(); break;
        case 0xF0EE:
            func_F0EE(); break;
        case 0xF0EF:
            func_F0EF(); break;
        case 0xEAEB:
            func_EAEB(); break;
        case 0xEED5:
            func_EED5(); break;
        case 0xE2EE:
            func_E2EE(); break;
        case 0xE2EF:
            func_E2EF(); break;
        case 0xD8E4:
            func_D8E4(); break;
        case 0xEA08:
            func_EA08(); break;
        case 0xEA09:
            func_EA09(); break;
        case 0xF6EA:
            func_F6EA(); break;
        case 0xF6EB:
            func_F6EB(); break;
        case 0xF2F7:
            func_F2F7(); break;
        case 0xD800:
            func_D800(); break;
        case 0xD801:
            func_D801(); break;
        case 0xC0D9:
            func_C0D9(); break;
        case 0xEEEB:
            func_EEEB(); break;
        case 0xF2C0:
            func_F2C0(); break;
        case 0xF2C1:
            func_F2C1(); break;
        case 0xDCF2:
            func_DCF2(); break;
        case 0xDCF3:
            func_DCF3(); break;
        case 0xDA08:
            func_DA08(); break;
        case 0xD4DA:
            func_D4DA(); break;
        case 0xF4D4:
            func_F4D4(); break;
        case 0xF4D5:
            func_F4D5(); break;
        case 0xF2D4:
            func_F2D4(); break;
        case 0xF2D5:
            func_F2D5(); break;
        case 0xF208:
            func_F208(); break;
        case 0xF209:
            func_F209(); break;
        case 0xEEF2:
            func_EEF2(); break;
        case 0xD4E4:
            func_D4E4(); break;
        case 0xE8D4:
            func_E8D4(); break;
        case 0xE8D5:
            func_E8D5(); break;
        case 0xE2F5:
            func_E2F5(); break;
        case 0xE6EC:
            func_E6EC(); break;
        case 0xF2E7:
            func_F2E7(); break;
        case 0xD6DC:
            func_D6DC(); break;
        case 0xDCF5:
            func_DCF5(); break;
        case 0xD4DC:
            func_D4DC(); break;
        case 0xFCB0:
            func_FCB0(); break;
        case 0xD4FD:
            func_D4FD(); break;
        case 0xE0D4:
            func_E0D4(); break;
        case 0xFAD4:
            func_FAD4(); break;
        case 0xD4FA:
            func_D4FA(); break;
        case 0xD4FB:
            func_D4FB(); break;
        case 0xE6E4:
            func_E6E4(); break;
        case 0xE6E5:
            func_E6E5(); break;
        case 0xC0E7:
            func_C0E7(); break;
        case 0xECC0:
            func_ECC0(); break;
        case 0xE6F6:
            func_E6F6(); break;
        case 0xE6F7:
            func_E6F7(); break;
        case 0xF2B0:
            func_F2B0(); break;
        case 0xF2B1:
            func_F2B1(); break;
        case 0xDCBF:
            func_DCBF(); break;
        case 0xD8EC:
            func_D8EC(); break;
        case 0xE2D9:
            func_E2D9(); break;
        case 0xD8B6:
            func_D8B6(); break;
        case 0xE611:
            func_E611(); break;
        case 0xD4E6:
            func_D4E6(); break;
        case 0xE4EA:
            func_E4EA(); break;
        case 0xF4E4:
            func_F4E4(); break;
        case 0xF4E5:
            func_F4E5(); break;
        case 0xDEB0:
            func_DEB0(); break;
        case 0xF6DE:
            func_F6DE(); break;
        case 0xF6E7:
            func_F6E7(); break;
        case 0xDAF7:
            func_DAF7(); break;
        case 0xD810:
            func_D810(); break;
        case 0xF2E4:
            func_F2E4(); break;
        case 0xF2E5:
            func_F2E5(); break;
        case 0xD4F2:
            func_D4F2(); break;
        case 0xE210:
            func_E210(); break;
        case 0xF0E4:
            func_F0E4(); break;
        case 0xF0E5:
            func_F0E5(); break;
        case 0xE6D5:
            func_E6D5(); break;
        case 0xFCD4:
            func_FCD4(); break;
        case 0xD4EC:
            func_D4EC(); break;
        case 0xF6E0:
            func_F6E0(); break;
        case 0xD6D4:
            func_D6D4(); break;
        case 0xD6D5:
            func_D6D5(); break;
        case 0xD4D6:
            func_D4D6(); break;
        case 0xD4D7:
            func_D4D7(); break;
        case 0xD4EE:
            func_D4EE(); break;
        case 0xF2F4:
            func_F2F4(); break;
        case 0xF2F5:
            func_F2F5(); break;
        case 0xE6B6:
            func_E6B6(); break;
        case 0xE6B7:
            func_E6B7(); break;
        case 0xE011:
            func_E011(); break;
        case 0xE2DA:
            func_E2DA(); break;
        case 0xE2DB:
            func_E2DB(); break;
        case 0xDAED:
            func_DAED(); break;
        case 0xF2B6:
            func_F2B6(); break;
        case 0xF2B7:
            func_F2B7(); break;
        case 0xF40C:
            func_F40C(); break;
        case 0xF4EC:
            func_F4EC(); break;
        case 0xF4ED:
            func_F4ED(); break;
        case 0xF6ED:
            func_F6ED(); break;
        case 0xDCF6:
            func_DCF6(); break;
        case 0xDADD:
            func_DADD(); break;
        case 0xF748:
            func_F748(); break;
        case 0xF4E0:
            func_F4E0(); break;
        case 0xF402:
            func_F402(); break;
        case 0x8D68:
            switch (_bank) {
                case 0: func_8D68_b0(); break;
                case 1: func_8D68_b1(); break;
                case 2: func_8D68_b2(); break;
                case 3: func_8D68_b3(); break;
                case 4: func_8D68_b4(); break;
                case 6: func_8D68_b6(); break;
                case 5: func_8D68_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFB06:
            func_FB06(); break;
        case 0x86BA:
            switch (_bank) {
                case 7: func_C6BA(); break;
                case 0: func_86BA_b0(); break;
                case 1: func_86BA_b1(); break;
                case 2: func_86BA_b2(); break;
                case 3: func_86BA_b3(); break;
                case 4: func_86BA_b4(); break;
                case 5: func_86BA_b5(); break;
                case 6: func_86BA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF920:
            func_F920(); break;
        case 0xFD8C:
            func_FD8C(); break;
        case 0xFDD2:
            func_FDD2(); break;
        case 0xE549:
            func_E549(); break;
        case 0xC55F:
            func_C55F(); break;
        case 0xC5E0:
            func_C5E0(); break;
        case 0xD5A3:
            func_D5A3(); break;
        case 0xD8AE:
            func_D8AE(); break;
        case 0xDFE9:
            func_DFE9(); break;
        case 0xC98E:
            func_C98E(); break;
        case 0xE0AC:
            func_E0AC(); break;
        case 0xD0B3:
            func_D0B3(); break;
        case 0x80A9:
            switch (_bank) {
                case 7: func_C0A9(); break;
                case 0: func_80A9_b0(); break;
                case 1: func_80A9_b1(); break;
                case 2: func_80A9_b2(); break;
                case 3: func_80A9_b3(); break;
                case 4: func_80A9_b4(); break;
                case 5: func_80A9_b5(); break;
                case 6: func_80A9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCD1E:
            func_CD1E(); break;
        case 0xC6C6:
            func_C6C6(); break;
        case 0x9E5F:
            switch (_bank) {
                case 7: func_DE5F(); break;
                case 0: func_9E5F_b0(); break;
                case 1: func_9E5F_b1(); break;
                case 2: func_9E5F_b2(); break;
                case 3: func_9E5F_b3(); break;
                case 4: func_9E5F_b4(); break;
                case 6: func_9E5F_b6(); break;
                case 5: func_9E5F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE5F:
            switch (_bank) {
                case 0: func_BE5F_b0(); break;
                case 1: func_BE5F_b1(); break;
                case 2: func_BE5F_b2(); break;
                case 3: func_BE5F_b3(); break;
                case 4: func_BE5F_b4(); break;
                case 5: func_BE5F_b5(); break;
                case 6: func_BE5F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC02C:
            func_C02C(); break;
        case 0xB1C8:
            switch (_bank) {
                case 0: func_B1C8_b0(); break;
                case 1: func_B1C8_b1(); break;
                case 2: func_B1C8_b2(); break;
                case 3: func_B1C8_b3(); break;
                case 5: func_B1C8_b5(); break;
                case 6: func_B1C8_b6(); break;
                case 4: func_B1C8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1D0:
            switch (_bank) {
                case 5: func_B1D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC4F3:
            func_C4F3(); break;
        case 0xC4FD:
            func_C4FD(); break;
        case 0xC4FF:
            func_C4FF(); break;
        case 0xB576:
            switch (_bank) {
                case 7: func_F576(); break;
                case 0: func_B576_b0(); break;
                case 1: func_B576_b1(); break;
                case 2: func_B576_b2(); break;
                case 3: func_B576_b3(); break;
                case 5: func_B576_b5(); break;
                case 6: func_B576_b6(); break;
                case 4: func_B576_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A48:
            switch (_bank) {
                case 0: func_8A48_b0(); break;
                case 1: func_8A48_b1(); break;
                case 2: func_8A48_b2(); break;
                case 3: func_8A48_b3(); break;
                case 4: func_8A48_b4(); break;
                case 5: func_8A48_b5(); break;
                case 6: func_8A48_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFE44:
            func_FE44(); break;
        case 0xE552:
            func_E552(); break;
        case 0x8018:
            switch (_bank) {
                case 3: func_8018_b3(); break;
                case 0: func_8018_b0(); break;
                case 1: func_8018_b1(); break;
                case 2: func_8018_b2(); break;
                case 4: func_8018_b4(); break;
                case 5: func_8018_b5(); break;
                case 6: func_8018_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x801B:
            switch (_bank) {
                case 3: func_801B_b3(); break;
                case 0: func_801B_b0(); break;
                case 1: func_801B_b1(); break;
                case 2: func_801B_b2(); break;
                case 4: func_801B_b4(); break;
                case 5: func_801B_b5(); break;
                case 6: func_801B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF8C3:
            func_F8C3(); break;
        case 0xE40B:
            func_E40B(); break;
        case 0xE9FF:
            func_E9FF(); break;
        case 0xCA45:
            func_CA45(); break;
        case 0xCAFA:
            func_CAFA(); break;
        case 0xDB52:
            func_DB52(); break;
        case 0xCE09:
            func_CE09(); break;
        case 0xA9B9:
            switch (_bank) {
                case 7: func_E9B9(); break;
                case 0: func_A9B9_b0(); break;
                case 1: func_A9B9_b1(); break;
                case 2: func_A9B9_b2(); break;
                case 3: func_A9B9_b3(); break;
                case 4: func_A9B9_b4(); break;
                case 5: func_A9B9_b5(); break;
                case 6: func_A9B9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E4C:
            switch (_bank) {
                case 7: func_DE4C(); break;
                case 0: func_9E4C_b0(); break;
                case 1: func_9E4C_b1(); break;
                case 2: func_9E4C_b2(); break;
                case 3: func_9E4C_b3(); break;
                case 4: func_9E4C_b4(); break;
                case 5: func_9E4C_b5(); break;
                case 6: func_9E4C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE14D:
            func_E14D(); break;
        case 0xF8DA:
            func_F8DA(); break;
        case 0xF34B:
            func_F34B(); break;
        case 0xA248:
            switch (_bank) {
                case 0: func_A248_b0(); break;
                case 1: func_A248_b1(); break;
                case 2: func_A248_b2(); break;
                case 3: func_A248_b3(); break;
                case 4: func_A248_b4(); break;
                case 5: func_A248_b5(); break;
                case 6: func_A248_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCA22:
            func_CA22(); break;
        case 0xFD6C:
            func_FD6C(); break;
        case 0xE61F:
            func_E61F(); break;
        case 0xEA31:
            func_EA31(); break;
        case 0xB2F6:
            switch (_bank) {
                case 0: func_B2F6_b0(); break;
                case 1: func_B2F6_b1(); break;
                case 2: func_B2F6_b2(); break;
                case 3: func_B2F6_b3(); break;
                case 6: func_B2F6_b6(); break;
                case 5: func_B2F6_b5(); break;
                case 4: func_B2F6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9406:
            switch (_bank) {
                case 7: func_D406(); break;
                case 0: func_9406_b0(); break;
                case 1: func_9406_b1(); break;
                case 2: func_9406_b2(); break;
                case 3: func_9406_b3(); break;
                case 4: func_9406_b4(); break;
                case 6: func_9406_b6(); break;
                case 5: func_9406_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCBB2:
            func_CBB2(); break;
        case 0xFD43:
            func_FD43(); break;
        case 0xCBA8:
            func_CBA8(); break;
        case 0xEF48:
            func_EF48(); break;
        case 0xC1B6:
            func_C1B6(); break;
        case 0xFD1F:
            func_FD1F(); break;
        case 0xFB30:
            func_FB30(); break;
        case 0xFC2B:
            func_FC2B(); break;
        case 0xFC54:
            func_FC54(); break;
        case 0xFC1D:
            func_FC1D(); break;
        case 0xFC1F:
            func_FC1F(); break;
        case 0xFBFE:
            func_FBFE(); break;
        case 0xDAE7:
            func_DAE7(); break;
        case 0xD8D1:
            func_D8D1(); break;
        case 0xA2D9:
            switch (_bank) {
                case 7: func_E2D9(); break;
                case 0: func_A2D9_b0(); break;
                case 1: func_A2D9_b1(); break;
                case 2: func_A2D9_b2(); break;
                case 3: func_A2D9_b3(); break;
                case 4: func_A2D9_b4(); break;
                case 5: func_A2D9_b5(); break;
                case 6: func_A2D9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE8D3:
            func_E8D3(); break;
        case 0xD6D3:
            func_D6D3(); break;
        case 0xD473:
            func_D473(); break;
        case 0xD6BB:
            func_D6BB(); break;
        case 0x866E:
            switch (_bank) {
                case 4: func_866E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8671:
            switch (_bank) {
                case 4: func_8671_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8679:
            switch (_bank) {
                case 4: func_8679_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DF1:
            switch (_bank) {
                case 1: func_9DF1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE71:
            switch (_bank) {
                case 4: func_BE71_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE5C:
            switch (_bank) {
                case 5: func_BE5C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB554:
            switch (_bank) {
                case 6: func_B554_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB55A:
            switch (_bank) {
                case 6: func_B55A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB571:
            switch (_bank) {
                case 6: func_B571_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB570:
            switch (_bank) {
                case 6: func_B570_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91A0:
            switch (_bank) {
                case 5: func_91A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91A9:
            switch (_bank) {
                case 5: func_91A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91A5:
            switch (_bank) {
                case 5: func_91A5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91AC:
            switch (_bank) {
                case 5: func_91AC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1A0:
            switch (_bank) {
                case 5: func_B1A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCB37:
            func_CB37(); break;
        case 0x8611:
            switch (_bank) {
                case 4: func_8611_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCBC9:
            func_CBC9(); break;
        case 0xCD00:
            func_CD00(); break;
        case 0xD5D2:
            func_D5D2(); break;
        case 0xD3D5:
            func_D3D5(); break;
        case 0xD8DB:
            func_D8DB(); break;
        case 0xDCDF:
            func_DCDF(); break;
        case 0xE5E2:
            func_E5E2(); break;
        case 0xE3E5:
            func_E3E5(); break;
        case 0xCCC6:
            func_CCC6(); break;
        case 0xCECD:
            func_CECD(); break;
        case 0xCFD4:
            func_CFD4(); break;
        case 0xD5CF:
            func_D5CF(); break;
        case 0xD6D0:
            func_D6D0(); break;
        case 0xE2DE:
            func_E2DE(); break;
        case 0xE6E8:
            func_E6E8(); break;
        case 0xE7E9:
            func_E7E9(); break;
        case 0xEB00:
            func_EB00(); break;
        case 0xEFEC:
            func_EFEC(); break;
        case 0xF0ED:
            func_F0ED(); break;
        case 0xF5F3:
            func_F5F3(); break;
        case 0xD535:
            func_D535(); break;
        case 0xF063:
            func_F063(); break;
        case 0xF4BB:
            func_F4BB(); break;
        case 0xFC3E:
            func_FC3E(); break;
        case 0xEB06:
            func_EB06(); break;
        case 0xEB08:
            func_EB08(); break;
        case 0xEB58:
            func_EB58(); break;
        case 0xEB62:
            func_EB62(); break;
        case 0xEB1B:
            func_EB1B(); break;
        case 0xEB19:
            func_EB19(); break;
        case 0xEB0A:
            func_EB0A(); break;
        case 0xEB0D:
            func_EB0D(); break;
        case 0xEB60:
            func_EB60(); break;
        case 0xD402:
            func_D402(); break;
        case 0xD25B:
            func_D25B(); break;
        case 0xDFDB:
            func_DFDB(); break;
        case 0xEC8C:
            func_EC8C(); break;
        case 0xEDFE:
            func_EDFE(); break;
        case 0xF1CF:
            func_F1CF(); break;
        case 0xEAAE:
            func_EAAE(); break;
        case 0xEAB0:
            func_EAB0(); break;
        case 0xDAEA:
            func_DAEA(); break;
        case 0xEEE3:
            func_EEE3(); break;
        case 0xEC04:
            func_EC04(); break;
        case 0xF529:
            func_F529(); break;
        case 0xE75A:
            func_E75A(); break;
        case 0xF54F:
            func_F54F(); break;
        case 0xF83F:
            func_F83F(); break;
        case 0xFB2B:
            func_FB2B(); break;
        case 0xF32F:
            func_F32F(); break;
        case 0xE940:
            func_E940(); break;
        case 0xF448:
            func_F448(); break;
        case 0xC3BE:
            func_C3BE(); break;
        case 0xD6D2:
            func_D6D2(); break;
        case 0xD7D3:
            func_D7D3(); break;
        case 0xD8D4:
            func_D8D4(); break;
        case 0xDADB:
            func_DADB(); break;
        case 0xE6E2:
            func_E6E2(); break;
        case 0xE8E4:
            func_E8E4(); break;
        case 0xE9E8:
            func_E9E8(); break;
        case 0xEDE9:
            func_EDE9(); break;
        case 0xECEF:
            func_ECEF(); break;
        case 0xFBF7:
            func_FBF7(); break;
        case 0xF9FC:
            func_F9FC(); break;
        case 0xCBCB:
            func_CBCB(); break;
        case 0xD4D0:
            func_D4D0(); break;
        case 0xD2D2:
            func_D2D2(); break;
        case 0xD7D4:
            func_D7D4(); break;
        case 0xDBE0:
            func_DBE0(); break;
        case 0xE5E9:
            func_E5E9(); break;
        case 0xE6EA:
            func_E6EA(); break;
        case 0xECE8:
            func_ECE8(); break;
        case 0xECEC:
            func_ECEC(); break;
        case 0xE8EF:
            func_E8EF(); break;
        case 0xEFF0:
            func_EFF0(); break;
        case 0xE85E:
            func_E85E(); break;
        case 0xF5CA:
            func_F5CA(); break;
        case 0xF3F5:
            func_F3F5(); break;
        case 0xFBFC:
            func_FBFC(); break;
        case 0xF330:
            func_F330(); break;
        case 0xEA3C:
            func_EA3C(); break;
        case 0xE800:
            func_E800(); break;
        case 0xEF3B:
            func_EF3B(); break;
        case 0xEF3D:
            func_EF3D(); break;
        case 0xEF5E:
            func_EF5E(); break;
        case 0xF82F:
            func_F82F(); break;
        case 0xEF67:
            func_EF67(); break;
        case 0xF3F9:
            func_F3F9(); break;
        case 0xF830:
            func_F830(); break;
        case 0xF3F6:
            func_F3F6(); break;
        case 0xD85F:
            func_D85F(); break;
        case 0xD86C:
            func_D86C(); break;
        case 0xD771:
            func_D771(); break;
        case 0xDA15:
            func_DA15(); break;
        case 0xDAAF:
            func_DAAF(); break;
        case 0xEDCA:
            func_EDCA(); break;
        case 0xF67B:
            func_F67B(); break;
        case 0xCF4A:
            func_CF4A(); break;
        case 0xF77D:
            func_F77D(); break;
        case 0xD61B:
            func_D61B(); break;
        case 0xEDFF:
            func_EDFF(); break;
        case 0xCEA2:
            func_CEA2(); break;
        case 0xF7B0:
            func_F7B0(); break;
        case 0xDFE4:
            func_DFE4(); break;
        case 0xEEA9:
            func_EEA9(); break;
        case 0xF3B5:
            func_F3B5(); break;
        case 0xEDB9:
            func_EDB9(); break;
        case 0xD2BF:
            func_D2BF(); break;
        case 0xD7DE:
            func_D7DE(); break;
        case 0xD3D8:
            func_D3D8(); break;
        case 0xDCD3:
            func_DCD3(); break;
        case 0xCCFE:
            func_CCFE(); break;
        case 0xE7B7:
            func_E7B7(); break;
        case 0xE6AD:
            func_E6AD(); break;
        case 0xE7EE:
            func_E7EE(); break;
        case 0xF1AD:
            func_F1AD(); break;
        case 0xEAD6:
            func_EAD6(); break;
        case 0xD52B:
            func_D52B(); break;
        case 0xDD18:
            func_DD18(); break;
        case 0xD4C0:
            func_D4C0(); break;
        case 0xE53F:
            func_E53F(); break;
        case 0xC0DB:
            func_C0DB(); break;
        case 0xD908:
            func_D908(); break;
        case 0xE122:
            func_E122(); break;
        case 0xF49F:
            func_F49F(); break;
        case 0xFA3C:
            func_FA3C(); break;
        case 0xC090:
            func_C090(); break;
        case 0xF924:
            func_F924(); break;
        case 0xF929:
            func_F929(); break;
        case 0xE622:
            func_E622(); break;
        case 0xE04A:
            func_E04A(); break;
        case 0xF333:
            func_F333(); break;
        case 0xD559:
            func_D559(); break;
        case 0xF21B:
            func_F21B(); break;
        case 0xE9D7:
            func_E9D7(); break;
        case 0xF676:
            func_F676(); break;
        case 0xE3F6:
            func_E3F6(); break;
        case 0xD4B3:
            func_D4B3(); break;
        case 0xEB27:
            func_EB27(); break;
        case 0xDDCA:
            func_DDCA(); break;
        case 0xF795:
            func_F795(); break;
        case 0xEC20:
            func_EC20(); break;
        case 0xF368:
            func_F368(); break;
        case 0xEE76:
            func_EE76(); break;
        case 0xD02D:
            func_D02D(); break;
        case 0xCCC9:
            func_CCC9(); break;
        case 0xC8C2:
            func_C8C2(); break;
        case 0xC3C8:
            func_C3C8(); break;
        case 0xCB68:
            func_CB68(); break;
        case 0xCBCA:
            func_CBCA(); break;
        case 0xD25D:
            func_D25D(); break;
        case 0xD7C4:
            func_D7C4(); break;
        case 0xD7B8:
            func_D7B8(); break;
        case 0xD4C5:
            func_D4C5(); break;
        case 0xCA9B:
            func_CA9B(); break;
        case 0xC8B5:
            func_C8B5(); break;
        case 0xD2DC:
            func_D2DC(); break;
        case 0xD6E0:
            func_D6E0(); break;
        case 0xD7E1:
            func_D7E1(); break;
        case 0xE2D7:
            func_E2D7(); break;
        case 0xD8E2:
            func_D8E2(); break;
        case 0xE3E4:
            func_E3E4(); break;
        case 0xE7E5:
            func_E7E5(); break;
        case 0xE6E7:
            func_E6E7(); break;
        case 0xEBE8:
            func_EBE8(); break;
        case 0xEAE9:
            func_EAE9(); break;
        case 0xEDEC:
            func_EDEC(); break;
        case 0xE9ED:
            func_E9ED(); break;
        case 0xEFEE:
            func_EFEE(); break;
        case 0xC3D0:
            func_C3D0(); break;
        case 0xD1C3:
            func_D1C3(); break;
        case 0xD1C5:
            func_D1C5(); break;
        case 0xCAD4:
            func_CAD4(); break;
        case 0xD7CC:
            func_D7CC(); break;
        case 0xDFDC:
            func_DFDC(); break;
        case 0xC8BC:
            func_C8BC(); break;
        case 0xE3DD:
            func_E3DD(); break;
        case 0xE9C9:
            func_E9C9(); break;
        case 0xD4D2:
            func_D4D2(); break;
        case 0xD5D3:
            func_D5D3(); break;
        case 0xD7AA:
            func_D7AA(); break;
        case 0xDEB2:
            func_DEB2(); break;
        case 0xDEF0:
            func_DEF0(); break;
        case 0xDEFE:
            func_DEFE(); break;
        case 0xF0FD:
            func_F0FD(); break;
        case 0xDCB2:
            func_DCB2(); break;
        case 0xF887:
            func_F887(); break;
        case 0xE7EF:
            func_E7EF(); break;
        case 0xE7FD:
            func_E7FD(); break;
        case 0xEBCF:
            func_EBCF(); break;
        case 0xE7DB:
            func_E7DB(); break;
        case 0xCFFE:
            func_CFFE(); break;
        case 0xEFBE:
            func_EFBE(); break;
        case 0xDFCD:
            func_DFCD(); break;
        case 0xDF44:
            func_DF44(); break;
        case 0xDA8A:
            func_DA8A(); break;
        case 0xF7DA:
            func_F7DA(); break;
        case 0xD93F:
            func_D93F(); break;
        case 0xEFDB:
            func_EFDB(); break;
        case 0xF10F:
            func_F10F(); break;
        case 0xEF13:
            func_EF13(); break;
        case 0xE97F:
            func_E97F(); break;
        case 0xD5CD:
            func_D5CD(); break;
        case 0xEDE0:
            func_EDE0(); break;
        case 0xEFE2:
            func_EFE2(); break;
        case 0xE6F2:
            func_E6F2(); break;
        case 0xF4E7:
            func_F4E7(); break;
        case 0xE8F4:
            func_E8F4(); break;
        case 0xE7F5:
            func_E7F5(); break;
        case 0xF9EB:
            func_F9EB(); break;
        case 0xCBC0:
            func_CBC0(); break;
        case 0xD4DF:
            func_D4DF(); break;
        case 0xE2D6:
            func_E2D6(); break;
        case 0xD7E2:
            func_D7E2(); break;
        case 0xD8E3:
            func_D8E3(); break;
        case 0xE5D9:
            func_E5D9(); break;
        case 0xE6DA:
            func_E6DA(); break;
        case 0xE8CE:
            func_E8CE(); break;
        case 0xF8EC:
            func_F8EC(); break;
        case 0xEEFA:
            func_EEFA(); break;
        case 0xE2B2:
            func_E2B2(); break;
        case 0xE7E2:
            func_E7E2(); break;
        case 0xF988:
            func_F988(); break;
        case 0xD487:
            func_D487(); break;
        case 0xD682:
            func_D682(); break;
        case 0xE2AC:
            func_E2AC(); break;
        case 0xD2B2:
            func_D2B2(); break;
        case 0xF7B3:
            func_F7B3(); break;
        case 0xEA17:
            func_EA17(); break;
        case 0xEA1D:
            func_EA1D(); break;
        case 0xEB05:
            func_EB05(); break;
        case 0xECFF:
            func_ECFF(); break;
        case 0xF413:
            func_F413(); break;
        case 0xEC17:
            func_EC17(); break;
        case 0xF105:
            func_F105(); break;
        case 0xFC14:
            func_FC14(); break;
        case 0xF584:
            func_F584(); break;
        case 0xC8F5:
            func_C8F5(); break;
        case 0xD2F5:
            func_D2F5(); break;
        case 0xEC1D:
            func_EC1D(); break;
        case 0xF884:
            func_F884(); break;
        case 0xF4FC:
            func_F4FC(); break;
        case 0xF8B1:
            func_F8B1(); break;
        case 0xF513:
            func_F513(); break;
        case 0xCEFC:
            func_CEFC(); break;
        case 0xEBFC:
            func_EBFC(); break;
        case 0xED05:
            func_ED05(); break;
        case 0xF4FB:
            func_F4FB(); break;
        case 0xE910:
            func_E910(); break;
        case 0xFC3C:
            func_FC3C(); break;
        case 0xF4FA:
            func_F4FA(); break;
        case 0xF5B1:
            func_F5B1(); break;
        case 0xF488:
            func_F488(); break;
        case 0xD8FD:
            func_D8FD(); break;
        case 0xEEF5:
            func_EEF5(); break;
        case 0xCBF5:
            func_CBF5(); break;
        case 0xEB10:
            func_EB10(); break;
        case 0xF88A:
            func_F88A(); break;
        case 0xF48A:
            func_F48A(); break;
        case 0xF8C4:
            func_F8C4(); break;
        case 0xC40F:
            func_C40F(); break;
        case 0xF5C4:
            func_F5C4(); break;
        case 0xF5C6:
            func_F5C6(); break;
        case 0xF5C9:
            func_F5C9(); break;
        case 0xF1B1:
            func_F1B1(); break;
        case 0xC40E:
            func_C40E(); break;
        case 0xFE8B:
            func_FE8B(); break;
        case 0xEA1E:
            func_EA1E(); break;
        case 0xF88C:
            func_F88C(); break;
        case 0xF407:
            func_F407(); break;
        case 0xD3FC:
            func_D3FC(); break;
        case 0xE6FC:
            func_E6FC(); break;
        case 0xF41D:
            func_F41D(); break;
        case 0xEB1A:
            func_EB1A(); break;
        case 0xF88E:
            func_F88E(); break;
        case 0xE88E:
            func_E88E(); break;
        case 0xF591:
            func_F591(); break;
        case 0xF406:
            func_F406(); break;
        case 0xF503:
            func_F503(); break;
        case 0xF490:
            func_F490(); break;
        case 0xF291:
            func_F291(); break;
        case 0xF891:
            func_F891(); break;
        case 0xF593:
            func_F593(); break;
        case 0xF53D:
            func_F53D(); break;
        case 0xF53E:
            func_F53E(); break;
        case 0xF57F:
            func_F57F(); break;
        case 0xF576:
            func_F576(); break;
        case 0xF581:
            func_F581(); break;
        case 0xF545:
            func_F545(); break;
        case 0xF571:
            func_F571(); break;
        case 0xF555:
            func_F555(); break;
        case 0xF55B:
            func_F55B(); break;
        case 0xF57B:
            func_F57B(); break;
        case 0xF550:
            func_F550(); break;
        case 0xF54C:
            func_F54C(); break;
        case 0xF583:
            func_F583(); break;
        case 0xF586:
            func_F586(); break;
        case 0xF893:
            func_F893(); break;
        case 0xF50C:
            func_F50C(); break;
        case 0xF405:
            func_F405(); break;
        case 0xF5B3:
            func_F5B3(); break;
        case 0xE8F8:
            func_E8F8(); break;
        case 0xF4E8:
            func_F4E8(); break;
        case 0xF494:
            func_F494(); break;
        case 0xEC94:
            func_EC94(); break;
        case 0xE894:
            func_E894(); break;
        case 0xF50E:
            func_F50E(); break;
        case 0xECF5:
            func_ECF5(); break;
        case 0xECF7:
            func_ECF7(); break;
        case 0xED01:
            func_ED01(); break;
        case 0xECFE:
            func_ECFE(); break;
        case 0xED08:
            func_ED08(); break;
        case 0xED06:
            func_ED06(); break;
        case 0xED03:
            func_ED03(); break;
        case 0xECFC:
            func_ECFC(); break;
        case 0xED0B:
            func_ED0B(); break;
        case 0xEAFD:
            func_EAFD(); break;
        case 0xF5FC:
            func_F5FC(); break;
        case 0xF596:
            func_F596(); break;
        case 0xF598:
            func_F598(); break;
        case 0xF5A7:
            func_F5A7(); break;
        case 0xF5A4:
            func_F5A4(); break;
        case 0xF59A:
            func_F59A(); break;
        case 0xF59C:
            func_F59C(); break;
        case 0xF59E:
            func_F59E(); break;
        case 0xF5A0:
            func_F5A0(); break;
        case 0xF5A2:
            func_F5A2(); break;
        case 0xF5A5:
            func_F5A5(); break;
        case 0xEC0A:
            func_EC0A(); break;
        case 0xF898:
            func_F898(); break;
        case 0xF3B1:
            func_F3B1(); break;
        case 0xF89C:
            func_F89C(); break;
        case 0xEDFD:
            func_EDFD(); break;
        case 0xF424:
            func_F424(); break;
        case 0xF59D:
            func_F59D(); break;
        case 0xF49D:
            func_F49D(); break;
        case 0xEA16:
            func_EA16(); break;
        case 0xF89E:
            func_F89E(); break;
        case 0xFE5D:
            func_FE5D(); break;
        case 0xE917:
            func_E917(); break;
        case 0xF544:
            func_F544(); break;
        case 0xE91C:
            func_E91C(); break;
        case 0xEB03:
            func_EB03(); break;
        case 0xF81F:
            func_F81F(); break;
        case 0xE8FC:
            func_E8FC(); break;
        case 0xF8A1:
            func_F8A1(); break;
        case 0xED04:
            func_ED04(); break;
        case 0xEDBA:
            func_EDBA(); break;
        case 0xEDBD:
            func_EDBD(); break;
        case 0xE805:
            func_E805(); break;
        case 0xE91E:
            func_E91E(); break;
        case 0xF403:
            func_F403(); break;
        case 0xE8A3:
            func_E8A3(); break;
        case 0xF8A4:
            func_F8A4(); break;
        case 0xEA00:
            func_EA00(); break;
        case 0xEA04:
            func_EA04(); break;
        case 0xEA02:
            func_EA02(); break;
        case 0xEAA3:
            func_EAA3(); break;
        case 0xF4A3:
            func_F4A3(); break;
        case 0xF107:
            func_F107(); break;
        case 0xF8A5:
            func_F8A5(); break;
        case 0xE4F8:
            func_E4F8(); break;
        case 0xF5AE:
            func_F5AE(); break;
        case 0xF4A7:
            func_F4A7(); break;
        case 0xE91B:
            func_E91B(); break;
        case 0xEC21:
            func_EC21(); break;
        case 0xEC23:
            func_EC23(); break;
        case 0xEC1E:
            func_EC1E(); break;
        case 0xF531:
            func_F531(); break;
        case 0xF9AB:
            func_F9AB(); break;
        case 0xE921:
            func_E921(); break;
        case 0xF4AC:
            func_F4AC(); break;
        case 0xF5AD:
            func_F5AD(); break;
        case 0xFE54:
            func_FE54(); break;
        case 0xEEF8:
            func_EEF8(); break;
        case 0xEC09:
            func_EC09(); break;
        case 0xF4B2:
            func_F4B2(); break;
        case 0xF522:
            func_F522(); break;
        case 0xF4B4:
            func_F4B4(); break;
        case 0xF4B8:
            func_F4B8(); break;
        case 0xE90E:
            func_E90E(); break;
        case 0xEC0F:
            func_EC0F(); break;
        case 0xEC0E:
            func_EC0E(); break;
        case 0xE90F:
            func_E90F(); break;
        case 0xED02:
            func_ED02(); break;
        case 0xF8B3:
            func_F8B3(); break;
        case 0xF41E:
            func_F41E(); break;
        case 0xE90C:
            func_E90C(); break;
        case 0xF520:
            func_F520(); break;
        case 0xF560:
            func_F560(); break;
        case 0xF422:
            func_F422(); break;
        case 0xEC12:
            func_EC12(); break;
        case 0xF8B4:
            func_F8B4(); break;
        case 0xF9B4:
            func_F9B4(); break;
        case 0xF3F8:
            func_F3F8(); break;
        case 0xE6F8:
            func_E6F8(); break;
        case 0xEC18:
            func_EC18(); break;
        case 0xE890:
            func_E890(); break;
        case 0xE050:
            func_E050(); break;
        case 0xD8DF:
            func_D8DF(); break;
        case 0xD41D:
            func_D41D(); break;
        case 0xDE02:
            func_DE02(); break;
        case 0xCC22:
            func_CC22(); break;
        case 0xE441:
            func_E441(); break;
        case 0xC4D8:
            func_C4D8(); break;
        case 0xD602:
            func_D602(); break;
        case 0xEB0B:
            func_EB0B(); break;
        case 0xE874:
            func_E874(); break;
        case 0xFB88:
            func_FB88(); break;
        case 0xE88B:
            func_E88B(); break;
        case 0xE392:
            func_E392(); break;
        case 0xD881:
            func_D881(); break;
        case 0xF381:
            func_F381(); break;
        case 0xF0B9:
            func_F0B9(); break;
        case 0xED9B:
            func_ED9B(); break;
        case 0xE61D:
            func_E61D(); break;
        case 0xE66F:
            func_E66F(); break;
        case 0xE7B9:
            func_E7B9(); break;
        case 0xEC57:
            func_EC57(); break;
        case 0xE7EC:
            func_E7EC(); break;
        case 0xE6C8:
            func_E6C8(); break;
        case 0xE717:
            func_E717(); break;
        case 0xF7D0:
            func_F7D0(); break;
        case 0xE673:
            func_E673(); break;
        case 0xF0A9:
            func_F0A9(); break;
        case 0xCA98:
            func_CA98(); break;
        case 0xCE10:
            func_CE10(); break;
        case 0xF5B9:
            func_F5B9(); break;
        case 0xF5BD:
            func_F5BD(); break;
        case 0xF5F5:
            func_F5F5(); break;
        case 0xF5F1:
            func_F5F1(); break;
        case 0xF5C0:
            func_F5C0(); break;
        case 0xF5FE:
            func_F5FE(); break;
        case 0xF5D0:
            func_F5D0(); break;
        case 0xF606:
            func_F606(); break;
        case 0xF5F4:
            func_F5F4(); break;
        case 0xF604:
            func_F604(); break;
        case 0xF5E9:
            func_F5E9(); break;
        case 0xF5F8:
            func_F5F8(); break;
        case 0xF5E5:
            func_F5E5(); break;
        case 0xF5E0:
            func_F5E0(); break;
        case 0xDB86:
            func_DB86(); break;
        case 0xF8A7:
            func_F8A7(); break;
        case 0xE463:
            func_E463(); break;
        case 0xE485:
            func_E485(); break;
        case 0xE469:
            func_E469(); break;
        case 0xE2FE:
            func_E2FE(); break;
        case 0xD6FE:
            func_D6FE(); break;
        case 0xD6A5:
            func_D6A5(); break;
        case 0xF2A6:
            func_F2A6(); break;
        case 0xF8AB:
            func_F8AB(); break;
        case 0xD6A9:
            func_D6A9(); break;
        case 0xE6D0:
            func_E6D0(); break;
        case 0xD3B9:
            func_D3B9(); break;
        case 0xF5A9:
            func_F5A9(); break;
        case 0xE4B9:
            func_E4B9(); break;
        case 0xE8B0:
            func_E8B0(); break;
        case 0xD828:
            func_D828(); break;
        case 0xD6C5:
            func_D6C5(); break;
        case 0xE7D6:
            func_E7D6(); break;
        case 0xF044:
            func_F044(); break;
        case 0xF662:
            func_F662(); break;
        case 0xED7A:
            func_ED7A(); break;
        case 0xD036:
            func_D036(); break;
        case 0xF33A:
            func_F33A(); break;
        case 0xFAF3:
            func_FAF3(); break;
        case 0xF8FA:
            func_F8FA(); break;
        case 0xFA88:
            func_FA88(); break;
        case 0xCF88:
            func_CF88(); break;
        case 0xF688:
            func_F688(); break;
        case 0xEA88:
            func_EA88(); break;
        case 0xEA89:
            func_EA89(); break;
        case 0xEAA0:
            func_EAA0(); break;
        case 0xEA8E:
            func_EA8E(); break;
        case 0xEA90:
            func_EA90(); break;
        case 0xEAA2:
            func_EAA2(); break;
        case 0xD687:
            func_D687(); break;
        case 0xF682:
            func_F682(); break;
        case 0xEE82:
            func_EE82(); break;
        case 0xD283:
            func_D283(); break;
        case 0xEE84:
            func_EE84(); break;
        case 0xEE8D:
            func_EE8D(); break;
        case 0xEEB3:
            func_EEB3(); break;
        case 0xEE91:
            func_EE91(); break;
        case 0xEEB1:
            func_EEB1(); break;
        case 0xEE8F:
            func_EE8F(); break;
        case 0xE885:
            func_E885(); break;
        case 0xEC85:
            func_EC85(); break;
        case 0xDE88:
            func_DE88(); break;
        case 0xDB88:
            func_DB88(); break;
        case 0xD888:
            func_D888(); break;
        case 0xED88:
            func_ED88(); break;
        case 0xF689:
            func_F689(); break;
        case 0xED8A:
            func_ED8A(); break;
        case 0xCB8E:
            func_CB8E(); break;
        case 0xCB99:
            func_CB99(); break;
        case 0xD88E:
            func_D88E(); break;
        case 0xEA8B:
            func_EA8B(); break;
        case 0xD48C:
            func_D48C(); break;
        case 0xE68C:
            func_E68C(); break;
        case 0xEA87:
            func_EA87(); break;
        case 0xD788:
            func_D788(); break;
        case 0xE68D:
            func_E68D(); break;
        case 0xD689:
            func_D689(); break;
        case 0xE689:
            func_E689(); break;
        case 0xE289:
            func_E289(); break;
        case 0xF69C:
            func_F69C(); break;
        case 0xF3A0:
            func_F3A0(); break;
        case 0xE4A4:
            func_E4A4(); break;
        case 0xDBBA:
            func_DBBA(); break;
        case 0xE590:
            func_E590(); break;
        case 0xE5B1:
            func_E5B1(); break;
        case 0xD993:
            func_D993(); break;
        case 0xD9BD:
            func_D9BD(); break;
        case 0xED87:
            func_ED87(); break;
        case 0xFB87:
            func_FB87(); break;
        case 0xE7E7:
            func_E7E7(); break;
        case 0xCD0D:
            func_CD0D(); break;
        case 0xCF0F:
            func_CF0F(); break;
        case 0xE3F3:
            func_E3F3(); break;
        case 0xE7F7:
            func_E7F7(); break;
        case 0xE323:
            func_E323(); break;
        case 0xD595:
            func_D595(); break;
        case 0xD7E7:
            func_D7E7(); break;
        case 0xEFFF:
            func_EFFF(); break;
        case 0xF1B9:
            func_F1B9(); break;
        case 0xE526:
            func_E526(); break;
        case 0xEC60:
            func_EC60(); break;
        case 0xF094:
            func_F094(); break;
        case 0xF3F0:
            func_F3F0(); break;
        case 0xE830:
            func_E830(); break;
        case 0xDD04:
            func_DD04(); break;
        case 0xF0BD:
            func_F0BD(); break;
        case 0xEE0B:
            func_EE0B(); break;
        case 0xF0C7:
            func_F0C7(); break;
        case 0xF098:
            func_F098(); break;
        case 0xEF29:
            func_EF29(); break;
        case 0xD7A9:
            func_D7A9(); break;
        case 0xE8EC:
            func_E8EC(); break;
        case 0xE8F0:
            func_E8F0(); break;
        case 0xF3A9:
            func_F3A9(); break;
        case 0xF3D1:
            func_F3D1(); break;
        case 0xF3AD:
            func_F3AD(); break;
        case 0xF3AF:
            func_F3AF(); break;
        case 0xF3B2:
            func_F3B2(); break;
        case 0xF3BD:
            func_F3BD(); break;
        case 0xF3B9:
            func_F3B9(); break;
        case 0xF3E0:
            func_F3E0(); break;
        case 0xF3E3:
            func_F3E3(); break;
        case 0xE6F0:
            func_E6F0(); break;
        case 0xDE98:
            func_DE98(); break;
        case 0xD320:
            func_D320(); break;
        case 0xD329:
            func_D329(); break;
        case 0xD7D0:
            func_D7D0(); break;
        case 0xEA45:
            func_EA45(); break;
        case 0xEA48:
            func_EA48(); break;
        case 0xEA58:
            func_EA58(); break;
        case 0xEA4C:
            func_EA4C(); break;
        case 0xEC6A:
            func_EC6A(); break;
        case 0xDE36:
            func_DE36(); break;
        case 0xDE38:
            func_DE38(); break;
        case 0xD610:
            func_D610(); break;
        case 0xEE33:
            func_EE33(); break;
        case 0xEE3C:
            func_EE3C(); break;
        case 0xEE60:
            func_EE60(); break;
        case 0xE4DC:
            func_E4DC(); break;
        case 0xDE05:
            func_DE05(); break;
        case 0xF5B0:
            func_F5B0(); break;
        case 0xF028:
            func_F028(); break;
        case 0xCDB9:
            func_CDB9(); break;
        case 0xD510:
            func_D510(); break;
        case 0xE3C9:
            func_E3C9(); break;
        case 0xCE97:
            func_CE97(); break;
        case 0xF014:
            func_F014(); break;
        case 0xF018:
            func_F018(); break;
        case 0xDE17:
            func_DE17(); break;
        case 0xE80A:
            func_E80A(); break;
        case 0xDE07:
            func_DE07(); break;
        case 0xFA20:
            func_FA20(); break;
        case 0xE8B8:
            func_E8B8(); break;
        case 0xF3F4:
            func_F3F4(); break;
        case 0xD2F0:
            func_D2F0(); break;
        case 0xE6D2:
            func_E6D2(); break;
        case 0xEEB2:
            func_EEB2(); break;
        case 0xEEB4:
            func_EEB4(); break;
        case 0xEEDD:
            func_EEDD(); break;
        case 0xEEDE:
            func_EEDE(); break;
        case 0xEEBA:
            func_EEBA(); break;
        case 0xEED0:
            func_EED0(); break;
        case 0xEEBD:
            func_EEBD(); break;
        case 0xEED4:
            func_EED4(); break;
        case 0xEEEA:
            func_EEEA(); break;
        case 0xEEC1:
            func_EEC1(); break;
        case 0xEEEC:
            func_EEEC(); break;
        case 0xEED2:
            func_EED2(); break;
        case 0xEED7:
            func_EED7(); break;
        case 0xEEB6:
            func_EEB6(); break;
        case 0xEEE6:
            func_EEE6(); break;
        case 0xEEEE:
            func_EEEE(); break;
        case 0xEEE8:
            func_EEE8(); break;
        case 0xEEF0:
            func_EEF0(); break;
        case 0xEEB8:
            func_EEB8(); break;
        case 0xEEE0:
            func_EEE0(); break;
        case 0xF4DC:
            func_F4DC(); break;
        case 0xD57D:
            func_D57D(); break;
        case 0xF4EE:
            func_F4EE(); break;
        case 0xD299:
            func_D299(); break;
        case 0xEC9B:
            func_EC9B(); break;
        case 0xDD53:
            func_DD53(); break;
        case 0xDE20:
            func_DE20(); break;
        case 0xEE5D:
            func_EE5D(); break;
        case 0xEE5C:
            func_EE5C(); break;
        case 0xEAD0:
            func_EAD0(); break;
        case 0xEB83:
            func_EB83(); break;
        case 0xEB84:
            func_EB84(); break;
        case 0xEB14:
            func_EB14(); break;
        case 0xD986:
            func_D986(); break;
        case 0xC92C:
            func_C92C(); break;
        case 0xCDF0:
            func_CDF0(); break;
        case 0xF1CD:
            func_F1CD(); break;
        case 0xF04E:
            func_F04E(); break;
        case 0xC8C0:
            func_C8C0(); break;
        case 0xDD49:
            func_DD49(); break;
        case 0xDD20:
            func_DD20(); break;
        case 0xD0E9:
            func_D0E9(); break;
        case 0xF6A5:
            func_F6A5(); break;
        case 0xF1A5:
            func_F1A5(); break;
        case 0xE7B0:
            func_E7B0(); break;
        case 0xF820:
            func_F820(); break;
        case 0xD6B6:
            func_D6B6(); break;
        case 0xF60F:
            func_F60F(); break;
        case 0xD452:
            func_D452(); break;
        case 0xD425:
            func_D425(); break;
        case 0xF858:
            func_F858(); break;
        case 0xE84A:
            func_E84A(); break;
        case 0xE444:
            func_E444(); break;
        case 0xDD27:
            func_DD27(); break;
        case 0xD426:
            func_D426(); break;
        case 0xD427:
            func_D427(); break;
        case 0xD527:
            func_D527(); break;
        case 0xFB28:
            func_FB28(); break;
        case 0xF854:
            func_F854(); break;
        case 0xDCB4:
            func_DCB4(); break;
        case 0xF9D8:
            func_F9D8(); break;
        case 0xF017:
            func_F017(); break;
        case 0xD5AB:
            func_D5AB(); break;
        case 0xF928:
            func_F928(); break;
        case 0xD048:
            func_D048(); break;
        case 0xD6A6:
            func_D6A6(); break;
        case 0xD456:
            func_D456(); break;
        case 0xC848:
            func_C848(); break;
        case 0xF294:
            func_F294(); break;
        case 0xE294:
            func_E294(); break;
        case 0xFBAC:
            func_FBAC(); break;
        case 0xE2FF:
            func_E2FF(); break;
        case 0xDCF8:
            func_DCF8(); break;
        case 0xD4EA:
            func_D4EA(); break;
        case 0xF60D:
            func_F60D(); break;
        case 0xCDD0:
            func_CDD0(); break;
        case 0xE6F5:
            func_E6F5(); break;
        case 0xE6DD:
            func_E6DD(); break;
        case 0xDCB7:
            func_DCB7(); break;
        case 0xF3B8:
            func_F3B8(); break;
        case 0xFABA:
            func_FABA(); break;
        case 0xE7B4:
            func_E7B4(); break;
        case 0xD8B1:
            func_D8B1(); break;
        case 0xF9B2:
            func_F9B2(); break;
        case 0xE1BC:
            func_E1BC(); break;
        case 0xF8BB:
            func_F8BB(); break;
        case 0xF9BC:
            func_F9BC(); break;
        case 0xD5BD:
            func_D5BD(); break;
        case 0xEDCC:
            func_EDCC(); break;
        case 0xE7CB:
            func_E7CB(); break;
        case 0xF7CC:
            func_F7CC(); break;
        case 0xE6DF:
            func_E6DF(); break;
        case 0xE8E1:
            func_E8E1(); break;
        case 0xF80E:
            func_F80E(); break;
        case 0xF4DF:
            func_F4DF(); break;
        case 0xDFE0:
            func_DFE0(); break;
        case 0xF7D8:
            func_F7D8(); break;
        case 0xE404:
            func_E404(); break;
        case 0xD7C7:
            func_D7C7(); break;
        case 0xE702:
            func_E702(); break;
        case 0xE5D5:
            func_E5D5(); break;
        case 0xE7D7:
            func_E7D7(); break;
        case 0xCBB3:
            func_CBB3(); break;
        case 0xE9B9:
            func_E9B9(); break;
        case 0xEBBB:
            func_EBBB(); break;
        case 0xE8D0:
            func_E8D0(); break;
        case 0xC3C5:
            func_C3C5(); break;
        case 0xF9E9:
            func_F9E9(); break;
        case 0xDFC7:
            func_DFC7(); break;
        case 0xE302:
            func_E302(); break;
        case 0xEB42:
            func_EB42(); break;
        case 0xCDF3:
            func_CDF3(); break;
        case 0xF542:
            func_F542(); break;
        case 0xE7C3:
            func_E7C3(); break;
        case 0xE942:
            func_E942(); break;
        case 0xE3F7:
            func_E3F7(); break;
        case 0xE742:
            func_E742(); break;
        case 0xFBF9:
            func_FBF9(); break;
        case 0xE508:
            func_E508(); break;
        case 0xDD02:
            func_DD02(); break;
        case 0xD3E7:
            func_D3E7(); break;
        case 0xE808:
            func_E808(); break;
        case 0xD3E9:
            func_D3E9(); break;
        case 0xC3B3:
            func_C3B3(); break;
        case 0xCD03:
            func_CD03(); break;
        case 0xF1C9:
            func_F1C9(); break;
        case 0xF1D5:
            func_F1D5(); break;
        case 0xF8DF:
            func_F8DF(); break;
        case 0xED83:
            func_ED83(); break;
        case 0xD7C3:
            func_D7C3(); break;
        case 0xE9D6:
            func_E9D6(); break;
        case 0xD51C:
            func_D51C(); break;
        case 0xD526:
            func_D526(); break;
        case 0xD3EB:
            func_D3EB(); break;
        case 0xD28C:
            func_D28C(); break;
        case 0xEF53:
            func_EF53(); break;
        case 0xEF60:
            func_EF60(); break;
        case 0xF947:
            func_F947(); break;
        case 0xF99D:
            func_F99D(); break;
        case 0xF958:
            func_F958(); break;
        case 0xF971:
            func_F971(); break;
        case 0xF982:
            func_F982(); break;
        case 0xF987:
            func_F987(); break;
        case 0xF978:
            func_F978(); break;
        case 0xF970:
            func_F970(); break;
        case 0xD495:
            func_D495(); break;
        case 0xEAD2:
            func_EAD2(); break;
        case 0xC865:
            func_C865(); break;
        case 0xD49A:
            func_D49A(); break;
        case 0xD669:
            func_D669(); break;
        case 0xF439:
            func_F439(); break;
        case 0xEAB9:
            func_EAB9(); break;
        case 0xFE77:
            func_FE77(); break;
        case 0xC4D6:
            func_C4D6(); break;
        case 0xE7F6:
            func_E7F6(); break;
        case 0xEE57:
            func_EE57(); break;
        case 0xD68B:
            func_D68B(); break;
        case 0xD68D:
            func_D68D(); break;
        case 0x8241:
            switch (_bank) {
                case 6: func_8241_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8234:
            switch (_bank) {
                case 6: func_8234_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CCD:
            switch (_bank) {
                case 1: func_9CCD_b1(); break;
                case 5: func_9CCD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9690:
            switch (_bank) {
                case 2: func_9690_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9791:
            switch (_bank) {
                case 2: func_9791_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9892:
            switch (_bank) {
                case 7: func_D892(); break;
                case 2: func_9892_b2(); break;
                case 5: func_9892_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8A8:
            switch (_bank) {
                case 3: func_A8A8_b3(); break;
                case 5: func_A8A8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A8:
            switch (_bank) {
                case 3: func_A9A8_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A9:
            switch (_bank) {
                case 3: func_A9A9_b3(); break;
                case 5: func_A9A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA901:
            switch (_bank) {
                case 3: func_A901_b3(); break;
                case 6: func_A901_b6(); break;
                case 5: func_A901_b5(); break;
                case 7: func_A901_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x87DB:
            switch (_bank) {
                case 4: func_87DB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x87F3:
            switch (_bank) {
                case 4: func_87F3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x880B:
            switch (_bank) {
                case 4: func_880B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8823:
            switch (_bank) {
                case 4: func_8823_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x883B:
            switch (_bank) {
                case 4: func_883B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8853:
            switch (_bank) {
                case 4: func_8853_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x886B:
            switch (_bank) {
                case 4: func_886B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8883:
            switch (_bank) {
                case 4: func_8883_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x889B:
            switch (_bank) {
                case 4: func_889B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x88B3:
            switch (_bank) {
                case 4: func_88B3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x88CB:
            switch (_bank) {
                case 4: func_88CB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x88E3:
            switch (_bank) {
                case 4: func_88E3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x88FB:
            switch (_bank) {
                case 4: func_88FB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8913:
            switch (_bank) {
                case 4: func_8913_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x892B:
            switch (_bank) {
                case 4: func_892B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8943:
            switch (_bank) {
                case 4: func_8943_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x895B:
            switch (_bank) {
                case 4: func_895B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8973:
            switch (_bank) {
                case 4: func_8973_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x898B:
            switch (_bank) {
                case 4: func_898B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x89A3:
            switch (_bank) {
                case 4: func_89A3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x89BB:
            switch (_bank) {
                case 4: func_89BB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x89D3:
            switch (_bank) {
                case 4: func_89D3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A3E:
            switch (_bank) {
                case 4: func_8A3E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8AB7:
            switch (_bank) {
                case 4: func_8AB7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B4D:
            switch (_bank) {
                case 4: func_8B4D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B65:
            switch (_bank) {
                case 4: func_8B65_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B7D:
            switch (_bank) {
                case 4: func_8B7D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BE8:
            switch (_bank) {
                case 4: func_8BE8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C53:
            switch (_bank) {
                case 4: func_8C53_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CEB:
            switch (_bank) {
                case 4: func_8CEB_b4(); break;
                case 6: func_8CEB_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D03:
            switch (_bank) {
                case 4: func_8D03_b4(); break;
                case 6: func_8D03_b6(); break;
                case 7: func_8D03_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D1B:
            switch (_bank) {
                case 4: func_8D1B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D33:
            switch (_bank) {
                case 4: func_8D33_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D4B:
            switch (_bank) {
                case 4: func_8D4B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D63:
            switch (_bank) {
                case 4: func_8D63_b4(); break;
                case 6: func_8D63_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D7B:
            switch (_bank) {
                case 4: func_8D7B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DAB:
            switch (_bank) {
                case 4: func_8DAB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DC3:
            switch (_bank) {
                case 4: func_8DC3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DE4:
            switch (_bank) {
                case 4: func_8DE4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E57:
            switch (_bank) {
                case 4: func_8E57_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E6F:
            switch (_bank) {
                case 4: func_8E6F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E8A:
            switch (_bank) {
                case 4: func_8E8A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8EA2:
            switch (_bank) {
                case 4: func_8EA2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8EBA:
            switch (_bank) {
                case 4: func_8EBA_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8ED2:
            switch (_bank) {
                case 4: func_8ED2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8EEA:
            switch (_bank) {
                case 4: func_8EEA_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x805A:
            switch (_bank) {
                case 4: func_805A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F02:
            switch (_bank) {
                case 4: func_8F02_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F1A:
            switch (_bank) {
                case 4: func_8F1A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F32:
            switch (_bank) {
                case 4: func_8F32_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F4A:
            switch (_bank) {
                case 4: func_8F4A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F62:
            switch (_bank) {
                case 4: func_8F62_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F96:
            switch (_bank) {
                case 4: func_8F96_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8FCA:
            switch (_bank) {
                case 4: func_8FCA_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9045:
            switch (_bank) {
                case 4: func_9045_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x905D:
            switch (_bank) {
                case 4: func_905D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9097:
            switch (_bank) {
                case 4: func_9097_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90FB:
            switch (_bank) {
                case 4: func_90FB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9113:
            switch (_bank) {
                case 4: func_9113_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x912B:
            switch (_bank) {
                case 4: func_912B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x915B:
            switch (_bank) {
                case 4: func_915B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9176:
            switch (_bank) {
                case 4: func_9176_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9191:
            switch (_bank) {
                case 7: func_D191(); break;
                case 4: func_9191_b4(); break;
                case 5: func_9191_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9226:
            switch (_bank) {
                case 4: func_9226_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92E3:
            switch (_bank) {
                case 4: func_92E3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9307:
            switch (_bank) {
                case 4: func_9307_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9322:
            switch (_bank) {
                case 4: func_9322_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x937F:
            switch (_bank) {
                case 4: func_937F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x939A:
            switch (_bank) {
                case 4: func_939A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9451:
            switch (_bank) {
                case 4: func_9451_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x946C:
            switch (_bank) {
                case 4: func_946C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9487:
            switch (_bank) {
                case 4: func_9487_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8161:
            switch (_bank) {
                case 4: func_8161_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x949F:
            switch (_bank) {
                case 4: func_949F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8171:
            switch (_bank) {
                case 4: func_8171_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81A9:
            switch (_bank) {
                case 4: func_81A9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81C2:
            switch (_bank) {
                case 4: func_81C2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81CF:
            switch (_bank) {
                case 4: func_81CF_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81D8:
            switch (_bank) {
                case 4: func_81D8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81F3:
            switch (_bank) {
                case 4: func_81F3_b4(); break;
                case 5: func_81F3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81FF:
            switch (_bank) {
                case 4: func_81FF_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8568:
            switch (_bank) {
                case 4: func_8568_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8267:
            switch (_bank) {
                case 4: func_8267_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8272:
            switch (_bank) {
                case 4: func_8272_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x827D:
            switch (_bank) {
                case 4: func_827D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8293:
            switch (_bank) {
                case 4: func_8293_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x829B:
            switch (_bank) {
                case 4: func_829B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82CB:
            switch (_bank) {
                case 4: func_82CB_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8329:
            switch (_bank) {
                case 4: func_8329_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8333:
            switch (_bank) {
                case 4: func_8333_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8352:
            switch (_bank) {
                case 4: func_8352_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8371:
            switch (_bank) {
                case 4: func_8371_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83AF:
            switch (_bank) {
                case 4: func_83AF_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8385:
            switch (_bank) {
                case 4: func_8385_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84F8:
            switch (_bank) {
                case 4: func_84F8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x839A:
            switch (_bank) {
                case 4: func_839A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83F4:
            switch (_bank) {
                case 4: func_83F4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x840F:
            switch (_bank) {
                case 4: func_840F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8402:
            switch (_bank) {
                case 4: func_8402_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8425:
            switch (_bank) {
                case 4: func_8425_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84CC:
            switch (_bank) {
                case 4: func_84CC_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x854D:
            switch (_bank) {
                case 4: func_854D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82E2:
            switch (_bank) {
                case 4: func_82E2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8311:
            switch (_bank) {
                case 4: func_8311_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9812:
            switch (_bank) {
                case 4: func_9812_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9815:
            switch (_bank) {
                case 4: func_9815_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9818:
            switch (_bank) {
                case 4: func_9818_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x981B:
            switch (_bank) {
                case 4: func_981B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x981E:
            switch (_bank) {
                case 4: func_981E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8518:
            switch (_bank) {
                case 4: func_8518_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9600:
            switch (_bank) {
                case 4: func_9600_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96FE:
            switch (_bank) {
                case 4: func_96FE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB51C:
            switch (_bank) {
                case 4: func_B51C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD96:
            switch (_bank) {
                case 4: func_BD96_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x925F:
            switch (_bank) {
                case 4: func_925F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x919D:
            switch (_bank) {
                case 4: func_919D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x927C:
            switch (_bank) {
                case 4: func_927C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8460:
            switch (_bank) {
                case 4: func_8460_b4(); break;
                case 6: func_8460_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83DE:
            switch (_bank) {
                case 5: func_83DE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB085:
            switch (_bank) {
                case 5: func_B085_b5(); break;
                case 7: func_B085_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB08F:
            switch (_bank) {
                case 5: func_B08F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB48B:
            switch (_bank) {
                case 5: func_B48B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD88:
            switch (_bank) {
                case 5: func_BD88_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF8B:
            switch (_bank) {
                case 5: func_AF8B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF9D:
            switch (_bank) {
                case 5: func_AF9D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x958C:
            switch (_bank) {
                case 5: func_958C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x958E:
            switch (_bank) {
                case 5: func_958E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E8C:
            switch (_bank) {
                case 5: func_9E8C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA78C:
            switch (_bank) {
                case 5: func_A78C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9688:
            switch (_bank) {
                case 5: func_9688_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F88:
            switch (_bank) {
                case 5: func_9F88_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD8D:
            switch (_bank) {
                case 5: func_BD8D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C5A:
            switch (_bank) {
                case 5: func_9C5A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CF1:
            switch (_bank) {
                case 5: func_9CF1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA02C:
            switch (_bank) {
                case 5: func_A02C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA328:
            switch (_bank) {
                case 5: func_A328_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABD3:
            switch (_bank) {
                case 5: func_ABD3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC59:
            switch (_bank) {
                case 5: func_AC59_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC91:
            switch (_bank) {
                case 5: func_AC91_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC8D:
            switch (_bank) {
                case 5: func_AC8D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD04:
            switch (_bank) {
                case 5: func_AD04_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD06:
            switch (_bank) {
                case 5: func_AD06_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD59:
            switch (_bank) {
                case 5: func_AD59_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD60:
            switch (_bank) {
                case 5: func_AD60_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD69:
            switch (_bank) {
                case 5: func_AD69_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE05:
            switch (_bank) {
                case 5: func_AE05_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE0C:
            switch (_bank) {
                case 5: func_AE0C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFD3:
            switch (_bank) {
                case 5: func_AFD3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96A6:
            switch (_bank) {
                case 5: func_96A6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFF8:
            switch (_bank) {
                case 5: func_AFF8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB006:
            switch (_bank) {
                case 5: func_B006_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB003:
            switch (_bank) {
                case 5: func_B003_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFFB:
            switch (_bank) {
                case 5: func_AFFB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0A9:
            switch (_bank) {
                case 5: func_B0A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB188:
            switch (_bank) {
                case 5: func_B188_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4A0:
            switch (_bank) {
                case 5: func_B4A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA48:
            switch (_bank) {
                case 5: func_BA48_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA4A:
            switch (_bank) {
                case 5: func_BA4A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBDB:
            switch (_bank) {
                case 5: func_BBDB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBE6:
            switch (_bank) {
                case 5: func_BBE6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE2C:
            switch (_bank) {
                case 5: func_BE2C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEC8:
            switch (_bank) {
                case 5: func_BEC8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFC9:
            switch (_bank) {
                case 5: func_BFC9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFD0:
            switch (_bank) {
                case 5: func_BFD0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93E5:
            switch (_bank) {
                case 5: func_93E5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93C5:
            switch (_bank) {
                case 5: func_93C5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93D9:
            switch (_bank) {
                case 5: func_93D9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x87B6:
            switch (_bank) {
                case 5: func_87B6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8787:
            switch (_bank) {
                case 5: func_8787_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8785:
            switch (_bank) {
                case 5: func_8785_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9090:
            switch (_bank) {
                case 5: func_9090_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9695:
            switch (_bank) {
                case 5: func_9695_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9990:
            switch (_bank) {
                case 5: func_9990_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9999:
            switch (_bank) {
                case 5: func_9999_b5(); break;
                case 7: func_9999_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x999F:
            switch (_bank) {
                case 5: func_999F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99A5:
            switch (_bank) {
                case 5: func_99A5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7A7:
            switch (_bank) {
                case 5: func_B7A7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5A5:
            switch (_bank) {
                case 5: func_B5A5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5A9:
            switch (_bank) {
                case 5: func_B5A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB099:
            switch (_bank) {
                case 5: func_B099_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA533:
            switch (_bank) {
                case 5: func_A533_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA524:
            switch (_bank) {
                case 5: func_A524_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9948:
            switch (_bank) {
                case 5: func_9948_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DFF:
            switch (_bank) {
                case 5: func_9DFF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E07:
            switch (_bank) {
                case 5: func_9E07_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA04C:
            switch (_bank) {
                case 5: func_A04C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA13C:
            switch (_bank) {
                case 5: func_A13C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1A1:
            switch (_bank) {
                case 5: func_A1A1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDA1:
            switch (_bank) {
                case 5: func_BDA1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDA6:
            switch (_bank) {
                case 5: func_BDA6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDA8:
            switch (_bank) {
                case 5: func_BDA8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA44C:
            switch (_bank) {
                case 5: func_A44C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9960:
            switch (_bank) {
                case 5: func_9960_b5(); break;
                case 7: func_9960_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x994B:
            switch (_bank) {
                case 5: func_994B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E29:
            switch (_bank) {
                case 5: func_8E29_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8209:
            switch (_bank) {
                case 5: func_8209_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x823A:
            switch (_bank) {
                case 5: func_823A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1AC:
            switch (_bank) {
                case 5: func_B1AC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1B1:
            switch (_bank) {
                case 5: func_B1B1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB905:
            switch (_bank) {
                case 5: func_B905_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE6B:
            switch (_bank) {
                case 5: func_AE6B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFAF:
            switch (_bank) {
                case 5: func_AFAF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEAF:
            switch (_bank) {
                case 5: func_AEAF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98FA:
            switch (_bank) {
                case 5: func_98FA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB00B:
            switch (_bank) {
                case 5: func_B00B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB011:
            switch (_bank) {
                case 5: func_B011_b5(); break;
                case 7: func_B011_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB020:
            switch (_bank) {
                case 5: func_B020_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB018:
            switch (_bank) {
                case 5: func_B018_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB023:
            switch (_bank) {
                case 5: func_B023_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4D0:
            switch (_bank) {
                case 5: func_B4D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD01:
            switch (_bank) {
                case 5: func_AD01_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2B9:
            switch (_bank) {
                case 5: func_A2B9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85B8:
            switch (_bank) {
                case 5: func_85B8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85B9:
            switch (_bank) {
                case 5: func_85B9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85BD:
            switch (_bank) {
                case 5: func_85BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85C7:
            switch (_bank) {
                case 5: func_85C7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9673:
            switch (_bank) {
                case 5: func_9673_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9681:
            switch (_bank) {
                case 5: func_9681_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB923:
            switch (_bank) {
                case 5: func_B923_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B85:
            switch (_bank) {
                case 5: func_9B85_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B99:
            switch (_bank) {
                case 5: func_9B99_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAEC:
            switch (_bank) {
                case 5: func_BAEC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB07:
            switch (_bank) {
                case 5: func_BB07_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBABA:
            switch (_bank) {
                case 5: func_BABA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBABB:
            switch (_bank) {
                case 5: func_BABB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADBA:
            switch (_bank) {
                case 5: func_ADBA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADBC:
            switch (_bank) {
                case 5: func_ADBC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9383:
            switch (_bank) {
                case 5: func_9383_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A8A:
            switch (_bank) {
                case 5: func_9A8A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E8E:
            switch (_bank) {
                case 5: func_9E8E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2A5:
            switch (_bank) {
                case 5: func_B2A5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB405:
            switch (_bank) {
                case 5: func_B405_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD89:
            switch (_bank) {
                case 5: func_BD89_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCD0:
            switch (_bank) {
                case 5: func_BCD0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD30:
            switch (_bank) {
                case 5: func_BD30_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD9F:
            switch (_bank) {
                case 5: func_BD9F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD4C:
            switch (_bank) {
                case 5: func_BD4C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD99:
            switch (_bank) {
                case 5: func_BD99_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC11:
            switch (_bank) {
                case 5: func_BC11_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD49:
            switch (_bank) {
                case 5: func_BD49_b5(); break;
                case 4: func_BD49_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD91:
            switch (_bank) {
                case 5: func_BD91_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCD3:
            switch (_bank) {
                case 5: func_BCD3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC21:
            switch (_bank) {
                case 5: func_BC21_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD33:
            switch (_bank) {
                case 5: func_BD33_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDB4:
            switch (_bank) {
                case 5: func_BDB4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC2A:
            switch (_bank) {
                case 5: func_BC2A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC4C:
            switch (_bank) {
                case 5: func_BC4C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC18:
            switch (_bank) {
                case 5: func_BC18_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD4F:
            switch (_bank) {
                case 5: func_BD4F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDCF:
            switch (_bank) {
                case 5: func_BDCF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEBA:
            switch (_bank) {
                case 5: func_BEBA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE7A:
            switch (_bank) {
                case 5: func_BE7A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD5D:
            switch (_bank) {
                case 5: func_BD5D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDBD:
            switch (_bank) {
                case 5: func_BDBD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDBF:
            switch (_bank) {
                case 5: func_BDBF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADBD:
            switch (_bank) {
                case 5: func_ADBD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDAA:
            switch (_bank) {
                case 5: func_BDAA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDB0:
            switch (_bank) {
                case 5: func_BDB0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDAE:
            switch (_bank) {
                case 5: func_BDAE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD00:
            switch (_bank) {
                case 5: func_BD00_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE2A:
            switch (_bank) {
                case 5: func_BE2A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x853A:
            switch (_bank) {
                case 5: func_853A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFA9:
            switch (_bank) {
                case 5: func_AFA9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFAE:
            switch (_bank) {
                case 5: func_AFAE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9971:
            switch (_bank) {
                case 5: func_9971_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4B0:
            switch (_bank) {
                case 5: func_B4B0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF4B:
            switch (_bank) {
                case 5: func_AF4B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB745:
            switch (_bank) {
                case 5: func_B745_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB74A:
            switch (_bank) {
                case 5: func_B74A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA88:
            switch (_bank) {
                case 5: func_AA88_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA99:
            switch (_bank) {
                case 5: func_AA99_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D10:
            switch (_bank) {
                case 5: func_9D10_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACCE:
            switch (_bank) {
                case 5: func_ACCE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACD1:
            switch (_bank) {
                case 5: func_ACD1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA03:
            switch (_bank) {
                case 5: func_AA03_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98BD:
            switch (_bank) {
                case 5: func_98BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6CE:
            switch (_bank) {
                case 5: func_A6CE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D0E:
            switch (_bank) {
                case 5: func_9D0E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA00:
            switch (_bank) {
                case 7: func_EA00(); break;
                case 5: func_AA00_b5(); break;
                case 6: func_AA00_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x850E:
            switch (_bank) {
                case 5: func_850E_b5(); break;
                case 6: func_850E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA938:
            switch (_bank) {
                case 7: func_E938(); break;
                case 5: func_A938_b5(); break;
                case 6: func_A938_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA948:
            switch (_bank) {
                case 5: func_A948_b5(); break;
                case 6: func_A948_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA941:
            switch (_bank) {
                case 5: func_A941_b5(); break;
                case 7: func_A941_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA942:
            switch (_bank) {
                case 7: func_E942(); break;
                case 5: func_A942_b5(); break;
                case 6: func_A942_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA945:
            switch (_bank) {
                case 5: func_A945_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA00F:
            switch (_bank) {
                case 5: func_A00F_b5(); break;
                case 6: func_A00F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA011:
            switch (_bank) {
                case 5: func_A011_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8510:
            switch (_bank) {
                case 7: func_C510(); break;
                case 5: func_8510_b5(); break;
                case 6: func_8510_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA96B:
            switch (_bank) {
                case 5: func_A96B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA96D:
            switch (_bank) {
                case 5: func_A96D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA96F:
            switch (_bank) {
                case 5: func_A96F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8558:
            switch (_bank) {
                case 5: func_8558_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA555:
            switch (_bank) {
                case 5: func_A555_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA55B:
            switch (_bank) {
                case 5: func_A55B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x853C:
            switch (_bank) {
                case 5: func_853C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8556:
            switch (_bank) {
                case 5: func_8556_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA53E:
            switch (_bank) {
                case 5: func_A53E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA546:
            switch (_bank) {
                case 5: func_A546_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81AC:
            switch (_bank) {
                case 5: func_81AC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D56:
            switch (_bank) {
                case 5: func_8D56_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB48E:
            switch (_bank) {
                case 5: func_B48E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB400:
            switch (_bank) {
                case 5: func_B400_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC00:
            switch (_bank) {
                case 5: func_BC00_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80EA:
            switch (_bank) {
                case 5: func_80EA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80EF:
            switch (_bank) {
                case 5: func_80EF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80E8:
            switch (_bank) {
                case 5: func_80E8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80E6:
            switch (_bank) {
                case 5: func_80E6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80E4:
            switch (_bank) {
                case 5: func_80E4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9FA9:
            switch (_bank) {
                case 5: func_9FA9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9FB4:
            switch (_bank) {
                case 5: func_9FB4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA099:
            switch (_bank) {
                case 5: func_A099_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9904:
            switch (_bank) {
                case 5: func_9904_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9911:
            switch (_bank) {
                case 5: func_9911_b5(); break;
                case 7: func_9911_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x990A:
            switch (_bank) {
                case 5: func_990A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9524:
            switch (_bank) {
                case 5: func_9524_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C68:
            switch (_bank) {
                case 6: func_8C68_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C8C:
            switch (_bank) {
                case 6: func_8C8C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x860F:
            switch (_bank) {
                case 6: func_860F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x865D:
            switch (_bank) {
                case 6: func_865D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x863C:
            switch (_bank) {
                case 6: func_863C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81B4:
            switch (_bank) {
                case 6: func_81B4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x869B:
            switch (_bank) {
                case 6: func_869B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8749:
            switch (_bank) {
                case 6: func_8749_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8988:
            switch (_bank) {
                case 6: func_8988_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA92B:
            switch (_bank) {
                case 6: func_A92B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA926:
            switch (_bank) {
                case 6: func_A926_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA523:
            switch (_bank) {
                case 6: func_A523_b6(); break;
                case 5: func_A523_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9FA:
            switch (_bank) {
                case 6: func_A9FA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA576:
            switch (_bank) {
                case 6: func_A576_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85A3:
            switch (_bank) {
                case 6: func_85A3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CB3:
            switch (_bank) {
                case 6: func_8CB3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CF8:
            switch (_bank) {
                case 6: func_8CF8_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D4E:
            switch (_bank) {
                case 6: func_8D4E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D34:
            switch (_bank) {
                case 6: func_8D34_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8040:
            switch (_bank) {
                case 6: func_8040_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA955:
            switch (_bank) {
                case 6: func_A955_b6(); break;
                case 5: func_A955_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA956:
            switch (_bank) {
                case 6: func_A956_b6(); break;
                case 5: func_A956_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8516:
            switch (_bank) {
                case 6: func_8516_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x852E:
            switch (_bank) {
                case 6: func_852E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8596:
            switch (_bank) {
                case 6: func_8596_b6(); break;
                case 5: func_8596_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x859F:
            switch (_bank) {
                case 6: func_859F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D3D:
            switch (_bank) {
                case 6: func_8D3D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D42:
            switch (_bank) {
                case 6: func_8D42_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D4C:
            switch (_bank) {
                case 6: func_8D4C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8595:
            switch (_bank) {
                case 6: func_8595_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9FE:
            switch (_bank) {
                case 6: func_A9FE_b6(); break;
                case 5: func_A9FE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x858B:
            switch (_bank) {
                case 6: func_858B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8565:
            switch (_bank) {
                case 6: func_8565_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x877B:
            switch (_bank) {
                case 6: func_877B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2DF:
            switch (_bank) {
                case 6: func_B2DF_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC47:
            switch (_bank) {
                case 6: func_BC47_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC4D:
            switch (_bank) {
                case 6: func_BC4D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC53:
            switch (_bank) {
                case 6: func_BC53_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC59:
            switch (_bank) {
                case 7: func_FC59(); break;
                case 6: func_BC59_b6(); break;
                case 5: func_BC59_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC5F:
            switch (_bank) {
                case 6: func_BC5F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1B1:
            switch (_bank) {
                case 6: func_A1B1_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8191:
            switch (_bank) {
                case 6: func_8191_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB302:
            switch (_bank) {
                case 6: func_B302_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8102:
            switch (_bank) {
                case 6: func_8102_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA191:
            switch (_bank) {
                case 6: func_A191_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8702:
            switch (_bank) {
                case 6: func_8702_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA797:
            switch (_bank) {
                case 6: func_A797_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA142:
            switch (_bank) {
                case 6: func_A142_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA302:
            switch (_bank) {
                case 6: func_A302_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8393:
            switch (_bank) {
                case 6: func_8393_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA742:
            switch (_bank) {
                case 6: func_A742_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA902:
            switch (_bank) {
                case 7: func_E902(); break;
                case 6: func_A902_b6(); break;
                case 5: func_A902_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA240:
            switch (_bank) {
                case 6: func_A240_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA003:
            switch (_bank) {
                case 6: func_A003_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA909:
            switch (_bank) {
                case 6: func_A909_b6(); break;
                case 4: func_A909_b4(); break;
                case 5: func_A909_b5(); break;
                case 7: func_A909_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA90B:
            switch (_bank) {
                case 6: func_A90B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA515:
            switch (_bank) {
                case 6: func_A515_b6(); break;
                case 5: func_A515_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA519:
            switch (_bank) {
                case 6: func_A519_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA560:
            switch (_bank) {
                case 6: func_A560_b6(); break;
                case 5: func_A560_b5(); break;
                case 7: func_A560_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x850C:
            switch (_bank) {
                case 6: func_850C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA00A:
            switch (_bank) {
                case 6: func_A00A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8440:
            switch (_bank) {
                case 6: func_8440_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8442:
            switch (_bank) {
                case 6: func_8442_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8404:
            switch (_bank) {
                case 6: func_8404_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8802:
            switch (_bank) {
                case 6: func_8802_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8807:
            switch (_bank) {
                case 6: func_8807_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA000:
            switch (_bank) {
                case 6: func_A000_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E00:
            switch (_bank) {
                case 6: func_8E00_b6(); break;
                case 5: func_8E00_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8600:
            switch (_bank) {
                case 6: func_8600_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAAAA:
            switch (_bank) {
                case 7: func_EAAA(); break;
                case 6: func_AAAA_b6(); break;
                case 5: func_AAAA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA937:
            switch (_bank) {
                case 6: func_A937_b6(); break;
                case 5: func_A937_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA950:
            switch (_bank) {
                case 6: func_A950_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8540:
            switch (_bank) {
                case 6: func_8540_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA551:
            switch (_bank) {
                case 6: func_A551_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85D0:
            switch (_bank) {
                case 6: func_85D0_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85DD:
            switch (_bank) {
                case 6: func_85DD_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA958:
            switch (_bank) {
                case 6: func_A958_b6(); break;
                case 5: func_A958_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA959:
            switch (_bank) {
                case 6: func_A959_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA25D:
            switch (_bank) {
                case 6: func_A25D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8654:
            switch (_bank) {
                case 6: func_8654_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8696:
            switch (_bank) {
                case 6: func_8696_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8693:
            switch (_bank) {
                case 6: func_8693_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8652:
            switch (_bank) {
                case 6: func_8652_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA943:
            switch (_bank) {
                case 6: func_A943_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA957:
            switch (_bank) {
                case 6: func_A957_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85E8:
            switch (_bank) {
                case 6: func_85E8_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x864D:
            switch (_bank) {
                case 6: func_864D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x864E:
            switch (_bank) {
                case 6: func_864E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DEA:
            switch (_bank) {
                case 6: func_8DEA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DF6:
            switch (_bank) {
                case 6: func_8DF6_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8529:
            switch (_bank) {
                case 6: func_8529_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x852D:
            switch (_bank) {
                case 6: func_852D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x852B:
            switch (_bank) {
                case 6: func_852B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D5D:
            switch (_bank) {
                case 6: func_8D5D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D6C:
            switch (_bank) {
                case 6: func_8D6C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA975:
            switch (_bank) {
                case 6: func_A975_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x852F:
            switch (_bank) {
                case 6: func_852F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA93B:
            switch (_bank) {
                case 6: func_A93B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA93D:
            switch (_bank) {
                case 6: func_A93D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA94B:
            switch (_bank) {
                case 6: func_A94B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA500:
            switch (_bank) {
                case 6: func_A500_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA506:
            switch (_bank) {
                case 6: func_A506_b6(); break;
                case 5: func_A506_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA50B:
            switch (_bank) {
                case 6: func_A50B_b6(); break;
                case 5: func_A50B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA911:
            switch (_bank) {
                case 6: func_A911_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA84C:
            switch (_bank) {
                case 6: func_A84C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9DE:
            switch (_bank) {
                case 6: func_A9DE_b6(); break;
                case 5: func_A9DE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA680:
            switch (_bank) {
                case 6: func_A680_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E64:
            switch (_bank) {
                case 6: func_8E64_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3AE:
            switch (_bank) {
                case 6: func_B3AE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8524:
            switch (_bank) {
                case 6: func_8524_b6(); break;
                case 4: func_8524_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x801A:
            switch (_bank) {
                case 6: func_801A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8019:
            switch (_bank) {
                case 6: func_8019_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8017:
            switch (_bank) {
                case 6: func_8017_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8533:
            switch (_bank) {
                case 6: func_8533_b6(); break;
                case 4: func_8533_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA924:
            switch (_bank) {
                case 6: func_A924_b6(); break;
                case 4: func_A924_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CD0:
            switch (_bank) {
                case 1: func_9CD0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CC3:
            switch (_bank) {
                case 1: func_9CC3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA736:
            switch (_bank) {
                case 1: func_A736_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7D5:
            switch (_bank) {
                case 1: func_A7D5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94F2:
            switch (_bank) {
                case 4: func_94F2_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x831C:
            switch (_bank) {
                case 4: func_831C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91FD:
            switch (_bank) {
                case 4: func_91FD_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x843D:
            switch (_bank) {
                case 4: func_843D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7FD:
            switch (_bank) {
                case 5: func_A7FD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA806:
            switch (_bank) {
                case 5: func_A806_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA800:
            switch (_bank) {
                case 5: func_A800_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB069:
            switch (_bank) {
                case 5: func_B069_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4BB:
            switch (_bank) {
                case 5: func_B4BB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x949A:
            switch (_bank) {
                case 5: func_949A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9099:
            switch (_bank) {
                case 5: func_9099_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90A9:
            switch (_bank) {
                case 5: func_90A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90AF:
            switch (_bank) {
                case 5: func_90AF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9195:
            switch (_bank) {
                case 5: func_9195_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9192:
            switch (_bank) {
                case 5: func_9192_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D19:
            switch (_bank) {
                case 5: func_9D19_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x998A:
            switch (_bank) {
                case 5: func_998A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9991:
            switch (_bank) {
                case 5: func_9991_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9998:
            switch (_bank) {
                case 5: func_9998_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB98A:
            switch (_bank) {
                case 5: func_B98A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB912:
            switch (_bank) {
                case 5: func_B912_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB93A:
            switch (_bank) {
                case 5: func_B93A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA096:
            switch (_bank) {
                case 5: func_A096_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9962:
            switch (_bank) {
                case 5: func_9962_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB962:
            switch (_bank) {
                case 5: func_B962_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9250:
            switch (_bank) {
                case 5: func_9250_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9269:
            switch (_bank) {
                case 5: func_9269_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92D1:
            switch (_bank) {
                case 5: func_92D1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2D1:
            switch (_bank) {
                case 5: func_B2D1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B28:
            switch (_bank) {
                case 5: func_9B28_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB28:
            switch (_bank) {
                case 5: func_BB28_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB56:
            switch (_bank) {
                case 5: func_BB56_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB4C:
            switch (_bank) {
                case 5: func_BB4C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA291:
            switch (_bank) {
                case 5: func_A291_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2B8:
            switch (_bank) {
                case 5: func_A2B8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92A7:
            switch (_bank) {
                case 5: func_92A7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2A7:
            switch (_bank) {
                case 5: func_B2A7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB191:
            switch (_bank) {
                case 5: func_B191_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA491:
            switch (_bank) {
                case 5: func_A491_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA457:
            switch (_bank) {
                case 5: func_A457_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA470:
            switch (_bank) {
                case 5: func_A470_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA462:
            switch (_bank) {
                case 5: func_A462_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4F8:
            switch (_bank) {
                case 5: func_A4F8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA501:
            switch (_bank) {
                case 5: func_A501_b5(); break;
                case 7: func_A501_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA51C:
            switch (_bank) {
                case 5: func_A51C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA520:
            switch (_bank) {
                case 5: func_A520_b5(); break;
                case 7: func_A520_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA522:
            switch (_bank) {
                case 5: func_A522_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA539:
            switch (_bank) {
                case 5: func_A539_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA53F:
            switch (_bank) {
                case 5: func_A53F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EB4:
            switch (_bank) {
                case 5: func_9EB4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EBD:
            switch (_bank) {
                case 5: func_9EBD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9ED1:
            switch (_bank) {
                case 5: func_9ED1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92FB:
            switch (_bank) {
                case 5: func_92FB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9310:
            switch (_bank) {
                case 5: func_9310_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x932E:
            switch (_bank) {
                case 5: func_932E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2FB:
            switch (_bank) {
                case 5: func_B2FB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8AB:
            switch (_bank) {
                case 5: func_A8AB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8F0:
            switch (_bank) {
                case 5: func_A8F0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8BD:
            switch (_bank) {
                case 5: func_A8BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x927D:
            switch (_bank) {
                case 5: func_927D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9291:
            switch (_bank) {
                case 5: func_9291_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9282:
            switch (_bank) {
                case 5: func_9282_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9639:
            switch (_bank) {
                case 5: func_9639_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9650:
            switch (_bank) {
                case 5: func_9650_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9653:
            switch (_bank) {
                case 5: func_9653_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB639:
            switch (_bank) {
                case 5: func_B639_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB12:
            switch (_bank) {
                case 5: func_AB12_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACF3:
            switch (_bank) {
                case 5: func_ACF3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9976:
            switch (_bank) {
                case 5: func_9976_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB976:
            switch (_bank) {
                case 5: func_B976_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF74:
            switch (_bank) {
                case 5: func_AF74_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF8E:
            switch (_bank) {
                case 5: func_AF8E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB05B:
            switch (_bank) {
                case 5: func_B05B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB08C:
            switch (_bank) {
                case 5: func_B08C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB196:
            switch (_bank) {
                case 5: func_B196_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB19A:
            switch (_bank) {
                case 5: func_B19A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1B8:
            switch (_bank) {
                case 5: func_B1B8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1B3:
            switch (_bank) {
                case 5: func_B1B3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1D7:
            switch (_bank) {
                case 5: func_B1D7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1F0:
            switch (_bank) {
                case 5: func_B1F0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1E8:
            switch (_bank) {
                case 5: func_B1E8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB283:
            switch (_bank) {
                case 5: func_B283_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB207:
            switch (_bank) {
                case 5: func_B207_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB068:
            switch (_bank) {
                case 5: func_B068_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA160:
            switch (_bank) {
                case 5: func_A160_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA99D:
            switch (_bank) {
                case 5: func_A99D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA99F:
            switch (_bank) {
                case 5: func_A99F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A5:
            switch (_bank) {
                case 5: func_A9A5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC0D:
            switch (_bank) {
                case 5: func_BC0D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCE2:
            switch (_bank) {
                case 5: func_BCE2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD3B:
            switch (_bank) {
                case 5: func_BD3B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDBB:
            switch (_bank) {
                case 5: func_BDBB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB41:
            switch (_bank) {
                case 5: func_AB41_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94AA:
            switch (_bank) {
                case 5: func_94AA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB520:
            switch (_bank) {
                case 5: func_B520_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA918:
            switch (_bank) {
                case 6: func_A918_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8F9:
            switch (_bank) {
                case 6: func_A8F9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9CD:
            switch (_bank) {
                case 6: func_A9CD_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8FD:
            switch (_bank) {
                case 6: func_A8FD_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC3B:
            switch (_bank) {
                case 6: func_BC3B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86E5:
            switch (_bank) {
                case 6: func_86E5_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8685:
            switch (_bank) {
                case 6: func_8685_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA685:
            switch (_bank) {
                case 6: func_A685_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DFE:
            switch (_bank) {
                case 6: func_8DFE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A3:
            switch (_bank) {
                case 6: func_A9A3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB9C:
            switch (_bank) {
                case 1: func_AB9C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABB6:
            switch (_bank) {
                case 1: func_ABB6_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACF4:
            switch (_bank) {
                case 1: func_ACF4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9A9:
            switch (_bank) {
                case 5: func_B9A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA78D:
            switch (_bank) {
                case 6: func_A78D_b6(); break;
                case 5: func_A78D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB542:
            switch (_bank) {
                case 1: func_B542_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB598:
            switch (_bank) {
                case 1: func_B598_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACAD:
            switch (_bank) {
                case 1: func_ACAD_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0B9:
            switch (_bank) {
                case 4: func_B0B9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8541:
            switch (_bank) {
                case 4: func_8541_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7BD:
            switch (_bank) {
                case 4: func_B7BD_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA973:
            switch (_bank) {
                case 4: func_A973_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x856F:
            switch (_bank) {
                case 4: func_856F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8598:
            switch (_bank) {
                case 4: func_8598_b4(); break;
                case 5: func_8598_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85CE:
            switch (_bank) {
                case 4: func_85CE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85D9:
            switch (_bank) {
                case 4: func_85D9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8571:
            switch (_bank) {
                case 4: func_8571_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95B4:
            switch (_bank) {
                case 4: func_95B4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95C5:
            switch (_bank) {
                case 4: func_95C5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95D6:
            switch (_bank) {
                case 4: func_95D6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE87:
            switch (_bank) {
                case 5: func_AE87_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA48B:
            switch (_bank) {
                case 5: func_A48B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA688:
            switch (_bank) {
                case 5: func_A688_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB290:
            switch (_bank) {
                case 5: func_B290_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB385:
            switch (_bank) {
                case 5: func_B385_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6A8:
            switch (_bank) {
                case 5: func_B6A8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF761:
            func_F761(); break;
        case 0x88D5:
            switch (_bank) {
                case 5: func_88D5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8935:
            switch (_bank) {
                case 5: func_8935_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB489:
            switch (_bank) {
                case 5: func_B489_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82D6:
            switch (_bank) {
                case 5: func_82D6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82DE:
            switch (_bank) {
                case 5: func_82DE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9482:
            switch (_bank) {
                case 5: func_9482_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8594:
            switch (_bank) {
                case 5: func_8594_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F65:
            switch (_bank) {
                case 5: func_8F65_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90D6:
            switch (_bank) {
                case 5: func_90D6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F86:
            switch (_bank) {
                case 5: func_8F86_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F55:
            switch (_bank) {
                case 5: func_8F55_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x863D:
            switch (_bank) {
                case 5: func_863D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8691:
            switch (_bank) {
                case 5: func_8691_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93EC:
            switch (_bank) {
                case 5: func_93EC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8890:
            switch (_bank) {
                case 5: func_8890_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8914:
            switch (_bank) {
                case 5: func_8914_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x890E:
            switch (_bank) {
                case 5: func_890E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8905:
            switch (_bank) {
                case 5: func_8905_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93F2:
            switch (_bank) {
                case 5: func_93F2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93FF:
            switch (_bank) {
                case 5: func_93FF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93B1:
            switch (_bank) {
                case 5: func_93B1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9432:
            switch (_bank) {
                case 5: func_9432_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9475:
            switch (_bank) {
                case 5: func_9475_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9540:
            switch (_bank) {
                case 5: func_9540_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x954F:
            switch (_bank) {
                case 5: func_954F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9578:
            switch (_bank) {
                case 5: func_9578_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9484:
            switch (_bank) {
                case 5: func_9484_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85A7:
            switch (_bank) {
                case 5: func_85A7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85A8:
            switch (_bank) {
                case 5: func_85A8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93EE:
            switch (_bank) {
                case 5: func_93EE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE83:
            switch (_bank) {
                case 5: func_AE83_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA83:
            switch (_bank) {
                case 5: func_BA83_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x832A:
            switch (_bank) {
                case 5: func_832A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E82:
            switch (_bank) {
                case 5: func_9E82_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x819E:
            switch (_bank) {
                case 5: func_819E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x841E:
            switch (_bank) {
                case 5: func_841E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84CA:
            switch (_bank) {
                case 5: func_84CA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA848:
            switch (_bank) {
                case 5: func_A848_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA84A:
            switch (_bank) {
                case 5: func_A84A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D6C:
            switch (_bank) {
                case 5: func_9D6C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD9D:
            switch (_bank) {
                case 5: func_BD9D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDA0:
            switch (_bank) {
                case 5: func_BDA0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D90:
            switch (_bank) {
                case 5: func_9D90_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEAEC:
            func_EAEC(); break;
        case 0xEAF1:
            func_EAF1(); break;
        case 0xEAF7:
            func_EAF7(); break;
        case 0xEAF5:
            func_EAF5(); break;
        case 0xEAFC:
            func_EAFC(); break;
        case 0xEB02:
            func_EB02(); break;
        case 0x9160:
            switch (_bank) {
                case 5: func_9160_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB223:
            switch (_bank) {
                case 5: func_B223_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA908:
            switch (_bank) {
                case 5: func_A908_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA910:
            switch (_bank) {
                case 5: func_A910_b5(); break;
                case 7: func_A910_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD106:
            func_D106(); break;
        case 0xD109:
            func_D109(); break;
        case 0x9F3C:
            switch (_bank) {
                case 5: func_9F3C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99B5:
            switch (_bank) {
                case 5: func_99B5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99C9:
            switch (_bank) {
                case 5: func_99C9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99B0:
            switch (_bank) {
                case 5: func_99B0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99B4:
            switch (_bank) {
                case 5: func_99B4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD4A:
            switch (_bank) {
                case 5: func_BD4A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD4D:
            switch (_bank) {
                case 5: func_BD4D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD04:
            switch (_bank) {
                case 5: func_BD04_b5(); break;
                case 4: func_BD04_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD06:
            switch (_bank) {
                case 5: func_BD06_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD08:
            switch (_bank) {
                case 5: func_BD08_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99AA:
            switch (_bank) {
                case 5: func_99AA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99AC:
            switch (_bank) {
                case 5: func_99AC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9105:
            switch (_bank) {
                case 5: func_9105_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E85:
            switch (_bank) {
                case 5: func_9E85_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x922F:
            switch (_bank) {
                case 5: func_922F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E9E:
            switch (_bank) {
                case 5: func_9E9E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9108:
            switch (_bank) {
                case 5: func_9108_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x910B:
            switch (_bank) {
                case 5: func_910B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9110:
            switch (_bank) {
                case 5: func_9110_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x910D:
            switch (_bank) {
                case 5: func_910D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF047:
            func_F047(); break;
        case 0xF04B:
            func_F04B(); break;
        case 0xEFFE:
            func_EFFE(); break;
        case 0x8F33:
            switch (_bank) {
                case 5: func_8F33_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA999:
            switch (_bank) {
                case 5: func_A999_b5(); break;
                case 7: func_A999_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E2F:
            switch (_bank) {
                case 5: func_9E2F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D06:
            switch (_bank) {
                case 5: func_9D06_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDFE:
            switch (_bank) {
                case 5: func_BDFE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEA29:
            func_EA29(); break;
        case 0xBDA9:
            switch (_bank) {
                case 5: func_BDA9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDD1:
            switch (_bank) {
                case 5: func_BDD1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DF0:
            switch (_bank) {
                case 5: func_9DF0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DFD:
            switch (_bank) {
                case 5: func_9DFD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDFF:
            switch (_bank) {
                case 5: func_BDFF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB101:
            switch (_bank) {
                case 5: func_B101_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB103:
            switch (_bank) {
                case 5: func_B103_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB105:
            switch (_bank) {
                case 5: func_B105_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1BD:
            switch (_bank) {
                case 5: func_B1BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0BD:
            switch (_bank) {
                case 5: func_B0BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0C9:
            switch (_bank) {
                case 5: func_B0C9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9405:
            switch (_bank) {
                case 5: func_9405_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC71:
            switch (_bank) {
                case 5: func_BC71_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5F0:
            switch (_bank) {
                case 5: func_A5F0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9728:
            switch (_bank) {
                case 5: func_9728_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1C2:
            switch (_bank) {
                case 5: func_B1C2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA951:
            switch (_bank) {
                case 5: func_A951_b5(); break;
                case 7: func_A951_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9483:
            switch (_bank) {
                case 5: func_9483_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9580:
            switch (_bank) {
                case 5: func_9580_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x959C:
            switch (_bank) {
                case 5: func_959C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95AC:
            switch (_bank) {
                case 5: func_95AC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9623:
            switch (_bank) {
                case 5: func_9623_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9703:
            switch (_bank) {
                case 5: func_9703_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D8B:
            switch (_bank) {
                case 5: func_9D8B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x948B:
            switch (_bank) {
                case 5: func_948B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA588:
            switch (_bank) {
                case 5: func_A588_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C93:
            switch (_bank) {
                case 5: func_9C93_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CF6:
            switch (_bank) {
                case 5: func_9CF6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D7A:
            switch (_bank) {
                case 5: func_9D7A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E15:
            switch (_bank) {
                case 5: func_9E15_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E98:
            switch (_bank) {
                case 5: func_9E98_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9ED4:
            switch (_bank) {
                case 5: func_9ED4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EF4:
            switch (_bank) {
                case 5: func_9EF4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F01:
            switch (_bank) {
                case 5: func_9F01_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F38:
            switch (_bank) {
                case 5: func_9F38_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F4D:
            switch (_bank) {
                case 5: func_9F4D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F73:
            switch (_bank) {
                case 5: func_9F73_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F7D:
            switch (_bank) {
                case 5: func_9F7D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F87:
            switch (_bank) {
                case 5: func_9F87_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA007:
            switch (_bank) {
                case 5: func_A007_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA05C:
            switch (_bank) {
                case 5: func_A05C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0A1:
            switch (_bank) {
                case 5: func_A0A1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0F3:
            switch (_bank) {
                case 5: func_A0F3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA15C:
            switch (_bank) {
                case 5: func_A15C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA188:
            switch (_bank) {
                case 5: func_A188_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA208:
            switch (_bank) {
                case 5: func_A208_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA28D:
            switch (_bank) {
                case 5: func_A28D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2CC:
            switch (_bank) {
                case 5: func_A2CC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA313:
            switch (_bank) {
                case 5: func_A313_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA38D:
            switch (_bank) {
                case 5: func_A38D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA392:
            switch (_bank) {
                case 5: func_A392_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3FB:
            switch (_bank) {
                case 5: func_A3FB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA403:
            switch (_bank) {
                case 5: func_A403_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA408:
            switch (_bank) {
                case 5: func_A408_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4C8:
            switch (_bank) {
                case 5: func_A4C8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5E4:
            switch (_bank) {
                case 5: func_A5E4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C92:
            switch (_bank) {
                case 5: func_9C92_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9764:
            switch (_bank) {
                case 5: func_9764_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F29:
            switch (_bank) {
                case 5: func_9F29_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D80:
            switch (_bank) {
                case 5: func_9D80_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4E8:
            switch (_bank) {
                case 5: func_A4E8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5A8:
            switch (_bank) {
                case 5: func_A5A8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D8D:
            switch (_bank) {
                case 5: func_9D8D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9787:
            switch (_bank) {
                case 5: func_9787_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9488:
            switch (_bank) {
                case 5: func_9488_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2FF:
            switch (_bank) {
                case 5: func_A2FF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA620:
            switch (_bank) {
                case 5: func_A620_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA200:
            switch (_bank) {
                case 5: func_A200_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5F7:
            switch (_bank) {
                case 5: func_A5F7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1D9:
            switch (_bank) {
                case 5: func_A1D9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D0D:
            switch (_bank) {
                case 5: func_9D0D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D20:
            switch (_bank) {
                case 5: func_9D20_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB031:
            switch (_bank) {
                case 5: func_B031_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95B0:
            switch (_bank) {
                case 5: func_95B0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95EE:
            switch (_bank) {
                case 5: func_95EE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D18:
            switch (_bank) {
                case 5: func_9D18_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEC70:
            func_EC70(); break;
        case 0x9177:
            switch (_bank) {
                case 5: func_9177_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA020:
            switch (_bank) {
                case 5: func_A020_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA029:
            switch (_bank) {
                case 5: func_A029_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA024:
            switch (_bank) {
                case 5: func_A024_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA04D:
            switch (_bank) {
                case 5: func_A04D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDBC:
            switch (_bank) {
                case 5: func_BDBC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDBE:
            switch (_bank) {
                case 5: func_BDBE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8FE:
            switch (_bank) {
                case 5: func_A8FE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD51:
            switch (_bank) {
                case 5: func_BD51_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD60:
            switch (_bank) {
                case 5: func_BD60_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD62:
            switch (_bank) {
                case 5: func_BD62_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD7D:
            switch (_bank) {
                case 5: func_BD7D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD331:
            func_D331(); break;
        case 0x9D98:
            switch (_bank) {
                case 5: func_9D98_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DA1:
            switch (_bank) {
                case 5: func_9DA1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD0B:
            switch (_bank) {
                case 5: func_BD0B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD0F:
            switch (_bank) {
                case 5: func_BD0F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x993B:
            switch (_bank) {
                case 5: func_993B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9702:
            switch (_bank) {
                case 5: func_9702_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9704:
            switch (_bank) {
                case 5: func_9704_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9723:
            switch (_bank) {
                case 5: func_9723_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4FD:
            switch (_bank) {
                case 5: func_A4FD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9651:
            switch (_bank) {
                case 5: func_9651_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA09D:
            switch (_bank) {
                case 5: func_A09D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A1:
            switch (_bank) {
                case 5: func_A9A1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA930:
            switch (_bank) {
                case 5: func_A930_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA931:
            switch (_bank) {
                case 5: func_A931_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D0B:
            switch (_bank) {
                case 5: func_9D0B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEA51:
            func_EA51(); break;
        case 0xB991:
            switch (_bank) {
                case 5: func_B991_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB999:
            switch (_bank) {
                case 5: func_B999_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA24D:
            switch (_bank) {
                case 5: func_A24D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D6D:
            switch (_bank) {
                case 5: func_9D6D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D74:
            switch (_bank) {
                case 5: func_9D74_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D79:
            switch (_bank) {
                case 5: func_9D79_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9EA:
            switch (_bank) {
                case 5: func_A9EA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9EE:
            switch (_bank) {
                case 5: func_A9EE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9F0:
            switch (_bank) {
                case 5: func_A9F0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81E9:
            switch (_bank) {
                case 5: func_81E9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB02E:
            switch (_bank) {
                case 5: func_B02E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB030:
            switch (_bank) {
                case 5: func_B030_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD4A:
            switch (_bank) {
                case 5: func_AD4A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD4C:
            switch (_bank) {
                case 5: func_AD4C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA940:
            switch (_bank) {
                case 5: func_A940_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9931:
            switch (_bank) {
                case 5: func_9931_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEFA0:
            func_EFA0(); break;
        case 0xEFA8:
            func_EFA8(); break;
        case 0xB027:
            switch (_bank) {
                case 5: func_B027_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB029:
            switch (_bank) {
                case 5: func_B029_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA995:
            switch (_bank) {
                case 5: func_A995_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF091:
            func_F091(); break;
        case 0xCD14:
            func_CD14(); break;
        case 0xB9D1:
            switch (_bank) {
                case 5: func_B9D1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7B6:
            switch (_bank) {
                case 5: func_A7B6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1A7:
            switch (_bank) {
                case 5: func_B1A7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1A9:
            switch (_bank) {
                case 5: func_B1A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1AB:
            switch (_bank) {
                case 5: func_B1AB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADA7:
            switch (_bank) {
                case 5: func_ADA7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADA9:
            switch (_bank) {
                case 5: func_ADA9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADB0:
            switch (_bank) {
                case 5: func_ADB0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADB3:
            switch (_bank) {
                case 5: func_ADB3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADB8:
            switch (_bank) {
                case 5: func_ADB8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99D1:
            switch (_bank) {
                case 5: func_99D1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5D1:
            switch (_bank) {
                case 5: func_A5D1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99AD:
            switch (_bank) {
                case 5: func_99AD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA851:
            switch (_bank) {
                case 5: func_A851_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB906:
            switch (_bank) {
                case 5: func_B906_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB911:
            switch (_bank) {
                case 5: func_B911_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7A5:
            switch (_bank) {
                case 5: func_A7A5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEA91:
            func_EA91(); break;
        case 0xA518:
            switch (_bank) {
                case 5: func_A518_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD51:
            switch (_bank) {
                case 5: func_AD51_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA206:
            switch (_bank) {
                case 5: func_A206_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA220:
            switch (_bank) {
                case 5: func_A220_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA905:
            switch (_bank) {
                case 5: func_A905_b5(); break;
                case 7: func_A905_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA903:
            switch (_bank) {
                case 5: func_A903_b5(); break;
                case 7: func_A903_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA907:
            switch (_bank) {
                case 5: func_A907_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA92C:
            switch (_bank) {
                case 5: func_A92C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE9BD:
            func_E9BD(); break;
        case 0x82EA:
            switch (_bank) {
                case 5: func_82EA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x831E:
            switch (_bank) {
                case 5: func_831E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA982:
            switch (_bank) {
                case 5: func_A982_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99A9:
            switch (_bank) {
                case 5: func_99A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99AB:
            switch (_bank) {
                case 5: func_99AB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91BD:
            switch (_bank) {
                case 5: func_91BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91D1:
            switch (_bank) {
                case 5: func_91D1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91D0:
            switch (_bank) {
                case 5: func_91D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91F1:
            switch (_bank) {
                case 5: func_91F1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9203:
            switch (_bank) {
                case 5: func_9203_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91C9:
            switch (_bank) {
                case 5: func_91C9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9202:
            switch (_bank) {
                case 5: func_9202_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9DC:
            switch (_bank) {
                case 5: func_A9DC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEA9E:
            func_EA9E(); break;
        case 0x949E:
            switch (_bank) {
                case 5: func_949E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94A9:
            switch (_bank) {
                case 5: func_94A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A0:
            switch (_bank) {
                case 5: func_A9A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A2:
            switch (_bank) {
                case 5: func_A9A2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE291:
            func_E291(); break;
        case 0xBDEA:
            switch (_bank) {
                case 5: func_BDEA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8004:
            switch (_bank) {
                case 5: func_8004_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xDE91:
            func_DE91(); break;
        case 0xD1C9:
            func_D1C9(); break;
        case 0xD1EC:
            func_D1EC(); break;
        case 0x9D00:
            switch (_bank) {
                case 5: func_9D00_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D04:
            switch (_bank) {
                case 5: func_9D04_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D02:
            switch (_bank) {
                case 5: func_9D02_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9138:
            switch (_bank) {
                case 5: func_9138_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEC24:
            func_EC24(); break;
        case 0xAAD9:
            switch (_bank) {
                case 5: func_AAD9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD8F0:
            func_D8F0(); break;
        case 0xD8F2:
            func_D8F2(); break;
        case 0xAA06:
            switch (_bank) {
                case 5: func_AA06_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA30:
            switch (_bank) {
                case 5: func_AA30_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA9E:
            switch (_bank) {
                case 5: func_AA9E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAABC:
            switch (_bank) {
                case 5: func_AABC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1D1:
            switch (_bank) {
                case 5: func_B1D1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9464:
            switch (_bank) {
                case 5: func_9464_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB99:
            switch (_bank) {
                case 5: func_AB99_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DAB:
            switch (_bank) {
                case 5: func_9DAB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB07:
            switch (_bank) {
                case 5: func_AB07_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA599:
            switch (_bank) {
                case 5: func_A599_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA59D:
            switch (_bank) {
                case 5: func_A59D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x997D:
            switch (_bank) {
                case 5: func_997D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DFE:
            switch (_bank) {
                case 5: func_9DFE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB60:
            switch (_bank) {
                case 5: func_AB60_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD25:
            switch (_bank) {
                case 5: func_BD25_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD29:
            switch (_bank) {
                case 5: func_BD29_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE73F:
            func_E73F(); break;
        case 0xE75C:
            func_E75C(); break;
        case 0xA222:
            switch (_bank) {
                case 5: func_A222_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA229:
            switch (_bank) {
                case 5: func_A229_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB430:
            switch (_bank) {
                case 5: func_B430_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB432:
            switch (_bank) {
                case 5: func_B432_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F48:
            switch (_bank) {
                case 5: func_9F48_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9909:
            switch (_bank) {
                case 5: func_9909_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5BD:
            switch (_bank) {
                case 5: func_A5BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA57D:
            switch (_bank) {
                case 5: func_A57D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA585:
            switch (_bank) {
                case 5: func_A585_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9FE9:
            switch (_bank) {
                case 5: func_9FE9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9FF1:
            switch (_bank) {
                case 5: func_9FF1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8530:
            switch (_bank) {
                case 5: func_8530_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB485:
            switch (_bank) {
                case 5: func_B485_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA58A:
            switch (_bank) {
                case 5: func_A58A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA504:
            switch (_bank) {
                case 5: func_A504_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABF2:
            switch (_bank) {
                case 5: func_ABF2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC00:
            switch (_bank) {
                case 5: func_AC00_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC08:
            switch (_bank) {
                case 5: func_AC08_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC20:
            switch (_bank) {
                case 5: func_AC20_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC4B:
            switch (_bank) {
                case 5: func_AC4B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0D1:
            switch (_bank) {
                case 5: func_A0D1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA100:
            switch (_bank) {
                case 5: func_A100_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0D3:
            switch (_bank) {
                case 5: func_A0D3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8553:
            switch (_bank) {
                case 5: func_8553_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFC33:
            func_FC33(); break;
        case 0xF031:
            func_F031(); break;
        case 0x9130:
            switch (_bank) {
                case 5: func_9130_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5A9:
            switch (_bank) {
                case 5: func_A5A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DE1:
            switch (_bank) {
                case 5: func_9DE1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DE6:
            switch (_bank) {
                case 5: func_9DE6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE53:
            switch (_bank) {
                case 5: func_AE53_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE88:
            switch (_bank) {
                case 5: func_AE88_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE8D:
            switch (_bank) {
                case 5: func_AE8D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEA7:
            switch (_bank) {
                case 5: func_AEA7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCAE:
            switch (_bank) {
                case 5: func_BCAE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DDE:
            switch (_bank) {
                case 5: func_9DDE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE460:
            func_E460(); break;
        case 0xE48E:
            func_E48E(); break;
        case 0xE488:
            func_E488(); break;
        case 0xE48A:
            func_E48A(); break;
        case 0xB99D:
            switch (_bank) {
                case 5: func_B99D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF06:
            switch (_bank) {
                case 5: func_AF06_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DA0:
            switch (_bank) {
                case 5: func_9DA0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DA2:
            switch (_bank) {
                case 5: func_9DA2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DA9:
            switch (_bank) {
                case 5: func_9DA9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE39:
            switch (_bank) {
                case 5: func_AE39_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF5C:
            switch (_bank) {
                case 5: func_AF5C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFD9:
            switch (_bank) {
                case 5: func_AFD9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF09:
            switch (_bank) {
                case 5: func_AF09_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF31:
            switch (_bank) {
                case 5: func_AF31_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF6B:
            switch (_bank) {
                case 5: func_AF6B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDAF:
            switch (_bank) {
                case 5: func_BDAF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9714:
            switch (_bank) {
                case 5: func_9714_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90D0:
            switch (_bank) {
                case 5: func_90D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90D1:
            switch (_bank) {
                case 5: func_90D1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8597:
            switch (_bank) {
                case 5: func_8597_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB18A:
            switch (_bank) {
                case 5: func_B18A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB195:
            switch (_bank) {
                case 5: func_B195_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB190:
            switch (_bank) {
                case 5: func_B190_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB18D:
            switch (_bank) {
                case 5: func_B18D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8B1:
            switch (_bank) {
                case 5: func_B8B1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8BD:
            switch (_bank) {
                case 5: func_B8BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB806:
            switch (_bank) {
                case 5: func_B806_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1C6:
            switch (_bank) {
                case 5: func_B1C6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xED33:
            func_ED33(); break;
        case 0xAF39:
            switch (_bank) {
                case 5: func_AF39_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF51:
            switch (_bank) {
                case 5: func_AF51_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF44:
            switch (_bank) {
                case 5: func_AF44_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB833:
            switch (_bank) {
                case 5: func_B833_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFBC:
            switch (_bank) {
                case 5: func_AFBC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA9D:
            switch (_bank) {
                case 5: func_AA9D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA010:
            switch (_bank) {
                case 5: func_A010_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB58A:
            switch (_bank) {
                case 5: func_B58A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB148:
            switch (_bank) {
                case 5: func_B148_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB14C:
            switch (_bank) {
                case 5: func_B14C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB151:
            switch (_bank) {
                case 5: func_B151_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xDE29:
            func_DE29(); break;
        case 0xDE30:
            func_DE30(); break;
        case 0xB160:
            switch (_bank) {
                case 5: func_B160_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8EFD:
            switch (_bank) {
                case 5: func_8EFD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8EFF:
            switch (_bank) {
                case 5: func_8EFF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFF1:
            switch (_bank) {
                case 5: func_AFF1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFF7:
            switch (_bank) {
                case 5: func_AFF7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB050:
            switch (_bank) {
                case 5: func_B050_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90EE:
            switch (_bank) {
                case 5: func_90EE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9100:
            switch (_bank) {
                case 5: func_9100_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9104:
            switch (_bank) {
                case 5: func_9104_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA94A:
            switch (_bank) {
                case 5: func_A94A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA94C:
            switch (_bank) {
                case 5: func_A94C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9AC:
            switch (_bank) {
                case 5: func_B9AC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9B1:
            switch (_bank) {
                case 5: func_B9B1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9B4:
            switch (_bank) {
                case 5: func_B9B4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9B0:
            switch (_bank) {
                case 5: func_B9B0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB116:
            switch (_bank) {
                case 5: func_B116_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD8D:
            switch (_bank) {
                case 5: func_AD8D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD99:
            switch (_bank) {
                case 5: func_AD99_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0D8:
            switch (_bank) {
                case 5: func_B0D8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0EA:
            switch (_bank) {
                case 5: func_B0EA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0F1:
            switch (_bank) {
                case 5: func_B0F1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB100:
            switch (_bank) {
                case 5: func_B100_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB10B:
            switch (_bank) {
                case 5: func_B10B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB10D:
            switch (_bank) {
                case 5: func_B10D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB123:
            switch (_bank) {
                case 5: func_B123_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCD11:
            func_CD11(); break;
        case 0x9E06:
            switch (_bank) {
                case 5: func_9E06_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9499:
            switch (_bank) {
                case 5: func_9499_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADCE:
            switch (_bank) {
                case 5: func_ADCE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0AD:
            switch (_bank) {
                case 5: func_B0AD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0B0:
            switch (_bank) {
                case 5: func_B0B0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0B5:
            switch (_bank) {
                case 5: func_B0B5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEA3A:
            func_EA3A(); break;
        case 0xAD33:
            switch (_bank) {
                case 5: func_AD33_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99D0:
            switch (_bank) {
                case 5: func_99D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA880:
            switch (_bank) {
                case 5: func_A880_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99E7:
            switch (_bank) {
                case 5: func_99E7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D4D:
            switch (_bank) {
                case 5: func_9D4D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D5D:
            switch (_bank) {
                case 5: func_9D5D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D85:
            switch (_bank) {
                case 5: func_9D85_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA26C:
            switch (_bank) {
                case 5: func_A26C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D92:
            switch (_bank) {
                case 5: func_9D92_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DB2:
            switch (_bank) {
                case 5: func_9DB2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA4A:
            switch (_bank) {
                case 5: func_AA4A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E51:
            switch (_bank) {
                case 5: func_9E51_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E3D:
            switch (_bank) {
                case 5: func_9E3D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E45:
            switch (_bank) {
                case 5: func_9E45_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E8A:
            switch (_bank) {
                case 5: func_9E8A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E92:
            switch (_bank) {
                case 5: func_9E92_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DD0:
            switch (_bank) {
                case 5: func_9DD0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA004:
            switch (_bank) {
                case 5: func_A004_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DBD:
            switch (_bank) {
                case 5: func_9DBD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F9D:
            switch (_bank) {
                case 5: func_9F9D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9FA8:
            switch (_bank) {
                case 5: func_9FA8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9FC2:
            switch (_bank) {
                case 5: func_9FC2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A20:
            switch (_bank) {
                case 5: func_9A20_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D7D:
            switch (_bank) {
                case 5: func_9D7D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA10F:
            switch (_bank) {
                case 5: func_A10F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA121:
            switch (_bank) {
                case 5: func_A121_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA132:
            switch (_bank) {
                case 5: func_A132_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA13D:
            switch (_bank) {
                case 5: func_A13D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA14C:
            switch (_bank) {
                case 5: func_A14C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA118:
            switch (_bank) {
                case 5: func_A118_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D69:
            switch (_bank) {
                case 5: func_9D69_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA258:
            switch (_bank) {
                case 5: func_A258_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA566:
            switch (_bank) {
                case 5: func_A566_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5A1:
            switch (_bank) {
                case 5: func_A5A1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5AC:
            switch (_bank) {
                case 5: func_A5AC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99F7:
            switch (_bank) {
                case 5: func_99F7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA07D:
            switch (_bank) {
                case 5: func_A07D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA766:
            switch (_bank) {
                case 5: func_A766_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA796:
            switch (_bank) {
                case 5: func_A796_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7CC:
            switch (_bank) {
                case 5: func_A7CC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7C1:
            switch (_bank) {
                case 5: func_A7C1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A6:
            switch (_bank) {
                case 5: func_A9A6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99FE:
            switch (_bank) {
                case 5: func_99FE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EEC:
            switch (_bank) {
                case 5: func_9EEC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAAF7:
            switch (_bank) {
                case 5: func_AAF7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA7F:
            switch (_bank) {
                case 5: func_AA7F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA87:
            switch (_bank) {
                case 5: func_AA87_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9B0:
            switch (_bank) {
                case 5: func_A9B0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EF7:
            switch (_bank) {
                case 5: func_9EF7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAAEC:
            switch (_bank) {
                case 5: func_AAEC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB30:
            switch (_bank) {
                case 5: func_AB30_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB06:
            switch (_bank) {
                case 5: func_AB06_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAAF1:
            switch (_bank) {
                case 5: func_AAF1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5B2:
            switch (_bank) {
                case 5: func_A5B2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA33:
            switch (_bank) {
                case 5: func_AA33_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5B1:
            switch (_bank) {
                case 5: func_A5B1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2EA:
            switch (_bank) {
                case 5: func_A2EA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2F9:
            switch (_bank) {
                case 5: func_A2F9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA1F:
            switch (_bank) {
                case 5: func_AA1F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C9B:
            switch (_bank) {
                case 5: func_9C9B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA91F:
            switch (_bank) {
                case 5: func_A91F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3FA:
            switch (_bank) {
                case 5: func_A3FA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D38:
            switch (_bank) {
                case 5: func_9D38_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9BF:
            switch (_bank) {
                case 5: func_A9BF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0E4:
            switch (_bank) {
                case 5: func_A0E4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA97F:
            switch (_bank) {
                case 5: func_A97F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA981:
            switch (_bank) {
                case 5: func_A981_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1A3:
            switch (_bank) {
                case 5: func_B1A3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1A5:
            switch (_bank) {
                case 5: func_B1A5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB212:
            switch (_bank) {
                case 5: func_B212_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6A2:
            switch (_bank) {
                case 5: func_B6A2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB925:
            switch (_bank) {
                case 5: func_B925_b5(); break;
                case 7: func_B925_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3F3:
            switch (_bank) {
                case 5: func_B3F3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB418:
            switch (_bank) {
                case 5: func_B418_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB44E:
            switch (_bank) {
                case 5: func_B44E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB431:
            switch (_bank) {
                case 5: func_B431_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB83A:
            switch (_bank) {
                case 5: func_B83A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB966:
            switch (_bank) {
                case 5: func_B966_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA71:
            switch (_bank) {
                case 5: func_BA71_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBACE:
            switch (_bank) {
                case 5: func_BACE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB484:
            switch (_bank) {
                case 5: func_B484_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB38C:
            switch (_bank) {
                case 5: func_B38C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA64:
            switch (_bank) {
                case 5: func_BA64_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB969:
            switch (_bank) {
                case 5: func_B969_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBF6:
            switch (_bank) {
                case 5: func_BBF6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6AC:
            switch (_bank) {
                case 5: func_B6AC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB788:
            switch (_bank) {
                case 5: func_B788_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB362:
            switch (_bank) {
                case 5: func_B362_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB659:
            switch (_bank) {
                case 5: func_B659_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB892:
            switch (_bank) {
                case 5: func_B892_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC04:
            switch (_bank) {
                case 5: func_BC04_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4E5:
            switch (_bank) {
                case 5: func_B4E5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA8F:
            switch (_bank) {
                case 5: func_BA8F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB989:
            switch (_bank) {
                case 5: func_B989_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB619:
            switch (_bank) {
                case 5: func_B619_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACBD:
            switch (_bank) {
                case 5: func_ACBD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD9D:
            switch (_bank) {
                case 5: func_AD9D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADA5:
            switch (_bank) {
                case 5: func_ADA5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF01A:
            func_F01A(); break;
        case 0xF01E:
            func_F01E(); break;
        case 0xAD72:
            switch (_bank) {
                case 5: func_AD72_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD76:
            switch (_bank) {
                case 5: func_AD76_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB929:
            switch (_bank) {
                case 5: func_B929_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB218:
            switch (_bank) {
                case 5: func_B218_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA01F:
            switch (_bank) {
                case 5: func_A01F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA026:
            switch (_bank) {
                case 5: func_A026_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADEE:
            switch (_bank) {
                case 5: func_ADEE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADF0:
            switch (_bank) {
                case 5: func_ADF0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB102:
            switch (_bank) {
                case 5: func_B102_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB104:
            switch (_bank) {
                case 5: func_B104_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB106:
            switch (_bank) {
                case 5: func_B106_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF13F:
            func_F13F(); break;
        case 0xEE00:
            func_EE00(); break;
        case 0xEE07:
            func_EE07(); break;
        case 0xEE0E:
            func_EE0E(); break;
        case 0xEE02:
            func_EE02(); break;
        case 0xEE10:
            func_EE10(); break;
        case 0xEE05:
            func_EE05(); break;
        case 0xEE09:
            func_EE09(); break;
        case 0xEE0C:
            func_EE0C(); break;
        case 0xAD13:
            switch (_bank) {
                case 5: func_AD13_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADB7:
            switch (_bank) {
                case 5: func_ADB7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF94D:
            func_F94D(); break;
        case 0x8F08:
            switch (_bank) {
                case 5: func_8F08_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB02A:
            switch (_bank) {
                case 5: func_B02A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA98F:
            switch (_bank) {
                case 5: func_A98F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA994:
            switch (_bank) {
                case 5: func_A994_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA991:
            switch (_bank) {
                case 5: func_A991_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA998:
            switch (_bank) {
                case 5: func_A998_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9805:
            switch (_bank) {
                case 5: func_9805_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA820:
            switch (_bank) {
                case 5: func_A820_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD46:
            switch (_bank) {
                case 5: func_AD46_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD48:
            switch (_bank) {
                case 5: func_AD48_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0C9:
            switch (_bank) {
                case 5: func_A0C9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0D0:
            switch (_bank) {
                case 5: func_A0D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB807:
            switch (_bank) {
                case 5: func_B807_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA98:
            switch (_bank) {
                case 5: func_AA98_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD07:
            switch (_bank) {
                case 5: func_AD07_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD11:
            switch (_bank) {
                case 5: func_AD11_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD08:
            switch (_bank) {
                case 5: func_AD08_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB979:
            switch (_bank) {
                case 5: func_B979_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE9AD:
            func_E9AD(); break;
        case 0xA0B1:
            switch (_bank) {
                case 5: func_A0B1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0B7:
            switch (_bank) {
                case 5: func_A0B7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0BA:
            switch (_bank) {
                case 5: func_A0BA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD24:
            switch (_bank) {
                case 5: func_AD24_b5(); break;
                case 7: func_AD24_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD29:
            switch (_bank) {
                case 5: func_AD29_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93A9:
            switch (_bank) {
                case 5: func_93A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB120:
            switch (_bank) {
                case 5: func_B120_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB293:
            switch (_bank) {
                case 5: func_B293_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB738:
            switch (_bank) {
                case 5: func_B738_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB985:
            switch (_bank) {
                case 5: func_B985_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEEFC:
            func_EEFC(); break;
        case 0xEF00:
            func_EF00(); break;
        case 0xEEFF:
            func_EEFF(); break;
        case 0xEF02:
            func_EF02(); break;
        case 0xEF04:
            func_EF04(); break;
        case 0xEF03:
            func_EF03(); break;
        case 0x98B1:
            switch (_bank) {
                case 5: func_98B1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA811:
            switch (_bank) {
                case 5: func_A811_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA83A:
            switch (_bank) {
                case 5: func_A83A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8535:
            switch (_bank) {
                case 5: func_8535_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8528:
            switch (_bank) {
                case 5: func_8528_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8562:
            switch (_bank) {
                case 5: func_8562_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x852A:
            switch (_bank) {
                case 5: func_852A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8559:
            switch (_bank) {
                case 5: func_8559_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x853D:
            switch (_bank) {
                case 5: func_853D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB85:
            switch (_bank) {
                case 5: func_BB85_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90BA:
            switch (_bank) {
                case 5: func_90BA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90BC:
            switch (_bank) {
                case 5: func_90BC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90C0:
            switch (_bank) {
                case 5: func_90C0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9281:
            switch (_bank) {
                case 5: func_9281_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9283:
            switch (_bank) {
                case 5: func_9283_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9392:
            switch (_bank) {
                case 5: func_9392_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A99:
            switch (_bank) {
                case 5: func_9A99_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9493:
            switch (_bank) {
                case 5: func_9493_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B9A:
            switch (_bank) {
                case 5: func_9B9A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD85:
            switch (_bank) {
                case 5: func_AD85_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD8C:
            switch (_bank) {
                case 5: func_AD8C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD86:
            switch (_bank) {
                case 5: func_AD86_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB0A:
            switch (_bank) {
                case 5: func_BB0A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB97F:
            switch (_bank) {
                case 5: func_B97F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB94A:
            switch (_bank) {
                case 5: func_B94A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99A0:
            switch (_bank) {
                case 5: func_99A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99A2:
            switch (_bank) {
                case 5: func_99A2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6A0:
            switch (_bank) {
                case 5: func_A6A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA733:
            switch (_bank) {
                case 5: func_A733_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA85B:
            switch (_bank) {
                case 5: func_A85B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA873:
            switch (_bank) {
                case 5: func_A873_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8F6:
            switch (_bank) {
                case 5: func_A8F6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9C2:
            switch (_bank) {
                case 5: func_A9C2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA02:
            switch (_bank) {
                case 5: func_AA02_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA52:
            switch (_bank) {
                case 5: func_AA52_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAABD:
            switch (_bank) {
                case 5: func_AABD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA900:
            switch (_bank) {
                case 5: func_A900_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA960:
            switch (_bank) {
                case 5: func_A960_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA99A:
            switch (_bank) {
                case 5: func_A99A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA740:
            switch (_bank) {
                case 5: func_A740_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7A7:
            switch (_bank) {
                case 5: func_A7A7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9BD:
            switch (_bank) {
                case 5: func_A9BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA934:
            switch (_bank) {
                case 5: func_A934_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA953:
            switch (_bank) {
                case 5: func_A953_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA23:
            switch (_bank) {
                case 5: func_AA23_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAAA8:
            switch (_bank) {
                case 5: func_AAA8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA8A:
            switch (_bank) {
                case 5: func_AA8A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA968:
            switch (_bank) {
                case 5: func_A968_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA969:
            switch (_bank) {
                case 5: func_A969_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA96C:
            switch (_bank) {
                case 5: func_A96C_b5(); break;
                case 7: func_A96C_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA659:
            switch (_bank) {
                case 5: func_A659_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA840:
            switch (_bank) {
                case 5: func_A840_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA6D:
            switch (_bank) {
                case 5: func_AA6D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA985:
            switch (_bank) {
                case 5: func_A985_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA98D:
            switch (_bank) {
                case 5: func_A98D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA98A:
            switch (_bank) {
                case 5: func_A98A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA085:
            switch (_bank) {
                case 5: func_A085_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD10:
            switch (_bank) {
                case 5: func_AD10_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF0AD:
            func_F0AD(); break;
        case 0x9206:
            switch (_bank) {
                case 5: func_9206_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x989A:
            switch (_bank) {
                case 5: func_989A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCA8:
            switch (_bank) {
                case 5: func_BCA8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD845:
            func_D845(); break;
        case 0xBCD8:
            switch (_bank) {
                case 5: func_BCD8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4A5:
            switch (_bank) {
                case 5: func_B4A5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5C4:
            switch (_bank) {
                case 5: func_A5C4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC98:
            switch (_bank) {
                case 5: func_BC98_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BBC:
            switch (_bank) {
                case 5: func_9BBC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC9B:
            switch (_bank) {
                case 5: func_BC9B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD405:
            func_D405(); break;
        case 0xD407:
            func_D407(); break;
        case 0x97A9:
            switch (_bank) {
                case 5: func_97A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA502:
            switch (_bank) {
                case 5: func_A502_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB220:
            switch (_bank) {
                case 5: func_B220_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCB2:
            switch (_bank) {
                case 5: func_BCB2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92E9:
            switch (_bank) {
                case 5: func_92E9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98FB:
            switch (_bank) {
                case 5: func_98FB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFF9D:
            func_FF9D(); break;
        case 0xBE44:
            switch (_bank) {
                case 5: func_BE44_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE79:
            switch (_bank) {
                case 5: func_BE79_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE49:
            switch (_bank) {
                case 5: func_BE49_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0BE:
            switch (_bank) {
                case 5: func_A0BE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1FA:
            switch (_bank) {
                case 5: func_B1FA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1FF:
            switch (_bank) {
                case 5: func_B1FF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5EE:
            switch (_bank) {
                case 5: func_A5EE_b5(); break;
                case 7: func_A5EE_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA869:
            switch (_bank) {
                case 5: func_A869_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83AE:
            switch (_bank) {
                case 6: func_83AE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83E0:
            switch (_bank) {
                case 6: func_83E0_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83CA:
            switch (_bank) {
                case 6: func_83CA_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83CC:
            switch (_bank) {
                case 6: func_83CC_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8403:
            switch (_bank) {
                case 6: func_8403_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8431:
            switch (_bank) {
                case 6: func_8431_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x843C:
            switch (_bank) {
                case 6: func_843C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8445:
            switch (_bank) {
                case 6: func_8445_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8467:
            switch (_bank) {
                case 6: func_8467_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8450:
            switch (_bank) {
                case 6: func_8450_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x847B:
            switch (_bank) {
                case 6: func_847B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8488:
            switch (_bank) {
                case 6: func_8488_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8493:
            switch (_bank) {
                case 6: func_8493_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84A0:
            switch (_bank) {
                case 6: func_84A0_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84AB:
            switch (_bank) {
                case 6: func_84AB_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84C4:
            switch (_bank) {
                case 6: func_84C4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85EB:
            switch (_bank) {
                case 6: func_85EB_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86EB:
            switch (_bank) {
                case 6: func_86EB_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C99:
            switch (_bank) {
                case 6: func_9C99_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8801:
            switch (_bank) {
                case 7: func_C801(); break;
                case 6: func_8801_b6(); break;
                case 3: func_8801_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9885:
            switch (_bank) {
                case 6: func_9885_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86E6:
            switch (_bank) {
                case 6: func_86E6_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x873A:
            switch (_bank) {
                case 6: func_873A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8795:
            switch (_bank) {
                case 6: func_8795_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x874A:
            switch (_bank) {
                case 6: func_874A_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8781:
            switch (_bank) {
                case 6: func_8781_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8761:
            switch (_bank) {
                case 6: func_8761_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x876E:
            switch (_bank) {
                case 6: func_876E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8797:
            switch (_bank) {
                case 6: func_8797_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8763:
            switch (_bank) {
                case 6: func_8763_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x878D:
            switch (_bank) {
                case 6: func_878D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA40F:
            switch (_bank) {
                case 6: func_A40F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x882F:
            switch (_bank) {
                case 6: func_882F_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x884B:
            switch (_bank) {
                case 6: func_884B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8860:
            switch (_bank) {
                case 6: func_8860_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x88FE:
            switch (_bank) {
                case 6: func_88FE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x88B4:
            switch (_bank) {
                case 6: func_88B4_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x88C3:
            switch (_bank) {
                case 6: func_88C3_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8971:
            switch (_bank) {
                case 6: func_8971_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8931:
            switch (_bank) {
                case 6: func_8931_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8944:
            switch (_bank) {
                case 6: func_8944_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8964:
            switch (_bank) {
                case 6: func_8964_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8981:
            switch (_bank) {
                case 6: func_8981_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8989:
            switch (_bank) {
                case 6: func_8989_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8987:
            switch (_bank) {
                case 6: func_8987_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8999:
            switch (_bank) {
                case 6: func_8999_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE80:
            switch (_bank) {
                case 7: func_AE80_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE02:
            switch (_bank) {
                case 7: func_AE02_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DAD:
            switch (_bank) {
                case 7: func_8DAD_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DCA:
            switch (_bank) {
                case 7: func_8DCA_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9E9:
            switch (_bank) {
                case 7: func_A9E9_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x990E:
            switch (_bank) {
                case 7: func_990E_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9913:
            switch (_bank) {
                case 7: func_9913_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9CA:
            switch (_bank) {
                case 7: func_A9CA_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5E9:
            switch (_bank) {
                case 7: func_A5E9_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B30:
            switch (_bank) {
                case 7: func_8B30_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA904:
            switch (_bank) {
                case 7: func_A904_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99C1:
            switch (_bank) {
                case 7: func_99C1_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9951:
            switch (_bank) {
                case 7: func_9951_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE930:
            func_E930(); break;
        case 0xA933:
            switch (_bank) {
                case 7: func_A933_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA936:
            switch (_bank) {
                case 7: func_A936_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9848:
            switch (_bank) {
                case 7: func_9848_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1B9:
            switch (_bank) {
                case 7: func_A1B9_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB924:
            switch (_bank) {
                case 7: func_B924_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9033:
            switch (_bank) {
                case 7: func_9033_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF617:
            func_F617(); break;
        case 0xF621:
            func_F621(); break;
        case 0xF630:
            func_F630(); break;
        case 0xF660:
            func_F660(); break;
        case 0xA404:
            switch (_bank) {
                case 7: func_A404_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD28A:
            func_D28A(); break;
        case 0xA420:
            switch (_bank) {
                case 7: func_A420_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4A4:
            switch (_bank) {
                case 7: func_B4A4_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9BE:
            switch (_bank) {
                case 7: func_A9BE_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99F5:
            switch (_bank) {
                case 7: func_99F5_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0B4:
            switch (_bank) {
                case 7: func_A0B4_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD16:
            switch (_bank) {
                case 7: func_AD16_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EF5:
            switch (_bank) {
                case 7: func_9EF5_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F14:
            switch (_bank) {
                case 7: func_9F14_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9F6:
            switch (_bank) {
                case 7: func_A9F6_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4E9:
            switch (_bank) {
                case 7: func_A4E9_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA503:
            switch (_bank) {
                case 7: func_A503_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA50D:
            switch (_bank) {
                case 7: func_A50D_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E20:
            switch (_bank) {
                case 7: func_9E20_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE118:
            func_E118(); break;
        case 0xE11C:
            func_E11C(); break;
        case 0x8CC9:
            switch (_bank) {
                case 7: func_8CC9_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CD2:
            switch (_bank) {
                case 7: func_8CD2_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CA5:
            switch (_bank) {
                case 7: func_8CA5_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9D0:
            switch (_bank) {
                case 7: func_A9D0_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0C6:
            switch (_bank) {
                case 4: func_B0C6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84F1:
            switch (_bank) {
                case 4: func_84F1_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x901B:
            switch (_bank) {
                case 5: func_901B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9028:
            switch (_bank) {
                case 5: func_9028_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB285:
            switch (_bank) {
                case 5: func_B285_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE6C:
            switch (_bank) {
                case 5: func_AE6C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x841C:
            switch (_bank) {
                case 5: func_841C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D59:
            switch (_bank) {
                case 5: func_9D59_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x90E6:
            switch (_bank) {
                case 5: func_90E6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEA28:
            func_EA28(); break;
        case 0xA139:
            switch (_bank) {
                case 5: func_A139_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEA50:
            func_EA50(); break;
        case 0xEA30:
            func_EA30(); break;
        case 0xAA7B:
            switch (_bank) {
                case 5: func_AA7B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB8C:
            switch (_bank) {
                case 5: func_AB8C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCC4:
            switch (_bank) {
                case 5: func_BCC4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9974:
            switch (_bank) {
                case 5: func_9974_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9989:
            switch (_bank) {
                case 5: func_9989_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9963:
            switch (_bank) {
                case 5: func_9963_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABFF:
            switch (_bank) {
                case 5: func_ABFF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7D0:
            switch (_bank) {
                case 5: func_B7D0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFB0:
            switch (_bank) {
                case 5: func_AFB0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB519:
            switch (_bank) {
                case 5: func_B519_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB529:
            switch (_bank) {
                case 5: func_B529_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB03F:
            switch (_bank) {
                case 5: func_B03F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB04F:
            switch (_bank) {
                case 5: func_B04F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB902:
            switch (_bank) {
                case 5: func_B902_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB904:
            switch (_bank) {
                case 5: func_B904_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA41:
            switch (_bank) {
                case 5: func_BA41_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA49C:
            switch (_bank) {
                case 5: func_A49C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4A9:
            switch (_bank) {
                case 5: func_A4A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0ED:
            switch (_bank) {
                case 5: func_B0ED_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0F0:
            switch (_bank) {
                case 5: func_B0F0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99D7:
            switch (_bank) {
                case 5: func_99D7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8F01:
            switch (_bank) {
                case 5: func_8F01_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB843:
            switch (_bank) {
                case 5: func_B843_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB84A:
            switch (_bank) {
                case 5: func_B84A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB885:
            switch (_bank) {
                case 5: func_B885_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99CB:
            switch (_bank) {
                case 5: func_99CB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B72:
            switch (_bank) {
                case 5: func_9B72_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEBD:
            switch (_bank) {
                case 5: func_BEBD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8415:
            switch (_bank) {
                case 6: func_8415_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B79:
            switch (_bank) {
                case 6: func_8B79_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BA9:
            switch (_bank) {
                case 6: func_8BA9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9C9:
            switch (_bank) {
                case 7: func_A9C9_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9FF:
            switch (_bank) {
                case 7: func_A9FF_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA0A:
            switch (_bank) {
                case 7: func_AA0A_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0AC:
            switch (_bank) {
                case 7: func_A0AC_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98AE:
            switch (_bank) {
                case 7: func_98AE_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98F5:
            switch (_bank) {
                case 7: func_98F5_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA553:
            switch (_bank) {
                case 7: func_A553_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA98C:
            switch (_bank) {
                case 7: func_A98C_b7(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA3B:
            switch (_bank) {
                case 5: func_BA3B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99D5:
            switch (_bank) {
                case 5: func_99D5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x89DD:
            switch (_bank) {
                case 6: func_89DD_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA013:
            switch (_bank) {
                case 3: func_A013_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C01:
            switch (_bank) {
                case 3: func_8C01_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC01:
            switch (_bank) {
                case 3: func_BC01_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC03:
            switch (_bank) {
                case 3: func_BC03_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE0B9:
            func_E0B9(); break;
        case 0xE001:
            func_E001(); break;
        case 0xA0BF:
            switch (_bank) {
                case 3: func_A0BF_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8886:
            switch (_bank) {
                case 3: func_8886_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0DC:
            switch (_bank) {
                case 3: func_A0DC_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB401:
            switch (_bank) {
                case 3: func_B401_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1EB:
            switch (_bank) {
                case 3: func_A1EB_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA009:
            switch (_bank) {
                case 6: func_A009_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x4801:
            func_4801_b3(); break;
        case 0x8BF9:
            switch (_bank) {
                case 3: func_8BF9_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        default:
            return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
    }
    return 1;
}

/* Legacy entry: no caller-bank hint (JMP-indirect, interp, debug server).
 * Depth-counted so deferred JMP-tail targets get driven (see runtime.c). */
int call_by_address(uint16_t addr) { return nes_dispatch_call(addr, -1); }
