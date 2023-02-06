#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i;
    int bot;
    int choice;
    int bscr=0;
    int yscr=0;
    srand(time(0));
    printf("You Have 3 Rounds\n");
    for(i=0;i<3;i++)
    {
        i=1;
        printf("1 For Rock\n2 For Paper\n3 For Scissors\n");
        scanf("%d",&choice);
        bot=rand()% 3 + 1;
        if(choice==bot)
        {
            printf("Draw");
            continue; 
        }
        else
        {
            if(bot==1 && choice==2)
            {
                yscr++;
                printf("Bot:%d\n",bot);
                printf("Bot score:%d\n",bscr);
                printf("Your score:%d\n",yscr);
            }
            else if(bot==2 && choice==1)
            {
                bscr++;
                printf("Bot:%d\n",bot);
                printf("Bot score:%d\n",bscr);
                printf("Your score:%d\n",yscr);
            }
            else if(bot==1 && choice==3)
            {
                bscr++;
                printf("Bot:%d\n",bot);
                printf("Bot score:%d\n",bscr);
                printf("Your score:%d\n",yscr);
            }
            else if(bot==3 && choice==1)
            {
                yscr++;
                printf("Bot:%d\n",bot);
                printf("Bot score:%d\n",bscr);
                printf("Your score:%d\n",yscr);
            }
        }
    }
    if(bscr>yscr)
    {
        printf("You loose\n");
    }
    else
    {
        printf("You Win\n");
    }
}