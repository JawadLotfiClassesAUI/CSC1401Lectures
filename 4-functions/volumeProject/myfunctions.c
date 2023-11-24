#include <stdio.h>
#define PI 3.141592

// function definitions
void menu(void){
    printf("Please choose between the 2 following volume computations:\n"
    "1 - Cuboid\n"
    "2 - Cylinder\n"
    "0 - Quit the program\n");
}

void cuboid(void){
    float volume, length, height, depth;
    printf("Enter the length, height, and depth: ");
    scanf("%f %f %f", &length, &height, &depth);
    volume = length*height*depth;
    printf("=>The volume is %.2f\n", volume);
}

void cylinder(void){
    float volume, height, radius;
    printf("Enter the radius and height: ");
    scanf("%f %f", &radius, &height);
    volume = PI * radius * radius * height;
    printf("=>The volume is %.2f\n", volume);
}