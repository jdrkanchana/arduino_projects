#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);

    delay(3000);
  WiFi.disconnect();
  Serial.println("START..");
   WiFi.begin("Dul","12345678zx");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.println("...");

  }
  Serial.println("I\'m Connected");

}


void loop()
{


}
