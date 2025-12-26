#include <stdio.h>

int main(int argc, char const *argv[]) {
    char c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            printf("\n");
        } else {
            putchar(c);
        }
    }
    
    return 0;
}
