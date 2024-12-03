#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

struct Cat {
    char *name;
    int age;
    char gender;
};

struct Cat2 {
    char *name;
    int age;
    char gender;
} cat4, cat5;

struct {
    char *name;
    int age;
    char gender;
} cat6;

struct Person1 {
    char *name;
    int age;
} per1 = {.name = "Tom", .age = 44}, per2;

typedef struct Employee {
    char *name;
    int age;
} Emp;

double getVolume(struct Box box) {
    return box.length * box.width * box.height;
}

int main() {
    struct Cat cat1 = {"小黄", 2, 'M'};
    printf("name = %s, age = %d, gender = %c\n", cat1.name, cat1.age, cat1.gender);

    struct Cat cat2 = {"小黑"};
    printf("name = %s, age = %d, gender = %c\n", cat2.name, cat2.age, cat2.gender);

    struct Cat cat3 = {.gender = 'F', .age = 3, .name = "小黑"};
    printf("name = %s, age = %d, gender = %c\n", cat3.name, cat3.age, cat3.gender);

    struct Cat cat4 = {.gender = 'F', .name = "小黑"};
    printf("name = %s, age = %d, gender = %c\n", cat4.name, cat4.age, cat4.gender);

    cat4.name = "小黄";
    cat4.age = 4;
    cat4.gender = 'F';

    struct Employee emp1;
    Emp emp2;

    struct Box box = {.height = 100.1, .length = 100.2, .width = 100.3};
    double res = getVolume(box);
    printf("box: %.2lf\n", res);

    return 0;
}