#!/bin/sh

flash:
	sudo echo "Quickly, set your keyboard to bootloader mode!"
	qmk compile -kb jeansidharta -km default &&
	sudo mount /dev/sdd1 /mnt/rpi &&
	sudo mv ~/qmk_firmware/.build/jeansidharta_default.uf2 /mnt/rpi &&
	sudo umount /mnt/rpi
