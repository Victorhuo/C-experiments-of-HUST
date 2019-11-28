#include<stdio.h>
int main()
{
	unsigned long t;
	int a,i;
	while(scanf("%ld",&t)!=EOF)
	{
		for(i=0;i<4;i++){
			a=t&0xff000000;//取出t的最高8位 
			a=(unsigned)a>>24;//将其左移24位，并使用无符号类型 
			t<<=8;
			printf("%d\n",a);
			if(i<3){
				printf(".");
			}
		}	
	}
	return 0;
 } 
