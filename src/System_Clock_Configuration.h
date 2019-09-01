/*
 * S T M 3 2 - E 4 0 7    B L I N K
 *
 * Copyright (C) 2019  Nicolas Jeanmonod, ouilogique.com
 *
 *
 * The function `SystemClock_Config(void)` overides the default one located in
 * ~/.platformio/packages/framework-arduinoststm32/variants/BLACK_F407XX/variant.cpp
 * or C:\Users\<home>\.platformio\packages\framework-arduinoststm32\variants\BLACK_F407XX\variant.cpp
 * This is needed for SerialUSB on USB-OTG#1 to work.
 * See https://community.platformio.org/t/stm32-e407-doesn-t-work-on-pio/9303/3
 *
 * https://github.com/NicHub/STM32-E407-BLINK
 *
 */

#pragma once

void SystemClock_Config(void);
