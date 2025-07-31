#include "servo_hal.h"
#include "servo_types.h"

#define NUM_SERVOS 3

Servo servos[NUM_SERVOS];

void setup() {
    // Initialize the servo hardware abstraction layer
    servo_init();

    // Configure each servo
    for (int i = 0; i < NUM_SERVOS; i++) {
        servos[i].id = i;
        servos[i].position = 0; // Start at position 0
        servo_attach(&servos[i]);
    }
}

void loop() {
    // Move each servo to a different position
    for (int i = 0; i < NUM_SERVOS; i++) {
        int target_position = (i + 1) * 30; // Example positions: 30, 60, 90 degrees
        servo_set_position(&servos[i], target_position);
    }

    // Add a delay to observe the movement
    delay(1000);
}