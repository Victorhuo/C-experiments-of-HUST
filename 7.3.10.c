#include <stdio.h>
#include <stdlib.h>
#define ROW 8 //��
#define COL 8 //��
struct weizhi //����
{
    int flag;
    int x;
    int y;
};
struct node
{
    int top;
    int flag;         //��¼��һ���ߵķ���
    struct weizhi *p; //·��ջ
};
struct node *CreateStacke();                  //����������ʼ��
void Judge(struct node *s, int chess[][COL]); //�ж�������
void Push(struct node *s, struct weizhi x);   //��ջ
void Pop(struct node *s);                     //��ջ
int Full(struct node *s);                     //����
int Empty(struct node *s);                    //�п�
int main()
{
    int chess[ROW][COL] = {0}; //����
    int i, j;
    struct node *step; //step������ߵ�·��
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
    s->top = -1; // ��top����ջ��
    return s;
}
void Judge(struct node *s, int chess[][COL])
{
    int ch[8][2] = {//������ߵİ˸�����
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
    printf("��������ĳ�ʼλ�ã�(%d * %d)\n", ROW, COL);
    scanf("%d%d", &t.y, &t.x);
    if (t.x <= 0 || t.x > COL || t.y <= 0 || t.y > COL)
    {
        printf("��������곬����Χ��\n");
        exit(0);
    }
    t.x--;
    t.y--;
    chess[t.y][t.x] = 1; //ѡ����ĵ�һ����ŵ�
    Push(s, t);
    while (s->top < ROW * COL - 1 && s->top != -1)
    {
        for (i = 0; i < 8; i++)
        {
            t.x = s->p[s->top].x + ch[i][0];
            t.y = s->p[s->top].y + ch[i][1];
            //�����������û�г�����Χ������û���߹�����Ѹ�·�ߴ���·��ջ
            if (t.x >= 0 && t.y >= 0 && t.x < COL && t.y < ROW && !chess[t.y][t.x])
            {
                if (flag)
                { //û���˻�ȥ
                    Push(s, t);
                    chess[t.y][t.x] = s->top + 1;
                    s->p[s->top - 1].flag = i;
                    flag = 1;
                    break;
                }
                else
                {
                    if (s->p[s->top].flag < i)
                    { //������ʱ�������ķ��򲻵���ԭ�ȵķ���
                        flag = 1;
                    }
                }
            }
        }
        //�˵���һ��
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
        printf("ջΪ�գ����ܽ��г�ջ����!\n");
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