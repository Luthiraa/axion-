#include "pwm_driver.h"
#include "timer_config.h"
#include "servo_types.h"

static TIM_HandleTypeDef htim;

void PWM_Init(void) {
    // Configure the timer for PWM
    Timer_Config();
    
    // Initialize the timer handle
    htim.Instance = TIMx; // Replace TIMx with the appropriate timer instance
    htim.Init.Prescaler = PrescalerValue; // Set prescaler value
    htim.Init.CounterMode = TIM_COUNTERMODE_UP;
    htim.Init.Period = PWM_PERIOD; // Set the period for PWM
    htim.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    HAL_TIM_PWM_Init(&htim);
}

void PWM_SetDutyCycle(uint32_t channel, uint32_t dutyCycle) {
    // Set the duty cycle for the specified channel
    __HAL_TIM_SET_COMPARE(&htim, channel, dutyCycle);
}

void PWM_Start(uint32_t channel) {
    // Start PWM signal generation on the specified channel
    HAL_TIM_PWM_Start(&htim, channel);
}

void PWM_Stop(uint32_t channel) {
    // Stop PWM signal generation on the specified channel
    HAL_TIM_PWM_Stop(&htim, channel);
}