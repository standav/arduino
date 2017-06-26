import processing.serial.*;

Serial myPort;  // objekt z tridy Serial

String val;
int val_i = 0;

void setup() 
{
  size(160, 480);
  smooth();
  colorMode(HSB, 100);
  String portName = Serial.list()[0]; 
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  background(100);
   
  // draw plot bg
  fill(90);
  noStroke();
  rectMode(CORNERS);
  rect(20, 100, width - 20, height - 100);
  
  rectMode(CORNER); // rect default
  
  if (myPort.available() > 0) {
    val = trim(myPort.readStringUntil(ENTER));
    if (val != null) {
      println(val);
      val_i = int(val);
    }
  }
  
  fill(0);
  rect(20, height - 100, 119, -int((val_i/1024.0)*280));
  
  
}