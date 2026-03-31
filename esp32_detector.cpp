#include <WiFi.h>

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println("ESP32 Mobile Phone Detector Started...");
}

void loop() {
    int32_t rssi = WiFi.RSSI();  // Read signal strength

    Serial.print("Signal Strength (RSSI): ");
    Serial.println(rssi);

    delay(2000); // Wait 2 seconds
}
