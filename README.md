# codetech_task3
motion controller security
🛡️ IoT Motion Detection Security System
This IoT project uses a PIR sensor to detect motion and triggers alerts via LED, buzzer, and serial messages. It serves as a basic prototype for home or office security.

🚀 Getting Started
✅ Hardware Required
Arduino Uno / NodeMCU / ESP32
PIR Motion Sensor
LED
Buzzer
Breadboard & Jumper Wires
USB Cable
🔌 Circuit Connections
Component	Arduino Pin
PIR Sensor	D2
LED	D3
Buzzer	D4
Make sure to connect PIR VCC to 5V and GND properly.

📜 Code Features
Detects motion using PIR sensor
Activates LED and buzzer as an alarm
Sends alerts via Serial Monitor
🛠️ Setup Instructions
Open motion_security.ino in Arduino IDE
Select correct board & port (e.g., Arduino Uno)
Upload the sketch
Open Serial Monitor at 9600 baud
Observe alerts when motion is detected
