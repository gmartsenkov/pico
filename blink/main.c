#include "stdio.h"
#include "pico/stdlib.h"

int main() 
{
    stdio_init_all();
    const uint led_pin = 25;

    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    while (true) 
    {
        printf("Blink!\r\n");
        gpio_put(led_pin, true);
        sleep_ms(1000);
        gpio_put(led_pin, false);
        sleep_ms(1000);
    }
}