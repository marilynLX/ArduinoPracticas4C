#include <LiquidCrystal.h>
int led = 8;
int LDR = A5;
int valor;
int limite = 700;

LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
Serial.begin(9600); //DONDE NOS MUESTRA LOS DATOS Y LA FECUENCIA
pinMode(LDR, INPUT);//DE ENTRADA AL PIN
pinMode(led, OUTPUT);//DE SALIDA
lcd.begin(16,2);
}

void loop() {
 int valor = analogRead(LDR);//de donde llegan los datos 
Serial.println(valor);//nos imprime el valor
delay(100);
lcd.setCursor(2, 0);
lcd.print(valor);
//lcd.scrollDisplayLeft();
delay (500);

if (valor <= limite){
digitalWrite(led, HIGH);
  delay(100);
}  
else{
 digitalWrite(led, LOW);
 delay(100);
}

}
