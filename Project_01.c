// * We will make our first project in C which is a number guessing game

#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main() {
    int randomNumber, guess,nguesses = 1;
    srand(time(0));
    randomNumber = rand()%100 + 1;

    // ? Keep running the loop until the randomNumber is guessed right
    do {
        printf("Guess the number between 1 and 100\n");
        scanf("%d", &guess);
        if (guess > randomNumber) {
            printf("Too high! Guess a lower number!\n");
        } else if (guess < randomNumber) {
            printf("Too low! Guess a higher number!\n");
        } else {
            printf("You guessed right in %d attempts!\n", nguesses);
        }
        nguesses++; 
    } while(guess!=randomNumber);

    return 0;
}
