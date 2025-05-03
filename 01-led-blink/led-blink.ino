// C++ code
//
unsigned int redLed = 2;
unsigned int blueLed = 7;
unsigned int greenLed = 4;

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
  	delay(75); // Wait for 75 millisecond(s)
  	digitalWrite(redLed, LOW);
  	delay(75); // Wait for 75 millisecond(s)
  }
  
  for (int i = 0; i <= 10; i++){
    digitalWrite(blueLed, HIGH);
  	delay(75); // Wait for 75 millisecond(s)
  	digitalWrite(blueLed, LOW);
  	delay(75); // Wait for 75 millisecond(s)
  }
  
  for (int i = 0; i <= 15; i++){
    digitalWrite(greenLed, HIGH);
  	delay(75); // Wait for 75 millisecond(s)
  	digitalWrite(greenLed, LOW);
  	delay(75); // Wait for 75 millisecond(s)
  }
}
