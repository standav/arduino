# Seminář Arduino

- [Arduino IDE](https://github.com/standav/arduino/blob/master/docs/01.md)
- [Hello World!](https://github.com/standav/arduino/blob/master/docs/02.md)

## Zapojení Arduino UNO
![Arduino UNO](https://www.arduino.cc/en/uploads/Tutorial/ArduinoUNO_bb.png)

## Zapojení Funduino (Experimental shield)
![Funduino](http://kabinet.fyzika.net/dilna/ARDUINO/img/multi-shield.png)

### 1. Konektor pro modul Bluetooth APC220 (nebo Voice Recognification Module)

Popis (směrem shora)

* 7 – nepoužito
* 6 – nepoužito
* 5 – pin 0
* 4 – pin 1
* 3 – nepoužito
* 2 – napětí +5 V
* 1 – GND

### 2. Čtveřice LED zobrazovačů řízených obvodem 74HC595 (jeden pro všechny čtyři zobrazovače)

Ovládaní zobrazovačů:
* Zápis do Latch – pin 4 (start zápisu LOW, konec HIGH)
* Hodinový pulz (takt) – pin 7
* Sériová data – pin 8 – zápis 2× 8 bitů (2× Byte)

(první Byte – data rozsvícených segmentů – rozsvícení LOW, vypnutí HIGH)

### 3. Reset

Resetuje modul Arduino (nikoliv Multi-function Shield)

### 4. Signalizační LED (rozsvícení LOW, vypnutí HIGH)

Popis LED (směrem shora)
* LED D1 – pin 13 (PWM)
* LED D2 – pin 12
* LED D3 – pin 11 (PWM)
* LED D4 – pin 10 (PWM)

### 5. Piezo-bzučák pasivní – připojen k pinu 3 (PWM)

### 6. Propojka (jumper)

Připojuje PullUp rezistor 10 kΩ na vstup A4 (vyvedeno na střední pin konektoru 7b)

### 7. Konektor pro připojení čidla IR (7a) a tepelných čidel Dallas 18B20 a LM35 (7b)

Popis 7a (zleva)
* 1 – pin 2
* 2 – GND
* 3 – napětí +5 V

Popis 7b (zleva)
* 1 – GND
* 2 – pin A4
* 3 – napětí +5 V

### 8. Odporový trimr 

Trimr 10 kΩ mezi referenční napětí (+5 V) a GND, jezdec vyveden na pin A0

### 9. Propojka (jumper)

Připojuje PullUp rezistory (10 kΩ) k tlačítkům S1, S2 a S3 (viz 11)

### 10. Konektor pro připojení čidel – např. sonarové čidlo HCSR04, servo…

Popis (zleva)
* První sloupec – GND (všechny 4 piny)
* Druhý sloupec – napětí +5 V (všechny 4 piny)
* Třetí sloupec (shora) – pin 5 (PWM), pin 6 (PWM), pin 9 (PWM) a pin A5

### 11. Vstupní tlačítka

- připojena k pinům A1-3 (stisknutí – hodnota LOW)
- možnost připojení PullUp rezistorů k napětí +5 V (propojka 9)

Popis (zleva)
* Tlačítko S1 – pin A1
* Tlačítko S2 – pin A2
* Tlačítko S3 – pin A3
