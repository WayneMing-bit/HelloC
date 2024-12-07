#include <stdio.h>

int main() {
    int num = 10;
    printf("num = %d\n", num);
    printf("num = %p\n", &num);

    int *p1 = &num;
    printf("p1 = %p\n", p1);

    return 0;
}
