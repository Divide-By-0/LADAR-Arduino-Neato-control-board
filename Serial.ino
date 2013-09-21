#include <SoftwareSerial.h>


SoftwareSerial neato(7,8);

void setup(){
  Serial.begin(9600);
  neato.begin(115200);
}

void loop(){
  while (Serial.available()){
    while (neato.available()){
      Serial.println(neato.read());
    }
  }   
}
