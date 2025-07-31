# Hardware Setup for STM32 Servo Control

## Introduction
This document outlines the hardware setup required to use the STM32 Servo Hardware Abstraction Library (HAL). It includes wiring diagrams, component requirements, and configuration steps to ensure proper operation of the servo control system.

## Components Required
- STM32 Microcontroller (e.g., STM32F4 series)
- Servo Motor (e.g., SG90 or MG996R)
- Power Supply (appropriate for the servo motor)
- Jumper Wires
- Breadboard (optional)

## Wiring Diagram
1. **Servo Motor Connections:**
   - Connect the **Signal Pin** of the servo to a PWM-capable GPIO pin on the STM32 (e.g., PA0).
   - Connect the **Power Pin** (usually red) of the servo to the positive terminal of the power supply.
   - Connect the **Ground Pin** (usually brown or black) of the servo to the ground of the STM32 and the power supply.

2. **STM32 Connections:**
   - Ensure that the STM32 is powered correctly, either through USB or an external power source.
   - Connect the ground of the STM32 to the ground of the power supply to ensure a common reference.

## Configuration Steps
1. **Install Required Libraries:**
   - Ensure that the STM32 HAL library is installed in your development environment.

2. **Set Up PWM:**
   - Configure the PWM settings in `config/servo_config.h` to match the specifications of your servo motor (e.g., PWM frequency, pulse width range).

3. **Initialize the Servo:**
   - Use the provided functions in `src/servo_hal.c` to initialize the servo. Call the initialization function in your main application code.

4. **Testing:**
   - After wiring and configuration, upload the example code from `examples/basic_servo_control.c` to the STM32 to test the servo operation.

## Conclusion
Following this hardware setup guide will help you successfully connect and control a servo motor using the STM32 Servo HAL. Ensure all connections are secure and double-check the configuration settings before powering the system.