CC = arm-none-eabi-gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinc -Isrc
SRC = src/servo_hal.c src/pwm_driver.c src/timer_config.c drivers/stm32_hal_wrapper.c
OBJ = $(SRC:.c=.o)
TARGET = libservo.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean