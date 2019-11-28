#include<stdio.h>
int num(int x);//该函数用来求x的位数
int main()
{
    int x,i,a,sum=0,k;
    scanf("%d",&x);
    a=num(x);
    k=x;
    for(i=0;i<a;i++)
    {
        sum+=k%10;/* 将k末尾的数加到sum中，再将k除十，直到所有位都加完 */
        k/=10;
    }
    printf("%d是%d位数，各位数字之和位%d",x,a,sum);
    return 0;
}

int num(int x)
{
    int j;
    while(x>0){
        x/=10;
        j++;
    }
    return j;
}