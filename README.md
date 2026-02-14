<p align="center">
  <img src="./img.png" alt="Project Banner" width="100%">
</p>

# W.CARE 🎯

## Basic Details

### CHAITHRA AJITH


### Hosted Project Link
[mention your project hosted link here]

### Project Description

W.CARE is a low-costhardware system It identifies abnormal health patterns related to anemia, infections, and stress, providing early warnings to encourage timely medical consultation.

### The Problem statement

Many women ignore early symptoms ofanemia, and infections due to a lack of affordable daily monitoring tools and the high cost of clinical diagnostics.

### The Solution

developed a device using an ESP32 microcontroller that continuously tracks body temperature and heart rate. Using predefined health thresholds, the system provides instant visual feedback to categorize health status as Normal, Mild Risk, or Consult Doctor.

## Technical Details

Libraries used: - MAX30105.h,DallasTemperature.h & OneWire.h
BlynkSimpleEsp32.h

### Technologies/Components Used


**For Hardware:**

Main components:ESP32 Development Board

MAX30102 Heart Rate & SpO2 Sensor

DS18B20 Digital Temperature Sensor

Piezo Buzzer & 3-Color LED System (Red, Yellow, Green)

Specifications: 3.3V Operating Voltage, I2C Communication, WiFi-enabled.

Tools required: Breadboard, Jumper wires, 4.7k Ohm Resistor.

## Features

List the key features of your project:
Continuous Vitals Tracking: Real-time monitoring of body temperature and heart intensity.

Tri-Level Alert System: - Green: Healthy/Normal status.

Yellow: Mild risk (Warning for potential Anemia or Stress).

Red: High risk (High Fever/Infection - Alert to consult a doctor).

Non-Invasive Sensing: No needles or blood samples; uses optical and thermal sensors.


## Implementation

Components Required
ESP32 (30-pin version)

MAX30102 Sensor

DS18B20 Sensor

1x 4.7kΩ Resistor (for Temperature Pull-up)

3x LEDs (Red, Yellow, Green)

1x Active Buzzer

##Circuit Setup

MAX30102: VCC to 3.3V, GND to GND, SDA to GPIO 21, SCL to GPIO 22.

DS18B20: VCC to 3.3V, GND to GND, Data to GPIO 4. Important: Place 4.7k resistor between Data and 3.3V.

LEDs: Green (GPIO 13), Yellow (GPIO 12), Red (GPIO 19).

Buzzer: Positive to GPIO 18, Negative to GND.

---

## Project Documentation

### For Software:

#### Screenshots (Add at least 3)

![Screenshot1](Add screenshot 1 here with proper name)
*Add caption explaining what this shows*

![Screenshot2](Add screenshot 2 here with proper name)
*Add caption explaining what this shows*


#### Diagrams


---

### For Hardware:

#### Schematic & Circuit

![Circuit](Add your circuit diagram here)
*Add caption explaining connections*

![Schematic](Add your schematic diagram here)
*Add caption explaining the schematic*

#### Build Photos

![Team](Add photo of your team here)

![Components](Add photo of your components here)
*List out all components shown*

![Build](Add photos of build process here)
*Explain the build steps*

![Final](Add photo of final product here)
*Explain the final build*

---


### For Hardware Projects:

#### Bill of Materials (BOM)

Component,Quantity,Specifications,Price (Est)
ESP32,1,"Dual Core, WiFi/BT",₹600
MAX30102,1,Optical Heart Rate,₹350
DS18B20,1,Digital Thermometer,₹150
Buzzer/LEDs,4,-,₹50
Resistor/Wires,1 set,"4.7kΩ, Jumpers",₹50

**Total Estimated Cost:** ₹1200

#### Assembly Instructions

**Step 1: Prepare Components**

Connect the MAX30102 sensor to the ESP32 using the I2C pins (GPIO 21 and 22). Ensure pins are soldered for data stability.


**Step 2: Build the Power Supply**

Wire the DS18B20. Add the 4.7k resistor between the Data and VCC lines to ensure the digital signal is correctly pulled up.

**Step 3: Alert Logic**

Connect the three LEDs to their respective GPIO pins to indicate Normal (Green), Mild (Yellow), and Severe (Red) risk levels.


---
## Project Demo

### Video
https://drive.google.com/file/d/1GcA0RVHa7PiSDbmWnIGmEmqZdRTEuje9/view?usp=drivesdk

when green light blinks that means the person is healthy no anemia

### Additional Demos

https://drive.google.com/file/d/1FJaLJJjLWj6ulxYVE2KtU2ay50R53SRT/view?usp=drivesdk

when the yellow light blinks that means the person have mild anemia

---

## AI Tools Used  Gemini

Debugging I2C communication errors ("MAX30102 not found").




---

## Team Contributions

- CHAITHRA AJITH --- ALL

## License

This project is licensed under the MIT License n
**Common License Options:**
- MIT License (Permissive, widely used)

Made with ❤️ at TinkerHub
