/* 
Program to check the n is triangular number or not and Print their resepective triangle pattern

if n is the row number . then : T(n)=2n(n+1)

*/



#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; sum < n; i++) {
        sum += i; // Calculate the sum of the first i natural numbers
        if (sum == n) {
            printf("%d is a triangular number.\n", n);
            printf("Triangle pattern:\n");
            for (int j = 1; j <= i; j++) {
                for (int k = 1; k <= j; k++) {
                    printf("* "); // Print a star for each column in the current row
                }
                printf("\n"); // Move to the next line after printing each row
            }
            return 0; // Exit if n is a triangular number
        }
    }

    printf("%d is not a triangular number.\n", n);
    return 0;
}