// To check the n is square number or not?

#include<stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i * i < n) {
        i++;
    }

    if (i * i == n) {
        printf("%d is a square number.\n", n);
    } else {
        printf("%d is not a square number.\n", n);
    }

    return 0;
}