# S T M 3 2 - E 4 0 7    B L I N K

Hello World example for the [STM32-E407 board](https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware) on [PlatformIO](https://platformio.org) with the Arduino framework.

<span style="color:red">
It doesn’t work yet and this depot is here to explain what I tried so far.
</span>


## PREREQUISITE

### On macOS

Install `dfu-util`

    brew install dfu-util


## SETUP

- Set the Power Selection jumper (PWR_SEL) to 7-8 (i.e. USB-OTG1 power supply). This jumper is located next to the jack power plug connector.

- Set the Boot Mode Selection jumpers. These jumpers are located on the back of the board, next to the UEXT connector:

```
B0_1/B0_0 => B0_1
B1_1/B1_0 => B1_0
````

- Connect the USB cable to USB-OTG1. This is the USB connector that is closest to the Ethernet connector.

- Optionally verify that the card is detected with the bash command `lsusb` :

```
lsusb

Bus 020 Device 015: ID 0483:df11 STMicroelectronics STM32  BOOTLOADER  Serial: 336032683536
```

- Compile and upload the code (ctrl + u)

- Set the Boot Mode jumpers again :

```
B0_1/B0_0 => B0_0
B1_1/B1_0 => B1_0 (unchanged)
````

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
