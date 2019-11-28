#include <stdio.h>
#define M 10
#define N 3
int main(void)
{
    int a[M], b[M];
    int i, j, k;
    for (i = 0; i < M; i++)
    {
        a[i] = i + 1;
    }
    for (i = M, j = 0; i > 1; i--)
    {
        for (k = 1; k <= N; k++)
        {
            if (++j > i - 1)
                j = 0;
        }
        b[M - i] = j ? a[j - 1] : a[i - 1]; //如果j为0，即为第一个人报数，则将a[j]放入，否则将a[i-1],即最后一个放入
        if (j)
            for (k = --j; k < i; k++)
            {
                a[k] = a[k + 1];
            }
    }
    for (i = 0; i < M - 1; i++)
    {
        printf("%6d", b[i]);
    }
    printf("%6d\n", a[0]);
    return 0;
}