#include <stdio.h>

void printArray(int tab[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(void)
{
    int tab[] = {64, 25, 12, 22, 11};
    int size = 5;
    int i, j, minIndex, temp;
    printf("Avant tri : ");
    printArray(tab, size);
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
    printf("Apres tri : ");
    printArray(tab, size);
    return 0;
}
