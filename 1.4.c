#include<stdio.h>
void strReverse(char s[]);
int strLength(char s[]);
int main()
{
    char s[1000];
    printf("����һ���ַ���\n");
    scanf("%s",s);
    printf("%s�ĳ���Ϊ: %d\n",s,strLength(s));
    strReverse(s);
    printf("��ת��%s",s);
    return 0;
}
int strLength(char s[])
{
    int i=0;
    while(s[i++]);
    return --i;//������ֵ��ʱ��i�����һ��1�������������ּ�ȥ1
}
void strReverse(char s[])
{
    int i,j;
    for(i=0,j=strLength(s)-1;i<j;i++,j--)//������0��ʼ����������jҪ��ȥ1
    {
        char t;
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
}
