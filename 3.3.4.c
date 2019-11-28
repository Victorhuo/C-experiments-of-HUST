#include<stdio.h>
int main()
{
    int h=10;
    int i,j,m,n,s;//i为行数，j为列数 
    for(m=1;m<=h-1;m++){//打印第一行的空格 
    	printf("  ");
	}
    printf("1\n");                   
    for(i=2;i<=h;s=1,i++)//从第二行开始 
    {	
        for(n=1;n<=h-i;n++)
        {
    	    printf("  ");
		}
        printf("%-4d",1);         
        for(j=2;j<=i-1;j++)
        {
            printf("%-4d",(s=(i-j+1)*s/(j-1)));// 
        }    
        printf("1\n");//打印最后一个1并换行 
    }
    return 0;
}
