#include <stdio.h>

void SwitchDemo1() {
    int day = 0;
    printf("Enter date:\n");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesdays");
            break;
    }
}

// 需求：输入1-5，输出的是Monday；输入6-7输出Tuesday
void SwitchDemo2() {
    int day = 0;
    printf("Enter date:\n");
    scanf("%d", &day);
    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Monday");
            break;
        case 6:
        case 7:
            printf("Tuesday");
            break;
        default:
            printf("Error!");
            break;
    }
}


int main() {
    // SwitchDemo1();
    SwitchDemo2();
    return 0;
}
