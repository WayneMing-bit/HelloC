#include <stdio.h>

int Add(int x, int y) {
	int res = 0;
	res = x + y;
	return res;
}

int main() {
	int n1 = 0;
	int n2 = 0;
	// 输入
	scanf("%d %d", &n1, &n2);

	int res = Add(n1, n2);
	printf("%d\n", res);
	return 0;
}