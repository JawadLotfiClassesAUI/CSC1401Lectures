// This program implements a simple multiplication table based on user input
#include <stdio.h>

int main(void){
    int N;

    printf("Enter the number: ");
    scanf("%d", &N);

    for (int counter=1; counter <= 10; counter++){
        printf("%3d x %3d = %3d\n", N, counter, N*counter); // %3d means we are using 3 spaces to output the int
    }

    return 0;
}