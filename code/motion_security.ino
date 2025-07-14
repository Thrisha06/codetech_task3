// motion_security.ino
int pirPin = 2;        // PIR sensor output pin 
int ledPin = 3;        // LED pin
int buzzerPin = 4;     // Buzzer pin
int pirState = LOW;    // Current PIR state

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(pirPin);  // Read motion sensor value

  if (val == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);

    if (pirState == LOW) {
      Serial.println("⚠️ Motion Detected! Sending alert...");
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);

    if (pirState == HIGH) {
      Serial.println("✅ Motion ended.");
      pirState = LOW;
    }
  }
}
