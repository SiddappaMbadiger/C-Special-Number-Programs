#include<stdio.h>

void checkHappyNumber(int number) {
    int originalNumber = number;
    int sum, digit;

    do {                              // repeat the process until the number becomes 1 or 4
        sum = 0;
        while (number > 0) {
            digit = number % 10;
            sum += digit * digit; 
            number /= 10;  // remove the last digit
        }
        number = sum;  // it puts the sum of squares back to number for next iteration
    } while (number != 1 && number != 4); 

    if (number == 1) {
        printf("%d is a Happy Number.\n", originalNumber);
    } else {
        printf("%d is not a Happy Number.\n", originalNumber);
    }
}
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkHappyNumber(number);

    return 0;
}

