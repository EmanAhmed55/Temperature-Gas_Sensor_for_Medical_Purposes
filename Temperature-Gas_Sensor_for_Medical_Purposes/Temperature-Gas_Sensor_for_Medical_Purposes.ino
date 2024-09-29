#define GREEN_LED 2
#define RED_LED 3
#define BUZZER 4
#define LM35_PIN A0
#define MQ2_PIN A1

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float temperature = analogRead(LM35_PIN) * (5.0 / 1023.0) * 100; // Convert to Celsius
  int gasLevel = analogRead(MQ2_PIN); // Read gas sensor value
  
  if (temperature > 60 || gasLevel > 400) {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(BUZZER, HIGH);
  } else {
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
    digitalWrite(BUZZER, LOW);
  }
  
  delay(1000); // Update every second
}
