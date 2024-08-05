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
    int run = 1;
    while (run == 1)
    {
        printf("********************\n\n  PALINTROME TEST  \n\n  (jayesh warhadi)  \n\n********************\n");
        int num;
        printf("Enter the number : ");
        scanf("%d", &num);
        int rev = reverse(num);
        if (rev == num)
        {
            printf("\nThe number is a palintrome\n");
        }
        else
        {
            printf("\nThe number is not a palintrome\n");
        }
        printf("press 1 to continue\n");
        scanf("%d", &run);
        if (run == 1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}