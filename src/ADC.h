// ADC.h
// Runs on LM4F120/TM4C123
// Provide functions that initialize ADC0
// Last Modified: 1/14/21 
// Student names: change this to your names or look very silly
// Last modification date: change this to the last modification date or look very silly
#ifndef ADC_H
#define ADC_H
#include <stdint.h>
extern volatile uint8_t SW1, SW2, last;
// ADC initialization function 
// Input: none
// Output: none
// measures from PD2, analog channel 5
void ADC_Init(void);

//------------ADC_In------------
// Busy-wait Analog to digital conversion
// Input: none
// Output: 12-bit result of ADC conversion
// measures from PD2, analog channel 5
uint32_t ADC_In(void);
#endif


// Header files contain the prototypes for public functions 

void SysTick_Init(uint32_t period); // Systick initialization

void Init(void); // Enemy position and speed initialization

void Move(void); // Enemy movement function

void Draw(void); // Draw enemies out function
// this file explains what the module does
void CreateMissile(void); // Draw missiles when fired

void SSD1306_DrawUDec2(int16_t x, int16_t y, uint32_t n, uint16_t color); // Function to output score