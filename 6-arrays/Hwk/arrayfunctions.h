#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H
void add(int array[], int* ptr_length, int SIZE);
void computeAverage(int array[], int length, float* ptr_average);
void countGood(int array[], int length, int* ptr_good);
void countSat(int array[], int length, int* ptr_sat);
void countUnsat(int array[], int length, int* ptr_unsat);
#endif