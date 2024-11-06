/**
* 字面常量
* 1. 在C语言中，const修饰的a本质上是变量，但是不能直接修改，有常量的属性。
* 2. const修饰的常变量
* 3. defind定义的标识符常量
* 4. 枚举常量
*/
#include <stdio.h>

/**
 * 常量的创建方式1
 */
void constant1() {
	const int a = 10;
	// a = 20;	无法修改
	printf("%d\n", a);

	const int b = 20;
	int arr[20] = {0};	// arr[20]里的20不能直接用变量，里边是常变量或者字面量
}

/**
 * 常量的创建方式2
 */
// 通过define定义
#define MAX 100
#define STR "HelloWorld"
void constant2() {
	printf("%d\n", MAX);
	int a = MAX;
	printf("%d\n", a);
	printf("%s\n", STR);
}

/**
 * 枚举常量
 */
void constant3() {
	enum Color { RED, BLUE, GREEN };
	enum Color color = BLUE;
	printf("%d\n", color);
}

int main() {
	constant1();
	constant2();
	constant3();

	return 0;
}
