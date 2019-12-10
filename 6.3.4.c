#include <stdio.h>
#define SIZE 10
void roll(int, int, int *img);
int main()
{
    int a, b;
    int i, j;
    int img[SIZE][SIZE];
    scanf("%d %d", &a, &b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &img[i][j]);
        }
    }
    roll(a, b, *img);
    return 0;
}
void roll(int a, int b, int *img)
{
    int img2[b][a], i, j;
    for (i = b; i > 0; i--) //lie
    {
        for (j = 0; j < a; j++) //hang
        {
            img2[b - i][j] = *(img + j * SIZE + i);
        }
    }
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d ", *((img + SIZE * i) + j));
        }
        puts("");
    }
}