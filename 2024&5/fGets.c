#include <stdio.h>

int main(int argc, char const *argv[]) {
    /* declaring the variable of the program */
    char userInput[100];

    /* requesting the line input from the customer */
    printf("Enter your text line, please: ");
    fgets(userInput, sizeof(userInput), stdin);

    /* printing the result on the command prompt */
    printf("The line that you've entered is: %s\n", userInput);

    return 0;
}
