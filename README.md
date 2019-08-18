# S T M 3 2 - E 4 0 7    B L I N K

Hello World example for the [STM32-E407 board](https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware) on [PlatformIO](https://platformio.org) with the Arduino framework.

> It doesn’t work yet and this depot is here to explain what I tried so far.

## IMAGES

![](./images/STM32-E407-9_1.jpg)
![](./images/STM32-E407-10_1.jpg)


## PREREQUISITE

### On macOS

Install `dfu-util` and `lsusb` with [Homebrew](https://brew.sh):

    brew install dfu-util lsusb


## SETUP

- Set the Power Selection jumper (PWR_SEL) to 7-8 (i.e. USB-OTG1 power supply). This jumper is located next to the jack power connector.

- Set the Boot Mode Selection jumpers. These jumpers are located on the back of the board, next to the UEXT connector:

```
B0_1/B0_0 => B0_1
B1_1/B1_0 => B1_0
````

- Connect the USB cable to USB-OTG1. This is the USB connector that is closest to the Ethernet connector. Note that the label is correct on the PCB but not on the image above!.

- Optionally verify that the card is detected with the bash command `lsusb` and `dfu-util --list`. If no card is detected, check the Boot Mode Selection jumpers and push the reset button next to the jack power connector:

```
lsusb
```
```
Bus 020 Device 015: ID 0483:df11 STMicroelectronics STM32  BOOTLOADER  Serial: 336032683536
```
```
dfu-util --list
```
```
dfu-util 0.9

Copyright 2005-2009 Weston Schmidt, Harald Welte and OpenMoko Inc.
Copyright 2010-2016 Tormod Volden and Stefan Schmidt
This program is Free Software and has ABSOLUTELY NO WARRANTY
Please report bugs to http://sourceforge.net/p/dfu-util/tickets/

Found DFU: [0483:df11] ver=2200, devnum=11, cfg=1, intf=0, path="20-1.4", alt=3, name="@Device Feature/0xFFFF0000/01*004 e", serial="336032683536"
Found DFU: [0483:df11] ver=2200, devnum=11, cfg=1, intf=0, path="20-1.4", alt=2, name="@OTP Memory /0x1FFF7800/01*512 e,01*016 e", serial="336032683536"
Found DFU: [0483:df11] ver=2200, devnum=11, cfg=1, intf=0, path="20-1.4", alt=1, name="@Option Bytes  /0x1FFFC000/01*016 e", serial="336032683536"
Found DFU: [0483:df11] ver=2200, devnum=11, cfg=1, intf=0, path="20-1.4", alt=0, name="@Internal Flash  /0x08000000/04*016Kg,01*064Kg,07*128Kg", serial="336032683536"
```

- Compile and upload the code with PlatformIO.

- Set the Boot Mode Selection jumpers again:

```
B0_1/B0_0 => B0_0
B1_1/B1_0 => B1_0 (unchanged)
```

- Reset the card. The reset button is located beside the power jack connector.

- The LED of the board located near the SD card slot should blink, but it doesn’t...


## REFERENCES

- STM32-E407 development board with STM32F407ZGT6 microcontroller
  - https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware
  - https://www.olimex.com/Products/ARM/ST/STM32-E407/resources/STM32-E407.pdf
- PlatformIO
  - https://docs.platformio.org/en/latest/boards/ststm32/black_f407zg.html
- dfu-util
  - http://dfu-util.sourceforge.net
