#include <Servo.h>
Servo myservo;  

const int trigPin= 12;
const int echoPin= 13;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

long duration, distance;

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
  Serial.println(distance);

  if(distance<15 ) { //two right & 3 will be left
      myservo.write(90);              // tell servo to go to position in variable 'pos'
      delay(2000);                       // waits 15 ms for the servo to reach the position
  }
  
  else{
      myservo.write(0);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15 ms for the servo to reach the position
  }
  
}