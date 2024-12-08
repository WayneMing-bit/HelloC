#include <stdio.h>

int main() {
    float weight;
    float value;
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");

    // getchar();
    // getchar();
    scanf("%f", &weight);
    value = 1700.0 * weight * 14.5833;

    printf("Your weight in paltinum is worth $%.2f\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("ear more to maintain your value.\n");

    return 0;
}