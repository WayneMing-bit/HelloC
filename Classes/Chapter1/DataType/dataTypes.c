#include <stdio.h>

int main() {
	// 查看基本数据类型的占用内存空间
	// sizeof()：查看数据类型的大小
	printf("char\t\t%zu byte\n", sizeof(char));
	printf("short\t\t%zu byte\n", sizeof(short));
	printf("int\t\t%zu byte\n", sizeof(int));
	printf("long\t\t%zu byte\n", sizeof(long));
	printf("long long\t%zu byte\n", sizeof(long long));
	printf("float\t\t%zu byte\n", sizeof(float));
	printf("double\t\t%zu byte\n", sizeof(double));

	int age = 55;
	double price = 65.5;
	return 0;
}