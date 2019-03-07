/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2014 Imagination Technologies
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of
 * the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __SOC_IMGTEC_PISTACHIO_DDR_PRIVATE_REG_H__
#define __SOC_IMGTEC_PISTACHIO_DDR_PRIVATE_REG_H__

#include <device/mmio.h>
#include <timer.h>

#define MAX_WAIT_MICROS			100000

#define TOPLEVEL_REGS			0xB8149000

#define DDR_CTRL_OFFSET			(0x0020)
#define DDR_CLK_EN_MASK			(0x00000002)
#define DDR_CLK_EN_SHIFT		(1)
#define DDR_CLK_EN_LENGTH		(1)

#define DDR_PCTL			0xB8180000
#define DDR_PCTL_SCFG_OFFSET		(0x0000)
#define DDR_PCTL_SCTL_OFFSET		(0x0004)
#define DDR_PCTL_STAT_OFFSET		(0x0008)
#define DDR_PCTL_MCMD_OFFSET		(0x0040)
#define DDR_PCTL_POWCTL_OFFSET		(0x0044)
#define DDR_PCTL_POWSTAT_OFFSET		(0x0048)
#define DDR_PCTL_CMDTSTAT_OFFSET	(0x004C)
#define DDR_PCTL_CMDTSTATEN_OFFSET	(0x0050)
#define DDR_PCTL_MCFG1_OFFSET		(0x007C)
#define DDR_PCTL_MCFG_OFFSET		(0x0080)
#define DDR_PCTL_MSTAT_OFFSET		(0x0088)
#define DDR_PCTL_DTUAWDT_OFFSET		(0x00B0)
#define DDR_PCTL_TOGCNT1U_OFFSET	(0x00C0)
#define DDR_PCTL_TINIT_OFFSET		(0x00C4)
#define DDR_PCTL_TRSTH_OFFSET		(0x00C8)
#define DDR_PCTL_TOGG_CNTR_100NS_OFFSET	(0x00CC)
#define DDR_PCTL_TREFI_OFFSET		(0x00D0)
#define DDR_PCTL_TMRD_OFFSET		(0x00D4)
#define DDR_PCTL_TRFC_OFFSET		(0x00D8)
#define DDR_PCTL_TRP_OFFSET		(0x00DC)
#define DDR_PCTL_TRTW_OFFSET		(0x00E0)
#define DDR_PCTL_TAL_OFFSET		(0x00E4)
#define DDR_PCTL_TCL_OFFSET		(0x00E8)
#define DDR_PCTL_TCWL_OFFSET		(0x00EC)
#define DDR_PCTL_TRAS_OFFSET		(0x00F0)
#define DDR_PCTL_TRC_OFFSET		(0x00F4)
#define DDR_PCTL_TRCD_OFFSET		(0x00F8)
#define DDR_PCTL_TRRD_OFFSET		(0x00FC)
#define DDR_PCTL_TRTP_OFFSET		(0x0100)
#define DDR_PCTL_TWR_OFFSET		(0x0104)
#define DDR_PCTL_TWTR_OFFSET		(0x0108)
#define DDR_PCTL_TEXSR_OFFSET		(0x010C)
#define DDR_PCTL_TXP_OFFSET		(0x0110)
#define DDR_PCTL_TXPDLL_OFFSET		(0x0114)
#define DDR_PCTL_TZQCS_OFFSET		(0x0118)
#define DDR_PCTL_TDQS_OFFSET		(0x0120)
#define DDR_PCTL_TCKE_OFFSET		(0x012C)
#define DDR_PCTL_TMOD_OFFSET		(0x0130)
#define DDR_PCTL_TZQCL_OFFSET		(0x0138)
#define DDR_PCTL_TCKESR_OFFSET		(0x0140)
#define DDR_PCTL_TREFI_MEM_DDR3_OFFSET	(0x0148)
#define DDR_PCTL_DTUWACTL_OFFSET	(0x0200)
#define DDR_PCTL_DTURACTL_OFFSET	(0x0204)
#define DDR_PCTL_DTUCFG_OFFSET		(0x0208)
#define DDR_PCTL_DTUECTL_OFFSET		(0x020C)
#define DDR_PCTL_DTUWD0_OFFSET		(0x0210)
#define DDR_PCTL_DTUWD1_OFFSET		(0x0214)
#define DDR_PCTL_DTUWD2_OFFSET		(0x0218)
#define DDR_PCTL_DTUWD3_OFFSET		(0x021C)
#define DDR_PCTL_DFIODTCFG_OFFSET	(0x0244)
#define DDR_PCTL_DFIODTCFG1_OFFSET	(0x0248)
#define DDR_PCTL_DFITPHYWRDATA_OFFSET	(0x0250)
#define DDR_PCTL_DFIWRLAT_OFFSET	(0x0254)
#define DDR_PCTL_DFITRDDATAEN_OFFSET	(0x0260)
#define DDR_PCTL_DFITPHYRDLAT_OFFSET	(0x0264)
#define DDR_PCTL_DFIUPDCFG_OFFSET	(0x0290)
#define DDR_PCTL_DFISTAT0_OFFSET	(0x02C0)
#define DDR_PCTL_DFISTCFG0_OFFSET	(0x02C4)
#define DDR_PCTL_DFISTCFG1_OFFSET	(0x02C8)
#define DDR_PCTL_DFISTCFG2_OFFSET	(0x02D8)
#define DDR_PCTL_DFILPCFG0_OFFSET	(0x02F0)
#define DDR_PCTL_PCFG0_OFFSET		(0x0400)
#define DDR_PCTL_CCFG_OFFSET		(0x0480)
#define DDR_PCTL_DCFG_OFFSET		(0x0484)
#define DDR_PCTL_CCFG1_OFFSET		(0x048C)

#define DDR_PHY				0xB8180800
#define DDRPHY_PIR_OFFSET		(0x0004)
#define DDRPHY_PGCR_OFFSET		(0x0008)
#define DDRPHY_PGSR_OFFSET		(0x000C)
#define DDRPHY_DLLGCR_OFFSET		(0x0010)
#define DDRPHY_PTR0_OFFSET		(0x0018)
#define DDRPHY_PTR1_OFFSET		(0x001C)
#define DDRPHY_DXCCR_OFFSET		(0x0028)
#define DDRPHY_DSGCR_OFFSET		(0x002C)
#define DDRPHY_DCR_OFFSET		(0x0030)
#define DDRPHY_DTPR0_OFFSET		(0x0034)
#define DDRPHY_DTPR1_OFFSET		(0x0038)
#define DDRPHY_DTPR2_OFFSET		(0x003C)
#define DDRPHY_MR_OFFSET		(0x0040)
#define DDRPHY_EMR_OFFSET		(0x0044)
#define DDRPHY_EMR2_OFFSET		(0x0048)
#define DDRPHY_EMR3_OFFSET		(0x004C)
#define DDRPHY_DTAR_OFFSET		(0x0054)
#define DDRPHY_BISTRR_OFFSET		(0x0100)
#define DDRPHY_BISTWCR_OFFSET		(0x010C)
#define DDRPHY_BISTAR0_OFFSET		(0x0114)
#define DDRPHY_BISTAR1_OFFSET		(0x0118)
#define DDRPHY_BISTAR2_OFFSET		(0x011C)
#define DDRPHY_BISTUDPR_OFFSET		(0x0120)
#define DDRPHY_BISTGSR_OFFSET		(0x0124)
#define DDRPHY_ZQ0CR0_OFFSET		(0x0180)
#define DDRPHY_ZQ1CR0_OFFSET		(0x0190)

#define DDR_TIMEOUT_VALUE_US		100000

static int wait_for_completion(u32 reg, u32 exp_val)
{
	struct stopwatch sw;

	stopwatch_init_usecs_expire(&sw, DDR_TIMEOUT_VALUE_US);
	while (read32(reg) != exp_val) {
		if (stopwatch_expired(&sw))
			return DDR_TIMEOUT;
	}
	return 0;
}

#endif
