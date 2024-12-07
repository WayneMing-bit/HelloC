#include <stdio.h>

int main() {
    char inputChar = NULL;

    scanf("%c", &inputChar);

    for (int i = 0;i < 3; i++) {
        printf("%c%c%c\n", inputChar, inputChar, inputChar);
    }

    return 0;
}
