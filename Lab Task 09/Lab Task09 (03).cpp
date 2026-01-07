#include <stdio.h>

int main() {
    int n, num, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num % 2 == 0)
            evenSum = evenSum + num;
        else
            oddSum = oddSum + num;
    }

    printf("Sum of even numbers = %d\n", evenSum);
    printf("Sum of odd numbers = %d\n", oddSum);

    return 0;
}
