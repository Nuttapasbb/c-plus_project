int LED[4] = {17 , 2 , 15 , 12};

void setup() {

 for(int a =0 ; a <= 3 ; a++) {
  pinMode(LED[a],OUTPUT);
 }

}

void loop() {

  for ( int i = 3 ; i>=0 ; i--) {
    digitalWrite(LED[i],HIGH);
    delay(100);
    digitalWrite(LED[i],LOW);
    delay(100);
  } 

}
