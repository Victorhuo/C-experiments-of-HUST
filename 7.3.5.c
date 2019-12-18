#include <stdio.h>
#include <stdlib.h>
struct num
{
    char n;
    struct num *next;
    struct num *last;
};
void creat(struct num **, struct num **);
void sum(struct num *tail1, struct num *tail2, struct num **headp);
void printer(struct num *tail);
int main()
{
    puts("first");
    struct num *head1, *tail1, *tail2, *head2, *tail3;
    creat(&head1, &tail1);
    puts("second");
    creat(&head2, &tail2);
    sum(tail1, tail2, &tail3);
    printer(tail3);
    return 0;
}
/* 创建函数creat，用于将输入的数据的各位存到一个双向链表中 */
void creat(struct num **headp, struct num **tailp)
{
    struct num *head = NULL, *tail;
    char ch;
    head = (struct num *)malloc(sizeof(struct num));
    head->n = getchar();
    head->last = NULL;
    tail = head;
    while ((ch = getchar()) != '\n')
    {
        tail->next = (struct num *)malloc(sizeof(struct num));
        tail->next->last = tail;
        tail = tail->next;
        tail->n = ch;
    }
    tail->next = NULL;
    *tailp = tail;
    *headp = head;
}
/* 求和函数，由于数据是最高为在链表头的，所以从后往前加 */
void sum(struct num *tail1, struct num *tail2, struct num **tail3)
{
    struct num *head3, *tail, *p1 = tail1, *p2 = tail2;
    head3 = (struct num *)malloc(sizeof(struct num));
    tail = head3;
    tail->last = NULL;
    int pl = 0; //表示进位
    int a, b;
    if (tail1)
        a = tail1->n - '0';
    else
        a = 0;
    if (tail2)
        b = tail2->n - '0';
    else
        b = 0;
    tail->n = (a + b + pl) % 10 + '0';
    pl = (a + b + pl) / 10;
    while (tail1 || tail2)
    {
        tail->next = (struct num *)malloc(sizeof(struct num));
        tail->next->last = tail;
        tail = tail->next;
        if (tail1)
            tail1 = tail1->last;
        if (tail2)
            tail2 = tail2->last;
        if (tail1)
            a = tail1->n - '0';
        else
            a = 0;
        if (tail2)
            b = tail2->n - '0';
        else
            b = 0;
        tail->n = (a + b + pl) % 10 + '0';
        pl = (a + b + pl) / 10;
    }
    tail->next = NULL;
    *tail3 = tail;
}
/* 打印函数用于打印求和的值 */
void printer(struct num *tail)
{
    /* 由于无法确定是否有进位，在creat函数中都多建了一个单元，里面存有第一位，为1或0，在打印时，第一个0不用输出 */
    struct num *p = tail;
    if (p->n != '0')
        putchar(p->n);
    p = p->last;
    while (p)
    {
        putchar(p->n);
        p = p->last;
    }
    puts("");
}
