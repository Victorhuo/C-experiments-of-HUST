#include<stdio.h>
int main()
{
    int i,x,k,flag=0;
    printf("�������жϺ��������������1��������Ctrl+z����\n");
    while(scanf("%d",&x)!=EOF){
    	flag=0;
        for(i=2,k=x>>1;i<=k;i++){
            if(!(x%i)){//Ӧ���ټӸ����� 
                flag=1;
                break;
            }
        }
        if(flag==1) printf("%d �Ǻ���\n",x);/* Ӧ��Ϊ'=='�ţ�����ѭ������������ж���� */
        else printf("%d ���Ǻ���\n",x);
    }
    return 0;
}
