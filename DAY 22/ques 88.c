/* Question: Write a program to remove spaces from string */

#include <stdio.h>

int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("String after removing spaces: %s", result);

    return 0;
}