#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int tab[], int size)
{
    int i, j, minIndex, temp;
    for (i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (tab[j] < tab[minIndex])
            {
                minIndex = j;
            }
        }
        temp = tab[i];
        tab[i] = tab[minIndex];
        tab[minIndex] = temp;
    }
}

int main(void)
{
    int size = 10000;
    int *tab = malloc(size * sizeof(int));
    int i;
    srand((unsigned int)time(NULL));
    for (i = 0; i < size; i++)
    {
        tab[i] = rand() % 100000;
    }
    clock_t start = clock();
    selectionSort(tab, size);
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Temps de tri pour %d elements : %f secondes\n", size, time_spent);
    free(tab);
    return 0;
}
