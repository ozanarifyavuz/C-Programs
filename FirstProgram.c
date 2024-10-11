#include <stdio.h>

int main() {
    /* Defining the variables of the program */
    char userName[25];
    int userAge;

    /* Requesting the name and surname of the user on the screen */
    printf("Please, enter your name: ");
    scanf("%[^\n]25s", userName);

    printf("Please, enter your age: ");
    scanf("%d", &userAge);

    /* Printing the result in the screen */
    printf("Hello, %s! You're %d years old.\n", userName, userAge);
}