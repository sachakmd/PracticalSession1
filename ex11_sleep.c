#include <stdio.h>
#include <windows.h>

int main(void)
{
    printf("Debut du programme\n");
    fflush(stdout);
    Sleep(10000);
    printf("10 secondes plus tard\n");
    fflush(stdout);
    return 0;
}
