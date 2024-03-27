// This file contains all function definitions required in this project
#include <stdio.h> // for regular input/output functions
#include <stdlib.h> // to use the srand and rand functions
#include <time.h> // to use the time function for true random number generation
#include <math.h> // to use the abs function

// All functions prototypes except for level 1 functions. This is helpful to define our functions in ascending level orders
int gameStart();
int clearHighScore(int highScore);
int difficultyChoice();
char hintStyle();
int generateRandom(int max);
int gameHighLow(int max);
int gameCloseFar(int max);
int gameNoHint(int max);

// Level 1 functions - called by the main
void mainMenu(){
    printf("Main menu:\n"
    "1 - Start a new game\n"
    "2 - Show the high score\n"
    "3 - Clear the high score\n"
    "0 - Quit the game\n"
    "Choice: ");
}

void handleChoice(char choice, int highScore){
    int score;
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
}

// Level 2 functions - called by handleChoice
int clearHighScore(int currentValue){
    char choice;
    printf("You are about to reset the high score to zero.\n"
    "Press y/Y if you want to proceed\n");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y')
        return 0;
    else
        return currentValue;
}

int gameStart(){
    int max, score;
    char hint;
    
    max = difficultyChoice();
    hint = hintStyle();
    switch (hint){
        case '1':
            score = gameHighLow(max); break;
        case '2':
            score = gameCloseFar(max); break;
        case '3':
            score = gameNoHint(max); break;
        default:
            printf("An unexpected error happened");
            score = -1;
    }
    
    return score;    
}

// Level 3 functions - called by gameStart
int difficultyChoice(){
    char difficulty;
    printf("Choose your difficulty level:\n"
    "1 : easy\n"
    "2 : intermediate\n"
    "3 : advanced\n");
    scanf(" %c", &difficulty);
    if (difficulty == '1')
        return 10;
    else if (difficulty =='2')
        return 100;
    else
        return 1000;
}

char hintStyle(){
    char choice;
    do{
        printf("This game can be played using hints.  Choose one of the following:\n"
        "1 - higher/lower hint\n"
        "2 - close/far\n"
        "3 - no hints!\n");
        scanf(" %c", &choice);
    } while(choice != '1' && choice != '2' && choice != '3');
    return choice;    
}

int gameHighLow(int max){
    int guess, random = generateRandom(max), score = max;
    do {
        printf("Enter your guess between 0 and %d: ", max);
        scanf("%d", &guess);
        if (guess > random){
            printf("Try a lower value\n");
            score -= max*0.1;
        }
        else if (guess < random){
            printf("Try a higher value\n");
            score -= max*0.1;
        }
        else
            printf("Congratulations! Your score is %d\n", score);
    } while (guess != random);
    return score;
}

int gameCloseFar(int max){
    int guess, random = generateRandom(max), score = max, distance;
    do {
        printf("Enter your guess between 0 and %d: ", max);
        scanf("%d", &guess);
        distance = abs(guess - random);
        if (distance > max * 0.6){
            printf("You are very far\n");
            score -= max*0.1;
        }
        else if (distance > max * 0.3){
            printf("You are a bit far\n");
            score -= max*0.1;
        }
        else if (distance > max * 0.2){
            printf("You are a bit close\n");
            score -= max*0.1;
        }
        else if (distance > max * 0.1){
            printf("You are close\n");
            score -= max*0.1;
        }
        else if (distance > 0){
            printf("You are very close\n");
            score -= max*0.1;
        }
        else
            printf("Congratulations! Your score is %d\n", score);
    } while (guess != random);
    return score;
}

int gameNoHint(int max){
    int guess, random = generateRandom(max), score = max;
    do {
        printf("Enter your guess between 0 and %d: ", max);
        scanf("%d", &guess);
        if (guess != random){
            printf("Your guess is wrong, try again\n");
            score -= max*0.1;
        }
        else
            printf("Congratulations! Your score is %d\n", score);
    } while (guess != random);
    return score;
}

// Level 4 function - called by the 3 games
int generateRandom(int max){
    // Next 2 lines create and return a random integer between 0 and max
    srand(time(0));
    return rand() % (max+1);
}