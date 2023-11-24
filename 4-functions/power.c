// This program illustrates the use of custom defined functions to compute the power of a number by another
#include <stdio.h>

// Function Declaration/Prototype
int power(int b, int e); // declare function prototype so the compiler knows it exists

int main(void){
    int base, exp;
    printf("Enter the base and the exponent: ");
    scanf("%d %d", &base, &exp);

    printf("%d to the power %d is %d", base, exp, power(base,exp)); // the function call returns the result directly inside the printf

    return 0;
}

// Function Definition
int power(int b, int e){ // define power function that takes two integer arguments b and e
    int result=1; // initialize result accumulator variable to 1
    for (int rep=0; rep < e; rep++){
        result *= b;
    }
    return result; // return calculated result
}