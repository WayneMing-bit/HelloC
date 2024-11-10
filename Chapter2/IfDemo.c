#include <stdio.h>

void IfDemo1(int x) {
    if (x = x)
        printf("Ture %d\n", x);

    if (x > 1000000) {
        printf("年薪百万\n");
        printf("赢取白富美\n");
        printf("走向人生巅峰\n");
    } else {
        printf("屌丝\n");
        printf("污龊\n");
    }
}

void IfDemo2(int x) {
    if (x < 10000) {
        printf("屌丝\n");
    } else if (x >= 10000 && x < 20000) {
        printf("中产Ⅰ\n");
    } else if (x >= 20000 && x < 40000) {
        printf("中产Ⅱ\n");
    } else {
        printf("未知\n");
    }
}

// 判断一个数奇偶数
void IfExercise1() {
    int num = 0;
    printf("Enter number:\n");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("偶数\n");
    } else {
        printf("奇数\n");
    }
}

// 输出1-100之间的奇数
void IfExercise2() {
    printf("IfExercise2(): ");
    int num = 1;
    while (num <= 100) {
        if (num % 2 != 0) {
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");
}

void IfDemo4(int num) {}

int main() {
    IfDemo1(3);
    IfDemo2(100);
    // IfExercise1();
    IfExercise2();
    return 0;
}
