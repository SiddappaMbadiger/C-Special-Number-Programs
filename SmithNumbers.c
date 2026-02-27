// Program to check the n is Smith number or not
#include <stdio.h>
#include <math.h>
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() {
    int n, temp, sum_digits = 0, sum_prime_factors = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("%d is not a Smith number.\n", n);
        return 0;
    }

    temp = n;
    while (temp > 1) {
        for (int i = 2; i <= temp; i++) {
            if (temp % i == 0 && is_prime(i)) {
                sum_prime_factors += sum_of_digits(i);
                temp /= i;
                break;
            }
        }
    }

    sum_digits = sum_of_digits(n);

    if (sum_digits == sum_prime_factors) {
        printf("%d is a Smith number.\n", n);
    } else {
        printf("%d is not a Smith number.\n", n);
    }

    return 0;
}