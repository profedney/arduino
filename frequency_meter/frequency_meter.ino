// Medição de frequência até ~1 MHz utilizando Timer1 como contador externo
// Sinal deve ser aplicado no pino D5 (T1)

const unsigned long janela_ms = 100;  // janela de medição de 100 ms

void setup() {
  Serial.begin(115200);

  // Configurar Timer1 como contador externo em borda de subida
  TCCR1A = 0;             
  TCCR1B = 0;
  TCCR1B |= (1 << CS12) | (1 << CS11);  
  // Configuração:
  // CS12:1 e CS11:1 -> Clock externo no pino T1 (bordas de subida)
  // ver datasheet ATmega328P

  TCNT1 = 0;  // zera contador
}

void loop() {
  unsigned long inicio = millis();
  unsigned int contador_inicial = TCNT1;

  // Espera até completar janela de medição
  while (millis() - inicio < janela_ms);

  unsigned int contador_final = TCNT1;
  
  // Diferença de contagem
  unsigned long pulsos = (contador_final - contador_inicial);

  // Cálculo da frequência
  double freq = (pulsos * (1000.0 / janela_ms));  

  Serial.print("Frequencia medida: ");
  Serial.print(freq, 1);
  Serial.println(" Hz");
}
