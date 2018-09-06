int pwmOut = 3;  // The output to the transistor that drives the motor

int voltages[7] {
  0,    // about zero volts
  51,   // about 1 volt
  102,  // about 2 volts
  128,  // about 2.5 volts
  153,  // about 3.0 volts
  204,  // about 4.0 volts
  255   // about 5.0 volts
};

int voltage = 0;
void setup() {
  Serial.begin(9600);
  pinMode(pwmOut, OUTPUT);
}


void loop() {
  /*
    if (voltage >  255) {
      voltage = 0;
    } else {
      Serial.println(voltage);
      analogWrite(pwmOut, voltage);
      delay(1);
      voltage += 1;
    }
  */

  for (int i = 0; i < 7; i++) {
    Serial.println(voltages[i]);
    analogWrite(pwmOut, voltages[i]);
    delay(3000);
  }
  /*
    for (int i = 50; i <= 255; i++) {
    Serial.println(i);
    analogWrite(pwmOut, i);
    delay(1000);
    }
  */
}

