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
        printf("press 0 to continue\n");
        int res = scanf("%d" , &run);
        while (res != 1)
        {
            printf("Invalid Input (Try Again!)\n");
            scanf("%d", &run);
        }
        if (run == 0)
        {
            run = 1;
            continue;
        }
        else
        {
            run = 0;
            break;
        }
    }
    return 0;
}