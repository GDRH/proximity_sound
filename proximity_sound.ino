void setup() {
  pinMode(13,OUTPUT);
}
 
void loop() {
  delay(100);
  int valoareCitita=analogRead(A0);
 
  if(valoareCitita<100) {
    noTone(13);
  }
  else {
    tone(13,valoareCitita*8);
  }
}
