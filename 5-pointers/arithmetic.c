#include <stdio.h>

int main(void){
    int number = 25;
    int* p_number = &number;
    double bigNumber = 336147541545754.548241;
    double* p_bigNumber = &bigNumber;

    for (int i = 0; i < 10; i++){
        printf("shift %d => p_number : %p p_bigNumber : %p\n", i, p_number, p_bigNumber);
        p_number++;
        p_bigNumber++;
    }

    return 0;
}