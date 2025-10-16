void setup() // essa função roda uma única vez, quando o arduino é ligado
{
  pinMode(LED_BUILTIN, OUTPUT); // aqui o led vai ser usado como uma saída eletrica
}

void loop() // essa parte roda o tempo todo, em um ciclo infinito
{
  digitalWrite(LED_BUILTIN, HIGH); // liga o led
  delay(1000); // espera um segundo
  digitalWrite(LED_BUILTIN, LOW); // desliga o led
  delay(1000); // espera mais um segundo
  // depois disso o loop recomeça, fazendo a luz acender e apagar

}
