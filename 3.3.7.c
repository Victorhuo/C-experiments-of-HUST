#include<stdio.h>
int isp(int);//�ж��Ƿ�Ϊ���� 
int main()
{
    int m,i;
    scanf("%d",&m);
    for(i=4;i<m;i++)// 
    {
        if(isp(i)&&isp(i-2))//i��i-2��Ϊ����������� 
        {
            printf("%d %d\n",i-2,i);
        }
    }
    return 0;
}
int isp(int i)
{
    int a,k=1;
    for(a=2;a<=i/2;a++){
        if(i%a==0)
        {
            k=0;
        }
    }
    return k;
}
