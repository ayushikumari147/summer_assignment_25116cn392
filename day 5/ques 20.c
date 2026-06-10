//write a program to find largest prime factor

#include <stdio.h>

int main() {
    int n, num, largestPrime = -1;

    printf("How many numbers? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        int isPrime = 1;

        if(num < 2)
            isPrime = 0;
        else {
            for(int j = 2; j <= num / 2; j++) {
                if(num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime && num > largestPrime) {
            largestPrime = num;
        }
    }

    if(largestPrime == -1)
        printf("No prime number found.");
    else
        printf("Largest prime number = %d", largestPrime);

    return 0;
}