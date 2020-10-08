#include <Adafruit_CC3000.h>
#include <ccspi.h>
#include <SPI.h>
#include <string.h>
#include "utility/debug.h"

#include <EEPROM.h>



#define TdsSensorPin A1


void setup(void)
{
  Serial.begin(115200);

}

void loop(void)
{
  delay(1000);

  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.print(val); //print the value to serial port
  Serial.println("hhh");
  delay(1000);
 
}
