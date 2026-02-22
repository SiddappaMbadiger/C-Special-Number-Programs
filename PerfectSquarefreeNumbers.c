// Program to check if n is a Perfect Squarefree number or not?
#include <stdio.h>
#include <math.h>
// Function to check if a number is a perfect square
int isPerfectSquare(int num) {
    int root = (int)sqrt(num);
    return root * root == num; // Check if the square of the root equals the original number
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("%d is not a perfect squarefree number ( Entered only Positive).\n", n);
        return 0; // Exit if n is not a positive integer
    }

    if (!isPerfectSquare(n)) { // Check if n is not a perfect square
        printf("%d is a perfect squarefree number.\n", n);
    } else {
        printf("%d is not a perfect squarefree number.\n", n);
    }

    return 0;
}