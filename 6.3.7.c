#include <stdio.h>
#include <string.h>
char *strlongest(int, char *s[]);
int main()
{
    int n = 4;
    char *s[4] = {"abcd", "lovehust", "hhh", "ddddd"};
    char s2[10];
    char *p = s2;
    p = strlongest(n, s);
    printf("%s", p);
    return 0;
}
char *strlongest(int n, char *s[])
{
    int max = 0, m = strlen(s[0]), i;
    for (i = 1; i < n; i++)
    {
        int t = strlen(s[i]);
        if (m < t)
        {
            max = i;
            m = t;
        }
    }
    return s[max];
}