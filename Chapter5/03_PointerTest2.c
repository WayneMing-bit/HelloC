// 指针的运算
#include "stdio.h"


int main() {
    int a = 2024;
    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    printf("*&a = %d\n", *&a);

    int *p = &a;
    printf("&p = %p\n", p);
    printf("*&p = %d\n", *p);

    return 0;
}