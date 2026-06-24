/* Question: Write a program to subtract two matrices */

#include <stdio.h>

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int a[r][c], b[r][c];

    printf("Enter first matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    printf("Result Matrix:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ", a[i][j] - b[i][j]);
        }
        printf("\n");
    }

    return 0;
}