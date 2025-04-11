#include "DHT22.h"
#include "pico/stdlib.h"
#include <stdio.h>

void DHT22_init(uint gpio_pin) {
    gpio_init(gpio_pin);
    gpio_set_dir(gpio_pin, GPIO_OUT);
    gpio_put(gpio_pin, 1);
}

bool DHT22_read(float *temperature, float *humidity) {
    // Dummy values for simulation/testing
    *temperature = 25.0;
    *humidity = 60.0;
    return true;
}
