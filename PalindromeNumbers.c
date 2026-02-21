// Program to check if a number is a Palindrome number or not
#include <stdio.h>
int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append the last digit to reversedNum
        num /= 10; // Remove the last digit from num
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a Palindrome number.\n", originalNum);
    } else {
        printf("%d is not a Palindrome number.\n", originalNum);
    }

    return 0;
}