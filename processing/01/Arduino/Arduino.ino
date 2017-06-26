#define BAUDRATE
char LED = 13; 
int val = 0;

void setup() 
{
  pinMode(LED, OUTPUT);
  Serial.begin(BAUDRATE);
}

void loop() 
{
  if (Serial.available()) 
  { 
    val = Serial.read();
  }
  
  if (val == '1') 
  {
    digitalWrite(LED, HIGH);
  } 
  else 
  {
    digitalWrite(ledPin, LOW);
  }
  delay(10);
}
