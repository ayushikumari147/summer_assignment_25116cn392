// write a program to reverse a number

#include <stdio.h>
int main(){
    int n,digit;
    printf("enter number:");
    scanf("%d",&n);
    int rev=0;
    
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
printf("the reverse of number =%d",rev);

return 0;
}