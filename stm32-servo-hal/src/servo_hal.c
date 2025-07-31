#include "servo_hal.h"
#include "pwm_driver.h"
#include "timer_config.h"

void servo_init(ServoType* servo, uint32_t pwm_channel) {
    servo->pwm_channel = pwm_channel;
    servo->position = 0;
    pwm_init(pwm_channel);
}

void servo_set_position(ServoType* servo, uint16_t position) {
    if (position < SERVO_MIN_POSITION) {
        position = SERVO_MIN_POSITION;
    } else if (position > SERVO_MAX_POSITION) {
        position = SERVO_MAX_POSITION;
    }
    servo->position = position;
    pwm_set_duty_cycle(servo->pwm_channel, position);
}

void servo_move_to(ServoType* servo, uint16_t target_position, uint32_t duration) {
    uint16_t step = (target_position > servo->position) ? 1 : -1;
    for (uint16_t pos = servo->position; pos != target_position; pos += step) {
        servo_set_position(servo, pos);
        delay(duration / abs(target_position - servo->position));
    }
}