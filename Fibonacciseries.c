// Program to generate and print the Fibonacci series up to n terms
#include <stdio.h>
#include <math.h>
int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // The first two terms are 0 and 1
        } else {
            next = first + second; // Calculate the next term
            first = second; // Update first to the last term
            second = next; // Update second to the new term
        }
        printf("%d ", next); // Print the current term
    }
    printf("\n");

    return 0;
}