//write a program to to find nth term of fibonacci series

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1)
        printf("Nth term = %d", a);
    else if (n == 2)
        printf("Nth term = %d", b);
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth term = %d", b);
    }

    return 0;
}