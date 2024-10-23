#include <stdio.h>

int main(int argc, char const *argv[]) {
    /* declaring the variable of the program */
    char userInput[100];
    int userAge;

    /* requesting the varibles from the user: not with scanf(), but fgets() */
    printf("Please enter your name and the desired nick name, correctly: ");
    fgets(userInput, sizeof(userInput), stdin);

    /* requesting the user age with fgets() function again */
    printf("How old are you?: ");
    /* fgets(userAge, sizeof(userAge), stdin); -> It gives error during compiling the program because of the variable type. */
    scanf("%d", &userAge);

    /* printing the result on the screen */
    printf("Hello, %s! You're %d years old! Are you ready to play some funny games?", userInput, userAge);
    
    return 0;
}
