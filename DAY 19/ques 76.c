/* Question: Write a program to find diagonal sum of a matrix */

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++) {
        sum += a[i][i];
    }

    printf("Diagonal Sum = %d", sum);

    return 0;
}