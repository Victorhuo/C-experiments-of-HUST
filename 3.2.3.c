#include<stdio.h>
int ispirme(int);
int main()
{
    int flag,j;
    printf("�������󴿴����\n");
    for(j=100;j<=999;j++){
    	flag=0;
		if(isprime(j)&&isprime(j/10)&&isprime(j/100)){
        	flag=1;
        } 
		if(flag){
			printf("%d �Ǵ������\t",j); 
		} 
    }
    return 0;
}
int isprime(int a){
	int i,k,flag=0;
	for(i=2,k=a>>1;i<=k;i++){
            if(!(a%i)){
                flag=1;
            }
        } 
    return flag;
}
