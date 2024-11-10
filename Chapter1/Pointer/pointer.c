/**
 * 指针
 */

#include <stdio.h>

int main() {
    char c1 = 'a';
    int a = 10;
    printf("变量a的内存地址: %p\t占用的字节数: %llu\n", &a, sizeof(a));

    return 0;
}