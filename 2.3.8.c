//�������������ַ�ʽ�⣬���ò���״̬����״̬������ע��ȡ������ɾȥԭ���� 42-56�оͿ���ʹ�� 

#include<stdio.h>
#define CHINESE 0
char a[1000];//����һ������ 
void getline(void);//���庯������getchar�������������a�� 
int main()
{		
//	int type;
	int wor=0,cha=0,line=1,j=0,i=0;//wor����������cha�����ַ�����line�������� 
	getline();
	for(i=0;a[i]!='\0';i++)
	{
//		if(a[i]&0x80){
//			type=CHINESE;
//		}
//		else
//		{
//			type=a[i];
//		}
//		switch (type){
//			case '\n':
//				line++;
//			case ' ':
//			case '\t':
//				wor++;
//				break;
//			case CHINESE:
//				cha++;
//				i++;
//				if(a[i]!=' '&&a[i]!='\n'&&a[i]!='\t'){
//					;
//				}
//				else{
//					type=a[i];
//					cha--;
//				}
//		     	break;
//			default :
//				cha++;
//		}
		if(a[i]=='\n'){
			line++;
		}
		if(a[i]==' '||a[i]=='\t'||a[i]=='\n'){//���У��ո��Ʊ�λ��ʾ�������� 
			wor++;
			continue;
		}
		if(a[i]&0x80){//�ж��Ƿ�Ϊ���� 
			cha++;
			i++;
			j++;
		}
		else{
			cha++; 
		}
	}
	printf("%d %d %d",wor,cha,line);
	return 0;
}
void getline(void)
{
    int c,i;
    extern char a[1000];
    
    for (i=0;i<999 && ( c=getchar()) != EOF ; ++i)
    {
        a[i]= c;
    }
    a[i]= '\0';//��ĩβ����'\0' 
}
