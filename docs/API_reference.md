# API Reference for STM32 Servo Hardware Abstraction Layer

## Overview
The STM32 Servo Hardware Abstraction Layer (HAL) provides a simplified interface for controlling servos using PWM signals. This document outlines the available functions, their parameters, and usage examples.

## Functions

### 1. `void servo_init(void);`
Initializes the servo hardware. This function must be called before using any other servo functions.

**Parameters:**  
None

**Returns:**  
None

**Example:**
```c
servo_init();
```

### 2. `void servo_set_position(uint8_t servo_id, uint16_t position);`
Sets the position of a specified servo.

**Parameters:**  
- `servo_id`: The ID of the servo to control (0 to N-1, where N is the number of servos).
- `position`: The desired position of the servo (typically in degrees or microseconds).

**Returns:**  
None

**Example:**
```c
servo_set_position(0, 1500); // Set servo 0 to 1500 microseconds
```

### 3. `void servo_move_to(uint8_t servo_id, uint16_t target_position, uint16_t duration);`
Moves the servo to a target position over a specified duration.

**Parameters:**  
- `servo_id`: The ID of the servo to control.
- `target_position`: The target position for the servo.
- `duration`: The time in milliseconds to reach the target position.

**Returns:**  
None

**Example:**
```c
servo_move_to(1, 1800, 1000); // Move servo 1 to 1800 microseconds in 1 second
```

### 4. `void servo_stop(uint8_t servo_id);`
Stops the movement of the specified servo.

**Parameters:**  
- `servo_id`: The ID of the servo to stop.

**Returns:**  
None

**Example:**
```c
servo_stop(0); // Stop servo 0
```

## Usage Example
```c
#include "servo_hal.h"

int main(void) {
    servo_init();
    servo_set_position(0, 1500);
    servo_move_to(1, 1800, 1000);
    servo_stop(0);
    return 0;
}
```

## Notes
- Ensure that the PWM driver is properly configured before using the servo functions.
- The servo IDs must correspond to the actual servos connected to the hardware.

## Conclusion
This API reference provides a comprehensive guide to using the STM32 Servo HAL. For further details on hardware setup and configuration, refer to the `hardware_setup.md` document.