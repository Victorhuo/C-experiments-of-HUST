#include<stdio.h>
int isg(int,int);//用来判断i,j是否包含0-9之间所有数 
int main()
{
    int x,i,j;
    printf("请输入x\n");
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
    int a[10];//数组a用来储存i,j的每一位 
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
            if(a[t]==a[y]){//有数重复出现，说明数组a中不能包含0-9所有数 
                return 0;
            }
        }
    }
    return 1;
}
