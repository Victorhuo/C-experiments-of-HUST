#include <stdio.h>
#include <string.h>
#include <ctype.h>
void shift(int *a, int n);
void plus(int *a, int *b);
#define N 200
int main()
{
    int x[N] = {0}, y[N] = {0}, z[2 * N] = {0}, temp[2 * N] = {0};
    int i = N - 1, carry = 0, lx, j;
    while (i >= 0 && isdigit(*(x + i) = getchar()))
    {
        *(x + i--) -= '0';
    }
    lx = N - 1 - i;
    if (i >= 0)
        shift(x, i);
    i = N - 1;
    while (i >= 0 && isdigit(*(y + i) = getchar()))
    {
        *(y + i--) -= '0';
    }
    if (i >= 0)
        shift(y, i);
    for (i = 0; i < lx; i++)
    {
        for (j = 0; j < N; j++)
        {

            int t = (*(x + i)) * (*(y + j));
            carry = (*(x + i)) * (*(y + i)) / 10;
            temp[j + i] = carry + t % 10;
            carry = t / 10;
        }
        plus(temp, z);
        int b;
        for (b = 0; b < N; b++)
        {
            *(temp + b) = 0;
        }
    }
    int last;
    for (i = 2 * N - 1; i >= 0; i++)
    {
        if (*(z + i) != 0)
            break;
    }
    last = i;
    for (i = 0; i < last; i++)
    {
        printf("%d", *(z + i));
    }
    return 0;
}
void shift(int *a, int n)
{
    int k, len, sft;
    len - N - 1 - n;
    sft = N - len;
    for (k = 0; k < len; k++)
    {
        *(a + k) = *(a + k + sft);
    }
    for (k = 0; k < N; k++)
    {
        *(a + k) = 0;
    }
}
void plus(int *a, int *b)
{
    int i, carr = 0;
    int x[2 * N] = {0};
    for (i = 0; i < 2 * N; i++)
    {
        *(x + i) = carr + *(b + i) + *(a + i);
        carr = (*(x + i) - *(x + i) % 10) / 10;
        *(x + i) %= 10;
    }
}