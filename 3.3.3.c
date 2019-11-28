#include<stdio.h>
#define MAXLINE 1000
char line[MAXLINE];//最大输入字符 
int getline(void);//将输入存到数组中的函数 

int main()
{
    int i,x;
    x=getline();
    for(i=0;i<x;i++)
    {
        if(line[i]==' '&&line[i+1]==' ')//连续两个空格 
        {
            ;
        }
        else{
            putchar(line[i]);
        }
    }
    return 0;
}
int getline(void)
{
    int i,c;
    for(i=0;i<MAXLINE-1&&(c=getchar())!= EOF ; ++i)
    {
        line[i]=c;
    }
    line[i]='\0';
    return i;
    
}
