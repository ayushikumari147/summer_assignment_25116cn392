// write a program to count det bits in a number

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        count += n & 1;
        n = n >> 1;
    }

    printf("Number of set bits = %d", count);

    return 0;
}