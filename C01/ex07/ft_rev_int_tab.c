#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int temp[size];
    int i = 0;
    int j;

    while (size > 0)
    {
        temp[i++] = tab[--size];
    }

	while(j < i)
	{
		tab[j] = temp[j];
		j++;
	}
}

/*int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Arreglo original: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Llama a la función ft_rev_int_tab
    ft_rev_int_tab(array, size);

    printf("Arreglo invertido: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}*/