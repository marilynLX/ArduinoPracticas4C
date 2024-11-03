//declaramos la variable del led en el puerto 13
int led = 13;
void setup() {
  // put your setup code here, to run once:
  //indicamos la salida de datos 
pinMode (led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //indicamos que se prenda el led por tiempo indefinido
digitalWrite (led, HIGH);
}
