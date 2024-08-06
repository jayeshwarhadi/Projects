#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Main focus is to use "random" statistically and extensively

int randint(int x, int y)
{
    srand(time(0));
    // random seed
    int a = (rand() % (y - x + 1)) + x;
    int b = (rand() % (y - x + 1)) + x;
    int c = (rand() % (y - x + 1)) + x;
    return (((a * b * c) % (y - x + 1)) + x);
}

char *outcome(int x)
{
    if (x == 1)
    {
        return "STONE";
    }
    else if (x == 2)
    {
        return "PAPER";
    }
    else if (x == 3)
    {
        return "SCISSORS";
    }
}

int main()
{
    printf("********************\n\n STONE PAPER SCISSORS \n\n  (jayesh warhadi)  \n\n********************\n");
    int score = 0;
    int streak = 0;
    int userguess;
    while (1)
    {
        int compguess = randint(1, 3);
        printf("********************\n>\n> STONE - 1\n>\n> PAPER - 2\n>\n> SCISSORS - 3\n>\n********************\n");
        while (1)
        {
            printf("Enter input : ");
            int res = scanf("%d", &userguess);
            if (res == 1 && userguess <= 3 && userguess >= 1)
            {
                break;
            }
            else
            {
                printf("Invalid input : Try again! (1~3)\n");
                while (getchar() != '\n')
                    ;
            }
        }
        if (userguess == compguess)
        {
            printf("Round Tie\n");
            printf("Your choice : %s || computer choice %s\n", outcome(userguess), outcome(compguess));
            score = score + streak * 5;
            printf("# Score => %d (%d - streak bonus) #\n", score, streak * 5);
            streak++;
        }
        else if (userguess == 1 && compguess == 2)
        {
            printf("Round Lost\n");
            printf("Your choice : %s || computer choice %s\n", outcome(userguess), outcome(compguess));
            int prevscore = score;
            score = score * 0.1 + streak * 5;
            printf("# Score => %d (%d - punish) #\n", score, prevscore-score);
            printf("# Streak reset #\n");
            streak = 0;
        }
        else if (userguess == 1 && compguess == 3)
        {
            printf("Round Won\n");
            printf("Your choice : %s || computer choice %s\n", outcome(userguess), outcome(compguess));
            score = score + 100 + streak * 20;
            printf("# Score => %d (%d - streak bonus) #\n", score, streak * 20);
            streak++;
        }
        else if (userguess == 2 && compguess == 1)
        {
            printf("Round Won\n");
            printf("Your choice : %s || computer choice %s\n", outcome(userguess), outcome(compguess));
            score = score + 100 + streak * 20;
            printf("# Score => %d (%d - streak bonus) #\n", score, streak * 20);
            streak++;
        }
        else if (userguess == 2 && compguess == 3)
        {
            printf("Round Lost\n");
            printf("Your choice : %s || computer choice %s\n", outcome(userguess), outcome(compguess));
            int prevscore = score;
            score = score * 0.1 + streak * 5;
            printf("# Score => %d (%d - punish) #\n", score, prevscore-score);
            printf("# Streak reset #\n");
            streak = 0;
        }
        else if (userguess == 3 && compguess == 1)
        {
            printf("Round Lost\n");
            printf("Your choice : %s || computer choice %s\n", outcome(userguess), outcome(compguess));
            int prevscore = score;
            score = score * 0.1 + streak * 5;
            printf("# Score => %d (%d - punish) #\n", score, prevscore-score);
            printf("# Streak reset #\n");
            streak = 0;
        }
        else if (userguess == 3 && compguess == 2)
        {
            printf("Round Won\n");
            printf("Your choice : %s || computer choice %s\n", outcome(userguess), outcome(compguess));
            score = score + 100 + streak * 20;
            printf("# Score => %d (%d - streak bonus) #\n", score, streak * 20);
            streak++;
        }
        printf("Press Enter to continue and any key to exit\n");
        while (getchar() != '\n')
            ;
        if (getchar() == '\n')
        {
            continue;
        }
        else
        {
            printf("********************\n\nCurrent Score is %d\nCurrent Streak is %d\n\n********************",score,streak);
            return 0;
        }
    }
    return 0;
}