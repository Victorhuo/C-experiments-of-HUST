#include <stdio.h>
#include <stdlib.h>
struct num
{
    char n;
    struct num *next;
};
void creat(struct num **);
void sum(struct num *tail1, struct num *tail2, struct num **headp);
void printer(struct num *tail);
int main()
{
    puts("first");
    struct num *head1, *head2, *head3;
    creat(&head1);
    puts("second");
    creat(&head2);
    sum(head1, head2, &head3);
    printer(head3);
    return 0;
}
/* 创建函数creat，用于将输入的数据的各位存到一个先进先出单向链表中 */
void creat(struct num **headp)
{
    struct num *head = NULL, *tail, *pre;
    char ch;
    tail = (struct num *)malloc(sizeof(struct num));
    tail->n = getchar();
    tail->next = NULL;
    pre = tail;
    head = pre;
    while ((ch = getchar()) != '\n')
    {
        head = (struct num *)malloc(sizeof(struct num));
        head->next = pre;
        head->n = ch;
        pre = head;
    }
    *headp = head;
}
/* 求和函数，由于数据是最高为在链表头的，所以从后往前加 */
void sum(struct num *head1, struct num *head2, struct num **head3)
{
    struct num *head, *tail, *p1 = head1, *p2 = head2, *pre;
    tail = (struct num *)malloc(sizeof(struct num));
    // tail = head3;
    tail->next = NULL;
    pre = tail;
    head = tail;
    int pl = 0; //表示进位
    int a, b;
    if (head1)
        a = head1->n - '0';
    else
        a = 0;
    if (head2)
        b = head2->n - '0';
    else
        b = 0;
    tail->n = (a + b + pl) % 10 + '0';
    pl = (a + b + pl) / 10;
    while (head1 || head2)
    {
        head = (struct num *)malloc(sizeof(struct num));
        head->next = pre;
        pre = head;
        if (head1)
            head1 = head1->next;
        if (head2)
            head2 = head2->next;
        if (head1)
            a = head1->n - '0';
        else
            a = 0;
        if (head2)
            b = head2->n - '0';
        else
            b = 0;
        head->n = (a + b + pl) % 10 + '0';
        pl = (a + b + pl) / 10;
    }
    *head3 = head;
}
/* 打印函数用于打印求和的值 */
void printer(struct num *head)
{
    struct num *p = head;
    int i = 1; //链表的长度
    if (p->n == '0')
        p = p->next;
    while (p)
    {
        putchar(p->n);
        p = p->next;
        i++;
    }
    puts("");
}
