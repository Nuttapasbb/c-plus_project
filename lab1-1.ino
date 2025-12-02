int bt = 17 ;
int wifi = 2 ;
int ntp = 15 ;
int iot = 12 ;

void setup() {
  pinMode(bt,OUTPUT);
  pinMode(iot,OUTPUT);
  pinMode(ntp,OUTPUT);
  pinMode(wifi,OUTPUT);
}

void loop() {
  digitalWrite(bt,LOW);
  delay(100);
  digitalWrite(ntp,HIGH);
  delay(100);
  digitalWrite(wifi,HIGH);
  delay(100);
  digitalWrite(iot,HIGH);
  delay(100);

  digitalWrite(wifi,LOW);
  delay(100);
  digitalWrite(ntp,HIGH);
  delay(100);/
  digitalWrite(bt,HIGH);
  delay(100);
  digitalWrite(iot,HIGH);
  delay(100);


  digitalWrite(ntp,LOW);
  delay(100);
  digitalWrite(bt,HIGH);
  delay(100);
  digitalWrite(wifi,HIGH);
  delay(100);
  digitalWrite(iot,HIGH);
  delay(100);


  digitalWrite(iot,LOW);
  delay(50);
  digitalWrite(ntp,HIGH);
  delay(100);
  digitalWrite(wifi,HIGH);
  delay(100);
  digitalWrite(bt,HIGH);
  delay(100);


}
