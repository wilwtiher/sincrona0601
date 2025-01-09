#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#define led_pin_red 13

int main() {
    gpio_init(led_pin_red);
    gpio_set_dir(led_pin_red, GPIO_OUT);
    while (true) {
        //ponto
        gpio_put(led_pin_red, true);
        sleep_ms(200);
        gpio_put(led_pin_red, false);
        sleep_ms(125);
        //ponto
        gpio_put(led_pin_red, true);
        sleep_ms(200);
        gpio_put(led_pin_red, false);
        sleep_ms(125);
        //ponto e pausa de letra
        gpio_put(led_pin_red, true);
        sleep_ms(200);
        gpio_put(led_pin_red, false);
        sleep_ms(250);
        //traco
        gpio_put(led_pin_red, true);
        sleep_ms(800);
        gpio_put(led_pin_red, false);
        sleep_ms(125);
        //traco
        gpio_put(led_pin_red, true);
        sleep_ms(800);
        gpio_put(led_pin_red, false);
        sleep_ms(125);
        //traco e pausa de letra
        gpio_put(led_pin_red, true);
        sleep_ms(800);
        gpio_put(led_pin_red, false);
        sleep_ms(250);
        //ponto
        gpio_put(led_pin_red, true);
        sleep_ms(200);
        gpio_put(led_pin_red, false);
        sleep_ms(125);
        //ponto
        gpio_put(led_pin_red, true);
        sleep_ms(200);
        gpio_put(led_pin_red, false);
        sleep_ms(125);
        //ponto e tempo de reinicio
        gpio_put(led_pin_red, true);
        sleep_ms(200);
        gpio_put(led_pin_red, false);
        sleep_ms(3000);
    }
}
