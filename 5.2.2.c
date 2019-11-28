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
    int cha[256] = {0}; //定义数组，位置表示各字符出现与否
    int r, w, i, len;
    len = strlen(s);
    for (r = 0; r < len; r++)
    {
        if (cha[s[r]] == 0) //如果该字符为第一次出现
        {
            cha[s[r]] = 1;
        }
        else
        {
            s[r] = '\0';
        }
    }
}