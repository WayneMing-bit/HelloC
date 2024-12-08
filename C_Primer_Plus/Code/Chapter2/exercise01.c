/* exercise01.c -- Chapter2练习题 */
#include <stdio.h>

int main() {
    int words = 3020;
    int lines = 350;
    printf("There were %d words and %d lines.\n", words, lines);

    int a, b;
    a = 5;
    b = 2;
    b = a;
    a = b;
    printf("a = %d, b = %d\n", a, b);

    int x, y;
    x = 10;
    y = 5;
    y = x + y;
    x = x * y;
    printf("x = %d, y = %d\n", x, y);

    return 0;
}