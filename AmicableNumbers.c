// Program to check if two numbers are amicable or not
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
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum1 = sum_of_proper_divisors(num1);
    int sum2 = sum_of_proper_divisors(num2);

    if (sum1 == num2 && sum2 == num1) {
        printf("%d and %d are amicable numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not amicable numbers.\n", num1, num2);
    }

    return 0;
}