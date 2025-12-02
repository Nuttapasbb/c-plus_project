int buzzer = 13 ;
int LDR = 36 ;
int valueLDR = 0 ;
void setup() {
  pinMode(buzzer,OUTPUT);
  pinMode(LDR,INPUT);
  Serial.begin(9600);
}

void loop() {
  valueLDR = analogRead(LDR);
  Serial.println(valueLDR);

  if(valueLDR > 700) {
  tone(buzzer,500,500);
  delay(100);
  }

}
