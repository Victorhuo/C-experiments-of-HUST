#include<stdio.h>
int isg(int,int);//�����ж�i,j�Ƿ����0-9֮�������� 
int main()
{
    int x,i,j;
    printf("������x\n");
    scanf("%d",&x);
    for(i=1234;i<=98765;i++){
            for(j=1234;j<=98765;j++){
                    if(i==x*j){{
                        if(isg(i,j)){
                            if(j<10000){
                                printf("%d/0%d=%d\t",i,j,x);
                            }
                            else{
                                printf("%d/%d=%d\t",i,j,x);
                            }
                        }
                    }
            }
        }
    }
    return 0;
}
int isg(int i,int j)
{
    int is=0;
    int x,y,t;
    int a[10];//����a��������i,j��ÿһλ 
    for(x=0;x<5;x++){
        a[x]=i%10;
        i/=10;
        
    }
    for(x=5;x<10;x++){
        a[x]=j%10;
        j/=10;
    }
    for(y=0;y<=9;y++){
        for(t=y+1;t<=9;t++){
            if(a[t]==a[y]){//�����ظ����֣�˵������a�в��ܰ���0-9������ 
                return 0;
            }
        }
    }
    return 1;
}
