#include <stdio.h>
#define PI 3.141593

int main() {
    int number = 7;
    float pies = 12.75;
    int cost = 7800;
    printf("The %d contestants ate %d berry pies.\n", number, pies);
    printf("Farewell! thou art too dear for my prossessing,\n");
    printf("%c%d\n", '$', 2 * cost);

    return 0;
}