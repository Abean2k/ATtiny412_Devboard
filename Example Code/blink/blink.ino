//Very simple blink sketch using onboard led, tol test devboard and UDPI pogrammer board. 

// PA3 on ATtiny412 is Aurdiuno Digital Pin 4 
const int LEDPIN = 4;

void setup() {
  // put your setup code here, to run once:
     pinMode(LEDPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(LEDpin, HIGH); // Turn LED ON
    delay(1000); // Wait for 1 second
    digitalWrite(LEDpin, LOW); // Turn LED OFF
    delay(1000); // Wait for 1 second
}
