#include<stdio.h>
int main()
{
    int m,n,k,p,i,d;
    printf("input m, n\n");
    scanf("%d%d",&m,&n);
    if(m<n){
        m^=n;/* 将m与n按位加 */
        n^=m;/* 此时n已经转换成了m的初始值 */
        m^=n;/* 再将m转换成n的初始值 */
    }
    k=0;
    while(m&1&&n&1){/* 可以用判断最低位是否为一来判断其是否为偶数 */
        m>>=2;/* 用2约减m,n可以采用右移的方式 */
        n>>=2;
        k++;
    }
    for(p=1,i=0;i<k;i++)
        p<<=2;/* p*2可以用左移的方式实现 */
    while((d=m-n)!=n){
        if(d>n)
            m=d;
        else{
            m=n,n=d;/* 使用','运算符来将两个语句复合起来 */
        }
    }
    d*=p;
    printf("greatest common divisor:%d",d);
    return 0;
}