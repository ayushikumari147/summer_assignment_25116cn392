/* Question: Write a program to check whether two strings are anagrams */

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0};
    int count2[256] = {0};
    int flag = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != '\n')
            count1[(int)str1[i]]++;
    }

    for(int i = 0; str2[i] != '\0'; i++) {
        if(str2[i] != '\n')
            count2[(int)str2[i]]++;
    }

    for(int i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Anagram Strings");
    else
        printf("Not Anagram Strings");

    return 0;
}