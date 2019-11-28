
#include <stdio.h>
void strnins(char *t, char *s, int n);
int main()
{
    char s[20], t[20];
    scanf("%s %s", s, t);
    int n;
    scanf("%d", &n);
    strnins(t, s, n);
    printf("%s\n", t);
}
void strnins(char *t, char *s, int n)
{
    int i, long_s, long_t;
    for (i = 0; t[i] != '\0'; i++)
    {
        ;
    }
    long_t = i;
    for (i = 0; s[i] != '\0'; i++)
    {
        ;
    }
    long_s = i;
    for (i = long_t - 1; i >= n; i--)
    {
        t[i + long_s] = t[i];
    }
    for (i = n; i < n + long_s; i++)
    {
        t[i] = s[i - n];
    }
}