#include <stdio.h>
#include <math.h>
#define S(a, b, c) (((a) + (b) + (c)) / 2)
#define AREA(a, b, c) sqrt((S(a, b, c)) * (S(a, b, c) - a) * (S(a, b, c) - b) * (S(a, b, c) - c))
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d ", S(a, b, c));
    printf("%.3f", AREA(a, b, c));
    return 0;
}