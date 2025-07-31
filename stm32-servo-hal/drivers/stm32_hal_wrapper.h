#ifndef STM32_HAL_WRAPPER_H
#define STM32_HAL_WRAPPER_H

#include "stm32f4xx_hal.h" // Adjust according to your STM32 series

void HAL_InitWrapper(void);
void HAL_DelayWrapper(uint32_t delay);
void HAL_GPIO_WritePinWrapper(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
GPIO_PinState HAL_GPIO_ReadPinWrapper(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void HAL_TIM_PWM_StartWrapper(TIM_HandleTypeDef* htim, uint32_t Channel);
void HAL_TIM_PWM_StopWrapper(TIM_HandleTypeDef* htim, uint32_t Channel);
void HAL_TIM_PWM_SetCompareWrapper(TIM_HandleTypeDef* htim, uint32_t Channel, uint32_t Compare);

#endif // STM32_HAL_WRAPPER_H