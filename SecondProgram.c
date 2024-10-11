# include <stdio.h>

int main(int argc, char const *argv[])
{
    /* defining the variables of the program */
    char userName[25];
    int userAge;

    /* requesting the variables from users */
    printf("Please, enter your name: ");
    scanf("%[^\n]25s", userName);

    printf("Please, enter your age correctly: ");
    scanf("%d", &userAge);

    /* printing the result after requesting the required information */
    printf("Hello %s! You're %d years old!\n", userName, userAge);

    return 0;
}
