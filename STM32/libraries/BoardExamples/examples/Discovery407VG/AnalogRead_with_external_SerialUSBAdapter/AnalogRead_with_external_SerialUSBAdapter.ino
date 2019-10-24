/*
  AnalogReadSerial with external USB-Serial-Adapter

  Hardware:
   microcontroller board: STM32F407VG Disc1 

  Serial Pins:
   PA2 USART2 TX
   PA3 USART2 RX

  Analog Pin: PA1

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial

  reworked and documented for STM32FF407 VG Disc1 ( Discovery )
  October 2019 by ChrisMicro

  ! ATTENTION !
  pressing the reset button could be necessary after flashing the MCU

*/

#define mySerialPort SerialUART2 // don't forgett to change the RX and TX pin if you use SerialUART2

void setup()
{
  mySerialPort.stm32SetTX( PA2 );
  mySerialPort.stm32SetRX( PA3 );

  mySerialPort.begin(115200);
}

void loop()
{
  int value = analogRead(PA1);

  mySerialPort.println(value);

  delay(10);
}
