#include <Arduino.h>
#include "TM1637Display.h"

#define LCD_CLK 3
#define LCD_DIO 4

TM1637Display lcd = TM1637Display(LCD_CLK,LCD_DIO);

const uint8_t test_lcd[] {
  0b01111111,0b01111111,0b01111111,0b01111111
};

void setup() {
  lcd.setBrightness(3);
  lcd.setSegments(test_lcd,4,0);
  delay(1000);
  lcd.clear();
}

void loop() {
  
}