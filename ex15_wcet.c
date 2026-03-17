#include <stdio.h>
#include <time.h>

int main(void)
{
    int i, j;
    clock_t start, end;
    double time_spent;
    start = clock();
    for (i = 0; i < 10000; i++)
    {
        for (j = 0; j < 1000; j++)
        {
        }
    }
    end = clock();
    time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Temps d'execution : %f secondes\n", time_spent);
    return 0;
}
