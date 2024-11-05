/*
* C语言编程示例1：一元二次方程
 */

#include <math.h>
#include <stdio.h>

int main(void) {
	printf("Hello, World!\n");

	// 把三个系数保存到计算机中
	int a = 1;
	int b = 5;
	int c = 6;
	double delta; // delta存放的是b*b - 4*a*c
	double x1, x2; // 存放1元二次方程的其中两个解

	delta = b * b - 4 * a * c;
	if (delta > 0) {
		x1 = ((-b + sqrt(delta)) / (2 * a));
		x2 = ((-b + sqrt(delta)) / (2 * a));
		printf("该一元二次方程有两个解, x1 = %f, x2 = %f", x1, x2);
	} else if (delta == 0) {
		x1 = (-b) / (2 * a);
		x2 = x1;
		printf("该一元二次方程有一个唯一解, x1 = x2 = %f", x1);
	} else {
		printf("无解");
	}

	return 0;
}
