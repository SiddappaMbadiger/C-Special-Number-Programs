// Program to generate and print twin prime numbers up to n
#include <stdio.h>
#include <math.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2;
         i <= sqrt(num); i++) {
        if (num % i == 0) return 0; // Not prime if divisible by any number up to its square root
    }
    return 1; // Number is prime
}
    int main() {
        int n;

        printf("Enter the limit: ");
        scanf("%d", &n);

        printf("Twin Prime Numbers up to %d:\n", n);
        for (int i = 2; i <= n - 2; i++) {
            if (isPrime(i) && isPrime(i + 2)) {
                printf("(%d, %d)\n", i, i + 2); // Print the twin prime pair
            }
        }

        return 0;
    }
 
    // Output:
    // Enter the limit: 30
    // Twin Prime Numbers up to 30:
    // (3, 5)
    // (11, 13)
    // (17, 19)
    // (29, 31)

    