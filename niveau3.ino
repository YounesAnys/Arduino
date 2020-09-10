#define LED_ROUGE 13
#define LED_ORANGE 12
#define LED_VERTE 11
#define POTENTIO A0

void setup()
{
  pinMode(LED_ROUGE, OUTPUT); // led 1 : rouge
  pinMode(LED_ORANGE, OUTPUT); // led 2 : orange
  pinMode(LED_VERTE, OUTPUT); // led 3 : verte
  pinMode(POTENTIO, INPUT); // potentiometre
}

void loop()
{
  int valeur = analogRead(POTENTIO);
  int valeurmodif = map(valeur, 0, 1023, 0, 254);
  
  analogWrite(LED_ROUGE, valeurmodif); // allume la led rouge
  digitalWrite(LED_ORANGE, LOW); // eteindre la led orange
  delay(10000); // attendre 10s
  analogWrite(LED_VERTE, valeurmodif); // allume la led verte
  digitalWrite(LED_ROUGE, LOW); // eteindre la led rouge
  delay(15000); // attendre 15s
  analogWrite(LED_ORANGE, valeurmodif); // allume la led orange
  digitalWrite(LED_VERTE, LOW); // eteindre la led verte
  delay(5000); // attendre 5s
}



