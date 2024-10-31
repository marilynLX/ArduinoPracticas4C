 
 int verde = 13;
 int amarillo = 12;
 int rojo =8;

void setup() {
  // put your setup code here, to run once:
pinMode (verde, OUTPUT); //SEÑAL DE SALIDA
pinMode (amarillo, OUTPUT);
pinMode (rojo, OUTPUT);
}

void loop() {

digitalWrite(verde, HIGH);
delay(4000);
digitalWrite(verde, LOW);
delay(500);

digitalWrite(amarillo,HIGH);
delay(2000);
digitalWrite(amarillo, LOW);
delay(500);
digitalWrite(amarillo,HIGH);
delay(500);
digitalWrite(amarillo, LOW);
delay(500);
digitalWrite(amarillo,HIGH);
delay(500);
digitalWrite(amarillo, LOW);
delay(500);

digitalWrite(rojo, HIGH);
delay(6000);
digitalWrite(rojo, LOW);
delay(500);
}