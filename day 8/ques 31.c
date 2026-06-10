/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char ch = 'A';

        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}