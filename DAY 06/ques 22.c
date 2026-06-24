//convert decimal to binary

#include <stdio.h>

int main() {
    int n;
    long long binary = 0;
    int place = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary number = %lld", binary);

    return 0;
}