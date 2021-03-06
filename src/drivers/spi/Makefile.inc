# SPI flash driver interface

ifeq ($(CONFIG_COMMON_CBFS_SPI_WRAPPER),y)

bootblock-y += spi-generic.c
bootblock-$(CONFIG_SPI_FLASH) += spi_flash.c
bootblock-$(CONFIG_SPI_FLASH_ADESTO) += adesto.c
bootblock-$(CONFIG_SPI_FLASH_AMIC) += amic.c
bootblock-$(CONFIG_SPI_FLASH_ATMEL) += atmel.c
bootblock-$(CONFIG_SPI_FLASH_EON) += eon.c
bootblock-$(CONFIG_SPI_FLASH_GIGADEVICE) += gigadevice.c
bootblock-$(CONFIG_SPI_FLASH_MACRONIX) += macronix.c
bootblock-$(CONFIG_SPI_FLASH_SPANSION) += spansion.c
bootblock-$(CONFIG_SPI_FLASH_SST) += sst.c
bootblock-$(CONFIG_SPI_FLASH_STMICRO) += stmicro.c
bootblock-$(CONFIG_SPI_FLASH_WINBOND) += winbond.c
bootblock-$(CONFIG_SPI_FRAM_RAMTRON) += ramtron.c

romstage-y += spi-generic.c
romstage-$(CONFIG_SPI_FLASH) += spi_flash.c
romstage-$(CONFIG_SPI_FLASH_ADESTO) += adesto.c
romstage-$(CONFIG_SPI_FLASH_AMIC) += amic.c
romstage-$(CONFIG_SPI_FLASH_ATMEL) += atmel.c
romstage-$(CONFIG_SPI_FLASH_EON) += eon.c
romstage-$(CONFIG_SPI_FLASH_GIGADEVICE) += gigadevice.c
romstage-$(CONFIG_SPI_FLASH_MACRONIX) += macronix.c
romstage-$(CONFIG_SPI_FLASH_SPANSION) += spansion.c
romstage-$(CONFIG_SPI_FLASH_SST) += sst.c
romstage-$(CONFIG_SPI_FLASH_STMICRO) += stmicro.c
romstage-$(CONFIG_SPI_FLASH_WINBOND) += winbond.c
romstage-$(CONFIG_SPI_FRAM_RAMTRON) += ramtron.c

endif

verstage-y += spi-generic.c
verstage-$(CONFIG_SPI_FLASH) += spi_flash.c
verstage-$(CONFIG_SPI_FLASH_ADESTO) += adesto.c
verstage-$(CONFIG_SPI_FLASH_AMIC) += amic.c
verstage-$(CONFIG_SPI_FLASH_ATMEL) += atmel.c
verstage-$(CONFIG_SPI_FLASH_EON) += eon.c
verstage-$(CONFIG_SPI_FLASH_GIGADEVICE) += gigadevice.c
verstage-$(CONFIG_SPI_FLASH_MACRONIX) += macronix.c
verstage-$(CONFIG_SPI_FLASH_SPANSION) += spansion.c
verstage-$(CONFIG_SPI_FLASH_SST) += sst.c
verstage-$(CONFIG_SPI_FLASH_STMICRO) += stmicro.c
verstage-$(CONFIG_SPI_FLASH_WINBOND) += winbond.c
verstage-$(CONFIG_SPI_FRAM_RAMTRON) += ramtron.c

ramstage-y += spi-generic.c
ramstage-$(CONFIG_SPI_FLASH) += spi_flash.c
ramstage-$(CONFIG_SPI_FLASH_ADESTO) += adesto.c
ramstage-$(CONFIG_SPI_FLASH_AMIC) += amic.c
ramstage-$(CONFIG_SPI_FLASH_ATMEL) += atmel.c
ramstage-$(CONFIG_SPI_FLASH_EON) += eon.c
ramstage-$(CONFIG_SPI_FLASH_GIGADEVICE) += gigadevice.c
ramstage-$(CONFIG_SPI_FLASH_MACRONIX) += macronix.c
ramstage-$(CONFIG_SPI_FLASH_SPANSION) += spansion.c
ramstage-$(CONFIG_SPI_FLASH_SST) += sst.c
ramstage-$(CONFIG_SPI_FLASH_STMICRO) += stmicro.c
ramstage-$(CONFIG_SPI_FLASH_WINBOND) += winbond.c
ramstage-$(CONFIG_SPI_FRAM_RAMTRON) += ramtron.c

ifeq ($(CONFIG_SPI_FLASH_SMM),y)
smm-y += spi-generic.c
# SPI flash driver interface
smm-$(CONFIG_SPI_FLASH) += spi_flash.c

# drivers
smm-$(CONFIG_SPI_FLASH_ADESTO) += adesto.c
smm-$(CONFIG_SPI_FLASH_AMIC) += amic.c
smm-$(CONFIG_SPI_FLASH_ATMEL) += atmel.c
smm-$(CONFIG_SPI_FLASH_EON) += eon.c
smm-$(CONFIG_SPI_FLASH_MACRONIX) += macronix.c
smm-$(CONFIG_SPI_FLASH_GIGADEVICE) += gigadevice.c
smm-$(CONFIG_SPI_FLASH_SPANSION) += spansion.c
smm-$(CONFIG_SPI_FLASH_SST) += sst.c
smm-$(CONFIG_SPI_FLASH_STMICRO) += stmicro.c
smm-$(CONFIG_SPI_FLASH_WINBOND) += winbond.c
smm-$(CONFIG_SPI_FRAM_RAMTRON) += ramtron.c
endif
