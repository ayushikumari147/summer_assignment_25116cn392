/* character pyramid 
      A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA    */

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

        // Increasing characters
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        // Decreasing characters
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}