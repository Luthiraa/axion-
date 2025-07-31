#include "servo_hal.h"
#include "servo_types.h"

int main(void) {
    // Initialize the servo hardware abstraction layer
    servo_init();

    // Set the position of the servo to 90 degrees
    servo_set_position(90);

    // Delay to allow the servo to reach the position
    for (volatile int i = 0; i < 100000; i++);

    // Set the position of the servo to 0 degrees
    servo_set_position(0);

    // Delay to allow the servo to reach the position
    for (volatile int i = 0; i < 100000; i++);

    // Set the position of the servo to 180 degrees
    servo_set_position(180);

    // Delay to allow the servo to reach the position
    for (volatile int i = 0; i < 100000; i++);

    // Return from main
    return 0;
}