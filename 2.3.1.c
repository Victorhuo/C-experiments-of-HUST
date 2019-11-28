#include<stdio.h>
int main()
{
    char x;
    x=getchar();
    if(x>='A'&&x<='Z')/* 判断是否为大写*/
    {
        x=x+('a'-'A');/* 转为小写 */
    }
    putchar(x);
    return 0;
}