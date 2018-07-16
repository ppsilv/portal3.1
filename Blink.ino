/*
 ESP8266 Blink by Simon Peter
 Blink the blue LED on the ESP-01 module
 This example code is in the public domain
 
 The blue LED on the ESP-01 module is connected to GPIO1 
 (which is also the TXD pin; so we cannot use Serial.print() at the same time)
 
 Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

void setup() {
  pinMode(16, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(2, OUTPUT); 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(16, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(2, LOW);                                   // but actually the LED is on; this is because 
                                    // it is active low on the ESP-01)
  delay(20);                      // Wait for a second
  digitalWrite(16, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(2, HIGH);
  delay(500);                      // Wait for two seconds (to demonstrate the active low LED)
}
