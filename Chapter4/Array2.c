/**
 * 二维数组的创建和初始化
 * 1. 二维数组的创建
 * 2. 二维数组初始化
 * 3. 二维数组的使用
 * 4. 二维数组在内存的存储
 */

#include <stdio.h>
// 1. 二维数组的创建
void ArrayCreate() {
    int array1[3][4];
    char array2[3][5];
    double array3[2][4];
}

// 2. 二维数组初始化
void ArrayInit() {
    int array1[3][4] = {1, 2, 3, 4};
    int array2[3][4] = {{1, 2}, {4, 5}};
    int array3[][4] = {{2, 3}, {4, 5}};
}

// 3. 二维数组的使用
void ArrayUse() {
    int array1[3][4] = {{1, 2}, {4, 5}};
    int length1 = sizeof(array1) / sizeof(array1[0]);
    int length2 = sizeof(array1[0]) / sizeof(array1[0][0]);
    for (int i = 0; i < length1; i++) {
        for (int j = 0; j < length2; j++) {
            array1[i][j] = i * 4 + j;
        }
    }

    for (int i = 0; i < length1; i++) {
        for (int j = 0; j < length2; j++) {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
}

// 4. 二维数组在内存的存储

int main() {
    ArrayCreate();
    ArrayInit();
    ArrayUse();
    return 0;
}