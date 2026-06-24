/* Q102. Write a program to Create voting eligibility system */

#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");

    return 0;
}