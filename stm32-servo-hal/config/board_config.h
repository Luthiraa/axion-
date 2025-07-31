#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

// Define the PWM output pin for the servo
#define SERVO_PWM_PIN GPIO_PIN_1
#define SERVO_PWM_PORT GPIOA

// Define the timer used for PWM generation
#define SERVO_PWM_TIMER TIM2

// Define the timer channel for the PWM output
#define SERVO_PWM_CHANNEL TIM_CHANNEL_1

// Define the frequency for the PWM signal (in Hz)
#define SERVO_PWM_FREQUENCY 50

// Define the minimum and maximum pulse width (in microseconds)
#define SERVO_MIN_PULSE_WIDTH 1000
#define SERVO_MAX_PULSE_WIDTH 2000

#endif // BOARD_CONFIG_H