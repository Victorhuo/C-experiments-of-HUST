#include <stdio.h>
long long fabonacci(int n);
int main(void)
{
    int i, k;
    long long sum = 0, fabonacci(int n);
    printf("input n:");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        sum += fabonacci(i);
        printf("%d\tthe sum is %lld\n", i, sum);
    }
    return 0;
}
long long fabonacci(int n)
{
    static long long int num[50] = {0};
    if (n == 1 || n == 2)
        return 1;
    if (num[n - 1] > 0)
    {
        return num[n - 1];
    }
    else
    {
        num[n - 1] = fabonacci(n - 1) + fabonacci(n - 2);
        return num[n - 1];
    }
}
