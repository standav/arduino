char latchPin = 4;
char clockPin = 7;
char dataPin  = 8; 

unsigned char chars[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};  // definice cisel 0-10
unsigned char digit[] = {0xF1,0xF2,0xF4,0xF8};    // adresy LED zobrazovacu
unsigned char dbuff[] = {0, 0, 0, 0};   // pole odesilanych hodnot na LED
int rT = 0; // pomocna promena

void setup()
{
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT); // nastaveni vystupu pro segmentovku
}

void display()
{
  for(char i = 0; i <= 3; i++) // probene zobrazovace a zobrazi, co je treba
  {
    digitalWrite(latchPin,LOW); // nastavi latch pro zapis
    if(i == 0)
    {
      shiftOut(dataPin, clockPin, MSBFIRST, chars[dbuff[i]]&0x7F); // za prvnim cislem rozsvit i des. tecku
    }
    else
    {
      shiftOut(dataPin, clockPin, MSBFIRST, chars[dbuff[i]]);
    }
    shiftOut(dataPin, clockPin, MSBFIRST, digit[i]);
    digitalWrite(latchPin,HIGH);    
    delay(2);                       
  }
}

void loop()
{
  float vol = analogRead(A0)*(4.97 / 1023);   // nacte dohnotu z A0 a prevede na Volty
  rT = (int)(vol*1000);      // vyrobi 4-ciferne cislo
  dbuff[0]= rT/1000;       // pocet tisicu na 1 zobrazovac
  dbuff[1]= rT%1000/100;   // pocet stovek na 2 zobrazovac
  dbuff[2]= rT%100/10;     // pocet desitek na 3 zobrazovac
  dbuff[3]= rT%10;         // pocet jednotek na 4 zobrazovac

  for(char time = 0; time < 20; time++)  // zapisovanim stejne hodnoty se to zdrzi a pritom neblikaji zobrazovace
  {
    display();
  }
}
