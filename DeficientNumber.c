// Program to Check the Deficient Number or not

#include <stdio.h>
// Function to calculate the sum of proper divisors of a number
    int sumOfDivisors(int num) {
        int sum = 1; // Start with 1, which is a proper divisor
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i; // Add the divisor to the sum
            }
        }
        return sum;
    }   
int main() {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        int sum = sumOfDivisors(num);

        if (sum < num) {
            printf("%d is a deficient number.\n", num);
        } else {
            printf("%d is not a deficient number.\n", num);
        }

        return 0;
}