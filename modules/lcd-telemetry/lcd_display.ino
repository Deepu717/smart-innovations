//SMART INNOVATIONS
#include <LiquidCrystal.h> // first include the lcd library

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // pins used for lcd display in arduino

void setup() {
  lcd.begin(16, 2); // rows , columbs = 16,2
  lcd.print("SMART INNOVATIONS");
}


void loop() {
  lcd.setCursor(0, 1);
}
