#include <stdio.h>
#include "engine.h"
int main(void){
    char choice;
    int highScore = 0, score;

    printf("Welcome to our number guessing game\n");
    do{
        mainMenu();
        scanf(" %c", &choice);
        switch(choice){
            case '1':
                score = gameStart();
                if (score > highScore)
                    highScore = score;
                break;
            case '2':
                printf("The current high score is %d\n", highScore);break;
            case '3':
                highScore = clearHighScore(highScore);break;
            case '0':
                printf("Thank you for playing our game. Goodbye!\n");break;
            default:
                printf("Your choice is incorrect, try again\n");
        }
    }while (choice != '0');

    return 0;
}