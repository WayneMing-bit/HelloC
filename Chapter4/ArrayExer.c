// 定义一个int型的一维数组，包含10个元素，然后求出数组中的最大值，最小值，总和，平均值，并输出出来。

#include <stdio.h>

int getMaxValue(int arr[], int size) {
    int temp = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > temp) {
            temp = arr[i];
        }
    }

    return temp;
}

int main() {
    int arr[10] = {34, 54, 2, 32, 54, 57, 3, 32, 87, 43};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxValue = getMaxValue(arr, size);
    printf("Arr Max Value: %d\n", maxValue);

    return 0;
}