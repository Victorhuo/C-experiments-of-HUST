#include <stdio.h>
long long int sum_fac(int n);
int main()
{
    int k;
    for (k = 1; k <= 20; k++)
    {
        long long int a = 0;
        a = sum_fac(k);
        printf("k=%d\tthe sum is %lld\n", k, a);
    }
    return 0;
}
long long int sum_fac(int n)
{
    static long long int s = 0; //使用静态变量s，则不用反复计算，后一个量可以使用前一个量的值加其阶乘即可
    int i;
    long long int fac = 1;
    for (i = 1; i <= n; i++)
        fac *= i;
    s += fac;
    return s;
}
