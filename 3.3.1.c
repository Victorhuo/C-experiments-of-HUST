#include<stdio.h>
int main()
{
    int type;//状态 
    int x;
    double tex;//税
    printf("请输入工资") 
    scanf("%d",&x);
    if(x<5000){/* x<5000时为几千就定义为那个状态，而超过5000时统一定义为case 5 */
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
    printf("税金应为%.4f",tex);/* 以保留4位输出 */
    return 0;
}
