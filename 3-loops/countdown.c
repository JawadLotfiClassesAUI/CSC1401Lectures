// This program implements a simple countdown timer using while
#include <stdio.h>
#include <unistd.h>

int main(void){
    int timer;

    printf("Enter the start of the countdown: ");
    scanf("%d", &timer);

    while (timer >= 0){
        printf("%d\n", timer);
        timer--;
        sleep(1);
    }

    printf("End");

    return 0;
}