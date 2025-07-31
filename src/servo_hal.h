#ifndef SERVO_HAL_H
#define SERVO_HAL_H

#include "servo_types.h"

// Function to initialize the servo hardware abstraction layer
void servo_hal_init(void);

// Function to set the position of a servo
void servo_set_position(uint8_t servo_id, servo_position_t position);

// Function to get the current position of a servo
servo_position_t servo_get_position(uint8_t servo_id);

// Function to move a servo to a specified angle
void servo_move_to_angle(uint8_t servo_id, angle_t angle);

// Function to stop the servo movement
void servo_stop(uint8_t servo_id);

#endif // SERVO_HAL_H