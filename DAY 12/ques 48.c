/* write a program to write
function for perfect number*/

#include <stdio.h>

int perfect(int x);

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(perfect(n))
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}

int perfect(int x) {
    int sum = 0;

    for(int i = 1; i < x; i++) {
        if(x % i == 0) {
            sum += i;
        }
    }

    return sum == x;
}