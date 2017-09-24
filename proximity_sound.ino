void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  delay(100);
  int valoareCitita=analogRead(A0);
 
Serial.println(valoareCitita,DEC);
 
  if(valoareCitita<100) {
    noTone(13);
  }
  else {
    tone(13,1000);
  }
}
