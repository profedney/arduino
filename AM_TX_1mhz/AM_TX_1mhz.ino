#include <SPI.h>

void setup() {
    pinMode(13, OUTPUT); // D13 como saída
    SPI.begin();         // Inicializa SPI
    SPI.setClockDivider(SPI_CLOCK_DIV8); // Define clock SPI para 16MHz/8 = 2MHz
}

void loop() {
    while (1) {
        SPDR = 0xFF; // Envia byte com todos os bits em HIGH
        asm volatile("nop"); // Pequeno atraso para ajustar a frequência
        SPDR = 0x00; // Envia byte com todos os bits em LOW
        asm volatile("nop");
    }
}
