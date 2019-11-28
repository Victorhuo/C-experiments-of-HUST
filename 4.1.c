#include <stdio.h>
long long int sum_fac(int n); //缺少函数声明
int main()
{
    int k;
    for (k = 1; k <= 20; k++)
    {
        printf("k=%d\tthe sum is %lld\n", k, sum_fac(k));
    }
    return 0;
}
long long int sum_fac(int n) /* 在k较大时sum会很大导致溢出，所以用long long int格式存储fac和s */
{
    long long int s = 0;
    int i, j; /* fac没有初始化 */
    long long fac;
    for (j = 1, fac = 1; j <= n; j++)
    {
        for (i = 1; i <= j; i++)
            fac *= i;
        s += fac;
    }
    return s;
}
