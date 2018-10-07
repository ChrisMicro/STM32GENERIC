/************************************************************************

  ILI9341 TFT example template

  Required libraries: GFX, Adafruit 

  Installation Instructions:
  1. Import the Adadruit library in the menue
  Sketch=>Include Libraries=>Manage Libraries =>  Adafruit ILI9341   
  2. Import the Adadruit GFX-Library
  Sketch=>Include Libraries=>Manage Libraries =>  Adafruit GFX Library  


  October 2018, ChrisMicro

************************************************************************/
/*

  Hardware STM32F4 Discovery

  ILI9341       Discovery
  =========     ==========
  SPI_MOSI  --> PA7
  SPI_MISO  --> PA6
  SPI_SCK   --> PA5

  CS Pin    --> PC2
  DC pin    --> PD3
  RST       --> PD12 or Pull high

  3V        --> Led
  3V        --> VCC
  GND       --> GND
  
*/

#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"


#define TFT_MOSI PA7
#define TFT_MISO PA6
#define TFT_CLK  PA5
#define TFT_CS   PC2
#define TFT_DC   PD3
#define TFT_RST  PD12


// Use hardware SPI 
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

// Using software SPI
// Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);

void setup()
{
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  tft.setRotation(3); // horitzontal wide screen, connectors on the left
  tft.setCursor(0, 0);
  tft.setTextColor(ILI9341_GREEN);  tft.setTextSize(3);
  tft.println("ILI9341 working!");
  tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2);
}

int Counter=0;

void loop(void)
{
  tft.print( Counter ); tft.print(" ");
  Counter ++;
  delay(1000);
}


