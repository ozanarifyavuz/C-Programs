#include <stdio.h>

int main(int argc, char const *argv[]) {
    char line[1000];
    /* FILE is type defined in the <stdio.h> and a pointer to the file object. */
    FILE *hand;

    hand = fopen("romeo.txt", "r");

    /* The following while loop continues until it reaches the end of the file (EOF). */
    while (fgets(line, sizeof(line), hand) != NULL) {
        printf("%s", line);
    }
    
    return 0;
}
