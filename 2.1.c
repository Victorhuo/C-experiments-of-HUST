#include<stdio.h>
#define PI 3.14159/* 宏定义时不用';' */
int main()
{
    int f;
    unsigned short p,k,newint;/* 没有定义newint */ /* 用无符号数，以免k右移时补了1 */
    double c,r,s;
    /* 1 */
    printf("input Fahrenheit:");
    scanf("%d",&f);/* 漏写了'&' */
    c=5.0/9*(f-32);/* 5/9结果为0，所以要用5.0来转为浮点运算 */
    printf("\n %d(F)=%.2f(C)\n\n",f,c);
    /* 2 */
    printf("input the radius r:");
    scanf("%lf",&r);/* 应该用%lf */
    s=PI*r*r;
    printf("\nThe acreage is %.2f\n\n",s);/* 应该删去'&', */
    /* 3 */
    k=0xa1b2,p=0x8423;
    newint=(p&0xff00)|(k>>8);
    printf("new int = %#x\n\n",newint);
    return 0;
}