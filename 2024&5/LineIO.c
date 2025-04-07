#include <stdio.h>

int main() {
    /* Defining the variables of the program */
    char line[1000];

    /* Requesting a line from the user */
    printf("Enter line: ");

    /* Reading the line with the scanf function - Please, pay attention to the [^\n]1000s part of the line: Anything except a new line! */
    scanf("%[^\n]1000s", line);

    /* Printin the result in the command prompt */
    printf("The provided line by the user: %s\n", line);
}