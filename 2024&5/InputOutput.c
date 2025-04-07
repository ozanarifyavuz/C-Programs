#include <stdio.h>

int main() {
    /* Defining the variable of the program - Pay attention to the definition of a string variable! */
    char userName[25];

    /* Requesting the name of the user in the command prompt */
    printf("Please, enter your name: ");

    /* Scanning the input in the above line */
    scanf("%25s", userName);

    /* Printing the result in the command line */
    printf("Hello, %s!", userName);
}