#include<stdio.h>
int main()
{
    int a[2],max=0,cha,n;//����a����������������ļ۸�chaΪ��ۣ�maxΪ����� 
    int j;
    printf("����������\n"); 
    scanf("%d",&n);
    printf("���������̼۸�\n");
    scanf("%d",&a[0]);//�������һ��ģ�֮�����ѭ�� 
    for(j=1;j<n;j++)
    {
        scanf("%d",&a[1]);
        cha=(a[0]>a[1])?a[0]-a[1]:a[1]-a[0];//chaΪ��ľ���ֵ��ͨ���ж�����ֵ�Ĵ�С���Ƚ� 
        max=(max>=cha)?max:cha;//���±Ƚ������ 
        a[0]=a[1];//����һ��۸񴢴���a[0]�У����� 
    }
    printf("%d",max);
    return 0;
}
