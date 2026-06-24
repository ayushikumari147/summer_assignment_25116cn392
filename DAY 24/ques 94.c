/* Q94. Write a program to Compress a string */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count;

    printf("Enter string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        count = 1;

        while(str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}