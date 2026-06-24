/* write a program to write 
function for armstrong*/  
#include <stdio.h>

int armstrong(int x);

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}

int armstrong(int x) {
    int temp = x, digit, sum = 0;

    while(x > 0) {
        digit = x % 10;
        sum = sum + digit * digit * digit;
        x = x / 10;
    }

    return temp == sum;
}