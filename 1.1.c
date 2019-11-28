#include<math.h>/*数学函数库的头文件*/ 
#include<stdio.h>
int main()
{
	long x,y;
	int i;/*原来没有定义i*/ 
	for(i=1;i<100000;i++)
	{
		x=sqrt(i+100);
		y=sqrt(i+268);
		if(x*x==i+100&&y*y==i+268)	/*if中语句应在一个括号里，原来在两个*/ 
			printf("\n%d",i);
	}
	return 0;
}
