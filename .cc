
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
int motorvoltage;


void setup()  {
  lcd.print("Power:" + motorvoltage);
  Serial.begin(9600);
  
  
}

void loop()
{
  lcd.clear();
  motorvoltage = analogRead(A0);
  lcd.print("Power:" + motorvoltage);
  Serial.println(motorvoltage);
  
  delay(100);
  

}
