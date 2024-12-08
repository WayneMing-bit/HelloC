#include <stdio.h>

int main() {
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("i = %d, i+1=%d, i+2=%d\n", i, i + 1, i + 2);
    printf("j = %u, j+1=%u, j+2=%u\n", j, j + 1, j + 2);

    return 0;
}