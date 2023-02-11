#include "MICS-VZ-89TE.h"

MICS_VZ_89TE test;

void setup(){
  // put your setup code here, to run once:
  test.begin();
}

void loop(){
  // put your main code here, to run repeatedly:
  test.readSensor();
  delay(1000);
  float CO2 = test.getCO2();
  Serial.printf("CO2 %f \r\n", CO2);
  float VOC = test.getVOC();
  Serial.printf("VOC %f \r\n", VOC);
}