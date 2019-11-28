#include<stdio.h>
unsigned short x=0,m=0,n=0;
int main()
{
	scanf("%hx %d %d",&x,&m,&n);
	x=x>>m;//取出m之后的位 
	x=x<<16-n;//向左端靠拢 
	printf("%hx",x);
	return 0;
} 
