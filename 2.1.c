#include<stdio.h>
#define PI 3.14159/* �궨��ʱ����';' */
int main()
{
    int f;
    unsigned short p,k,newint;/* û�ж���newint */ /* ���޷�����������k����ʱ����1 */
    double c,r,s;
    /* 1 */
    printf("input Fahrenheit:");
    scanf("%d",&f);/* ©д��'&' */
    c=5.0/9*(f-32);/* 5/9���Ϊ0������Ҫ��5.0��תΪ�������� */
    printf("\n %d(F)=%.2f(C)\n\n",f,c);
    /* 2 */
    printf("input the radius r:");
    scanf("%lf",&r);/* Ӧ����%lf */
    s=PI*r*r;
    printf("\nThe acreage is %.2f\n\n",s);/* Ӧ��ɾȥ'&', */
    /* 3 */
    k=0xa1b2,p=0x8423;
    newint=(p&0xff00)|(k>>8);
    printf("new int = %#x\n\n",newint);
    return 0;
}