cmake_minimum_required(VERSION 3.10)

project(stm32_servo_hal LANGUAGES C CXX)

# Set the output directory for the compiled binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include directories
include_directories(
    ${PROJECT_SOURCE_DIR}/inc
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/config
    ${PROJECT_SOURCE_DIR}/drivers
)

# Source files
set(SOURCES
    src/servo_hal.c
    src/pwm_driver.c
    src/timer_config.c
    drivers/stm32_hal_wrapper.c
)

# Add executable for examples
add_executable(basic_servo_control examples/basic_servo_control.c ${SOURCES})
add_executable(multi_servo_example examples/multi_servo_example.c ${SOURCES})
add_executable(servo_sweep examples/servo_sweep.c ${SOURCES})

# Add tests
enable_testing()
add_executable(test_servo_hal tests/test_servo_hal.c ${SOURCES})
add_executable(test_pwm_driver tests/test_pwm_driver.c ${SOURCES})

# Link libraries if needed (e.g., STM32 HAL)
# target_link_libraries(test_servo_hal <STM32_HAL_LIB>)
# target_link_libraries(test_pwm_driver <STM32_HAL_LIB>)