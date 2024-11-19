#include <math.h>
#include "stdio.h"
#include "string.h"

int get_max(int num1, int num2) { return num1 > num2 ? num1 : num2; }

// 变量交换
void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 是素数返回1，不是素数返回0；
int is_Prime(int i) {
    for (int j = 2; j <= sqrt(i); j++) {
        if (i % j == 0) {
            return 0;
        }
    }
    return 1;
}

// 素数实现方式1
void PrimeNumber1() {
    int count = 0;
    for (int i = 100; i <= 200; i++) {
        int flag = 1;   // flag=1表示素数

        for (int j = 2; j <= i - 1; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            count++;
            printf("%d is prime number.", i);
        }

    }
    printf("\n count = %d\n", count);
}

// 素数实现方式2
void PrimeNumber2() {
    int count = 0;
    for (int i = 101; i <= 200; i+=2) {
        int flag = 1;   // flag=1表示素数

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            count++;
            printf("%d is prime number. ", i);
        }

    }
    printf("\n count = %d\n", count);
}

// 素数实现方式3
void PrimeNumber3() {
    int count = 0;
    for (int i = 101; i <= 200; i+=2) {
        if (is_Prime(i)) {
            count++;
            printf("%d is prime number.", i);
        }

    }
    printf("\n count = %d\n", count);
}


int main() {
    char arr1[20] = {0};
    char arr2[] = "Hello C!";

    strcpy(arr1, arr2);
    printf("%s\n", arr1);
    memset(arr1, 'x', 5);
    printf("%s\n", arr1);

    int a = 0;
    int b = 0;
    //    scanf("%d %d", &a, &b);
    int m = get_max(a, b);
    printf("%d\n", m);

    int a1 = 2;
    int b2 = 4;
    Swap(&a1, &b2);
    printf("%d, %d", a1, b2);

    PrimeNumber1();
    PrimeNumber2();
    PrimeNumber3();
    return 0;
}
