// This program allows a player to try guessing a random integer in a range based on difficulty
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int max, score;
    char difficulty;

    printf("Choose your difficulty level:\n"
    "1 : easy\n"
    "2 : intermediate\n"
    "3 : advanced\n");
    scanf("%c", &difficulty);

    if (difficulty == '1') max = 11;
    else if (difficulty =='2') max = 101;
    else max = 1001;

    score = max - 1;

    // Next 2 lines create a random integer
    srand(time(0));
    int random = rand() % max, guess;

    do {
        printf("Enter your guess between 0 and %d: ", max - 1);
        scanf("%d", &guess);
        if (guess > random){
            printf("Try a lower value\n");
            score -= max*0.1;
        }
        else if (guess < random){
            printf("Try a higher value\n");
            score -= max*0.1;
        }
        else printf("Congrats!");
    } while (guess != random);

    return 0;
}