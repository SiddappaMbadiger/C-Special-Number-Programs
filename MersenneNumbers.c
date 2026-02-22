// Program to check if n is a Mersenne number or not?

#include <stdio.h>
int main() {
    int n, p = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    while ((1 << p) - 1 < n) { // Check for Mersenne numbers of the form 2^p - 1
        p++;
    }

    if ((1 << p) - 1 == n) {
        printf("%d is a Mersenne number.\n", n);
    } else {
        printf("%d is not a Mersenne number.\n", n);
    }

    return 0;
}