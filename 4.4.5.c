#include <stdio.h>
#include <string.h>
#define STRCPY(a, b) strcpy(a##_p, #b)
//#b说明之间把b当作字符串输入，而不是b变量,
// a##_p说明把a当作字符串并且后面紧跟字符串_p作为整个字符串,STRCPY(var1, var2)展开就变成strcpy(var1_p,"var2")
int main()
{
    char var1_p[20];
    char var2_p[30];
    strcpy(var1_p, "aaaa");
    strcpy(var2_p, "bbbb");
    STRCPY(var1, var2); //则var1_p变为var2
    STRCPY(var2, var1);
    printf("var1 = %s\n", var1_p);
    printf("var2 = %s\n", var2_p);
    return 0;
}