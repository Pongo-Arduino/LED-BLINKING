//MINDEN JOG FENNTARTVA © 2020 © A MEGÍRT PROGRAMOT ÁRUSÍTANI TILOS
//PongoPongo Arduino
int ki1 = 5;
int ki2 = 6;
int ki3 = 7;
int ki4 = 8;

void setup() {
  pinMode(ki1, OUTPUT);
  pinMode(ki2, OUTPUT);
  pinMode(ki3, OUTPUT);
  pinMode(ki4, OUTPUT);
}

void loop() {

  digitalWrite(ki1, LOW);
  digitalWrite(ki2, LOW);
  digitalWrite(ki3, LOW);
  digitalWrite(ki4, LOW);
  delay(1000);
  
  digitalWrite(ki1, HIGH);
  digitalWrite(ki2, HIGH);
  digitalWrite(ki3, HIGH);
  digitalWrite(ki4, HIGH);
  delay(1000);
}
