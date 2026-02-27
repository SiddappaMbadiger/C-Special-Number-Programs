// Program to check whether a number is a Catalan number or not
#include <stdio.h>
int main() {
    int n, i = 0, catalan = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (catalan < n) {
        i++;
        catalan = (2 * (2 * i - 1) * catalan) / (i + 1);
    }

    if (catalan == n) {
        printf("%d is a Catalan number.\n", n);
    } else {
        printf("%d is not a Catalan number.\n", n);
    }

    return 0;
}
