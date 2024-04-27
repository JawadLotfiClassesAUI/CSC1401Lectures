#include <stdio.h>
#include "header.h"
#define BUFFER 5

int main(void){
    int size = 0;
    int numbers[BUFFER];
    char choice;
    do{
        menu();
        scanf(" %c", &choice);
        switch (choice){
            case '1':
                add(numbers, &size);
                break;
            case '2':
                display(numbers, size);
                break;
            case '3':
                computeSum(numbers, size);
                break;
            case '0':
                printf("\nThank you, goodbye!\n");
                break;
            default:
                printf("\nWrong choice\n");
        }
    } while (choice != '0');

    return 0;
}

