#include<stdio.h>
void strReverse(char s[]);
int strLength(char s[]);
int main()
{
    char s[1000];
    printf("输入一个字符串\n");
    scanf("%s",s);
    printf("%s的长度为: %d\n",s,strLength(s));
    strReverse(s);
    printf("反转后：%s",s);
    return 0;
}
int strLength(char s[])
{
    int i=0;
    while(s[i++]);
    return --i;//当返回值的时候，i多加了一次1，所以我让他又减去1
}
void strReverse(char s[])
{
    int i,j;
    for(i=0,j=strLength(s)-1;i<j;i++,j--)//数组以0开始计数，所以j要减去1
    {
        char t;
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
}
