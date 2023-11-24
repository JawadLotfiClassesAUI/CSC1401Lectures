// This file is the prototype part of a library, which needs to be #included in any program that requires these functions
// The following two lines as well, as the last, compose what we call the include guard
#ifndef MYMATH_H
#define MYMATH_H
// Below we put only function prototypes, they can be seen and indicate how to use a specific function
int power(int base, int exp);
// function gcd does this ....
int gcd(int n1, int n2);
int lcm(int n1, int n2);
int lcm2(int n1, int n2);
int fact(int N);
int factR(int N);
#endif