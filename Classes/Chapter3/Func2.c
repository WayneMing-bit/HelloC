// 递归
#include <stdio.h>

// 输入：1234，输出 1 2 3 4
void Print(unsigned int num) {
    if (num > 9) {
        Print(num / 10);
    }
    printf("%u ", num % 10);
}

// 求字符串长度
int StrLen(char* str) {

}

int main() {
    Print(12345);
    StrLen("12345");
    return 0;
}