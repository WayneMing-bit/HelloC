#include <stdio.h>
// 5.
#define BOOK "War and Peace"

int main() {
    printf("He sold the painting for $%2.2f.\n", 2.345e2);
    printf("%c%c%c\n", 'H', 105, '\41');
    printf("%2.2e  %2.2f\n", 1201.0, 1201.0);

    // 5.
    float cost = 12.99;
    float percent = 80.0;
    printf("This copy of \"War and Peace\" sells for %2.2f.\n", cost);
    printf("That is %.0f%% of list", percent);

    return 0;
}
