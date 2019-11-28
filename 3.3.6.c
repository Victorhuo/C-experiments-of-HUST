#include<stdio.h>
#include<math.h>
int main(){
    double x=1000,y=2000;
    int i,j,temp,is=0;
	int a[4]={1,2,4,8};//即0001 0010 0100 1000
    for(i=0;i<16;i++){//从0000到1111，一共16种情况 
    	x=1000,y=2000;
    	for(j=0;j<4;j++){ 
    		if((i&a[j])==a[j]){ 
    			x+=y/4;
    			y-=y/4;
			}
			else{
				x-=x/4;
				y+=x/4;
			}
		}
		if(fabs(x-y)<1000)
		{
			is++;
		}
	}
	printf("%.3f",1.0*is/16);
    return 0;
}
