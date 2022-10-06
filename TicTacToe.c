#include <stdio.h>
#include <conio.h>

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int DrawBoard()
{
    system("cls");
    printf("TIC TAC TOE GAME\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c  \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c  \n", square[7], square[8], square[9]);

    printf("     |     |     \n");
    return 0;
}
/* For checkwin function
game over with result :1
game is in progress : -1
game is over with no result : 0 */
int CheckWin()
{
    if (square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int Player = 1, i, choice;
    char mark;
    do
    {
        DrawBoard();
        Player = (Player % 2) ? 1 : 2;
        printf("Player %d : Enter a Number\n", Player);
        scanf("%d", &choice);
        mark = (Player == 1) ? 'X' : 'O';
        if (choice == 1 && square[1] == '1')
        {
            square[1] = mark;
        }
        else if (choice == 2 && square[2] == '2')
        {
            square[2] = mark;
        }
        else if (choice == 3 && square[3] == '3')
        {
            square[3] = mark;
        }
        else if (choice == 4 && square[4] == '4')
        {
            square[4] = mark;
        }
        else if (choice == 5 && square[5] == '5')
        {
            square[5] = mark;
        }
        else if (choice == 6 && square[6] == '6')
        {
            square[6] = mark;
        }
        else if (choice == 7 && square[7] == '7')
        {
            square[7] = mark;
        }
        else if (choice == 8 && square[8] == '8')
        {
            square[8] = mark;
        }
        else if (choice == 9 && square[9] == '9')
        {
            square[9] = mark;
        }
        else
        {
            printf("Invalide Move\n");
            Player--;
            getch();
        }
        i = CheckWin();
        Player++;
    } while (i == -1);
    
    DrawBoard();
    if (i == 1)
    {
        printf("==> Player %d Win\n", --Player);
    }
    else
    {
        printf("==> Game Draw\n");
    }
    getch();
    return 0;
}
