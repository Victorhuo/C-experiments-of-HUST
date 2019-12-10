#include <stdio.h>
int RemoveSame(int *, int);
int main()
{
    int a[10], i, n;
    printf("input the numbers\n");
    while (scanf("%d", &a[i]) && i < 9)
    {
        i++;
    }
    n = RemoveSame(a, i);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
int RemoveSame(int *a, int n)
{
    int i, m = 1, last = *a, j;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (*(a + j) == *(a + i))
            {
                j--;
                break;
            }
        }
        if (j == m)
        {
            *(a + m) = *(a + i);
            m++;
        }
    }
    return m;
}