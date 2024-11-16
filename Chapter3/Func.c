#include "stdio.h"
#include "string.h"

int get_max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

void Swap(int * a, int * b) {
    int* temp = 0;
    temp = a;
    a = b;
    b = temp;
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
    return 0;
}