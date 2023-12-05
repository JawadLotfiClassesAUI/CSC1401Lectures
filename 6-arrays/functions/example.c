#include "arrayfunctions.h"
#include <stdio.h>
#define SIZE 5

void menu();

int main(void) {
  int numbers[SIZE];
  int choice, num, sum, max, min, pos;
  float average;

  do {
    menu();
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      initialize(numbers, SIZE);
      break;
    case 2:
      display(numbers, SIZE);
      break;
    case 3:
      printf("Enter the number you are searching for: ");
      scanf("%d", &num);
      pos = inArray(numbers, SIZE, num);
      if (pos != -1)
        printf("The number you entered is in the array in index %d\n", pos);
      else
        printf("The number you entered is not in the array\n");
      break;
    case 4:
      computeSum(numbers, SIZE, &sum);
      printf("The sum is %d\n", sum);
      break;
    case 5:
      computeAverage(numbers, SIZE, &average);
      printf("The average is %f\n", average);
      break;
    case 6:
      maximum(numbers, SIZE, &max);
      printf("The highest value is %d\n", max);
      break;
    case 7:
      minimum(numbers, SIZE, &min);
      printf("The lowest value is %d\n", min);
      break;
    case 0:
      printf("Thanks for using our program\n");
      break;
    default:
      printf("This option does not exist\n");
    }
  } while (choice != 0);

  return 0;
}

void menu() {
  printf("Select one of the following options:\n"
         "1 - Initialize the array\n"
         "2 - Display the array\n"
         "3 - Search for a value\n"
         "4 - Compute the sum\n"
         "5 - Compute the average\n"
         "6 - Find the highest value\n"
         "7 - Find the lowest value\n"
         "0 - Quit the program\n");
}