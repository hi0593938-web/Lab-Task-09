#include <stdio.h>

int main() {
    int popA, popB;
    float rateA, rateB;
    int years = 0;

    printf("Enter population of Town A: ");
    scanf("%d", &popA);

    printf("Enter growth rate of Town A (in %%): ");
    scanf("%f", &rateA);

    printf("Enter population of Town B: ");
    scanf("%d", &popB);

    printf("Enter growth rate of Town B (in %%): ");
    scanf("%f", &rateB);

    while (popA < popB) {
        popA = popA + (popA * rateA / 100);
        popB = popB + (popB * rateB / 100);
        years++;
    }

    printf("\nAfter %d years:\n", years);
    printf("Population of Town A = %d\n", popA);
    printf("Population of Town B = %d\n", popB);

    return 0;
}
