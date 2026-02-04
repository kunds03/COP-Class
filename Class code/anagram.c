#include <stdio.h>
#define N 26

int main(){
    char ch;
    int i, count[N] = 0;
    int count_zeros = 0;
    printf("Enter a word: ");
    while((ch = getchar())!='\n'){
        count[ch-'a']++;
    }


    printf("Enter second word: ");
    while((ch = getchar())!='\n'){
        count[ch-'a']--;
    }
    

    
    return 0;
}