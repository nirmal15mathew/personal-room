#define sensorPin 2 // arbitrary value change later
#define buzzerPin 13 // arbitrary value change later
#define ledPin 7
bool sensorState = false;
void setup() {
    pinMode(sensorPin, INPUT);
    pinMode(buzzerPin, OUTPUT);
    pinMode(ledPin, OUTPUT);
  	Serial.begin(9600);
}

void loop() {
    sensorState = digitalRead(sensorPin);
  	Serial.println(sensorState);

    if (sensorState == HIGH) {
      	Serial.println("Sensed");
        digitalWrite(buzzerPin, HIGH);
        delay(200);
        digitalWrite(buzzerPin, LOW);
        digitalWrite(ledPin, HIGH);
        delay(4000);
      	digitalWrite(ledPin, LOW);
    }
    else {
        digitalWrite(buzzerPin, LOW);
    }
    delay(100);
}