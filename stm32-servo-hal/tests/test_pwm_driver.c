#include <stdio.h>
#include "pwm_driver.h"

void test_pwm_init() {
    // Test PWM initialization
    int result = pwm_init();
    if (result == 0) {
        printf("PWM initialization successful.\n");
    } else {
        printf("PWM initialization failed.\n");
    }
}

void test_pwm_set_duty_cycle() {
    // Test setting duty cycle
    int result = pwm_set_duty_cycle(50); // Set to 50%
    if (result == 0) {
        printf("Duty cycle set successfully.\n");
    } else {
        printf("Failed to set duty cycle.\n");
    }
}

void test_pwm_start() {
    // Test starting PWM
    pwm_start();
    printf("PWM started.\n");
}

void test_pwm_stop() {
    // Test stopping PWM
    pwm_stop();
    printf("PWM stopped.\n");
}

int main() {
    test_pwm_init();
    test_pwm_set_duty_cycle();
    test_pwm_start();
    test_pwm_stop();
    
    return 0;
}