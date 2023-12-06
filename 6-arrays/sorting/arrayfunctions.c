#include <stdio.h>

void initArray(int array[], int length) {
  printf("Enter all the numbers: ");
  for (int index = 0; index < length; index++) {
    scanf("%d", &array[index]);
  }
}

void displayArray(int array[], int length) {
  for (int index = 0; index < length; index++) {
    printf("%d\t", array[index]);
  }
  printf("\n");
}

void swap(int *p_num1, int *p_num2) {
  int temp = *p_num1;
  *p_num1 = *p_num2;
  *p_num2 = temp;
}

void bubbleSort(int array[], int length) {
  for (int sorted = 0; sorted < length - 1; sorted++) {
    printf("Pass %d\n",sorted+1); // Comment this line to hide the details
    for (int index = 0; index < length - 1 - sorted; index++) {
      if (array[index] > array[index + 1])
        swap(&array[index], &array[index + 1]);
      displayArray(array, length); // Comment this line to hide the details
    }
  }
}

void selectionSort(int array[], int length) {
  for (int selected = 0; selected < length - 1; selected++) {
    printf("Pass %d\n",selected+1); // Comment this line to hide the details
    int index_of_min = selected;
    for (int i = selected + 1; i < length; i++) {
      if (array[i] < array[index_of_min])
        index_of_min = i;
    }
    swap(&array[index_of_min], &array[selected]);
    displayArray(array, length); // Comment this line to hide the details
  }
}