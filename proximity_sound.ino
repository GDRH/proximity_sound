void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  int valoareCitita=analogRead(A0);

  /*  
   *   aici trebuie editata valoarea citita
   *   1. trebuie sa devina invers proportionala cu distanta
   *   2. trebuie sa corespunda intotdeauna unei frecvente care poate fi auzita
   */
  
  noTone(13);
  tone(13,valoareCitita);
}
