#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    /* Declearing the variables of the program */
    char userName[25];
    int theNumberOfChildren;

    /* Requesting the required information from users */
    printf("What is your name?: ");
    fgets(userName, sizeof(userName), stdin);

    size_t lengthOfVariable = strlen(userName);
    if (lengthOfVariable > 0 && userName[lengthOfVariable - 1] == '\n') {
        userName[lengthOfVariable - 1] = '\0';
    }

    printf("How many child(ren) do you have?: ");
    scanf("%d", &theNumberOfChildren);

    /* Printing the result in the command prompt */
    printf("Hello %s! You have %d child(eren) in your apartment!", userName, theNumberOfChildren);

    return 0;
}
