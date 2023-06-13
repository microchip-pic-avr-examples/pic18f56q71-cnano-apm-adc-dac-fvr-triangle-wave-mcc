/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA1 aliases
#define IO_RA1_TRIS                 TRISAbits.TRISA1
#define IO_RA1_LAT                  LATAbits.LATA1
#define IO_RA1_PORT                 PORTAbits.RA1
#define IO_RA1_WPU                  WPUAbits.WPUA1
#define IO_RA1_OD                   ODCONAbits.ODCA1
#define IO_RA1_ANS                  ANSELAbits.ANSELA1
#define IO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_RA1_GetValue()           PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_RA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_RA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_RA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define IO_RA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define IO_RA1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define IO_RA1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 aliases
#define IO_RA2_TRIS                 TRISAbits.TRISA2
#define IO_RA2_LAT                  LATAbits.LATA2
#define IO_RA2_PORT                 PORTAbits.RA2
#define IO_RA2_WPU                  WPUAbits.WPUA2
#define IO_RA2_OD                   ODCONAbits.ODCA2
#define IO_RA2_ANS                  ANSELAbits.ANSELA2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_RA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define IO_RA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define IO_RA2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define IO_RA2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA3 aliases
#define FVR1Status_TRIS                 TRISAbits.TRISA3
#define FVR1Status_LAT                  LATAbits.LATA3
#define FVR1Status_PORT                 PORTAbits.RA3
#define FVR1Status_WPU                  WPUAbits.WPUA3
#define FVR1Status_OD                   ODCONAbits.ODCA3
#define FVR1Status_ANS                  ANSELAbits.ANSELA3
#define FVR1Status_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define FVR1Status_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define FVR1Status_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define FVR1Status_GetValue()           PORTAbits.RA3
#define FVR1Status_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define FVR1Status_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define FVR1Status_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define FVR1Status_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define FVR1Status_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define FVR1Status_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define FVR1Status_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define FVR1Status_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set RA4 aliases
#define FVR2Status_TRIS                 TRISAbits.TRISA4
#define FVR2Status_LAT                  LATAbits.LATA4
#define FVR2Status_PORT                 PORTAbits.RA4
#define FVR2Status_WPU                  WPUAbits.WPUA4
#define FVR2Status_OD                   ODCONAbits.ODCA4
#define FVR2Status_ANS                  ANSELAbits.ANSELA4
#define FVR2Status_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define FVR2Status_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define FVR2Status_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define FVR2Status_GetValue()           PORTAbits.RA4
#define FVR2Status_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define FVR2Status_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define FVR2Status_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define FVR2Status_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define FVR2Status_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define FVR2Status_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define FVR2Status_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define FVR2Status_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RB0 aliases
#define ADCDStatus_TRIS                 TRISBbits.TRISB0
#define ADCDStatus_LAT                  LATBbits.LATB0
#define ADCDStatus_PORT                 PORTBbits.RB0
#define ADCDStatus_WPU                  WPUBbits.WPUB0
#define ADCDStatus_OD                   ODCONBbits.ODCB0
#define ADCDStatus_ANS                  ANSELBbits.ANSELB0
#define ADCDStatus_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define ADCDStatus_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define ADCDStatus_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define ADCDStatus_GetValue()           PORTBbits.RB0
#define ADCDStatus_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define ADCDStatus_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define ADCDStatus_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define ADCDStatus_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define ADCDStatus_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define ADCDStatus_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define ADCDStatus_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define ADCDStatus_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 aliases
#define ADCAStatus_TRIS                 TRISBbits.TRISB1
#define ADCAStatus_LAT                  LATBbits.LATB1
#define ADCAStatus_PORT                 PORTBbits.RB1
#define ADCAStatus_WPU                  WPUBbits.WPUB1
#define ADCAStatus_OD                   ODCONBbits.ODCB1
#define ADCAStatus_ANS                  ANSELBbits.ANSELB1
#define ADCAStatus_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define ADCAStatus_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define ADCAStatus_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define ADCAStatus_GetValue()           PORTBbits.RB1
#define ADCAStatus_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define ADCAStatus_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define ADCAStatus_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define ADCAStatus_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define ADCAStatus_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define ADCAStatus_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define ADCAStatus_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define ADCAStatus_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 aliases
#define DAC1Status_TRIS                 TRISBbits.TRISB2
#define DAC1Status_LAT                  LATBbits.LATB2
#define DAC1Status_PORT                 PORTBbits.RB2
#define DAC1Status_WPU                  WPUBbits.WPUB2
#define DAC1Status_OD                   ODCONBbits.ODCB2
#define DAC1Status_ANS                  ANSELBbits.ANSELB2
#define DAC1Status_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define DAC1Status_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define DAC1Status_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define DAC1Status_GetValue()           PORTBbits.RB2
#define DAC1Status_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define DAC1Status_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define DAC1Status_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define DAC1Status_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define DAC1Status_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define DAC1Status_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define DAC1Status_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define DAC1Status_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 aliases
#define APMStatus_TRIS                 TRISBbits.TRISB3
#define APMStatus_LAT                  LATBbits.LATB3
#define APMStatus_PORT                 PORTBbits.RB3
#define APMStatus_WPU                  WPUBbits.WPUB3
#define APMStatus_OD                   ODCONBbits.ODCB3
#define APMStatus_ANS                  ANSELBbits.ANSELB3
#define APMStatus_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define APMStatus_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define APMStatus_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define APMStatus_GetValue()           PORTBbits.RB3
#define APMStatus_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define APMStatus_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define APMStatus_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define APMStatus_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define APMStatus_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define APMStatus_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define APMStatus_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define APMStatus_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/