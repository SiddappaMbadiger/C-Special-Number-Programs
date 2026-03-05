// Program to find the Fermat numbers or not?
#include <stdio.h>
#include <math.h>

// Function to check if a number is a Fermat number
int is_fermat_number(int num) {
    int n = 0;
    int fermat_number = (1 << (1 << n)) + 1; // F(n) = 2^(2^n) + 1

    while (fermat_number <= num) {
        if (fermat_number == num) {
            return 1; // It's a Fermat number
        }
        n++;
        fermat_number = (1 << (1 << n)) + 1; // Calculate the next Fermat number
    }
    return 0; // Not a Fermat number
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_fermat_number(n)) {
        printf("%d is a Fermat number.\n", n);
    } else {
        printf("%d is not a Fermat number.\n", n);
    }

    return 0;
}