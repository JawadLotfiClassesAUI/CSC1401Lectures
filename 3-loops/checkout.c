// This program illustrates the use of nested loops (inner loop is a single checkout, outer loop repeats accross all checkouts)
#include <stdio.h>

int main(void){
    float sumSoFar, price, totalSoFar = 0.0;
    int checkCounter, numCheckouts;

    printf("Enter the number of checkouts: ");
    scanf("%d", &numCheckouts);
    // Outer loop handles the checkouts
    for (checkCounter = 1; checkCounter <= numCheckouts; checkCounter++){
        sumSoFar = 0.0;
        // Inner loop handles the prices at each checkout
        do{
            printf("Enter a price: ");
            scanf("%f", &price);
            sumSoFar += price;
        } while(price != 0.0);
        printf("\nThe total for checkout #%d is %.2f MAD", checkCounter, sumSoFar);
        totalSoFar += sumSoFar;
    }
    printf("\nThe grand total is %.2f", totalSoFar);    

    return 0;
}