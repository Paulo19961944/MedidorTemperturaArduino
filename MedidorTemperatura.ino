#include <Thermistor.h>               // INCLUSÃO DA BIBLIOTECA
Thermistor temp(2);                   // VARIÁVEL DO TIPO THERMISTOR, INDICANDO O PINO ANALÓGICO (A2) EM QUE O TERMISTOR ESTÁ CONECTADO
unsigned long int tempoAnterior = 0;  // TEMPO ANTERIOR RECEBE 0

void setup() {
  Serial.begin(9600);  // INICIALIZA A SERIAL
  delay(1000);         // INTERVALO DE 1 SEGUNDO
}

void loop() {
  int temperature = temp.getTemp();  // VARIÁVEL DO TIPO INTEIRO QUE RECEBE O VALOR DE TEMPERATURA CALCULADO PELA BIBLIOTECA
  Serial.print("Temperatura: ");     // IMPRIME O TEXTO NO MONITOR SERIAL
  Serial.print(temperature);         // IMPRIME NO MONITOR SERIAL A TEMPERATURA MEDIDA
  Serial.println("ºC");              // IMPRIME O TEXTO NO MONITOR SERIAL

  // Adiciona o Millis para evitar travamento do código
  if (millis() - tempoAnterior >= 1000)
    tempoAnterior = millis();
}
