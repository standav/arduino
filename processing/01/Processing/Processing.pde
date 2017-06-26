import processing.serial.*;

Serial myPort;  // objekt z tridy Serial

void setup() 
{
  size(200,200);   // canvas 200 x 200 pixel
  String portName = Serial.list()[0]; 
  myPort = new Serial(this, portName, 9600);
}

void draw() 
{
  if (mousePressed == true) 
  {                   
    myPort.write('1');
    println("1");   
  } 
  else 
  { 
    myPort.write('0');
  }   
}