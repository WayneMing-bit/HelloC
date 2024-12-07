// 测试指针运算

#include "stdio.h"

int main() {
    int num = 10;
    printf("num = %d\n", num);
    printf("num = %p\n", &num);

    // 给指针变量赋值
    int *p1;
    p1 = &num;
    printf("*p1 = %p\n", p1);

    // 举例测试1
    int i = 10;
    int *pp1, *pp2;
    pp1 = &i;
    pp2 = pp1;
    printf("\ni = %p\n", &i);
    printf("*pp1 = %p\n", pp1);
    printf("*pp2 = %p\n", pp2);

    // 举例测试2
    float f1 = 12.3F;
    float *fp1 = &f1;
    // 不要使用如下操作:
//    int *ip1 = &f1;

    // 举例测试3
    int *p3;
    printf("*p3 = %p\n", p3);   // 如果不赋值，默认随机值
    // 定义指针变量最好赋值0或者NULL
    int *p4 = NULL;

    // 举例测试4
    int m = 10, *ptr;
    ptr = &m;
    printf("m = %d\n", m);

    scanf("%d", ptr);   // 等价于scanf("%d", &m);

    printf("%d\n", m);

    return 0;
}