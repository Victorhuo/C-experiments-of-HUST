#include<stdio.h>
#define MAXNUM 9999
int Fa(int a);//用来判断4位数是否位整数平方 
int main()
{
    int a[4],i,j;
    for(i=0;i<MAXNUM;i++){
        a[0]=i/1000;
        a[1]=(i%1000)/100;
        a[2]=(i%100)/10;
        a[3]=i%10;
        if(a[0]==a[1]&&a[3]==a[2]&&a[1]!=a[3]&&Fa(i))
        {
            printf("车牌号为%d",i);
        }
    }
    return 0;
}
int Fa(int a)
{
    int j,is=0;
    for(j=1;j<=a/2;j++){//从 1开始到a/2,判断a是否位j的平方 
        if(j*j==a){
            is=1;
            break;
        }
    }
    return is;
}
