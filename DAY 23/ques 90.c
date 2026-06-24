/* Question: Write a program to find first repeating character */

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {

        for(int j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {

            if(str[i] == str[j]) {
                printf("First Repeating Character = %c", str[i]);
                return 0;
            }
        }
    }

    printf("No Repeating Character Found");

    return 0;
}