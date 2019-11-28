#include <stdio.h>
#include <stdbool.h>
void printer(int board[][5]);
void charger(int board[][5], int lie, int hang);
void handler(int board[][5]);
bool status[4][5] = {false};
int main()

{
    int board[4][5] = {{4, 4, 3, 1, 4},
                       {3, 1, 1, 1, 1},
                       {4, 3, 4, 1, 2},
                       {4, 4, 2, 2, 2}};
    charger(board, 4, 5);
    handler(board);
    printer(board);
    return 0;
}
void printer(int board[][5])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}
void charger(int board[][5], int lie, int hang)
{
    int i, j, num;
    for (i = 0; i < lie; i++)
    {
        for (j = 0; j < hang; j++)
        {
            if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2])
            {
                int n = 2;
                if (j + n < hang)
                    while (board[i][j] == board[i][j + n])
                    {
                        if (j + n < hang)
                            n++;
                        else
                            break;
                    }
                num = j + n;
                for (; j < num; j++)
                {
                    status[i][j] = true;
                }
                j--;
            }
        }
    }
    for (j = 0; j < hang; j++)
    {
        for (i = 0; i < lie; i++)
        {
            if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j])
            {
                int n = 3;
                if (i + n < lie)
                    while (board[i][j] == board[i + n][j])
                    {
                        if (i + n < lie)
                            n++;
                        else
                            break;
                    }
                num = i + n;
                for (; i < num; i++)
                {
                    status[i][j] = true;
                }
                i--;
            }
        }
    }
}
void handler(int board[][5])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (status[i][j])
                board[i][j] = 0;
        }
    }
}
