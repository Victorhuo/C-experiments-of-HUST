#include <stdio.h>
#include <stdbool.h>
void printer(void);
void go(int, int);
int valid(int x, int y);
int ma[][10] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 0, 0, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 1, 1, 0, 0, 1, 0, 1},
    {0, 1, 1, 0, 0, 0, 1, 1, 0, 1},
    {0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 0, 0}};
bool status[6][10] = {false};
int main()
{
    int i = 0, j = 0;
    go(0, 0);
    return 0;
}
void go(int x, int y)
{
    if (x == 5 && y == 9)
    {
        status[5][9] = true;
        printer();
        puts("");
        status[5][9] = false;
    }
    else
    {
        if (valid(x + 1, y))
        {
            status[x][y] = true;
            go(x + 1, y);
            status[x][y] = false;
        }
        if (valid(x, y + 1))
        {
            status[x][y] = true;
            go(x, y + 1);
            status[x][y] = false;
        }
        if (valid(x, y - 1))
        {
            status[x][y] = true;
            go(x, y - 1);
            status[x][y] = false;
        }
        if (valid(x - 1, y))
        {
            status[x][y] = true;
            go(x - 1, y);
            status[x][y] = false;
        }
    }
}
void printer(void)
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (status[i][j])
            {
                printf("x ");
            }
            else if (ma[i][j])
            {
                printf("o ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int valid(int x, int y)
{
    if (x < 0 || x > 5 || y < 0 || y > 9 || status[x][y] == true || ma[x][y])
        return 0;
    return 1;
}
