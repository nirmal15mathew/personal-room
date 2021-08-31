#define sensorPin 19 // arbitrary value change later
#define buzzerPin 3 // arbitrary value change later
#define ledPin 8
bool sensorState = false;
void setup() {
    pinMode(sensorPin, INPUT);
    pinMode(buzzerPin, OUTPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    sensorState = digitalRead(sensorPin)

    if (sensorPin) {
        digitalWrite(buzzerPin, HIGH)
        delay(200)
        digitalWrite(buzzerPin, LOW)
        digitalWrite(ledPin, HIGH)
        delay(4000)
    }
    else {
        digitalWrite(buzzerPin, LOW)
    }
    delay(100)
}