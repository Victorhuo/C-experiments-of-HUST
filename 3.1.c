#include<stdio.h>
int main()
{
    int i,x,k,flag=0;
    printf("本程序判断合数，请输入大于1的整数，Ctrl+z结束\n");
    while(scanf("%d",&x)!=EOF){
    	flag=0;
        for(i=2,k=x>>1;i<=k;i++){
            if(!(x%i)){//应该再加个括号 
                flag=1;
                break;
            }
        }
        if(flag==1) printf("%d 是合数\n",x);/* 应该为'=='号，且在循环结束后进行判断输出 */
        else printf("%d 不是合数\n",x);
    }
    return 0;
}
