char LED1 = 13;   // LED D1 - pin13 PWM nepodporuje
char LED2 = 12;   // LED D2 - pin12 PWM nepodporuje
char LED3 = 11;   // LED D3 - pin11 PWM
char LED4 = 10;   // LED D4 - pin10 PWM

void setup()
{
  // nastaveni pinu 10 - 13 jako vystupnich
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop()
{
  for (int i = 255; i > 0; i--)
  {
    analogWrite(LED1, i); // intenzita svitu odpovida hodnote i
    analogWrite(LED2, i); 
    analogWrite(LED3, i); 
    analogWrite(LED4, i); 
    delay(100);
  }
  delay(100);
}
