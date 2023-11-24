/* This is a program that converts a temperature from Fahrenheit into Celsius */
#include <stdio.h>

int main(void){
    // Variable declarations
    float tempF, tempC;

    // Inputs
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &tempF);

    // computation
    tempC = (tempF-32)*5/9;

    // Output
    printf("%.1f °F is equal to %.1f °C", tempF, tempC);

    return 0; // return 0 to indicate successful program execution
}