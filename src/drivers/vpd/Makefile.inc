romstage-$(CONFIG_VPD) += vpd_decode.c vpd_premem.c vpd.c
postcar-$(CONFIG_VPD) += vpd_decode.c vpd_premem.c vpd.c
ramstage-$(CONFIG_VPD) += vpd_decode.c vpd_cbmem.c vpd.c