#include <SoftwareSerial.h>
const int pin1 = 4;
const int pin2 = 5;
const int pin3 = 6;
const int pin4 = 7;
const int pin5 = 8;
const int pin6 = 9;
const int pin7 = 10;
const int pin8 = 11;
const int pin9 = 12;

SoftwareSerial esp(2,3);

void setup() {
Serial.begin(115200);
esp.begin(9600);
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
pinMode(pin6,OUTPUT);
pinMode(pin7,OUTPUT);
pinMode(pin8,OUTPUT);
pinMode(pin9,OUTPUT);
}

void loop() {
  
String line = esp.readStringUntil('\r');
Serial.print(line);

if(line=="ON1"){
  digitalWrite(pin1, HIGH);  
}
if(line=="OFF1"){
  digitalWrite(pin1, LOW);
}
if(line=="ON9"){
  digitalWrite(pin9, HIGH);
}
if(line=="OFF9"){
  digitalWrite(pin9, LOW);
}
if(line=="ON2"){
  digitalWrite(pin2, HIGH);
}
if(line=="OFF2"){
  digitalWrite(pin2, LOW);
}

if(line=="ON3"){
  digitalWrite(pin3, HIGH);
}
if(line=="OFF3"){
  digitalWrite(pin3,LOW);
}
if(line=="ON4"){
  digitalWrite(pin4, HIGH);
}
if(line=="OFF4"){
  digitalWrite(pin4, LOW);
}if(line=="ON5"){
  digitalWrite(pin5, HIGH);
}
if(line=="OFF5"){
  digitalWrite(pin5, LOW);
}if(line=="ON6"){
  digitalWrite(pin6, HIGH);
}
if(line=="OFF6"){
  digitalWrite(pin6, LOW);
}if(line=="ON7"){
  digitalWrite(pin7, HIGH);
}
if(line=="OFF7"){
  digitalWrite(pin7, LOW);
}if(line=="ON8"){
  digitalWrite(pin8, HIGH);
}
if(line=="OFF8"){
  digitalWrite(pin8, LOW);
}
}
