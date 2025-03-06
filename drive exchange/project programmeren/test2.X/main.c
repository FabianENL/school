#include "mcc_generated_files/system/system.h"

#include <xc.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define UART_BUFFER_SIZE 20  // Buffer for receiving float

void UART2_ReadString(char *buffer, uint8_t maxLen) {
    uint8_t i = 0;
    volatile char c;
    
    while (i < maxLen - 1) {
        while (!USART2_IsRxReady());  // Wait for data
        
        // Debugging: Check if data is available
        c = USART2_Read();
        
        if (c == '\n') break;  // Stop at newline
        buffer[i++] = c;
    }
    buffer[i] = '\0';  // Null-terminate string
}

volatile float test;

float UART2_ReadFloat(void) {
    char buffer[UART_BUFFER_SIZE];
    UART2_ReadString(buffer, UART_BUFFER_SIZE);

    // Debugging: Check if the string received is correct
    printf("Received string: %s\n", buffer);  // Print the received string

    test = strtof(buffer, NULL);  // Convert string to float
    return test;
}

volatile float receivedValue;

int main(void) {
    SYSTEM_Initialize();  // MCC initialization

    while (1) {
        receivedValue = UART2_ReadFloat();
    }
}
