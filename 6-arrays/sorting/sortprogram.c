#include <stdio.h>
#include "arrayfunctions.h"
#define SIZE 10

int main(void){
    int choice;
    int numbers[SIZE];

    initArray(numbers, SIZE);

    printf("This program shows multiple algorithms to sort an array of numbers\n");
    do{
        printf("Please choose one of the following options:\n"
                "1 - Bubble Sort\n"
                "2 - Selection Sort\n"
                "3 - Display the array of numbers\n"
                "0 - Quit the program\n");
        scanf("%d", &choice);
        switch (choice){
            case 1: bubbleSort(numbers, SIZE); break;
            case 2: selectionSort(numbers, SIZE); break;
            case 3: displayArray(numbers, SIZE); break;
            case 0: printf("Goodbye!"); break;
            default: printf("Wrong choice, you need to enter one of the options in the menu\n"); break;
        }
    } while (choice != 0);

    return 0;
}