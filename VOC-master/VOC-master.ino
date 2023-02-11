#include "MICS-VZ-89TE.h"

MICS_VZ_89TE testy;

void setup(){
  // put your setup code here, to run once:
  testy.begin();
  Serial.begin(9600);
  Serial.println("HEY");
  //pinMode(22,OUT);
  //PinMode(21,input);
  //testy.begin();
  delay(3000);
}

void loop(){
  // put your main code here, to run repeatedly:
  testy.readSensor();
  delay(1000);
  float CO2 = testy.getCO2();
  Serial.printf("CO2 %f \r\n", CO2);
  float VOC = testy.getVOC();
  Serial.printf("VOC %f \r\n", VOC);
}