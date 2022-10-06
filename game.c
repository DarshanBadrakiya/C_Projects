#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int greater(char char1,char char2)
{
    if (char1==char2)
    {
        return -1;
    }
    else if ((char1=='R')&&(char2=='S'))
    {
        return 1;
    }
    else if ((char2=='R')&&(char1=='S'))
    {
        return 0;
    }
    else if ((char1=='P')&&(char2=='R'))
    {
        return 1;
    }
    else if ((char1=='S')&&(char2=='P'))
    {
        return 0;
    }
    else if ((char1=='S')&&(char2=='P'))
    {
        return 1;
    }
    else if ((char1=='P')&&(char2=='S'))
    {
        return 0;
    }
}
int main()
{
    int ps=0,cs=0,temp;
    char pc,cc;
    char dict[]={'R','P','S'};
    printf("Welcome to Rock,Papper,Scissor Game\n");
    
    printf("Choose any one\n");
    printf("1.Rock\n2.Papper\n3.Scissor\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Player's Turn\n");
        scanf("%d",&temp);
        getchar();
        pc = dict[temp-1];
        printf("You choose %c\n",pc);
        printf("Computer's Turn\n");
        srand(time(NULL));
        temp = rand() % 3 + 1;
        cc = dict[temp-1];
        printf("Computer choose %c\n",cc);
        if (greater(cc,pc)==1)
        {
            cs += 1;
            printf("Computer got it!\n");
        }
        else if (greater(cc,pc)==-1)
        {
            cs += 1;
            ps += 1;
            printf("It's a draw!\n");
        }
        else
        {
            ps += 1;
            printf("You Got it!\n");
        }
        printf("You:%d\n",ps);
        printf("Computer:%d\n",cs);
    }
    if (ps>cs)
    {
        printf("You Win The Game\n");
    }
    else if (ps<cs)
    {
        printf("Computer Win The Game!");
    }
    else if(ps=cs)
    {
        printf("It's a Draw!");
    }
    return 0;
}
