// 指针的常用运算，指针与整数值的加减运算

#include "stdio.h"

// 遍历数组通过指针方式实现
void testPointer1() {
    int arr[5] = {1, 2, 3, 4, 5};
    // 方式1：For
    int size = sizeof(arr) / sizeof(arr[1]);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // 方式2：指针
    int *p1 = &arr[0];
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p1 + i));
    }

    printf("\n");

    // 方式3：指针++
    int *p3 = arr + 1;
    int *p2;
    for (p2 = arr; p2 < arr + 5; p2++) {
        printf("%d ", *p2);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr[1];

    printf("*p = %p\n", p);
    printf("*p = %d\n", *p);

    printf("*p = %p\n", p + 1);
    printf("*p = %p\n", p - 1);

    printf("*p = %d\n", *p + 1);
    printf("*p = %d\n", *p - 1);


    testPointer1();
    return 0;
}