#include <stdio.h>

int main() {

    /* Defining the variables of th program */
    int usf, euf;

    /* Writing a message in the command prompt so that the program reads it correctly and processes the desired result */
    printf("Enter US Floor: ");
    scanf("%d", &usf);

    /* Doing the math before printing the result of the programSince the US Floor and the EU floor system start from 1 and 0 respectively */
    euf = usf - 1;

    /* Printing the result in the screen */
    printf("EU Floor %d\n", euf);
}