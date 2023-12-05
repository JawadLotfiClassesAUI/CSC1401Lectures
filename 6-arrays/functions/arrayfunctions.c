#include <stdio.h>

void initialize(int array[], int length) {
  // Array Initialization
  printf("Enter all the values: ");
  for (int index = 0; index < length; index++) {
    scanf("%d", &array[index]);
  }
}

void display(int array[], int length) {
  // Array Traversal
  for (int index = 0; index < length; index++) {
    printf("%d\t", array[index]);
  }
  printf("\n");
}

int inArray(int array[], int length, int num) {
  for (int index = 0; index < length; index++) {
    if (array[index] == num)
      return index;
  }
  return -1;
}

void computeSum(int array[], int length, int *ptr_sum) {
  *ptr_sum = 0;
  for (int index = 0; index < length; index++) {
    *ptr_sum += array[index];
  }
}

void computeAverage(int array[], int length, float *ptr_average) {
  int sum = 0;
  for (int index = 0; index < length; index++) {
    sum += array[index];
  }
  *ptr_average = (float)sum / length;
}
void maximum(int array[], int length, int *ptr_max) {
  *ptr_max = array[0];
  for (int index = 1; index < length; index++) {
    if (array[index] > *ptr_max)
      *ptr_max = array[index];
  }
}
void minimum(int array[], int length, int *ptr_min) {
  *ptr_min = array[0];
  for (int index = 1; index < length; index++) {
    if (array[index] < *ptr_min)
      *ptr_min = array[index];
  }
}