/**
* 描述
*	KiKi学会了printf在屏幕输出信息，他想输出一架小飞机。请帮他编写程序输出这架小飞机。
* 输入描述
*	无
* 输出描述：https://www.nowcoder.com/practice/5cd9598f28f74521805d2069ce4a108a
*/

#include <stdio.h>

void PrintLine(int line, char sign, int num1, int num2) {
	while (line > 0) {
		if (num1 == 0 && num2 == 0) {
			printf("%c", sign);
		} else {
			if (line == num1) {
				printf("%c", sign);
			} else if (line == num2) {
				printf("%c", sign);
			} else {
				printf(" ");
			}
		}
		line--;
	}
	printf("\n");
}

void PrintPlan() {
	int x = 12, y = 0;
	char sign = '*';
	int arr2[6][2] = {{6, 7}, {6, 7}, {0, 0},  {0, 0},{5, 8}, {5, 8}};
	while (y < 6) {
		PrintLine(x, sign, arr2[y][0], arr2[y][1]);
		y++;
	}
}

int main() {
	PrintPlan();
}