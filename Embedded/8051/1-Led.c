#include "reg52.h"

typedef unsigned int u16;

sbit LED1 = P2 ^ 0;

// 点亮第一个LED
void lightUpLED() {
    LED1 = 0;
}

// 熄灭LED
void turnOffLED() {
    LED1 = 1;
}

// 延时函数: 当传入Ten_us=1，大约延时10us.
void delay_10us(u16 ten_us) {
    while (ten_us--);
}




int main() {
    while (1) {
        lightUpLED();
        delay_10us(50000);  // ~450ms
        turnOffLED();
        delay_10us(5000);   // ~450ms
    }

    return 0;
}
