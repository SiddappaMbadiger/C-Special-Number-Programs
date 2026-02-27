// program to check if a number is a Lucas number or not
#include <stdio.h>
int main() {
    int n, i = 0, lucas = 2, lucas_prev = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (lucas < n) {
        int temp = lucas;
        lucas = lucas + lucas_prev;
        lucas_prev = temp;
        i++;
    }

    if (lucas != n) {
        printf("%d is a Lucas number.\n", n);
    } else {
        printf("%d is not a Lucas number.\n", n);
    }

    return 0;
}