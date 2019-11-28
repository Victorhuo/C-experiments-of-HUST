#include <stdio.h>
#define CHANGE 1
int main()
{
    int a;
#if CHANGE
    while ((a = getchar()) != EOF)
    {
        putchar(a);
    }
#else
    int cha = 'A' - 'a';
    while ((a = getchar()) != EOF)
    {
        if (a >= 'a' && a <= 'z')
        {
            putchar(a + cha);
        }
        else
        {
            putchar(a - cha);
        }
    }
#endif
    return 0;
}