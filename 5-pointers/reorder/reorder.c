#include <stdio.h>
#include "lib.h"

int main(void){
    float number1, number2, number3;

    printf("Please enter 3 numbers\n");
    scanf("%f %f %f", &number1, &number2, &number3);

    display(number1, number2, number3);
    reorder(&number1, &number2, &number3);
    display(number1, number2, number3);

    return 0;
}