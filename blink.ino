int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 5; 
int ledPin2 = 6; 
int ledPin3 = 9;   
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin); //sensorvalue (0,1023)
  Serial.println(sensorValue);
 
  // turn the ledPin on:   
  if (sensorValue>257.5)
  
  // make the first ledPin blink: 
  digitalWrite(ledPin, HIGH);
  delay(sensorValue);
  digitalWrite(ledPin, LOW);
  delay(sensorValue);

  if (sensorValue>515)
  digitalWrite(ledPin2, HIGH); 

  if (sensorValue>772.5)
  digitalWrite(ledPin3, HIGH); 

  // turn the ledPin off:
  if(sensorValue<257.5)digitalWrite(ledPin, LOW);
  if(sensorValue<515)digitalWrite(ledPin2, LOW);
  if(sensorValue<772.5)digitalWrite(ledPin3, LOW);
}
