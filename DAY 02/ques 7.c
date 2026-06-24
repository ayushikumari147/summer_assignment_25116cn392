//write a program to find product of digit

#include <stdio.h>
int main(){
    int n,digit;
    printf("enter number:");
    scanf("%d",&n);

    int product=1;
    while(n>0){
     digit=n%10;
     product=product*digit;
     n=n/10;

    }
    printf("product =%d",product);
    return 0;
}