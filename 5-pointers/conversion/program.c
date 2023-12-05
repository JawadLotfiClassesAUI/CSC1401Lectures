#include <stdio.h>
#include "conversions.h"

int main(void){
  int feet, choice;
  float inches, cms;

  printf("This program performs the following 2 conversions:\n"
  "1 - Convert height from feet & inches to centimeters\n"
  "2 - Convert from centimeters to feet and inches\n"
  "Enter your choice: ");
  scanf("%d", &choice);

  if (choice == 1){
    printf("Please enter your height in feet and inches: ");
    scanf("%d %f", &feet, &inches);
    cms = convert1(feet, inches);
    printf("This is equivalent to %.2f centimeters\n", cms);
  }
  else if (choice == 2){
    printf("Please enter your height in centimeters: ");
    scanf("%f", &cms);
    convert2(cms, &feet, &inches);
    printf("This is equivalent to %d feet and %.2f inches\n", feet, inches);
  }
  else
    printf("Incorrect choice");
  
  return 0;
}
