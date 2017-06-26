#define BAUDRATE  9600

void setup()
{
      Serial.begin(BAUDRATE); // nastaveni seriove komunkace
}

void loop()
{
      Serial.print("V bufferu je nyni: "); 
      Serial.print(Serial.available()); 
      Serial.println(" bytu."); 
      delay(1000);
      if (Serial.available() > 0) 
      { 
        char prijato = Serial.read();
        Serial.print("Prijato: "); 
        Serial.println(prijato); 
      }
}
