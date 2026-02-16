#include <stdio.h>
void pb(int n);

int main(){

    pb();
    return 0;
}

void pb(int n) {
    if(n != 0) {
        pb(n/2);
        printf("%d", n%2);
    }
}
