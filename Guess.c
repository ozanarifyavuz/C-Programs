#include <stdio.h>

int main(int argc, char const *argv[]) {
    int guess;
    int adjustedGuess = 42;

    /* If users can type 42, then they win the guess game. Otherwise, the while loop forces them to enter another number. */
    printf("Let's try to guess the number by entering an integer: ");

    /* Reading the user input until 42 is entered on the command prompt. */
    while (scanf("%d", &guess) != EOF) {
        if (guess == adjustedGuess) {
            break;
        }
        else if (guess < 42)
            printf("Your value is too low - Try again, please: ");
        else
            printf("Your value is too high - Try again, please: ");
    }

    /* Sending the congratulations message to users after breaking the while loop */
    printf("Congratulations on guessing the correct number! You've won the game!");

    return 0;
}
