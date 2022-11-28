#include <Arduino.h>
#include "TM1637Display.h"
#include "NewPing.h"

#define LCD_CLK 3
#define LCD_DIO 4

TM1637Display lcd = TM1637Display(LCD_CLK,LCD_DIO);
unsigned long range = 0L;
NewPing pinger = NewPing(9,8,200);

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
  delay(1000);
  range = pinger.ping_cm(200);
  lcd.showNumberDec(range,true,4,0);
}