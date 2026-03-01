// Program to check if number is friendly or not
#include <stdio.h>
int sum_of_proper_divisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sum_of_proper_divisors(num);

    if (sum == num) {
        printf("%d is a friendly number.\n", num);
    } else {
        printf("%d is not a friendly number.\n", num);
    }

    return 0;
}