int PWM_PIN   = 3;  // The output that drives the LED color

int voltages[7] {
  0,    // about zero volts
  51,   // about 1 volt
  102,  // about 2 volts
  128,  // about 2.5 volts
  153,  // about 3.0 volts
  204,  // about 4.0 volts
  255   // about 5.0 volts
};

void setup() {
  Serial.begin(9600);
  pinMode(PWM_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < 7; i++) {
    Serial.println(voltages[i]);
    analogWrite(PWM_PIN, voltages[i]);
    delay(3000);
  }
}

