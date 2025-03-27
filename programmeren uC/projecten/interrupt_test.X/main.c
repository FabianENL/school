#include "mcc_generated_files/spi/spi0.h"
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/pins.h"
#include <util/delay.h>

void LCD_send_command(uint8_t cmd) {
    L_CS_SetLow();    // Zet Chip Select laag om te communiceren met de LCD
    SPI0_ByteExchange(cmd);  // Stuur het commando via de SPI module
    L_CS_SetHigh();   // Zet Chip Select hoog
}

void LCD_send_data(uint8_t data) {
    L_CS_SetLow();    // Zet Chip Select laag
    SPI0_ByteExchange(data); // Stuur de data via de SPI module
    L_CS_SetHigh();   // Zet Chip Select hoog
}

void LCD_init() {
    // Reset het scherm (softwarematig via commando)
    LCD_send_command(0x01);  // Commando voor reset
    _delay_ms(150);         // Wacht 150ms voor reset

    // Sleep mode exit
    LCD_send_command(0x11);  // Sleep out commando
    _delay_ms(120);         // Wacht 120ms

    // Zet pixelformaat naar RGB565
    LCD_send_command(0x3A);  // COLMOD (Set color mode)
    LCD_send_data(0x55);     // RGB565 format

    // Zet geheugen- en oriëntatie-instellingen
    LCD_send_command(0x36);  // MADCTL (Memory Access Control)
    LCD_send_data(0x48);     // Normale oriëntatie

    // Zet de display aan
    LCD_send_command(0x29);  // Display on
    _delay_ms(100);         // Wacht even voor stabiele werking
}

void LCD_write_pixel(uint16_t x, uint16_t y, uint16_t color) {
    // Commando voor memory write
    LCD_send_command(0x2C);  // Dit is het commando om naar het scherm te schrijven

    // Stuur de x- en y-coördinaten voor de pixel (zie het schermadres)
    LCD_send_command(0x2A);  // Commando voor kolominstellingen (X-as)
    LCD_send_data((x >> 8) & 0xFF);  // Hoogste byte van x
    LCD_send_data(x & 0xFF);         // Laagste byte van x
    LCD_send_command(0x2B);  // Commando voor rijinstellingen (Y-as)
    LCD_send_data((y >> 8) & 0xFF);  // Hoogste byte van y
    LCD_send_data(y & 0xFF);         // Laagste byte van y

    // Schrijf de kleur
    LCD_send_data((color >> 8) & 0xFF);  // Stuur het hogere byte van de kleur
    LCD_send_data(color & 0xFF);         // Stuur het lagere byte van de kleur
}

void main(void) {
    // Initialize the device
    SYSTEM_Initialize();
    SPI0_Open(SPI0_DEFAULT);

    // Initieer de LCD
    LCD_init();

    // Schrijf een pixel met kleur naar de locatie (x = 100, y = 100)
    LCD_write_pixel(100, 100, 0x07E0);  // Groene pixel op (100, 100)

    while (1) {
        // Andere code
    }

    SPI0_Close();
}
