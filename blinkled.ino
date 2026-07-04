int pin_LED = 8;
void setup() {
pinMode(pin_LED,OUTPUT);
}

void loop() {
digitalWrite(pin_LED,HIGH);
delay(1000);

digitalWrite(pin_LED,LOW);
delay(400);
}
