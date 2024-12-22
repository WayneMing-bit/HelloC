/**
* 1个LED等闪烁
 */
#include "reg52.h"

void led_Latency_10us(char ten_us) {
    while(ten_us--) {
    }
}

int main() {
    while (1) {
        P2 = 0x7f;
        led_Latency_10us(50000);
    }
}