/**
 * 结构体测试
 */

#include <stdio.h>
#include <string.h>
void testDemo01() {
    int id;
    char name;
    char sex;
    unsigned short age;
    char address;
}

void testDemo02() {
    char *inputNmae = "小黑";

    char *catName1 = "Yellow";
    unsigned short catAge1 = 2;
    char chatColor1 = "橘色";

    char catName2 = "小黑";
    unsigned short catAge2 = 2;
    char chatColor2 = "黑色";

    // printf("InputNmae: ");
    // scanf("%c", &inputNmae);
    // puts(catName1);
    printf("%s\n", *catName1);

    // if (*inputNmae == catName1) {
    //     printf("Cat1 Name: %c, Age: %d, Sex:%c", catName1, catAge1, chatColor1);
    // } else if (*inputNmae == catName2) {
    //     printf("Cat1 Name: %c, Age: %d, Sex:%c", catName2, catAge2, chatColor2);
    // }
}

struct Student {
    int id; //学号
    char name[30];  //姓名
    char gender;    //性别
    int age;    //年龄
    char address[50];   //家庭地址
};

struct Cat {
    char name[20];
    int age;
    char color[30];
};

struct Person {
    char name[20];
    int age;
    char gender;
    double weight;
};

struct Contacts {
    char name[20];
    int year;
    int month;
    int day;
    char email[40];
    char phoneNumber[11];
};

int main() {
    struct Student stu1;
    struct Cat cat1;

    stu1.id = 1001;
    //  stu1.name = "Tom"; 不能直接赋值
    strcpy(stu1.name, "Tom");
    stu1.gender = 'M';
    stu1.age = 12;
    strcpy(stu1.address, "Somting Address.");

    printf("id = %d, name = %s, age = %d, gender = %c, address = %s",
        stu1.id, stu1.name, stu1.age, stu1.gender, stu1.address);

    return 0;
}