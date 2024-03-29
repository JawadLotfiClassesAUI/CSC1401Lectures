// This program converts the height of a person from the imperial system into the metric one
#include <stdio.h>
#define FEET_TO_CMS 30.48
#define INCHES_TO_CMS 2.54

// Create the function prototype
float convertHeight(unsigned short int feet, float inches);

int main(void){
    unsigned short int feet;
    float inches, cms;

    printf("Please enter your height in feet and inches\n");
    scanf("%hu %f", &feet, &inches);

    // Call the function and get the result of the conversion
    cms = convertHeight(feet, inches);
    printf("Your height is equal to %.2f centimeters", cms);

    return 0;
}

// Create the function definition
float convertHeight(unsigned short int feet, float inches){
    float result;
    result = feet * FEET_TO_CMS + inches * INCHES_TO_CMS;
    return result;
}