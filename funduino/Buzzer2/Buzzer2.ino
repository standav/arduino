char buzzer = 3;  // pin bzucaku

void setup()
{
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  beep(100, 1);
  beep(100, 2);
  beep(100, 3);
}

void beep(int duration, int delayms)
{
  for(int i = 0; i < duration; i++)
  {
    digitalWrite(buzzer, HIGH);
    delay(delayms);
    digitalWrite(buzzer, LOW);
    delay(delayms);
  }
}

