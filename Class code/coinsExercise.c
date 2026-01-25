#include <stdio.h>

#define QUARTER 25
#define DIME 10
#define NICKLE 5



int main(){

    int cents;
    int remainder;
    int numQuart = 0;
    int numDime = 0;
    int numNickle = 0;
    int numPen = 0;


    printf("Entere number of cents: ");
    scanf("%d", &cents);


    if(cents < 0 || cents > 10000){
        printf("The number of cents are not in the proper range");
    }
    
    else{
        numQuart = cents /QUARTER;
        remainder = cents % QUARTER;
    
        numDime = remainder / DIME;
        remainder %= DIME;

        numNickle = remainder /NICKLE;
        numPen = remainder % NICKLE;

        printf("%d quarters, %d dimes, %d nickles, and %d pennies",numQuart, numDime, numNickle, numPen);
    }

    return 0;
}