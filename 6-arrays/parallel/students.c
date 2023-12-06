#include "arrayfunctions.h"
#include <stdio.h>
#define SIZE 5

int main() {
  int studentsID[SIZE];
  float studentsGpa[SIZE];
  int lookupID, pos;

  init(studentsID, studentsGpa, SIZE);

  printf("What student ID are you looking for? ");
  scanf("%d", &lookupID);
  pos = searchByID(studentsID, SIZE, lookupID);
  if (pos == -1)
    printf("There is no student with ID %d\n", lookupID);
  else
    printf("The student with ID %d has a GPA of %.2f\n", lookupID, studentsGpa[pos]);

  return 0;
}
