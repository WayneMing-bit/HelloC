#include <stdio.h>

int main() {
	int a = 7 / 2;
	int b = 7 % 2;
	printf("%d\n", a);
	printf("%d\n", b);

	float a2 = 7.0 / 2;
	printf("%.2f\n", a2);

	int a3 = 0;
	a3 = 20;

	a3 = a3 + 3;
	a3 += 3;

	int flag = 0;
	if (!flag) {
		printf("True\n");
	}

	int arr[10] = {0};
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));

	int c = 10;
	int d = c++;	// 后置++，先使用 后++
	int c1 = 10;
	int e = ++c1;	// 前置++，先++，后使用
	printf("%d\n", d);	// 10
	printf("%d\n", c);	// 11
	printf("%d\n", e);	// 11

	return 0;
}