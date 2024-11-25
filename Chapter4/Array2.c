#include "stdio.h"

// 二维数组
int main() {
    int arr[3][4] = {1, 2, 3, 4,
                     2, 3, 4, 5,
                     6, 7, 8, 9};
    for (int i = 0; i< 3; i++) {
        for (int j = 0; j< 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i< 3; i++) {
        for (int j = 0; j< 4; j++) {
            printf("a[%d][%d] = %p\n", i, j, &arr[i][j]);
        }
    }

    return 0;
}

