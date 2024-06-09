#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i = 1;
    int j = 0;
    while(i< size)
    {
        while(j < size-1)
        {
            if (tab[j] > tab[j+1])
            {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
            j++;
        }
        i++;
    }
}

/*int main()
{
    int array[] = {8, 3, 6, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

     printf("Arreglo original: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    ft_sort_int_tab(array, size);
    
     printf("Arreglo invertido: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}*/