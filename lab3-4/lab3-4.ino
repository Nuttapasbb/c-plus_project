int LED[4] = {17 , 2 , 15 , 12};

void setup() {
  pinMode(LED[0],OUTPUT);
  pinMode(LED[1],OUTPUT);
  pinMode(LED[2],OUTPUT);
  pinMode(LED[3],OUTPUT);

  //สามารถำทำแบบfor ได้ for(int LED i=1 ; i <= 3 ; i++){
  //                    pinMOde(LED[i],OUTPUT); }

}

void loop() {
  digitalWrite(LED[3],HIGH);
  delay(100);
  digitalWrite(LED[3],LOW);
  delay(100);

}
