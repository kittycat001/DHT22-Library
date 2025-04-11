#ifndef DHT22_H
#define DHT22_H

#include <stdint.h>

void DHT22_init(uint gpio_pin);
bool DHT22_read(float *temperature, float *humidity);

#endif
