int pinoSensor = 7;

void setup() {
  Serial.begin(9600);

  pinMode(pinoSensor, INPUT);
}

void loop() {
  int leitura = digitalRead(pinoSensor);
  Serial.println(leitura);
  delay(100);
}
