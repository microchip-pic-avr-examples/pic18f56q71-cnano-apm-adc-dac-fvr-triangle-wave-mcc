 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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
#include "mcc_generated_files/system/system.h"
#include <math.h>

#define TRIANGLE_PERIOD_STEPS       (100UL)     /* number of samples for a triangle wave period */
#define TRIANGLE_MAX_AMPLITUDE      (511UL)     /* LSB steps */
#define DC_OFFSET                   (512UL)     /* LSB steps */

/* Buffer to store the triangle wave samples */
uint16_t triangleWave[TRIANGLE_PERIOD_STEPS];
uint16_t adcResult = 0;
uint8_t triangleIndex = 0;

static void triangleWaveInit(uint16_t amplitude)
{
    uint8_t i;
    for(i = 0; i < TRIANGLE_PERIOD_STEPS; i++)
    {
        triangleWave[i] = DC_OFFSET + (uint16_t)((2 * amplitude / M_PI) * asin(sin(2 * M_PI * i / TRIANGLE_PERIOD_STEPS)));
    }
}

void TMR1_Handler(void)
{
    DAC1_SetOutput(triangleWave[triangleIndex++]);
    if(triangleIndex == TRIANGLE_PERIOD_STEPS)
    {
        triangleIndex = 0;
    }
    if(!APM_StatusGet())
    {
       DAC1_SetOutput(DC_OFFSET);
       TMR1_Stop();
    }
}

void ADC_Handler(void)
{
    adcResult = ADC_GetConversionResult();
    triangleWaveInit(adcResult / 8);              /* 4095 / 8 = 511 = TRIANGLE_MAX_AMPLITUDE */
    triangleIndex = 0;
    TMR1_Reload(); 
}

/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    
    ADC_SetADIInterruptHandler(ADC_Handler);
    TMR1_OverflowCallbackRegister(TMR1_Handler);
    DAC1_SetOutput(DC_OFFSET);

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 
    
    // Enable the Global High Interrupts 
    INTERRUPT_GlobalInterruptHighEnable(); 

    // Disable the Global High Interrupts 
    //INTERRUPT_GlobalInterruptHighDisable(); 

    // Enable the Global Low Interrupts 
    INTERRUPT_GlobalInterruptLowEnable(); 

    // Disable the Global Low Interrupts 
    //INTERRUPT_GlobalInterruptLowDisable(); 
    
    while(1)
    {
        switch (APM_StatusGet())
        {
            case 0:
                APMStatus_SetLow();
                FVR1Status_SetLow();
                ADCAStatus_SetLow();
                ADCDStatus_SetLow();
                FVR2Status_SetLow();
                DAC1Status_SetLow();
                break;
            case _APMSTATUSL_FVR1_MASK | _APMSTATUSL_ADCA_MASK:
                APMStatus_SetHigh();
                FVR1Status_SetHigh();
                ADCAStatus_SetHigh();
                break;
            case _APMSTATUSL_FVR1_MASK | _APMSTATUSL_ADCA_MASK | _APMSTATUSL_ADCD_MASK | _APMSTATUSL_FVR2_MASK | (uint16_t)_APMSTATUSH_DAC1_MASK << 8:
                ADCDStatus_SetHigh();
                FVR2Status_SetHigh();
                DAC1Status_SetHigh();
                break;
            case _APMSTATUSL_FVR2_MASK | (uint16_t)_APMSTATUSH_DAC1_MASK << 8:
                FVR1Status_SetLow();
                ADCAStatus_SetLow();
                ADCDStatus_SetLow();
                break;
        }
    }  
}