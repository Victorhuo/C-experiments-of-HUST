#include<stdio.h>
int main()
{
    int a[2],max=0,cha,n;//数组a用来储存连续两天的价格，cha为差价，max为最大差价 
    int j;
    printf("请输入天数\n"); 
    scanf("%d",&n);
    printf("请输入收盘价格\n");
    scanf("%d",&a[0]);//先输入第一天的，之后进入循环 
    for(j=1;j<n;j++)
    {
        scanf("%d",&a[1]);
        cha=(a[0]>a[1])?a[0]-a[1]:a[1]-a[0];//cha为差的绝对值，通过判断两个值的大小来比较 
        max=(max>=cha)?max:cha;//重新比较最大差价 
        a[0]=a[1];//将后一天价格储存在a[0]中，继续 
    }
    printf("%d",max);
    return 0;
}
