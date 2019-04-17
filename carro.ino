
int ena = 4;
int IN1 = 10;
int IN2 = 6;
int enb = 7;
int IN3 = 8;
int IN4 = 9;
int ledEsq = 12;
int ledDir = 3;

char comando;

void setup() {
  Serial.begin(9600);
  pinMode(ledEsq, OUTPUT);
  pinMode(ledDir, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ena, OUTPUT);
}

void loop() {
if(Serial.available()){
    comando = Serial.read();
    if (comando == 'F') {
      Serial.println(comando);
      frente();
    }
    else if (comando == 'B') {
      Serial.println("Ré");
      tras();
    }
    else if (comando == 'L') {
      esquerda();
      Serial.println("esquerda");
    }
    else if (comando == 'R') {
      direita();
      Serial.println("direita");
    } else if (comando == 'S') {
      parado();
      Serial.println("freio");
    }

  }
}
void frente() {
  digitalWrite(ledEsq, LOW);
  digitalWrite(ledDir,LOW);
  digitalWrite(ena, HIGH);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(enb, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void tras() {

    digitalWrite(ledEsq, LOW);
  digitalWrite(ledDir,LOW);
  digitalWrite(ena, HIGH);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(enb, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void esquerda() {
  
  digitalWrite(ledEsq, HIGH);
  digitalWrite(ledDir,LOW);
    
    
   digitalWrite(ena, HIGH);
  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(enb, HIGH);
  
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void direita() {
  digitalWrite(ledEsq, LOW);
  digitalWrite(ledDir,HIGH);
   digitalWrite(ena, HIGH);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(enb, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void parado() {
  
   digitalWrite(ledEsq, HIGH);
  digitalWrite(ledDir,HIGH);
  digitalWrite(ena, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(enb, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
