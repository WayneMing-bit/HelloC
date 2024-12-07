#include <stdio.h>

void ForDemo1() {
    printf("ForDemo1() ");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }

        printf("%d ", i);
    }
    printf("\n");
}

void ForDemo2() {
    printf("ForDemo2() ");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }

        printf("%d ", i);
    }
    printf("\n");
}

void ForDemo3() {
    for (;;) {
        printf("ForDemo3()");
    }
}

void ForDemo4() {
    int x, y;
    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
        printf("ForDemo4()");
    }
}

int main() {
    ForDemo1();
    ForDemo2();
    return 0;
}
