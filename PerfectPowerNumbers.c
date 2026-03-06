// program to check if a number is a perfect power or not
#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect power
int is_perfect_power(int num) {
    if (num < 2) {
        return 0; // Perfect powers are greater than or equal to 2
    }

    for (int base = 2; base <= sqrt(num); base++) {
        int power = base * base; // Start with the square of the base
        while (power < num) {
            power *= base; // Multiply by the base to get the next power
        }
        if (power == num) {
            return 1; // It's a perfect power
        }
    }
    return 0; // Not a perfect power
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_perfect_power(n)) {
        printf("%d is a perfect power.\n", n);
    } else {
        printf("%d is not a perfect power.\n", n);
    }

    return 0;
}