#include <stdio.h>

void IfDemo1(int x) {
    if (x = x)
        printf("Ture %d\n", x);

    if (x > 1000000) {
        printf("��н����\n");
        printf("Ӯȡ�׸���\n");
        printf("���������۷�\n");
    } else {
        printf("��˿\n");
        printf("����\n");
    }
}

void IfDemo2(int x) {
    if (x < 10000) {
        printf("��˿\n");
    } else if (x >= 10000 && x < 20000) {
        printf("�в���\n");
    } else if (x >= 20000 && x < 40000) {
        printf("�в���\n");
    } else {
        printf("δ֪\n");
    }
}

// �ж�һ������ż��
void IfExercise1() {
    int num = 0;
    printf("Enter number:\n");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("ż��\n");
    } else {
        printf("����\n");
    }
}

// ���1-100֮�������
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
