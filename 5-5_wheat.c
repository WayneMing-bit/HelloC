#include <stdio.h>
#define SQUARES 64

int main() {
    const double CROP = 2E16;
    double current, total;
    int count = 1;
    printf("square\t\tgrains\t\ttotal\t\t");
    printf("fraction of \n");
    printf("added\t\tgraine\t\t");
    printf("world total\n");
    total = current = 1.0;
    printf("%d %21.2e %16.2e %16.2e\n", count, current, total, total / CROP);

    while (count < SQUARES) {
        count += 1;
        current = 2.0 * current;
        total += current;
        printf("%d %21.2e %16.2e %16.2e\n", count, current, total, total / CROP);
    }

    return 0;
}