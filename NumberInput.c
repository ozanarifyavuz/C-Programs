#include <stdio.h>

int main(int argc, char const *argv[]) {
    /* The variables of the program are declared based on their types, e.g. string, integer, character, and byte. */
    int usf, euf;

    printf("Enter US Floor: ");

    /* The scanf() function reads the entered data, converts it to digit, and assignes it to a variable. */
    scanf("%d", &usf);

    /* The following two lines calculate the European floor value and print it on the screen. */
    euf = usf - 1;
    printf("EU Floor: %d\n", euf);

    return 0;
}
