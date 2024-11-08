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

	return 0;
}