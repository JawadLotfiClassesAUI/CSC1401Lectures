#include <stdio.h> // for regular input/output functions
#include <stdlib.h> // to use the srand and rand functions
#include <time.h> // to use the time function for random # generation
#include <math.h> // to use the abs function

void mainMenu(){
    printf("Main menu:\n"
    "1 - Start a new game\n"
    "2 - Show the high score\n"
    "3 - Clear the high score\n"
    "0 - Quit the game\n"
    "Choice: ");
}

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

// The next few lines are prototypes of functions called in gameStart()
int difficultyChoice();
int generateRandom(int max);
char hintStyle();
int gameHighLow(int max);
int gameCloseFar(int max);
int gameNoHint(int max); // All 6 of these are level 2 functions

int gameStart(){
    int max, score;
    char hint;
    
    max = difficultyChoice(); // This function returns the max of the range of random numbers based on the difficulty level
    hint = hintStyle();
    // Based on the chosen hint style, we need to call the appropriate function
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

// Below are the definitions for the level 2 functions prototyped above
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

int generateRandom(int max){
    // Next 2 lines create and return a random integer between 0 and max
    srand(time(0));
    return rand() % (max+1);
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

// The 3 functions below are variations of the same game using different hints styles
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
        distance = abs(guess - random); // the distance needs to be positive
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