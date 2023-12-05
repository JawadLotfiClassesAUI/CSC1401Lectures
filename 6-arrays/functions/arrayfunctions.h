#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H
void initialize(int array[], int length);
void display(int array[], int length);
int inArray(int array[], int length, int num);
void computeSum(int array[], int length, int *ptr_sum);
void computeAverage(int array[], int length, float *ptr_average);
void maximum(int array[], int length, int *ptr_max);
void minimum(int array[], int length, int *ptr_min);
#endif