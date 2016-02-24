#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,2,16);

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.clear();  
  lcd.home();
  lcd.print("* HACKERSTORE !*");
  lcd.setCursor(0,1);
  lcd.print("Arduinos & parts");
}

void loop()
{
 
}

