/* Q96. Write a program to Remove duplicate characters */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        int duplicate = 0;

        for(int j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate)
            printf("%c", str[i]);
    }

    return 0;
}