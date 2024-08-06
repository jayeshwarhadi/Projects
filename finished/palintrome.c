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
        while (1)
        {
            printf("Enter the number : ");
            int validity = scanf("%d", &num);
            if (validity == 1)
            {
                break;
            }
            else
            {
                printf("Invalid Input : Try again (Integers)\n");
                while (getchar() != '\n');
            }
        }
        int rev = reverse(num);
        if (rev == num)
        {
            printf("\nThe number is a palintrome\n");
        }
        else
        {
            printf("\nThe number is not a palintrome\n");
        }
        int resp = 0;
        while (1)
        {
            printf("Press 1 to continue and 0 to exit\n");
            int validity = scanf("%d", &resp);
            if (validity == 1 & resp == 1)
            {
                break;;
            }
            else if (validity == 1 && resp == 0)
            {
                return 0;
            }
            else
            {
                printf("Invalid input : Press 1 or 0\n");
                while (getchar() != '\n');
            }
        }
    }
    return 0;
}