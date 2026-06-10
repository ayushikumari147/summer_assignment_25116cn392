/*write program to print prime
number in a range*/

#include <stdio.h>

int main() {
    int start, end, n, i, count;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for (n = start; n <= end; n++) {
        count = 0;

        if (n <= 1)
            continue;

        for (i = 1; i <= n; i++) {
            if (n % i == 0)
                count++;
        }

        if (count == 2)
            printf("%d ", n);
    }

    return 0;
}

