#include<stdio.h>
int main()
{
    int h=10;
    int i,j,m,n,s;//iΪ������jΪ���� 
    for(m=1;m<=h-1;m++){//��ӡ��һ�еĿո� 
    	printf("  ");
	}
    printf("1\n");                   
    for(i=2;i<=h;s=1,i++)//�ӵڶ��п�ʼ 
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
        printf("1\n");//��ӡ���һ��1������ 
    }
    return 0;
}
