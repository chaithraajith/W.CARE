#include <Wire.h>
#include "MAX30105.h"           
#include <OneWire.h>
#include <DallasTemperature.h>


#define TEMP_PIN 4
#define BUZZER 18
#define LED_GREEN 13
#define LED_YELLOW 12
#define LED_RED 19

MAX30105 particleSensor;
OneWire oneWire(TEMP_PIN);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(115200);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);

  sensors.begin();
  if (!particleSensor.begin(Wire, I2C_SPEED_FAST)) {
    Serial.println("MAX30102 not found!");
    while(1);
  }
  particleSensor.setup(); 
  Serial.println("SYSTEM ACTIVE - MONITORING STARTED");
}

void loop() {
  sensors.requestTemperatures();
  float temp = sensors.getTempCByIndex(0);
  long irValue = particleSensor.getIR();
  
  
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_RED, LOW);

  Serial.print("Temp: "); Serial.print(temp); Serial.print("C | ");

  if (irValue < 50000) {
    Serial.println("STATUS: Place Finger on Sensor");
  } 
  
  
  else if (temp > 34 || (temp > 37.5 && irValue > 120000)) {
    Serial.println("STATUS: SEVERE RISK! Consult Doctor Immediately.");
    digitalWrite(LED_RED, HIGH);
    tone(BUZZER, 1500); // Continuous high pitch
    delay(500);
    noTone(BUZZER);
  }

  
  else if ((temp < 34.0) &&(temp>32.0) || irValue > 100000) {
    Serial.println("STATUS: MILD RISK - Potential Anemia/Stress. Rest required.");
    digitalWrite(LED_YELLOW, HIGH);
    tone(BUZZER, 800, 100); // Short beep
  }

  
  else {
    Serial.println("STATUS: NORMAL - You are healthy.");
    digitalWrite(LED_GREEN, HIGH);
    noTone(BUZZER);
  }

  Serial.println("------------------------------------------");
  delay(1500); 
}

