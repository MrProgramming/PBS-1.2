void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  while(true)
  { 
    int QSumme = 0;
    int Zahl = 0;
    int x = 0;
    Serial.print("Kundennummer: KD");
    while(x <= 7 )
    {
      Zahl = random(1,9);
      QSumme = QSumme + Zahl;
      x = x + 1;
      Serial.print(Zahl);
    }
    if (QSumme < 10)
    {
      Serial.print("Nicht verwendbar");
      }
    Serial.print(QSumme);
    Serial.println();
    delay(1000);
  }
}
