#include <stdio.h>
#include <stdlib.h>
void roll(int, int, int **);
int main()
{
    int a, b, **arr; //a行数，b列数
    int i, j;
    scanf("%d %d", &a, &b);
    arr = (int **)malloc(sizeof(int *) * a); //分配所有行的首地址
    for (i = 0; i < b; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * b); //给每一列分配内存
    }
    // int(*arr)[b] = (int(*)[b])malloc(sizeof(int) * a * b); //申请一个a行b列的整型数组
    for (i = 0; i < a; i++) //读入值
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    roll(a, b, arr);
    return 0;
}
void roll(int a, int b, int *arr[])
{
    int arr2[b][a], i, j;
    for (j = 0; j < a; j++) //hang
    {
        for (i = b - 1; i >= 0; i--) //lie
        {
            arr2[b - 1 - i][j] = arr[j][i];
        }
    }
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        puts("");
    }
}