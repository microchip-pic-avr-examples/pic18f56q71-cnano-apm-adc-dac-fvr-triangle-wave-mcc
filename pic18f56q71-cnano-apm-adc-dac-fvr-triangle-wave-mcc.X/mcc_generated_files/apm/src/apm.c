/**
 * APM Generated Driver File
 * 
 * @file apm.c
 * 
 * @ingroup apm
 * 
 * @brief This file contains the API implementations for the  APM module.
 *
 * @version APM Driver Version 1.0.1
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

/**
  Section: Included Files
*/

#include <xc.h>
#include "../apm.h"

/**
  Section: APM APIs
*/

void APM_Initialize(void)
{
    //CLK LFINTOSC; 
    APMCLK = 0x1;
    
    //PRE 5; 
    APMPREL = 0x5; 

    //PRE 0; 
    APMPREH = 0x0; 

    //PER 48; 
    APMPERL = 0x30; 

    //PER 242; 
    APMPERH = 0xF2; 

    //START1 233; 
    APMSTART1L = 0xE9; 

    //START1 100; 
    APMSTART1H = 0x64; 

    //TEMP disabled; ADCA enabled; ADCD disabled; FVR2 disabled; FVR1 enabled; BG disabled; 
    APMPERS1L = 0x48;

    //ZCD disabled; CMP2 disabled; CMP1 disabled; DAC3 disabled; DAC2 disabled; DAC1 disabled; OPA2 disabled; OPA1 disabled; 
    APMPERS1H = 0x0;

    //END1 48; 
    APMEND1L = 0x30;

    //END1 242; 
    APMEND1H = 0xF2;

    //END1 0; 
    APMEND1U = 0x0;

    //TEMP disabled; ADCA enabled; ADCD enabled; FVR2 disabled; FVR1 enabled; BG disabled; 
    APMPERE1L = 0x68;

    //ZCD disabled; CMP2 disabled; CMP1 disabled; DAC3 disabled; DAC2 disabled; DAC1 disabled; OPA2 disabled; OPA1 disabled; 
    APMPERE1H = 0x0;

    //START2 24; 
    APMSTART2L = 0x18; 

    //START2 121; 
    APMSTART2H = 0x79;

    //START2 0; 
    APMSTART2U = 0x0; 

     //TEMP disabled; ADCA disabled; ADCD enabled; FVR2 enabled; FVR1 disabled; BG disabled; 
    APMPERS2L = 0x30;

    //ZCD disabled; CMP2 disabled; CMP1 disabled; DAC3 disabled; DAC2 disabled; DAC1 enabled; OPA2 disabled; OPA1 disabled; 
    APMPERS2H = 0x4;

    //END2 120; 
    APMEND2L = 0x78;

    //END2 93; 
    APMEND2H = 0x5D;

    //END2 2; 
    APMEND2U = 0x2;

    //TEMP disabled; ADCA disabled; ADCD disabled; FVR2 enabled; FVR1 disabled; BG disabled; 
    APMPERE2L = 0x10;

    //ZCD disabled; CMP2 disabled; CMP1 disabled; DAC3 disabled; DAC2 disabled; DAC1 enabled; OPA2 disabled; OPA1 disabled; 
    APMPERE2H = 0x4;

    //TEMP disabled; ADCA enabled; ADCD enabled; FVR2 enabled; FVR1 enabled; BG disabled; 
    APMSTATUSL = 0x78;

    //ZCD disabled; CMP2 disabled; CMP1 disabled; DAC3 disabled; DAC2 disabled; DAC1 enabled; OPA2 disabled; OPA1 disabled; 
    APMSTATUSH = 0x4;

    //EN enabled; 
    APMCON = 0x80;
    
}

void APM_Start(void)
{
    //Start the APM by setting the EN bit
    APMCONbits.EN = 1;
}

void APM_Stop(void)
{
    //Stop the APM by clearing the EN bit
    APMCONbits.EN = 0;
}

void APM_PrescalerSet(uint16_t prescalerVal)
{
    //Stop the APM by clearing the EN bit
    APMCONbits.EN = 0;

    //Write to the APM Prescaler Register
    APMPREH = (uint8_t)(prescalerVal >> 8);
    APMPREL = (uint8_t)(prescalerVal);
}

void APM_PeriodSet(uint16_t periodVal)
{
    //Stop the APM by clearing the EN bit
    APMCONbits.EN = 0;

    //Write to the APM Period Register
    APMPERH = (uint8_t)(periodVal >> 8);
    APMPERL = (uint8_t)(periodVal);
}

void APM_Start1CountSet(uint16_t Start1Val)
{
    //Stop the APM by clearing the EN bit
    APMCONbits.EN = 0;

    //Write to the APM Start 1 Event Register
    APMSTART1H = (uint8_t)(Start1Val >> 8);
    APMSTART1L = (uint8_t)(Start1Val);
}

void APM_Start2CountSet(uint24_t Start2Val)
{
    //Stop the APM by clearing the EN bit
    APMCONbits.EN = 0;

    //Write to the APM Start 2 Event Register
    APMSTART2U = (uint8_t)(Start2Val >> 16);
    APMSTART2H = (uint8_t)(Start2Val >> 8);
    APMSTART2L = (uint8_t)(Start2Val);
}

void APM_End1CountSet(uint24_t End1Val)
{
    //Stop the APM by clearing the EN bit
    APMCONbits.EN = 0;

    //Write to the APM End 1 Event Register
    APMEND1U = (uint8_t)(End1Val >> 16);
    APMEND1H = (uint8_t)(End1Val >> 8);
    APMEND1L = (uint8_t)(End1Val);
}

void APM_End2CountSet(uint24_t End2Val)
{
    //Stop the APM by clearing the EN bit
    APMCONbits.EN = 0;

    //Write to the APM End 1 Event Register
    APMEND2U = (uint8_t)(End2Val >> 16);
    APMEND2H = (uint8_t)(End2Val >> 8);
    APMEND2L = (uint8_t)(End2Val);
}

uint16_t APM_StatusGet(void)
{
  uint16_t statusVal;
  uint8_t statusValHigh;
  uint8_t statusValLow;

  statusValLow = APMSTATUSL;
  statusValHigh = APMSTATUSH;

  statusVal = ((uint16_t)statusValHigh << 8 | statusValLow);

return statusVal;
}

/**
 End of File
*/