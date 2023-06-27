#!/bin/sh

flash:
	sudo echo "Quickly, set your keyboard to bootloader mode!"
	qmk compile -kb void_ergo_rp2040 -km default
	sudo mount "/dev/disk/by-id/usb-RPI_RP2_E0C9125B0D9B-0:0-part1" /tmp/rpi --mkdir
	sudo mv ~/qmk_firmware/.build/void_ergo_rp2040_default.uf2 /tmp/rpi
	sudo umount /tmp/rpi
