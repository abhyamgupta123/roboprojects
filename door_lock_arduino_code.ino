#include <IRremote.h>
int in=4;
int p1=10; // if high locks(rolls)
int p2=12;
int p3=8;

int p4=11;// if high unrolls
int rpin=6;
int um=9;
int dm=5;

IRrecv irrecv(rpin);
decode_results results;
void setup() {
  pinMode(p1,OUTPUT); //um
  pinMode(p2,OUTPUT); //um
  pinMode(in,INPUT); 
  pinMode(p3,OUTPUT); //dm
  pinMode(p4,OUTPUT); //dm
  pinMode(um,OUTPUT);
  pinMode(dm,OUTPUT);
  
  // put your setup code here, to run once:

Serial.begin(115200);
irrecv.enableIRIn();
}

void loop() {
  
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results))
    {
     Serial.println(results.value);
     Serial.println("abhyam");
     irrecv.resume(); // Receive the next value
    }
   if(results.value==2613402495 || results.value==1086321165){
      delay(200);
      analogWrite(um,115);
      analogWrite(dm,89);
 digitalWrite(p1,HIGH);
 digitalWrite(p2,LOW);
 digitalWrite(p3,LOW);
 digitalWrite(p4,HIGH);
 
}
else if(results.value==4104788799 || results.value==1086300765){
  delay(200);
  analogWrite(um,89);
      analogWrite(dm,115);
 digitalWrite(p1,LOW);
 digitalWrite(p2,HIGH);
 digitalWrite(p3,HIGH);
 digitalWrite(p4,LOW);

}
else if (digitalRead(in)==HIGH || results.value==4150375075 || results.value==1086296175){
  analogWrite(um,0);
      analogWrite(dm,0);
  digitalWrite(p1,LOW);
 digitalWrite(p2,LOW);
  digitalWrite(p3,LOW);
 digitalWrite(p4,LOW);
}
if (results.value==1086280365){
  analogWrite(um,111);
  
  digitalWrite(p1,LOW);
  digitalWrite(p2,HIGH);
}
else if (results.value==1086276285){
  analogWrite(dm,111);
  
  digitalWrite(p3,LOW);
  digitalWrite(p4,HIGH);
 }
 if (results.value==1086282405){
  analogWrite(um,111);
  
  digitalWrite(p1,HIGH);
  digitalWrite(p2,LOW);
}
else if (results.value==1086263535){
  analogWrite(dm,111);
  
  digitalWrite(p3,HIGH);
  digitalWrite(p4,LOW);
}}
 
