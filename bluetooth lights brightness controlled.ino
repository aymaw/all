int led=9;

char t;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  while(Serial.available()>0){
     t=Serial.read();
      Serial.println(t);
  }
  if(t=='F'){
    analogWrite(led,50);
    delay(1000);
  

  }
   else if (t=='B'){
    analogWrite(led,150);
    delay(1000);
   
  }
  else if (t=='R'){
    analogWrite(led,250);
    delay(1000);
   
}
  else if (t=='L'){
    analogWrite(led,0);
    delay(1000);
    
  }
}