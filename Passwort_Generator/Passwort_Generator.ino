void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  int i = 0;
  int password = "";
  int B = "";
  Serial.print("Passwort: ");
  while(true)
  {
    if (i <= 10)
    {
       int Z = random(33,126);
       char B = char(Z);
       i = i + 1;
       Serial.print(B);
       continue;
    }
   else
   {
    Serial.println();
    i = 0;
    password = "";
    int B = "";
    delay(1000);
    Serial.print("Passwort: ");
   }   
  }
} 
