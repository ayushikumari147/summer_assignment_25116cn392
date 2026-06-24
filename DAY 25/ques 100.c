/* Q100. Write a program to Sort words by length */

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char words[20][50], temp[50];

    printf("Enter number of words: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for(int i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}