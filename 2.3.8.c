//这题我用了两种方式解，即用不用状态机，状态机法将注释取消，并删去原来的 42-56行就可以使用 

#include<stdio.h>
#define CHINESE 0
char a[1000];//定义一个数组 
void getline(void);//定义函数，用getchar将输入读到数组a中 
int main()
{		
//	int type;
	int wor=0,cha=0,line=1,j=0,i=0;//wor代表字数，cha代表字符数，line代表行数 
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
		if(a[i]==' '||a[i]=='\t'||a[i]=='\n'){//换行，空格，制表位表示词数增加 
			wor++;
			continue;
		}
		if(a[i]&0x80){//判断是否为汉字 
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
    a[i]= '\0';//在末尾放上'\0' 
}
