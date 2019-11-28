#include<stdio.h>
#define UP 1 //表示现在的状态是增加还是减少 
#define DOWN 0
int main()
{
	int n,i,states,p=0;
	int a[1000];//定义一个数组来储存销售量 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	states=(a[0]>a[1])?DOWN:UP;
	for(i=1;i<n;i++){
		if(a[i]<a[i+1]){
			if(states==DOWN){
				p++;
			}
			states=UP;
		}
		else{
			if(states==UP){
				p++;
			}
			states=DOWN;	
		}
	}
	printf("%d",p);
	return 0;
 } 
