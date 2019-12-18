#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NUMBER '0'
#define MAXOP 100 //操作数的最大长度
struct stack      //值栈
{
    double val;
    struct stack *last;
    struct stack *next;
};
struct stack *head, *p;
void push(double);
double pop(void);
int getop(char *);
int main()
{
    int type;
    char s[MAXOP]; //用于存放操作数
    double op2;
    head = (struct stack *)malloc(sizeof(struct stack));
    head->last = NULL;
    head->next = NULL;
    p = head;
    while ((type = getop(s)) != EOF)
    {
        switch (type)
        {
        case NUMBER:
            push(atoi(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                puts("error: zero divisor");
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            puts("error:unknow");
            break;
        }
    }
    return 0;
}
/* 入栈 */
void push(double f)
{
    p->next = (struct stack *)malloc(sizeof(struct stack));
    p->next->last = p;
    p->next->val = f;
    p = p->next;
    p->next = NULL;
}
/* 出栈 */
double pop(void)
{
    if (p->last != NULL)
    {
        double t = p->val;
        p = p->last;
        free(p->next);
        p->next = NULL;
        return t;
    }
    else
    {
        puts("错误：空栈");
        return 0.0;
    }
}
/* 获取下一个运算符或操作数 */
int getop(char s[])
{
    int c, i;
    while ((s[0] = c = getchar()) == ' ' || c == '\t')
    {
        ;
    }
    s[1] = '\0';
    if (!isdigit(c)) //不是数
        return c;
    i = 0;
    while (isdigit(s[++i] = c = getchar())) //是数，则读取剩下的部分
    {
        ;
    }
    s[i] = '\0';
    if (c != EOF) //将多读取的数压回到输入中
        ungetc(c, stdin);
    return NUMBER;
}
