// File: MyLed.h
#ifndef _MYLED_H_
#define _MYLED_H_

#include <Arduino.h>

class MyLed {
  private:
  	int pin;
  
  public:
  	MyLed(int pin,
          bool blink = false,
          unsigned long int msOn = 1000,
          unsigned long int msOff = 1000);
          

};

#endif

//File: MyLed.cpp
#include "MyLed.h"

MyLed::MyLed(int pin,
             bool blink,
             unsigned long int msOn,
          	 unsigned long int msOff)
{
  this->pin = pin;
}





//File: main.ion
void setup()
{
  pinMode(13, OUTPUT);
}
void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); //Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); //Wait for 1000 millisecond(s)
}             
