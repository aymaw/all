#include <Servo.h>

// Motor A
Servo motorA;
int motorAPin = 9;  // Connect to the signal wire of the ESC for motor A

// Motor B
Servo motorB;
int motorBPin = 10; // Connect to the signal wire of the ESC for motor B

char input;
void setup() {
  // Attach motors to their respective pins
  motorA.attach(motorAPin);
  motorB.attach(motorBPin);
}

void loop() {
  while(Serial.available()>0){
     input=Serial.read();
      Serial.println(input);
    switch(input)
    
    {
    case 'F':
      moveForward();
    break;

    case 'R':
      turnRight();
    break;

    case 'L':
      turnLeft();
    }
  }
}

void moveForward() {
  motorA.write(180);  // Adjust the values based on your ESC specifications
  motorB.write(180);
}

void turnRight() {
  // Lower the speed of the right motor
  motorA.write(90);
  motorB.write(180);  // Adjust the values based on your ESC specifications
}

void turnLeft() {
  // Lower the speed of the left motor
  motorA.write(180);  // Adjust the values based on your ESC specifications
  motorB.write(90);
}