#include <stdio.h>
#define BUFFER 5

void menu(){
    printf("\nPlease choose one of the options below:\n"
        "1 - Add a number\n"
        "2 - Display entered numbers\n"
        "3 - Display sum of numbers\n"
        "0 - Quit the program\n");
}

void add(int array[BUFFER], int* p_size){
    if (*p_size < BUFFER){
        scanf("%d", &array[*p_size]);
        (*p_size)++;
    } else
        printf("\nThe array is already full\n");
}

void display(int array[BUFFER], int size){
    printf("\nThe values are\n");
    for (int i=0; i<size;i++){
        printf("%d\t", array[i]);
    }
}

void computeSum(int array[BUFFER], int size){
    int sum = 0;
    for (int i=0; i<size;i++){
        sum += array[i];
    }
    printf("\nThe sum is %d\n", sum);
}