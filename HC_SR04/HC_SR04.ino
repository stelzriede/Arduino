
// pins 
const int trigPin = 11;
const int echoPin = 10;

// variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
// Clear trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
// Set trigger on HIGH for 10 ms
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
// Read echo, return TOF in ms
  duration = pulseIn(echoPin, HIGH);
  
// SPeed of Sound Distance
  distance= duration*0.034/2;
  
// Print distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(500);
}
