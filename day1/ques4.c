/*write a program to count digit
in a number*/

#include <stdio.h>
int main(){
    int n,digit;
    int count=0;
    printf("enter number ");
    scanf("%d",&n);

    while(n>0){
    digit=n%10;
    count++;
    n=n/10;
    } 
    printf("the number of digit=%d",count);
    return 0;
}