// This program implements a simple countdown timer using do while
#include <stdio.h>
#include <unistd.h>

int main(void){
    int timer;

    printf("Enter the start of the countdown: ");
    scanf("%d", &timer);

    do {
        printf("%d\n", timer);
        timer--;
        sleep(1);
    }while (timer >= 0);

    printf("End");

    return 0;
}