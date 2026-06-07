/*write a program to find
factorial of given number */

#include <stdio.h>
int main(){
    int n;
    int fact=1;
    printf("enter number ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
     fact=fact*i;
    
    }
    printf("factorial=%d",fact);
    return 0;
}