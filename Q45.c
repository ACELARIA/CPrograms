#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int luckyNumber = rand() % 100 + 1; // Generate a random number between 1 and 100

    int guess;
    int attempts = 0;

    printf("I've picked a random number between 1 and 100. Can you guess it?\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == luckyNumber) {
            printf("Congratulations! You guessed the lucky number in %d attempts.\n", attempts);
            break;
        } else {
            printf("Wrong guess. Try again.\n");
            if (guess < luckyNumber) {
                printf("Hint: The lucky number is higher.\n");
            } else {
                printf("Hint: The lucky number is lower.\n");
            }
        }
    }

    if (attempts == 10) {
        printf("Sorry, you ran out of attempts. The lucky number was %d.\n", luckyNumber);
    }

    return 0;
}