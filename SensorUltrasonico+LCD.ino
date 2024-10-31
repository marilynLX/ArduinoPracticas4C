#include <LiquidCrystal.h>
40, 35, 30, 25, 20,15, 10, 5
 
 int trig = 10;
 int echo = 13;
 int led = 8;
 int duracion;
 int distancia;

 LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
   Serial.begin(9600);
   
 pinMode(trig, OUTPUT);
 pinMode(echo, INPUT);
 pinMode(led, OUTPUT);
}

void loop() {
 digitalWrite(trig, HIGH); 
 delay(100);
 digitalWrite(trig, LOW);
 duracion = pulseIn (echo, HIGH);
 distancia = duracion / 58.2;
 Serial.print ("Centimetros: ");
 Serial.print (distancia);
 Serial.println();
delay(200);

if(distancia <= 20){
  digitalWrite (led, HIGH);
  delay(100);
} else{
  digitalWrite(led, LOW);
  delay(100);
  }
}
