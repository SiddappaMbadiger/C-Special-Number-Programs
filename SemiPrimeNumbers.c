// Program to find the semi-prime numbers or not?
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // Found a divisor, not prime
    }
    return true; // No divisors found, it's prime
}

// Function to check if a number is a semi-prime
bool is_semi_prime(int num) {
    int count = 0; // Count of prime factors
    for (int i = 2; i <= num && count < 2; i++) {
        while (num % i == 0) { // While i is a factor
            if (is_prime(i)) { // Check if it's prime
                count++; // Increment count of prime factors
            }
            num /= i; // Divide num by the prime factor
        }
    }
    return count == 2; // A semi-prime has exactly two prime factors
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_semi_prime(n)) {
        printf("%d is a Semi-Prime number.\n", n);
    } else {
        printf("%d is not a Semi-Prime number.\n", n);
    }

    return 0;
}
