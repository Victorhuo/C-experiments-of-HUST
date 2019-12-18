#include <stdio.h>
#define STRING char *
typedef char *string;
int main()
{
    char e = 'a';
    STRING a = e, b = e;
    string c = e, d = e;
    printf("%c %c %c %c %c", a, b, c, d, e);
    return 0;
}