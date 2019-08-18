/*
 * S T M 3 2 - E 4 0 7    B L I N K
 *
 * Copyright (C) 2019  Nicolas Jeanmonod, ouilogique.com
 *
 */

#include <Arduino.h>

#define LED_STME407 PC13
#define LED_ARDUINO PA5

/**
 *
 */
void setup()
{
    pinMode(LED_STME407, OUTPUT);
    pinMode(LED_ARDUINO, OUTPUT);

    Serial.begin(115200);
    Serial.println("\nSTART");
}

/**
 *
 */
void loop()
{
    Serial.println("HIGH");
    digitalWrite(LED_STME407, HIGH);
    digitalWrite(LED_ARDUINO, HIGH);
    delay(200);

    Serial.println("LOW");
    digitalWrite(LED_STME407, LOW);
    digitalWrite(LED_ARDUINO, LOW);
    delay(200);
}
