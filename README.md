# Seminář Arduino

- [Arduino IDE](https://github.com/standav/arduino/blob/master/docs/01.md)
- [Hello World!](https://github.com/standav/arduino/blob/master/docs/02.md)

## Zapojení Arduino UNO
![Arduino UNO](https://www.arduino.cc/en/uploads/Tutorial/ArduinoUNO_bb.png)

## Zapojení Funduino (Experimental shield)
![Funduino](http://kabinet.fyzika.net/dilna/ARDUINO/img/multi-shield.png)

1. Konektor pro modul Bluetooth APC220 (nebo Voice Recognification Module)

Popis (směrem shora)

* 7 – nepoužito
* 6 – nepoužito
* 5 – pin 0
* 4 – pin 1
* 3 – nepoužito
* 2 – napětí +5 V
* 1 – GND

2. Čtveřice LED zobrazovačů řízených obvodem 74HC595 (jeden pro všechny čtyři zobrazovače)

Ovládaní zobrazovačů:
* Zápis do Latch – pin 4 (start zápisu LOW, konec HIGH)
* Hodinový pulz (takt) – pin 7
* Sériová data – pin 8 – zápis 2× 8 bitů (2× Byte)

(první Byte – data rozsvícených segmentů – rozsvícení LOW, vypnutí HIGH)
