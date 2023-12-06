#include <stdio.h>

void init(int IDArray[], float GpaArray[], int length) {
  for (int index = 0; index < length; index++) {
    printf("Enter the student's ID and Gpa: ");
    scanf("%d %f", &IDArray[index], &GpaArray[index]);
  }
}

int searchByID(int IDArray[], int length, int ID) {
  for (int index = 0; index < length; index++) {
    if (IDArray[index] == ID) {
      return index;
    }
  }
  return -1;
}