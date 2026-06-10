/* print star pattern 
    *
   * * *
  * * * * *
 * * * * * * *
* * * * * * * * *      */

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars (odd numbers: 1,3,5,7,...)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}