#include "DHT.h"

#define DHTPIN 2        // Pino digital conectado ao DHT11
#define DHTTYPE DHT11   // Tipo do sensor: DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  // Mensagem inicial opcional
  Serial.println("{\"status\":\"iniciando\"}");
}

void loop() {
  delay(2000);  // DHT11 exige tempo mínimo entre leituras

  float h = dht.readHumidity();
  float t = dht.readTemperature(); // Celsius

  // Verifica falhas
  if (isnan(h) || isnan(t)) {
    Serial.println("{\"erro\":\"Falha ao ler DHT11\"}");
    return;
  }

  // Monta JSON manualmente (mais eficiente que sprintf)
  Serial.print("{\"temperatura\":");
  Serial.print(t, 1);           // 1 casa decimal
  Serial.print(",\"umidade\":");
  Serial.print(h, 1);           // 1 casa decimal
  Serial.println("}");          // fecha JSON e pula linha
}
