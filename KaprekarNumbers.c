// c Program to check if a number is a Kaprekar number or not?

#include <stdio.h>
#include <math.h>
int main() {
    int n, sq, count = 0, r, l;

    printf("Enter a number: ");
    scanf("%d", &n);

    sq = n * n; // Calculate the square of the number

    // Count the number of digits in the square
    int temp = sq;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    // Split the square into two parts
    r = sq % (int)pow(10, count / 2); // Right part
    l = sq / (int)pow(10, count / 2); // Left part

    // Check if the sum of the two parts equals the original number
    if (l + r == n) {
        printf("%d is a Kaprekar number.\n", n);
    } else {
        printf("%d is not a Kaprekar number.\n", n);
    }

    return 0;
}