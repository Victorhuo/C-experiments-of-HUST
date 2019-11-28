#include <stdio.h>
//输入
void type_in(void);
//下面的三个函数用来快速排序
void quick(int *a, int min, int max);
int partition(int *a, int min, int max);
void swap(int *a, int i, int j);
//输出
void put_out();
//定义结构和学生个数n
void binsearch(int max);

struct student
{
    int point;
    char name[10];
} student_cs[30], temp;
int n;
int main()
{
    printf("请选择功能：1，2，3，4\n");
    int a, p[31] = {0}, i;
    while (scanf("%d", &a) != EOF)
    {
        switch (a)
        {
        case 1:
            type_in();
            break;
        case 2:
            for (i = 0; i < n + 1; i++)
            {
                p[i] = student_cs[i].point;
            }
            quick(p, 1, n);
            break;
        case 3:
            put_out();
            break;
        case 4:
            binsearch(n);
        }
    }
    return 0;
}
void type_in(void)
{
    int i = 0;
    printf("请输入n的值：\n");
    scanf("%d", &n);
    while (i++ < n)
    {
        scanf("%s", &student_cs[i].name);
        scanf("%d", &student_cs[i].point);
    }
    printf("输入完成：\n");
}
void put_out()
{
    int i = 0;
    printf("学生及其分数为：\n");
    while (i++ < n)
    {
        printf("%s :", student_cs[i].name);
        printf("%d\n", student_cs[i].point);
    }
}
void quick(int *a, int min, int max)
{
    int split;
    if (min < max)
    {
        split = partition(a, min, max);
        quick(a, min, split - 1);
        quick(a, split + 1, max);
    }
}
int partition(int *a, int min, int max)
{
    int key = max;
    while (min < max)
    {
        while (min < max && a[min] <= a[key])
        {
            min++;
        }
        while (min < max && a[max] >= a[key])
        {
            max--;
        }
        swap(a, min, max);
    }
    swap(a, min, key);
    return min;
}
void swap(int *a, int i, int j)
{
    temp = student_cs[i];
    student_cs[i] = student_cs[j];
    student_cs[j] = temp;
    int x = a[i];
    a[i] = a[j];
    a[j] = x;
}
void binsearch(int max)
{
    int min = 1, mid, x;
    printf("\n");
    scanf("%d", &x);
    mid = (max) / 2;
    while (min <= max)
    {
        if (student_cs[mid].point == x)
        {
            printf("%s %d\n", student_cs[mid].name, student_cs[mid].point);
            break;
        }
        else if (student_cs[mid].point > x)
        {
            max = mid - 1;
            mid = (min + mid) / 2;
        }
        else if (student_cs[mid].point < x)
        {
            min = mid + 1;
            mid = (min + max) / 2;
        }
    }
    if (min > max)
    {
        printf("not found!\n");
    }
}
