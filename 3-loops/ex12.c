// This program implements exercise 12 of practice 1 using nested loops
#include <stdio.h>

int main(void){
    int N, row, column;

    printf("Enter an odd number: ");
    scanf("%d", &N);

    for(row = 1; row <= N; row++){
        for(column=1; column <= N; column++){
            printf("%d", (row+column+1)%2); // We use a formula to alternate between displaying 0 or 1
        }
        printf("\n");
    }

    return 0;
}