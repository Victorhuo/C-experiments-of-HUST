#include <stdio.h>
#include <string.h>
void RemoveDuplicate(char *s); //缺少函数声明
int main()
{
    char str[200];
    printf("Input strings,end of Ctrl+z\n");
    while (fgets(str, 200, stdin) != NULL)
    {
        RemoveDuplicate(str);
        printf("%s", str);
    }
    return 0;
}
void RemoveDuplicate(char *s)
{
    int r, w, i, len;
    len = strlen(s);
    for (r = w = 0; r < len; r++)
    {
        if (r < len)
        {
            w = s[r];
            for (i = r + 1; i < len; i++)
            {
                if (s[i] == w)
                    s[i] = '\0';
            }
        }
    }
}