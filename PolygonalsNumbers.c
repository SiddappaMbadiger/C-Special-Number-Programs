// Program to check if a number is a polygonal number

#include <stdio.h>
#include <math.h>

int is_polygonal(int num, int s) {
    // Calculate the nth polygonal number using the formula: P(n) = n * ((s - 2) * n - (s - 4)) / 2
    // We need to find n such that P(n) = num
    // Rearranging gives us a quadratic equation in terms of n
    double a = (s - 2) / 2.0;
    double b = -(s - 4) / 2.0;
    double c = -num;

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
        return 0; // No real roots, so not a polygonal number

    double sqrt_disc = sqrt(discriminant);
    double n1 = (-b + sqrt_disc) / (2 * a);
    double n2 = (-b - sqrt_disc) / (2 * a);

    // Check if either n1 or n2 is a positive integer
    if ((n1 > 0 && floor(n1) == n1) || (n2 > 0 && floor(n2) == n2))
        return 1; // It's a polygonal number

    return 0; // Not a polygonal number
}

int main() {
    int num, s;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the number of sides (s) for the polygonal number: ");
    scanf("%d", &s);

    if (is_polygonal(num, s))
        printf("%d is a %d-gonal number.\n", num, s);
    else
        printf("%d is not a %d-gonal number.\n", num, s);

    return 0;
}