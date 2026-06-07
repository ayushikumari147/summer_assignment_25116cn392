/*write a program to check whether
a number is pallindrome.*/

#include <stdio.h>
int main(){
    int n,digit;
    printf("enter number:");
    scanf("%d",&n);
    int rev=0;
    int org=n;
    
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(rev==org){
printf("the number is pallindrome");
    }
else {
    printf("not pallindrome");
}
    
return 0;
}