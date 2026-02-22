// To check the n is cube number or not?
#include <stdio.h>
int main() {
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i * i * i < n) {
        i++;
    }

    if (i * i * i == n) {
        printf("%d is a cube number.\n", n);
    } else {
        printf("%d is not a cube number.\n", n);
    }

    return 0;
}