#include <stdio.h>
#include <stdlib.h> //使用了malloc函数
#include <string.h>
#define N 4
void strsort(char **s, int size)
{
    char *temp;
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (strcmp(*(s + j), *(s + j + 1))) //如果s[j]比s[j+1]更大就交换
            {
                temp = *(s + j);
                *(s + j) = *(s + 1 + j);
                *(s + j + 1) = temp;
            }
        }
    }
}
int main()
{
    int i;
    char *s[N], t[50];
    for (i = 0; i < N; i++)
    {
        gets(t);
        s[i] = (char *)malloc(strlen(t) + 1);
        strcpy(s[i], t); //拷入s中
    }
    strsort(s, N);
    for (i = 0; i < N; i++)
    {
        puts(s[i]);
    }
    /*  free(s); */
    return 0;
}