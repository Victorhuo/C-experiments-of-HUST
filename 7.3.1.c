#include <stdio.h>
void f0(int b);
void f1(int b);
void f2(int b);
void f3(int b);
void f4(int b);
void f5(int b);
void f6(int b);
void f7(int b);
void (*p_fun[])(int) = {f0, f1, f2, f3, f4, f5, f6, f7};
int main()
{
    struct bits
    {
        unsigned char bit0 : 1, bit1 : 1, bit2 : 1, bit3 : 1, bit4 : 1, bit5 : 1, bit6 : 1, bit7 : 1;
    };
    struct bits a = {1, 1, 1, 0, 1, 1, 1, 1};
    if (a.bit0 > 0)
        p_fun[0](0);
    if (a.bit1 > 0)
        p_fun[1](1);
    if (a.bit2 > 0)
        p_fun[2](2);
    if (a.bit3 > 0)
        p_fun[3](3);
    if (a.bit4 > 0)
        p_fun[4](4);
    if (a.bit5 > 0)
        p_fun[5](5);
    if (a.bit6 > 0)
        p_fun[6](6);
    if (a.bit7 > 0)
        p_fun[7](7);
}
void f0(int b)
{
    printf("the function %d is called!\n", b);
}
void f1(int b)
{
    printf("the function %d is called!\n", b);
}
void f2(int b)
{
    printf("the function %d is called!\n", b);
}
void f3(int b)
{
    printf("the function %d is called!\n", b);
}
void f4(int b)
{
    printf("the function %d is called!\n", b);
}
void f5(int b)
{
    printf("the function %d is called!\n", b);
}
void f6(int b)
{
    printf("the function %d is called!\n", b);
}
void f7(int b)
{
    printf("the function %d is called!\n", b);
}