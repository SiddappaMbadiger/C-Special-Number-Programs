#include <stdio.h>
#include <math.h>

int main() {

    int num, originalNum, remainder, digitCount = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Step 1: Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digitCount++;
    }

    // Step 2: Calculate sum of each digit raised to power of digitCount
    temp = num;  // temp is 
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digitCount);
        temp /= 10;
    }

    // Step 3: Compare
    if ((int)result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is NOT an Armstrong number.\n", originalNum);

    return 0;
}
