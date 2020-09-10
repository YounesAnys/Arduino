void setup()
{
  pinMode(13, OUTPUT); // led 1 : rouge
}

void loop()
{
  digitalWrite(13, HIGH); // allume la led rouge
  delay(2000);
  digitalWrite(13, LOW); // eteindre la led ROUGE
  delay(2000);
}



