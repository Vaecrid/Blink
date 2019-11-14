void setup() {

  pinMode (2, OUTPUT);
  //El pin digital 2 sera la sortida

}

void loop() {

  digitalWrite (2, HIGH);
  //Encen el pin 2
  delay (500);
  //Espera 500 miisegons
  digitalWrite (2, LOW);
  //Apaga el pin 2
  delay (500);
  //Espera 500 milisegons
}
