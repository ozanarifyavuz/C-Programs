#include <stdio.h>

int main(int argc, char const *argv[])
{
    char line[1000];
    printf("Enter line: ");
    fgets(line, 1000, stdin);
    printf("Line: %s", line);
    return 0;
}