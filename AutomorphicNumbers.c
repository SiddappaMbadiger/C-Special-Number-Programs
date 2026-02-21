// Program to check the number is Automorphic number or not
#include <stdio.h>
int main() {
    int num, square, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num; // Calculate the square of the number
    temp = num; // Store the original number in temp

    // Check if the last digits of the square are the same as the original number
    while (temp > 0) {
        if (temp % 10 != square % 10) {
            printf("%d is not an Automorphic number.\n", num);
            return 0; // Exit if it's not an Automorphic number
        }
        temp /= 10; // Remove the last digit from temp
        square /= 10; // Remove the last digit from square
    }

    printf("%d is an Automorphic number.\n", num);
    return 0;
}