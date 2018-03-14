//Urgent: your roof is leaking onto your bed - please come take care of it immediately.

int ledPin = 5;// select the pin for the LED    

void setup() {
// declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for given milliseconds
  delay(500);
  
  // turn the ledPin off
  digitalWrite(ledPin, LOW);
  // stop the program for given milliseconds
  delay(250);
}
