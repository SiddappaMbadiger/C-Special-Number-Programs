// Program to check if n is Catalan number or not?

#include<stdio.h>
#include<math.h>
// Function to calculate the nth Catalan number using dynamic programming
unsigned long long catalan(int n) {
    unsigned long long catalan[n + 1];
    catalan[0] = 1; // C(0) is 1

    for (int i = 1; i <= n; i++) {
        catalan[i] = 0;
        for (int j = 0; j < i; j++) {
            catalan[i] += catalan[j] * catalan[i - 1 - j]; // C(n) = sum of C(i)*C(n-1-i) for i=0 to n-1
        }
    }

    return catalan[n];
}
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    unsigned long long result = catalan(n);
    printf("%d is the %dth Catalan number.\n", result, n);

    return 0;
}