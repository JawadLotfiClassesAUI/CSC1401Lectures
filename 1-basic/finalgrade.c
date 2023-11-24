/* This program takes in the quiz, midterm, and final exam grade
then computes and displays the corresponding final average */
#include <stdio.h>

int main(void){
    // Variable Declarations
    float quiz, midterm, final, result;

    // Inputs
    printf("Enter the quiz, midterm, and final grades: ");
    scanf("%f %f %f", &quiz, &midterm, &final);

    // Computation
    result = quiz * 0.25 + midterm * 0.35 + final * 0.4;

    // Output
    printf("The final average is %.2f", result);

    return 0; // return 0 to indicate successful program execution
}