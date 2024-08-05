#include <stdio.h>

int reverse(int n)
{
    int m = n;
    int s = 0;
    while (n != 0)
    {
        int r = n % 10;
        n = n / 10;
        s = s * 10 + r;
    }
    return s;
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int rev = reverse(num);
    if (rev == num)
    {
        printf("The number is a palintrome");
    }
    else
    {
        printf("The number is not a palintrome");
    }
    return 0;
}