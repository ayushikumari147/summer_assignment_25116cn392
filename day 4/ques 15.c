//write a program to check armstrong number

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, count = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count digits
    int temp = n;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    // Calculate sum of digits raised to count
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}