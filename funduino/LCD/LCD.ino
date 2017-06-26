int latchPin = 4;
int clockPin = 7;
int dataPin = 8; // data pro segmentovky

void setup()
{
      pinMode(latchPin,OUTPUT);
      pinMode(clockPin,OUTPUT);
      pinMode(dataPin,OUTPUT); // nastaveni vystupu pro segmentovky
}

void loop()

{
      digitalWrite(latchPin,LOW);                      // start zapisu
      shiftOut(dataPin,clockPin,MSBFIRST,B10001000);   // zobrazeni znaku A
      shiftOut(dataPin,clockPin,MSBFIRST,B00000001);   // adresa 1. segmentovky
      digitalWrite(latchPin,HIGH);                     // konec zapis - data jdou na vystup
      delay(5);

      digitalWrite(latchPin,LOW);
      shiftOut(dataPin,clockPin,MSBFIRST,B10001001);   // H
      shiftOut(dataPin,clockPin,MSBFIRST,B00000010);   // adresa 2. segmentovky
      digitalWrite(latchPin,HIGH);
      delay(5);

      digitalWrite(latchPin,LOW);
      shiftOut(dataPin,clockPin,MSBFIRST,B11000000);   // O
      shiftOut(dataPin,clockPin,MSBFIRST,B00000100);   // adresa 3. segmentovky
      digitalWrite(latchPin,HIGH);
      delay(5);

      digitalWrite(latchPin,LOW);
      shiftOut(dataPin,clockPin,MSBFIRST,B11100001);   // J
      shiftOut(dataPin,clockPin,MSBFIRST,B00001000);   // adresa 4. segmentovky
      digitalWrite(latchPin,HIGH);
      delay(5);
}