#include <stdio.h>

int main(int argc, char const *argv[]) {
    char line[1000];
    printf("Enter a line: ");

    /* The part of "%[^\n]" says that the scanf() functions matches any character that is not a new line. */
    scanf("%[^\n]1000s", line);

    printf("Line is -> %s\n", line);
    
    return 0;
}
