// 递归
#include <stdio.h>

void Print(unsigned int num) {
    if (num > 9) {
        Print(num / 10);
    }
    printf("%u ", num % 10);
}

int main() {
    Print(12345);
    return 0;
}