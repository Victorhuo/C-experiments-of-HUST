#include <stdio.h>
void task0(void)
{
    puts("task0 is called!");
}
void task1(void)
{
    puts("task1 is called!");
}
void task2(void)
{
    puts("task2 is called!");
}
void task3(void)
{
    puts("task3 is called!");
}
void task4(void)
{
    puts("task4 is called!");
}
void task5(void)
{
    puts("task5 is called!");
}
void task6(void)
{
    puts("task6 is called!");
}
void task7(void)
{
    puts("task7 is called!");
}
void (*tasks[8])(void) = {task0, task1, task2, task3, task4, task5, task6, task7};
void execute(void (**todo)(void), int n);
void scheduler(void)
{
    char ch;
    static void (*todo[100])(void);
    int i;
    for (i = 0; (ch = getchar()) != '\n'; i++)
        todo[i] = tasks[ch - '0'];
    execute(todo, i);
}
void execute(void (**todo)(void), int n)
{
    int i;
    for (i = 0; i < n; i++)
        todo[i]();
}
int main(void)
{
    puts("请输入需要执行的函数：");
    scheduler();
    return 0;
}
