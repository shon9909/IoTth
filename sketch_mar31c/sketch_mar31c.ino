int trig=13;
int echo=12;
int tiempo;
int distancia;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

}

void loop() {
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  tiempo=pulseIn(echo,HIGH);
  distancia=tiempo/58.2;
  delay(500);

}
