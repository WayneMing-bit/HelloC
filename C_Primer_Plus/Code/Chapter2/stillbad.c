/* stillbad.c -- 修复了语法错误的程序 */
#include <stdio.h>

int main() {
    int n, n2, n3;

    n = 5;
    n2 = n * n;
    n3 = n2 * n2;

    printf("n = %d, n squared = %d, n cubed = %d.\n", n, n2, n3);

    return 0;
}