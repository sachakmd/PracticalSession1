#include <stdio.h>

int main(void)
{
    int x = 42;
    printf("Valeur de x = %d\n", x);
    printf("Adresse de x = %p\n", (void*)&x);
    return 0;
}
