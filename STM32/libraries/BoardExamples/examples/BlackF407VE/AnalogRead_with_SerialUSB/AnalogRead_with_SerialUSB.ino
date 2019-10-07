/*
  AnalogReadSerial with software emulated USB serial interface

  The usage of the emulated USB-serial port is a little bit tricky.

  After flashing the board with the ST-Link V2 YOU HAVE TO PRESS THE RESET BUTTON
  ( after reseting, the serial port will probably have another identifier 
    on Linux e.g. /dev/ttyACM2 instead of /dev/ttyACM1 )
    
  You have to enable the serial USB driver before programming the board in the tools menue

    tools
    => USB [Virtual Com Port]
    => Serial Communikation => SerialUSB

  Hardware:
   microcontroller board: STM32F407VE (  512MB flash )

 
  Analog Pin: PA1


  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial

  reworked and documented for STM32FF407 Black
  October 2019 by ChrisMicro

*/

void setup()
{
  SerialUSB.begin(115200);
}

void loop()
{
  int value = analogRead(PA1);

  SerialUSB.println(value);

  delay(10);
}
