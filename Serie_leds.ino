int verde = 13;
int amarillo = 12;
int rojo = 8;
int verde2 = 7;
int rojo2 = 4;

void setup() {
  // put your setup code here, to run once:
pinMode(verde, OUTPUT);
pinMode(amarillo, OUTPUT);
pinMode(rojo, OUTPUT);
pinMode(verde2, OUTPUT);
pinMode(rojo2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(rojo2, HIGH);
delay(500);
digitalWrite(rojo2, LOW);
delay(500);

digitalWrite(verde, HIGH);
delay(500);
digitalWrite(verde, LOW);
delay(500);

digitalWrite(amarillo, HIGH);
delay(500);
digitalWrite(amarillo, LOW);
delay(500);

digitalWrite(rojo, HIGH);
delay(500);
digitalWrite(rojo, LOW);
delay(500);

digitalWrite(verde2, HIGH);
delay(500);
digitalWrite(verde2, LOW);
delay(500);

digitalWrite(rojo, HIGH);
delay(500);
digitalWrite(rojo, LOW);
delay(500);

digitalWrite(amarillo, HIGH);
delay(500);
digitalWrite(amarillo, LOW);
delay(500);

digitalWrite(verde, HIGH);
delay(500);
digitalWrite(verde, LOW);
delay(500);


}
