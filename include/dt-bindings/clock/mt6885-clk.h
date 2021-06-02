/*
 * Copyright (c) 2019 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

/* TOPCKGEN */
#define TOP_MUX_AXI 1
#define TOP_MUX_SPM 2
#define TOP_MUX_SCP 3
#define TOP_MUX_BUS_AXIMEM 4
#define TOP_MUX_DISP 5
#define TOP_MUX_MDP 6
#define TOP_MUX_IMG1 7
#define TOP_MUX_IMG2 8
#define TOP_MUX_IPE 9
#define TOP_MUX_DPE 10
#define TOP_MUX_CAM 11
#define TOP_MUX_CCU 12
#define TOP_MUX_DSP 13
#define TOP_MUX_DSP1 14
#define TOP_MUX_DSP2 15
#define TOP_MUX_DSP3 16
#define TOP_MUX_DSP4 17
#define TOP_MUX_DSP5 18
#define TOP_MUX_DSP6 19
#define TOP_MUX_DSP7 20
#define TOP_MUX_IPU_IF 21
#define TOP_MUX_MFG 22
#define TOP_MUX_CAMTG 23
#define TOP_MUX_CAMTG2 24
#define TOP_MUX_CAMTG3 25
#define TOP_MUX_CAMTG4 26
#define TOP_MUX_UART 27
#define TOP_MUX_SPI 28
#define TOP_MUX_MSDC50_0_HCLK 29
#define TOP_MUX_MSDC50_0 30
#define TOP_MUX_MSDC30_1 31
#define TOP_MUX_AUDIO 32
#define TOP_MUX_AUD_INTBUS 33
#define TOP_MUX_PWRAP_ULPOSC 34
#define TOP_MUX_ATB 35
#define TOP_MUX_SSPM 36
#define TOP_MUX_DP 37
#define TOP_MUX_SCAM 38
#define TOP_MUX_DISP_PWM 39
#define TOP_MUX_USB_TOP 40
#define TOP_MUX_SSUSB_XHCI 41
#define TOP_MUX_I2C 42
#define TOP_MUX_SENINF 43
#define TOP_MUX_SENINF1 44
#define TOP_MUX_SENINF2 45
#define TOP_MUX_SENINF3 46
#define TOP_MUX_DXCC 47
#define TOP_MUX_AUD_ENGEN1 48
#define TOP_MUX_AUD_ENGEN2 49
#define TOP_MUX_AES_UFSFDE 50
#define TOP_MUX_UFS 51
#define TOP_MUX_AUD_1 52
#define TOP_MUX_AUD_2 53
#define TOP_MUX_ADSP 54
#define TOP_MUX_DPMAIF_MAIN 55
#define TOP_MUX_VENC 56
#define TOP_MUX_VDEC 57
#define TOP_MUX_VDEC_LAT 58
#define TOP_MUX_CAMTM 59
#define TOP_MUX_PWM 60
#define TOP_MUX_AUDIO_H 61
#define TOP_MUX_CAMTG5 62
#define TOP_MUX_CAMTG6 63
#define TOP_MUX_MCUPM 64
#define TOP_MUX_SPMI_MST 65
#define TOP_MUX_DVFSRC 66

#define TOP_AD_ARMPLL_BL0_CK_VRPOC 67
#define TOP_AD_ARMPLL_BL1_CK_VRPOC 68
#define TOP_AD_ARMPLL_BL2_CK_VRPOC 69
#define TOP_AD_ARMPLL_BL3_CK_VRPOC 70
#define TOP_AD_ARMPLL_LL_CK_VRPOC 71
#define TOP_AD_CCIPLL_CK_VRPOC_CCI 72
#define TOP_MAINPLL_CK 73
#define TOP_MAINPLL_D2 74
#define TOP_MAINPLL_D3 75
#define TOP_MAINPLL_D4 76
#define TOP_MAINPLL_D4_D2 77
#define TOP_MAINPLL_D4_D4 78
#define TOP_MAINPLL_D4_D8 79
#define TOP_MAINPLL_D4_D16 80
#define TOP_MAINPLL_D5 81
#define TOP_MAINPLL_D5_D2 82
#define TOP_MAINPLL_D5_D4 83
#define TOP_MAINPLL_D5_D8 84
#define TOP_MAINPLL_D6 85
#define TOP_MAINPLL_D6_D2 86
#define TOP_MAINPLL_D6_D4 87
#define TOP_MAINPLL_D6_D8 88
#define TOP_MAINPLL_D7 89
#define TOP_MAINPLL_D7_D2 90
#define TOP_MAINPLL_D7_D4 91
#define TOP_MAINPLL_D7_D8 92
#define TOP_MAINPLL_D9 93
#define TOP_UNIVPLL_CK 94
#define TOP_UNIVPLL_D2 95
#define TOP_UNIVPLL_D3 96
#define TOP_UNIVPLL_D4 97
#define TOP_UNIVPLL_D4_D2 98
#define TOP_UNIVPLL_D4_D4 99
#define TOP_UNIVPLL_D4_D8 100
#define TOP_UNIVPLL_D5 101
#define TOP_UNIVPLL_D5_D2 102
#define TOP_UNIVPLL_D5_D4 103
#define TOP_UNIVPLL_D5_D8 104
#define TOP_UNIVPLL_D5_D16 105
#define TOP_UNIVPLL_D6 106
#define TOP_UNIVPLL_D6_D2 107
#define TOP_UNIVPLL_D6_D4 108
#define TOP_UNIVPLL_D6_D8 109
#define TOP_UNIVPLL_D7 110
#define TOP_UNIVPLL_D7_D2 111
#define TOP_APLL1_CK 112
#define TOP_APLL2_CK 113
#define TOP_MMPLL_D3 114
#define TOP_MMPLL_D4 115
#define TOP_MMPLL_D4_D2 116
#define TOP_MMPLL_D4_D4 117
#define TOP_MMPLL_D5 118
#define TOP_MMPLL_D5_D2 119
#define TOP_MMPLL_D5_D4 120
#define TOP_MMPLL_D6 121
#define TOP_MMPLL_D6_D2 122
#define TOP_MMPLL_D7 123
#define TOP_MMPLL_D9 124
#define TOP_APUPLL_CK 125
#define TOP_TVDPLL_CK 126
#define TOP_TVDPLL_D2 127
#define TOP_TVDPLL_D4 128
#define TOP_TVDPLL_D8 129
#define TOP_TVDPLL_D16 130
#define TOP_MSDCPLL_CK 131
#define TOP_MSDCPLL_D2 132
#define TOP_MSDCPLL_D4 133
#define TOP_MSDCPLL_D8 134
#define TOP_MSDCPLL_D16 135
#define TOP_AD_OSC_CK 136
#define TOP_OSC_D2 137
#define TOP_OSC_D4 138
#define TOP_OSC_D8 139
#define TOP_OSC_D16 140
#define TOP_OSC_D10 141
#define TOP_OSC_D20 142
#define TOP_AD_OSC_CK_2 143
#define TOP_OSC2_D2 144
#define TOP_OSC2_D3 145
#define TOP_TVDPLL_MAINPLL_D2_CK 146

#define TOP_CLK26M				147	/* add manually */
#define TOP_CLK13M				148	/* add manually */
#define TOP_F26M_CK_D2			149	/* add manually */
#define TOP_UNIVP_192M_CK		150	/* add manually */
#define TOP_UNIVP_192M_D2		151	/* add manually */
#define TOP_UNIVP_192M_D4		152	/* add manually */
#define TOP_UNIVP_192M_D8		153	/* add manually */
#define TOP_UNIVP_192M_D16		154	/* add manually */
#define TOP_UNIVP_192M_D32		155	/* add manually */
#define TOP_APLL1_D2			156	/* add manually */
#define TOP_APLL1_D4			157	/* add manually */
#define TOP_APLL1_D8			158	/* add manually */
#define TOP_APLL2_D2			159	/* add manually */
#define TOP_APLL2_D4			160	/* add manually */
#define TOP_APLL2_D8			161	/* add manually */
#define TOP_MFGPLL_CK			162	/* add manually */
#define TOP_ADSPPLL_CK			163	/* add manually */

#define TOP_I2S0_M_SEL			164	/* add manually */
#define TOP_I2S1_M_SEL			165	/* add manually */
#define TOP_I2S2_M_SEL			166	/* add manually */
#define TOP_I2S3_M_SEL			167	/* add manually */
#define TOP_I2S4_M_SEL			168	/* add manually */
#define TOP_I2S5_M_SEL			169	/* add manually */
#define TOP_I2S6_M_SEL			170	/* add manually */
#define TOP_I2S7_M_SEL			171	/* add manually */
#define TOP_I2S8_M_SEL			172	/* add manually */
#define TOP_I2S9_M_SEL			173	/* add manually */

#define TOP_APLL12_DIV0			174	/* add manually */
#define TOP_APLL12_DIV1			175	/* add manually */
#define TOP_APLL12_DIV2			176	/* add manually */
#define TOP_APLL12_DIV3			177	/* add manually */
#define TOP_APLL12_DIV4			178	/* add manually */
#define TOP_APLL12_DIVB			179	/* add manually */
#define TOP_APLL12_DIV5			180	/* add manually */
#define TOP_APLL12_DIV6			181	/* add manually */
#define TOP_APLL12_DIV7			182	/* add manually */
#define TOP_APLL12_DIV8			183	/* add manually */
#define TOP_APLL12_DIV9			184	/* add manually */

#define TOP_UNIVPLL_D6_D16		185 /* add manually */

#define TOP_NR_CLK				186

#define CLK_TOP_UNIVPLL2_D4 148         /* TODO: removed!! */
#define CLK_TOP_ULPOSC1_D2 149          /* TODO: removed!! */
#define CLK_TOP_ULPOSC1_D8 150          /* TODO: removed!! */


/* APMIXED */
#define APMIXED_ARMPLL_LL 1
#define APMIXED_ARMPLL_BL0 2
#define APMIXED_ARMPLL_BL1 3
#define APMIXED_ARMPLL_BL2 4
#define APMIXED_ARMPLL_BL3 5
#define APMIXED_CCIPLL 6
#define APMIXED_MAINPLL 7
#define APMIXED_UNIVPLL 8
#define APMIXED_MSDCPLL 9
#define APMIXED_MMPLL 10
#define APMIXED_ADSPPLL 11
#define APMIXED_MFGPLL 12
#define APMIXED_TVDPLL 13
#define APMIXED_APLL1 14
#define APMIXED_APLL2 15
#define APMIXED_APUPLL 16
#define APMIXED_MIPID0_26M 17
#define APMIXED_NR_CLK 18
#define CLK_APMIXED_MIPID0_26M 19       /* TODO: removed!! */

/* APU0 */
#define APU0_APU_CG 1
#define APU0_AXI_M_CG 2
#define APU0_JTAG_CG 3
#define APU0_NR_CLK 4
/* APU1 */
#define APU1_APU_CG 1
#define APU1_AXI_M_CG 2
#define APU1_JTAG_CG 3
#define APU1_NR_CLK 4
/* APU2 */
#define APU2_APU_CG 1
#define APU2_AXI_M_CG 2
#define APU2_JTAG_CG 3
#define APU2_NR_CLK 4
/* APUSYS_VCORE */
#define APUSYS_VCORE_AHB_CG 1
#define APUSYS_VCORE_AXI_CG 2
#define APUSYS_VCORE_ADL_CG 3
#define APUSYS_VCORE_QOS_CG 4
#define APUSYS_VCORE_NR_CLK 5
/* APU_CONN */
#define APU_CONN_AHB_CG 1
#define APU_CONN_AXI_CG 2
#define APU_CONN_ISP_CG 3
#define APU_CONN_CAM_ADL_CG 4
#define APU_CONN_IMG_ADL_CG 5
#define APU_CONN_EMI_26M_CG 6
#define APU_CONN_VPU_UDI_CG 7
#define APU_CONN_EDMA_0_CG 8
#define APU_CONN_EDMA_1_CG 9
#define APU_CONN_EDMAL_0_CG 10
#define APU_CONN_EDMAL_1_CG 11
#define APU_CONN_MNOC_CG 12
#define APU_CONN_TCM_CG 13
#define APU_CONN_MD32_CG 14
#define APU_CONN_IOMMU_0_CG 15
#define APU_CONN_IOMMU_1_CG 16
#define APU_CONN_MD32_32K_CG 17
#define APU_CONN_NR_CLK 18
/* APU_MDLA0 */
#define APU_MDLA0_MDLA_CG0 1
#define APU_MDLA0_MDLA_CG1 2
#define APU_MDLA0_MDLA_CG2 3
#define APU_MDLA0_MDLA_CG3 4
#define APU_MDLA0_MDLA_CG4 5
#define APU_MDLA0_MDLA_CG5 6
#define APU_MDLA0_MDLA_CG6 7
#define APU_MDLA0_MDLA_CG7 8
#define APU_MDLA0_MDLA_CG8 9
#define APU_MDLA0_MDLA_CG9 10
#define APU_MDLA0_MDLA_CG10 11
#define APU_MDLA0_MDLA_CG11 12
#define APU_MDLA0_MDLA_CG12 13
#define APU_MDLA0_APB_CG 14
#define APU_MDLA0_AXI_M_CG 15
#define APU_MDLA0_NR_CLK 16
/* APU_MDLA1 */
#define APU_MDLA1_MDLA_CG0 1
#define APU_MDLA1_MDLA_CG1 2
#define APU_MDLA1_MDLA_CG2 3
#define APU_MDLA1_MDLA_CG3 4
#define APU_MDLA1_MDLA_CG4 5
#define APU_MDLA1_MDLA_CG5 6
#define APU_MDLA1_MDLA_CG6 7
#define APU_MDLA1_MDLA_CG7 8
#define APU_MDLA1_MDLA_CG8 9
#define APU_MDLA1_MDLA_CG9 10
#define APU_MDLA1_MDLA_CG10 11
#define APU_MDLA1_MDLA_CG11 12
#define APU_MDLA1_MDLA_CG12 13
#define APU_MDLA1_APB_CG 14
#define APU_MDLA1_AXI_M_CG 15
#define APU_MDLA1_NR_CLK 16
/* AP_DMA */
#define AP_DMA_I2C0 1
#define AP_DMA_I2C1 2
#define AP_DMA_I2C2_CH0 3
#define AP_DMA_I2C2_CH1 4
#define AP_DMA_I2C2_CH2 5
#define AP_DMA_I2C3 6
#define AP_DMA_I2C4_CH0 7
#define AP_DMA_I2C4_CH1 8
#define AP_DMA_I2C4_CH2 9
#define AP_DMA_I2C5 10
#define AP_DMA_I2C6 11
#define AP_DMA_I2C7_CH1 12
#define AP_DMA_I2C7_CH2 13
#define AP_DMA_I2C7_CH3 14
#define AP_DMA_I2C8_CH1 15
#define AP_DMA_I2C8_CH2 16
#define AP_DMA_I2C8_CH3 17
#define AP_DMA_I2C9_CH1 18
#define AP_DMA_I2C9_CH2 19
#define AP_DMA_I2C9_CH3 20
#define AP_DMA_UART0_TX 21
#define AP_DMA_UART0_RX 22
#define AP_DMA_UART1_TX 23
#define AP_DMA_UART1_RX 24
#define AP_DMA_UART2_TX 25
#define AP_DMA_UART2_RX 26
#define AP_DMA_BTIF_TX 27
#define AP_DMA_BTIF_RX 28
#define AP_DMA_NR_CLK 29
/* AUDIO */
#define AUDIO_PDN_AFE 1
#define AUDIO_PDN_22M 2
#define AUDIO_PDN_24M 3
#define AUDIO_PDN_APLL2_TUNER 4
#define AUDIO_PDN_APLL_TUNER 5
#define AUDIO_PDN_TDM_CK 6
#define AUDIO_PDN_ADC 7
#define AUDIO_PDN_DAC 8
#define AUDIO_PDN_DAC_PREDIS 9
#define AUDIO_PDN_TML 10
#define AUDIO_PDN_NLE 11
#define AUDIO_I2S1_BCLK_SW_CG 12
#define AUDIO_I2S2_BCLK_SW_CG 13
#define AUDIO_I2S3_BCLK_SW_CG 14
#define AUDIO_I2S4_BCLK_SW_CG 15
#define AUDIO_PDN_CONNSYS_I2S_ASRC 16
#define AUDIO_PDN_GENERAL1_ASRC 17
#define AUDIO_PDN_GENERAL2_ASRC 18
#define AUDIO_PDN_DAC_HIRES 19
#define AUDIO_PDN_ADC_HIRES 20
#define AUDIO_PDN_ADC_HIRES_TML 21
#define AUDIO_PDN_ADDA6_ADC 22
#define AUDIO_PDN_ADDA6_ADC_HIRES 23
#define AUDIO_PDN_3RD_DAC 24
#define AUDIO_PDN_3RD_DAC_PREDIS 25
#define AUDIO_PDN_3RD_DAC_TML 26
#define AUDIO_PDN_3RD_DAC_HIRES 27
#define AUDIO_I2S5_BCLK_SW_CG 28
#define AUDIO_I2S6_BCLK_SW_CG 29
#define AUDIO_I2S7_BCLK_SW_CG 30
#define AUDIO_I2S8_BCLK_SW_CG 31
#define AUDIO_I2S9_BCLK_SW_CG 32
#define AUDIO_NR_CLK 33
/* AUDIODSP */
#define AUDIODSP_CORE_CLK_EN 1
#define AUDIODSP_COREDBG_EN 2
#define AUDIODSP_TIMER_EN 3
#define AUDIODSP_DMA_EN 4
#define AUDIODSP_UART_EN 5
#define AUDIODSP_UART_BCLK_CG 6
#define AUDIODSP_NR_CLK 7
/* CAMSYS_MAIN */
#define CAMSYS_MAIN_LARB13_CGPDN 1
#define CAMSYS_MAIN_LARBX_CGPDN 2
#define CAMSYS_MAIN_DFP_VAD_CGPDN 3
#define CAMSYS_MAIN_CAM_CGPDN 4
#define CAMSYS_MAIN_CAMTG_CGPDN 5
#define CAMSYS_MAIN_LARB14_CGPDN 6
#define CAMSYS_MAIN_LARB15_CGPDN 7
#define CAMSYS_MAIN_SENINF_CGPDN 8
#define CAMSYS_MAIN_CAMSV0_CGPDN 9
#define CAMSYS_MAIN_CAMSV1_CGPDN 10
#define CAMSYS_MAIN_CAMSV2_CGPDN 11
#define CAMSYS_MAIN_CAMSV3_CGPDN 12
#define CAMSYS_MAIN_CCU0_CGPDN 13
#define CAMSYS_MAIN_CCU1_CGPDN 14
#define CAMSYS_MAIN_MRAW0_CGPDN 15
#define CAMSYS_MAIN_MRAW1_CGPDN 16
#define CAMSYS_MAIN_FAKE_ENG_CGPDN 17
#define CAMSYS_MAIN_NR_CLK 18
/* CAMSYS_RAWA */
#define CAMSYS_RAWA_LARBX_CGPDN 1
#define CAMSYS_RAWA_CAM_CGPDN 2
#define CAMSYS_RAWA_CAMTG_CGPDN 3
#define CAMSYS_RAWA_NR_CLK 4
/* CAMSYS_RAWB */
#define CAMSYS_RAWB_LARBX_CGPDN 1
#define CAMSYS_RAWB_CAM_CGPDN 2
#define CAMSYS_RAWB_CAMTG_CGPDN 3
#define CAMSYS_RAWB_NR_CLK 4
/* CAMSYS_RAWC */
#define CAMSYS_RAWC_LARBX_CGPDN 1
#define CAMSYS_RAWC_CAM_CGPDN 2
#define CAMSYS_RAWC_CAMTG_CGPDN 3
#define CAMSYS_RAWC_NR_CLK 4
/* DBGAPB */
#define DBGAPB_ATB_EN 1
#define DBGAPB_BUSCLK_EN 2
#define DBGAPB_SYSCLK_EN 3
#define DBGAPB_NR_CLK 4
/* DISP_OVL0 */
#define DISP_OVL0_VECI_DCM_DIS 1
#define DISP_OVL0_VEC2I_DCM_DIS 2
#define DISP_OVL0_VEC3I_DCM_DIS 3
#define DISP_OVL0_WPEO_DCM_DIS 4
#define DISP_OVL0_MSKO_DCM_DIS 5
#define DISP_OVL0_VGEN_DCM_DIS 6
#define DISP_OVL0_EXT_DCM_DIS 7
#define DISP_OVL0_VFC_DCM_DIS 8
#define DISP_OVL0_CACH0_TOP_DCM_DIS 9
#define DISP_OVL0_CACH0_DMA_DCM_DIS 10
#define DISP_OVL0_CACH1_TOP_DCM_DIS 11
#define DISP_OVL0_CACH1_DMA_DCM_DIS 12
#define DISP_OVL0_CACH2_TOP_DCM_DIS 13
#define DISP_OVL0_CACH2_DMA_DCM_DIS 14
#define DISP_OVL0_CACH3_TOP_DCM_DIS 15
#define DISP_OVL0_CACH3_DMA_DCM_DIS 16
#define DISP_OVL0_PSP_DCM_DIS 17
#define DISP_OVL0_PSP2_DCM_DIS 18
#define DISP_OVL0_SYNC_DCM_DIS 19
#define DISP_OVL0_C24_DCM_DIS 20
#define DISP_OVL0_MDP_CROP_DCM_DIS 21
#define DISP_OVL0_ISP_CROP_DCM_DIS 22
#define DISP_OVL0_TOP_DCM_DIS 23
#define DISP_OVL0_NR_CLK 24
/* DPMAIF */
#define DPMAIF_MAS_BUS_CG_DIS 1
#define DPMAIF_SLV_BUS_CG_DIS 2
#define DPMAIF_SRAM_CG_DIS 3
#define DPMAIF_DL_CG_DIS 4
#define DPMAIF_UL_CG_DIS 5
#define DPMAIF_APB_CG_DIS 6
#define DPMAIF_NR_CLK 7
/* DRAMC_NAO */
#define DRAMC_NAO_RG_BUS_MON_ENABLE 1
#define DRAMC_NAO_NR_CLK 2
/* DVFSRC_TOP */
#define DVFSRC_TOP_DVFSRC_EN 1
#define DVFSRC_TOP_NR_CLK 2
/* EMI */
#define EMI_BUS_MON_MODE 1
#define EMI_NR_CLK 2
/* GCE */
#define GCE_SW_CG_0 1
#define GCE_NR_CLK 2
/* IMGSYS1 */
#define IMGSYS1_LARB9_CGPDN 1
#define IMGSYS1_LARB10_CGPDN 2
#define IMGSYS1_DIP_CGPDN 3
#define IMGSYS1_MFB_CGPDN 4
#define IMGSYS1_WPE_CGPDN 5
#define IMGSYS1_MSS_CGPDN 6
#define IMGSYS1_NR_CLK 7
/* IMGSYS2 */
#define IMGSYS2_LARB11_CGPDN 1
#define IMGSYS2_LARB12_CGPDN 2
#define IMGSYS2_DIP_CGPDN 3
#define IMGSYS2_MFB_CGPDN 4
#define IMGSYS2_WPE_CGPDN 5
#define IMGSYS2_MSS_CGPDN 6
#define IMGSYS2_NR_CLK 7
/* IMP_IIC_WRAP_C */
#define IMP_IIC_WRAP_C_AP_I2C0_CG_RO 1
#define IMP_IIC_WRAP_C_AP_I2C10_CG_RO 2
#define IMP_IIC_WRAP_C_AP_I2C11_CG_RO 3
#define IMP_IIC_WRAP_C_AP_I2C12_CG_RO 4
#define IMP_IIC_WRAP_C_AP_I2C13_CG_RO 5
#define IMP_IIC_WRAP_C_NR_CLK 6
/* IMP_IIC_WRAP_E */
#define IMP_IIC_WRAP_E_AP_I2C3_CG_RO 1
#define IMP_IIC_WRAP_E_AP_I2C9_CG_RO 2
#define IMP_IIC_WRAP_E_NR_CLK 3
/* IMP_IIC_WRAP_N */
#define IMP_IIC_WRAP_N_AP_I2C5_CG_RO 1
#define IMP_IIC_WRAP_N_AP_I2C6_CG_RO 2
#define IMP_IIC_WRAP_N_NR_CLK 3
/* IMP_IIC_WRAP_S */
#define IMP_IIC_WRAP_S_AP_I2C1_CG_RO 1
#define IMP_IIC_WRAP_S_AP_I2C2_CG_RO 2
#define IMP_IIC_WRAP_S_AP_I2C4_CG_RO 3
#define IMP_IIC_WRAP_S_AP_I2C7_CG_RO 4
#define IMP_IIC_WRAP_S_AP_I2C8_CG_RO 5
#define IMP_IIC_WRAP_S_NR_CLK 6
/* INFRACFG_AO */
#define INFRACFG_AO_INFRA_DCM_RG_FORCE_CLKOFF 1
#define INFRACFG_AO_PMIC_CG_TMR 2
#define INFRACFG_AO_PMIC_CG_AP 3
#define INFRACFG_AO_PMIC_CG_MD 4
#define INFRACFG_AO_PMIC_CG_CONN 5
#define INFRACFG_AO_SCPSYS_CG 6
#define INFRACFG_AO_SEJ_CG 7
#define INFRACFG_AO_APXGPT_CG 8
#define INFRACFG_AO_MCUPM_CG 9
#define INFRACFG_AO_GCE_CG 10
#define INFRACFG_AO_GCE2_CG 11
#define INFRACFG_AO_THERM_CG 12
#define INFRACFG_AO_I2C0_CG 13
#define INFRACFG_AO_I2C1_CG 14
#define INFRACFG_AO_I2C2_CG 15
#define INFRACFG_AO_I2C3_CG 16
#define INFRACFG_AO_PWM_HCLK_CG 17
#define INFRACFG_AO_PWM1_CG 18
#define INFRACFG_AO_PWM2_CG 19
#define INFRACFG_AO_PWM3_CG 20
#define INFRACFG_AO_PWM4_CG 21
#define INFRACFG_AO_PWM_CG 22
#define INFRACFG_AO_UART0_CG 23
#define INFRACFG_AO_UART1_CG 24
#define INFRACFG_AO_UART2_CG 25
#define INFRACFG_AO_UART3_CG 26
#define INFRACFG_AO_GCE_26M 27
#define INFRACFG_AO_CQ_DMA_FPC 28
#define INFRACFG_AO_BTIF_CG 29
#define INFRACFG_AO_SPI0_CG 30
#define INFRACFG_AO_MSDC0_CG 31
#define INFRACFG_AO_MSDC1_CG 32
#define INFRACFG_AO_MSDC0_SRC_CLK_CG 33
#define INFRACFG_AO_DVFSRC_CG 34
#define INFRACFG_AO_GCPU_CG 35
#define INFRACFG_AO_TRNG_CG 36
#define INFRACFG_AO_AUXADC_CG 37
#define INFRACFG_AO_CPUM_CG 38
#define INFRACFG_AO_CCIF1_AP_CG 39
#define INFRACFG_AO_CCIF1_MD_CG 40
#define INFRACFG_AO_AUXADC_MD_CG 41
#define INFRACFG_AO_MSDC1_SRC_CLK_CG 42
#define INFRACFG_AO_DEVICE_APC_CG 43
#define INFRACFG_AO_CCIF_AP_CG 44
#define INFRACFG_AO_DEBUGSYS_CG 45
#define INFRACFG_AO_AUDIO_CG 46
#define INFRACFG_AO_CCIF_MD_CG 47
#define INFRACFG_AO_DXCC_SEC_CORE_CG 48
#define INFRACFG_AO_DXCC_AO_CG 49
#define INFRACFG_AO_DBG_TRACE_CG 50
#define INFRACFG_AO_DEVMPU_BCLK_CG 51
#define INFRACFG_AO_DRAMC_F26M_CG 52
#define INFRACFG_AO_IRTX_CG 53
#define INFRACFG_AO_SSUSB_CG 54
#define INFRACFG_AO_DISP_PWM_CG 55
#define INFRACFG_AO_CLDMA_BCLK_CK 56
#define INFRACFG_AO_AUDIO_26M_BCLK_CK 57
#define INFRACFG_AO_MODEM_TEMP_SHARE_CG 58
#define INFRACFG_AO_SPI1_CG 59
#define INFRACFG_AO_I2C4_CG 60
#define INFRACFG_AO_SPI2_CG 61
#define INFRACFG_AO_SPI3_CG 62
#define INFRACFG_AO_UNIPRO_SYSCLK_CG 63
#define INFRACFG_AO_UNIPRO_TICK_CG 64
#define INFRACFG_AO_UFS_MP_SAP_BCLK_CG 65
#define INFRACFG_AO_MD32_BCLK_CG 66
#define INFRACFG_AO_SSPM_CG 67
#define INFRACFG_AO_UNIPRO_MBIST_CG 68
#define INFRACFG_AO_SSPM_BUS_HCLK_CG 69
#define INFRACFG_AO_I2C5_CG 70
#define INFRACFG_AO_I2C5_ARBITER_CG 71
#define INFRACFG_AO_I2C5_IMM_CG 72
#define INFRACFG_AO_I2C1_ARBITER_CG 73
#define INFRACFG_AO_I2C1_IMM_CG 74
#define INFRACFG_AO_I2C2_ARBITER_CG 75
#define INFRACFG_AO_I2C2_IMM_CG 76
#define INFRACFG_AO_SPI4_CG 77
#define INFRACFG_AO_SPI5_CG 78
#define INFRACFG_AO_CQ_DMA_CG 79
#define INFRACFG_AO_UFS_CG 80
#define INFRACFG_AO_AES_UFSFDE_CG 81
#define INFRACFG_AO_UFS_TICK_CG 82
#define INFRACFG_AO_SSUSB_XHCI_CG 83
#define INFRACFG_AO_MSDC0_SELF_CG 84
#define INFRACFG_AO_MSDC1_SELF_CG 85
#define INFRACFG_AO_MSDC2_SELF_CG 86
#define INFRACFG_AO_SSPM_26M_SELF_CG 87
#define INFRACFG_AO_SSPM_32K_SELF_CG 88
#define INFRACFG_AO_UFS_AXI_CG 89
#define INFRACFG_AO_I2C6_CG 90
#define INFRACFG_AO_AP_MSDC0_CG 91
#define INFRACFG_AO_MD_MSDC0_CG 92
#define INFRACFG_AO_CCIF5_AP_CG 93
#define INFRACFG_AO_CCIF5_MD_CG 94
#define INFRACFG_AO_CCIF2_AP_CG 95
#define INFRACFG_AO_CCIF2_MD_CG 96
#define INFRACFG_AO_CCIF3_AP_CG 97
#define INFRACFG_AO_CCIF3_MD_CG 98
#define INFRACFG_AO_SEJ_F13M_CG 99
#define INFRACFG_AO_AES_CG 100
#define INFRACFG_AO_I2C7_CG 101
#define INFRACFG_AO_I2C8_CG 102
#define INFRACFG_AO_FBIST2FPC_CG 103
#define INFRACFG_AO_DEVICE_APC_SYNC_CG 104
#define INFRACFG_AO_DPMAIF_MAIN_CG 105
#define INFRACFG_AO_CCIF4_AP_CG 106
#define INFRACFG_AO_CCIF4_MD_CG 107
#define INFRACFG_AO_SPI6_CK_CG 108
#define INFRACFG_AO_SPI7_CK_CG 109
#define INFRACFG_AO_PERI_DCM_RG_FORCE_CLKOFF 110
#define INFRACFG_AO_AP_DMA_PSEUDO_CG		111/* add manually */
#define INFRACFG_AO_AP_DMA_CG				112/* add manually */
#define INFRACFG_AO_NR_CLK 113

/* INFRACFG_MEM */
#define INFRACFG_MEM_MEM_CK_MON_EN0 1
#define INFRACFG_MEM_MEM_CK_MON_EN1 2
#define INFRACFG_MEM_MEM_CK_MON_EN2 3
#define INFRACFG_MEM_MEM_CK_MON_EN3 4
#define INFRACFG_MEM_NR_CLK 5
/* IPESYS */
#define IPESYS_LARB19_CGPDN 1
#define IPESYS_LARB20_CGPDN 2
#define IPESYS_IPE_SMI_SUBCOM_CGPDN 3
#define IPESYS_FD_CGPDN 4
#define IPESYS_FE_CGPDN 5
#define IPESYS_RSC_CGPDN 6
#define IPESYS_DPE_CGPDN 7
#define IPESYS_NR_CLK 8
/* MDPSYS_CONFIG */
#define MDPSYS_CONFIG_NR_CLK 1
/* MDP_GCE */
#define MDP_GCE_SW_CG_0 1
#define MDP_GCE_NR_CLK 2
/* MD_CONFIG */
#define MD_CONFIG_LVTSCKEN 1
#define MD_CONFIG_PTPODCORE0EN 2
#define MD_CONFIG_PTPODCORE1EN 3
#define MD_CONFIG_PTPODCORE2EN 4
#define MD_CONFIG_PTPODCORE3EN 5
#define MD_CONFIG_PTPODCORE4EN 6
#define MD_CONFIG_PTPODCORE5EN 7
#define MD_CONFIG_SYSTEMCLK_CG_EN 8
#define MD_CONFIG_NR_CLK 9
/* MFGCFG */
#define MFGCFG_BG3D 1
#define MFGCFG_NR_CLK 2
/* MMSYS_CONFIG */
#define MM_DISP_RSZ0	1
#define MM_DISP_RSZ1	2
#define MM_DISP_OVL0	3
#define MM_INLINEROT	4
#define MM_MDP_TDSHP4	5
#define MM_MDP_TDSHP5	6
#define MM_MDP_AAL4	7
#define MM_MDP_AAL5	8
#define MM_MDP_HDR4	9
#define MM_MDP_HDR5	10
#define MM_MDP_RSZ4	11
#define MM_MDP_RSZ5	12
#define MM_MDP_RDMA4	13
#define MM_MDP_RDMA5	14
#define MM_DISP_FAKE_ENG0	15
#define MM_DISP_FAKE_ENG1	16
#define MM_DISP_OVL0_2L	17
#define MM_DISP_OVL1_2L	18
#define MM_DISP_OVL2_2L	19
#define MM_DISP_MUTEX0	20
#define MM_DISP_OVL1	21
#define MM_DISP_OVL3_2L	22
#define MM_DISP_CCORR0	23
#define MM_DISP_CCORR1	24
#define MM_DISP_COLOR0	25
#define MM_DISP_COLOR1	26
#define MM_DISP_POSTMASK0	27
#define MM_DISP_POSTMASK1	28
#define MM_DISP_DITHER0	29
#define MM_DISP_DITHER1	30
#define MM_DISP_DSI0	31
#define MM_DISP_DSI1	32
#define MM_DISP_GAMMA0	33
#define MM_DISP_GAMMA1	34
#define MM_DISP_AAL0	35
#define MM_DISP_AAL1	36
#define MM_DISP_WDMA0	37
#define MM_DISP_WDMA1	38
#define MM_DISP_RDMA0	39
#define MM_DISP_RDMA1	40
#define MM_DISP_RDMA4	41
#define MM_DISP_RDMA5	42
#define MM_DISP_DSC_WRAP	43
#define MM_DISP_DP_INTF	44
#define MM_DISP_MERGE0	45
#define MM_DISP_MERGE1	46
#define MM_SMI_COMMON	47
#define MM_SMI_GALS	48
#define MM_SMI_INFRA	49
#define MM_SMI_IOMMU	50
#define MM_DSI_DSI0	51
#define MM_DSI_DSI1	52
#define MM_DP_INTF	53
#define MM_26MHZ	54
#define MM_32KHZ	55
#define MM_NR_CLK	56

/* MP_CPUSYS_TOP */
#define MP_CPUSYS_TOP_DIS_TIMESTAMP_CLK 1
#define MP_CPUSYS_TOP_NR_CLK 2
/* MSDC0 */
#define MSDC0_AXI_WRAP_CKEN 1
#define MSDC0_NR_CLK 2
/* PERICFG */
#define PERICFG_PERIAXI_CG_DISABLE 1
#define PERICFG_NR_CLK 2
/* SSPM */
#define SSPM_TMR_EN 1
#define SSPM_SLPP_M_EN 2
#define SSPM_HCLK_EN 3
#define SSPM_DMA_EN 4
#define SSPM_UART_EN 5
#define SSPM_TWAM_EN 6
#define SSPM_RSV1 7
#define SSPM_PMICWP2P_EN 8
#define SSPM_MD32PCLK_EN 9
#define SSPM_I2CP2P_EN 10
#define SSPM_SPMP2P_EN 11
#define SSPM_APBBR_EN 12
#define SSPM_AXIBR_EN 13
#define SSPM_SLPP_I_EN 14
#define SSPM_SLPP_H_EN 15
#define SSPM_ICACHE_EN 16
#define SSPM_GCE_EN 17
#define SSPM_LAT_MON_EN 18
#define SSPM_UART_BCLK_CG 19
#define SSPM_NR_CLK 20
/* SUB_EMI */
#define SUB_EMI_BUS_MON_MODE 1
#define SUB_EMI_NR_CLK 2
/* THERM_CTRL */
#define THERM_CTRL_PTPODCORE0EN 5
#define THERM_CTRL_PTPODCORE1EN 6
#define THERM_CTRL_PTPODCORE2EN 7
#define THERM_CTRL_PTPODCORE3EN 8
#define THERM_CTRL_PTPODCORE4EN 9
#define THERM_CTRL_PTPODCORE5EN 10
#define THERM_CTRL_SYSTEMCLK_CG_EN 11
#define THERM_CTRL_NR_CLK 12
/* TOPCKGEN */
#define TOPCKGEN_APLL12_DIV0_PDN 1
#define TOPCKGEN_APLL12_DIV1_PDN 2
#define TOPCKGEN_APLL12_DIV2_PDN 3
#define TOPCKGEN_APLL12_DIV3_PDN 4
#define TOPCKGEN_APLL12_DIV4_PDN 5
#define TOPCKGEN_APLL12_DIVB_PDN 6
#define TOPCKGEN_APLL12_DIV5_PDN 7
#define TOPCKGEN_APLL12_DIV6_PDN 8
#define TOPCKGEN_APLL12_DIV7_PDN 9
#define TOPCKGEN_APLL12_DIV8_PDN 10
#define TOPCKGEN_APLL12_DIV9_PDN 11
#define TOPCKGEN_ARMPLL_DIVIDER_PLL1_CK_EN 12
#define TOPCKGEN_ARMPLL_DIVIDER_PLL2_CK_EN 13
#define TOPCKGEN_F_UFS_MP_SAP_CFG_CK_EN 14
#define TOPCKGEN_UFS_TICK1US_CK_EN 15
#define TOPCKGEN_PDN_MD_32K 16
#define TOPCKGEN_PDN_MD_26M 17
#define TOPCKGEN_PDN_CONN_32K 18
#define TOPCKGEN_PDN_CONN_26M 19
#define TOPCKGEN_NR_CLK 20
/* USB3 */
#define USB3_PTPODCORE0EN 4
#define USB3_PTPODCORE1EN 5
#define USB3_PTPODCORE2EN 6
#define USB3_PTPODCORE3EN 7
#define USB3_PTPODCORE4EN 8
#define USB3_PTPODCORE5EN 9
#define USB3_SYSTEMCLK_CG_EN 10
#define USB3_NR_CLK 11
/* VDEC_GCON */
#define VDEC_GCON_LARB1_CKEN 1
#define VDEC_GCON_LAT_CKEN 2
#define VDEC_GCON_LAT_ACTIVE 3
#define VDEC_GCON_LAT_CKEN_ENG 4
#define VDEC_GCON_VDEC_CKEN 5
#define VDEC_GCON_VDEC_ACTIVE 6
#define VDEC_GCON_VDEC_CKEN_ENG 7
#define VDEC_GCON_NR_CLK 8
/* VDEC_SOC_GCON */
#define VDEC_SOC_GCON_LARB1_CKEN 1
#define VDEC_SOC_GCON_LAT_CKEN 2
#define VDEC_SOC_GCON_LAT_ACTIVE 3
#define VDEC_SOC_GCON_LAT_CKEN_ENG 4
#define VDEC_SOC_GCON_VDEC_CKEN 5
#define VDEC_SOC_GCON_VDEC_ACTIVE 6
#define VDEC_SOC_GCON_VDEC_CKEN_ENG 7
#define VDEC_SOC_GCON_NR_CLK 8
/* VENC_C1_GCON */
#define VENC_C1_GCON_SET0_LARB 1
#define VENC_C1_GCON_SET1_VENC 2
#define VENC_C1_GCON_SET2_JPGENC 3
#define VENC_C1_GCON_SET3_JPGDEC 4
#define VENC_C1_GCON_SET4_JPGDEC_C1 5
#define VENC_C1_GCON_SET5_GALS 6
#define VENC_C1_GCON_NR_CLK 7
/* VENC_GCON */
#define VENC_GCON_SET0_LARB 1
#define VENC_GCON_SET1_VENC 2
#define VENC_GCON_SET2_JPGENC 3
#define VENC_GCON_SET3_JPGDEC 4
#define VENC_GCON_SET4_JPGDEC_C1 5
#define VENC_GCON_SET5_GALS 6
#define VENC_GCON_NR_CLK 7
/* WPE */
#define WPE_VECI_DCM_DIS 1
#define WPE_VEC2I_DCM_DIS 2
#define WPE_VEC3I_DCM_DIS 3
#define WPE_WPEO_DCM_DIS 4
#define WPE_MSKO_DCM_DIS 5
#define WPE_VGEN_DCM_DIS 6
#define WPE_EXT_DCM_DIS 7
#define WPE_VFC_DCM_DIS 8
#define WPE_CACH0_TOP_DCM_DIS 9
#define WPE_CACH0_DMA_DCM_DIS 10
#define WPE_CACH1_TOP_DCM_DIS 11
#define WPE_CACH1_DMA_DCM_DIS 12
#define WPE_CACH2_TOP_DCM_DIS 13
#define WPE_CACH2_DMA_DCM_DIS 14
#define WPE_CACH3_TOP_DCM_DIS 15
#define WPE_CACH3_DMA_DCM_DIS 16
#define WPE_PSP_DCM_DIS 17
#define WPE_PSP2_DCM_DIS 18
#define WPE_SYNC_DCM_DIS 19
#define WPE_C24_DCM_DIS 20
#define WPE_MDP_CROP_DCM_DIS 21
#define WPE_ISP_CROP_DCM_DIS 22
#define WPE_TOP_DCM_DIS 23
#define WPE_NR_CLK 24

/* Note: TOPCK register offset definition is generated from parsing
 * TOPCKGEN's register (project.h) with keyword "CLK_CFG_"
 */
/* #define TOPCKGEN_BASE 0x10000000 */

#define CLK_CFG_UPDATE 0x004
#define CLK_CFG_UPDATE1 0x008
#define CLK_CFG_UPDATE2 0x00c
#define CLK_CFG_0 0x010
#define CLK_CFG_0_SET 0x014
#define CLK_CFG_0_CLR 0x018
#define CLK_CFG_1 0x020
#define CLK_CFG_1_SET 0x024
#define CLK_CFG_1_CLR 0x028
#define CLK_CFG_2 0x030
#define CLK_CFG_2_SET 0x034
#define CLK_CFG_2_CLR 0x038
#define CLK_CFG_3 0x040
#define CLK_CFG_3_SET 0x044
#define CLK_CFG_3_CLR 0x048
#define CLK_CFG_4 0x050
#define CLK_CFG_4_SET 0x054
#define CLK_CFG_4_CLR 0x058
#define CLK_CFG_5 0x060
#define CLK_CFG_5_SET 0x064
#define CLK_CFG_5_CLR 0x068
#define CLK_CFG_6 0x070
#define CLK_CFG_6_SET 0x074
#define CLK_CFG_6_CLR 0x078
#define CLK_CFG_7 0x080
#define CLK_CFG_7_SET 0x084
#define CLK_CFG_7_CLR 0x088
#define CLK_CFG_8 0x090
#define CLK_CFG_8_SET 0x094
#define CLK_CFG_8_CLR 0x098
#define CLK_CFG_9 0x0a0
#define CLK_CFG_9_SET 0x0a4
#define CLK_CFG_9_CLR 0x0a8
#define CLK_CFG_10 0x0b0
#define CLK_CFG_10_SET 0x0b4
#define CLK_CFG_10_CLR 0x0b8
#define CLK_CFG_11 0x0c0
#define CLK_CFG_11_SET 0x0c4
#define CLK_CFG_11_CLR 0x0c8
#define CLK_CFG_12 0x0d0
#define CLK_CFG_12_SET 0x0d4
#define CLK_CFG_12_CLR 0x0d8
#define CLK_CFG_13 0x0e0
#define CLK_CFG_13_SET 0x0e4
#define CLK_CFG_13_CLR 0x0e8
#define CLK_CFG_14 0x0f0
#define CLK_CFG_14_SET 0x0f4
#define CLK_CFG_14_CLR 0x0f8
#define CLK_CFG_15 0x100
#define CLK_CFG_15_SET 0x104
#define CLK_CFG_15_CLR 0x108
#define CLK_CFG_16 0x110
#define CLK_CFG_16_SET 0x114
#define CLK_CFG_16_CLR 0x118
#define CLK_CFG_20 0x120
#define CLK_CFG_20_SET 0x124
#define CLK_CFG_20_CLR 0x128
#define CLK_CFG_21 0x130
#define CLK_CFG_21_SET 0x134
#define CLK_CFG_21_CLR 0x138


/* SCP_SYS */
#define SCP_SYS_MD1	0
#define SCP_SYS_CONN	1
#define SCP_SYS_MFG0	2
#define SCP_SYS_MFG1	3
#define SCP_SYS_MFG2	4
#define SCP_SYS_MFG3	5
#define SCP_SYS_MFG4	6
#define SCP_SYS_MFG5	7
#define SCP_SYS_MFG6	8
#define SCP_SYS_IFR	9
#define SCP_SYS_IFR_SUB	10
#define SCP_SYS_DPY	11
#define SCP_SYS_ISP	12
#define SCP_SYS_ISP2	13
#define SCP_SYS_IPE	14
#define SCP_SYS_VDEC	15
#define SCP_SYS_VDEC2	16
#define SCP_SYS_VENC	17
#define SCP_SYS_VENC_CORE1	18
#define SCP_SYS_MDP	19
#define SCP_SYS_DIS	20
#define SCP_SYS_AUDIO	21
#define SCP_SYS_ADSP	22
#define SCP_SYS_CAM	23
#define SCP_SYS_CAM_RAWA	24
#define SCP_SYS_CAM_RAWB	25
#define SCP_SYS_CAM_RAWC	26
#define SCP_SYS_DP_TX	27
#define SCP_SYS_DPY2	28
#define SCP_SYS_VPU		29
#define SCP_NR_SYSS	30


/* TODO: removed !!  */
#define CLK_MM_MDP_RDMA0                0
#define CLK_MM_MDP_CCORR0               1
#define CLK_MM_MDP_RSZ0                 2
#define CLK_MM_MDP_RSZ1                 3
#define CLK_MM_MDP_TDSHP0               4
#define CLK_MM_MDP_WROT0                5
#define CLK_MM_MDP_WDMA0                6
#define CLK_MM_DISP_OVL0                7
#define CLK_MM_DISP_OVL0_2L             8
#define CLK_MM_DISP_RSZ0                9
#define CLK_MM_DISP_RDMA0               10
#define CLK_MM_DISP_WDMA0               11
#define CLK_MM_DISP_COLOR0              12
#define CLK_MM_DISP_CCORR0              13
#define CLK_MM_DISP_AAL0                14
#define CLK_MM_DISP_GAMMA0              15
#define CLK_MM_DISP_DITHER0             16
#define CLK_MM_DSI0                     17
#define CLK_MM_FAKE_ENG                 18
#define CLK_MM_SMI_COMMON               19
#define CLK_MM_SMI_LARB0                20
#define CLK_MM_SMI_COMM0                21
#define CLK_MM_SMI_COMM1                22
#define CLK_MM_CAM_MDP                  23
#define CLK_MM_SMI_IMG                  24
#define CLK_MM_SMI_CAM                  25
#define CLK_MM_SMI_VENC                 26
#define CLK_MM_SMI_VDEC                 27
#define CLK_MM_IMG_DL_RELAY             28
#define CLK_MM_IMG_DL_ASYNC_TOP         29
#define CLK_MM_DIG_DSI                  30
#define CLK_MM_F26M_HRTWT               31
#define CLK_MM_NR_CLK                   32

/* add MT6885 MDP Subsys */
#define MDP_MDP_RDMA0	1
#define MDP_MDP_FG0	2
#define MDP_MDP_HDR0	3
#define MDP_MDP_AAL0	4
#define MDP_MDP_RSZ0	5
#define MDP_MDP_TDSHP0	6
#define MDP_MDP_TCC0	7
#define MDP_MDP_WROT0	8
#define MDP_MDP_RDMA2	9
#define MDP_MDP_AAL2	10
#define MDP_MDP_RSZ2	11
#define MDP_MDP_COLOR0	12
#define MDP_MDP_TDSHP2	13
#define MDP_MDP_TCC2	14
#define MDP_MDP_WROT2	15
#define MDP_MDP_MUTEX0	16
#define MDP_MDP_RDMA1	17
#define MDP_MDP_FG1	18
#define MDP_MDP_HDR1	19
#define MDP_MDP_AAL1	20
#define MDP_MDP_RSZ1	21
#define MDP_MDP_TDSHP1	22
#define MDP_MDP_TCC1	23
#define MDP_MDP_WROT1	24
#define MDP_MDP_RDMA3	25
#define MDP_MDP_AAL3	26
#define MDP_MDP_RSZ3	27
#define MDP_MDP_COLOR1	28
#define MDP_MDP_TDSHP3	29
#define MDP_MDP_TCC3	30
#define MDP_MDP_WROT3	31
#define MDP_APB_BUS	32
#define MDP_MMSYSRAM	33
#define MDP_APMCU_GALS	34
#define MDP_MDP_FAKE_ENG0	35
#define MDP_MDP_FAKE_ENG1	36
#define MDP_SMI0	37
#define MDP_IMG_DL_ASYNC0	38
#define MDP_IMG_DL_ASYNC1	39
#define MDP_IMG_DL_ASYNC2	40
#define MDP_SMI1	41
#define MDP_IMG_DL_ASYNC3	42
#define MDP_SMI2	43
#define MDP_IMG0_IMG_DL_ASYNC0	44
#define MDP_IMG0_IMG_DL_ASYNC1	45
#define MDP_IMG1_IMG_DL_ASYNC2	46
#define MDP_IMG1_IMG_DL_ASYNC3	47
#define MDP_NR_CLK 48
