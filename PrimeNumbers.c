// Program to check the number is prime or not
#include <stdio.h>
int main() {
    int num, i, isPrime = 1; // Assume the number is prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i <= num / 2; i++) { // Check divisibility from 2 to num/2
            if (num % i == 0) {
                isPrime = 0; // If divisible, it's not a prime number
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}