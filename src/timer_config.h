#ifndef TIMER_CONFIG_H
#define TIMER_CONFIG_H

#include "stm32f4xx_hal.h" // Adjust the header based on your STM32 series

void Timer_Config(void);
void Start_PWM_Timer(void);
void Stop_PWM_Timer(void);

#endif // TIMER_CONFIG_H