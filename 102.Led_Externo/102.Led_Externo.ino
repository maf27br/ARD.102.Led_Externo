//102. Piscar LED Externo
//Padrão, usando loop e delay

int ledPin = 9; //Atribui valor 9 a ledPin, pino digital 9 (cabo vermelho)

void setup(){
  pinMode(ledPin, OUTPUT); //Estabelece pino 9 como saída
}

void loop(){
  digitalWrite (ledPin, HIGH); //liga LED em alto (5V)
  delay(1000);
  digitalWrite(ledPin, LOW); //desliga LED (0V)
  delay(1000);
}