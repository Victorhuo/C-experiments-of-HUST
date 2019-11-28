#include<stdio.h>
int main(void)
{
	char c,numchar,numline;
	numchar=0;
	numline=0;
	printf("输入若干行文本，Ctrl+z结束\n");
	while((c=getchar())!=EOF)//！=运算符优先级比=高，所以要加括号 
	{
		numchar++;
		if(c=='\n')
			numline++;
	}
	printf("字符数: %d,",numchar++);
	printf("行数: %d\n",numline);
	
	return 0;
}
