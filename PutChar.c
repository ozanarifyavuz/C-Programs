#include <stdio.h>

int main(int argc, char const *argv[]) {
    char current;
    char previous = ' ';

    while ((current = getchar()) != EOF) {
        if (current == ' ' && previous == ' ') {
            continue;
        }
        else {
            putchar(current);
            previous = current;
        }    
    }

    return 0;
}
