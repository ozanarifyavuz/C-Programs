#include <stdio.h>

int main(int argc, char const *argv[]) {
    char name[100];
    printf("Please, enter your name: ");
    scanf("%100s", name);
    printf("Hello, %s!\n", name);
    
    return 0;
}
