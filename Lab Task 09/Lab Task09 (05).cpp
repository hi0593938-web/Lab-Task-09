#include <stdio.h>

int main() {
    float temp[7];
    float sum = 0, average, highest;
    int i;

    // Input temperatures
    for (i = 0; i < 7; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temp[i]);
        sum = sum + temp[i];
    }

    // Initialize highest temperature
    highest = temp[0];

    // Find highest temperature
    for (i = 1; i < 7; i++) {
        if (temp[i] > highest) {
            highest = temp[i];
        }
    }

    // Calculate average
    average = sum / 7;

    // Output results
    printf("\nAverage temperature of the week = %.2f\n", average);
    printf("Highest temperature of the week = %.2f\n", highest);

    return 0;
}
