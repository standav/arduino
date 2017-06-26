
char BUTT = A1;

void setup()
{
  Serial.begin(9600);
  pinMode(BUTT, INPUT_PULLUP);
}

void loop()
{
  int val = digitalRead(BUTT);
  
  if (val == LOW)           
  {
    Serial.println("Low");
  }
  else
  {
    Serial.println("High");
  }
  delay(1000);
}
