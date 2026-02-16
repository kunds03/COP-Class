#include <stdio.h>
#define N 10
void find_two_largest(int a[], int n, int *largest, int *secondLargest); 


int main(){
    int i, max, second_max;
    int a[N];

    printf("Enter %d elements for the array", N);
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    find_two_largest(a, N, &max, &second_max);
    printf("The max is: %d and second max is: %d", max, second_max);
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *secondLargest){
    int i;
    int temp = 0;

    if(a[0]> a[1]){
        *largest = a[0];
        *secondLargest = a[1];
    }
    else{
        *largest = a[1];
        *secondLargest = a[0];
    }

    for(i = 0; i < n; i++){
        temp = 0;
        if(a[i]> *largest){
            temp = *largest;
            *largest = a[i];
            *secondLargest = temp;
        }
        else if(a[i] > *secondLargest){
            *secondLargest = a[i];
        }
    }
}