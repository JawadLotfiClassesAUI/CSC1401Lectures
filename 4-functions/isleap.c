// This program illustrates the creation of a custom defined function to determine if a year is leap or not
#include <stdio.h>
#include <stdbool.h>
bool isleap(int Y); // a boolean is either true or false
int main(void){
  int year;
  printf("Enter the year number: ");
  scanf("%d", &year);
  
  if (isleap(year)){ // the function call isleap() will either return true or false, which is useful for condition checks
    printf("The year is leap");
  }
  else{
    printf("The year is not leap");
  }

  return 0;
}
bool isleap(int Y){
  if (Y%400==0 || (Y%4==0 && Y%100!=0))
    return true;
  else
    return false;
}