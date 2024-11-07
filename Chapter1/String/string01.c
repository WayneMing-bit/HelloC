#include <stdio.h>
#include <string.h>

/**
 *字符串+转义字符+注释
 * 1. C语言中没有字符串类型！
 * 2. C语言中变量无法直接存储字符串字面量
 * 3. string.h strlen() 求字符串长度的函数
 * @return
 */

/**
 * 字符串
 */
void string01() {
    // char字符类型
    char ch = 'w';
    // 字符串
    // arr[]根据字符串内容自动在内存开辟空间
    char arr1[] = "abcdef"; // 在内存中f后会自动添加\0,
    char arr2[20] = "abcd"; // 开辟20个字节的空间
    char arr3[] = {'a', 'b', 'c', 'd'};
    char arr4[] = {'a', 'b', 'c', 'd', '\0'};
    printf("%s\n", arr1);   // abcdef 打印遇到\0则认为字符数组结束
    printf("%s\n", arr3);   // abcdabcd 数组因为没有\0，打印则可能是无限的，在内存中直到遇到\0才停止！
    printf("%s\n", arr4);   // abcd

    int length1 = strlen(arr2);
    printf("%d\n", length1);    // 4
    printf("%d\n", strlen(arr4));   // 4
    printf("%d\n", strlen(arr3));
}

int main() {
    string01();

    return 0;
}