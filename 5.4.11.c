#include <stdio.h>
#include <stdbool.h>
void printer(bool status[][10]);
void go(int ma[][10], bool status[][10], int, int);

int main()
{
    int i = 0, j = 0;
    bool status[6][10] = {false};
    int ma[][10] = {
        {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 1, 0, 0, 1, 0, 0, 0, 0, 1},
        {0, 0, 0, 1, 1, 0, 0, 1, 0, 1},
        {0, 1, 1, 0, 0, 0, 1, 1, 0, 1},
        {0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 0}};
    go(ma, status, 0, 0);
    return 0;
}
void go(int ma[][10], bool status[][10], int x, int y)
{
    if (x == 5 && y == 9)
    {
        status[5][9] = true;
        printer(status);
    }
    else
    {
        if (x + 1 < 6 && status[x + 1][y] != true && ma[x + 1][y] != 1)
        {
            status[x][y] = true;
            go(ma, status, x + 1, y);
            status[x][y] = false;
        }
        if (y + 1 < 10 && status[x][y + 1] != true && ma[x][y + 1] != 1)
        {
            status[x][y] = true;
            go(ma, status, x, y + 1);
            status[x][y] = false;
        }
        if (y - 1 >= 0 && status[x][y - 1] != true && ma[x][y - 1] != 1)
        {
            status[x][y] = true;
            go(ma, status, x, y - 1);
            status[x][y] = false;
        }
        if (x - 1 >= 0 && status[x - 1][y] != true && ma[x - 1][y] != 1)
        {
            status[x][y] = true;
            go(ma, status, x - 1, y);
            status[x][y] = false;
        }
    }
}
void printer(bool status[][10])
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (status[i][j])
            {
                printf("x");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}