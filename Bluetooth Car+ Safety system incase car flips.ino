//int ls=3;
int ld1=3;
int ld2=4;
//int rs=11;
int rd1=10;
int rd2=9;
const int ledPin = 13;
const int ldrPin = A0;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
//pinMode(ls,OUTPUT);
pinMode(ld1,OUTPUT);
pinMode(ld2,OUTPUT);
//pinMode(rs,OUTPUT);
pinMode(rd1,OUTPUT);
pinMode(rd2,OUTPUT);
pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);
//digitalWrite(ls,150);
//digitalWrite(rs,150);

}


void loop() {
//  put your main code here, to run repeatedly:

    char BlueTooth = (char)Serial.read();
    Serial.println(BlueTooth);
    switch(BlueTooth)
    
    {
    case 'F':

        digitalWrite(ld1,LOW);
    digitalWrite(ld2,HIGH);
    digitalWrite(rd1,HIGH);
    digitalWrite(rd2,LOW);
    break;
  
    case 'B':

        digitalWrite(ld1,HIGH);
    digitalWrite(ld2,LOW);
    digitalWrite(rd1,LOW);
    digitalWrite(rd2,HIGH);
    break;
  
    case 'L':
    digitalWrite(ld1,LOW);
    digitalWrite(ld2,HIGH);
    digitalWrite(rd1,LOW);
    digitalWrite(rd2,LOW);

    break;
    
    case 'R':
    digitalWrite(ld1,LOW);
    digitalWrite(ld2,HIGH);
    digitalWrite(rd1,HIGH);
    digitalWrite(rd2,HIGH);

    break;
  
case 'S':
    digitalWrite(ld1,LOW);
    digitalWrite(ld2,LOW);
    digitalWrite(rd1,LOW);
    digitalWrite(rd2,LOW);
    break;
    }
    int ldrStatus = analogRead(ldrPin);
if (ldrStatus >= 600) {
digitalWrite(ledPin, LOW);
Serial.println(ldrStatus);

} else {

digitalWrite(ledPin, HIGH);
Serial.println(ldrStatus);

}
//  }
}