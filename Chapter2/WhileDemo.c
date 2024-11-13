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
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
}


// 计算n的阶乘：1*2*3..*n
int WhileExercise01(int n) {
    int i = 1;
    int res = 1;
    while (i < n) {
        res *= ++i;
    }

    // printf("Res: %d", res);

    return res;
}


// 计算1!+2!+3!..+10!计算10的阶乘总和。备注：2!表示2的阶乘以此类推。
void WhileExercise02() {
    int ret = 1;
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        ret *= i;
        sum += ret;
    }
    printf("Sum: %d", sum);
}

int main() {
    // WhileDemo1();
    // WhileDemo2();
    // WhileDemo3();
    // WhileDemo4();
    // GetChar();
    // WhileExercise01(5);
    WhileExercise02();
    return 0;
}
