#include <SPI.h>

void setup() {
  pinMode(13, OUTPUT);    // SCK é D13 no Arduino Nano/Uno
  SPI.begin();            // Inicializa SPI (configura MOSI/MISO/SCK/SS)
  SPI.setClockDivider(SPI_CLOCK_DIV32); // 16MHz / 32 = 500 kHz
  // Opcional: garantir MSB first e modo 0 (padrão da biblioteca)
}

void loop() {
  // Transmite bytes continuamente para manter o clock SCK ativo.
  // O valor do byte não altera a frequência do SCK, apenas os níveis de MOSI.
  while (1) {
    SPDR = 0xFF;                         // dispara transmissão
    while (!(SPSR & _BV(SPIF))) { }     // aguarda fim da transmissão
    // sem delay entre transmissões para minimizar gaps no SCK
  }
}
