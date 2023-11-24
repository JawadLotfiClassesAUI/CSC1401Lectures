// This program computes the body mass index and evaluates if it is low, average, or high
#include <stdio.h>
#include <math.h>

int main(void){
    float weight, height, bmi;

    printf("Enter your weight (in kgs) and height (in meters): ");
    scanf("%f %f", &weight, &height);

    bmi = weight/pow(height,2);

    if (bmi < 18.5)
        printf("Low bmi");
    else if (bmi < 25)
        printf("Average bmi");
    else
        printf("High bmi");

    return 0;
}