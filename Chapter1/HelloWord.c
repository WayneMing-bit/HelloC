/**
 * 大纲
 * 1. C语言代码中一定要有main函数.
 *	 标准的主函数写法必须要有 int main() 和 return 0.
 * 2. stdio.h头文件.
 * 3. printf打印数据.
 * 4. 程序正确执行返回整数0.
 * 5. 一个工程中main函数有且仅有一个.
*/

/** stdio.h头文件，标准的输入输出
 *  std：标准
 *  i：input 输入
 *  o：output 输出
 */

#include <stdio.h>	// 包含stdio.h头文件

// 古老的写法，不推荐
// void main() {
//
// }

int main() {
	printf("Hello World\n");	// printf是一个库函数,在stdio.h头文件中,专门用来打印数据
	return 0;	// 返回整数0, 如果程序正确执行则返回0, 反之不正确执行则返回非0
}


