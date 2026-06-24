/* Write a program to Write function to find 
maximum */

#include <stdio.h>
void maximum(int x, int y);
int main(){
int a,b;
printf("enter first number");
     scanf("%d",&a);
     printf("enter second number");
     scanf("%d",&b);
     maximum(a,b);

}
void maximum(int x, int y){
    if(x>y){
        printf("%d",x);
    }
    else {
        printf("%d",y);
    }
    return ;
}

