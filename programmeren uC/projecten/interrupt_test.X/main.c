#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/spi/spi_interface.h"

// Functie voor het verzenden van commando's naar de LCD
void LCD_send_command(uint8_t cmd) {
    L_CS_SetLow();   // Zet L_CS laag om te communiceren met de LCD
    SPI0_Write(cmd); // Stuur het commando via SPI
    L_CS_SetHigh();  // Zet L_CS hoog om communicatie te beëindigen
}

// Functie voor het verzenden van data naar de LCD
void LCD_send_data(uint8_t data) {
    L_CS_SetLow();   // Zet L_CS laag
    SPI0_Write(data); // Stuur de data via SPI
    L_CS_SetHigh();  // Zet L_CS hoog
}

// LCD-initialisatie
void LCD_init() {
    // LCD reset via software (omdat er geen RST-pin is)
    LCD_send_command(0x01);   // Commando voor reset
    __delay_ms(150);          // Wacht 150ms voor reset

    // Sleep mode exit
    LCD_send_command(0x11);   // Exit sleep mode
    __delay_ms(120);          // Wacht 120ms

    // Zet pixelformaat naar RGB565
    LCD_send_command(0x3A);   // COLMOD (Set pixel format)
    LCD_send_data(0x55);      // RGB565 format

    // Zet geheugen- en oriëntatie instellingen
    LCD_send_command(0x36);   // MADCTL (Memory Access Control)
    LCD_send_data(0x48);      // Normale oriëntatie

    // Zet de display aan
    LCD_send_command(0x29);   // Display on
    __delay_ms(100);          // Wacht even voor stabiele werking
}

void main(void) {
    // Initializeer MCC gegenereerde instellingen
    SYSTEM_Initialize();

    // Initialiseer de LCD
    LCD_init();

    // Je kunt nu data naar het scherm sturen, bijvoorbeeld een kleur
    LCD_send_command(0x2C);  // Commando voor memory write
    LCD_send_data(0xFF);     // Stuur een kleurwaarde (bijv. 0xFFFF voor wit)
    LCD_send_data(0xFF);
    
    while (1) {
        // Je kunt nu verder gaan met andere functionaliteit
    }
}
