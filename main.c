#include <stdio.h>
#include <time.h>

int main() {
    // create a seeded random number based off the time
    int random_number = srand(time(NULL)) / 10000;

    // opening message
    printf("You will guess a number. Good luck. %d");

    // store our guess
    int guess = 0;
    while (guess != random_number) {
        // tell them to input a number
        printf("Guess number: ");
        scanf("%d", &guess);

        // check if the guess is too high, or too low
        // if neither, we have found our number.
        // only issue, if you input a char instead of an int, you'll just have an infinite loop
        if (guess > random_number) {
            printf("Too high!\n");
        } else if (guess < random_number) {
            printf("Too low!\n");
        } else {
            printf("You guessed it correctly! The number was %d.", random_number);
            return 0;
        }
    }
}