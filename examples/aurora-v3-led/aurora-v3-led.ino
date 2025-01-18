#define LED_AURORA_V3 2

void setup() {
  // initialize digital pin GPIO2 as an output.
  pinMode(LED_AURORA_V3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_AURORA_V3, HIGH); // turn the LED on
  delay(500);             // wait for 500 milliseconds
  digitalWrite(LED_AURORA_V3, LOW);  // turn the LED off
  delay(500);             // wait for 500 milliseconds
}