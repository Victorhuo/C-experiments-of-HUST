#include<math.h>/*��ѧ�������ͷ�ļ�*/ 
#include<stdio.h>
int main()
{
	long x,y;
	int i;/*ԭ��û�ж���i*/ 
	for(i=1;i<100000;i++)
	{
		x=sqrt(i+100);
		y=sqrt(i+268);
		if(x*x==i+100&&y*y==i+268)	/*if�����Ӧ��һ�������ԭ��������*/ 
			printf("\n%d",i);
	}
	return 0;
}
