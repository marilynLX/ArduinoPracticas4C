#include <DHT.h>
#include <DHT_U.h>

#include <Adafruit_Sensor.h>

int led = 13;
int sensor = 2;
int temperatura;
int humedad;

DHT dht (sensor, DHT11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  temperatura = dht.readTemperature();
  humedad = dht.readHumidity();
 
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print("Humedad: ");
  Serial.println(humedad);
  delay(500);

  if (temperatura >= 28){
    digitalWrite (led, HIGH);
  }
}
