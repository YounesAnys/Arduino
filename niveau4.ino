#include <LiquidCrystal.h>

const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define LED_ROUGE 13
#define LED_ORANGE 12
#define LED_VERTE 11

void setup()
{
  lcd.begin(16, 2);
  analogWrite(8,15);
  lcd.print("Test");
  pinMode(LED_ROUGE, OUTPUT); // led 1 : rouge
  pinMode(LED_ORANGE, OUTPUT); // led 2 : orange
  pinMode(LED_VERTE, OUTPUT); // led 3 : verte
}

void loop()
{
  digitalWrite(LED_ROUGE, HIGH); // allume la led rouge
  digitalWrite(LED_ORANGE, LOW); // eteindre la led orange
  lcd.clear();
  lcd.print("Stop");
  delay(10000); // attendre 10s
  digitalWrite(LED_VERTE, HIGH); // allume la led verte
  digitalWrite(LED_ROUGE, LOW); // eteindre la led rouge
  lcd.clear();
  lcd.print("Roulez");
  delay(15000); // attendre 15s
  digitalWrite(LED_ORANGE, HIGH); // allume la led orange
  digitalWrite(LED_VERTE, LOW); // eteindre la led verte
  lcd.clear();
  lcd.print("Ralentissez");
  delay(5000); // attendre 5s
}







