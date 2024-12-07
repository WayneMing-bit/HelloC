// 指针的运算
#include "stdio.h"

// 测试1：通过修改指针变量指向的内存地址位置上的值
void testPointerTest1() {
    printf("testPointerTest1()\n");
    int i1 = 10;
    int *p1 = &i1;

    printf("i1 = %d\n", i1);
    *p1 = 20;
    printf("i1 = %d\n", i1);

    char c1 = 'A';
    char *p2 = &c1;
    printf("c1 = %c\n", c1);
    *p2 = 'B';
    printf("c1 = %c\n", c1);
}

// 测试2：定义指针变量p1、p2，需求：
// 默认各自指向整数a,b，a,b从键盘输入，设计程序，使得 p1 指向其中的较大值，p2 指向其中的较小值
void testPointerTest2() {
    printf("testPointerTest2()\n");
    int a = 0;
    int b = 0;
    int *p1 = &a;
    int *p2 = &b;
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n", a, b);

    if (a < b) {
        *p1 = b;
        *p2 = a;
    }
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
}


int main() {
    int a = 2024;
    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    printf("*&a = %d\n", *&a);

    int *p = &a;
    printf("&p = %p\n", p);
    printf("*&p = %d\n", *p);

    testPointerTest1();
    testPointerTest2();

    return 0;
}