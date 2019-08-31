/*
 * S T M 3 2 - E 4 0 7    B L I N K
 *
 * Copyright (C) 2019  Nicolas Jeanmonod, ouilogique.com
 *
 */

#include <Arduino.h>

#define LED_STME407 PC13 // Built-in LED. Inverted logic.
#define LED_ARDUINO PA5  // Labeled D13 on the board.

/**
 *
 */
void setup()
{
    pinMode(LED_STME407, OUTPUT);
    pinMode(LED_ARDUINO, OUTPUT);

    // Serial 3 is read with an UART Serial Bridge connected on
    // TX and GND pins of the BOOT header located beside the UEXT connector.
    Serial3.begin(BAUD_RATE); // Change BAUD_RATE in platformio.ini
    Serial3.print("\nSTART");

    // Serial 6 is read with an UART Serial Bridge connected on
    // pin 3 (TX) and pin 2 (GND) of the UEXT connector.
    Serial6.begin(BAUD_RATE); // Change BAUD_RATE in platformio.ini
    Serial6.print("\nSTART");
}

/**
 *
 */
void loop()
{
    Serial3.print("\n");
    Serial3.print(millis());
    Serial6.print("\n");
    Serial6.print(millis());

    Serial3.print("  LED ON");
    Serial6.print("  LED ON");
    digitalWrite(LED_STME407, LOW);
    digitalWrite(LED_ARDUINO, HIGH);
    delay(20);

    Serial3.print("  LED OFF");
    Serial6.print("  LED OFF");
    digitalWrite(LED_STME407, HIGH);
    digitalWrite(LED_ARDUINO, LOW);
    delay(980);
}
