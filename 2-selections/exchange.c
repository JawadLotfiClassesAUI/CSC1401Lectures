/* This program takes in the gpa and credits of a student
 and then determines if they are eligible for exchange */
#include <stdio.h>

int main(void) {
    float gpa;
    short int credits;

    printf("Enter your gpa and credits: ");
    scanf("%f %d", &gpa, &credits);

    if (gpa >= 3.0 && credits >= 45 && credits < 95){
        printf("You are eligible");
    }
    else
        printf("You are not eligible");

    return 0;
}