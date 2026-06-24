/* Question: Write a program to find maximum occurring character in a string */

#include <stdio.h>

int main() {
    char str[100];
    int maxFreq = 0, count;
    char maxChar;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {

        count = 0;

        for(int j = 0; str[j] != '\0' && str[j] != '\n'; j++) {

            if(str[i] == str[j]) {
                count++;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            maxChar = str[i];
        }
    }

    printf("Maximum Occurring Character = %c\n", maxChar);
    printf("Frequency = %d", maxFreq);

    return 0;
}