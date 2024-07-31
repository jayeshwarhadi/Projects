#include <stdio.h>

int reverse(int n){
    int m = n;
    while(n!=0){
        int r = n % 10;
        n = n/10;
    }
}

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    reverse(num);

    // printf("%d",num);
    return 0;
}