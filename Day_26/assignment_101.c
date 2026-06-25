#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    srand(time(0));
    secret = (rand() % 100) + 1;

    printf("I'm thinking of a number between 1 and 100.\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        
        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("You guessed it! The number was %d.\n", secret);
        }
    } while (guess != secret);

    return 0;
}