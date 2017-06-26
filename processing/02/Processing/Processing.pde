import processing.serial.*;
 
Serial myPort;  // Create object from Serial class
String val;     // Data received from the serial port
 
 
 
void setup() 
{
  size(300, 300);
 
  // Open the port (usually change to [0] or [1]
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);
 
}
 
void draw()
{
  if (myPort.available() > 0) {
    val = trim(myPort.readStringUntil(ENTER));
    if (val != null) {
      println(val);
    }
  }
 
  if ("High".equals(val)) {
    fill(255,200,200);
    ellipse(150,150,150,150);
  }
  if ("Low".equals(val)) {
    fill(155,100,100);
    ellipse(150,150,150,150);
  }
 
}