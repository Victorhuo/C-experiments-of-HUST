/* 用递归实现4.1 */
#include <stdio.h>
long long int sum_fac(long long int n); //缺少函数声明
int main()
{
    for (int k = 1; k <= 20; k++)
    {
        printf("k=%d\tthe sum is %lld\n", k, sum_fac(k));
    }
    return 0;
}
long long int sum_fac(long long int n)
{
    long long int s = 0;
    int i;
    long long fac = 1; /* fac没有初始化 */
    for (i = 1; i <= n; i++)
        fac *= i;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        s = fac + sum_fac(n - 1);
        return s;
    }
}
