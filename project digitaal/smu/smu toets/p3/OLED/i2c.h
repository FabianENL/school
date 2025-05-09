/*
    \file   i2c.h

    \brief  TWI I2C Driver - header file

    (c) 2020 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip software and any
    derivatives exclusively with Microchip products. It is your responsibility to comply with third-party
    license terms applicable to your use of third-party software (including open source software) that
    may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS
    FOR A PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS
    SOFTWARE.
*/

#ifndef I2C_H_INCLUDED
#define	I2C_H_INCLUDED

#define F_CPU                           (16000000UL)         /* using 16 MHz crystal */

#include <avr/io.h>

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

void    I2C_0_Init(void);
uint8_t I2C_0_SendData(uint8_t address, const uint8_t Control, uint8_t *pData, uint8_t len); // returns how many bytes have been sent, -1 means NACK at address
uint8_t I2C_0_GetData(uint8_t address, uint8_t *pData, uint8_t len); // returns how many bytes have been received, -1 means NACK at address
void    I2C_0_EndSession(void);

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* I2C_H_INCLUDED */

