char buzzer = 3;  // pin bzucaku

void setup()
{
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  for(int i = 0; i < 100; i++) 
  {
    digitalWrite(buzzer, HIGH); 
    delay(2);
    digitalWrite(buzzer, LOW);
    delay(2);
  }

  for(int i = 0; i < 100; i++)
  {
    digitalWrite(buzzer, HIGH);
    delay(4);
    digitalWrite(buzzer, LOW);
    delay(4);
  }
}
