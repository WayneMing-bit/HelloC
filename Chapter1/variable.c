/**
 * 大纲
 * 1. 变量和常量的概念
 *	1.1 变量可分为局部变量和全局变量
 *	1.2 全局变量和局部变量的变量名可以相同，相同情况下局部优先。
 *	1.3 建议不要将全局变量和局部变量的变量名相同
 * 2. scanf()输入函数
 */

#include <stdio.h>

// 全局变量
int b = 20;

int main() {
	// 整形
	int i = 10; // 表示i变量是整型变量，所谓整形变量就是指i只能是整形。
	printf("Variable i: %d\n", i);

	// 字符
	char char1 = 'W';
	printf("Variable char1: %c\n", char1);

	// 局部变量
	short age = 44;
	int high = 180;
	float weight = 88.5;
	int b = 30;

	/**
	 * 计算两个整数的和
	 */
	int num1 = 0;	// 初始化变量，最好给个0如果不给编译器会警告。如果不初始化会给随机值
	int num2 = 0;

	// 输入2个整数
	scanf("%d %d", &num1, &num2);

	// 求和
	int sum = num1 + num2;

	// 输出
	printf("Sum: %d\n", sum);
	return 0;
}
