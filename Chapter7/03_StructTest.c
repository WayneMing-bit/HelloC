/**
 * 结构体嵌套
 */

#include <string.h>

struct Name {
    char firstName[50];
    char lastName[50];
};

struct Student {
    int age;
    struct Name name;
    char gender;
} stu1;


int main() {
    strcpy(stu1.name.firstName, "Ming");
    strcpy(stu1.name.lastName, "Wayne");

    // or
    struct Name myName = {"Ming", "Wayne"};
    stu1.name = myName;

    return 0;
}