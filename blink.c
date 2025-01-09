#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#define led_pin_red 13
void ponto(){
    //ponto
    gpio_put(led_pin_red, true);
    sleep_ms(200);
    gpio_put(led_pin_red, false);
    sleep_ms(125);
}
void traco(){
    //ponto
    gpio_put(led_pin_red, true);
    sleep_ms(800);
    gpio_put(led_pin_red, false);
    sleep_ms(125);
}
int main() {
    gpio_init(led_pin_red);
    gpio_set_dir(led_pin_red, GPIO_OUT);
    while (true) {
        ponto();
        ponto();
        ponto();
        sleep_ms(125); // delay extra para quebra de caractere
        traco();
        traco();
        traco();
        sleep_ms(125); // delay extra para quebra de caractere
        ponto();
        ponto();
        ponto();
        sleep_ms(125); // delay extra para quebra de caractere
        sleep_ms(3000); // fim do programa
    }
}