RPI_DISK_ID=/dev/disk/by-id/usb-RPI_RP2_E0C9125B0D9B-0:0-part1
KEYBOARD=void_ergo_rp2040
KEYMAP=default

mount_point = /tmp/rpi

flash:
	# Unlocks sudo
	sudo true
	echo "Quickly, set your keyboard to bootloader mode!"
	qmk compile -kb $(KEYBOARD) -km $(KEYMAP)
	while test ! -b $(RPI_DISK_ID) ; do \
		echo "Keyboard still not in bootloader mode..."; \
		sleep 1; \
	done
	sudo mount $(RPI_DISK_ID) $(mount_point) --mkdir
	sudo mv ~/qmk_firmware/.build/$(KEYBOARD)_$(KEYMAP).uf2 $(mount_point)
	sudo umount $(mount_point)
