#include <stdio.h>
#define BLURB "Authentic imitation!"

int main() {
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    double cash = 999999999999999.99;
    char name[20] = "WayneMing";
    printf("The %s family just may be $%.2f dollars richer!\n", name, cash);

    return 0;
}