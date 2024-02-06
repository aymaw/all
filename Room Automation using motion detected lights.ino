int relay=3;
int relay2=4;
//int relay3=13;
//int relay4=6;
int End = A0;
int door = A2;
int piano = A1;
int middle = A4;
const int soundpin=A3;

void setup() {
  // put your setup code here, to run once:
pinMode(relay,OUTPUT);
pinMode(relay2,OUTPUT);
//pinMode(relay3,OUTPUT);
//pinMode(relay4,OUTPUT);
pinMode(End, INPUT);
pinMode(door, INPUT);
pinMode(piano, INPUT);
pinMode(soundpin,INPUT);
Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 int End1 = analogRead(End);
 int door1 = analogRead(door);
 int middle1 = analogRead(middle);
 int piano1 = analogRead(piano);
 int soundpin = analogRead(soundpin);
 Serial.println(middle1);
  
 if (End1 >500 || door1 >500  || middle1 >500 || piano1>500 ){
  digitalWrite(relay, LOW); 
  digitalWrite(relay2, LOW); 
 // digitalWrite(relay3, LOW); 
 // digitalWrite(relay4, HIGH); 
 //delay(60000);
       
}
 else {
  digitalWrite(relay, HIGH); 
  digitalWrite(relay2, HIGH);
   }

 
  //digitalWrite(relay3, LOW); 
  //digitalWrite(relay4, LOW); 
 

  }