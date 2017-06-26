char buzzer = 3;    // pin bzucaku 

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  tone(buzzer, 262);  // C1
  delay(1000);        
  tone(buzzer, 294);  // D1
  delay(1000);        
  tone(buzzer, 330);  // E1
  delay(1000);
  tone(buzzer, 349);  // F1
  delay(1000);        
  tone(buzzer, 392);  // G1
  delay(1000);  
  tone(buzzer, 440);  // komorni A1
  delay(1000);        
  tone(buzzer, 494);  // B1
  delay(1000);        
  tone(buzzer, 523);  // C2
  delay(1000);
  
}

