#include <stdio.h>

void WhileDemo1() {
    printf("WhileDemo1() ");
    int i = 1;
    while (i <= 10) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
        i++;
    }
}

void WhileDemo2() {
    printf("WhileDemo2() ");
    int i = 1;
    while (i <= 10) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
        i++;
    }
}

void WhileDemo3() {
    printf("WhileDemo3() ");
    int i = 1;
    while (i <= 10) {
        i++;
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
}

void GetChar() {
    int ch = getchar();
    printf("%c\n", ch);
    putchar(ch);
}

void WhileDemo4() {
    int ch = 0;
    while ((ch=getchar()) != EOF) {
        putchar(ch);
    }
}

int main() {
    // WhileDemo1();
    // WhileDemo2();
    // WhileDemo3();
    WhileDemo4();
    // GetChar();
    return 0;
}
