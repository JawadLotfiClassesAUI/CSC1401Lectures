// This program determines if a year is leap or not
#include <stdio.h>

int main(void){
    short int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year%400 == 0 || (year%4 == 0 && year%100 != 0))
        printf("the year %d is leap", year);
    else
        printf("the year %d is not leap", year);
    return 0;
}