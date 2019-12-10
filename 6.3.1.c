#include <stdio.h>
int main()
{
    long a, i;
    char *p;
    int b, s;
    printf("please imput the number!\n");
    scanf("%d", &a);
    p = (char *)&a;
    for (i = 0; i < 4; i++)
    {
        s = (*p) & 0x0f;
        b = ((*p) >> 4) & 0x0f;
        printf("%x %x\n", b, s);
        p++;
    }
    return 0;
}