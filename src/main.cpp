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

    Serial6.begin(BAUD_RATE); // Change BAUD_RATE in platformio.ini
    Serial6.println("\nSTART");
}

/**
 *
 */
void loop()
{
    Serial6.println("LED ON");
    digitalWrite(LED_STME407, LOW);
    digitalWrite(LED_ARDUINO, HIGH);
    delay(20);

    Serial6.println("LED OFF");
    digitalWrite(LED_STME407, HIGH);
    digitalWrite(LED_ARDUINO, LOW);
    delay(980);
}
