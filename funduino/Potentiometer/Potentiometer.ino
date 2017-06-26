#define BAUDRATE  9600

int potValue = 0;   

void setup()
{
      Serial.begin(9600);
}

void loop()
{
      potValue = analogRead(A0);
      Serial.print("Pot = ");
      Serial.println(potValue);
      delay(500);
}
