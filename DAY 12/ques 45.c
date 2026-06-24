/* write a program to write function
for pallindrome*/

#include <stdio.h>

int palindrome(int x);

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

int palindrome(int x) {
    int temp = x, rev = 0, digit;

    while(x > 0) {
        digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    return temp == rev;
}