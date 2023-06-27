# jeansidharta

![jeansidharta](https://i.imgur.com/WVHc4Mb.jpeg)

This is my modifier version of the [Void Ergo](https://github.com/victorlucachi/void_ergo)'s firmware to use a Raspberry Pi Pico (RP2040 microcontroller) instead of the Pro Micro that was originaly used in the project

* Keyboard Maintainer: [Jean Sidharta](https://github.com/JeanSidharta) (jeansidharta@gmail.com)
* Hardware Supported: RP2040 microcontroller, commonly found in the [Raspberry Pi Pico](https://www.raspberrypi.com/products/raspberry-pi-pico/)

## How to use this firmware

To start using this firmware, you must first setup QMK in your computer. You can follow the steps [here](https://docs.qmk.fm/#/newbs). After setting QMK up, you must the:

1. Create a new keyboard directory: run `mkdir keyboards/void_ergo_rp2040` inside your QMK directory
2. Enter the keyboard directory: `cd keyboards/void_ergo_rp2040`
3. Clone this project: `git clone https://github.com/Jeansidharta/qmk-void-ergo-RP2040.git .`.

And voilá! You can start building this project with `qmk compile -kb void-ergo-rp2040 -km default`

# Flashig your keyboard

1. First, it must enter bootloader mode
    - If you've never flashed it before, you can enter bootloader mode by holding the RESET button on the microcontroller while you power it on. ![Reset button location](https://i.imgur.com/CkVeKQr.png)
    - If you've flashed it before with this firmware, there is a combination of keys that'll put the microcontroller in bootloader mode. ![Buttons combination](https://i.imgur.com/N1OBQxW.png) 
2. Make sure you're in the keyboard directory. This'd be `<QMK_DIRECTORY>/keyboards/void-ergo-rp2040`
3. Run `make flash`. Note that this require super user permissions (runs sudo)

Your keyboard should automatically start working after that.
