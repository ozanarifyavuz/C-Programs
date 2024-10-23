#include <stdio.h>

int main(int argc, char const *argv[]) {
    /* declaring the variable of the program */
    char userName[25];
    int userAge;

    /* requesting the varibles from the user: not with scanf(), but fgets() */
    printf("Please enter your name, correctly: ");
    // fgets(userInput, sizeof(userInput), stdin);
    scanf("%[^\n]25s", userName);

    /* requesting the user age with fgets() function again */
    printf("How old are you?: ");
    // fgets(userAge, sizeof(userAge), stdin); -> It gives error during compiling the program because of the variable type.
    scanf("%d", &userAge);

    /* printing the result on the screen */
    printf("Hello, %s! You are %d years old, and congratulations for the successful registration!", userName, userAge);
    
    return 0;
}
