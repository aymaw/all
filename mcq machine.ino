int led=13;
int led2=8;


char t;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
    pinMode(led2,OUTPUT);
    Serial.print("what is the 6th alphabet?");

}

void loop() {
  while(Serial.available()>0){
     t=Serial.read();
      Serial.println(t);
  }
  if(t=='F'){
    digitalWrite(led,1);
    digitalWrite(led2,0);
    delay(1000);

  }
   else{
    digitalWrite(led,0);
    digitalWrite(led2,1);
  }
}