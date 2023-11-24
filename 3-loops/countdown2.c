// This program implements a simple countdown timer using for
#include <stdio.h>
#include <unistd.h>

int main(void){
    int timer;

    printf("Enter the start of the countdown: ");
    scanf("%d", &timer);

    for (timer; timer >= 0; timer--){
        printf("%d\n", timer);
        sleep(1);
    }

    printf("End");

    return 0;
}