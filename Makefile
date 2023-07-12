RPI_DISK_LABEL=/dev/disk/by-label/RPI-RP2
KEYBOARD=void_ergo_rp2040
KEYMAP=default

flash:
	# Unlocks sudo
	sudo true
	# Creates mount point location
	$(eval mount_point := $(shell mktemp -d))
	echo "Quickly, set your keyboard to bootloader mode!"
	qmk compile -kb $(KEYBOARD) -km $(KEYMAP)
	while test ! -b $(RPI_DISK_LABEL) ; do \
		echo "Keyboard still not in bootloader mode..."; \
		sleep 1; \
	done
	sudo mount $(RPI_DISK_LABEL) $(mount_point) --mkdir
	sudo mv ~/qmk_firmware/.build/$(KEYBOARD)_$(KEYMAP).uf2 $(mount_point)
	sudo umount $(mount_point)
