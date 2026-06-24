/* Question: Write a program to find missing number in an array */

#include <stdio.h>

int main() {
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}