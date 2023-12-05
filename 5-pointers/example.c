#include <stdio.h>
int main(void){
  int N = 25;
  int* ptr_N = &N;

  printf("The value of N is %d\n", N);
  printf("The address of N is %p\n", &N);

  printf("The address of N is %p\n", ptr_N);
  printf("The value of N is %d\n", *ptr_N);

  return 0;
}