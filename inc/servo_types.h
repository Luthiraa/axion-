#ifndef SERVO_TYPES_H
#define SERVO_TYPES_H

#include <stdint.h>

typedef enum {
    SERVO_OK,
    SERVO_ERROR,
    SERVO_TIMEOUT
} ServoStatus;

typedef struct {
    uint8_t id;
    uint16_t position; // Position in degrees
    uint16_t min_angle; // Minimum angle in degrees
    uint16_t max_angle; // Maximum angle in degrees
} Servo;

#endif // SERVO_TYPES_H