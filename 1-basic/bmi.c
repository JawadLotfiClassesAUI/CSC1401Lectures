/* This program takes in the weight in kgs and height in meters of a person
then computes and displays their corresponding body mass index */
#include <stdio.h>
#include <math.h>

int main(void){
    // Variable Declarations
    float weight, height, bmi;

    // Inputs
    printf("Enter your weight (kgs) and height (m): ");
    scanf("%f %f", &weight, &height);

    // Computation
    bmi = weight / pow(height,2);

    // Output
    printf("Your body mass index is %.2f", bmi);

    return 0; // return 0 to indicate successful program execution
}