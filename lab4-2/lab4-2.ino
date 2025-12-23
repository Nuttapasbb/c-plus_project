int ldr = 36;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int x = analogRead(ldr);
  Serial.print("analog => ");
  Serial.println(x);
  delay(1000);
  int y = map(x ,0 ,950 ,1 ,4);
  Serial.print("fix => ");
  Serial.println(y);
}
