#include<stdio.h>
int isPerfect(int x)
{
	int y,s;
	for(s=0,y=1;y<=x/2;y++)/*当y=x/2时，还是有可能为x的因子*/
	{
		if(!(x%y))
			s+=y;
	}
	if(s==x)
		return 1;
	return 0;
 } 
 int main()
 {
 	int a;
 	printf("1000以内的完数有: ");
 	for(a=1;a<1000;a++)	
 		if(isPerfect(a))
 			printf("%8d",a);
 	return 0;
 }
