#include<stdio.h>
#define MAXCHA 100
#define TELLNUMBER 11
int main()
{
	char a[MAXCHA];
	int i=0,is=1; //is用来判断是否字符都为数字 
	scanf("%s",a);
	while(a[i]!='\0')
	{
		if(a[i]>='0'&&a[i]<='9'){
			;
		} 
		else{
			is=0;
		}
		i++;
	}
	if(i==TELLNUMBER&&a[0]=='1'&&(a[1]>='3'&&a[1]<='8')&&is)
	{
		printf("是电话号码的格式"); 
	}
	else{
		printf("不是电话号码的格式");
	}
	return 0; 
 } 

