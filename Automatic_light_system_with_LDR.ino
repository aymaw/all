const int ledPin = 13;
const int ldrPin = A0;
void setup() {
  
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);
}

void loop() {
  
int ldrStatus = analogRead(ldrPin);
if (ldrStatus >= 600) {
digitalWrite(ledPin, HIGH);
Serial.println(ldrStatus);

} else {

digitalWrite(ledPin, LOW);
Serial.println(ldrStatus);

}

}