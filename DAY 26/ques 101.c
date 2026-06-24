/* Q101. Write a program to Create number guessing game */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    do {
        printf("Guess a number (1-100): ");
        scanf("%d", &guess);

        attempts++;

        if(guess > number)
            printf("Too High\n");
        else if(guess < number)
            printf("Too Low\n");
        else
            printf("Correct! Attempts = %d\n", attempts);

    } while(guess != number);

    return 0;
}