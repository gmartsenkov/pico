#include <stdio.h>
#include <pico/stdlib.h>
#include <ArduinoJson.h>

int main() 
{
    stdio_init_all();
    const uint led_pin = 25;

    char json[] = "{\"sensor\":\"gps\",\"time\":1351824120,\"data\":[48.756080,2.302038]}";

    DynamicJsonDocument doc(1024);
    deserializeJson(doc, json);

    const char *sensor = doc["sensor"];
    long time = doc["time"];
    double latitude = doc["data"][0];
    double longitude = doc["data"][1];

    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    while (true) 
    {
        printf("Blink!\r\n");
        printf("Sensor is %s!\r\n", sensor);
        gpio_put(led_pin, true);
        sleep_ms(1000);
        gpio_put(led_pin, false);
        sleep_ms(1000);
    }
}