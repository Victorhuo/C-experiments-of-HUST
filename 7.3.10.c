#include <stdio.h>
#include <stdlib.h>
#define ROW 8 //行
#define COL 8 //列
struct weizhi //坐标
{
    int flag;
    int x;
    int y;
};
struct node
{
    int top;
    int flag;         //记录上一步走的方向
    struct weizhi *p; //路径栈
};
struct node *CreateStacke();                  //创建，并初始化
void Judge(struct node *s, int chess[][COL]); //判断往哪走
void Push(struct node *s, struct weizhi x);   //入栈
void Pop(struct node *s);                     //出栈
int Full(struct node *s);                     //判满
int Empty(struct node *s);                    //判空
int main()
{
    int chess[ROW][COL] = {0}; //棋盘
    int i, j;
    struct node *step; //step存的是走的路径
    step = CreateStacke();
    Judge(step, chess);
    for (i = 0; i < COL; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            printf("%2d ", chess[i][j]);
        }
        printf("\n");
    }
    return 0;
}
struct node *CreateStacke()
{
    struct node *s = (struct node *)malloc(sizeof(struct node));
    s->p = (struct weizhi *)malloc(sizeof(struct weizhi) * ROW * COL);
    s->top = -1; // 把top放在栈底
    return s;
}
void Judge(struct node *s, int chess[][COL])
{
    int ch[8][2] = {//马可能走的八个方向
                    {1, -2},
                    {2, -1},
                    {2, 1},
                    {1, 2},
                    {-1, 2},
                    {-2, 1},
                    {-2, -1},
                    {-1, -2}};
    int i, j = 1, flag = 1;
    struct weizhi t;
    printf("请输入马的初始位置：(%d * %d)\n", ROW, COL);
    scanf("%d%d", &t.y, &t.x);
    if (t.x <= 0 || t.x > COL || t.y <= 0 || t.y > COL)
    {
        printf("输入的坐标超出范围！\n");
        exit(0);
    }
    t.x--;
    t.y--;
    chess[t.y][t.x] = 1; //选择马的第一个落脚点
    Push(s, t);
    while (s->top < ROW * COL - 1 && s->top != -1)
    {
        for (i = 0; i < 8; i++)
        {
            t.x = s->p[s->top].x + ch[i][0];
            t.y = s->p[s->top].y + ch[i][1];
            //如果它的坐标没有超出范围，并且没有走过，则把该路线存入路径栈
            if (t.x >= 0 && t.y >= 0 && t.x < COL && t.y < ROW && !chess[t.y][t.x])
            {
                if (flag)
                { //没有退回去
                    Push(s, t);
                    chess[t.y][t.x] = s->top + 1;
                    s->p[s->top - 1].flag = i;
                    flag = 1;
                    break;
                }
                else
                {
                    if (s->p[s->top].flag < i)
                    { //重新走时，让它的方向不等于原先的方向
                        flag = 1;
                    }
                }
            }
        }
        //退到上一步
        if (i == 8)
        {

            chess[s->p[s->top].y][s->p[s->top].x] = 0;
            Pop(s);
            flag = 0;
        }
    }
}
void Push(struct node *s, struct weizhi x)
{
    s->top++;
    s->p[s->top] = x;
}
void Pop(struct node *s)
{
    if (Empty(s))
    {
        printf("栈为空，不能进行出栈操作!\n");
        exit(0);
    }
    s->top--;
}
int Full(struct node *s)
{
    if (s->top >= ROW * COL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Empty(struct node *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}