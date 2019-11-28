#include <stdio.h>
#include <math.h>
int ziming(int, int);
int main()
{
    int num[100];
    int a, i, x = 1, j, k; //j个数
    while (scanf("%d", &a) != EOF && a != 0)
    {
        x = 1;
        j = 0;
        for (i = 0; i < 100; i++)
        {
            num[i] = 0;
        }
        for (i = 0; i < a; i++)
        {
            x *= 10;
        }

        for (i = x / 10; i < x; i++)
        {
            if (ziming(i, a))
            {
                num[j] = i;
                j++;
            }
        }
        if (a == 3)
        {
            printf("三位的水仙花数共有%d个：", j);
            for (i = 0; i < j; i++)
            {
                printf("%d ", num[i]);
            }
        }
        if (a == 4)
        {
            printf("四位的四叶玫瑰数共有%d个：", j);
            for (i = 0; i < j; i++)
            {
                printf("%d ", num[i]);
            }
        }
        if (a == 5)
        {
            printf("五位的水仙花数共有%d个：", j);
            for (i = 0; i < j; i++)
            {
                printf("%d ", num[i]);
            }
        }
        if (a == 6)
        {
            printf("六位的六合数共有%d个：", j);
            for (i = 0; i < j; i++)
            {
                printf("%d ", num[i]);
            }
        }
        if (a == 7)
        {
            printf("七位的北斗七星数共有%d个：", j);
            for (i = 0; i < j; i++)
            {
                printf("%d ", num[i]);
            }
        }
        if (a == 8)
        {
            printf("八位的八仙数共有%d个：", j);
            for (i = 0; i < j; i++)
            {
                printf("%d ", num[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
int ziming(int n, int m)
{
    int y, i, x, sum = 0, is = 0;
    y = n;
    for (i = 0; i < m; i++)
    {
        x = n % 10;
        sum += pow(x, m);
        n /= 10;
    }
    if (sum == y)
    {
        is = 1;
    }
    return is;
}
