#include <stdio.h>

int main(int argc, char const *argv[]) {
    char line[1000];

    printf("Please, enter your line up to 1000 characters: ");

    /* fgets() reads a line of text from a file stream (including stdin) and stores it into a character array (a string). */
    fgets(line, sizeof(line), stdin);

    printf("\n");
    printf("You have entered the following line: %s\n", line);

    return 0;
}
