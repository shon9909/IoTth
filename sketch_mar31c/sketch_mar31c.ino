int trig=13;
int echo=12;
int tiempo;
int distancia;
int azul=7;
int blanco=6;
int verde=5;

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(azul,OUTPUT);
  pinMode(blanco,OUTPUT);
  pinMode(verde,OUTPUT);
}

void loop() {
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  tiempo=pulseIn(echo,HIGH);
  distancia=tiempo/58.2;
  delay(500);
  Serial.println(distancia);
  delay(1);

  if (distancia<20)
  {
    digitalWrite(azul,HIGH);
    digitalWrite(blanco, LOW);
    digitalWrite(verde,LOW);
    
  }
  if ((distancia>=20) && (distancia<50))
  {
    digitalWrite(azul,LOW);
    digitalWrite(blanco,HIGH);
    digitalWrite(verde,LOW);
  }
  if(distancia>=50)
  {
    digitalWrite(azul,LOW);
    digitalWrite(blanco,LOW);
    digitalWrite(verde,HIGH);
  }

}
