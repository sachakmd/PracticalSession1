#include <stdio.h>

int main(void)
{
    int tab[] = {4, 8, 15, 16, 23, 42};
    int size = 6;
    int target = 15;
    int found = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        if (tab[i] == target)
        {
            printf("Valeur %d trouvee a l'indice %d\n", target, i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Valeur %d non trouvee\n", target);
    }
    return 0;
}
