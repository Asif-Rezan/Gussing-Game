#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Welcome To Guessing Game\n_____________________________\n-----------------------------\n\n\n");
    printf("Player 1--Pick One Number: ");
    scanf("%d",&a);

    printf("Player 2--Guess The Number:: First chance: ");
    scanf("%d",&b);
    if(a==b)
    {
        printf("Right, Player-2 wins!\n");
    }
    else
    {
        printf("Wrong, 2 Chance(s) Left!\n\n");
        printf("Guess The Number::Second Chance: ");
        scanf("%d",&c);
        if(a==c)
        {
            printf("Right, Player-2 wins!\n");
        }
        else
        {
            printf("Wrong, 1 Chance(s) Left!");
            printf("Guess The Number:: Third Chance: ");
            scanf("%d",&d);
            if(a==d)
            {
                printf("Right, Player-2 wins!\n");
            }
            else
            {
                printf("Wrong, 0 Chance(s) Left!\n");
                printf("Player-1 wins\n\n\n");
            }
        }
    }
}
