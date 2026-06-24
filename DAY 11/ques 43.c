/* write a program to write function
to chech prime*/

#include <stdio.h>
void checkprime(int x);
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    checkprime(n);
}

void checkprime(int x){
    int count = 0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
        if(count==2){
            printf("prime");
        }
        else{
            printf("not prime");
        }
    }

