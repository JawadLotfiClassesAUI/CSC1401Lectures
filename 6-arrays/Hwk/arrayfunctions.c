#include <stdio.h>

void add(int array[], int* ptr_length, int SIZE) {
  if (*ptr_length >= SIZE){
    printf("You cannot add any additional value\n");
  }
  else{
    printf("Enter a grade: ");
    scanf("%d", &array[*ptr_length]);
    *ptr_length += 1;
  }
}

void computeAverage(int array[], int length, float* ptr_average) {
  int sum = 0;
  for (int index = 0; index < length; index++) {
    sum += array[index];
  }
  *ptr_average = (float)sum / length;
}

void countGood(int array[], int length, int* ptr_good){
  *ptr_good = 0;
  for (int index = 0; index < length; index++) {
    if (array[index] >= 80){
      *ptr_good += 1;
    }
  }
}

void countSat(int array[], int length, int* ptr_sat){
  *ptr_sat = 0;
  for (int index = 0; index < length; index++) {
    if (array[index] >= 70 && array[index] < 80){
      *ptr_sat += 1;
    }
  }
}

void countUnsat(int array[], int length, int* ptr_unsat){
  *ptr_unsat = 0;
  for (int index = 0; index < length; index++) {
    if (array[index] < 70){
      *ptr_unsat += 1;
    }
  }
}