// this project splits program and library code into separate files for code reuse and clarity
#include <stdio.h>
// custom headers need to be included using double quotes instead of angle brackets
#include "mymath.h"

int main(void) {
  int num1, num2, result;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  // The next few lines make calls to functions we have created and moved out to the library file
  printf("The greatest common divisor of %d and %d is %d\n", num1, num2, gcd(num1, num2));
  printf("The least common multiple of %d and %d is %d\n", num1, num2, lcm(num1, num2));
  printf("The least common multiple of %d and %d is %d\n", num1, num2, lcm2(num1, num2));
  printf("The factorial of %d is %d\n", num1, fact(num1));
  printf("The factorial of %d is %d\n", num1, factR(num1));

  return 0;
}