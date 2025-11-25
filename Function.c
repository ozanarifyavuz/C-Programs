#include <stdio.h>

int main(int argc, char const *argv[]) {
    int multiply();
    int returnValue;

    returnValue = multiply(6, 7);
    
    printf("The answer is %d.\n", returnValue); 
}

int multiply(a, b)
    int a, b;
{
    int result = a * b;
    return result;
}