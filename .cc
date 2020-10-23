//Created By Carson W
//Paper Airplane Launcher 
//Capstone 2020


#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
//Pins for the LCD Screen
int motorvoltage;
// sets the motorvoltage values as integers


void setup()  {
  lcd.print(motorvoltage);
  //prints the motor voltage to the LCD Screen
  Serial.begin(9600);
}

void loop()
{
  lcd.clear();
  //Clears LCD Screen once per loop
  motorvoltage = analogRead(A0);
  //The motors are connected to an analog read port on the arduino
  lcd.print("Power:" + motorvoltage);
  //Prints "Power" + the motor voltage
  Serial.println(motorvoltage);
  //Prints the motor voltage in the print display on the arduino idle
  delay(100);
  //delays every second
  

}
