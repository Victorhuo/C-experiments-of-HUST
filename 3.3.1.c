#include<stdio.h>
int main()
{
    int type;//״̬ 
    int x;
    double tex;//˰
    printf("�����빤��") 
    scanf("%d",&x);
    if(x<5000){/* x<5000ʱΪ��ǧ�Ͷ���Ϊ�Ǹ�״̬��������5000ʱͳһ����Ϊcase 5 */
        type=x/1000;
    }
    else
    {
        type=5;
    }
    
    switch (type){
        case 0:
            tex=0;
            break;
        case 1:
            tex=x*0.05;
            break;
        case 2:
            tex=x*0.1;
            break;
        case 3:
            tex=x*0.15;
            break;
        case 4:
            tex=x*0.2;
            break;
        case 5:
            tex=x*0.25;
    }
    printf("˰��ӦΪ%.4f",tex);/* �Ա���4λ��� */
    return 0;
}
