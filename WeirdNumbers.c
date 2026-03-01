#include <stdio.h>

int isSubsetSum(int divisors[], int n, int sum) {
    if (sum == 0)
        return 1;
    if (n == 0)
        return 0;

    if (divisors[n - 1] > sum)
        return isSubsetSum(divisors, n - 1, sum);

    return isSubsetSum(divisors, n - 1, sum) ||
           isSubsetSum(divisors, n - 1, sum - divisors[n - 1]);
}

int main() {
    int num, i, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    int divisors[100];

    // Find proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            divisors[count++] = i;
            sum += i;
        }
    }

    // Check abundant condition
    if (sum <= num) {
        printf(" %d Not a Weird Number\n", num);
        return 0;
    }

    // Check semi-perfect condition
    if (isSubsetSum(divisors, count, num))
        printf(" %d Not a Weird Number\n", num);
    else
        printf("%d is Weird Number\n" , num);

    return 0;
}