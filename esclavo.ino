#include <Wire.h>

int x; // Variable global para el evento

void setup()
{
  Wire.begin(1); // Canal de comunicacion 1
  Wire.onReceive(recibirParametro); 
  Serial.begin(9600); 
  Serial.println("Arduino Esclavo");
}

void loop()
{
  delay(4000);
  Serial.println("El parametro recibido es: "+String(x));
}

void recibirParametro(int parametro)
{
    while(Wire.available()) 
    {
      x = Wire.read(); 
    }
}
