#define PIR_PIN 2
#define LED_PIN 13
#define BUZZER_PIN 8

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (digitalRead(PIR_PIN) == HIGH) {

    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    Serial.println("MOTION DETECTED!");
    
  } else {

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    Serial.println("NO MOTION");
  }

  delay(500);
}
