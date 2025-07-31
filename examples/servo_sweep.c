#include "servo_hal.h"
#include "timer_config.h"
#include "pwm_driver.h"
#include <stdio.h>

#define SWEEP_DELAY 100 // Delay in milliseconds

void servo_sweep(void) {
    int angle;
    int min_angle = 0;
    int max_angle = 180;

    // Initialize the servo
    servo_init();

    while (1) {
        // Sweep from min_angle to max_angle
        for (angle = min_angle; angle <= max_angle; angle++) {
            servo_set_position(angle);
            delay(SWEEP_DELAY);
        }

        // Sweep back from max_angle to min_angle
        for (angle = max_angle; angle >= min_angle; angle--) {
            servo_set_position(angle);
            delay(SWEEP_DELAY);
        }
    }
}

int main(void) {
    // Configure the timer for PWM
    timer_config();

    // Start the servo sweep
    servo_sweep();

    return 0;
}