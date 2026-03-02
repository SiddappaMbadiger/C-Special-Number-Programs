// Program to check if a number is a Happy Prime number or not
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // If divisible by any number other than 1 and itself
    }
    return true;
}
// Function to calculate the sum of squares of digits
int sum_of_squares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10; // Get the last digit
        sum += digit * digit; // Add the square of the digit to the sum
        num /= 10; // Remove the last digit
    }
    return sum;
}
// Function to check if a number is a Happy number
bool is_happy(int num) {
    int slow = num, fast = num;
    do {
        slow = sum_of_squares(slow); // Move one step
        fast = sum_of_squares(sum_of_squares(fast)); // Move two steps
    } while (slow != fast); // Loop until they meet

    return slow == 1; // If they meet at 1, it's a Happy number
}


int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n) && is_happy(n)) {
        printf("%d is a Happy Prime number.\n", n);
    } else {
        printf("%d is not a Happy Prime number.\n", n);
    }

    return 0;
} 