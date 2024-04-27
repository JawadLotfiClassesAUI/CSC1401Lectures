#include <stdio.h>

int main(void){
    int number = 25;
    int* p_number = &number;
    int** p_p_number = &p_number;

    // These 2 lines only use the variable number
    printf("Value of number : %d\n", number);
    printf("Address of number : %p\n\n", &number);

    // These 3 lines only use the pointer p_number
    printf("Address of number : %p\n", p_number);
    printf("Value at the address %p : %d\n", p_number, *p_number);
    printf("Address of p_number : %p\n\n", &p_number);

    // These 3 lines only use the pointer to pointer p_p_number
    printf("Address of p_number : %p\n", p_p_number);
    printf("Value at the address %p : %p\n", p_p_number, *p_p_number);
    printf("Value of the variable number : %d\n\n", **p_p_number);

    return 0;
}