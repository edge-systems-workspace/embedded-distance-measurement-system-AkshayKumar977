#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author AKSHAY KUMAR
 * @date 2026-01-16
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */

 int trigPin = 9;
 // Define TRIG pin (Use pin 9)

 int echoPin = 10;
 // Define ECHO pin (Use pin 10)

 long duration = 0;
 // Create variable to store duration

 long distance = 0;
 // Create variable to store calculated distance

void setup() {

    Serial.begin(9600);
    // Initialize Serial communication (9600 baud rate)

    pinMode(trigPin,OUTPUT);
    // Configure TRIG as OUTPUT

    pinMode(echoPin,INPUT);
    // Configure ECHO as INPUT

    Serial.println("Ultrasonic Distance Measurement System Initialized");
    // Print system initialization message
}

void loop() {

    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    // Set TRIG LOW for 2 microseconds

    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    // Send 10 microsecond pulse on TRIG
     digitalWrite(trigPin,LOW);
    // TODO 11:
    // Measure pulse duration on ECHO using pulseIn()

    // TODO 12:
    // Calculate distance in cm

    // TODO 13:
    // Print calculated distance

    // TODO 14:
    // Add delay (500ms)
}
