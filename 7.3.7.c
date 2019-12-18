#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct test
{
    int num;
    char name[10];
    int eng, mat, phy, cpl;
    struct test *next;
};
void typein(struct test **headp);
void sort(struct test **headp);
void sortp(struct test **headp);
void putout(struct test *head);
void change(struct test *head);
void count(struct test *head);
void putoutnum(struct test *head);
double average(struct test *);
int main()
{
    int a;
    struct test *head;
    while (printf("请选择功能\n"), scanf("%d", &a) && a != 0)
    {
        switch (a)
        {
        case 1:
            typein(&head);
            break;
        case 2:
            putout(head);
            break;
        case 3:
            change(head);
            break;
        case 4:
            count(head);
            break;
        case 5:
            putoutnum(head);
            break;
        case 6:
            sort(&head);
            break;
        case 7:
            sortp(&head);
            break;
        }
    }
    return 0;
}
void typein(struct test **headp)
{
    struct test *loc_head = NULL, *tail;
    loc_head = (struct test *)malloc(sizeof(struct test));
    printf("请输入数据\n");
    scanf("%d %s %d %d %d %d", &loc_head->num, &loc_head->name, &loc_head->eng, &loc_head->mat, &loc_head->phy, &loc_head->cpl); /* 对数据域赋值 */
    tail = loc_head;
    int cho = 0;
    while (printf("继续输入请按1，直到结束请按0\n"), scanf("%d", &cho) && cho != 0)
    {
        tail->next = (struct test *)malloc(sizeof(struct test));
        tail = tail->next; /* tail指向新创建的结点 */
        printf("请输入数据\n");
        scanf("%d %s %d %d %d %d", &tail->num, &tail->name, &tail->eng, &tail->mat, &tail->phy, &tail->cpl);
    }
    tail->next = NULL;
    *headp = loc_head;
}
void putout(struct test *loc_head)
{
    printf("各学生成绩如下：\n");
    struct test *p = loc_head;
    printf("%d %s %d %d %d %d\n", p->num, p->name, p->eng, p->mat, p->phy, p->cpl);
    while (p->next)
    {
        p = p->next;
        printf("%d %s %d %d %d %d\n", p->num, p->name, p->eng, p->mat, p->phy, p->cpl);
    }
}
void change(struct test *head)
{
    struct test *p = head;
    printf("请输入学号\n");
    int stunum, i = 1; //i表示是否找到
    scanf("%d", &stunum);
    while (p)
    {
        if (p->num == stunum)
        {
            i = 0;
            int cha = 0;
            printf("请输入要改变的内容（1：学号 2：姓名 3：英语成绩 4：高等数学成绩 5：普通物理 6：C语言程序设计成绩\n");
            scanf("%d", &cha);
            switch (cha)
            {
            case 1:
                scanf("%d", &p->num);
                break;
            case 2:
                scanf("%s", p->name);
                break;
            case 3:
                scanf("%d", &p->eng);
                break;
            case 4:
                scanf("%d", &p->mat);
                break;
            case 5:
                scanf("%d", &p->phy);
                break;
            case 6:
                scanf("%d", &p->cpl);
                break;
            default:
                break;
            }
        }
        p = p->next;
        if (!i)
        {
            printf("完成！\n");
            break;
        }
    }
    if (i)
    {
        printf("找不到对象\n");
    }
}
void count(struct test *head)
{
    double ae = 0, am = 0, ap = 0, ac = 0;
    int num = 0; //人数
    struct test *p = head;
    while (p)
    {
        num++;
        ae += p->eng;
        am += p->mat;
        ap += p->phy;
        ac += p->cpl;
        p = p->next;
    }
    ae /= num;
    am /= num;
    ap /= num;
    ac /= num;
    printf("四门课的平均分分别为%.3f %.3f %.3f %.3f\n", ae, am, ap, ac);
}
void putoutnum(struct test *head)
{
    int sum;
    double ave;
    struct test *p = head;
    while (p)
    {
        sum = p->eng + p->mat + p->phy + p->cpl;
        ave = sum / 4.0;
        printf("%d %s %d %.2f\n", p->num, p->name, sum, ave);
        p = p->next;
    }
}
void sort(struct test **headp)
{
    struct test *head = *headp, *p1, *p2;
    for (p1 = head; p1 != NULL; p1 = p1->next)
        for (p2 = p1->next; p2 != NULL; p2 = p2->next)
            if (average(p2) < average(p1))
            {
                int t = p2->num;
                char s[10];
                p2->num = p1->num;
                p1->num = t;
                strcpy(s, p2->name);
                strcpy(p2->name, p1->name);
                strcpy(p1->name, s);
                t = p2->eng;
                p2->eng = p1->eng;
                p1->eng = t;
                t = p2->mat;
                p2->mat = p1->mat;
                p1->mat = t;
                t = p2->phy;
                p2->phy = p1->phy;
                p1->phy = t;
                t = p2->cpl;
                p2->cpl = p1->cpl;
                p1->cpl = t;
            }
}
double average(struct test *p)
{
    return (p->eng + p->mat + p->phy + p->cpl) / 4;
}
void sortp(struct test **headp)
{
    struct test *head = *headp, *p, *prep, *temp, *tail = NULL, *pl;
    pl = (struct test *)malloc(sizeof(struct test));
    pl->next = head;
    while (pl->next != tail)
    {
        prep = pl;
        p = pl->next;
        while (p->next != tail)
        {
            if (average(p) > average(p->next))
            {
                temp = p->next;
                prep->next = p->next;
                p->next = p->next->next;
                temp->next = p;
                p = temp;
            }
            p = p->next;
            prep = prep->next;
        }
        tail = p;
    }
    *headp = pl->next;
    free(pl);
}