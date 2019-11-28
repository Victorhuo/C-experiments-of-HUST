#include <stdio.h>
int main()
{
    char num[32];
    int a, i;
    printf("������\n");
    scanf("%d", &a);
    for (i = 31; i >= 0; i--)
    {
        num[i] = (a & 1) + ('1' - 1);
        a >>= 1;
        a &= 0x7ffffff; //避免最高位补一
    }
    for (i = 0; i < 32; i++)
    {
        putchar(num[i]);
    }
    return 0;
}
