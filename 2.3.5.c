#include<stdio.h>
unsigned short x=0,m=0,n=0;
int main()
{
	scanf("%hx %d %d",&x,&m,&n);
	x=x>>m;//ȡ��m֮���λ 
	x=x<<16-n;//����˿�£ 
	printf("%hx",x);
	return 0;
} 
