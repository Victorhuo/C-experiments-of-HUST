#include<stdio.h>
int main()
{
	unsigned long t;
	int a,i;
	while(scanf("%ld",&t)!=EOF)
	{
		for(i=0;i<4;i++){
			a=t&0xff000000;//ȡ��t�����8λ 
			a=(unsigned)a>>24;//��������24λ����ʹ���޷������� 
			t<<=8;
			printf("%d\n",a);
			if(i<3){
				printf(".");
			}
		}	
	}
	return 0;
 } 
