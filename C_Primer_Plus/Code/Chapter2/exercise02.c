/* exercise02.c -- Chapter2 编程练习 */
#include <stdio.h>

// 4.
void jolly() {
    printf("For he's a jolly good fellow!\n");
}

// 4.
void deny() {
    printf("Which nobody can deny!\n");
}

// 5.
void br() {
    printf("Brazil, Russia");
}

// 5.
void ic() {
    printf("India, China\n");
}

// 7.
void smile() {
    printf("Smile!");
}

// 8.
void two() {
    printf("two\n");
}

// 8.
void three() {
    printf("three\n");
}

// 8.
void one_three() {
    printf("starting now:\n");
    printf("one\n");
    two();
    three();
    printf("done!\n");
}



int main() {
    // 1.
    printf("%s %s\n", "Gustav", "Mahler");
    printf("%s\n%s\n", "Gustav", "Mahler");
    printf("%s ", "Gustav");
    printf("%s\n", "Mahler");


    // 2.
    printf("WayneMing LA\n");

    // 3.
    printf("Year: %d -> Day: %d\n", 1990, (2024-1990) * 30);

    // 4.
    jolly();
    jolly();
    jolly();
    deny();

    // 5.
    br();
    printf(", ");
    ic();
    ic();
    br();

    // 6.
    int toes = 10;
    int toes2 = toes * 2;   // toes的两倍
    int toes3 = toes * 10;  // toes的平方
    printf("toes = %d, toes double = %d, toes^2 = %d\n",toes, toes2, toes3);

    // 7.
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");

    // 8.
    one_three();

    return 0;
}
