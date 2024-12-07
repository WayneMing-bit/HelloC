

int main() {
    int arr1[10];
    // 完全初始化
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // 不完全初始化，剩余的元素默认初始化为0
    int arr3[10] = {1, 2, 3};
    int arr4[] = {1, 2, 3};


    char ch1[10] = {'a', 'b', 'c'};
    char ch2[10] = "abc";
    char ch3[] = {'a', 'b', 'c'};
    char ch4[] = "abc";

    return 0;
}
