#include<stdio.h>
int main()
{
    int m,n,k,p,i,d;
    printf("input m, n\n");
    scanf("%d%d",&m,&n);
    if(m<n){
        m^=n;/* ��m��n��λ�� */
        n^=m;/* ��ʱn�Ѿ�ת������m�ĳ�ʼֵ */
        m^=n;/* �ٽ�mת����n�ĳ�ʼֵ */
    }
    k=0;
    while(m&1&&n&1){/* �������ж����λ�Ƿ�Ϊһ���ж����Ƿ�Ϊż�� */
        m>>=2;/* ��2Լ��m,n���Բ������Ƶķ�ʽ */
        n>>=2;
        k++;
    }
    for(p=1,i=0;i<k;i++)
        p<<=2;/* p*2���������Ƶķ�ʽʵ�� */
    while((d=m-n)!=n){
        if(d>n)
            m=d;
        else{
            m=n,n=d;/* ʹ��','���������������临������ */
        }
    }
    d*=p;
    printf("greatest common divisor:%d",d);
    return 0;
}