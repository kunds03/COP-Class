#include <stdio.h>
char toLower(char ch);

int main(){


    char let = 'G';

    char result = toLower(let);

    printf("%c",result);
    return 0;
}

char toLower(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        ch += 32;
    }

    return ch;
}




if (loan_amount > 25000 and loan_amount < 500000)