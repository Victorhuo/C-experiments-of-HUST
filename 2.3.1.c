#include<stdio.h>
int main()
{
    char x;
    x=getchar();
    if(x>='A'&&x<='Z')/* �ж��Ƿ�Ϊ��д*/
    {
        x=x+('a'-'A');/* תΪСд */
    }
    putchar(x);
    return 0;
}