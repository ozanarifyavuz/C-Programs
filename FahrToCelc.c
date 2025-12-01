#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 40

int main(int argc, char const *argv[]) {
    
    int fahrenheit;

    printf("FAHR   CELSIUS\n");
    printf("===============\n");

    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit += STEP) {
        printf("%4d %6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit - 32));
    }
    
    return 0;
}
