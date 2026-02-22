// Program to check if n is a Sophie Germain number or not?
#include <stdio.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not prime if divisible by any number up to its square root
    }
    return 1; // Number is prime
}
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("%d is negative number( Enterd only Positive).\n", n);
        return 0; // Exit if n is not a positive integer
    }
    if (isPrime(n) && isPrime(2 * n + 1)) { // Check if n is prime and 2n + 1 is also prime
        printf("%d is a Sophie Germain number.\n", n);
    } else {
        printf("%d is not a Sophie Germain number.\n", n);
    }

    return 0;
}
