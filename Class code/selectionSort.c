#include <stdio.h>
#define N 10

void selection_sort(int a[], int n);
int find_largest(int a[], int n);

int main(void){
    int i;
    int a[N];

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    
    selection_sort(a, N);
    printf("In sorted order:");
    
    for (i = 0; i < N; i++)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n){
    int largestIndex = 0, temp;
    
    if (n == 1){
        return;
    }

    largestIndex = find_largest(a,n);

    temp = a[largestIndex];
    a[largestIndex] = a[n-1];
    a[n-1]  = temp;
    
    selection_sort(a, n-1);

}

int find_largest(int a[], int n){
    int i;
    int index = 0;

    for(i = 0; i < n; i++){
        if(a[i]> a [index]){
            index = i;
        }
    }
    return index;
}