void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);   //モーター01
  pinMode(3, OUTPUT);   //モーター02
  pinMode(4, OUTPUT);   //モーター03
  pinMode(9, INPUT);    //ボタン02
  pinMode(5, OUTPUT);   //LED01
  pinMode(6, OUTPUT);   //LED02
  pinMode(7, OUTPUT);   //LED03
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(9) == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(5, HIGH);
    delay(3000);
    digitalWrite(2 , LOW);
    digitalWrite(5 , LOW);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    delay(30000);
    digitalWrite(3 , LOW);
    digitalWrite(6 , LOW);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    delay(3000);
    digitalWrite(4 , LOW);
    digitalWrite(7 , LOW);
  }
  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5 , LOW);
    digitalWrite(6 , LOW);
    digitalWrite(7 , LOW);
  }
}
