// This program illustrates the use of switch case as an alternative to if-else if-else
#include <stdio.h>

int main(void){
    int school;

    printf("Choose one of the following options\n"
    "1 : SBA\n"
    "2 : SSE\n"
    "3 : SHSS\n");
    scanf("%d", &school);
    switch (school){
    case 1:
        printf("You chose SBA");
        break;
    case 2:
        printf("You chose SSE");
        break;
    case 3:
        printf("You chose SHSS");
        break;
    default:
        printf("Wrong school choice");
        break;
    }

    return 0;
}