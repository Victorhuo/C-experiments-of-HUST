#include<stdio.h>
#define MAXCHA 100
#define TELLNUMBER 11
int main()
{
	char a[MAXCHA];
	int i=0,is=1; //is�����ж��Ƿ��ַ���Ϊ���� 
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
		printf("�ǵ绰����ĸ�ʽ"); 
	}
	else{
		printf("���ǵ绰����ĸ�ʽ");
	}
	return 0; 
 } 

