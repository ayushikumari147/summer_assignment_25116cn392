/* Question: Write a program to count words in a sentence */

#include <stdio.h>

int main() {
    char str[200];
    int words = 1;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            words++;
    }

    printf("Total Words = %d", words);

    return 0;
}