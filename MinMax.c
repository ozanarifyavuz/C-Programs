#include <stdio.h>

int main() {
    /* Declaring the variables of the program */
    int first = 1;
    int val, maxVal, minVal;

    /* The while loop requests integers from users until its EOF, which means that 
    you need to enter "CTRL + Z + ENTER" to break the while loop and see the max and min values. */
    while (scanf("%d", &val) != EOF) {
        if (first || val > maxVal) maxVal = val;
        if (first || val < minVal) minVal = val;
        first = 0;
    }

    /* Printing the values on the screen */
    printf("The maximum entered value is: %d\n", maxVal);
    printf("The minimum entered value is: %d\n", minVal);

    return 0;
}
