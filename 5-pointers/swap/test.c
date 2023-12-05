#include <stdio.h>
#include "library.h"

int main(void){
  int num1, num2;

  printf("Enter the 2 number: ");
  scanf("%d %d", &num1, &num2);

  printf("num1 = %d and num2 = %d", num1, num2);
  swap(&num1, &num2);
  printf("\nnum1 = %d and num2 = %d", num1, num2);

  return 0;
}