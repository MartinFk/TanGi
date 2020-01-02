/******************************************************************************
ManipulatorsArdurinoCode.ino
October 1, 2019

Manipulator Ardurino processing code

*Version without handshake*

******************************************************************************/
const int PIN = A0; // Pin connected to voltage divider

const float VCC = 5.00; // Voltage in circuit
const float RESISTOR = 47500.0; // Resistor value

void setup() 
{
  Serial.begin(9600); // Set baudrate
  pinMode(PIN, INPUT);
}

void loop ()
{	
  int ADC = analogRead(PIN); // Read ADC 
  float Voltage = (ADC * VCC) / 1023.0; // Compute voltage and resistance 
  float RESISTANCE = RESISTOR * (Voltage / 1023.0);
  Serial.println(RESISTANCE); // Write in serial port
  
  delay(40);
}
