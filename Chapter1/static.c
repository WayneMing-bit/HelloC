/**
 * 静态static
 */

#include <stdio.h>
#define Add(x, y) (x + y)

void test() {
	static int a = 1;
	a++;
	int b = a;
	printf("%d ", a);
}

int main() {
	int i = 0;

    int c = Add(1, 2);
    printf("%d\n", c);

    while (i < 10) {
        test();
        i++;
    }
	return 0;
}