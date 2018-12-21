#include <Wire.h>
int x = 33;

void setup() {
  Wire.begin(); 
  Serial.begin(115200);
  Serial.println("Arduino Maestro");
}
 
void loop() {
   delay(5000);
   Wire.beginTransmission(1); // Canal de comunicacion 
   Wire.write(x); // Parametro a enviar
   Serial.println("El parametro envia fue: "+ String(x));
   Wire.endTransmission(); // Fin de la transmicion
   x++;
}
