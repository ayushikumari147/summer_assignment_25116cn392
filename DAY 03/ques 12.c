//write a program to to find lcm of two number

//using the formula (a*b)/gcd
#include <stdio.h>

int main() {
    int a, b, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    lcm = (a * b) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}