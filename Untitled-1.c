#include <stdio.h>
#define N 100
void plus(int *, int *);
int main()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    plus(a, b);
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