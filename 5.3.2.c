#include <stdio.h>
#define M 10
#define N 3
int main(void)
{
    int last;
    int a[M], b[M];
    int i, j, k;
    for (i = 0; i < M; i++)
    {
        a[i] = i + 1;
    }
    for (i = M, j = 0; i > 1; i--)
    {
        k = 1;
        for (k = 1; k <= N;)
        {
            if (a[j])
            {
                if (++j > M - 1)
                {
                    last = j; //上一轮的有效值
                    j = 0;
                }

                k++;
            }
            else
            {
                j++;
            }
        }
        b[M - i] = j ? a[j - 1] : a[last]; //如果j为0，即为第一个人报数，则将a[9]放入，否则将a[last]放入
        if (j)
            // for (k = --j; k < i; k++)
            // {
            //     a[k] = a[k + 1];
            // }
            a[--j] = 0;
    }
    for (i = 0; i < M - 1; i++)
    {
        printf("%6d", b[i]);
    }
    for (i = 0; i < M - 1; i++)
    {
        if (a[i])
        {
            printf("%6d\n", a[i]);
            break;
        }
    }

    return 0;
}