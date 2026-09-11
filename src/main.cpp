#include <Arduino.h>
#include <WiFi.h>

#define STATUS_LED 2 // Built-in LED pin

void setup() {
    
    Serial.begin(115200); // Start serial output
    pinMode(STATUS_LED, OUTPUT);

    WiFi.begin("<Wifi-SSID>", "<Wifi-Password>"); // Connect to Wi-Fi

    delay(1000);

    digitalWrite(STATUS_LED, HIGH); // Show connection status
    Serial.println("Wifi connected.");
    Serial.println("IP address: " + WiFi.localIP().toString());

}

void loop() {
    
}