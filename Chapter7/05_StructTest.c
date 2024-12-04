/**
 * 结构体变量的赋值操作
 */

struct Student {
    int id;
    char *name;
};

int main() {
    struct Student stu1 = {.id = 1, .name = "WayneMing"};
    struct Student stu2;

    stu2 = stu1;

    return 0;
};
