#include <stdio.h>
#include "servo_hal.h"

void test_servo_init() {
    Servo servo;
    int result = servo_init(&servo, 1); // Initialize servo on channel 1
    if (result == 0) {
        printf("Servo initialized successfully.\n");
    } else {
        printf("Servo initialization failed.\n");
    }
}

void test_set_servo_position() {
    Servo servo;
    servo_init(&servo, 1);
    int result = set_servo_position(&servo, 90); // Set position to 90 degrees
    if (result == 0) {
        printf("Servo position set successfully.\n");
    } else {
        printf("Failed to set servo position.\n");
    }
}

void test_servo_control() {
    Servo servo;
    servo_init(&servo, 1);
    set_servo_position(&servo, 0);
    set_servo_position(&servo, 180);
}

int main() {
    test_servo_init();
    test_set_servo_position();
    test_servo_control();
    return 0;
}