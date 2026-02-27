// Program to check whether a number is a Catalan number or not

#include <stdio.h>
int main() {
    int n, i = 0, pell = 0, pell_prev = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (pell < n) {
        int temp = pell;
        pell = 2 * pell + pell_prev;
        pell_prev = temp;
        i++;
    }

    if (pell == n) {
        printf("%d is a Pell number.\n", n);
    } else {
        printf("%d is not a Pell number.\n", n);
    }

    return 0;
}