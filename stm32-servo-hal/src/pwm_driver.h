#ifndef PWM_DRIVER_H
#define PWM_DRIVER_H

#include "servo_types.h"

// Initializes the PWM driver with the specified frequency
void pwm_driver_init(uint32_t frequency);

// Sets the PWM duty cycle for a specific servo
void pwm_set_duty_cycle(uint8_t servo_id, uint32_t duty_cycle);

// Starts the PWM signal generation for the specified servo
void pwm_start(uint8_t servo_id);

// Stops the PWM signal generation for the specified servo
void pwm_stop(uint8_t servo_id);

#endif // PWM_DRIVER_H