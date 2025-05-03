// C++ code
//
unsigned int redLed = 2;
unsigned int blueLed = 7;
unsigned int greenLed = 4;
unsigned int delayTime = 75

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop()
{
  for (int i=0; i <= 5; i++){
    digitalWrite(redLed, HIGH);
  	delay(delayTime); // Wait for 75 millisecond(s)
  	digitalWrite(redLed, LOW);
  	delay(delayTime); // Wait for 75 millisecond(s)
  }
  
  for (int i = 0; i <= 10; i++){
    digitalWrite(blueLed, HIGH);
  	delay(delayTime); // Wait for 75 millisecond(s)
  	digitalWrite(blueLed, LOW);
  	delay(delayTime); // Wait for 75 millisecond(s)
  }
  
  for (int i = 0; i <= 15; i++){
    digitalWrite(greenLed, HIGH);
  	delay(delayTime); // Wait for 75 millisecond(s)
  	digitalWrite(greenLed, LOW);
  	delay(delayTime); // Wait for 75 millisecond(s)
  }
}
