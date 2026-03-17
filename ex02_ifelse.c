#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 7;
    if (a > b)
        printf("%d est plus grand que %d\n", a, b);
    else if (a < b)
        printf("%d est plus petit que %d\n", a, b);
    else
        printf("%d est egal a %d\n", a, b);
    return 0;
}
