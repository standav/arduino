char LED1 = 10;    // LED na pinu 10
char LED2 = 11;    // LED na pinu 11
char LED3 = 12;    // LED na pinu 12
char LED4 = 13;    // LED na pinu 13

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
  digitalWrite(LED1, LOW);    // rozsvit LED 1
  digitalWrite(LED2, LOW);    // rozsvit LED 2
  digitalWrite(LED3, LOW);    // rozsvit LED 3
  digitalWrite(LED4, LOW);    // rozsvit LED 4

  delay(1000); // cekej 1s

  digitalWrite(LED1, HIGH);    // zhasni LED 1
  digitalWrite(LED2, HIGH);    // zhasni LED 2
  digitalWrite(LED3, HIGH);    // zhasni LED 3
  digitalWrite(LED4, HIGH);    // zhasni LED 4

  delay(1000); // cekej 1s
} 
