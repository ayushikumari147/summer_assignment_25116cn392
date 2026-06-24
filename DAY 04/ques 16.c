/*write a program ro print
armstrong number in range*/

#include <stdio.h>

int main() {
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for (int n = start; n <= end; n++) {
        int temp = n;
        int digits = 0;
        int sum = 0;

        // Count digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = n;

        // Calculate Armstrong sum
        while (temp > 0) {
            int digit = temp % 10;
            int power = 1;

            for (int i = 1; i <= digits; i++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == n) {
            printf("%d ", n);
        }
    }

    return 0;
}