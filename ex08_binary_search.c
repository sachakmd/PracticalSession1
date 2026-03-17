#include <stdio.h>

int main(void)
{
    int tab[] = {3, 7, 12, 18, 25, 31, 42, 56};
    int size = 8;
    int target = 25;
    int left = 0;
    int right = size - 1;
    int found = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (tab[mid] == target)
        {
            found = mid;
            break;
        }
        else if (tab[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (found != -1)
        printf("Valeur %d trouvee a l'indice %d\n", target, found);
    else
        printf("Valeur %d non trouvee\n", target);
    return 0;
}
