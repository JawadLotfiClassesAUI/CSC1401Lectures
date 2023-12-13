#include <stdio.h>
#include "arrayfunctions.h"
#define SIZE 50

void menu();

int main(void) {
  int grades[SIZE];
  int length = 0, choice, good, sat, unsat;
  float average;

  do {
    menu();
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        add(grades, &length, SIZE);
        break;
      case 2:
        computeAverage(grades, length, &average);
        printf("The average is %f\n", average);
        break;
      case 3:
        countGood(grades, length, &good);
        printf("There are %d good grades\n", good);
        break;
      case 4:
        countSat(grades, length, &sat);
        printf("There are %d satisfactory grades\n", sat);
        break;
      case 5:
        countUnsat(grades, length, &unsat);
        printf("There are %d unsatisfactory grades\n", unsat);
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
  printf(
      "Select one of the following options:\n"
      "1 - Add a grade\n"
      "2 - Compute the average\n"
      "3 - Count Good grades\n"
      "4 - Count Satisfactory grades\n"
      "5 - Count Unsatisfactory grades\n"
      "0 - Quit the program\n");
}