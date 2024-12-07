/**
 * 一维数组
 * 1. 数组的创建
 * 2. 数组初始化
 * 3. 一维数组的使用
 * 4. 一维数组在内存中的存储
 */
#include <stdio.h>

// 1. 数组创建
void ArrayCreate() {
    // code 1
    int arr1[10];

    // code 2
    int count = 10;
    int arr2[count];

    // code 3
    char arr3[10];
    float arr4[1];
    double arr5[20];
}

// 2. 数组初始化
void ArrayInit() {
    int array1[10] = {1, 2, 3};
    int array2[] = {1, 2, 3};
    int array3[5] = {1, 2, 3, 4, 5};
    char array4[3] = {'a', 95, 'c'};
    char array5[] = {'a', 'b', 'c'};
    char array6[] = "abcdef";
}

// 3. 一维数组的使用
void ArrayUse() {
    int array[10] = {0};
    // 计算数组的大小
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length; i++) {
        array[i] = i;
    }

    for (int i = 0; i < length; ++i) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

// 4. 一维数组在内存中的存储
void ArrayMen() {
    int array[10] = {0};
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length; i++) {
        printf("&array[%d] = %p\n", i, &array[i]);
    }
}

int main() {
    ArrayCreate();
    ArrayInit();
    ArrayUse();
    ArrayMen();
    return 0;
}