void setup(){
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
}

void loop(){
  for(int i=0; i<=255; i++) {
    delay(10);
    analogWrite(3, i);
  }
  for(int i=255; i>=0; i--) {
    delay(10);
    analogWrite(3, i);
  }
}