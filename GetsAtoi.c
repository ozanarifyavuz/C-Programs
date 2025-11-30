#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char buffer[1000];
    int first = 1;
    int maxValue, minValue;

    while (gets(buffer) != NULL) {

        /* Getting the input from the user and comparing it to the string "done" */
        if (strcmp(buffer, "done") == 0) {
            break;
        }

        /* Fixing the behavior of atoi() function - What happens if users would enter an empty line as an integer? */
        if (buffer[0] == '\0') continue;
        
        /* Converting the input entered by user to an integer by the help of atoi() function */
        int userInput = atoi(buffer);

        /* The variable "first" activates the comparisons in the if statement. Since they haven't been initialized above and 
        it's not good to compared those variables to garbage values, the "first" variable starts the comparison in the first iteration.*/
        if (first || userInput > maxValue) maxValue = userInput;
        if (first || userInput < minValue) minValue = userInput;
        first = 0;
    } 
    
    printf("Maximum %d\n", maxValue);
    printf("Minimum %d\n", minValue);
    
    return 0;
}
