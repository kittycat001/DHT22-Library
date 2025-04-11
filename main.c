#include <stdio.h>
#include "DHT22.h"

int main() {
    float temperature = 0.0, humidity = 0.0;

    // Initialize DHT22
    DHT22_init();

    // Read values
    if (DHT22_read(&temperature, &humidity)) {
        printf("Temperature: %.2f °C\n", temperature);
        printf("Humidity: %.2f %%\n", humidity);
    } else {
        printf("Failed to read from DHT22 sensor.\n");
    }

    return 0;
}
