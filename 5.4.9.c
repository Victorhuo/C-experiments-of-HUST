#include <stdio.h>
int a[1000] = {0};
void fu(int, int);
int main()
{
    int m;
    printf("\n");
    scanf("%d", &m);
    fu(m, 0);
    return 0;
}
//m的分划：1 m与0的分划 2 m-1与1的分划 3 m-2与2的分划...一直到全为一，为了避免重复，同一个分划后数要<=前数
//按这个原理设计下面的递归函数求m的分划
void fu(int m, int cur) //m表示要划分的数，cur表示该把他储存到第几位
{
    int i;
    if (m == 0) //划分完成
    {
        for (i = 0; i < cur; i++)
        {
            if (i)
            {
                printf("+%d", a[i]);
            }
            else
            {
                printf("%d", a[i]);
            }
        }
        printf("\n");
    }
    else
    {
        for (i = m; i >= 1; i--)
        {
            if (cur == 0 || i <= a[cur - 1])
            {
                a[cur] = i;
                fu(m - i, cur + 1); //m-i的分划，
            }
        }
    }
}
