#include <stdio.h>
#include <string.h> // It's required to use strlen() function.

int main(int argc, char const *argv[]) {
    /* declaring the variable of the program */
    char userName[25];
    int userAge;

    /* requesting the varibles from the user: not with scanf(), but fgets() */
    printf("Please enter your name, correctly: ");
    fgets(userName, sizeof(userName), stdin);
    // scanf("%[^\n]25s", userName);

    /* fgets() recognizes pressing the enter after entering the information, so delete the \n not to have it in the output. */
    size_t len = strlen(userName);
    if (len > 0 && userName[len - 1] == '\n') {
        userName[len - 1] = '\0';
    }
    
    /* requesting the user age with fgets() function again */
    printf("How old are you?: ");
    // fgets(userAge, sizeof(userAge), stdin); -> It gives error during compiling the program because of the variable type.
    scanf("%d", &userAge);

    /* printing the result on the screen */
    printf("Hello, %s! You are %d years old, and congratulations on the successful registration!\n", userName, userAge);
    
    return 0;
}