// the setup function runs once when you press reset or power the board

int ledPin = 5;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for a second

  
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second

  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200); 

   digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second

  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200); 

  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);  
   
}
