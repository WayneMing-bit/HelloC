/**
 * 结构体数组
 */

#include <stdio.h>

#define NUMBER 4
#define MAX_NAME_LENGTH 20
struct Person {
    char name[20];
    int age;
};

typedef struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    char gender;
    int score;
} Stu;

/**
 *   输入一个班级的学生信息(包含id、name、gender、score)，
 *   并把学习成绩超过全班平均成绩的学生找出来，
 *   输出这部分学生的姓名和成绩。
 */
void testStructArray() {
    printf("testStructArray()\n");

    struct Student stu[NUMBER];

    int sumScore = 0;
    double avgScore = 0;

    for (int i = 0; i < NUMBER; i++) {
        printf("id,name,gender,score: ");
        scanf("%d %19s %c %d", &stu[i].id, stu[i].name, &stu[i].gender, &stu[i].score);
        printf("OK\n");

        sumScore += stu[i].score;
    }

    avgScore = (double) sumScore / NUMBER;

    for (int i = 0; i < NUMBER; i++) {
        if (stu[i].score > avgScore) {
            printf("name = %-20s, score = %d\n", stu[i].name, stu[i].score);
        }
    }
}

int main() {
    struct Person pers[3] = {{.age = 1, .name = "Abc1"}, {.age = 2, .name = "Abc2"}, {.age = 3, .name = "Abc3"}};

    printf("name = %s\n", pers[2].name);

    testStructArray();

    return 0;
}