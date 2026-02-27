// Program to check the n is Tetrahedral number or not?
#include <stdio.h>
int main() {
    int n, i = 1, tetrahedral = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (tetrahedral < n) {
        tetrahedral = (i * (i + 1) * (i + 2)) / 6;
        i++;
    }

    if (tetrahedral == n) {
        printf("%d is a Tetrahedral number.\n", n);
    } else {
        printf("%d is not a Tetrahedral number.\n", n);
    }

    return 0;
}