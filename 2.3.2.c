#include<stdio.h>
int num(int x);//�ú���������x��λ��
int main()
{
    int x,i,a,sum=0,k;
    scanf("%d",&x);
    a=num(x);
    k=x;
    for(i=0;i<a;i++)
    {
        sum+=k%10;/* ��kĩβ�����ӵ�sum�У��ٽ�k��ʮ��ֱ������λ������ */
        k/=10;
    }
    printf("%d��%dλ������λ����֮��λ%d",x,a,sum);
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