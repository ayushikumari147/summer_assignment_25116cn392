/*write a program to find sum of 
digit of number*/
#include <stdio.h>
int main(){
    int n,digit;
    printf("enter number:");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
       digit=n%10;
       sum=sum+digit;
     n=n/10;
    }
    printf("the sum of digit =%d",sum);
    return 0;
}