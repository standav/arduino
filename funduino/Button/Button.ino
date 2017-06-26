char LED = 13;
char BUTT = A1;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTT, INPUT); // A1 jako vstup (zkratujte jumper J2 - jinak chybi PullUp rezistor)
}

void loop()
{
  int val = digitalRead(BUTT);
  
  if (val == LOW)           
  {
    digitalWrite(LED, LOW);   // rozsvit
  }
  else
  {
    digitalWrite(LED, HIGH);  // zhasni
  }
}
