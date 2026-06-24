/* Question: Write a program to remove duplicates from an array */

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array after removing duplicates:\n");

    for(int i = 0; i < n; i++) {
        int duplicate = 0;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }

        if(duplicate == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}