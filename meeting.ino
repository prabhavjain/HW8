int ledPin = 5;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second

  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second

  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100); 

   digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second

  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300); 

  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(300);  
   
}
