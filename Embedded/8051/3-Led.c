#include <REGX52.H>

sbit LED_PORT = P2^7;

void led_Latency_10us(unsigned int ten_us) {
    while(ten_us--);
}

void led2() {
    LED_PORT = 0;
    led_Latency_10us(5000);
    LED_PORT = 1;
    led_Latency_10us(50000);
}

int main() {
    char i = 0;

    while (1) {
        for (i = 0; i < 8; i++) {
            P2 = ~(0x01 << i);
            led_Latency_10us(50000);
        }

        for (i = 0; i < 8; i++) {
            P2 = ~(0x80 >> i);
            led_Latency_10us(50000);
        }
    }
}