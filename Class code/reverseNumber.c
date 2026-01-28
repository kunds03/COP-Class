#include <stdio.h>

int main(){

    int digits = 0, n;
    int remainder = 0;
    int reverse = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);


    do {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;    
    } while (n > 0);

    printf("The reverse is: %d", reverse);

    return 0;
}