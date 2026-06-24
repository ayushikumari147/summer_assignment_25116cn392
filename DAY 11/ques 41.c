/*Write a program to Write function to
 find sum of two number */

 #include <stdio.h>
int sum(int x,int y);

int main(){
    int a,b;
    printf("enter first number");
     scanf("%d",&a);
     printf("enter second number");
     scanf("%d",&b);
     sum(a,b);
printf("the sum is : %d",sum(a,b));
}
int sum(int x,int y){
return x+y;
}