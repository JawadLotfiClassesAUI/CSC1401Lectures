#include <stdio.h>
void display(float number1, float number2, float number3){
    printf("The numbers you entered are %f, %f, and %f\n", number1, number2, number3);
}

void swap(float* p_num1, float* p_num2){
    float temp = *p_num1;
    *p_num1 = *p_num2;
    *p_num2 = temp;
}

void reorder(float* p_number1, float* p_number2, float* p_number3){
    if (*p_number1 > *p_number2) {
        swap(p_number1, p_number2);
    }
    
    if (*p_number2 > *p_number3) {
        swap(p_number2, p_number3);
    }

    if (*p_number1 > *p_number2) {
        swap(p_number1, p_number2);
    }
}