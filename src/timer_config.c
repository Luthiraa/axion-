#include "timer_config.h"
#include "stm32f4xx_hal.h" // Adjust according to your STM32 series

void Timer_Config(void) {
    // Timer handle declaration
    TIM_HandleTypeDef htim;

    // Timer base configuration
    htim.Instance = TIM2; // Use the appropriate timer instance
    htim.Init.Prescaler = 84 - 1; // Assuming 84 MHz clock, adjust as needed
    htim.Init.CounterMode = TIM_COUNTERMODE_UP;
    htim.Init.Period = 20000 - 1; // 20 ms period for 50 Hz PWM
    htim.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    htim.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;

    // Initialize the timer
    if (HAL_TIM_Base_Init(&htim) != HAL_OK) {
        // Initialization Error
        while (1);
    }

    // Start the timer
    if (HAL_TIM_Base_Start(&htim) != HAL_OK) {
        // Starting Error
        while (1);
    }
}