/********************************************************

show user button state with blinking LEDs
STM32F411 Discovery has one user button

red   LED: button pressed
green LED: button not pressed
 
Hardware definitions:
 
#define LED_GREEN                   PD12
#define LED_BLUE                    PD15 
#define LED_RED                     PD14
#define LED_ORANGE                  PD13 

#define LED_BUILTIN LED_ORANGE

*********************************************************/

void setup()
{
  pinMode(USER_BTN,   INPUT); // mandatory for STM MCUs, on Arduino Uno working without
  pinMode(LED_GREEN,  OUTPUT);
  pinMode(LED_RED,    OUTPUT);
}

void loop()
{
  if  ( digitalRead( USER_BTN ) )digitalWrite(LED_RED  , HIGH);
  else                           digitalWrite(LED_GREEN, HIGH);
  
  delay(100);

  // leds off
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_RED  , LOW);
  
  delay(100);
}
