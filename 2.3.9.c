#include<stdio.h>
int main()
{
	char a[20];
	unsigned int n=0;
	int x[4]={0,0,0,0},i=0,is=1,j=0;//x[4]�洢4���� 
	while((a[i]=getchar())!='\n'){//����س���ʾ����
		i++;
	}
	i=0;
	while(a[i]!='\n'){
		if(a[i]>='0'&&a[i]<='9'){
			a[i]=a[i]-'0';
			x[j]=x[j]*10+a[i];
			i++;
		}	
		else if(a[i]=='.'){
			j++;
			i++;
		}
		else
		{
			is=0;//�в��Ϸ����ַ����� 
			break;
		}
	}
	for(j=0;j<4;j++){
		if(x[j]>0xff){
			is=0;//ĳ����ַ������255 
		}
	}
	if(is){
		for(j=0;j<4;j++){
			n=(n<<8)+x[j];
		}
		printf("%u",n);
	}
	else{
		printf("NO");
	}
	return 0;
}
