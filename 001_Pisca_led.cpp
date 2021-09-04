// Código C++
//
void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  delay(1000); // Aguarda 1000 millisegundos(ms)
  digitalWrite(10, LOW);
  delay(1000); // Aguarda 1000 millisegundos(ms)
}