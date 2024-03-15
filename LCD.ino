#include "LiquidCrystal.h"
LiquidCrystal lcd(8,7,6,5,4,3);

// Define custom character for filled box cursor
byte cursorChar[8] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

void setup() 
{
  Serial.begin(38400);
  lcd.begin(16, 2);

  // Create custom character
  lcd.createChar(0, cursorChar);
}

void loop() 
{
  lcd.clear();
  delay(250);
  lcd.setCursor(0, 0);

  String phrase = "I'm Nour MK.";

  // Iterate over each character in the string
  for (int i = 0; i < phrase.length(); i++) {
    lcd.print(phrase[i]);
    delay(188);
  }
  
  // Add blinking cursor
  lcd.setCursor(phrase.length(), 0); 
  lcd.write((byte)0); 
  delay(400);
  lcd.setCursor(phrase.length(), 0); 
  lcd.print(" ");
  delay(400);
  lcd.setCursor(phrase.length(), 0); 
  lcd.write((byte)0); 
  delay(400);
  lcd.setCursor(phrase.length(), 0);
  lcd.print(" ");
  delay(400); 
  lcd.setCursor(phrase.length(), 0);
  lcd.write((byte)0); 
  delay(400);
  lcd.setCursor(phrase.length(), 0);
  lcd.print(" "); 
  delay(400);
  lcd.setCursor(phrase.length(), 0); 
  lcd.write((byte)0); 
  delay(400); 
  lcd.setCursor(phrase.length(), 0);
  lcd.print(" ");
  delay(400); 

  delay(400); // Delay before repeating the loop
}
