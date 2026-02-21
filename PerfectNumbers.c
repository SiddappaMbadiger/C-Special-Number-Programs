// program to check if a number is perfect or not
#include <stdio.h>
int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add the divisor to the sum
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}