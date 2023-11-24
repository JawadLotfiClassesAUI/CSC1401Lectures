// This project relates to the Case Study
#include <stdio.h>
#include "myfunctions.h"

int main(void) {
    char choice;

    do {
        menu();  // function call
        scanf(" %c", &choice);

        if (choice == '1')
            cuboid();  // function call
        else if (choice == '2')
            cylinder();  // function call
        else if (choice == '0')
            printf("Thank you for using our program. Goodbye!\n");
        else
            printf("Wrong choice\n");
    } while (choice != '0');

    return 0;
}