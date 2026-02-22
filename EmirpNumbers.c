// Program to check n is an Emirp number or not?
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) 
        return 0; // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0; // Not prime if divisible by any number up to its square root
    }
    return 1; // Number is prime
}
// Function to reverse the digits of a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10; // Append the last digit to the reversed number
        num /= 10; // Remove the last digit
    }
    return reversed;
}
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) { // Check if the number is prime
        int reversed = reverseNumber(n); // Reverse the number
        if (n != reversed && isPrime(reversed)) { // Check if the reversed number is prime and not the same as the original
            printf("%d is an Emirp number.\n", n);
        } else {
            printf("%d is not an Emirp number.\n", n);
        }
    } else {
        printf("%d is not an Emirp number.\n", n);
    }

    return 0;
}