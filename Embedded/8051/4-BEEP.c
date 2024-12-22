#include <REGX52.H>

sbit BEEP = P2^5;

void led_Latency_10us(unsigned int ten_us) {
    while(ten_us--);
}


int main() {
    int i = 2000;

    while (1) {
        while (i--) {
            //						BEEP = !BEEP;
            //						led_Latency_10us(100);
            BEEP = 0;
            led_Latency_10us(100);
            BEEP = 1;
            led_Latency_10us(200);
        }
        i = 0;
        BEEP = 0;
    }
}