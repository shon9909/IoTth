int trig=13;
int echo=12;
int tiempo;
int distancia;
int azul=7;
int blanco=6;
int verde=5;

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


  if (distancia<20)
  {

  }
  if ((distancia>=20) && (distancia<50))
  {
  }
  if(distancia>=50)
  {
  }

}
