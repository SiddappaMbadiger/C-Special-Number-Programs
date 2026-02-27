// Program to check whether  number is a magic number or not
#include <stdio.h>
int main() {
    int n, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    while (sum > 9) {
        int new_sum = 0;
        while (sum > 0) {
            new_sum += sum % 10;
            sum /= 10;
        }
        sum = new_sum;
    }

    if (sum == 1) {
        printf("%d is a magic number.\n", n);
    } else {
        printf("%d is not a magic number.\n", n);
    }

    return 0;
}