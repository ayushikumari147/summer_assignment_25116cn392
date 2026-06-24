/* Q99. Write a program to Sort names alphabetically */

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char name[20][50], temp[50];

    printf("Enter number of names: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", name[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Sorted Names:\n");
    for(int i = 0; i < n; i++)
        printf("%s\n", name[i]);

    return 0;
}