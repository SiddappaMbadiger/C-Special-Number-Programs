// Program to check the n is Evil number or not

#include <stdio.h>
int count_set_bits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1; // Increment count if the least significant bit is 1
        num >>= 1; // Right shift to check the next bit
    }
    return count;
}
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int set_bits_count = count_set_bits(n);

    if (set_bits_count % 2 == 0) {
        printf("%d is an Evil number.\n", n);
    } else {
        printf("%d is not an Evil number.\n", n);
    }

    return 0;
}
