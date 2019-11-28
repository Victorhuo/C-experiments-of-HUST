#include<stdio.h>
int isprime(int);
int main()
{
    int n,i;
    int a,b;
    scanf("%d",&n);
    if(n>=4&&n^1){
        for(i=2;i<=n/2;i++){
            if(isprime(i)&&isprime(n-i)){
                printf("%d=%d+%d\n",n,i,n-i);
            }
        }
    }
    return 0;
}
int isprime(int n)
{
    int i,is=1;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            is=0;
            break;
        }
    }
    return is;
}