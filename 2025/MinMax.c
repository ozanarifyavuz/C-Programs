#include <stdio.h>

int main(int argc, char const *argv[]) {
    int first = 1;
    int val, minVal, maxVal;

    while (scanf("%d", &val) != EOF) {
        if (first || val > maxVal) maxVal = val;
        if (first || val < minVal) minVal = val;
        first = 0;
    }
    
    /* The following two lines write the minimum and maximum values on the screen. */
    printf("Maximum %d\n", maxVal);
    printf("Minimum %d\n", minVal);
    
    return 0;
}