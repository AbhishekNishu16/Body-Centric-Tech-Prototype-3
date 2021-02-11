//Body centric technologies-Prototype 3
//Abhishek Nishu
//Digital body triggered switches
//All examples demonstrate an LED light being triggered by a switch.
//This example code has referenced- http://www.arduino.cc/en/Tutorial/InputPullupSerial


void setup() {
  //start serial connection
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(5, OUTPUT);

}

void loop() {
  int sensorVal = digitalRead(2);
  Serial.println(sensorVal);

  if (sensorVal == HIGH) {
    digitalWrite(5, LOW);
  } else {
    digitalWrite(5, HIGH);
  }
}
