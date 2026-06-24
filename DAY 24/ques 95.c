/* Q95. Write a program to Find longest word */

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50];
    int maxLen = 0, len = 0, start = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            len++;
        else {
            if(len > maxLen) {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }
            len = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Longest word = %s", longest);

    return 0;
}