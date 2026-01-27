#include <DHT22.h>
#include <FS.h>
#include <SPIFFS.h>  // เปลี่ยนมาใช้ตัวนี้ ชัวร์สุด!

#define pinDATA 18
DHT22 dht22(pinDATA); 

void setup() {
  Serial.begin(115200);
  Serial.println("\n--- CDTI Test System ---");

  // เปลี่ยนคำสั่งจาก LittleFS เป็น SPIFFS
  if (!SPIFFS.begin(true)) {
    Serial.println("MOUNT FAIL");
    return;
  }
  Serial.println("SPIFFS Ready!");
}

void loop() {
  float t = dht22.getTemperature();
  float h = dht22.getHumidity();

  if (dht22.getLastError() == dht22.OK) {
    String dataLog = "Temp: " + String(t, 1) + " C, Hum: " + String(h, 1) + " %";
    
    // เปลี่ยนคำสั่งเปิดไฟล์เป็น SPIFFS
    File file = SPIFFS.open("/log.txt", "a"); // "a" คือเขียนต่อท้าย
    if (file) {
      file.println(dataLog);
      file.close();
      Serial.println("Saved: " + dataLog);
    } else {
      Serial.println("Save Error");
    }
  } else {
    Serial.println("Sensor Error");
  }
  
  delay(2000);
}