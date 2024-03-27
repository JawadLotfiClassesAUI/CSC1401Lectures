#include <stdio.h>
// We include our header file that contains the prototypes of the functions required by the main
#include "engine.h"

int main(void){
    char choice;
    int highScore = 0;

    printf("Welcome to our number guessing game\n");
    // Our main function's only responsibility is to continuously present the user with choices, get their choice, then handle it.
    do{
        mainMenu();
        scanf(" %c", &choice); // The space before %c ensure that previous inputs do not interfere because of the \n in the buffer
        handleChoice(choice, highScore);
    }while (choice != '0');

    return 0;
}