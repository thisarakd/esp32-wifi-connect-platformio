#include <Arduino.h>
#include <WiFi.h>

#define STATUS_LED 2 // Built-in LED pin

void setup() {
    
    Serial.begin(115200); // Start serial output
    pinMode(STATUS_LED, OUTPUT);

    WiFi.begin("<Wifi-SSID>", "<Wifi-Password>"); // Connect to Wi-Fi

    while(WiFi.status() != WL_CONNECTED) { // Wait for connection
        delay(500);
        Serial.print(".");
    }

    Serial.println();
    Serial.println("Wifi connected.");
    digitalWrite(STATUS_LED, HIGH); // Show connection status
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());

}

void loop() {
    
}