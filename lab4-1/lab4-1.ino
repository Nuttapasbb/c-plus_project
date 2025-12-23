int ldr = 36;
void setup() {
  Serial.println(9600);

}

void loop() {
  int x = analogRead(ldr);
  Serial.print("analog =>");
  Serail.println(x);
  delay(100);

}
