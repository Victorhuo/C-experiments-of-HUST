#include <stdio.h>
char *strcopy(char *, const char *);
int main()
{
    char s1[10], s2[10], *s3;
    printf("Input a string:\n", s2);
    scanf("%s", s2);
    strcopy(s1, s2);
    printf("%s\n", s1);
    printf("Input a string again:\n", s2);
    scanf("%s", s2);
    s3 = strcopy(s1, s2); //缺失了”;“
    printf("%s\n", s3);
    return 0;
}

char *strcopy(char *t, const char *s)
{
    int i = 0;
    while (*(t + i) = *(s + i)) //使用i来表示，使返回值为首地址
    {
        i++;
    }
    return (t);
}