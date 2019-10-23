/*
  Alternate LEDs on NodeMCU

  Alternates two LEDs, once every second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. The on-board LEDs you 
  can control on the NodeMCU are on pins 2 and 16. LED_BUILTIN is set to the 
  correct LED pin independent of which board is used.
  
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  modified 9 Oct 2019
  by Brenden Roland

  This example code is in a public Github repository.
  
*/

// use these to assign the GPIO numbers of our LEDs' pins
#define LED_BUILTIN1 2
#define LED_BUILTIN2 16

// the setup function runs once when you press reset or power the board
void setup() {
  
  // initialize digital pins LED_BUILTIN1 and LED_BUILTIN2 as outputs.
  pinMode(LED_BUILTIN1, OUTPUT);
  pinMode(LED_BUILTIN2, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(LED_BUILTIN1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  
  digitalWrite(LED_BUILTIN1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  
}
