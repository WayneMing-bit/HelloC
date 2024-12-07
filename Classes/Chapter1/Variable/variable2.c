/**
* 变量的作用域
* 1. 局部变量
*	局部变量的作用域是变量所在的局部范围
* 2. 全局变量
* 3. 变量的生命周期
*	随着作用域的结束而结束
*/
#include <stdio.h>

// 声明来自外部的符号

// 全局变量
// int a = 10;

extern int a;

void test() {
	printf("test(a) %d\n", a);
}

int main() {
	// 局部变量
	// int a = 10;
	test();
	{
		printf("main(){{a}}  %d\n", a);
	}
	printf("main(){a}  %d\n", a);

	return 0;
}
