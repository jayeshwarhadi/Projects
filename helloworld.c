#include <stdio.h>

int fun(n){
    if(n==1) 
        return 1;
    else
        printf("%d\n",101-n);
        return 1 + fun(n-1);
}

int main(){
    int n = 100;
    // printf("%d",fun(n));
    fun(n);
    return 0;
}