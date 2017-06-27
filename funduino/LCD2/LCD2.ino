int latchPin = 4;
int clockPin = 7;
int dataPin = 8; // data pro segmentovky

int pismena[] = {136, 137, 192, 225};
int pozice[] = {1, 2, 4, 8};

void setup()
{
      pinMode(latchPin,OUTPUT);
      pinMode(clockPin,OUTPUT);
      pinMode(dataPin,OUTPUT); // nastaveni vystupu pro segmentovky
}

void loop()
{
  for (int i = 1; i < 20; i++){
    digit(0,0); digit(1,1); digit(2,2); digit(3,3); }

  for (int i = 1; i < 20; i++){
    digit(0,1); digit(1,2); digit(2,3); digit(3,0); }

  for (int i = 1; i < 20; i++){
    digit(0,2); digit(1,3); digit(2,0); digit(3,1);}

  for (int i = 1; i < 20; i++){
    digit(0,3); digit(1,0); digit(2,1); digit(3,2);}

}

void digit (int pismeno, int d)
{
  digitalWrite(latchPin,LOW);                   
  shiftOut(dataPin, clockPin, MSBFIRST,pismena[pismeno]);
  shiftOut(dataPin, clockPin, MSBFIRST,pozice[d]);
  digitalWrite(latchPin,HIGH);               
  delay(5);
}
