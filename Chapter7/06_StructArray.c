/**
 * 结构体数组
 */

#include <stdio.h>
struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person pers[3] = {{.age = 1, .name = "Abc1"},
        {.age = 2, .name = "Abc2"},
        {.age = 3, .name = "Abc3"}};

    printf("name = %s\n", pers[2].name);

    return 0;
}