#include <stdio.h>
void sort(int *v, int n, int (*comp)(int, int));
void swap(int *v, int j); /* swap函数将数组v中的j和j+1项交换 */
int upsort(int, int);     /* 升序 */
int downsort(int, int);   /* 降序 */
int main(int argc, char *argv[])
{
    // int argc = 3;
    // char *argv[] = {"sort", "6", "-d"};
    int a = *argv[1] - '0';
    int num[100], i, n;
    int (*comp)(int, int);
    printf("请输入数据！\n");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &num[i]);
    }
    if (argc > 2 && *argv[2] == '-' && *(argv[2] + 1) == 'd')
        comp = downsort;
    else
        comp = upsort;
    sort(num, a, comp);
    for (i = 0; i < a; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}
void sort(int *v, int n, int (*comp)(int, int))
{
    int i, j;
    for (i = 0; i < n; i++) //冒泡排序
    {
        for (j = 0; j < n - 1; j++)
        {
            if ((*comp)(v[j], v[j + 1]))
                swap(v, j);
        }
    }
}
void swap(int *v, int j)
{
    int t = *(v + j);
    *(v + j) = *(v + j + 1);
    *(v + j + 1) = t;
}
int upsort(int a, int b)
{
    if (a > b)
        return 1;
    return 0;
}
int downsort(int a, int b)
{
    if (a < b)
        return 1;
    return 0;
}