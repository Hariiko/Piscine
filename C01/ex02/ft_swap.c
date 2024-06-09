#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
}

/*int main()
{
    int a = 4;
    int b = 3;

    printf("%d",a);
    printf("%d",b);

    ft_swap(&a,&b);

    printf("%d",a);
    printf("%d",b);
}*/