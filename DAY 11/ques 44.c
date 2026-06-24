/* write a program to write function
to find factorial */

#include <stdio.h>
int factorial(int x);

int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    printf("factorial = %d",factorial(n));


}

int factorial(int x){
    int fact = 1;
    for(int i=x;i>=1;i--){
        fact=fact*i;
    
    }
    
    return fact;
}