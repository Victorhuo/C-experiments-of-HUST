#include<stdio.h>
#define MAXNUM 9999
int Fa(int a);//�����ж�4λ���Ƿ�λ����ƽ�� 
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
            printf("���ƺ�Ϊ%d",i);
        }
    }
    return 0;
}
int Fa(int a)
{
    int j,is=0;
    for(j=1;j<=a/2;j++){//�� 1��ʼ��a/2,�ж�a�Ƿ�λj��ƽ�� 
        if(j*j==a){
            is=1;
            break;
        }
    }
    return is;
}
